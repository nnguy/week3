#include "gastank.h"

// write your solution here
GasTank::GasTank(double gas_capacity) {
	amount = 0;
	capacity = gas_capacity;
}

void GasTank::addGas(double gas_to_add) {
	if (gas_to_add + amount >= capacity)
		amount = capacity;
	else
		amount += gas_to_add;
}

void GasTank::useGas(double gas_to_consume) {
	if (amount - gas_to_consume < 0)
		amount = 0;
	else
		amount -= gas_to_consume;
}

bool GasTank::isEmpty() {
	if (amount < 0.1)
		return true;
	else
		return false;
}

bool GasTank::isFull() {
	if (amount > capacity - 0.1)
		return true;
	else
		return false;
}

double GasTank::getGasLevel() {
	return amount;
}

double GasTank::fillUp() {
	double temp = amount;
	amount = capacity;
	return capacity - temp;
}