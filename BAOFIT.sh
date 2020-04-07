#!/bin/bash
#SBATCH -p normal #partition (queue) ##Don't change this
#SBATCH -N 1 #number of nodes
#SBATCH -n 8 #number of cores
#SBATCH --mem 2000 #memory pool ##Mb of RAM
#SBATCH -t 20-20:00 # time limit (D-HH:MM)
#SBATCH -o /home/sbrieden/mockchallenge_output.o #path file to store output
#SBATCH -e /home/sbrieden/mockchallenge_output.e #path file to store error messages
#SBATCH --job-name baofit_stage0 #job name

cd /home/sbrieden/datatools/BAOFIT

git checkout mockchallenge_baofit_stage0

export OMP_NUM_THREADS=8

source compile.sh

time ./file.out iterate_params_mockchallenge_baofit_stage0.c
