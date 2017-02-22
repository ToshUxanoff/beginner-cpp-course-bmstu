#pragma once
#include "TAnimal.h"

const float STEP = 0.5;

class TZoo
{
	typedef TAnimal * TPtrAnimal;

	/// �����
	TPtrAnimal * Animals;
	
	/// ������������ ����������� ��������
	size_t Capacity;

	/// ���������� ������ � ��������
	size_t NumAnimals;

	/// ����� �����
	float Time;
public:
	TZoo(size_t capacity);
	bool AddNewAnimal(TAnimal ** newAnimal);
	void Work();
	~TZoo();
};

