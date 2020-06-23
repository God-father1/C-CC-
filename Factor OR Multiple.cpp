int t;
	cin>>t;
	while(t--){
	    int n,x,sum=0;
	    cin>>n>>x;
	    vector<int> a(n);
	    for(auto &it: a)
	        cin>>it;
	    for(int i=0;i<n;i++){
	        if(a[i]%x==0){
	            sum|=a[i];
	        }
	    }
	    cout<<sum<<"\n";
	}