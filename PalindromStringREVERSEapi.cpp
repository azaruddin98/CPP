#include <iostream>
#include<cstring>
#include<algorithm>

using namespace std;
int main() {
string s = "level";
string rev = s;
reverse(rev.begin(),rev.end());
cout<<s<<endl;
cout<<rev<<endl;
if(!strcmp(s.c_str(),rev.c_str())){
    cout<<"palindrom string"<<endl;
}
else
{
    cout<<"string is not palindrom"<<endl;
}
}
