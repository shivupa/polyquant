import numpy as np
import scipy as sp
import scipy.optimize as spo
import matplotlib.pyplot as plt


def pot(r, alpha, cutoff):
    return (-alpha / (2 * (r ** 4))) * (1 - np.exp(-(r ** 6) / (cutoff ** 6)))


r = np.arange(35, 0, -0.1)
r = r[::-1]

atom_types = [
    "H",
    "F",
    "Cl",
    "Br",
    "I",
    "CTE",
    "CTR",
    "CBR",
    "CDI",
    "NTE",
    "NTR2",
    "NPI2",
    "NDI",
    "OTE",
    "OTR4",
    "OPI2",
    "STE",
    "STR4",
    "SPI2",
    "PTE",
]
alpha = {
    "alpha_miller": [
        0.387,
        0.296,
        2.315,
        3.013,
        5.415,
        1.061,
        1.352,
        1.896,
        1.283,
        0.964,
        1.030,
        1.090,
        0.956,
        0.637,
        0.569,
        0.274,
        3.000,
        3.729,
        2.700,
        1.538,
    ],
    "alpha_exp": [
        0.358,
        0.807,
        1.620,
        2.023,
        2.655,
        1.443,
        1.443,
        1.443,
        1.443,
        0.997,
        0.997,
        0.997,
        0.997,
        0.922,
        0.922,
        0.922,
        1.813,
        1.813,
        1.813,
        1.813,
    ],
    "alpha_m1": [
        0.202,
        0.872,
        2.198,
        3.023,
        4.725,
        1.441,
        1.484,
        1.543,
        1.397,
        1.250,
        1.191,
        1.331,
        1.031,
        1.249,
        1.158,
        1.175,
        2.060,
        2.630,
        1.886,
        1.437,
    ],
    "alpha_m2": [
        0.303,
        1.021,
        2.260,
        2.946,
        4.781,
        1.203,
        1.381,
        1.575,
        1.238,
        1.156,
        1.270,
        1.272,
        1.054,
        1.287,
        1.189,
        1.200,
        2.062,
        3.045,
        1.945,
        2.025,
    ],
}

cutoff = [
    1.54,
    1.63,
    2.06,
    2.19,
    2.38,
    1.90,
    1.90,
    1.90,
    1.90,
    1.79,
    1.79,
    1.79,
    1.79,
    1.71,
    1.71,
    1.71,
    2.14,
    2.14,
    2.14,
    2.23,
]


gaussian_exp = np.array(
    [
        0.001,
        0.002,
        0.004,
        0.008,
        0.016,
        0.032,
        0.064,
        0.128,
        0.256,
        0.512,
        1.0,
        2.0,
        3.0,
        4.0,
        5.0,
        6.0,
        7.0,
        8.0,
        9.0,
        10.0,
        20.0,
        30.0,
        40.0,
        50.0,
        100.0,
        250.0
    ]
)

gaussian_coeff_guess = np.ones_like(gaussian_exp)


def fit(x, *gaussian_coeff):
    val = 0
    for a, c in zip(gaussian_exp, gaussian_coeff):
        val += c * np.exp(-a * x * x)
    return val

fitted_params = {}

for a in alpha.keys():
    print("*" * 79)
    print("*" * 79)
    print("{}".format(a))
    print("*" * 79)
    fitted_params[a] = {}
    fig = plt.figure(figsize=(7, 5))
    for i in range(len(alpha[a])):
        alpha[a][i]*=1.88972612457**3
        cutoff[i]=2.0
        print("*" * 79)
        print("atom type: {:>10}".format(atom_types[i]))
        print("alpha  : {:>10.6f}".format(alpha[a][i]))
        print("cutoff : {:>10.6f}".format(cutoff[i]))
        print("gaussian_exp")
        print(gaussian_exp)
        print("gaussian_coeff")
        x = r
        true_y = pot(r, alpha[a][i], cutoff[i])
        popt, pcov = spo.curve_fit(fit, x, true_y, p0=gaussian_coeff_guess)
        fitted_params[a][atom_types[i]] = popt
        gaussian_coeff_guess=popt
        print(popt)
        # plt.plot(x,true_y,linestyle='--',label="true")
        plt.plot(x, true_y-fit(x, *popt), label="{} difference".format(atom_types[i]))
    plt.legend()
    plt.xlim(-1, 40)
    plt.ylim(-0.0007, 0.0007)
    plt.title(a)
    plt.tight_layout()
    plt.savefig("{}_difference.eps".format(a))

print("*" * 79)
print("")

# generate unordered maps from dictionary
for unordered_map in fitted_params.keys():
    print("std::unordered_map<std::string, xt::xarray<double> > {} = {{".format(unordered_map))
    count = 1
    for key in fitted_params[unordered_map]:
        print("{{ \"{}\", {{ ".format(key),end="")
        for i in range(len(fitted_params[unordered_map][key])-1):
            print("{}, ".format(fitted_params[unordered_map][key][i]), end="")
        print("{} ".format(fitted_params[unordered_map][key][-1]), end="")
        if count == len(fitted_params[unordered_map]):
            print("} }")
        else:
            print("} },")
            count += 1
    print("};")
    print("")


# generate operator exponents

print("xt::xarray<double> operator_exponents = { ", end="")
for i in range(len(gaussian_exp)-1):
    print("{}, ".format(gaussian_exp[i]),end="")
print("{} }};".format(gaussian_exp[-1]))

