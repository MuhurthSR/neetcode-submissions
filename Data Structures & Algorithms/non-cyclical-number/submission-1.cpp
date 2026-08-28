class Solution {

private : 
    int genNext(int n){
        int totalSum = 0;
        while(n > 0){
            int digit = n % 10;
            totalSum += digit * digit;
            n/=10;
        }
        return totalSum;
    }
public:
    bool isHappy(int n) {
        int slow = n;
        int fast = genNext(n);

        while(fast != 1 && slow!=fast){
            slow = genNext(slow);
            fast = genNext(genNext(fast));
        }

        return fast==1;
    }
};
