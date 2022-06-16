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
	//읽고 싶지 않은 데이터는 싱글톤에 놔둔다.
	//C는 기본적으로 데이터를 들고오는 기능은 없고 소켓으로 열어야한다.
	//따라서 밑의 형식으로 데이터를 들고올 수 는 없다.
	//컨테이너는 언제나 결합방식이 바뀔 수 있다.
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
	//map에서 (*iter).first는 헤시값 키값이고 second가 원소를 나타낸다.
	//iterator 는 반복자다.
	//back이 마지막 원소를 나타내고
	//end는 끝이 났다는 것을 알려준다. 즉 end전이 마지막 원소이다.(아닐때까지 돈다.)
	*/

	/*
	enum Key { AAA, BBB, CCC, DDD, EEE };


	const int Max = 10;
	int max = 10;

	Key _State = AAA;
	int Array[EEE];

	cout << Array[_State] << endl;

	// 스페이스바도 된다. 32이다. int Araay[' '];

	// 배열은 정수형이면서 상수형이여야 한다.
	// 위의 Max를 넣으면 심볼릭 상수라고도 부른다.
	// 캐릭터형 문자를 넣어도 된다. 문자는 정수형이면서 상수형이기때문
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

	// 위처럼 이 형태를 개선한 형태가 map이다.
	*/

	// 하나당 밑으로 내려가는 2개의 노드가 있다. 2진 트리 구조
	// 위치는 결정되어 있는데 유동적으로 움직일 수 있다. 
	
	// C언어에서는 Map이라 부르고 다른 곳에선 해쉬 테이블이라 부른다.

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

	// 모듈화하는 이유는 2번이상 반복하는 함수는 무조건 줄일 수 있다.

	/*
	// 기존의 위의 값은 덮어진다. 즉, 30이 나온다. (강제입력방식)
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
