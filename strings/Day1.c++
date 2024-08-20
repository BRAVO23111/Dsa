#include <bits/stdc++.h>

string removeParenthesis(string s ){
    string result ;
    int open = 0;
    for( char c : s){
        if( c == '(' && open++ > 0) result += c;
        if( c == ')' && --open > 0) result += c;
    } 
    return result ;
}

String Reverseword(string s){
    string ans = " ";
    string temp = " ";
    int right = s.length() - 1;
    int left = 0;
    while(left <= right){
        char ch = s[left];
        if( ch != ' '){
            if(ans != " " ){
                temp += ch;
            }
            else if (ch == " "){
                ans = temp + " " + ans ;
            }
            else{
                ans = temp ;
            }
            temp = " ";
        }
    }
    left++;
 while(!temp.isempty()){
    if(!ans.isempty()){
        ans = temp + " " + ans ;
    }
    else{
        ans = temp ;
    }
 }
 return ans ;
 }

string largestOddNumber(string num) {
    for(int i = num.length() - 1 ; i>=0 ; i--){
        if((num[i] - '0') % 2 == 1){
            return num.substr(0 , i+1)
        }
    }
    return "" ;
}