#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int len=0, num=0;
    char ch = s[0];
    for(int i = 1;i<n;i++){
        if(ch==s[i]){
            num++;     
        }   
        ch = s[i];
    }
    cout<<num;
}