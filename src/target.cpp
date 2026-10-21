#include <iostream>
#include <vector>
using std::vector;
using std::cout;

vector<int> targetVector(vector<int>nums, vector<int>index)
{
    vector<int>target;
    for(int i=0; i<nums.size(); i++)
    {
        target.insert(target.begin()+index[i], nums[i]);
    }
    return target;
}

int main()
{
    vector<int>nums = {1,2,5,7,8};
    vector<int>index = {0,1,1,2,3};
    vector<int> a = targetVector(nums, index);
    for (int i = 0; i<a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}