#include<bits/stdc++.h>
using namespace std;

void merge(int A[], int start, int mid, int end){
    int p = start , q= mid+1;
    int a[end-start+1],  k=0;
    for(int i=start; i<=end;i++){
        if(p>mid){
            a[k]=A[q];
            k++;q++;
        }
        else if(q>end){
            a[k]=A[p];
            k++;p++;
        }
        else if(A[p]<A[q]){
            a[k] = A[p];
            k++;p++;
        }
        else{
            a[k]= A[q];
            k++;q++;
        }
    }
    for(int p=0;p<k; p++){
        A[start++] = a[p];
    }

}

void merge_sort(int A[],int start , int end){
     if(start<end){
         int mid = (start+end)/2;
         merge_sort(A,start,mid);
         merge_sort(A,mid+1,end);
         merge(A,start,mid,end);

     }
}
int main(){
    int A[]={3,41,52,26,38,57,9,49,8};
    merge_sort(A,0,8);
    for(int i=0;i<=8;i++){
      cout<<A[i]<<endl;
    }
}