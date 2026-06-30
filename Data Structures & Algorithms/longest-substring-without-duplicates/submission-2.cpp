class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l,r=0;
        int longest=0;
        set <int> sett;
        for (int r=0;r<s.size();r++)
        {
            
            while (sett.count(s[r]))
            {
                sett.erase(s[l]);
                l+=1;
            }

            sett.insert(s[r]);
            longest=max(longest,r-l+1);

        }
        return longest;
        
    }
};
