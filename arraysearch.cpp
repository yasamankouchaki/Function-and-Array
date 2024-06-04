//Array&search in Array
#include <iostream>
using namespace std;
void inputArray(int arr[],int n){
    cout <<"Enter the elements of the array:";
     for(int i=0; i<n;i++){
         cin>>arr[i];
    }
}
void printArray(int arr[],int n){
    cout<<"Array elements:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int findLargest(int arr[],int n){
    int max = arr[0];
    for (int i=1;i<n;i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int findSmallest(int arr[],int n){
    int min = arr[0];
    for (int i=1;i<n;i++){
        if (arr[i]<min) {
            min=arr[i];
        }
    }
    return min;
}

int sumArray(int arr[],int n){
    int sum=0;
    for (int i=0;i<n;i++){
        sum +=arr[i];
    }
    return sum;
}

float averageArray(int arr[],int n){
    return (float)sumArray(arr,n)/n;
}

void sortArray(int arr[],int n){
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int searchArray(int arr[],int n,int target){
    for (int i=0;i<n;i++){
        if (arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    inputArray(arr,n);
    printArray(arr,n);
    cout<<"Largest element:"<<findLargest(arr,n)<<endl;
    cout<<"Smallest element:"<<findSmallest(arr,n)<<endl;
    cout<<"Sum of array elements:"<<sumArray(arr,n)<<endl;
    cout<<"Average of array elements:"<<averageArray(arr,n)<<endl;
    int sortedArr[n];
    for (int i=0;i<n;i++){
        sortedArr[i]=arr[i];
    }
    sortArray(sortedArr,n);
    cout<<"Sorted array:";
    printArray(sortedArr,n);
    int target;
    cout<<"Enter a value to search in the array: ";
    cin>>target;
    int index=searchArray(arr,n,target);
    if (index != -1) {
        cout<<"Value found at index: "<<index<<endl;
    } else {
       cout<<"Value not found in the array"<<endl;
    }

    return 0;
}
