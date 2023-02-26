#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n], rem[7]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        rem[a[i]%7]++;
    }
    int result = (rem[0] * (rem[0]-1))/2  ;
    result = result + rem[1]*rem[6] + rem[2]*rem[5] + rem[3]*rem[4];
    printf("%d",result);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    return 0;
}
