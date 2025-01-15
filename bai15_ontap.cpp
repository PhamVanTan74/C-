#include<iostream>
#include<string>
#include<math.h>
using namespace std;
class ns{
	protected:
		string manv,ht;
		int ns;
	public:
		void nhapns(){
			cin.ignore();
			cout<<"Nhap manv: ";
			getline(cin,manv);
			cout<<"\nNhap ho ten: ";
			getline(cin,ht);
			cout<<"\nNhap nam sinh: ";
			cin>>ns;
		}
		void xuatns(){
			cout<<"\nMa nhan vien: "<<manv<<"\nHo ten: "<<ht<<"\nNam sinh: "<<ns<<endl;
		}
};
class cb:public ns{
	public:
		int lcb,hsl;
	public:
		void nhap(){
			nhapns();
			cout<<"\nNhap luong co ban: ";
			cin>>lcb;
			cout<<"\nNhap he so luong: ";
			cin>>hsl;
		}
		void xuat(){
			xuatns();
			cout<<"\nLuong co ban: "<<lcb<<"\nHe so luong: "<<hsl<<endl;
		}
		int tinhluong(){
			return lcb*hsl;
		}
};
int main(){
	cb cbo[10],gd;
	int i,n;
	cout<<"\nNhap so luong nhan vien: ";cin>>n;
	for(i=0;i<n;i++){
		cout<<"\nNhap nhan vien thu "<<i+1<<":\n";
		cbo[i].nhap();
	}
	cout<<"------------------";
	cout<<"\n\tDanh sach can bo: ";
	for(i=0;i<n;i++){
		cbo[i].xuat();
	}
	
	cout<<"\n\t Danh sach can bo theo thu tu luong giam dan:";
	for(i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(cbo[i].tinhluong() < cbo[j].tinhluong()){
				gd=cbo[i];
				cbo[i]=cbo[j];
				cbo[j]=gd;
			}
		}
	}
		for(i=0;i<n;i++){
			cbo[i].xuat();
		}
}
