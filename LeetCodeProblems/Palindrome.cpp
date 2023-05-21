#include "Palindrome.h"
# include <string>
#include <iostream>
Palindrome::Palindrome()
{
}

bool Palindrome::isPalindrome(int x)
{
	std::string original_string = std::to_string(x);
	std::string modified_string = original_string;
	std::reverse(modified_string.begin(), modified_string.end());
	if (original_string == modified_string)
	{
		return true;
	}
	return false;
}
