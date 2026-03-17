from typing import List


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for x in range(len(nums)):
            y = target - nums[x]
            if y in nums and nums.index(y) != x:
                return[x, nums.index(y)]

nums = [3,2,4]
target = 6

print(Solution().twoSum(nums=nums, target=target))