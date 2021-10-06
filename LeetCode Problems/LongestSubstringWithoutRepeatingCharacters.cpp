//Using Binary Search Algo 
//Link : https://leetcode.com/problems/longest-substring-without-repeating-characters/

// Code: Leetcode format 

// ------------------------------START---------------------------------//
class Solution {
public:
    bool check(string s,int assume){
        
        vector<int> v(256,0);
        
        for(int i=0;i<assume;i++){
            v[s[i]]++;
        }
        
        int count=0;
        for(int i=0;i<256;i++){
            
            if(v[i]<=1) count+=1;
        }
        if(count==256) return 1;
        
        
        for(int j=assume;j<s.size();j++){
            
            v[s[j]]++;
            v[s[j - assume] ]--;
             count=0;
            for(int i=0;i<256;i++){

                if(v[i]<=1) count+=1;
            }
            if(count==256) return 1;
        }
        
        return 0;
    }
    int lengthOfLongestSubstring(string s) {
        
       
        int l=1,r=s.size();
        
        if(l>r) return 0;
        while(r>l)
        {
            int mid= l + (r-l + 1)/2;
            
            if(check(s,mid)){
                l=mid;
            }
            else{
                r=mid-1;
            }
        }
        
        return l;
    }
};
