class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        numset=set(nums)
        length=0
        longest=0
        for n in numset:
            if (n-1) in numset:
                length=1
            while (length+n) in numset:
                length+=1

            longest= max(longest,length)
        return longest