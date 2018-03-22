#!/bin/bash


for file in *
do
	if [ -d "$file" ]; then #checking for directories in the current directory
		echo "a directory in $PWD is named $file"
	elif [ -f "$file" ]; then #checking for files
		echo "a file in $PWD is named $file"
	elif [ ! -e "$file" ]; then #checking if the file doesnt exist should always be false
		echo "a file $file in $PWD doesnt exist"
	fi
done
exit 0
