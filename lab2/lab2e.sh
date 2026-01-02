echo "enter a number"
read a
if [ $a -lt 0 ]
then
	echo "the number is negative"
else
	if [ $a -eq 0 ]
	then
		echo "the number is zero"
	else
		echo "the number is positive"
	fi
fi

