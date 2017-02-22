#include <thread>
#include <iostream>
#include "TZoo.h"

class TCat
	: public TAnimal
{
public:
	TCat(const std::string & name)
		: TAnimal(name)
	{ }

	virtual void Live(float time) override
	{
		// � 6 �� 7 ��� ���
		if (time >= 6.f && time <= 7.f)
			std::cout << GetName() << " is eating" << std::endl;

		// ��������� ����� ����
		else
			std::cout << GetName() << " is sleeping" << std::endl;
	}
};

class TPussInBoots
	: public TCat
{
public:
	TPussInBoots()
		: TCat("Puss in Boots")
	{ }

	virtual void Live(float time) override
	{
		// � 6 �� 7 ��� � ������� ���
		if (time >= 6.f && time <= 7.f)
			std::cout << GetName() << " is eating" << std::endl;
		// � 8 �� 15 ��� � ������� ����
		else if (time >= 8.f && time <= 15.f)
			std::cout << GetName() << " is sleeping" << std::endl;
		// ��������� ����� �����
		else
			std::cout << GetName() << " is running" << std::endl;
	}
};

int main()
{
	TZoo myZoo(10);

	TAnimal * myCat = new TCat("Snowball");
	TAnimal * catCalledGav = new TCat("Gav");
	TAnimal * pussBoots = new TPussInBoots();

	// ���� �� ������� ��������, �� ������� ������
	if (!myZoo.AddNewAnimal(&myCat))
		delete myCat;
	// ���� �� ������� ��������, �� ������� ������
	if (!myZoo.AddNewAnimal(&catCalledGav))
		delete catCalledGav;
	// ���� �� ������� ��������, �� ������� ������
	if (!myZoo.AddNewAnimal(&pussBoots))
		delete pussBoots;

	for (size_t i = 0; i < 100; ++i)
	{
		myZoo.Work();
		std::cout << std::endl;

		// ����� ���� 1 �������
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
	system("pause");
}