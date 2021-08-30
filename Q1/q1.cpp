#include <iostream>
#include <string>
using namespace std;

class Board
{
public:
	static int top;
	static string line[100];

	static void add(string str);
	static void print();
};
string Board::line[] = { "", };
int Board::top = 0;
void Board::add(string str)
{
	line[top++] = str;
}
void Board::print()
{
	cout << "********게시판 입니다.*********" << endl;
	for (int i = 0; i < top; i++)
	{

		cout << i << ": " << line[i] << endl;
	}
	cout << "******************************" << endl;
}
int main()
{
	Board::add("중간고사는 감독없는 자율 시험입니다");
	Board::add("코딩 라운지 많이 이용해 주세요");
	Board::print();
	Board::add("진소린 학생이 경시대회에서 입상하였습니다");
	Board::print();
}