class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int , int> check;
        vector <int> final;
        for (int i=0; i<nums.size(); i++) {
            if (check.find(nums[i]) != check.end()) {
                final.push_back(min(i,check[nums[i]]));
                final.push_back(max(i,check[nums[i]]));
                return final;
            }
            else {
                check[target - nums[i]] = i;
            }
        }
        
    }
};
