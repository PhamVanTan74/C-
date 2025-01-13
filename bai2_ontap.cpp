#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
class sp{
	protected:
		int pt;
		int pa;
	public:
		ps(){
			pt=0;
			pa=0;
		}
		ps(int a,int b){
			pt=a;
			pa=b;
		}
		
		friend istream &operator>>(istream &is,sp &p){
			cout<<"Nhap PT: ";is>>p.pt;
			cout<<"\nNhap PA: ";is>>p.pa;
			return is;
		}
		friend ostream &operator<<(ostream &os,sp p){
			if(p.pa>0)
				os<<p.pt<<"+"<<p.pa<<"i"<<endl;
			else
				os<<p.pt<<p.pa<<"i"<<endl;
				return os;
		}
		sp operator + (sp p1){
			sp cong;
			cong.pt=pt+p1.pt;
			cong.pa=+pa+p1.pa;
			return cong;
		}
		sp operator -(sp p1){
			sp tru;
			tru.pt=pt-p1.pt;
			tru.pa=pa-p1.pa;
			return tru;
		}
		sp operator * (sp p1){
			sp tich;
			tich.pt=pt*p1.pt+pt*p1.pa;
			tich.pa=pa*p1.pt-pa*p1.pa;
			return tich;
		}
		sp operator /(sp p1){
			sp thuong;
			double mau=0;
			mau=p1.pt*p1.pt+p1.pa*p1.pa;
			thuong.pt=(pt*p1.pt+pa*p1.pa)/mau;
			thuong.pa=(pa*p1.pt-pa*p1.pa)/mau;
			return thuong;
		}
};
class sp2:public sp{
	public:
		sp2 operator= (const sp2 &a){
			this->pt=a.pt;
			this->pa=a.pa;
			return *this;
		}
		double modun() const{
			return sqrt(pt*pt+pa*pa);
		}
		bool operator > (const sp2 &a) {
			return this->modun() > a.modun();
		}
		bool operator <(const sp2 &a){
			return this->modun() < a.modun();
		}
		bool operator == (const sp2 &a){
			return this->modun() == a.modun();
		}
};
int main(){
	sp2 p[10],tg,max,min;
	int i,n;
	cout<<"Nhap so luong so phuc:";
	cin>>n;
	
	if(n<0 || n>10){
		cout<<"\nSo luong so phuc khong hop le";
		return 1;
	}
	
	//nhap cac so phuc
	for(i=0;i<n;i++){
		cout<<"\n So phuc thu "<<i+1<<":\n";
		cin>>p[i];
	}
	
	//hien thi danh sach so phuc
	 cout << "\nDanh sach so phuc gom:";
    for (int i = 0; i < n; i++) 
	{
        cout << "\nSo phuc thu " << i+1 <<":";
        cout<<p[i];
    }
    
    //sap xep tang dan
    for(i=0;i<n-1;i++)
    	for(int j=i+1;j<n;j++)
    	if(p[i]>p[j])
		{
    		tg=p[i];
    		p[i]=p[j];
    		p[j]=tg;
		}
		cout<<"\nSap xep theo thu tu tang dan:\n";
		for(i=0;i<n;i++){
			cout<<p[i]<<" ";
		}
	
	//sap xep giam dan	
	for(i=0;i<n-1;i++)
    	for(int j=i+1;j<n;j++)
		if(p[i]<p[j])
		{
    		tg=p[i];
    		p[i]=p[j];
    		p[j]=tg;
		}
		cout<<"\nSap xep theo thu tu giam dan:\n";
		for(i=0;i<n;++i){
			cout<<p[i]<<" ";
		}
		
		//tim so phuc lon nhat
		max=p[0];
		for(i=1;i<n;i++){
			if(p[i]>max){
				max=p[i];
			}
		}
		cout<<"\nSo phuc lon nhat:"<<max;
		
		//tim so phuc nho nhat
		min=p[0];
		for(i=1;i<n;i++){
			if(p[i]<min){
				min=p[i];
			}
		}
		cout<<"\nSo phuc nho nhat:"<<min;
}
	

