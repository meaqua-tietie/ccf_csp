date > date.txt

read currentTime < date.txt

git add .
git commit -m "$currentTime"
git push origin master

rm date.txt
unset currentTime
