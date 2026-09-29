class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> map;
        for(int ele : nums){
            map[ele]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int, int>>> pq;
        for(auto x : map){
            pq.push({x.second,-x.first});
        }

        vector<int> ans;
        while(pq.size() > 0){
            int freq = pq.top().first;
            int ele = -pq.top().second;
            while(freq > 0){
                ans.push_back(ele);
                freq--;
            } 
            pq.pop();
        }
        return ans;
    }
};