vector<int> findAnagramsIndices(string str, string ptr, int n, int m){
    vector<int> v;
    char arr[m-1];
    for(int i=0;i<=n-m;i++){
        char ptrr[m];
        for(int c=0;c<m;c++){
            ptrr[c]=ptr[c];
        }
        for(int j=0;j<m;j++){
            arr[j]= str[i+j];
        }
        // for(int c=0;c<m;c++){
        //     cout<<arr[c];
        // }
        bool anagram = false;
        int counter = 0;
        for(int i=0;i<n;i++){
            // cout<<"x[i] : "<<x[i]<<endl;
            for(int j=0;j<n;j++){
                // cout<<"\ty[j] : "<<y[j];
                if(x[i]==y[j]){
                    y[j]=0;
                    counter++;
                    break;
                }
            }
            // cout<<endl;
        }
        if(counter==n){
            anagram=true;
        }
        if(anagram){
            v.push_back(i);
        }
        // cout<<endl;
    }
    return v;
}