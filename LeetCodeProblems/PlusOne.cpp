#include "PlusOne.h"
#include <math.h>
PlusOne::PlusOne()
{

}

std::vector<int> PlusOne::plusOne(std::vector<int>& digits)
{
	int count = digits.size();
	int sum = 0;
	int power = count - 1;
	for (int num : digits)
	{
		sum = num * pow(10, power) + sum;
		power--;
	}
	digits.at(count - 1) = digits.back() + 1;
	return digits;
}
