#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int search(int arr[],int size ,int index,int target){
    if(index>=size){
        return -1;
    }
    if (arr[index]==target){
        return index;
    }
    search(arr,size,index+1,target);
}

void print_occurces(int arr[],int size ,int index,int target){
    if(index>=size){
        return;
    }
    if (arr[index]==target){
        cout<<index<<endl;
    }
    print_occurces(arr,size,index+1,target);
}

void no_digit(int number,vector<int> &vec){
    if(number==0){
        return;
    }
    int rem=number%10;
    vec.push_back(rem);
    number=number/10;
    no_digit(number,vec);

}

int main(int argc, char const *argv[])
{

    int number=512;
    vector<int> vec;
    no_digit(number ,vec);

    reverse(vec.begin(), vec.end());
    for (int element : vec) {
        cout << element << " ";
    }


    
    // int arr[]={10,20,10,40,10};
    // int size=5;
    // int target=10;
    // int index=0;

    // print_occurces(arr,size,index,target);

    // int ans=search(arr,size,index,target);
    // cout<<ans<<endl;
    return 0;
}
