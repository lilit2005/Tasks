#!/bin/bash

echo "Input component name: OS, cpu, memory, swap"             
read answer

#OS and version
if [ $answer == OS ]
then
	uname
	uname -r
#cpu
elif [ $answer == cpu ]
then
        lscpu
#physical memory
elif [ $answer == memory ]
then
	grep MemTotal /proc/meminfo
#swap
elif [ $answer == swap ]
then
	swapon -s
else
	echo "Try again..."
	exit 0
fi

