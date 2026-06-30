class Solution {
public:
    
    int findMin(vector<int>& nums) {
        int l=0;
        int r= nums.size()-1;
        while (l<r)
        {
            int mid= (l+r)/2;
            if(nums[mid]>nums[r])  l=mid+1;
            else    r=mid;
        }
        return l;
         
    }
    int b_search(vector<int>& nums,int s,int e, int target) {
        
            while(s<=e)
            {
                int mid=s+(e-s)/2;
                if(nums[mid]==target)   return mid;
                else if (nums[mid]>target)
                {
                    e=mid-1;
                }
                else
                {
                    s=mid+1;
                }
            }
            return -1;
    }
    int search(vector<int>& nums, int target) {
        if (nums.empty()) return -1;

        int k = findMin(nums);
        int res = b_search(nums, 0, k - 1, target);
        if (res != -1) return res;
        return b_search(nums, k, nums.size() - 1, target);
    }
    
    


};
