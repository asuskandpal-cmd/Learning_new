#include <stdio.h>

void string(int arr[5], int n);

int main() {
    // printf("Content-Type: text/html\n\n");
    // printf("<html><body>");
    // printf("<h1>Hello from C Backd!</h1>");
    // printf("</body></html>");

    
int str1[] = {1,2,3,3,4};

string(str1,5);

    return 0;
}
void string(int arr[5], int n){

    for(int i = 0; i < n; i++){
        printf("the %dst arr = %d\n",i,arr[i]);
    }
}