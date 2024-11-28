#include <iostream>
using namespace std;
class emp{
    private:
    float salary;
    public:
    int id;
    string name;
    void setSalary();
    void getSalary();
};
void emp:: setSalary(){
    cout<<"Enter your salary"<<endl;
    cin>>salary;
}
void emp:: getSalary(){
    cout<<"Your salary is "<<salary<<endl;
}
int main (){
    emp naksh;
    cout<<"Enter your employe id"<<endl;
    cin>>naksh.id;
    cout<<"Enter your name"<<endl;
    cin>>naksh.name;
    naksh.setSalary();
    cout<<"Your name is : "<<naksh.name<<endl;
    cout<<"Your id is : "<<naksh.id<<endl;
    naksh.getSalary();
    return 0;
}