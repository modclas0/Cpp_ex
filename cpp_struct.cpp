#include <iostream>
#include <string>

using namespace std;

struct student
{
	string name;
	int score;
};

int		main(void)
{
	struct student a;
	a.name = "이승현";
	a.score = 100;
	cout << a.name << " : " << a.score << "점\n";

	return (0);
}
