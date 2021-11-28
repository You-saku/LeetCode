class Solution {
public:
    bool isPalindrome(int x) {
        string number = to_string(x);
        int numberLength = number.length()-1;
        int range = number.length()/2;
        for(int i = 0; i < range; i++){
            if(!(number[i] == number[numberLength-i])){
                return false;
            }
        }
        return true;
    }
};