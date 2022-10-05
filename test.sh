#!/bash/bin
cd DAY01/
echo "DAY01"
echo "CAN'T CHECK"
cd ../
echo ""
cd DAY02/
echo "DAY02"
echo ""
echo "Count Files"
sh count_files.sh
echo "Find SH"
sh find_sh.sh
echo "Gotta catch Them All MARTIN"
cat DAY02/passwd | ./gotta_catch_them_all.sh martin
echo "How many are we Paris"
cat DAY02/students.csv | ./how_many_are_we.sh PAR
echo "End of tests - Julien Grémy"
