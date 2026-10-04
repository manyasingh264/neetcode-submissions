class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>ans;
        for(int i=0;i<strs.size();i++){
            string sortedstr=strs[i];
            sort(sortedstr.begin(),sortedstr.end());
            ans[sortedstr].push_back(strs[i]);
        }
        vector<vector<string>>res;
        for(auto& pair:ans){
            res.push_back(pair.second);
        }
        return res;
    }
};
