#include <string>
#include <iostream>
using namespace std;
class FB{
private :
int nohp;
string email;
public :
FB(string email,int nohp);
int getnohp();
string getemail();
string nama(){
		return "nurrahman";
	};
	string id(){
		return "nurrmanuye";
	};
	int umur(){
		return 20;
	};
};
FB::FB(string email,int nohp){
cout << "Data FB" << endl;
this->nohp = nohp;
this->email = email;
}
string FB::getemail(){
return this->email;
}
int FB::getnohp(){
return this->nohp;
}
FB fb = FB("nurrman11@gmail.com",813276932);
int main(){
	char i;
	cout<<"pengunjung atau penguna?"<<endl;
	cout<<"pengunjung tekan X, pengguna tekan y"<<endl;
	cin>>i;
	if(i=='y'||i=='Y'){
	cout<<"nomer hp : "<<fb.getnohp()<<endl;
	cout<<"alamat email : "<<fb.getemail()<<endl;}
	if(i=='x'||i=='X'){
	cout<<"nama : "<<fb.nama()<<endl;
	cout<<"id FB : "<<fb.id()<<endl;
	cout<<"umur : "<<fb.umur()<<endl;}
 return 0;
}
