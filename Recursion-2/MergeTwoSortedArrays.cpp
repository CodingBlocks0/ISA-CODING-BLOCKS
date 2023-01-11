#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[] , int arr2[] , int n , int m){
    int output[n+m];

    int i = 0; // arr1 ka index
    int j = 0; // arr2 ka index
    int k = 0; // output array ka index

    while ( i < n and j < m ){
        if (arr2[j] < arr1[i]){
            output[k] = arr2[j];
            j++;
            k++;
        }
        else {
            output[k] = arr1[i];
            i++;
            k++;
        }
    }

    while (j < m){
        output[k] = arr2[j];
        j++;
        k++;
    }

    while (i < n){
        output[k] = arr1[i];
        k++;
        i++;
    }


    for (int L = 0 ; L < n+m ; L++){
        cout << output[L] << " ";
    }
}


int main(){

    int n , m;
    cin >> n >> m;

    int arr1[n];
    int arr2[m];

    for (int i = 0 ; i < n ; i++){
        cin >> arr1[i];
    }

    for (int j = 0 ; j < m ; j++){
        cin >> arr2[j];
    }

    merge(arr1 , arr2 , n , m);
}

