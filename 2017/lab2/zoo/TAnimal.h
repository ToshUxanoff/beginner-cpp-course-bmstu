#pragma once
#include <string>

class TAnimal
{
	std::string Name;
	size_t Age;

public:
	TAnimal();
	TAnimal(const std::string & name);

	/// ���������� ���������� �� ���������.
	/// �.�. ����������� �������� ��� ������� �������� �� ���������
	virtual ~TAnimal() = default;

	/// ����������� �����
	/// <param name="time"> ����� ����� </param>
	virtual void Live(float time) = 0;

	std::string GetName() const;
	size_t GetAge() const;
};

