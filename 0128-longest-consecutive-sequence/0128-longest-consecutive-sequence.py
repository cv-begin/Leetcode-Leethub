class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        # modified neetcode solution
        
        longest = 0
        
        numSet = set(nums)
        
        for num in numSet:
            
            length = 1
            if (num-1) not in numSet:
                while (num+length) in numSet:
                    length += 1
                longest = max(length, longest)
        return longest
    
    
    
                    
            
