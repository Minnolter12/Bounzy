hello:
	echo "Hello from make"

bounzy:
	gcc main.c -o bounzy -lraylib -lGL -lm -lpthread -ldl -lrt -lX11 

run: bounzy
	./bounzy