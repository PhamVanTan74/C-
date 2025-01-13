#include<iostream>
#include<string>
#include<math.h>
using namespace std;
class mh{
	protected:
		string tm;
		int cc;
		float kt,dt;
		mh(){
			tm= "";
			cc=0;
			kt=0;
			dt=0;
		}
	public:
		void nhapmh(){
			cin.ignore();
			cout<<"Nhap ten mon: ";
			getline(cin,tm);
			cout<<"\nNhap diem chuyen can: ";cin>>cc;
			cout<<"\nNhap diem kiem tra: ";cin>>kt;
			cout<<"\nNhap diem thi: ";cin>>dt;
		}
		void xuatmh(){
			cout<<"\nTen mon: "<<tm<<"\nDiem chuyen can: "<<cc<<"\nDiem kiem tra: "<<kt<<"\nDiem thi: "<<dt<<endl;
			cout<<"\nDiem hoc phan: "<<diemhocphan()<<endl;
		}
		float diemhocphan(){
			return cc*0.1+kt*0.3+dt*0.6;
		}
		
		bool camthi(){
			return cc<5 || kt==0;
		}
		
		bool thilai(){
			return diemhocphan()<4;
		}
};
class sv:public mh{
	private:
		string ht,lop,masv;
	public:
		void nhap(){
			nhapmh();
			cin.ignore();
			cout<<"\nNhap ho ten: ";
			getline(cin,ht);
			cout<<"\nNhap lop: ";
			getline(cin,lop);
			cout<<"\nNhap ma sinh vien: ";
			getline(cin,masv);
		}
		void xuat(){
			xuatmh();
			cout<<"\nHo ten: "<<ht<<"\nLop: "<<lop<<"\nMasv: "<<masv<<endl;
		}
};
int main(){
	sv s[10];
	int i,n;

		cout<<"\nNhap so luong sinh vien: ";cin>>n;
		
		if(n<=0){
			cout<<"\nkhong hop le!";
				return 1;
			}
			
		for(i=0;i<n;i++){
			cout<<"\nThong tin sv thu "<<i+1<<":\n";
					s[i].nhap();
		}
		cout<<"------------------";
		cout<<"\n \tDanh sach sinh vien: ";
		for(i=0;i<n;i++){
				s[i].xuat();
		}
		cout<<"-----------------";
	
	cout<<"\n \tDanh sach sinh vien bi cam thi: ";
		for(i=0;i<n;i++){
			if(s[i].camthi())
			{
				s[i].xuat();
			}
		}
		
		cout<<"------------------";
		cout<<"\n \tDanh sach sinh vien thi lai:";
		for(i=0;i<n;i++){
			if(s[i].thilai()){
				s[i].xuat();
			}
		}
	
}
