g++ -std=c++20 main.cpp -o main -g
if $?
then
	echo "compilation error"
else
	echo "compilation finish"
	./main
fi
