#include<bits/stdc++.h>
using namespace std;

int check(int ngay,int thang,int nam ){
	
	switch(thang){
		case 1:
			if(ngay>=1&&ngay<=31) return 1;
			else return 0;
			
			break;
		case 2 :
			if(ngay>=1&&ngay<=29&&nam%4==0) return 1;
			else if(ngay>=1&&ngay<=28&&nam%4!=0) return 1;		
			else return 0;
			break;
		
		case 3 :
			if(ngay>=1&&ngay<=31) return 1;
			else return 0;
			
			break;
			
		case 5 :
			if(ngay>=1&&ngay<=31) return 1;
			else return 0;
		
			break;
		
		case 7 :
			if(ngay>=1&&ngay<=31) return 1;
			else return 0;
		
			break;
		case 8 :
			if(ngay>=1&&ngay<=31) return 1;
			else return 0;
		
			break;
		case 10 :
			if(ngay>=1&&ngay<=31) return 1;
			else return 0;
			
			break;
		case 12 :
			if(ngay>=1&&ngay<=31) return 1;
			else return 0;
			
			break;
		case 4 :
			if(ngay>=1&&ngay<=30) return 1;
			else return 0;
			
			break;
		case 6 :
			if(ngay>=1&&ngay<=30) return 1;
			else return 0;
			
			break;
		case 9 :
			if(ngay>=1&&ngay<=30) return 1;
			else return 0;
			
			break;
		case 11 :
			if(ngay>=1&&ngay<=30) return 1;
			else return 0;
			
			break;
		default:
			return 0;
		
	}
}

main(){
	
	int ngay,thang,nam;
	cout<<"Ngay: ";cin>>ngay;
	cout<<"Thang: ";cin>>thang;
	cout<<"Nam: ";cin>>nam;
	if(check(ngay,thang,nam)) {
		if(nam%4==0) cout<<"Nam nhuan";
		else cout<<"Hop le";
	}
	else 
		cout<<"Khong hop le";

}



