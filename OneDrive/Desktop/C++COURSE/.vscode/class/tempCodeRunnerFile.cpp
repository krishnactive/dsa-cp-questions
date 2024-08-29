    vector<int>s;
for(int i=0;i<ar.size();i++){
    for(int j=i+1;j<ar.size();j++){
        if(ar[i]==ar[j]){
            s.push_back(ar[i]);
            ar.erase(ar.begin()+i-1);
            ar.erase(ar.begin()+j-1); 
            break;      
        }
        
    }
}
cout<<s.size();
return s.size();
}