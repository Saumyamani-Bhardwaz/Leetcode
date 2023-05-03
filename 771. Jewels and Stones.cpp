class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for(char ch1 : jewels){
            for(char ch2 : stones){
                if(ch1 == ch2)
                    count++;
            }
        }
        cout<<"Saumyamani Bhardwaz_20BCS1682"<<endl;
        return count;
    }
};
