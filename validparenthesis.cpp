#include <iostream>
#include <stack>
using namespace std;
bool isValid(string s){
    stack<char>st;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            st.push(s[i]);
        }
        else{
            if(st.empty())return false;
            char top=st.top();
            st.pop();
            if((s[i]==')'&& top!='(')||
            (s[i]=='}'&& top!='{')||
            (s[i]==']'&&top!='[')){
                    return false;
                }//Compare with top and not st.top()
        }
    }
    return st.empty();
}
int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;
    if(isValid(s)){
        cout<<"String is valid parentheses.";
    }
    else{
        cout<<"Invalid parentheses.";
    }
    return 0;
}