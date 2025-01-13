#include<iostream>
#include<math.h>
using namespace std;
class time{
	private:
		int h,m,s;
		void chuanhoa() 
		{
        if (s >= 60) {
            m += s / 60;
            s %= 60;
        } else if (s < 0) {
            m -= (abs(s) + 59) / 60;
            s = (s % 60 + 60) % 60;
        }

        if (m >= 60) {
            h += m / 60;
            m %= 60;
        } else if (m < 0) {
            h -= (abs(m) + 59) / 60;
            m = (m % 60 + 60) % 60;
        }

        if (h >= 24) {
            h %= 24;
        } else if (h < 0) {
            h = (h % 24 + 24) % 24;
        }
    }
	public:
		time(){
			h=0;
			m=0;
			s=0;
		}
		~time(){
		}
		time(int h1,int m1,int s1){
			h=h1;
			m=m1;
			s=s1;
			chuanhoa();
		}
		void nhap(){
					cout<<"\nNhap gio: ";cin>>h;
					cout<<"\nNhap phut: ";cin>>m;
					cout<<"\nNhap giay: ";cin>>s;
					chuanhoa();
		}
		void xuat(){
			chuanhoa();
		    cout << (h < 10 ? "0" : "") << h << ":"
		         << (m < 10 ? "0" : "") << m << ":"
		         << (s < 10 ? "0" : "") << s << endl;
		}	
		time operator++() { 
	        s++;
	        chuanhoa();
	        return *this;
	    }
	    time operator--() { 
	        s--;
	        chuanhoa();
	        return *this;
	    }
};
int main(){
	time t1;
	t1.nhap();
	cout<<"\nThoi gian bat dau: ";
	t1.xuat();
	
	++t1;
	cout<<"\nSau khi tang 1 giay: ";
	t1.xuat();
	
	--t1;
	--t1;
	cout<<"\nSau khi giam 1 giay: ";
	t1.xuat();
	
}
