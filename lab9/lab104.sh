echo "enter value here:"
read a
if [[ $a -eq 1 ]]
then
	echo "sunday"
elif [[ $a -eq 2 ]]
then
	echo "Monday" 
elif [[ $a -eq 3 ]]
then
	echo "Tuesday"
elif [[ $a -eq 4 ]]
then
	echo "wednesday"
elif [[ $a -eq 5 ]]
then
	echo "thrusday"
elif [[ $a -eq 6 ]]
then
	echo "friday"
elif [[ $a -eq 7 ]]
then
	echo "saturday"
fi