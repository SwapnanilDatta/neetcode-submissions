class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest=0;
        int length=0;
        set <int> s;
        for (int j:nums)
        {
            s.insert(j);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(!s.count(nums[i]-1))
            {
                length=1;
                while(s.count(nums[i]+length))
                {
                    length+=1;
                }
                longest=max(longest,length);
            }
        }
        return longest;
        
    }
};
