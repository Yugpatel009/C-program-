echo 'Enter marks of three subject:'
read a
read b
read c
ans=$(echo "$a+$b+$c" | bc)
per=$(echo "$ans/3" | bc)
echo 'Total '$ans
echo 'Percentage '$per
if [ $per -gt 90 ]
then 
	echo 'A Class'
elif [[ $per -ge 80 &&  $per -lt 90 ]]
then
	echo 'B Class'
elif [[ $per -ge 70 &&  $b -lt 60 ]]
then
	echo 'C Class'
elif [[ $per -ge 60 &&  $b -le 50 ]]
then
	echo 'D Class'
elif [ $per -lt 50 ]
then 
	echo ' You are Fail'
else
	echo 'Enter Valid Marks'
fi