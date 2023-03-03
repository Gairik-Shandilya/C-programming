#include<stdio.h>
#include<stdbool.h>
int main(){
    int k,m,i=0,j=0;
    scanf("%d %d",&k,&m);
    int lights[m];
    for(i=1;i<=m;i++){
        lights[i]=0;
    }
    while(k--){
        int X;
        scanf("%d",&X);
        int arr2[X];
        for(i=1;i<=X;i++){  
            scanf("%d",&arr2[i]);       
        }
        for(i=1;i<=m;i++){
            for(j=1;j<=X;j++){
                if(arr2[j]==i){
                    lights[i]++;
                }
            }             
        }
    }
    bool flag=true;
    for(i=1;i<=m;i++){
        if(lights[i]==0){
            flag=false;
            break;
        }
        else{
            flag=true;
        }
    }
    if(flag==true){
        printf("YES\n");
    }
    else if(flag==false){
        printf("NO\n");
    }
    return 0;   
}
