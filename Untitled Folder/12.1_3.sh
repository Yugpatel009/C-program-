echo "Enter the number you want to give factorial";

read n
fact=1
i=1
while [[ $i -le $n ]] 
do
	fact=$((fact*i))
	i=$((i+1))
done

echo "$fact"