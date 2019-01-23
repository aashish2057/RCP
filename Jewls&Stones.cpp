class Solution {
public:
    int numJewelsInStones(string J, string S) {
        char stone;
        char jewel;
        int counter;
        for(int i = 0; i < S.length(); i++)
        {
            stone = S.at(i);
            for(int x = 0; x < J.length(); x++)
            {
                jewel = J.at(x);
                if(stone == jewel)
                {
                    counter++;
                }
            }
        }
        return counter;
    }
};