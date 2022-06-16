#include <iostream>

#include <string>
#include <list>
#include <vector>
#include <map>

using namespace std;

void Adddata(int _Key, int _Value);

map<int, int> Numbers;

void Adddata(int _Key, int _Value)
{
}

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

	/*

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
	*/

	// �ϳ��� ������ �������� 2���� ��尡 �ִ�. 2�� Ʈ�� ����
	// ��ġ�� �����Ǿ� �ִµ� ���������� ������ �� �ִ�. 
	
	// C������ Map�̶� �θ��� �ٸ� ������ �ؽ� ���̺��̶� �θ���.

	Numbers[0] = 0;
	Numbers[1] = 10;
	Numbers[2] = 20;
	Numbers.insert(make_pair(3, 40));

	Numbers[1] = 100;

	Numbers.insert(make_pair(4, 40));

	Adddata(2, 200);

	/*
	//Numbers.insert(make_pair(2, 200));

	map<int, float>::iterator iter = Numbers.find(2);
	iter->second = 200;
	*/

	map<int, float>::iterator iter = Numbers.find(2);

	if (iter == Numbers.end())
		Numbers.insert(make_pair(2, 200));
	else
		iter->second = 200;

	for (map<int, int>::iterator iter = Numbers.begin();
		iter != Numbers.end() ; ++iter)
		cout << iter->second << endl;

	// ���ȭ�ϴ� ������ 2���̻� �ݺ��ϴ� �Լ��� ������ ���� �� �ִ�.

	/*
	// ������ ���� ���� ��������. ��, 30�� ���´�. (�����Է¹��)
	Numbers[1] = 30;
    */

	return 0;
}

void Adddata(int _Key, int _Value)
{
	map<int, int>::iterator iter = Numbers.find(_Key);

	if (iter == Numbers.end())
		Numbers.insert(make_pair(_Key, _Value));
	else
		iter->second = _Value;
}
