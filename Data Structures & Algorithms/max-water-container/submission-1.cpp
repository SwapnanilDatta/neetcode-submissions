class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right=heights.size()-1;
        int maximum=0;
        int s;
        while(left<right)
        {
            s=(right-left)*min(heights[right],heights[left]);
            if(heights[left]>heights[right])
                right--;
            else
                left++;
            maximum=max(s,maximum);


        }
        return maximum;
        
    }
};
