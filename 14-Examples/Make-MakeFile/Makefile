build: ofile link run  # Ana hedef, tüm alt hedefleri çalıştırır

ofile:  # Bu hedef, nesne dosyalarını oluşturur
	g++ -c main.cpp library.cpp

link:  # Bu hedef, nesne dosyalarını birleştirir ve programı oluşturur
	g++ main.o library.o -o program.exe

run:  # Bu hedef, programı çalıştırır
	program.exe

#terminalde "mingw32-make" komutu ile programı çalıştırabiliriz.