#include<iostream>
using namespace std;
void Interchange_Sort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i] > a[j]){
                swap(a[i],a[j]);
            }
        }
    }
}

int main(){
    int a[]={51,29,30,17,25,16,13,5};
    int n=8;
    Interchange_Sort(a,n);
    cout<<"a[]={";
    for(int i=0;i<n;i++){
        cout<<a[i];
        if(i<n-1) cout<<",";
    }
    cout<<"}"<<endl;
}