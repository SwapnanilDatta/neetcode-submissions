class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int len1=s1.size();
        int len2=s2.size();
        vector<int> count1(26, 0), count2(26, 0);
        for (int i=0;i<len1;i++)
        {
            count1[s1[i] - 'a']++;
            count2[s2[i] - 'a']++;
        }
        if (count1==count2) return true;
        for (int i=len1;i<len2;i++)
        {
            count2[s2[i] - 'a']++;                   
            count2[s2[i - len1] - 'a']--;            

            if (count1 == count2) return true;

        }
        return false;
    }
};
