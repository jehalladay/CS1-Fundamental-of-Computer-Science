/*
name:sandip neupane
language c++
kattis problem: putovanje

1.get data
    store in the vector
2.use nested for loop to solve the problem
3.output the reault.

*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <cstring>
using namespace std;


int solve(vector<int>&vec,int &capacity)
{
    vector<int>ans;
    for(int i=0;i<vec.size();i++)
    {
        int count=0;
        int weight=0;   //weight=total weight when he goes on eating
        int j=i;
        for(int j=i;j<vec.size();j++)
        {
            int can_eat=weight+vec[j];
            if(can_eat<=capacity&&can_eat!=0)
            {
                count++;
                weight+=vec[j];
                ans.push_back(count);
            }    
        }
    }
   
    return *max_element(ans.begin(),ans.end());
   
}
void input()
{
   
    vector<int>vec;
    int fruit,num,capacity;  //fruit=each fruit, num=total fruit available,capacity=max capacity he can eat
    cin>>num>>capacity;
    for(int i=0;i<num;i++)
    {
        cin>>fruit;
        vec.push_back(fruit);}
        cout<<solve(vec,capacity)<<endl;
}
void test()
{
    vector<int>test1={5, 2 ,3 ,6 ,4 ,9 ,8 ,1 ,1 ,7};
    vector<int>test2={8 ,11 ,20 ,6 ,16 ,12 ,6 ,5};
    vector<int>test3={6000,5000000};
   
    int capacity1={10};
    int capacity2={20};
    int capacity3={1000000};

    assert(solve(test1,capacity1)==4);
    assert(solve(test2,capacity2)==2);
    assert(solve(test3,capacity3)==1);

    cout<<"all test cases passed"<<endl;
}
int main(int argc, char* argv[])
{
   
    if (argc > 1 && (strncmp(argv[1], "test", 4) == 0))
        test();
    else
        input();
    return 0;
}
