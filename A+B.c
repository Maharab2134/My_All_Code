//poblem Number: 1772A
//Povlem Name: A+B?

#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char a[5];
        scanf("%s",&a);
        printf("%d\n",a[0]+a[2]-96);
    }
}