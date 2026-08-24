class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>ans;
        for(int i=0;i<strs.size();i++){
            string sortedS= strs[i];
            sort(sortedS.begin(),sortedS.end()); //Sort the characters of the string to form a key.
            ans[sortedS].push_back(strs[i]); //Append the original string to the list corresponding to this key.
        }
        vector<vector<string>>result;
        for(auto& pair:ans){
            result.push_back(pair.second);
        }
        return result;
    }
};
