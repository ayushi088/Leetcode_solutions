class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        // int count[26]={0};
        // for(int i=0;i<s.size();i++){
        //     count[s[i]-'a']++;
        //     count[t[i]-'a']--;

        // }
        // for(int i=0;i<26;i++){
        //     if(count[i]!=0)return false;
        // }
        // return true;
    std::sort(s.begin(),s.end());
    std::sort(t.begin(),t.end());
    int i=0;
    int j=0;
    while(i<s.size() && j<t.size()){
        if(s[i]!=t[j]) return false;
        i++;
        j++;
    }
    return true;
    }
};