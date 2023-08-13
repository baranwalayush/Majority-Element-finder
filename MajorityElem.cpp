#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v) {
	
	int n=v.size();
	int num = n/2;
	sort(v.begin(),v.end());
	int i=0,j=0;
	int cnt=0;
	while(i<=j){
          if (v[i] == v[j]) {
            cnt = j - i + 1;
            if (cnt >= num) {
              return v[i];
            }
            j++;
          }
		  else{
			  cnt=0;
			  i=j+1;
			  j++;
		  }
        }

}


/*

int majorityElement(vector<int> v) {
	
	int n=v.size();
	int num = n/2;
	sort(v.begin(),v.end());

    vector<int> hash ={0};
    for(int i=0;i<n;i++){
        hash[v[i]]++;
        if(hash[v[i]]>=num){
            return v[i];
        }
    }

}

*/