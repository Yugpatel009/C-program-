echo 'Enter two values:'
read a
read b

if [ $a -gt $b ]
then 
	echo $a' is Max'
else
	echo $b' is Max'
fi