#include<iostream>
using namespace std;
class SortingAlgo
{
   public :
      static int* BubbleSort(int arr[],int n)
      {
         int i, j;
         bool swapped;
         for (i = 0; i < n; i++) 
         {
            swapped=false;
            for (j = 0; j < n - 1; j++) 
            {
                  if (arr[j] > arr[j + 1]) 
               {
                     swap(arr[j], arr[j + 1]);
                     swapped=true;
                  }
            }
            if(!swapped)
                 break;
         }
         return arr;
      }
      static int* SelectionSort(int arr[], int n)
      {
         int i, j, min_idx;
         for (i = 0; i < n - 1; i++) 
         {
            min_idx = i;
            for (j = i + 1; j < n; j++) 
            {
                  if (arr[j] < arr[min_idx])
                     min_idx = j;
            }
            if (min_idx != i)
                  swap(arr[min_idx], arr[i]);
         }
         return arr; 
      }
      static int * InsertionSort(int arr[], int n)
      {
         int i, key, j;
         for (i = 1; i < n; i++) 
         {
            key = arr[i];
            j = i - 1;
            while (j >= 0 && arr[j] > key) 
            {
                  arr[j + 1] = arr[j];
                  j = j - 1;
            }
            arr[j + 1] = key;
         }
         return arr;
      }
      static void merge(int array[], int const left, int const mid,int const right)
      {
         int const subArrayOne = mid - left + 1;
         int const subArrayTwo = right - mid;
         auto *leftArray = new int[subArrayOne],
               *rightArray = new int[subArrayTwo];
         for (int i = 0; i < subArrayOne; i++)
            leftArray[i] = array[left + i];
         for (int j = 0; j < subArrayTwo; j++)
            rightArray[j] = array[mid + 1 + j];
         int indexOfSubArrayOne = 0, indexOfSubArrayTwo = 0;
         int indexOfMergedArray = left;
         while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) 
         {
            if (leftArray[indexOfSubArrayOne]<= rightArray[indexOfSubArrayTwo]) 
            {
                  array[indexOfMergedArray]= leftArray[indexOfSubArrayOne];
                  indexOfSubArrayOne++;
            }
            else 
            {
                  array[indexOfMergedArray]= rightArray[indexOfSubArrayTwo];
                  indexOfSubArrayTwo++;
            }
            indexOfMergedArray++;
         }
         while (indexOfSubArrayOne < subArrayOne) 
         {
            array[indexOfMergedArray]= leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
            indexOfMergedArray++;
         }
         while (indexOfSubArrayTwo < subArrayTwo) 
         {
            array[indexOfMergedArray]= rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
            indexOfMergedArray++;
         }
         delete[] leftArray;
         delete[] rightArray;
      }
      static int * MergeSort(int array[], int const begin, int const end)
      {
         if (begin >= end)
            return 0;
         int mid = begin + (end - begin) / 2;
         MergeSort(array, begin, mid);
         MergeSort(array, mid + 1, end);
         merge(array, begin, mid, end);
         return array ;
      }
      
      static int partition(int arr[],int low,int high)
      {
         int pivot=arr[high];
         int i=(low-1); 
         for(int j=low;j<=high-1;j++)
         {
            if(arr[j]<pivot)
            {
                  i++;
                  swap(arr[i],arr[j]);
            }
         }
         swap(arr[i+1],arr[high]);
         return (i+1);
      }   
      static int * QuickSort(int arr[],int low,int high)
      {
         if(low<high)
         {
            int pi=partition(arr,low,high);
            QuickSort(arr,low,pi-1);
            QuickSort(arr,pi+1,high);
         }
         return arr; 
      }
};
void print(int arr[],int s)
{
   for(int i=0;i<5;i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}
int main()
{
   int arr[] ={5,2,4,7,3};
   int *res  ;
   print(arr,5);
   cout<<"Bubble Sort"<<endl;
   res=SortingAlgo::BubbleSort(arr,5);
   print(res,5);
   cout<<"Selection Sort"<<endl;
   res=SortingAlgo::SelectionSort(arr,5);
   print(res,5);
   cout<<"Insertion Sort"<<endl;
   res=SortingAlgo::SelectionSort(arr,5);
   print(res,5);
   cout<<"Merge Sort"<<endl;
   res=SortingAlgo::MergeSort(arr,0,4);
   print(res,5);
   cout<<"Quick Sort"<<endl;
   res=SortingAlgo::QuickSort(arr,0,4);
   print(res,5);
}