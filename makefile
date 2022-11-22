ll: loops recursives recursived loopd mains maindloop maindrec

loops: libclassloops.a

recursives: libclassrec.a

recursived: libclassrec.so

loopd: libclassloops.so

mains: main.o libclassrec.a
	gcc -Wall -g -o mains main.o libclassrec.a

maindloop: main.o libclassloops.so
	gcc -Wall -g -o maindloop main.o ./libclassloops.so

maindrec: main.o libclassrec.so 
	gcc -Wall -g -o maindrec main.o ./libclassrec.so

main.o: main.c NumClass.h 
	gcc -Wall -g -c main.c

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	gcc -Wall -g -fPIC -c advancedClassificationLoop.c NumClass.h

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	gcc -Wall -g -fPIC -c advancedClassificationRecursion.c NumClass.h

basicClassification.o: basicClassification.c NumClass.h
	gcc -Wall -g -c basicClassification.c NumClass.h

libclassloops.a: advancedClassificationLoop.o basicClassification.o
	ar -rcs libclassloops.a advancedClassificationLoop.o basicClassification.o