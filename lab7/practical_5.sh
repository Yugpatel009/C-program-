echo "enter any value"
read p
echo "enter any value"
read r
echo "enter any value"
read t
si=$(echo "($p*$r*$t)/100"|bc)
echo "$si"