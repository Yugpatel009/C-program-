echo 'Enter a year:'
read year

if [[ $(echo "$year%4" | bc) -eq 0 && $(echo "$year%100" | bc ) -ne 0 || $(echo "$year%400" | bc) -eq 0 ]]
then 
	echo $year' is Leap year'

else
	echo $year' is Not Leap year'
fi