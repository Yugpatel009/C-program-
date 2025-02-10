echo 'Enter two values:'
read a
read b

if [ $a -eq $b ]
then 
	echo 'Both are equal'
else
	if [[ $a -gt $b ]]
	then
		echo " $a is maximum"
	else
		echo " $b is maximum"
	fi
fi