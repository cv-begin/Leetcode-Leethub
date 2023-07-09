class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:

        hashed = {}

        for i in range(len(nums)):
            x = target - nums[i]
            if x in hashed:
                return [i, hashed[x]]
            hashed[nums[i]] = i
        return []