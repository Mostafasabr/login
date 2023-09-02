#include<iostream>
#include<string>
using namespace std;
int main(){
  string num_txt;
  char letar;
  int num;
cout<<"===============\n";
cout<<"=====hello=====\n";
cout<<"===============\n";
cout<<"number or text: ";
cin>>num_txt;
if(num_txt=="number"){cout<<"entr your number:";
cin>>num;
cout << char(num) << "\n"; }

else if(num_txt=="text"){cout<<"entr your text:";
cin>>letar;
cout << int(letar) << "\n";  }
  return 0;
}