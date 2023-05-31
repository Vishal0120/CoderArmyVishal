class Solution{   
public:
    int findMissing(int arr[], int n) {
        // code here
         int diff;
         
         diff=(arr[n-1]-arr[0])/n;
        
         
        int start = 0, end=n-1;
        while(start<= end){
            int mid=(start+end)/2;
            if(mid>0 && arr[mid]-arr[mid-1]!= diff)
            return arr[mid-1]+diff;
            
            else if(arr[mid+1]-arr[mid] != diff) 
            return arr[mid]+diff;
            
            else if(mid>0 && arr[mid]-arr[0] != mid*diff )
            end = mid -1;
            
            else
            start= mid+1;
        }
        return 0;
    }
};
