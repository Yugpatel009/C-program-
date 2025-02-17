echo "Enter your choice"

read str

case $str in
	a|e|i|o|u|A|E|I|O|U) echo "String is vowel";;
	*) echo "String is not vowel";;
esac