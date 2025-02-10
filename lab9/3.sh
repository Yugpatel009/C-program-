echo 'Enter a values:'
read a

if [ $(echo "$a%2" | bc) -eq 0 ]
then 
	echo $a' is Even'
else
	echo $a' is Odd'
fi