#include <stdio.h>
#include<limits.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        int largest,sec_largest;
        largest= INT_MIN;
        sec_largest=INT_MIN;
        for(int i=0;i<n;i++){
            if(a[i]>largest){
                largest=a[i];
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]<largest && a[i]>sec_largest){
                sec_largest=a[i];
            }
        }
        if(sec_largest==INT_MIN){
            sec_largest=largest;
        }
        // printf("%d\n",largest);
        // printf("%d\n",sec_largest);
        printf("%d\n",largest+sec_largest);
    }
	return 0;
}