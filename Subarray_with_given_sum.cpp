using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int arr[1000000];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    long long int sum=0,l=0,flag=0;
	    int i;
	    for( i=0;i<n;i++)
	    {
	        if(i<n)
	         sum=sum+arr[i];
	         
	        while(sum>x)
	        {
	            sum=sum-arr[l];
	            l++;
	        }
	        if(sum==x)
	        {
	            flag=1;
	            break;
	        }
	       
	    }
	    if(flag)
	    cout<<l+1<<" "<<i+1<<endl;
	    else
	    cout<<"-1"<<endl;
	}
	return 0;
}
