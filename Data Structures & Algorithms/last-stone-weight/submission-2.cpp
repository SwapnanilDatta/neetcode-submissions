class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> hp;

        for (int stone : stones)
            hp.push(stone);

        while (hp.size() > 1) 
        {
            int a = hp.top();
            hp.pop();

            int b = hp.top(); 
            hp.pop();

            if (a != b)
                hp.push(a - b);
        }

        return hp.empty() ? 0 : hp.top();
    }
};