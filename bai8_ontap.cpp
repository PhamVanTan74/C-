#include<iostream>
using namespace std;
class hv{
	protected:
		int a;
	public:
		void nhap(){
			cout<<"Nhap a:";cin>>a;
		}
		void xuat(){
			cout<<"\na= "<<a<<endl;
			
		}
		int cv(){
			return 4*a;
		}
		int dthv(){
			return a*a;
		}
};
class hcn:public hv{
	private:
		int b;
	public:
		void nhap(){
		cout<<"\nNhap a: ";
		cin>>a;
		cout<<"\n Nhap b: ";
		cin>>b;	
		}
		void xuat(){
			cout<<"\na= "<<a<<"\nb= "<<b<<endl;
		}
	int cvhcn(){
		return (a+b)*2;
	}
	int dthcn(){
		return a*b;
	}
};

int main(){
	hv hv[10],max;
	hcn hcn[10],gd;
	
	int i,n;
	cout<<"\nNhap so luong hv: ";cin>>n;
	for(i=0;i<n;i++){
		cout<<"\nHinh vuong thu "<<i+1<<":\n";
		hv[i].nhap();
	}
	//dthv lon nhat va vi tri
	max=hv[0];
	int vitri=0;
	
	for(i=0;i<n;i++){
		if(hv[i].dthv()>max.dthv())
		{
			max=hv[i];
			vitri=i;
		}
	}
		cout<<"\nDien tich hinh vuong lon nhat: ";
			max.xuat();
		cout<<"\nVi tri: "<<vitri+1<<endl;
	
	cout<<"\nNhap so luong hcn: ";cin>>n;
	for(i=0;i<n;i++){
		cout<<"\nHinh hcn thu "<<i+1<<":\n";
		hcn[i].nhap();
	}
	//ds cv hcn giam dan

	for(i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(hcn[i].cvhcn() < hcn[j].cvhcn())
			{
				//chu y thu tu
				gd=hcn[i];
				hcn[i]=hcn[j];
				hcn[j]=gd;
			}
	}
}
			cout<<"\nDay so sap xep theo chu vi giam dan:";
			for(i=0;i<n;i++){
				hcn[i].xuat();
			cout<<"Chu vi: "<<hcn[i].cvhcn()<<", Dien tich: "<<hcn[i].dthcn()<<endl;
			}			
}
