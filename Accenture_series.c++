#include<bits/stdc++.h>

string ReverseWord(string s){
    string ans = '';
    string temp =" ";
    int left = 0;
    int right = s.length()-1;
    while(left <= right && s[left] ==' ') left++; 
     while(left <= right && s[right] ==' ') right--; 

     while(left<=right){
        char ch= s[left];
        if(ch != ' '){
            temp += ch;
        }
        else if(temp != ""){
            if(ans != ""){
                ans = temp + "" + ans;
            }
            else{
                ans = temp ;
            }
        }
        temp ="";
     }
     left++;
}
if(!temp.isempty()){
    if(!ans.isempty()){
        ans = temp + " "+ ans;
    }
    else{
        ans = temp ;
    }
return ans ;
}

//q2 maximum element in an array

   
int maxelement(int arr[], int size) {
    int mx = arr[0];  // Initialize max as the first element
    for(int i = 1; i < size; i++) {  // Start loop from the second element
        if(arr[i] > mx) {
            mx = arr[i];  // Update max if current element is greater
        }
    }
    return mx;
}


bool Palindromestring(string s ){
    int left = 0 ;
    int right = s.length()-1;
    while(left <=right){
       if(!isalnum(s[left])){
        left++;
       }
       else if(!isalnum(s[right])){
        right--;
       }
        else if(tolower(s[left]) != tolower(s[right])){
            return false;
        }
        else{
            left++;
            right--;
        }
    }
    return true


}

string ReverseWord(string s){
    int left = 0 ;
    int right = s.length()-1;
    string ans = "";
    string temp = "";
    while(left <= right){
        char ch = s[left];
        if(ch != ''){
            if(ans != ''){
                temp += ch;
            }
            else if(temp != ''){
                if(ans != ''){
                    ans = ans + "" + temp;
                }
                else{
                    ans = temp ;
                }
                temp ="";
            }
        left++;
        }
    if(!temp.isempty()){
        if(!ans.isempty()){
            ans = temp + "" + ans;
        }
        else{
            ans = temp ;
        }
    }
     return ans;

        }
    }

//count the vowels and consonant and whitespace

int count(string s , int length){
    int vowel = 0;
    int consonant = 0;
    int whitespace = 0;
    for(int i=0 ; i< length ; i++){
        s[i] = tolower(s[i]);
    }
    if(int i = 0 ; i<length  ; i++){
        if((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'))
      vowels++;
      else if(s[i] >= 'a' && s[i] <= 'z')
      consonant++;
      else if( s[i] = ''){
        whitespace++;
      }
    }
}

//remove vowels
string removevowels(string s){
    for(int i = 0 ; i <s.length ; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                s = s.substr(0 , i) + s.substr( i +1);
                i--
            }
    }
    return s;
}

//reverse the string
//input : hello ram
//output : mar olleh

void reverse(string &s , int i , int j){
    char temp = s[i];
    s[i] = s[j];
    s[j] = temp;
}

void reversestring(string &s){
    int i = 0 ;
    int j = s.length()-1;
    while( i < j){
        reverse(s , i , j);
        i++;
        j--;
    }

}

//calculate frequency of character in a string

int coutfrequency( string s ){
    sort(s.begin() , s.end());
    char ch = s[0];
    int count = 0 ;
    for(int i = 0 ; i<s.length() ; i++){
        if( s[i] == ch){
            count ++;
        }
        else{
            cout << ch << " ";
            count = 1 ;
            ch = s[i]; 
        }
    }
}