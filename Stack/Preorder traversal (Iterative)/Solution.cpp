class Solution{
    public:
    vector<int> preOrder(Node* root)
    {
        vector<int>ans;
        if(root == NULL) return ans;
        
        stack<Node*>st;
        st.push(root);
        
        while(!st.empty()){
            Node *cur = st.top();
            st.pop();
            ans.push_back(cur->data);
            if(cur->right) st.push(cur->right);
            if(cur->left) st.push(cur->left);
        }
        return ans;
    }
};
