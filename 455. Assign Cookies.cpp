class Solution {
public:
int findContentChildren(vector<int>& g, vector<int>& s) {
sort(begin(g),end(g));
sort(begin(s),end(s));
int i(0),j(0);
int ans=0;
while(i<g.size() && j<s.size()){
if(g[i]<=s[j]){
ans++;
i++,j++;
}
else
{
j++;
}
}
cout<<"Saumyamani Bhardwaz_20BCS1682"<<endl;
return ans;
}
};
