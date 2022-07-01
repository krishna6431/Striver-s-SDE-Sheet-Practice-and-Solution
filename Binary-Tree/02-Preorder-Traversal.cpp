// Binary Tree Strivers DSA Sheet Solutions
// Code Written By Krishna (krishna_6431)
// Date : Jul 1 2022


/*
 
//Approach 1 : Recursive 
class Solution {
public:
    
    void solver(TreeNode *root , vector<int>&ans){
        if(root==NULL)return;
        ans.push_back(root->val);
        solver(root->left,ans);
        solver(root->right,ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        solver(root,ans);
        return ans;
    }
};

// Complexity Analysis

// Time complexity: O(n)O(n)

// The time complexity is O(n)O(n) because the recursive function is T(n) = 2 \cdot T(n/2)+1T(n)=2⋅T(n/2)+1.
// Space complexity: O(n)O(n)

// The worst case space required is O(n)O(n), and in the average case it's O(\log n)O(logn) where nn is number of nodes.


//Approach 2 :  Iterative
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root == NULL)return ans;
        //stack of nodes
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty()){
            root = st.top();
            st.pop();
            ans.push_back(root->val);

            //Noticable Line 
            if(root->right!=NULL)st.push(root->right);
            if(root->left!=NULL)st.push(root->left);
        }
        return ans;
    }
};


// Complexity Analysis

// Time complexity: O(n)O(n)

// Space complexity: O(n)O(n)




*/