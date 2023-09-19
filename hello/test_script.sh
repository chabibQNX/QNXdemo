#!/bin/ksh



if command -v /tmp/hello; then

	echo "testing scenario 1, no arguments passed"
	
	if /tmp/hello | grep -q 'has to be run'; then
  		echo "matched"
  	else
  		echo "no arguments scenario failed"
  		exit 1
	fi
	
	echo "testing scenario 2, arguments passed"
	
	if /tmp/hello 'hello world' | grep -q 'hello world'; then
  		echo "matched"
  	else
  		echo "with arguments failed"
  		exit 1
	fi

else
	echo "File does not exist"
	exit 1
fi

exit 0