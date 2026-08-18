class Solution {
public:
    int calPoints(vector<string>& arr) {
        stack<int> s;
        int n = arr.size();
        for(int i = 0; i < n; i++){
            if(arr[i] == "C") s.pop();
            else if(arr[i] == "D") s.push(2*(s.top()));
            else if(arr[i] == "+"){
                int top = s.top();
                s.pop();
                int sum = top + s.top();
                s.push(top);
                s.push(sum);
            }
            else{
                int num = stoi(arr[i]);
                s.push(num);
            }
        }
        int sum = 0;
        while(s.size()>0){
            sum += s.top();
            s.pop();
        }
        return sum;
    }
};