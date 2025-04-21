#include<bits/stdc++.h>
using namespace std;


class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int b = target;
            for(int i =0;i<nums.size();i++){
                for(int j=i+1;j<nums.size();j++){
                    if(nums[i]+nums[j]==b){
                        return{i,j};
                    }
                }
            }
            return {};
        }   
    };
    int main(){
        return 0;
    }