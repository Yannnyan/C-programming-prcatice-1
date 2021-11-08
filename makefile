all: libclassloops.so libclassloops.a libclassrec.so libclassrec.a mains maindloop maindrec
mains: main.o libclassrec.a
	gcc -Wall -g -o mains main.o libclassrec.a -lm
maindloop: main.o libclassloops.so
	gcc -Wall -g -o maindloop main.o ./libclassloops.so -lm
maindrec: main.o libclassrec.so
	gcc -Wall -g -o maindrec main.o ./libclassrec.so -lm
loopd: libclassloops.so
recursives: libclassrec.a
recursived: libclassrec.so
loops: libclassloops.a

libclassloops.a: basicClassification.o advancedClassificationLoop.o
	ar -rcs libclassloops.a basicClassification.o advancedClassificationLoop.o
libclassloops.so: basicClassification.o advancedClassificationLoop.o
	gcc -shared -o libclassloops.so advancedClassificationLoop.o basicClassification.o
libclassrec.a: basicClassification.o advancedClassificationRecursion.o
	ar -rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o
libclassrec.so: basicClassification.o advancedClassificationRecursion.o
	gcc -shared -o libclassrec.so advancedClassificationRecursion.o basicClassification.o

basicClassification.o: basicClassification.c NumClass.h
	gcc -Wall -g -c basicClassification.c -lm
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	gcc -Wall -g -c advancedClassificationLoop.c -lm
advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h 
	gcc -Wall -g -c advancedClassificationRecursion.c -lm
main.o: main.c NumClass.h
	gcc -Wall -g -c main.c 

.PHONY: clean all

clean: 
	rm -f *.o *.a *.so *.out mains maindrec maindloop
