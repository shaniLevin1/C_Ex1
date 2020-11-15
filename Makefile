CC=gcc
AR=ar
OBJECTS_MAIN=Main.o
OBJECTS_LIB=basicMath.o power.o
FLAGS= -Wall -g

# Creates all the necessary files.
all: mains maind	

# Creates a static library containing the file objects
mains: myMaths $(OBJECTS_MAIN) 
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libmyMath.a 

# Creates a shared library containing the file objects
maind: myMathd $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o maind $(OBJECTS_MAIN) ./libmyMath.so

# Creates a file that links main and the static library
myMathd: $(OBJECTS_LIB)
	$(CC) -shared -o libmyMath.so $(OBJECTS_LIB)

# Creates a file that links main and the shared library
myMaths: $(OBJECTS_LIB)
	$(AR) -rcs libmyMath.a $(OBJECTS_LIB)	

# Links power and .h
power.o: power.c myMath.h
	$(CC) $(FLAGS) -fPIC -c power.c

# Links basicMath and .h
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c

# Links Main and .h
Main.o: Main.c myMath.h  
	$(CC) $(FLAGS) -c Main.c 

# Removes all .o .a and .so files. also mains and maind
clean:
	rm -f *.o *.a *.so mains maind
