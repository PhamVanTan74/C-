#include<iostream>
#include<math.h>
using namespace std;
class ts{
	private:
		string mats,ht;
		float dt,dl,dh;
	public:
		ts(){
			mats= "";
			ht= "";
			dt=dl=dh=0;
		}
		void nhap(){
			cin.ignore();
			cout<<"Nhap ma thi sinh :";
			getline(cin,mats);
			cout<<"\nNhap ho ten: ";
			getline(cin,ht);
			cout<<"\nNhap diem toan: ";
			cin>>dt;
			cout<<"\nNhap diem ly: ";
			cin>>dl;
			cout<<"\nNhap diem hoa:";
			cin>>dh;
		}
			float tongdiem(){
			return dt+dl+dh;
			}
		void xuat(){
			cout<<"\nMa thi sinh: "<<mats<<"\nHo ten:"<<ht<<"\nDiem toan: "<<dt<<"\nDiem ly: "<<dl<<"\nDiem hoa: "<<dh<<endl;
			cout<<"\nTong diem:"<<tongdiem()<<endl;
		}
		bool diemyc(){
			return tongdiem() >=21 && dt>=2 && dl>=2 && dh>=2;
		}
};
main(){
	ts t[10],max;
	int i,n;
	
	cout<<"\nNhap so luong thi sinh: ";cin>>n;
	
	for(i=0;i<n;i++){
	cout<<"\nSo luong thi sinh thu "<<i+1<<":\n";
		t[i].nhap();
	}
	max=t[0];
	for(i=0;i<n;i++){
		if(t[i].tongdiem()>max.tongdiem()){
			max=t[i];
		}
	}
	cout<<"\nTS co tong diem cao nhat: ";
		max.xuat();
		
	cout<<"\nDanh sach thi sinh co tong diem >=21 va khong co mon nao duoi 2:\n ";
	for(i=0;i<n;i++){
		if(t[i].diemyc()){
			t[i].xuat();
			cout<<"------------------"<<endl;
		}
	}
	
}
