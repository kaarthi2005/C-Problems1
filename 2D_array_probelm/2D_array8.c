#include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int arr[R][C];
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            scanf("%d",&arr[i][j]);

    int maxUnique=0, deptIndex=0;
    for(int i=0;i<R;i++) {
        int freq[1000]={0}, unique=0; 
        for(int j=0;j<C;j++) {
            if(freq[arr[i][j]]==0) unique++;
            freq[arr[i][j]]++;
        }
        if(unique > maxUnique) {
            maxUnique = unique;
            deptIndex = i;
        }
    }
    printf("%d\n", deptIndex);
    return 0;
}