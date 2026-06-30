class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map <char,int> freq;
        for (char task:tasks)
            freq[task]++;
        
        priority_queue <int> maxheap;
        for (auto& f:freq)
            maxheap.push(f.second);
        
        queue <pair<int,int>> cooldown;
        int time=0;
        while(!maxheap.empty() || !cooldown.empty())
        {
            time++;
            if (!cooldown.empty() && cooldown.front().second <= time) 
            {
                maxheap.push(cooldown.front().first);
                cooldown.pop();
            }
            if (!maxheap.empty()) 
            {
                int curr = maxheap.top();
                maxheap.pop();

                if (curr - 1 > 0) 
                {
                    cooldown.push({curr - 1, time + n+1});
                }
            }
        }
        return time;
        

    }
};
