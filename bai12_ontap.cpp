#include<iostream>
#include<math.h>
#include<string>
using namespace std;
class sv{
	private:
		string ht;
		int ns;
		float diem[5];
		float dtb;
		
		void tinhdtb(){
			float tong=0;
			for(int i=0;i<5;i++){
				tong+=diem[i];
			}
			dtb=tong/5;
		}
	public:
		sv(){
			ht= "";
			ns=0;
			for(int i=0;i<5;i++){
				diem[i]=0;
			}
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
				cout<<diem[i]<< " ";
			}
			cout<<"\nDiem trung binh cac mon: "<<dtb<<endl;
		}
		
		char quydoidiem(float diem){
			if(diem>=8.5) return 'A';
				if(diem>=7) return 'B';
					if(diem>=5.5) return 'C';
						if(diem>=4) return 'D';
							return 'F';
		}
		bool monthilai
};
