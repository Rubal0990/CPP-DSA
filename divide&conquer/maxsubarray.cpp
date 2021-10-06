#include<bits/stdc++.h>
using namespace std;


int maxcrossing(int A[],int low,int high,int mid){
    int leftsum=INT_MIN;
    int sum =0;
    for(int i=mid;i>=low;i--){
        sum=sum + A[i];
        if(sum>leftsum){
            leftsum = sum;
        }
    }
        int rightsum=INT_MIN;
        sum=0;
        for(int i=mid+1;i<=high;i++){
            sum = sum +A[i];
            if(sum>rightsum){
                rightsum=sum;
            }
        }
    
    return leftsum+rightsum;
}
int maxsum(int A[],int low,int high){
    if(high==low){
        return A[low];
    }
    else{
      int mid = (low+high)/2;
      int lsum = maxsum(A,low,mid);
      int rsum = maxsum(A,mid+1,high);
      int csum = maxcrossing(A,low,high,mid);
      if(lsum>=rsum && lsum>=csum){
             return lsum;
      }
      else if(rsum>=lsum && rsum>=csum){
          return rsum;
      }
      else{
          return csum;
      }
    }
}
int main(){
    int A [] = {0,13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-22,15,-4,7};
    cout<<maxsum(A,1,16);
}