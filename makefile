clean:
	rm UnitTestClass.o class.o UnitTest

class.o:
	g++ -c class.cpp

UnitTestClass.o:
	g++ -c UnitTestClass.cpp

UnitTest: UnitTestClass.o class.o
	g++ UnitTestClass.o class.o -lgtest -lgtest_main -lpthread -o UnitTest



