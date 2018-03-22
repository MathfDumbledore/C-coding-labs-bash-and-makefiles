#!/bin/bash

DirName=$(date +%s)
if [ -d "$DirName" ]; then #checking if a directory with the current timestamp exists
	echo "There already exists $DirName"
else
	mkdir $DirName #if it doesnt exist making one
fi

cd $DirName #entering the directory

for i in {1..10} #creating files named randomNumber.dat where Number is from 1-10
do
	touch random${i}.dat
		for n in {1..50} #running random in each file 50 times
		do
			echo "$RANDOM" >> random${i}.dat #storing the variables in random
		done
done
exit 0
