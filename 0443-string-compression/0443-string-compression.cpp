class Solution {
public:
    int compress(vector<char>& chars) {
        int write = 0;
        int i = 0;

        while(i < chars.size()){
            char current = chars[i];
            int count = 0;

            while(i < chars.size() && chars[i] == current){
                count++;
                i++;
            }

            chars[write] = current;
            write++;

            if(count > 1){
                string str = to_string(count);
                for(int j = 0; j < str.length(); j++){
                    chars[write] = str[j];
                    write++;
                }
            }
        }
        return write;
    }
};