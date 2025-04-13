#include<iostream>
using namespace std;
void Selection_Sort(int a[],int n){
    int min;
    for(int i=0;i<n-1;i++){
            min=i;
        for(int j=i+1;j<n;j++){
            if(a[j] < a[min]){
                    min=j;
            }
        }
            swap(a[min],a[i]);
    }
}

int main(){
    int a[]={54,28,30,18,24,18,12,7};
    int n=8;
    Selection_Sort(a,n);
    cout<<"a[]={";
    for(int i=0;i<n;i++){
        cout<<a[i];
        if(i<n-1) cout<<",";
    }
    cout<<"}"<<endl;
}