#include<bits/stdc++.h>
#include"map_bst.h"
int main(){
    CP::map_bst<int,int> m;
    int n=15;
    for(int i=0;i<n;++i){
        m[i]=0;
    }
    m.print();
}