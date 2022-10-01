. compile.sh
if $?
then
	echo "compilation error"
else
	echo "compilation finish"
	./main < 1.in
	./main < 2.in
	./main < 3.in
	./main < 4.in
fi
