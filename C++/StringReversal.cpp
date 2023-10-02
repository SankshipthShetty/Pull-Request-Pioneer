#include<iostream>
using namespace std;



void rev(string &arr,int s,int e)
{    
    if(s>e){
        return;
    }  
    swap(arr[s],arr[e]);
    
    s++;
    e--;
    rev(arr,s,e);
}
int main(){
   string arr="abcde";
   rev(arr,0,arr.length()-1);
   cout<< arr;
}
