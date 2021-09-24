#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Student
{
private:
    int age{}, standard{};
    string first_name{},last_name{};
public:
    void set_student(int a, string fn, string ln, int st)
    {
        age = a;
        first_name = fn;
        last_name = ln; 
        standard = st;
        cout<<age<<endl<<last_name<<", "<<first_name<<endl<<standard<<endl<<endl;
        cout<<to_string(age)<<","<<first_name<<","<<last_name<<","<<to_string(standard);
    }
};

int main()
{
    Student stu;
    string f_n, l_n;
    int age, stnd;
    cin>>age>>f_n>>l_n>>stnd;
    stu.set_student(age, f_n, l_n, stnd);
}
