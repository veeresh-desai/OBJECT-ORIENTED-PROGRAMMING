#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Person{
    public:
    void upper(string n,int a,string g){
      transform(n.begin(),n.end(),n.begin(),::toupper);
      transform(g.begin(),g.end(),g.begin(),::toupper);
      cout << n<<" "<<a<<" "<<g;
      
    }
    
};

int main(){
    string name;
    int age;
    string gender;
    cin >> name >> age >> gender ;
    Person p1;
    p1.upper(name,age,gender);
    
}