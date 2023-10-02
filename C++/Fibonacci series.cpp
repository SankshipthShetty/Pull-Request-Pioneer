#include <iostream>
using namespace std;
int main() {
    int prev=0,current=1,next=1,length;
    cout<<"Enter the length of series: ";
    cin>>length;
    for(int i=0;i<length;i++){
        cout<<current<<" ";
        prev=current;
        current=next;
        next=prev+next;
    }
}