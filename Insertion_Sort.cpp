#include<iostream>
using namespace std;
void Insertion_Sort(int a[],int n){
    int pos,i,x;
    for(i=1;i<n;i++){
        x=a[i];
        pos=i-1;
    while( ( pos>=0 ) && ( a[pos] < x )){
        a[pos+1]=a[pos];
        pos--;
    }
        a[pos+1] = x;
    }
}
int main(){
    int a[]={18,1,-3,16,9,22,75,12,40};
    int n=9;
    Insertion_Sort(a,n);
    cout<<"a[]={";
    for(int i=0;i<n;i++){
        cout<<a[i];
        if(i<n-1) cout<<",";
    }
    cout<<"}"<<endl;
}