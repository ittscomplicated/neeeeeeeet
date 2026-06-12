class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int counter = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 1){
                maxCount = max(maxCount, counter);
                counter=0;
                continue;
            }

            counter++;
        }

        maxCount = max(maxCount, counter);


        return maxCount;
    }
};