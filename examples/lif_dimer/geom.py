import numpy as np

# Geom https://pubs.acs.org/doi/10.1021/j100087a003

R = 1.760
theta_LiFLi = np.deg2rad(80.0)
theta_FLiF = np.deg2rad(100.0)

# https://mathworld.wolfram.com/IsoscelesTriangle.html

Li_pos = R * np.sin(theta_LiFLi * 0.5)
F_pos = R * np.sin(theta_FLiF * 0.5)

print("4")
print("")
print(
    "{:<10}    {:>20}  {:>20}  {:>20}".format(
        "{:<3}".format("Li"),
        "{: 16.10f}".format(Li_pos),
        "{: 16.10f}".format(0.0),
        "{: 16.10f}".format(0.0),
    )
)
print(
    "{:<10}    {:>20}  {:>20}  {:>20}".format(
        "{:<3}".format("Li"),
        "{: 16.10f}".format(-Li_pos),
        "{: 16.10f}".format(0.0),
        "{: 16.10f}".format(0.0),
    )
)
print(
    "{:<10}    {:>20}  {:>20}  {:>20}".format(
        "{:<3}".format("F"),
        "{: 16.10f}".format(0.0),
        "{: 16.10f}".format(F_pos),
        "{: 16.10f}".format(0.0),
    )
)
print(
    "{:<10}    {:>20}  {:>20}  {:>20}".format(
        "{:<3}".format("F"),
        "{: 16.10f}".format(0.0),
        "{: 16.10f}".format(-F_pos),
        "{: 16.10f}".format(0.0),
    )
)
