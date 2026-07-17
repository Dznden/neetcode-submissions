class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # idea doesnt matter about location of letter, just need same number of occurrences
        counts = {}
        for letter in s:
            counts[letter] = counts.get(letter, 0) + 1
        print(counts)
        for letter2 in t:
            print(letter2)
            counts[letter2] = counts.get(letter2, 0) -1 # if not key value pair then default 0
        print(counts)
        allLetters = s+t
        for letters in allLetters:
            if counts[letters]!=0:
                return False
        return True

            

            
        