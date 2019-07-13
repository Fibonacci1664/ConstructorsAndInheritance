/*
 * Main.cpp
 *
 *  Created on: 13 Jul 2019
 *      Author: Dave
 */

#include<iostream>

using namespace std;

class Machine
{
private:
	int id;
public:
	Machine(): id(0){cout << "Machine no arg constructor called" << endl;}
	Machine(int id): id(id){cout << "Machine param constructor called" << endl;}

	void info(){cout << "ID: " << id << endl;}
};

class Vehicle: public Machine
{
public:
	Vehicle(){cout << "Vehicle no arg constructor called" << endl;}
	Vehicle(int id): Machine(id){cout << "Vehicle param constructor called" << endl;}

};

class Car: public Vehicle
{
public:
	Car(): Vehicle(999){cout << "Car no arg constructor called" << endl;}
};

int main()
{
//	Vehicle vehicle_1;
//	vehicle_1.info();

	Machine machine(123);
	machine.info();

	Vehicle vehicle(321);
	vehicle.info();

	Car car;
	car.info();

//	Car car;
//	car.info();

	return 0;
}


