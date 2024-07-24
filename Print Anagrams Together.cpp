class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> ans;
        
        for(auto word: string_list){
            string ch = word;
            sort(ch.begin(),ch.end());
            mp[ch].push_back(word);
        }
        
        for(auto i: mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};
