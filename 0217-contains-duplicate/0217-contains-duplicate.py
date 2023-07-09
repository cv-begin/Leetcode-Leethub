class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        hashed = {}
        for num in nums:
            if num in hashed:
                return True
            hashed[num] = 1
        return False