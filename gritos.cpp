#include <bits/stdc++.h>
using namespace std;
 bool Esgrito(string f);
 int main(){
 	string frase;
 	cout<<"ingrese mensaje:"<<endl;
 	getline(cin,frase);
 	bool e=Esgrito(frase);
 	if(e==false){
 		cout<<"escrito"<<endl;
	 }
	if(e==true){
		cout<<"ESGRITO"<<endl;
	}
	return 0;
 }
  bool Esgrito(string f){
  	bool g=false;
  	int i;
  	for(i=0;i<f.size();i++){
  		if(f[i]=='!'){
  			g=true;
		  }
	  }
	  return g;
  }