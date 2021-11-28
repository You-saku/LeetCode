// 解法を調べました
class Solution {
    map<char,int>romanToArabic ={
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

public:        
    int romanToInt(string s) {
        int ans = 0;
        int length = s.length()-1;
        
        int arabicNumber, tmp;
        arabicNumber = romanToArabic[s[length]];
        ans += arabicNumber;
        
        for(int i = length-1; i >= 0; i--){
            tmp = romanToArabic[s[i]];
            if(arabicNumber > tmp){
                ans -= tmp;
                arabicNumber = tmp;
            }else{
                ans+=tmp;
                arabicNumber = tmp;
            }
        }
        return ans;
    }
};