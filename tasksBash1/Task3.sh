#!/bin/bash
DIR=1
for file in *
do
	if [ -d "$file" ]; then
		echo "there are more directories in the $PWD named $file" 
		#checking if directories exist in the current directory if they exist getting the current directory and the directory name
		DIR=0 #the latter statement cannot be true any longer
	fi

done
	
	if [ $DIR -eq 1 ]; then #only true if the first if never was true
		echo "there are no more directories in the current directory $PWD"
	fi
echo "suceess exiting with 0"
exit 0
