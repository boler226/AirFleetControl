#pragma once
class Plane
{
private:
	std::string name;
	const int maxSeats;
public:
	Plane();
	Plane(const std::string name, const int maxSeats);   // ����������� � �����������
	Plane(const Plane& other);	// ����������� ���������
	Plane(Plane&& other) noexcept;	// ����������� ����������
	~Plane();	// ����������
};

