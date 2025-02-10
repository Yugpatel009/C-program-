echo "enter any value"
read r
area=$(echo "3.14 *$r*$r"|bc)
echo "$area"