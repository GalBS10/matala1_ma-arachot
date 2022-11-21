all: libclassloops.a libclassloops.so libclassrec.a libclassrec.so mains maindloop maindrec

loops: advancedClassificationLoop.o basicClassification.o
	ar rcu libclassloops.a basicClassification.o advancedClassificationLoop.o

recursives: advancedClassificationRecursion.o basicClassification.o
	ar rcu libclassrec.a advancedClassificationRecursion.o basicClassification.o

recursived: advancedClassificationRecursion.o basicClassification.o
	ar rcu libclassrec.so advancedClassificationRecursion.o basicClassification.o

loopd: advancedClassificationLoop.o basicClassification.o
	ar rcu libclassloops.so advancedClassificationLoop.o basicClassification.o

mains: Main.o libclassrec.a
	gcc -Wall -g -o mains Main.o libclassrec.a

maindloop: advancedClassificationLoop.o Main.o
	gcc -Wall -g -o maindloop Main.o advancedClassificationLoop.o ./libclassloops.so

maindrec: advancedClassificationRecursion.o Main.o
	gcc -Wall -g -o maindrec Main.o advancedClassificationRecursion.o ./libclassrec.so

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
	gcc -shared -o libclassloops.so advancedClassificationRecursion.o basicClassification.o

libclassrec.so: advancedClassificationLoop.o basicClassification.o
	gcc -shared -o libclassrec.so advancedClassificationLoop.o basicClassification.o

Main.o: Main.c NumClass.h 
	gcc -Wall -g -c Main.c NumClass.h


