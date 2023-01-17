#include<bits/stdc++.h>
#include "map_bst.h"
int main(){
    CP::map_bst<int,int> m,m2;
    int a[]={4,2,6,1,3,5,7};
    for(int i=0;i<7;++i){
        m[a[i]]=a[i]*10;
        m2[a[i]]=a[i]*10;
    }
    m2.mirrorRoot();
    m.print();
    m2.print();
}