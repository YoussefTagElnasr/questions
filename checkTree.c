
bool checkTree(struct TreeNode* root) {

    struct TreeNode* ptr = root;
    int num1 = ptr -> val;

    ptr = ptr -> right;
    int num2 = ptr -> val;

    ptr = root;
    ptr = ptr -> left;
    int num3 = ptr -> val;

    if(num1 == num2 + num3)
        return true;
    else
        return false;   

}