import numpy as np


dm_a = np.loadtxt("DM_electron_alpha.txt")
try:
    dm_b = np.loadtxt("DM_electron_beta.txt")
except:
    dm_b = dm_a
s = np.loadtxt("overlap0.txt")
print(np.trace(dm_a @ s))
print(np.trace(dm_b @ s))
print(np.trace(dm_a @ s) + np.trace(dm_b @ s))



fc_dm_a = np.loadtxt("FC_DM_electron_alpha.txt")
try:
    fc_dm_b = np.loadtxt("FC_DM_electron_beta.txt")
except:
    fc_dm_b = fc_dm_a
s = np.loadtxt("overlap0.txt")
print(np.trace(fc_dm_a @ s))
print(np.trace(fc_dm_b @ s))
print(np.trace(fc_dm_a @ s) + np.trace(fc_dm_b @ s))

fc_op = np.loadtxt("FCop_electron.txt")
hcore = np.loadtxt("H_core_electron.txt")
print(0.5 * np.sum((np.multiply((fc_dm_a + fc_dm_b), hcore) + np.multiply(fc_dm_a, fc_op) + np.multiply(fc_dm_b, fc_op))))
