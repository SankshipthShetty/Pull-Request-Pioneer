#include<iostream>
#include<vector>
#include<map>
using namespace std;
vector<int> twoSum(vector<int>& a, int k) 
{
		vector<int> v;
		int n = a.size();
		map<int,int> m;
		for(int i=0;i< n;i++)
		{
			if(m.count(k-a[i]))
			{
				v.push_back(m[k-a[i]]);
				v.push_back(i);
				return v;
			}
			else
				m[a[i]]=i;
		}
        return v;        
}
    
int main(){
    vector<int> numbers;
    int number;
    cout <<"Enter number of elements : \n";
    cin >> number;
    cout <<"Enter elements : \n";
    for(int i = 0 ; i < number;i++)
    {
        int n ;
        cin >> n;
        numbers.push_back(n);
    }
    cout << "Enter target sum";
    int tsum;
    cin >> tsum;
    vector <int> ans = twoSum(numbers, tsum);
    cout << "Answer : " << endl;
    for(int i = 0 ; i < ans.size();i++)
    {
        cout << ans[i] << " ";
    }
    
    return 0;
}