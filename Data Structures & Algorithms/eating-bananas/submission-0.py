from math import ceil
class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        def func(k):
            hours=0
            for i in piles:
                hours+= ceil(i/k)
            return hours<=h
        
        l=1
        r=max(piles)
        while l<r:
            mid=(l+r)//2
            if func(mid):
                r=mid
            else:
                l=mid+1
        return l

               
        