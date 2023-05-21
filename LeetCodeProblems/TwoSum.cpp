#include "TwoSum.h"
#include <vector>
TwoSumSolution::TwoSumSolution()
{

}

std::vector<int> TwoSumSolution::twoSum(std::vector<int>& nums, int target)
{
	std::vector<int> result;
	int count = nums.capacity();
	for (int i = 0; i < (count - 1); i++)
	{
		for (int j = 0; j < count; j++)
		{
			if ((i != j) && (nums[i] + nums[j] == target))
			{
				//std::cout << i << "\t" << j << nums[i] + nums[j] << "\n";
				result.push_back(i);
				result.push_back(j);
				return result;
			}
		}
	}
}

