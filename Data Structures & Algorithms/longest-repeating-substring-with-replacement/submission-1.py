class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        l=0
   
        n=len(s)
        longest=0
        freq=[0]*26 
        max_freq=0
        for r in range(n):
            freq[ord(s[r])-65]+=1
            max_freq=max(max_freq,freq[ord(s[r])-65])

            while (r-l+1)-max_freq>k:
                freq[ord(s[l])-65]-=1
                l+=1

            longest=max(longest,(r-l+1))

        return longest
        