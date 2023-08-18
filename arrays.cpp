#include<iostream>
using namespace std;

int main()
{
    
    //input
    
    int arr[10];
    cout<<"give inputs for array:"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    
    //output
    
    cout<<"array is ";
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<", "<<endl;
    }

    //biggest and smallest
    
    int biggest=arr[0],smallest=arr[0];
    for(int i=0;i<10;i++)
    {
        if(arr[i]>biggest)
        biggest=arr[i];
    }
    for(int i=0;i<10;i++)
    {
        if(arr[i]<smallest)
        smallest=arr[i];
    }
    cout<<"biggest number = "<<biggest<<endl;
    cout<<"smallest number = "<<smallest<<endl;

    //peak

    int peak[8],ifpeak=0;
    for(int i=1;i<9;i++)
    {
        if(arr[i-1]<arr[i]&&arr[i+1]<arr[i])
        {
            cout<<"peak value= "<<arr[i]<<" ";
            ifpeak++;
        }
    }
    if(ifpeak==0)
    {
        cout<<"Peak value does not exist"<<endl;
    }
    
    //search
    int condition=0;
    char ans;
    cout<<"Do you wanty to search for a number?"<<endl<<"y for yes and n for no"<<endl;
    cin>>ans;
    if(ans=='y'||ans=='Y')
        {
        do{
        cout<<"which number do you want to search?"<<endl;
        int search,var=0,num;
        cin>>search;
        for(int i=0;i<10;i++)
        {
            if (search==arr[i])
            {
            var++;
            num=i+1;
            }
        }
        if (var==0)
        cout<<"Number not found";
        else
        cout<<"the number "<<search<<" found at "<<num<<" place";
        cout<<"Do you wanna search for another number?"<<endl<<"Press any number for yes and 1 for no"<<endl;
        cin>>condition; 
        }
        while(condition!=1);
        }
    else if(ans=='n'||ans=='N')
    {
        cout<<"okay!";
    }
    else
    cout<<"Wrong input";
    return 0;
}


//5 6 8 4 0 2 1 5 6 4 