#include<iostream>
#include<string>
using namespace std;

class bankAccount{
// this are called properties of the class
public :

string name;
string type;
int age;
string branchName;

// This are called methods / member function of the class 
void changebranch(string newBranch ){
  branchName =newBranch;

}
};

int main()
{

bankAccount account1;

account1.name ="Sanidhya Pathak";
account1.type ="current";
account1.age =18;
account1.branchName = "Punjab National Bank";


cout<< account1.name <<endl <<account1.age << endl <<account1.branchName ; 


   return 0;
}