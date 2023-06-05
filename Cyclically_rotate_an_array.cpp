
1st approch
void rotate(int arr[], int n)
{
    reverse(arr,arr+n-1);
    
    reverse(arr,arr+n);
}

2nd 
void rotate(int arr[], int n)
{
    int temp = arr[n-1];
    for(int i= n-1;i>=1;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}

3rd
  

//User function Template for C++

void rotate(int arr[], int n)
{
    for(int i= n-1;i>=1;i--){
        swap(arr[i],arr[i-1]);
    }
}
