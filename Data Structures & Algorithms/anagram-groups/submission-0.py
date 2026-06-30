class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        d={}
        for word in strs:
            sorted_list=sorted(word)
            sorted_word=''.join(sorted_list)
            if sorted_word not in d:
                d[sorted_word]=[word]
            
            else:
                d[sorted_word].append(word)
            
        return list(d.values())