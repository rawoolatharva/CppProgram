#include <iostream>
using namespace std;
int main()
{
    int no;
    cout<<"\n\tHow many numbers you want in your array? => ";
    cin>>no;

    int *arr1;
    arr1 = new int[no]; //dynamic memory allocation 

    printf("\n\tPlease enter your numbers for your array => ");
    for(int i=0; i < no; i++)
    {
        cin>>arr1[i];
    }

    // now we will create a dynamic malloc for a copy of our array
    int *arrcopy;
    arrcopy = new int[no]; //dynamic memory allocation 

    // now we will again run a loop to add the values of our array into the copy array
    for(int j=0; j < no; j++)
    {
        arrcopy[j] = arr1[j];
    }

    // now we print all the values in the array copy to see if they are the same
    cout<<"\n\tA copy of your Array is generated and looks like => \n";

    for(int k = 0; k < no; k++)
    {
        cout<<"  "<<arrcopy[k];
    }
    cout<<"\n";
    return 0;
}