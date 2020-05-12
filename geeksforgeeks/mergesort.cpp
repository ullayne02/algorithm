void merge(int arr[], int l, int m, int r)
{
    int s1 = m - l + 1; 
    int s2 = r - m; 
    
    int arr1[s1];
    int arr2[s2]; 
    int i, j = 0; 
   
    for(i = l; i <= m; i++){
        arr1[j] = arr[i]; 
        j++;
    }
    j = 0; 
    for(i = m + 1; i<=r ;i++){
        arr2[j] = arr[i];
        j++;
    }
    
    i = j = 0; 
    int k = l; 
    while(i < s1 && j < s2){
        if(arr1[i] < arr2[j]){
            arr[k] = arr1[i];
            i++;
        }else{
            arr[k] = arr2[j];
            j++;
        }
        k++; 
    }
    while(i < s1){
        arr[k] = arr1[i];
        i++;
        k++;
    }
    
    while(j < s2){
        arr[k] = arr2[j];
        j++;
        k++;
    }
}

void mergesort(int l, int r, int[]arr){
    if(l < r) {
        int mid = l + (r - l)/2;
        mergesort(l, mid, arr);
        mergesort(mid, r, arr);
        merge(arr, l, mid, r); 
    }
}