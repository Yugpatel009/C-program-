echo "Enter the number";
read n

sum=0
i=1
avg=0
while [[ $i -le $n ]]
 do
 	read a
	sum=$((sum+a))
	i=$((i+1))
done
echo "$sum"
avg=$((sum/n))
echo "$avg"