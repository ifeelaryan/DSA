// print the reverse of given string {NIRVANA}

#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "NIRVANA";
    printf("Given String: %s\n",str);
    strrev(str);
    printf("Reverse String is : %s",str);
    return 0;
}