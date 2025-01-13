#include<iostream>
#include<math.h>
#include<string>
using namespace std;
class nv{
	private:
		string ht,cv,gt,dc;
		int ns,nvl;
	public:
		nv(){
			ht= "";
			cv= "";
			gt= "";
			dc= "";
			ns=0;
			nvl=0;
		}
		void nhap(){
			cin.ignore();
			cout<<"Nhap ho ten: ";
			getline(cin,ht);
			cout<<"\nNhap chuc vu: ";
			getline(cin,cv);
			cout<<"\nNhap gioi tinh: ";
			getline(cin,gt);
			cout<<"\nNhap dia chi: ";
			getline(cin,dc);

			cout<<"\nNhap nam sinh: ";cin>>ns;
			cout<<"\nNhap nam vao lam: ";
			cin>>nvl;
		}
		void xuat(){
			cout<<"\nHo ten: "<<ht<<"\nChuc vu: "<<cv<<"\nGioi tinh: "<<gt<<"\nNam sinh: "<<ns<<"\nDia chi: "<<dc<<"\nNam vao lam: "<<nvl<<endl;
		}
		int tinhtuoi(){
			return 2025-ns;
		}
		bool nghihuu(){
			if((gt == "nam" && tinhtuoi()>=60) || (gt == "nu" && tinhtuoi()>=55 ))
		{
			return true;
		}
			return false;
		}
		bool namvaolam(){
			return 2025-nvl;
		}
};
int main(){
	nv a[10];
	int i,n;
	
	cout<<"\n Nhap so luong nhan vien: ";cin>>n;
	
	for(i=0;i<n;i++){
		cout<<"\nNhan vien thu "<<i+1<<":\n";
		a[i].nhap();
	}
	cout<<"\n\tDanh sach nhan vien: ";
	for(i=0;i<n;i++){
		a[i].xuat();
	}
	cout<<"----------------------------";
	cout<<"\n\tDanh sach nhan vien nghi huu: ";
	for(i=0;i<n;i++){
		if(a[i].nghihuu())
			a[i].xuat();
	}
	cout<<"\n----------------------------";
	cout<<"\n\tDanh sach nhan vien lam viec tren 20 nam: ";
	for(i=0;i<n;i++){
		if(a[i].namvaolam())
			a[i].xuat();
	}
}
