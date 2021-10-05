stack<int> _push(int arr[],int n)
{
  stack<int> st;
  int min = arr[0];
  for(int i=0;i<n;i++)
  {
      if(arr[i]<min)
      {
          min = arr[i];
      }
      st.push(min);
  }
  return st;
}


void _getMinAtPop(stack<int>s)
{
   while(!s.empty())
   {
       cout<<s.top()<<" ";
       s.pop();
   }
}
