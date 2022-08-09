TreeNode *minValueNode(TreeNode *node)
    {
        TreeNode *current=node;
        while(current->left != NULL)
        {
            current=current->left;
        }
        return current;
    }