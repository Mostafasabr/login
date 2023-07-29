#include <iostream>

using namespace std;
int main(){
string name_user;
string email_user;
int age_user;
int id_user;
cout<<"                welcome user\n\n";
cout<<"name:";
cin>>name_user;
cout<<"age: ";
cin>>age_user;
//cout<<"\n";
cout<<"email: ";
cin>>email_user;

cout<<"ID: ";
cin>>id_user;
  if (id_user < 10) {
    cout << "Good";
  } /*else if (id_user < 20) {
    cout << "not bad";
  }*/ else {
    cout << "ERROR.";
  }
  return 0;
}