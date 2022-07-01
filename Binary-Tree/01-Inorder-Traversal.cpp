// Binary Tree Strivers DSA Sheet Solutions
// Code Written By Krishna (krishna_6431)
// Date : Jul 1 2022


/*
 
//Approach 1 : Recursive Approach (very simple)
class Solution {
public:
    vector<int>ans;
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL) return {};
        
        inorderTraversal(root->left);
        ans.push_back(root->val);
        inorderTraversal(root->right);
        
        return ans;
    }
};

// Complexity Analysis

// Time complexity: O(n)O(n)

// The time complexity is O(n)O(n) because the recursive function is T(n) = 2 \cdot T(n/2)+1T(n)=2⋅T(n/2)+1.
// Space complexity: O(n)O(n)

// The worst case space required is O(n)O(n), and in the average case it's O(\log n)O(logn) where nn is number of nodes.



//Approach 2 : Iterative Approach
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        stack<TreeNode*>stk;
        TreeNode *curr = root;
        while(curr!=NULL or !stk.empty()){
            while(curr!=NULL){
                stk.push(curr);
                curr = curr->left;
            }
            curr = stk.top();
            stk.pop();
            ans.push_back(curr->val);
            curr = curr->right;
        }
        
        return ans;
    }
};


// Complexity Analysis

// Time complexity: O(n)O(n)

// Space complexity: O(n)O(n)



//Approach 3 : Morris Traversal 
***********Not Yet Solved***********

*/