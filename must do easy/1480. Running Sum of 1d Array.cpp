1) O(n) O(n)
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
     vector<int>sum;
        int presum=0;
        for(int i=0;i<nums.size();i++)
        {     presum=presum+nums[i];
        sum.push_back(presum);
        }
    return sum;}
};

2) O(n) O(1) modifying original value
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1;i<nums.size();i++)
        {    
                nums[i]+=nums[i-1]; 
        }
    return nums;}
};

3) Partial sum
class Solution {
public:
vector<int> runningSum(vector<int>& nums) {
    partial_sum(begin(nums), end(nums), begin(nums));
    return nums;
	}
};