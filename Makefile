.PHONY = clean

file = algo
print = "Alguma coisa"

print: 
	echo ${print}

exe: ${file}.c
	gcc ${file}.c -o ${file}.o
	
tc:
	echo ${print}
	pwd
        
cl:
	clear

