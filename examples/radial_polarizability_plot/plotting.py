import numpy as np
import scipy as sp
import matplotlib.pyplot as plt


def pot(r, alpha, cutoff):
    return (alpha / (2 * (r ** 4))) * (1 - np.exp(-(r ** 6) / (cutoff ** 6)))


r = np.arange(30, 0, -0.1)
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

for a in alpha.keys():
    fig = plt.figure(figsize=(7,5))
    for i,j in zip(alpha[a],atom_types):
        pol = pot(r, i, 2.0)
        plt.plot(r, pol,label=j)
    plt.yscale("log")
    plt.ylim(1e-5,1e-3)
    plt.title(a)
    plt.legend()
    plt.tight_layout()
    plt.savefig("{}.eps".format(a))

