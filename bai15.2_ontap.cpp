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
class cn:public ns{
	public:
		int ngaycong;
	public:
		void nhap(){
			nhapns();
			cout<<"\nNhap ngay cong: ";
			cin>>ngaycong;
		}
		void xuat(){
			xuatns();
			cout<<"\nNgay cong: "<<ngaycong;
		}
		
		int tienthuong(){
			if(ngaycong>26){
				return (ngaycong-26)*100000;
			}
			return 0;
		}
		
};
int main(){
	cn c[10];
	int i,n;
	cout<<"\nNhap so luong cong nhan: ";cin>>n;
	for(i=0;i<n;i++){
		cout<<"\nNhap cong nhan thu "<<i+1<<":\n";
		c[i].nhap();
	}
	cout<<"\n\tDanh sach cong nhan: ";
	for(i=0;i<n;i++){
		c[i].xuat();
	}
	cout<<"\n\tDanh sach cong nhan duoc thuong: ";
	for(i=0;i<n;i++){
		if(c[i].tienthuong()){
		c[i].xuat();
		cout<<"\nTien thuong: "<<c[i].tienthuong();
		}
	}
}
