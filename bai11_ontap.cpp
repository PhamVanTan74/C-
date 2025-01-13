#include<iostream>
#include<conio.h>
using namespace std;
class ng{
	protected:
		string ht;
		int ns;
	public:
		void nhapng(){
			cin.ignore();
			cout<<"Nhap ho ten: ";
			getline(cin,ht);
			cout<<"\nNhap nam sinh: ";cin>>ns;
		}
		void xuatng(){
			cout<<"\nHo ten: "<<ht<<"\nNam sinh: "<<ns<<endl;
		}
		string getht(){
			return ht;
		}
};
class sv:public ng{
	private:
		string masv;
		float dtb;
	public:
		void nhap(){
			nhapng();
			cin.ignore();
			cout<<"\nNhap ma sv: ";
			getline(cin,masv);
			cout<<"\nNhap diem trung binh: ";
			cin>>dtb;
		}
		float getdtb(){
			return dtb;
		}
		string getmasv(){
			return masv;
		}
		void xuat(){
			xuatng();
			cout<<"\nMasv: "<<masv<<"\nDTB: "<<dtb<<endl;
		}
};
int main(){
	sv s[10],tg,gd;
	int i,n;
	cout<<"\nNhap so luong sinh vien: ";cin>>n;
	
	for(i=0;i<n;i++){
		cout<<"\nNhap sinh vien thu: "<<i+1<<":\n";
		s[i].nhap();
	}
	cout<<"\n Danh sach sinh vien gom: ";
	for(i=0;i<n;i++){
		s[i].xuat();
	}
	
	for(i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(s[i].getdtb() < s[j].getdtb()){
				tg=s[i];
				s[i]=s[j];
				s[j]=tg;
			}
		}
	}
	cout<<"\nDanh sach sap xep giam dan: ";
	for(i=0;i<n;i++){
		s[i].xuat();
	}
	//sap xep tang dan
	for(i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(s[i].getdtb() > s[j].getdtb()){
				tg=s[i];
				s[i]=s[j];
				s[j]=tg;
			}
		}
	}
	cout<<"\nDanh sach sap xep tang dan: ";
	for(i=0;i<n;i++){
		s[i].xuat();
	}
	
	cin.ignore();
	string id;
	cout<<"\nNhap masv or ht de tim: ";
	getline(cin,id);
	
	bool tk=false;
	for(i=0;i<n;i++){
		if(s[i].getmasv()==id || s[i].getht()==id){
			cout<<"\n Thong tin sv tim thay: \n";
			s[i].xuat();
			tk=true;
			break;
		}
	}
	if(!tk){
		cout<<"\nKhong tim thay sv voi thong tin vua nhap."<<endl;
	}
	getch();
}
