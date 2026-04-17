#include <iostream>
using namespace std;

class employee
{

    char name[20];
    float age;

public:
    void getdata(void);
    void putdata(void);
};
void employee ::getdata(void)
{
    cout << "Enter the Name : ";
    cin >> name;
    cout << "Enter the age : ";
    cin >> age;
}
void employee::putdata(void)
{
    cout << "name : " << name << "\n";
    cout << "age : " << age << "\n";
}

const int size = 3;
int main()
{
    employee manager[size];
    for (int i = 0; i < size; i++)
    {
        cout << "\nDetails of manager" << i + 1 << "\n";
        manager[i].getdata();
    }
    cout << "\n";
    for (int i = 0; i < size; i++)
    {
        cout << "\nManager" << i + 1 << "\n";
        manager[i].putdata();
    }
    return 0;
}