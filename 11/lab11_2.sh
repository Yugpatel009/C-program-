echo "Enter your choice"

read str

case $str in
	m|M) echo "male";;
	f|F) echo "female";;
	*) echo "valid choice";;
esac