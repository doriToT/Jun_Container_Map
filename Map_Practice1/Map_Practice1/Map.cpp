#include <iostream>

#include <string>
#include <list>
#include <vector>
#include <map>

using namespace std;

// 프로토타입 패턴의 일부
// 복사해서 사용할 원형 객체 만들어 놓는다.
// new할당제보단 복사생성자를 만들어서 하

struct Vector3
{
	float x, y, z;

	Vector3() : x(0.0f), y(0.0f), z(0.0f) {};

	Vector3(const float& _x, const float& _y) : x(_x), y(_y), z(0.0f) {};

	Vector3(const float& _x, const float& _y, const float& _z)
		: x(_x), y(_y), z(_z) {};
};

struct Transform
{
	Vector3 Position;
	Vector3 Rotation;
	Vector3 Scale;
};

struct Object
{
	Transform Info;

	Object() {};

	Object(const Transform& _Info) : Info(_Info) {};
};

struct Player : public Object
{
	Player() {};

	Player(const Transform& _Info) : Object(_Info) {};
};

map<string, list<Object*>> Objects;

void Initialize();
void AddObject(string _Key, Object* _Object);

int main(void)
{
	//Initialize();

	Transform Info;

	Info.Position.x = 10;
	Info.Position.y = 20;
	Info.Position.z = 30;

	AddObject("Player", new Player(Info));

	/* 
	for (list <Object*>::iterator iter = Objects.begin()->second.begin();
	     iter != Object.begin()->second.end(); ++iter)
	{
	   cout << "Position x: " << (*iter)->Info.Position.x << endl;
	   cout << "Position y: " << (*iter)->Info.Position.y << endl;
	   cout << "Position z: " << (*iter)->Info.Position.z << endl;
	}
	*/

	// for (list 형태::iterator i = qwea.being()->second.begin();
	//      i != qwea.begin()->second.end(); ++i)
	for (list <Object*>::iterator iter = Objects.begin()->second.begin();
		iter != Objects.begin()->second.end(); ++iter)
	{
		cout << "Position.x: " << (*iter)->Info.Position.x << endl;
	}

	for (auto iter = Objects.begin();
		iter != Objects.end(); ++iter)
	{
		cout << "Key Name : " << iter->first << endl;

		for (auto iter2 = iter->second.begin();
			iter2 != iter->second.end(); ++iter2)
		{
			cout << "Pos X : " << (*iter2)->Info.Position.x << endl;
			cout << "Pos Y : " << (*iter2)->Info.Position.y << endl;
			cout << "Pos Z : " << (*iter2)->Info.Position.z << endl << endl;
		}
	}


	//cout << Objects("Player")->Info.Position.x << endl;
	//cout << Objects("Player")->Info.Position.y << endl;
	//cout << Objects("Player")->Info.Position.z << endl;

	return 0;
}

void Initialize()
{
	Transform Info;

	Info.Position.x = 10;
	Info.Position.y = 20;
	Info.Position.z = 30;

	
	//Objects["Player"] = new Player(Info);
}

void AddObject(string _Key, Object* _Object)
{
	map<string, list<Object*>>::iterator iter = Objects.find(_Key);

	if (iter == Objects.end())
	{
		list<Object*> Temp;
		Temp.push_back(_Object);
		Objects.insert(make_pair(_Key, Temp));
	}
	else
		iter->second.push_back(_Object);
}
