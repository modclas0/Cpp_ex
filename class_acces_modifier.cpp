#include <iostream>
#include <string>

	using namespace std;

class Student
{
	private:
		string name;
		int englishScore;
		int mathScore;
		int getsum() { return englishScore + mathScore; } // 정보 은닉
	public:
		Student(string n, int e, int m)
		{
			name = n;
			englishScore = e;
			mathScore = m;
		}
		void show() { cout << name << " : [합계 " << getsum() << "점]\n"; }
};

int		main(void)
{
	Student a = Student("이승현", 100, 98);
	a.show();
//	cout << a.getSum();  private 접근 한정자는 외부에서 접근불가 (error)
	
	return (0);
}
