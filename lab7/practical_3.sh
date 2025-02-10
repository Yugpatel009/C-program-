echo "enter any value"
read a
echo "enter any value"
read b
sum=$(echo "$a +$b"|bc)
echo "$sum"
