
class Solution {
private:
    void helper(Node* root, vector<int>& result) {
        if (root == 0)  return ;
      
       result.push_back(root -> val);
        for (Node* child : root -> children) {
            helper(child, result);
        }
    }
public:
    vector<int> preorder(Node* root) {
        vector<int> result;
        helper(root, result);
        return result;
    }
};