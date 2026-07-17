class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        duplicate = set()
        for number in nums:
            if number in duplicate:
                return True
            duplicate.add(number) # if not in set
        return False


                
