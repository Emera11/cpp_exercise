#include <iostream>

enum {
	FIRE = 1 << 0, //0001
	WATER = 1 << 1, //0010
	WIDN = 1 << 2, //0100
	EARTH = 1 << 3, //1000
};


int main()
{
	//��_�����ƍU������
	char week = 0;
	char attack = 0;

	// ��_�ɉ΂ƕ����Z�b�g
	week = (FIRE | WATER);//0101

	//�U�������ɉ΂Ɛ����Z�b�g
	attack = (FIRE | WATER);//0011


	
	week = ~week;
	attack = ~attack;

	if (0b1100 == (week & attack)) {
		printf("��_�U��\n");
	}

	system("pause>0");
}
