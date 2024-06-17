#pragma once
#include <string>
#include <vector>
#include <ctime>
#include "Destination.h";
#include "Plane.h";

class Flight
{
private:
	int flightNumber;	// ����� �����
	Destination whence;   // �����
	Destination whither;   // ����
	std::vector<Destination> intermeditateStops;	// ������ ������� �������
	std::time_t departureTime;	// ��� �����������
	std::time_t  flightDays;	// �� �������
	int availableSeats;	// ʳ������ ������ ����
	Plane plane;	// ˳���
public:
	Flight();	// ����������� �� �������������
	Flight(   // ����������� � �����������
		int num,
		Destination& whence,
		Destination& whither,
		const std::vector<Destination>& stops,
		const std::time_t& time, 
		const std::time_t& days, 
		int seats, 
		Plane& plane
	);
	Flight(const Flight& other);	// ����������� ���������
	Flight(Flight&& other) noexcept;	// ����������� ����������
	~Flight();	// ����������


	static void showInfo();
};

