#include<bits/stdc++.h>
using namespace std;

main(){
	float p1=10000,p2=0,p3=0,p=0;
	int s;
	cin>>s;
	if(s<=1000){
		printf("%.3f VND",p1/1000);
	}
	if(s<=30000&&s>1000){
		p2=p1+(s-1000)/200*1500;
		printf("%.3f VND",p2/1000);
	}
	if(s>=30000) {
		p3=p1+(29000)/200*1500+(s-30000)/1000*8000;
		printf("%.3f VND",p3/1000);
	}
}

