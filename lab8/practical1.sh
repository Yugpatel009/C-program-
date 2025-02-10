echo "Press 1 for Addition"
echo "Press 2 for Subtractoin"
echo "Press 3 for Multiplication"
echo "Press 4 for Division"
read n

echo "Enter first value:"
read a
echo "Enter second value:"
read b

if [ $n -eq 1 ]
then
	ans=$(echo "$a+$b" | bc)
fi
if [ $n -eq 2 ]
then
	ans=$(echo "$a-$b" | bc)
fi
if [ $n -eq 3 ]
then
	ans=$(echo "$a*$b" | bc)
fi
if [ $n -eq 4 ]
then
	ans=$(echo "$a/$b" | bc)
fi

echo "Answer is:"$ans
