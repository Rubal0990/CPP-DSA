void SortedStack :: sort()
{
  priority_queue<int>p;
  stack<int>q;
  while(!s.empty())
  {
      p.push(s.top());
      s.pop();
  }
  while(!p.empty())
  {
      q.push(p.top());
      p.pop();
  }
  
  while(!q.empty())
  {
     
      s.push(q.top());
      q.pop();
  }
}