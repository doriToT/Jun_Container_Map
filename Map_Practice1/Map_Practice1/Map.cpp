#include <iostream>

#include <string>
#include <list>
#include <vector>
#include <map>

using namespace std;


int main(void)
{
	/*
	//�а� ���� ���� �����ʹ� �̱��濡 ���д�.
	//C�� �⺻������ �����͸� ������ ����� ���� �������� ������Ѵ�.
	//���� ���� �������� �����͸� ���� �� �� ����.
	//�����̳ʴ� ������ ���չ���� �ٲ� �� �ִ�.
	*/

	/*
	map<int, int> Numbers;

	// ** Key, Value
	//map<int, int>
	
	Numbers[0] = 1;
	Numbers[1] = 2;
	Numbers[2] = 3;
	Numbers[3] = 4;
	Numbers[4] = 5;
	
	for (int i = 0; i < 5; ++i)
	{
		cout << Numbers[i] << endl;
	}
	*/

	/*
	map<string, int> Numbers;

	Numbers["A"] = 1;
	Numbers["B"] = 2;
	Numbers["C"] = 3;
	Numbers["D"] = 4;
	Numbers["E"] = 5;

	for (map<string, int>::iterator iter = Numbers.begin();
		iter != Numbers.end(); ++iter)
	{
		cout << (*iter).first << endl;
		cout << (*iter).second << endl << endl;
	}
	//map���� (*iter).first�� ��ð� Ű���̰� second�� ���Ҹ� ��Ÿ����.
	//iterator �� �ݺ��ڴ�.
	//back�� ������ ���Ҹ� ��Ÿ����
	//end�� ���� ���ٴ� ���� �˷��ش�. �� end���� ������ �����̴�.(�ƴҶ����� ����.)
	*/

	/*
	enum Key { AAA, BBB, CCC, DDD, EEE };


	const int Max = 10;
	int max = 10;

	Key _State = AAA;
	int Array[EEE];

	cout << Array[_State] << endl;

	// �����̽��ٵ� �ȴ�. 32�̴�. int Araay[' '];

	// �迭�� �������̸鼭 ������̿��� �Ѵ�.
	// ���� Max�� ������ �ɺ��� ������ �θ���.
	// ĳ������ ���ڸ� �־ �ȴ�. ���ڴ� �������̸鼭 ������̱⶧��
	*/


	enum Key 
	{   Player, 
		Enemy, 
		Bullet, 
		Max, 
	};


	const int MaxObject = 128;

	int Array[Max][MaxObject];
	
	for (int i = 0; i < Max; ++i)
	{
		for (int j = 0; j < MaxObject; ++j)
		{
			Array[i][j] = j;
		}
	}

	for (int i = 0; i < MaxObject; ++i)
	{
		cout << Array[Player][i] << endl;
	}

	// ��ó�� �� ���¸� ������ ���°� map�̴�.


	return 0;
}