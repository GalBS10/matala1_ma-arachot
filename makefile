all: libclassloops.a libclassloops.so libclassrec.a libclassrec.so mains maindloop maindrec

loops: libclassloops.a

recursives:  libclassrec.a

recursived: libclassrec.so
	
loopd: libclassloops.so

mains: main.o libclassrec.a
	gcc -Wall -g -o mains main.o libclassrec.a

maindloop: advancedClassificationLoop.o main.o
	gcc -Wall -g -o maindloop main.o advancedClassificationLoop.o ./libclassloops.so

maindrec: advancedClassificationRecursion.o main.o
	gcc -Wall -g -o maindrec main.o advancedClassificationRecursion.o ./libclassrec.so

clean:
	rm -f *.o *.a *.so

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	gcc -Wall -g -c advancedClassificationRecursion.c

basicClassification.o: basicClassification.c NumClass.h
	gcc -Wall -g -c basicClassification.c	

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	gcc -Wall -g -c advancedClassificationLoop.c

libclassloops.a: advancedClassificationLoop.o basicClassification.o
	ar -rcs libclassloops.a advancedClassificationLoop.o basicClassification.o
	
libclassrec.a: advancedClassificationRecursion.o basicClassification.o
	ar -rcs libclassrec.a advancedClassificationRecursion.o basicClassification.o

libclassloops.so: advancedClassificationRecursion.o basicClassification.o
	gcc -Wall -g -c -fPIC basicClassification.c advancedClassificationLoop.c
	gcc -shared -o libclassloops.so advancedClassificationLoop.o basicClassification.o

libclassrec.so: advancedClassificationLoop.o basicClassification.o
	gcc -Wall -g -c -fPIC advancedClassificationRecursion.c basicClassification.c
	gcc -shared -o libclassrec.so advancedClassificationLoop.o basicClassification.o

main.o: main.c NumClass.h 
	gcc -Wall -g -c main.c 


