class Solution:
    def maxArea(self, heights: List[int]) -> int:
        left=0
        right=len(heights)-1
        maximum=0
        while left<right:
            s=(right-left)*min(heights[right],heights[left])
            if(heights[right]>heights[left]):
                left+=1
            else:
                right-=1
            maximum=max(s,maximum)
        return maximum
        