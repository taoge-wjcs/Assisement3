#include<iostream>
#include<cstring>
#include<sstream>
using namespace std;
int main(){
	float *v1= new float[100000000];
	float *v2= new float[100000000];
	string s;
	int k1=0,k2=0;
	float sum=0;
	cout<<"enter v1:";
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(s[i]==45 || s[i]>47 && s[i]<58){
			int j=i+1;
			while(s[j]==46 || s[j]>47 && s[j]<58){
				j++;
			}
			string p= s.substr(i,j-i);
			stringstream ss;
			ss<<p;
			ss>>v1[k1];
			k1++;
			i=j;
		}
		else if(s[i]!=32){
			cout<<"please enter a right number!";
			return 0;
		}
	}
	cout<<"enter v2:";
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(s[i]==45 || s[i]>47 && s[i]<58){
			int j=i+1;
			while(s[j]==46 || s[j]>47 && s[j]<58){
				j++;
			}
			string p= s.substr(i,j-i);
			stringstream ss;
			ss<<p;
			ss>>v2[k2];
			k2++;
			i=j;
		}
		else if(s[i]!=32){
			cout<<"please enter a right number!";
			return 0;
		}
	}
	for(int i=0;i<k1;i++){
		sum+=v1[i]*v2[i];
	}
	cout<<"v1*v2="<<sum;
} 
