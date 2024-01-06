class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> a;
        int n =nums.size();
        for(int i=0;i<n;i++){
            a[nums[i]]=i;
        } vector<int> ans ;
         for(int i=0;i<n;i++){
            if(a.find(target-nums[i])!=a.end()&&a.find(target-nums[i])->second!=i){
              ans.push_back(i);
              ans.push_back(a.find(target-nums[i])->second);  break;
            }
            }return ans ;
    }
};
