//Code:

class Solution{
    public:
    int findPlatform(int arr[], int dep[], int n)
    {
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	int pf = 1;
    	int j=0;
    	for(int i=1;i<n;i++){
    	    if(arr[i]<=dep[j])
    	    pf++;
    	    else
    	    j++;
    	}
    	return pf;
    }
};
