class Solution {
   public:
    bool isAnagram(string s, string t) {
        bool ans = false;
        if(s.length()==t.length()){
            int i=0;
            while(i<s.length()){
                int j=0;
                bool found = false;
                while(j<t.length()){
                    if(s[i]==t[j]){
                        found = true;
                        t.erase(j,1);
                        s.erase(i,1);
                    }else{
                        j++;
                    }
                }
                if(found==false){
                    i++;
                }
            }
            if(s.length()==0 && t.length()==0){
                ans = true;
            }
        }
        else{
            ans = false;
        }
        return ans;
    }
};
