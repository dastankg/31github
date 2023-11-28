class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        map<int, vector<char>, greater<>> dick;
        for (auto i: s){
            mp[i]++;
        }   
        for (auto i: mp){
            dick[i.second].push_back(i.first);
        }
        string ans;
        for (auto i: dick){
            for (auto j: i.second){
                for (int k = 0; k < i.first; ++k) {
                    ans += j;
                }
            }
        }
        return ans;
    }
};
