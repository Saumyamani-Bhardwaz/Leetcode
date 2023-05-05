class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string>ans;
        for(int hr = 0; hr < 12; hr++){
            for(int min = 0; min < 60;min++){
                if(__builtin_popcount(hr) + __builtin_popcount(min) == turnedOn){
                    if(min < 10){
                        ans.push_back(to_string(hr) + ":0" + to_string(min));
                    }
                    else{
                        ans.push_back(to_string(hr) + ":" + to_string(min));
                    }
                }
            }
        }
        cout<<"Saumyamani Bhardwaz_20BCS1682"<<endl;
        return ans;
    }
};
