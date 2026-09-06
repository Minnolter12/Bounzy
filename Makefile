bounzy:
	gcc main.c ball.c -o bounzy -lraylib -lGL -lm -lpthread -ldl -lrt -lX11 

run: bounzy
	./bounzy