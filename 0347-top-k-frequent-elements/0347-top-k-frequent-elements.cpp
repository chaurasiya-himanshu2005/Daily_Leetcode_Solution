class Solution {
public:
    typedef pair<int,int> pair;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        // map pair is ele, freq
        for(int ele : nums){
            map[ele]++;
        }
        priority_queue<pair, vector<pair>, greater<pair>> pq;
        // heap pair is freq, ele
        for(auto x : map){
            pq.push({x.second,x.first});
            if(pq.size()>k) pq.pop();
        }
        vector<int> ans;
        while(pq.size() > 0){
            int ele = pq.top().second;
            ans.push_back(ele);
            pq.pop();
        }
        return ans;
    }
};