import numpy as np
import h5py
import matplotlib.pyplot as plt

f = h5py.File('PsH.s006.stat.h5', 'r')

gofr_eup_p = np.mean(f["gofr_e_0_2"].get("value"), axis=0)
gofr_edn_p = np.mean(f["gofr_e_1_2"].get("value"), axis=0)
gofr_e_p = gofr_eup_p + gofr_edn_p

print(gofr_eup_p.shape)

min_r = 0
max_r = 5
r = np.linspace(min_r, max_r, len(gofr_e_p))

fig, ax = plt.subplots(1,3)
fig.set_size_inches(9,3)
ax[0].plot(r, gofr_eup_p)
ax[0].set_title = r"$g(r)_{e\uparrow p}$"
ax[1].plot(r, gofr_edn_p)
ax[1].set_title = r"$g(r)_{e\downarrow p}$"
ax[2].plot(r, gofr_e_p)
ax[2].set_title = r"$g(r)_{e\uparrow\downarrow p}$"
print(gofr_e_p[0])
fig.set_tight_layout(True)
plt.savefig("gofr.eps")
