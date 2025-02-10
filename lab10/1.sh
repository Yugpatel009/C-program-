echo 'Enter three values here:'
read a
read b
read c
if [[ $a -gt $b &&  $a -gt $c ]]
then 
	echo $a' is Maximum'
elif [[ $b -gt $a &&  $b -gt $c ]]
then
	echo $b' is Maximum'
else
	echo $c' is Maximum'
fi