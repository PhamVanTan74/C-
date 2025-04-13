#include<iostream>
using namespace std;
void Quick_Sort(int a[],int left,int right){
    int i,j,x;
    x = a[(left+right)/2];
    i=left;
    j=right;
    do{
        while(a[i] < x) i++;
        while(a[j] > x) j--;
            if(i <= j){
                swap(a[i],a[j]);
                i++;
                j--;
            }
    }while(i <= j);
    if(left<j){
        Quick_Sort(a,left,j);
    }
    if(i<right){
        Quick_Sort(a,i,right);
    }
}
int main(){
    int a[]={23,12,1,34,5,43,8,6,55,76};
    int n=10;
    Quick_Sort(a,0,9);
    cout<<"a[]={";
    for(int i=0;i<n;i++){
        cout<<a[i];
        if(i<n-1) cout<<",";
    }
    cout<<"}"<<endl;
}