/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        if(pre.size() == 0 || vin.size() == 0)
            return NULL;
        
        return Create(pre,0,pre.size()-1,vin,0,vin.size()-1);
    }
    
    TreeNode* Create(vector<int>& pre,int pleft,int pright,vector<int> vin,int vleft,int vright)
        {
        if(pleft > pright)
            return NULL;
        
        TreeNode* root = new TreeNode(pre[pleft]);
        
        int count = 0;
        int i = 0;
        for(i = vleft; i <= vright; ++i)
            {
            if(vin[i] == pre[pleft])
                break;
            ++count;
        }
        
        root->left = Create(pre,pleft+1,pleft+count,vin,vleft,i - 1);
        root->right = Create(pre,pleft+count+1,pright,vin,i+1,vright);
        
        return root;
    }
};