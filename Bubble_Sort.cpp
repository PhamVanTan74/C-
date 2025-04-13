#include<iostream>
using namespace std;
void Bubble_Sort(int a[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=n-1;j>i;j--){
            if(a[j] < a[j-1]) {// neu sai vi tri thi doi cho
                swap(a[j],a[j-1]);
            }
        }
    }
}

int main(){
    int a[]={23,12,1,34,5,43,8,6,55,76};
    int n=10;
    Bubble_Sort(a,n);
    cout<<"a[]={";
    for(int i=0;i<n;i++){
        cout<<a[i];
        if(i<n-1) cout<<",";
    }
    cout<<"}"<<endl;
}