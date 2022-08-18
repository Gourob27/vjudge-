#include<iostream>
using namespace std;
string s;
main(){
	cin>>s;
	cout<<(s.find('i',s.find('d',s.find('i',s.find('e',s.find('h')))))==-1?"NO":"YES");
}