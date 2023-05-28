class Solution {
public:
     unordered_map<int, int> mp;
    int maxi_in_map;
    int recur(TreeNode* root){
        if(!root) return 0;
        int s = recur(root->left) + recur(root->right) + root->val;  // subtree sum
        maxi_in_map = max(maxi_in_map, ++mp[s]);
        return s;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        recur(root);
        vector<int> res;
        for(auto it: mp){
            if(it.second == maxi_in_map){
                res.push_back(it.first);
            }
        }
        return res;
    }
};