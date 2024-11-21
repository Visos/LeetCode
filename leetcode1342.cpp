class Solution {
public:
    int numberOfSteps(int num) {
        int i = 0;
        while(num>0){
            if(num%2 == 1){
                num--;
                i++;
            } else {
                num = num/2;
                i++;
            }
        }
        return i;

    }
};