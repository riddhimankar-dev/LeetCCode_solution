#include<iostream>
#include<vector>
using namespace std;

class solution{

    public:

    vector<int> two_sum(vector<int> nums, int target){
        for(int i =0; i< nums.size(); i++){
            for(int j=i; j< nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    return {i,j};
                }
            }
        }
        return {};
    };
};

int main(){

    vector<int> nums = {2,7,11,15};
    int target = 9;
    solution sol;
    vector<int> result = sol.two_sum(nums, target);
    cout<<result[0]<<" "<<result[1];
    return 0;
}