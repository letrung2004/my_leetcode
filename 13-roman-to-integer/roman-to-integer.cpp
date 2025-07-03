class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int x = 0;
        for(int i=0; i<s.length(); i++){
            int cur = roman[s[i]];
            int next = roman[s[i+1]];
            if(i+1<s.length()&& cur<next){
                x -= cur;
            }
            else
                x+=cur;
        }
        return x;
    }
};