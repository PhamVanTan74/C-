#include<iostream>
#include<math.h>
using namespace std;
class tamgiac{
	private:
		int a,b,c;
	public:
		tamgiac(){
			a=b=c=0;
		}
		~tamgiac(){
		}
		tamgiac(int a1,int b1,int c1){
			a=a1;
			b=b1;
			c=c1;
		}
		
		bool hople(){
			return (a>0 && b>0 & c>0 && a+c>b && a+b >c && b+c>a);
		}
		//chuvi 3 giac
		double cv(){
			if(!hople()){
				return 0;
			}
			return a+b+c;
		}
		//dt tamgiac
		double dt(){
			if(!hople()){
				return 0;
			}
			double p=cv()/2;
			return sqrt(p*(p-a)*(p-b)*(p-c));
		}
		
		void nhap(){
			do {
				cout<<"Nhap do dai canh a: ";cin>>a;
				cout<<"\nNhap do dai canh b: ";cin>>b;
				cout<<"\nNhap do dai canh c: ";cin>>c;
				if(!hople()){
					cout<<"\nKhong tao thanh tam giac vui long nhap lai. ";
				}
				} while(!hople());
			}
		void xuat(){
			cout<<"\nCanh a: "<<a<<"\nCanh b: "<<b<<"\nCanh c: "<<c<<endl;
		}
};
int main(){
	tamgiac t[10],tg;
	int i,n;
	
	cout<<"\nNhap so luong tam giac: ";cin>>n;
	for(i=0;i<n;i++){
		cout<<"\nNhap tam giac thu "<<i+1<<":\n";
		t[i].nhap();
	}
	cout<<"\n\tDanh sach tam giac: ";
	for(i=0;i<n;i++){
		t[i].xuat();
	}
	
	for(i=0;i<n;i++){
		cout<<"\nChu vi tam giac: "<<t[i].cv();
	}
	
	for(i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(t[i].dt() > t[j].dt()){
				tg=t[i];
				t[i]=t[j];
				t[j]=tg;
			}
		}
	}

	for(i=0;i<n;i++){
		cout<<"\n\tDanh sach tam giac theo thu tu giam dan:"<<t[i].dt();
	}
	
}
