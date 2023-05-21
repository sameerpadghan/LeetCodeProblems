// LeetCodeProblems.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "TwoSum.h"
#include "Palindrome.h"
#include "SingleNumber.h"
#include "PlusOne.h"
int main()
{
	std::vector<int> vector = { 9 };
	PlusOne* plusone = new PlusOne();
	auto result = plusone->plusOne(vector);
	return 0;
}
