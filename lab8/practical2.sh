echo "Enter first value:"
read a
echo "Enter second value:"
read b
if [ $a -gt $b ]
then
	echo $a" is Max"
else
	echo $b" is Max"
fi