#include "SingleNumber.h"
#include <algorithm>
#include <stack>
int SingleNumber::singleNumber(std::vector<int>& nums)
{
	std::sort(nums.begin(), nums.end());
	std::stack<int> stack;
	for (int num : nums)
	{
		stack.push(num);
		if (stack.size() > 1)
		{
			if (stack.top() == num)
			{
				stack.pop();
				stack.pop();
			}
		}
	}
	if (stack.size() == 1)
	{
		return stack.top();
	}
}
