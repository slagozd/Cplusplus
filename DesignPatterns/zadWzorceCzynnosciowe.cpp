#include <iostream>
#include <ctime>
#include <iomanip>
#include <chrono>

using namespace std;

//Abstract class
class Teacher
{
public:

    void teachMethod() {
		learnReading();
		learnWriting();
		learnCounting();
		learnReadCurrentTime();
//		concreteOperation();
		hook();
	}
	virtual void learnReading() = 0;
	virtual void learnWriting() = 0;
	virtual void learnCounting() = 0;
	virtual void learnReadCurrentTime() = 0;
//	void concreteOperation() {
//		cout << "Mandatory Operations for all ConcreteClasses" << endl;
//	}
	virtual void hook() {}

};


class Student_John: public Teacher
{
public:
  void learnReading() {
    cout << "John knows how to read fast" << endl;
  }
  void learnWriting() {
    cout << "John knows how to write with good calligraphy" << endl;
  }
  void learnCounting() {
    cout << "John knows how to count on calculator" << endl;
  }
  void learnReadCurrentTime() {
    cout << "John knows how to read time and says, now it is: " << endl;

    auto timenow =
      chrono::system_clock::to_time_t(chrono::system_clock::now());

    cout << ctime(&timenow) << endl;

  }
};

class Student_Steve: public Teacher
{
public:
void learnReading() {
    cout << "Steve knows how to read slow" << endl;
  }
  void learnWriting() {
    cout << "Steve knows how to write but with bad calligraphy" << endl;
  }
   void learnCounting() {
    cout << "Steve knows how to count on Excel/Calc spreadsheet" << endl;
  }
  void learnReadCurrentTime() {
    cout << "Steve knows how to read time " << endl;

    time_t t = time(NULL);
    cout << "local:   " << put_time(localtime(&t), "%c %Z") << '\n';
  }
};

int main()
{

Student_John sj;
Student_Steve ss;

  sj.teachMethod();

  cout << endl << endl;

  ss.teachMethod();

return 0;

}
