g++ -std=c++20 mkd.cpp -o mkd -g
g++ -std=c++20 main.cpp -o main -g
g++ -std=c++20 bl.cpp -o bl -g

while true; do
	./mkd > 1.in
	./main < 1.in > 1.out
	./bl < 1.in > 2.out
	if diff 1.out 2.out; then
		printf "AC\n"
	else
		printf "\nWA\n\n"
		printf "data in:\n";
		cat 1.in
		printf "standard:\n";
		cat 2.out
		printf "test:\n"
		cat 1.out
		break
	fi
done