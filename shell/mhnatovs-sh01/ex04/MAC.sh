ifconfig | grep -v media | awk '/ether/ {print $2}'
