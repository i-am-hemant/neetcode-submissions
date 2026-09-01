class Solution {
public:
    vector<pair<int,int>> getTwoSumPairs(vector<int>& nums, int idx, int target){
        // return all the pairs <num1, num2> in array nums starting from index idx such that num1+num2==target
        vector<pair<int,int>> ans;
        int l=idx, r=nums.size()-1;
        while(l<r){
            if(nums[l]+nums[r]==target){
                ans.push_back({nums[l], nums[r]});
                l++;
                r--;
            }else if(nums[l]+nums[r]<target){
                l++;
            }else
                r--;
        }
        return ans;
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        set<vector<int>> ansSet;
        for(int i=0;i<n;i++){
            vector<pair<int,int>> res = getTwoSumPairs(nums, i+1, -nums[i]);
            for(auto& p:res){
                vector<int> tmp={nums[i], p.first, p.second};
                ansSet.insert(tmp);
            }
        }
        vector<vector<int>> ans(ansSet.begin(), ansSet.end());
        return ans;
    }
};
