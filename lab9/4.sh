echo 'Enter two values:'
read a
read b

if [ $a -eq $b ]
then 
	echo $a' is Equal'
else
	echo $b' is Not Equal'
fi