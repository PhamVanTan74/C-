#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
class ps{
	protected:
		int tuso;
		int mauso;
	public:
		ps(){
			tuso=0;
			mauso=1;
		}
		ps(int tuso1,int mauso1){
			tuso=tuso1;
			mauso=mauso1;
		}
		~ps(){
		}
		void nhap(){
			cout<<"Nhap tu so:";
			cin>>tuso;
			cout<<"Nhap mau so:";
			cin>>mauso;
		}
		void xuat(){
			cout<<" "<<tuso<<"/"<<""<<mauso;	
		}
		
		ps rutgon();
		
		int ucln(int a,int b){
			if(a==b)
			return a;
				else
				{
					while(a!=b)
					{
					if(a>b)
						a=a-b;
					else
						b=b-a;
					}	
					return a;
				}
		}
		
		ps operator + (ps c){
			ps cong;
			cong.tuso=tuso*c.mauso+mauso*c.tuso;
			cong.mauso=mauso*c.mauso;
			return cong;
		}
		ps operator - (ps t){
			ps tru;
			tru.tuso=tuso*t.mauso-mauso*t.tuso;
			tru.mauso=mauso*t.mauso;
			return tru;
		}
		ps operator *(ps n){
			ps nhan;
			nhan.tuso=tuso*n.tuso;
			nhan.mauso=mauso*n.mauso;
			return nhan;
		}
		ps operator / (ps th){
			ps thuong;
			thuong.tuso=tuso*th.mauso;
			thuong.mauso=mauso*th.tuso;
			return thuong;
		}	
};
		ps ps::rutgon(){
			ps r;
			r.tuso=tuso/ucln(tuso,mauso);
			r.mauso=mauso/ucln(tuso,mauso);
			return r;
		}
class ps2:public ps{
	public:
		ps2 operator =(const ps2& a){
			this->tuso=a.tuso;
			this->mauso=a.mauso;
			return *this;
		}
		bool operator >(const ps2& a){
			return tuso*a.mauso>a.tuso*mauso;
		}
		bool operator <(const ps2& a){
			return tuso*a.mauso<a.tuso*mauso;
		}
};
int main()
{
	ps2 p[10],max,tg;
	int i,n;
	cout<<"\n Nhap so luong phan so:";cin>>n;
	if(n<0 || n>10){
		cout<<"\n So luong phan so toi da khong vuot qua 10";
		return 1;
	}
	for(i=0;i<n;i++){
			cout<<"\n Phan so thu "<<i+1<<"\n";
			p[i].nhap();
	}
		cout<<"\n Day phan so gom;";
	for(i=0;i<n;i++){
		p[i].rutgon().xuat();
	}
	max=p[0];
	for(i=1;i<n;i++)
	if(p[i]>max){
		max=p[i];
		cout<<"\n phan so lon nhat la:";
		max.xuat();
	}

	for(i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
		if(p[i]>p[j])
		{
			tg=p[i];
			p[i]=p[j];
			p[j]=tg;
		}
		cout<<"\n Day so sau sap xep:";
		for(i=0;i<n;i++)
		{
			p[i].xuat();
		}
		ps tong;
		for(i=0;i<n;i++){
				tong=tong+p[i];
		}
		cout<<"\n Tong cua phan so:";
			tong.rutgon().xuat();
		getch();
}

