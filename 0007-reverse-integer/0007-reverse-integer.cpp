class Solution {
public:
    int reverse(int x) {
        long num = 0, rem;
        while(x!=0){
            
            rem = x%10;
            num = num * 10 + rem;
            x = x/10;
        }
        return (num < INT_MIN || num > INT_MAX) ? 0 : num;
    }
};