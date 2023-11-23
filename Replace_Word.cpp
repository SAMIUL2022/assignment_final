#include <bits/stdc++.h>

using namespace std;

int main ()

{
 int t;
 cin>>t;
 while (t--)
 {
     string s;
  string k;
  cin>>s>>k;
  for(char x:s){

int fi=s.find(k);
if(fi!=-1){
    s.replace(fi,k.size(),"#");
}



  }
  cout<<s<<endl;

 }
 

    return 0;
}