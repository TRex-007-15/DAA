#include<iostream>
using namespace std;
int main()
{
int i,k=0,temp;
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int temp;
for(i=0;k<9;i++)
{
  temp=arr[i%3][k%3];
  arr[i%3][k%3]=arr[k%3][i%3];
  arr[k%3][i%3]=temp;
  k++;
}
for()

}
