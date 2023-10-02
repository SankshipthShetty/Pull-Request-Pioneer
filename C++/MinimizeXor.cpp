/*
to make xor minimum,
our best option is to keep the highest set bits in num1 = 0 by xoring with the same value,
the remainingbits left should be filled in  strationg from the least significant places
*/
// question link:- https://leetcode.com/problems/minimize-xor/

class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int tc = __builtin_popcount(num2); //calcuating set bits
        long long ans =0;
        for(int i=31;i>=0;i--){
            if(tc){
                if((num1>>i) & 1){
                    ans|=1<<i;            //making highers set bits equal to make it zero
                    tc--;
                }
            }
        }
        for(int i = 0;i<31;i++){          // filling the remanninig set bits
           if(tc){
                if(!((num1>>i) & 1)){
                    ans|=1<<i;
                    tc--;
                }
            } 
        }
        return ans;
    }
};
