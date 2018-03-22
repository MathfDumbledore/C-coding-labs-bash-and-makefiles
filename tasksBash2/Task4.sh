#!/bin/bash

check()
{
	if [ -d "$1" ]; then #checking for directories in the current directory
		echo "a directory in $PWD is named $1"
	elif [ -f "$1" ]; then #checking for files
		echo "a file in $PWD is named $1"
	elif [ ! -e "$1" ]; then #checking if the file doesnt exist should always be false
		echo "a file $1 in $PWD doesnt exist"
	fi
}

for file in *
do
	check $file #calling the function for each file in the directory
done

exit 0
