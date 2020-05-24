//Construct Binary Search Tree from Preorder Traversal

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* bst( vector<int> &preorder, int start, int end ) {
	if( start > end ) return nullptr;

	TreeNode *node = new TreeNode( preorder[start] );

    // get the new position of end for left sub-tree
    int j = start;
	while( j <= end && preorder[start] >= preorder[j] ) j++;
	
	node->left = bst( preorder, start+1, j-1 );
	node->right = bst( preorder, j, end );
	return node;
}

TreeNode* bstFromPreorder( vector<int>& preorder ) {
	return bst( preorder, 0, preorder.size() - 1 );
}
};
