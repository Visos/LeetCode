class Solution {
public:
    int minDifference(vector<int>& nums) {
        int min = INT_MAX;
        int save = 0;
        sort(nums.begin() , nums.end());
        if(nums.size()<=4 && nums.size()>0){
            min = 0;
        } else {
            int diff = nums.size() -4;
            for(int i = 0; (i+diff)<nums.size(); i++){
                if(nums[i+diff]-nums[i]<min){
                    min = nums[i+diff]-nums[i];
                    save = i;
                }
            }
        }
        return min;
    }
};