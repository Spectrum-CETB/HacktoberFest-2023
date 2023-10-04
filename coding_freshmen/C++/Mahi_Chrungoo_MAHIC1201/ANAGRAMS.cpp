#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s1, string s2)
{
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2)
    {
        return true;
    }
    return false;
}
int main()
{
  bool ans;
  string a;
  string b;
  cin>>a>>b;
  ans=isAnagram(a,b);
  if(a.length()!=b.length())
  {
    cout<<"false";
  }
  else if(ans==1)
  {
    cout<<"true";
  }
  else if(ans==0)
  {
    cout<<"false";
  }
}