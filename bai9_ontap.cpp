#include<iostream>
#include<math.h>
using namespace std;
class diem{
	private:
		float x;
		float y;
	public:
		void nhap(){
			cout<<"\nNhap x: ";cin>>x;
			cout<<"\nNhap y: ";cin>>y;
		}
		void xuat(){
			cout<<"\n("<<x<<","<<y<<")"<<endl;
		}
		
		friend float kc2d(diem d1,diem d2){
			return sqrt((d2.x-d1.x)*(d2.x-d1.x)+(d2.y-d1.y)*(d2.y-d1.y));
		}
		
};
class tamgiac{
	private:
		diem A,B,C;
		float a,b,c;
	public:
		void dodai(){
			a=kc2d(A,B); //AB
			b=kc2d(B,C); //BC
			c=kc2d(C,A); //AC
		}
		void nhap(){
			cout<<"\nNhap diem A:";
			A.nhap();
			cout<<"\nNhap diem B:";
			B.nhap();
			cout<<"\nNhap diem C:";
			C.nhap();
			dodai();
		}	
		void xuat(){
			cout<<"\nDinh A: ";A.xuat();
			cout<<"\nDinh B: ";B.xuat();
			cout<<"\nDinh C: ";C.xuat();
			cout<<"\nDo dai canh AB: "<<a;
			cout<<"\nDo dai canh BC: "<<b;
			cout<<"\nDo dai canh AC: "<<c<<endl;
		}
		bool kt(){
			if((a+b>c && a+c>b && b+c>a) && (a>0 && b>0 && c>0))
			return true;
			else return false;
		}
		
		void loaitamgiac(){
			 if(a==b && b==c){
				cout<<"La tam giac deu.";
				return;
			}
			else if((a*a+b*b==c*c) || (a*a+c*c==b*b) || (b*b+c*c==a*a)){
				cout<<"La tam giac vuong.";
				return;
			}
			else if( a==b || a==c || b==c){
				cout<<"La tam giac can";
				return;
			}
		}
		
		
		
};
int main(){
	tamgiac t[10];
	int i,n;
	cout<<"\nNhap so luong tam giac: ";cin>>n;
	for(i=0;i<n;i++){
		cout<<"\nNhap tam giac "<<i+1<<":\n";
		t[i].nhap();
	}
	cout<<"\n\tDanh sach tam giac: ";
	for(i=0;i<n;i++){
		if(t[i].kt()){
			t[i].xuat();
		}
	}
	
	for(i=0;i<n;i++){
		if(t[i].kt()){
			t[i].xuat();
			t[i].loaitamgiac();
		}
	}
	
}
