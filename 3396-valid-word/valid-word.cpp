class Solution {
public:
    bool isVowel(char c){
        c = tolower(c);
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') return true;
        return false;
    }
    bool isValid(string word) {
        if(word.size()<3) return false;
        int vowel = 0;
        int consonant = 0;
        for(int i=0;i<word.size();i++){
            if(!isalnum(word[i])) return false;
            if(isVowel(word[i])) vowel++;
            else if(!isdigit(word[i]))consonant++;
        }
        if(vowel>0 && consonant>0) return true;
        else return false;
    }
};