class Solution {
private:
    vector<int> topS(vector<vector<int>> &adjLis,  vector<int> &present){
        vector<int> indegree(26,0);
        for(int i=0;i<26;i++){
            for(auto it: adjLis[i]){
                indegree[it]++;
            }
        }
        vector<int> ans;
        queue<int> q;
        for(int i=0;i<26;i++){
            if(present[i] && indegree[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(auto it: adjLis[node]){
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }
        return ans;
    }
public:
    string foreignDictionary(vector<string>& words) {
        int n = words.size();
        vector<int> present(26,0);
        vector<vector<int>> adjLis(26);
        for(int i=0;i<n-1;i++){
            string s1 = words[i];
            string s2 = words[i+1];
            int k = min(s1.size(),s2.size());
            if(s1.size()>s2.size() && s1.substr(0,s2.size())==s2){
                return "";
            }
            for(int j=0;j<k;j++){
                if(s1[j]!=s2[j]){
                    adjLis[s1[j]-'a'].push_back(s2[j]-'a');
                    break;
                }
            }

        }
        for(string word : words){
            for(char ch: word){
                present[ch-'a'] = 1;
            }
        }
        int count = 0;

    for(int i=0;i<26;i++){
        if(present[i]) count++;
        }

    
        vector<int> topSort = topS(adjLis, present);
        if(topSort.size() != count){
        return "";
    }
        string s="";
        for(int i=0;i<topSort.size();i++){
            s = s + char(topSort[i] + 'a');
        }
        return s;
    }
};
