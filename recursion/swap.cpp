#include<iostream>
#include<string>
using namespace std;
void reverse(string &s,int start,int end)
{
    if(start>=end) return;
    swap(s[start++],s[end--]);
    

    reverse(s,start,end);
    

}
int main(){
    string s;
    cout<<"enter a string to be swapped" << endl;
    cin>>s;
    reverse(s,0,s.length()-1);
    cout<<"the reversed string is :\n"<<s<<endl;

}