class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string s;
        for (int i = 0; i < nums.size(); i++){
            s += '0';
        }
        if (find(nums.begin(), nums.end(), s) == nums.end()){
            cout << s << " ";
            return s;
            
        }
        int ind = s.size() - 1;;
        
        while (true){
            if (ind < 0){
                cout << s << " ";
                return s;
            }
            s[ind] = '1';
            if (find(nums.begin(), nums.end(), s) == nums.end()){
                cout << s << " ";
                return s;
            }
            string tmp = s;
            ind++;
            while (next_permutation(tmp.begin(), tmp.end())){
                if (find(nums.begin(), nums.end(), tmp) == nums.end()){
                    return tmp;
                }
                cout << tmp << " ";
            }
            ind--;
        }
        return s;
       
    }
};
