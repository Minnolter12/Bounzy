bounzy:
	gcc src/main.c src/ball.c -o bounzy -lraylib -lGL -lm -lpthread -ldl -lrt -lX11 

run: bounzy
	./bounzy