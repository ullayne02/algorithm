void quickSort(int arr[], int low, int high) {
    if (low < high)     {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int partition (int arr[], int low, int high)
{
   int i = low - 1; 
   
   for(int j = low; j<high;j++){
       if(arr[j] < arr[high]){
           i++; 
           swap(arr[j],  arr[i]);
       }
   }
   
   swap(arr[i+1], arr[high]); 
   
   return i+1; 
}