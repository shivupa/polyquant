import numpy as np
import matplotlib.pyplot as plt
import glob
import os

for filename in glob.glob("J*.dat"):
    data = np.loadtxt(filename)
    fig, ax = plt.subplots()
    ax.plot(data[:,0], data[:,2],label='col2')
    ax.plot(data[:,0], data[:,1],label='col1')
    ax.set_title(os.path.splitext(filename)[0])
    ax.legend()
    fig.savefig("{}.eps".format(os.path.splitext(filename)[0]))
    plt.close(fig)
