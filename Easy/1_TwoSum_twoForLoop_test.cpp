#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
    public:
        // TC = O(n*n)
        // SC = O(1)
        vector<int> twoSum_2ForLoop(vector<int>& nums, int target) 
        {
            for(int i = 0; i < nums.size()-1; i++) 
            { 
                for(int j = i+1; j < nums.size(); j++) 
                {
                    if(nums[i] + nums[j] == target)
                    {
                        return {i, j};
                    };
                };
            };
            return {-1, -1};   
        };
};


int main()
{
    vector<int> nums = {8, 5, 2, 7};
    int target = 9;

    Solution s;
    vector<int> result = s.twoSum_2ForLoop(nums, target);

    for(int index : result) {
        cout <<"index: "<<index << endl;
    }

    return 0;
}