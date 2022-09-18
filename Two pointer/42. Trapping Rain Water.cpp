class Solution {
public:
    int trap(vector<int>& height) {
        int i =0,j = height.size()-1;
        int res = 0;
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        while(i<=j){
            
            max1 = max(max1,height[i]);
            max2 = max(max2,height[j]);
            
            res += min(max1,max2)-min(height[i],height[j]);
            
            if(height[i]<height[j])i++;
            else{
                j--;
            }
        }
       return res;} 
};