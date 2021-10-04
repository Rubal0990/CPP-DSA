queue<int> modifyQueue(queue<int> q, int k) {
    int n = q.size();
    stack<int> stk;
    for(int i=0;i<k;i++){
        int d = q.front();
        stk.push(d);
        q.pop();
    }
    while(!stk.empty()){
        int d = stk.top();
        q.push(d);
        stk.pop();
    }
    for(int i=0;i<(n-k);i++){
        int d = q.front();
        q.pop();
        q.push(d);
    }
    
    return q;
    
}