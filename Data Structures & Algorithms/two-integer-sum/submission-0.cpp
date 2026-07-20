class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> st;
        int n=nums.size();
        for(int i=0; i<n; i++){
            int diff = target - nums[i];
            if(st.find(diff) != st.end()){
                return {st[diff],i};
            }
            st[nums[i]]=i;
        }
        return {};
    }
};
