class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int k;
        
        int maxi=*max_element(piles.begin(), piles.end());
        int low=1;
        while(low<=maxi)
        {
            int hours=0;
            k=(low+maxi)/2;
            for(int i=0;i<piles.size();i++)
            {
                hours += ceil((double)piles[i] / k);
            }
            if(hours<=h)
            {
                
                maxi=k-1;
            }
            else
            {
                low=k+1;
            }
        }
        return low;
        
    }
};
