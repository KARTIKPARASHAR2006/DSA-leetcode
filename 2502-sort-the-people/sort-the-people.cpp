#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights){
        int n = heights.size();
        for (int i = 0; i < n - 1; i++){
            int maxId = i;
            for (int j = i + 1; j < n; j++){
                if (heights[j] > heights[maxId]){
                    maxId = j;
                }
            }
            swap(heights[i],heights[maxId]);
            swap(names[i], names[maxId]);
        }
        return names;
    }
};