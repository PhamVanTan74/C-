#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
class dt{
	private:
		int n,a[10];
	public:
		dt(){
			n=0;
			a[n]=0;
		}
		dt(int b[10],int c){
			n=c;
			for(int i=0;i<c;i++)
				a[i]=b[i];
		}
		~dt(){
			n=0;
			a[n]=0;
		}
		void nhap(){
			cout<<"\nNhap bac cua da thuc:";
			cin>>n;
			cout<<"\nNhap he so cua da thuc:";
			for(int i=0;i<=n;i++){
				cout<<"\na["<<i+1<<"]=";
				cin>>a[i];
			}
		}
		void xuat(){
			cout<<a[n]<<"x^"<<n;
			for(int i=n-1;i>=1;--i){
				if(a[i]>0){
					cout<<"+"<<a[i]<<"x^"<<i;
				}else if(a[i]<0){
					cout<<a[i]<<"x^"<<i;
				}
				if(a[i]>=0){
					cout<<"+"<<a[0];
				}else
					cout<<a[0];
				}
			}
		dt tong(dt dt2){
			dt tong;
				if(n>=dt2.n)
				{
					tong.n=n;
					for(int i=0; i<=dt2.n ;i++)
					{
						tong.a[i]=a[i]+dt2.a[i];
					}
					for(int i=dt2.n+1 ;i<=n; i++)
						tong.a[i]=a[i];
				}else if(n<dt2.n)
					{
						tong.n=dt2.n;
						for(int i=0;i<=n;i++)
						{
							tong.a[i]=dt2.a[i]+a[i];
						}
						for(int i=n+1;i<=dt2.n;i++)
							tong.a[i]=dt2.a[i];
					}
					return tong;
		}
		dt hieu(dt dt2){
			dt hieu;
			if(n>=dt2.n)
				{
					hieu.n=n;
					for(int i=0; i<=dt2.n ;i++)
					{
						hieu.a[i]=a[i]-dt2.a[i];
					}
					for(int i=dt2.n+1 ;i<=n; i++)
						hieu.a[i]=a[i];
				}else if(n<dt2.n)
					{
						hieu.n=dt2.n;
						for(int i=0;i<=n;i++)
						{
							hieu.a[i]=dt2.a[i]-a[i];
						}
						for(int i=n+1;i<=dt2.n;i++)
							hieu.a[i]=(-1)*dt2.a[i];
					}
					return hieu;
		}	
};
main(){
	dt dt1,dt2;
	cout<<"\nNhap da thuc 1: ";  dt1.nhap();
	cout<<"\nNhap da thuc 2: ";  dt2.nhap();
	cout<<"\nDa thuc 1: ";  dt1.xuat();
	cout<<"\nDa thuc 2: "; dt2.xuat();
	cout<<"\nTong da thuc: "; dt1.tong(dt2).xuat();
	cout<<"\nHieu da thuc: "; dt1.hieu(dt2).xuat();
	getch();
}
