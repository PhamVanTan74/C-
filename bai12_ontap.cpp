#include<iostream>
#include<math.h>
#include<string>
using namespace std;
class sv{
	private:
		string ht;
		int ns;
		float diem[5]={0};
		float dtb;
		
		float tinhdtb(){
			float tong=0;
			for(int i=0;i<5;i++){
				tong+=diem[i];
			}
			return dtb=tong/5;
		}
	public:
		sv(){
			ht= "";
			ns=0;
			dtb=0;
		}
		void nhap(){
			cout<<"Nhap ho ten: ";
			cin.ignore();
			getline(cin,ht);
			cout<<"\nNhap nam sinh: ";cin>>ns;
			for(int i=0;i<5;i++){
				cout<<"\nNhap diem mon hoc "<<i+1<<":\n ";
				cin>>diem[i];
			}
			tinhdtb();
		}
		void xuat(){
			cout<<"\nHo ten: "<<ht<<"\nNam sinh: "<<ns<<endl;
			cout<<"\nDiem cac mon: ";
			for(int i=0;i<5;i++){
				cout<<quydoidiem(diem[i])<< " ";
			}
			cout<<"\nDiem trung binh cac mon: "<<dtb<<endl;
		}
		
		string quydoidiem(float diem){
			if(diem>=8.5) return "A";
				if(diem>=7 && diem<8.5) return "B";
					if(diem>=5.5 && diem<7) return "C";
						if(diem>=4 && diem<5.5) return "D";
							return "F";
		}
		bool doantn(){
			bool da=true;
			if( tinhdtb()>=7 ){
			for(int i=0;i<5;i++){				
					if(diem[i]<5){
						da=false;
					}	
			}	return da;
		}
}
		bool thitotnghiep(){
			bool tn=true;
			if( tinhdtb()<7 ){
			for(int i=0;i<5;i++){
					if(diem[i]<5)
					{
						tn=false;
					}
				}
				return tn;	
		}
}
		bool monthilai(){
			bool tl=false;
			for(int i=0;i<5;i++){
				if(diem[i]<5){
					cout<<"\nMon "<<i+1<<" Thi lai.";
					tl=true;
				}
			}
			return tl;
		}
};
int main(){
	sv s[10];
	int i,n;
	
	cout<<"\nNhap so luong sv: ";cin>>n;
	
	for(i=0;i<n;i++){
		cout<<"\nNhap sinh vien thu "<<i+1<<":\n";
		s[i].nhap();
	}
	for(i=0;i<n;i++){
		cout<<"\n\tDanh sach sinh vien: ";
		s[i].xuat();
	}
	cout<<"\n\tDanh sach sinh vien thi lai:";
	for(i=0;i<n;i++){	
		if(s[i].monthilai())
			s[i].xuat();
	}
	
	cout<<"\n\tDanh sach thi tot nghiep: ";
	for(i=0;i<n;i++){
		if(s[i].thitotnghiep()){
			s[i].xuat();
		}
	}
	
	cout<<"\n\tDanh sach lam do an: ";
	for(i=0;i<n;i++){
		if(s[i].doantn()){
			s[i].xuat();
		}
	}
}
