class Solution {
public:
    string reverseVowels(string s) {
        string  vowels = "aeiouAEOIU";
        for(int i = 0  , j = s.length()-1 ; j > i  ;){
                  if(vowels.find(s[i]) == -1 ) 
                        i ++ ; 
                  if(vowels.find(s[j]) == -1 ) 
                        j-- ;
                  if(vowels.find(s[j]) != -1 && vowels.find(s[i]) != -1){
                        swap(s[j],s[i]);
                        i++;
                        j--;
                } 
                     
        }
        return s; 
        
    }

        


};