#include <iostream>

using namespace std;
class Person
{
public:
	int money;

	static int sharedMoney;

	void addMoney(int add);
	void addShared(int add);

};
int Person::sharedMoney = 0;
void Person::addMoney(int add)
{
	money += add;
}
void Person::addShared(int add)
{
	sharedMoney += add;
}
int main()
{
	Person han;
	han.money = 100;
	han.sharedMoney = 200;

	Person lee;
	lee.money = 150;
	lee.addMoney(200);
	lee.addShared(200);

	cout << han.money << " " << lee.money << endl;
	cout << han.sharedMoney << " " << lee.sharedMoney << endl;
}