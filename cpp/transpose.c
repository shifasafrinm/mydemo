#include<stdio.h>
int main () {

    int arr1[2][2],arr2[2][2],i,j;
    for(i=0 ; i<2 ; i++)
    {
        for(j=0 ; j<2 ; j++)
        {printf("enter num : ");
        scanf("%d",&arr1[i][j]);
    }
    }
    for(i=0 ; i<2 ; i++)
    {
        for(j=0 ; j<2 ; j++)
    

    {
        arr2[i][j]=arr1[j][i];
    }
}
    for(i=0  ; i<2 ; i++)
    {
        for(j=0 ; j<2 ; j++)
    
     {
        printf("%d",arr1[i][j]+arr2[i][j]);
        
    }
    printf(" \n");

}
    
    
    

    return 0;
    



}
