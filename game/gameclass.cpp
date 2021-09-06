#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
//Game클래스 선언

class Game 
{
private:
	double energy = 100;
	static int life;

public:
	Game();
	double Damage();
	static void Die();
	double Heal();
};
int Game::life = 10;

void Game::Die() 
{
	life--;
	cout << "**생명이 1 감소하여 " << life << "이 되었습니다." << endl << endl;

}

double Game::Heal()
{
	double Heal = 0;
	
	if (energy < 40)
	{
		Heal += rand() % 100;
		energy += Heal;
	}
	cout << "체력을 회복 했습니다. 남은 체력은" << energy << " 입니다." << endl;
	return energy;
}

double Game::Damage() 
{
	double damaged = 0;

	if (energy > 0) 
	{
		damaged += rand() % 100;
		energy -= damaged;
		cout << "에너지가 " << damaged << " 감소하여 " << energy << " 이 되었습니다.\n";
		if (energy < 0) 
		{
			life--;
			energy = 100;
			cout << "생명이 1 감소하여 " << life << "이 되었습니다." << endl << endl;

		}
	}
	return energy;
}
//Game클래스 멤버 함수의 정의
Game::Game()
{
	cout << "에너지가 " << energy << " 이며, 생명이 " << life << "인 캐릭터가 만들어졌습니다.\n";
	Damage();
	Damage();
	Damage();
	Heal();
	Damage();
	Damage();
}

int main()
{
	srand((unsigned int)time(NULL)); //seed값으로 현재시간 부여
	Game c1;
	Game::Die();
	Game c2;
	c2.Damage();
	c2.Damage();
	c2.Damage();
	c2.Die();
	return 0;
}