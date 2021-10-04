class Solution{
    public:
    vector<int> postOrder(Node* node) {
       // code here
       vector<int> v;
       if(node==NULL)
       {
           return v;
       }
       stack<Node*> st,res;
       st.push(node);
       while(!st.empty())
       { 
           Node* temp=st.top();
           st.pop();
           res.push(temp);
           
           if(temp->left) st.push(temp->left);
           if(temp->right) st.push(temp->right);
       }
       while(!res.empty())
       {
           Node* temp=res.top();
           v.push_back(temp->data);
           res.pop();
       }
       return v;
   }
};