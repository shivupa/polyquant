import numpy as np
import scipy as sp
import matplotlib.pyplot as plt


def pot(r, alpha, cutoff):
    return (alpha/(2*(r**4)))*(1-np.exp(-(r**6)/(cutoff**6)))

r = np.arange(100,0,-0.1)
r = r[::-1]

alpha = [0.0,
        4.50,
        1.38,
        164,
        37.7,
        20.5,
        11.3,
        7.4,
        5.3,
        3.74,
        2.66,
        163,
        71.2,
        57.8,
        37.3,
        25,
        19.4,
        14.6,
        11.1]

fig = plt.figure()
for i in alpha:
    pol = pot(r, i, 2.0)
    plt.plot(r, pol)


plt.yscale("log")
plt.ylim(1e-5,1e-3)
plt.show()
