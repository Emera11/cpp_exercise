#include <iostream>

enum {
	FIRE = 1 << 0, //0001
	WATER = 1 << 1, //0010
	WIDN = 1 << 2, //0100
	EARTH = 1 << 3, //1000
};


int main()
{
	//弱点属性と攻撃属性
	char week = 0;
	char attack = 0;

	// 弱点に火と風をセット
	week = (FIRE | WATER);//0101

	//攻撃属性に火と水をセット
	attack = (FIRE | WATER);//0011


	
	week = ~week;
	attack = ~attack;

	if (0b1100 == (week & attack)) {
		printf("弱点攻撃\n");
	}

	system("pause>0");
}
