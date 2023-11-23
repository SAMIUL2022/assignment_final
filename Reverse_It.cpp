#include <bits/stdc++.h>

using namespace std;

class student{
public:
string nm;
int  cls;
char section ; 
int id;
};
// bool cmp(student a,student b){

// return 

// }

int main ()

{
  int n;
  cin>>n;
  student a[n];
  for (int i = 0; i < n; i++)
  {
    
    cin>>a[i].nm>>a[i].cls>>a[i].section>>a[i].id;
  }
  int j=n-1;
  for (int i = 0; i < n; i++)
  {
  
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[j].section<<" "<<a[i].id<<endl;
   j--;
   
  }
  


    return 0;
}