#include <iostream>

#include <string>
#include <list>
#include <vector>
#include <map>

using namespace std;


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


	return 0;
}