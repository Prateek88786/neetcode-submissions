class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m){
            return false;
        }

        map<char,int> m1;
        for(auto i:s){
            m1[i]++;
        }
        map<char,int> m2;
        for(auto i:t){
            if(m2[i]++);
        }

        if(m1==m2){
            return true;
        }
        return false;

        
    }
};
