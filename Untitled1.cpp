#include<iostream>
#include<iomanip>
using namespace std;
struct sinhvien {
	char ten[20];
	int tuoi;
	float diemToan, diemHoa, diemLy;
};
int main() {
	int n;
	cout<<"Nhap so sinh vien: ";
	cin>>n;
	struct sinhvien a[n];
	for(int i=0;i<n;i++){
		fflush(stdin);
		cout<<"Nhap ten sinh vien: ";
		gets(a[i].ten);
		cout<<"Nhap tuoi: ";
		cin>>a[i].tuoi;
		cout<<"Nhap lan luot diem Toan, Hoa, Ly: ";
		cin>>a[i].diemToan>>a[i].diemHoa>>a[i].diemLy;
	}	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<"Ten sinh vien: "<<a[i].ten<<endl;
		cout<<"Tuoi sinh vien: "<<a[i].tuoi<<endl;
		cout<<fixed<<setprecision(1)<<"Diem trung binh cua sinh vien: "<<(a[i].diemToan+a[i].diemHoa+a[i].diemLy)/3<<endl;
	}	
}
