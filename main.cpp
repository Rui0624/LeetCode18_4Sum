//
//  main.cpp
//  LeetCode18_4Sum
//
//  Created by Rui on 1/25/18.
//  Copyright © 2018 Rui. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        set<vector<int>>  res;
        for(int i = 0; i < int(nums.size() - 3); i++)
        {
            for(int j = i + 1; j < int(nums.size() - 2); j++)
            {
                int left = j + 1;
                int right = nums.size() - 1;
                while(left < right)
                {
                    int sum = nums[i] + nums[j] + nums[left] + nums[right];
                    if(sum == target)
                    {
                        vector<int> out;
                        out.push_back(nums[i]);
                        out.push_back(nums[j]);
                        out.push_back(nums[left]);
                        out.push_back(nums[right]);
                        res.insert(out);
                        left++;
                        right--;
                    }else if(sum > target)
                        right--;
                    else if(sum < target)
                        left++;
                }
            }
        }
        
        return vector<vector<int>>(res.begin(), res.end());
    }
};
