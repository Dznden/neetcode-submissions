class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dictionary = {}
        for i in range(len(nums)):
            dictionary[nums[i]] = i
            # store index as value ->output
    
        for j in range(len(nums)):
            possibleval = target - nums[j]
            if possibleval in dictionary.keys():
                if j!=dictionary[possibleval]:
                    return [j, dictionary[possibleval]]
            