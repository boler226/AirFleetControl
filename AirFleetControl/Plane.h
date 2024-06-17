#pragma once
class Plane
{
private:
	std::string name;
	const int maxSeats;
public:
	Plane();
	Plane(const std::string name, const int maxSeats);   // Конструктор з параметрами
	Plane(const Plane& other);	// Конструктор копіювання
	Plane(Plane&& other) noexcept;	// Конструктор переміщення
	~Plane();	// Деструктор
};

