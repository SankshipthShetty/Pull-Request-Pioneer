#include<iostream.h>
using namespace std;
int main(){
    cout << "Enter number";
    cin >> number;
    cout << "Enter how many multiplication tables to find : ";
    cin >> tables;
    for(int i =1; i <= tables; i++)
    {
        cout << (number * i) << endl;
    }
    return 1;
}