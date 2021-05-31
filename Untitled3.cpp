#include<iostream>
#include<fstream>
using namespace std;
void NhapMang(int n, int *a) {
	for(int i=0;i<n;i++)
		cin >> *(a+i);
}
void Sx(int n, int *a) {
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++) 
			if(a[i] > a[j]) {
				int tmp = *(a+i);
				*(a+i) = *(a+j);
				*(a+j) = tmp;
			}
}
int main() {
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int *a = new int [n];
	cout<<"Nhap mang co " << n<<" phan tu: ";
	NhapMang(n,a);
	ofstream outf; 
	outf.open("ABC01.txt");
	for(int i=0;i<n;i++)
		outf<<*(a+i)<<" ";
	outf<<endl;
	Sx(n,a);
	for(int i=0;i<n;i++)
		outf<<*(a+i)<<" ";
	outf.close();
	ifstream inf;
	inf.open("ABC01.txt");
	cout<<endl;
	while(!inf.eof()){
		char data[255];
		inf.getline(data, 255, '|');
		cout << data << endl;
	}
	inf.close();
	return 0;
	
}
	
	
	
