#include <stdio.h>
#include <stdlib.h>
void merge(long long arr[], long long l, long long m, long long r) {
    long long i, j, k;
    long long n1 = m - l + 1;
    long long n2 = r - m;

    // Create temp arrays
    long long L[n1], R[n2];

    // Copy data to temp arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Merge the temp arrays back into arr[l..r] in descending order
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] >= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Main function that sorts arr[l..r] using merge()
void mergeSort(long long arr[], long long l, long long r) {
    if (l < r) {
        // Find the middle point
        long long m = l + (r - l) / 2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
            merge(arr, l, m, r);
    }
}
int main(){
    long long n1,n2;
    scanf("%lld %lld",&n1,&n2);
    long long N;
    scanf("%lld",&N);
    long long arr[N];
    for(long long i=0;i<N;i++){
        scanf("%lld",&arr[i]);
    }
    long long min;
    if(n1>n2){
        min=n2;
    }else{
        min=n1;
    }
    mergeSort(arr, 0, N-1);
    int count=0;
    for(long long i=0;i<N;i++){
        long long temp=arr[i];
        while(temp>0){
            if(temp%n1==0||temp%n2==0){
                printf("%lld ",arr[i]);
                count++;
                break;
            }
            temp-=min;
        }
        if(count>=3){
            break;
        }
    }
}