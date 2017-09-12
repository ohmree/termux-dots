#!/data/data/com.termux/files/usr/bin/bash
while true
do
    if [ $? -ne 1 ]
    then
        ./rand "$1"
	sleep 1
    fi
done
