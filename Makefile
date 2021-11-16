all: compile run
f="main"
compile: 
	g++ $f.cpp -o $f.o
run: compile
	./$f.o
ss: compile run
	scrot -u pics/$f.png
	#scrot --autoselect '962,71,1906,546' pics/$f.png
	clear
