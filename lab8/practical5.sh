echo "Enter first value:"
read a
sum=$(echo "$a%5" |bc)

if [ $sum -eq 0 ]
then
	echo "Divided"
else
	echo "Not Divided"
fi