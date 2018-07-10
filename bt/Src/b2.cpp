#include<bits/stdc++.h>
using namespace std;

main(){
	string a;
	int t=0,h=0;
	getline(cin,a);
	for(int i=0;i<a.size();i++){
		if('a'<=a[i]&&a[i]<='z') t++;
		if('A'<=a[i]&&a[i]<='Z') h++;
	}
	cout<<"So ki tu hoa :"<<h<<endl<<"So ki tu thuong :"<<t;
}


