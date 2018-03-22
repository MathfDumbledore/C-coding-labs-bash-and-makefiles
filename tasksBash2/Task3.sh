#!/bin/bash

dirCheck()
{
		if [ -d "$1" ]; then #chekin if the directoy exists
		echo "$1 exists"
		else
		echo "the directory $1 doesnt exist one will be made"
		mkdir $1 #making a directory with the name passed
		cd $1 #accessing the directory
		pwd #printing current location this is not the location on the session the user sees in the terminal
		fi
	
}

dirCheck "randDirectory"
exit 0
