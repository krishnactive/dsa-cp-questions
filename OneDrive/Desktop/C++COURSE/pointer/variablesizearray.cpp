#include <iostream>
#include <string>

using namespace std;
int main() {
   int *array, size;
   cout<<"Enter size of array: "<<endl;
   cin>>size;
   array = new int [size];
   cout<<"Enter array elements: "<<endl;

   for (int i = 0; i < size; i++)
   cin>>array[i];
   cout<<"The array elements are: ";

   for(int i = 0; i < size; i++)
   cout<<array[i]<<" ";
   cout<<endl;
   delete []array;
   return 0;
}