class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack,int curr=0)
    {
        // code here.. 
        if(s.empty()||curr==sizeOfStack)return;
        int temp=s.top();
        s.pop();
        deleteMid(s,sizeOfStack,curr+1);
        if(curr!=sizeOfStack/2) s.push(temp);
    }
};