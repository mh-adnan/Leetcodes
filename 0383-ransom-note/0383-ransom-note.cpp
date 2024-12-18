class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        multiset<char>s1,s2;

        for(int i=0;i<ransomNote.size();i++)
        {
            
           s1.insert(ransomNote[i]);
        }

         for(int i=0;i<magazine.size();i++)
        {
          
            s2.insert(magazine[i]);
        }

        for(auto  ch: s1)
        {
            if (s2.count(ch) < s1.count(ch)) {
                return false;
            }
        }
        return true;
        
    }
};