class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                
                if(nums[i]+nums[j]==target){
                    return {i, j}; //O(1)
                };
                
            };
        };
        
        return {-1, -1};
    };
}; 

//TC = O(n*n)
//SC = O(1)