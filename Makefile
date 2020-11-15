#CC=gcc
#AR=ar
#OBJECTS_MAIN=main.o
#OBJECTS_LIB=mylib.o
#FLAGS= -Wall -g
#izor gat et hasifriot ve gam et haexecutable shelanu
all: libmyMath.so libmyMath.a mains maind	
#main:main.c power.c basicMath.c myMath.h
#gcc main.c power.c basicMath.c myMath.h -o main
#ikampel et kol hasifrot
#ifendif mains 
mains: main.o mymaths 
	gcc -Wall -g -o mains main.o libmyMath.a

#endif
	
#ifendif maind
#beizrirat sifria dinamit gcc meriz lahen ein zoreh lageshet le sifria dinamit
maind: main.o mymathd
	gcc -Wall -g -o maind main.o ./libmyMath.so
#endif
#ezirat sifria statit
#rak araza
mymaths : libmyMath.a
	
#ezirat sifria dinamit
#rak araza
mymathd : libmyMath.so
	
#sifria dinamit
#ani mevakesh mi gcc leiazer li sifria dinamit hayav leathil im lib
libmyMath.so: basicMath.o power.o
	gcc -shared -o libmyMath.so basicMath.o power.o
#sifria statit
libmyMath.a: basicMath.o power.o 
	$(AR) -rcs libmyMath.a basicMath.o power.o
#hafunkziot sheli basicMath.c power.c main.c
#bemida ve esh shinui be basic math tekampel et hakovez c shelo mehadash	
BasicMath.o: BasicMath.c myMath.h
	gcc -Wall -g -c BasicMath.c
#bemida ve esh shinui be ehad hakvazim shel power.c o mymath.h tekampel oto mehadash
power.o:power.c myMath.h 
	gcc -Wall -g -c power.c

main.o: main.c myMath.h  
	gcc -Wall -g -c main.c 

.PHONY: clean all
#remove mitbazea rak ad .so yashir yashir rak maind mains
clean:
	rm -f *.o *.a *.so mains maind
