// Assignment 1
//  part1.cpp
//  
//
//  Author: Danielle Pike
//

#include <stdio.h>
#include <iostream>
using namespace std;

bool isPerfect(int n);
int main()
{
    for(int i = 1; i <=10000; i++)
    {
        if(isPerfect(i))
        {
            cout << i <<endl;
        }
    }
    return 0;
}
bool isPerfect(int n)
{
    int sum = 0;
    for(int i =1; i < n; i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum == n)
    {
        return true;
    }
    return false;
}
