output:  DVD.o Book.o LibraryItem.o AudioCD.o LibraryItemCollection.o main2.o
	g++ DVD.o Book.o LibraryItem.o AudioCD.o LibraryItemCollection.o main2.o -o output

DVD.o: DVD.cpp
	g++ -c DVD.cpp

Book.o: Book.cpp
	g++ -c Book.cpp

LibraryItem.o: LibraryItem.cpp
	g++ -c LibraryItem.cpp

AudioCD.o: AudioCD.cpp
	g++ -c AudioCD.cpp

LibraryItemCollection.o: LibraryItemCollection.cpp
	g++ -c LibraryItemCollection.cpp

main2.o: main2.cpp 
	g++ -c main2.cpp

clean:
	rm *.o output