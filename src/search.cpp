#include <iostream>
#include <vector>

using std::cout;
using std::vector;

bool searchMat(vector<vector<int>>& matrix, int target)
{
    if(matrix.empty()||matrix[0].empty())
    {
        return false;
    }
    int r = matrix.size();
    int c = matrix[0].size();
    int start = 0;
    int end = r*c-1;
    while(start<=end)
    {
        int mid = (start+end)/2;
        int value = matrix[mid/c][mid%c];
        if(target<value)
        {
            end = mid-1;
        }
        else if(target>value)
        {
            start=mid+1;
        }
        else
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>>matrix = {
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34}
    };
    cout << std::boolalpha;
    cout<<searchMat(matrix, 3)<<"\n";
    cout<<searchMat(matrix, 15)<<"\n";
}