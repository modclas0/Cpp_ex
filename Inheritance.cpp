#include <iostream>
#include <string>

 using namespace std;

class Person
{
	private:
		string name;
	public:
		Person(string name) : name(name) { }
		string getName()
		{
			return name;
		}
		void showName()
		{
			cout << "이름 : " << getName() << '\n';
		}
};

class Student : Person
{
	private:
		int studentID;
	public:
		Student(int studentID, string name) : Person(name)
		{
			this->studentID = studentID;
		}
		void show()
		{
			cout << "학생 번호 : " << studentID << '\n';
			cout << "학생 이름 : " << getName() << '\n';
		}
};

int		main(void)
{
		Student student(201721207, "이승현");
		student.show();
}	
