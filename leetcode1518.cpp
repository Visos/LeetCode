class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total = 0;
        int empty = 0;
        int full = numBottles;
        while(full+empty >= numExchange){
            total +=full;
            empty += full;
            full = empty/numExchange;
            empty = empty%numExchange;
        }
        return total+full;
        
    }
};