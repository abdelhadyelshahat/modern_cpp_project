All: main.o print_get_funcs.o record_APIS.o 
	@g++ main.o print_get_funcs.o record_APIS.o  -o main

main.o : main.cpp 
	@g++ -c main.cpp -o main.o

print_get_funcs.o: print_get_funcs.cpp
	@g++ -c print_get_funcs.cpp -o print_get_funcs.o

record_APIS.o :
	@g++ -c record_APIS.cpp -o record_APIS.o
.PHONY: run 

run : 
	@./main