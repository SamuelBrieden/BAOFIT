#Main parameters
#Type of fit (BAOISO/BAOANISO/FS/FSBAOISO/FSBAOANISO): BAOANISO

#Include power spectrum (yes/no): yes
#FIT BAO to P0/P2/P4/P02/P024/P24/P04: P02
#k-range for P0 computation (double/double): 0.02 0.30
#k-range for P2 computation (double/double): 0.02 0.30
#k-range for P4 computation (double/double): 0.02 0.30
#FIT FS to P0/P2/P4/P02/P024/P24/P04: P024
#k-range for P0 computation (double/double): 0.02 0.15
#k-range for P2 computation (double/double): 0.02 0.15
#k-range for P4 computation (double/double): 0.02 0.15
#Number of chunks: 2

#Read input parameters for Power Spectrum
#Path to data1BAO:   /home/DATA/sbrieden/rustico_output/patchy_mocks/prerecon/original/Power_Spectrum_CMASS_N_V6C_0001.txt
#Path to data2BAO:   /home/DATA/sbrieden/rustico_output/patchy_mocks/prerecon/original/Power_Spectrum_CMASS_S_V6C_0001.txt
#Path to data1FS: /home/DATA/sbrieden/rustico_output/patchy_mocks/prerecon/original/Power_Spectrum_CMASS_N_V6C_0001.txt
#Path to data2FS: /home/DATA/sbrieden/rustico_output/patchy_mocks/prerecon/original/Power_Spectrum_CMASS_S_V6C_0001.txt
#Path to mocks1BAO/cov1:  ./test/CMASS_V6C_0001_1.cov
#Path to mocks2BAO/cov2:  ./test/CMASS_V6C_0001_2.cov
#Path to mocks1FS: none
#Path to mocks2FS: none
#number of Realizations: 1000
#Path to mask1 (none if no mask): none
#Path to mask2 (none if no mask): none
#Renormalize window (yes/no): no

#Read input parameters for Bispectrum
#Include bispectrum (yes/no): no
#Path to data1BAO: /users/hectorgm/eboss/elg_mocks_v1.0/bispectrum/data/Bispectrum_ELG_data_NGC_noheader.txt 
#Path to data2BAO: /users/hectorgm/eboss/elg_mocks_v1.0/bispectrum/data/Bispectrum_ELG_data_SGC_noheader.txt 
#Path to mocks1BAO: /users/hectorgm/eboss/elg_mocks_v1.0/bispectrum/qpm_mocks/Bispectrum_ELG_QPM_ngc_mock
#Path to mocks2BAO: /users/hectorgm/eboss/elg_mocks_v1.0/bispectrum/qpm_mocks/Bispectrum_ELG_QPM_sgc_mock
#k-range for B0 computation (double/double): 0.02 0.30
#Path to data1FS: /users/hectorgm/eboss/elg_mocks_v1.0/bispectrum/data/Bispectrum_ELG_data_NGC_noheader.txt
#Path to data2FS: /users/hectorgm/eboss/elg_mocks_v1.0/bispectrum/data/Bispectrum_ELG_data_SGC_noheader.txt
#Path to mocks1FS: /users/hectorgm/eboss/elg_mocks_v1.0/bispectrum/qpm_mocks/Bispectrum_ELG_QPM_ngc_mock
#Path to mocks2FS: /users/hectorgm/eboss/elg_mocks_v1.0/bispectrum/qpm_mocks/Bispectrum_ELG_QPM_sgc_mock
#k-range for B0 computation (double/double): 0.02 0.15

#BAO Polynomial fit
#Order of polynomial broadband: 5
#Sigma variables (effective/para-perp): para-perp
#Sigma variables independent (yes/no): yes
#f-factor for Sigma dependence: 0.8204
#Smoothing scale in Mpc/h (only for BAOANISO): 15

#Sigma_variables
#Sigma_0 (free/fixed/gaussian): fixed
#Sigma_0 (mean/devstd): 9 1
#Sigma_2 (free/fixed/gaussian): fixed
#Sigma_2 (mean/devstd): 10 1
#Sigma_4 (free/fixed/gaussian): fixed
#Sigma_4 (mean/devstd): 9 3
#Sigma_para (free/fixed/gaussian): fixed
#Sigma_para (mean/devstd): 7.0 3
#Sigma_perp (free/fixed/gaussian): fixed
#Sigma_perp (mean/devstd): 2.0 3

#Priors on alpha: 0.5 1.5
#Path to smooth Plin: /home/sbrieden/datatools/code_baofitv1/linear_ps/Pk_smkirkby_ebossfiducialELG085_matterpower_ebossfiducialELG085_15.txt
#Path to Olin: /home/sbrieden/datatools/code_baofitv1/linear_ps/Olinkirkby_ebossfiducialELG085_matterpower_ebossfiducialELG085_15.txt
#Type of fit (mcmc/analytic): mcmc

#For mcmc fit
#Number of threads: 1
#Use proposal covariance (yes/no): yes
#Path to proposal covariance: /home/DATA/sbrieden/baofit_output/patchy_mocks/prerecon/original/aniso/P02/mcmcBAOANISO_output_CMASS_V6C_0001.txt
#Maximum number of mcmic accepted steps: 1080000

#For BAO anaylytical fit
#Interval for alpha: 0.005

#For FS mcmc fit
#Input file from PTcool: /home/sbrieden/datatools/ptcool/continuousPrecisePerturbation_theory_ebossfiducialLRG072_matterpower.dat
#Type of PT-Model (linear/1L-SPT/2L-SPT/1L-RPT/2L-RPT): 2L-RPT
#Type of RSD-model (Kaiser87/Scoccimarro04/TNS10): TNS10
#Type of FoG-model (Exponential/Lorentzian): Lorentzian
#Type of model for bispectrum (tree-level/1L-SPT/GilMarin14): GilMarin14
#Lagrangian local bias b2s2 (yes/no): yes
#Lagrangian local bias b3nl (yes/no): yes
#RSD-fit (yes/no): yes
#sigma8 free parameter (yes/no): no
#FoG free parameter (yes/no): yes
#Same FoG parameter for bispectrum (yes/no): no

#Read out parameters
#Path to output: ./test
#Identifier of output: CMASS_V6C_0001
#Plot best-fit (yes/no): yes
