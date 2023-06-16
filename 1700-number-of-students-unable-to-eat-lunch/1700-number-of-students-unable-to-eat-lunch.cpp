class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for(auto& el: students) q.push(el);

        reverse(sandwiches.begin(), sandwiches.end());
        stack<int> s;
        for(auto& el: sandwiches) s.push(el);

        int p = 0;

        while(!q.empty() && !s.empty() && p < (int)q.size()){
            int v = q.front();
            q.pop();

            if(v != s.top()){
                q.push(v);
                p++;
            }
            else {
                s.pop();
                p = 0;
            }

        }

        return (int)q.size();
    }
};