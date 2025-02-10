echo "Enter first value:"
read a
sum=$(echo "$a%2" |bc)
if [ $sum -eq 0 ]
then
	echo "Even"
else
	echo "Odd"
fi