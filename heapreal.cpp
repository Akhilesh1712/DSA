#include <iostream>
using namespace std;
int main()
{
	cout<<" ";
	return 0;
}
/*class heap{
    public: 
       int arr[100];
       int size;
       heap()
       {
           arr[0]=-1;
           size=0;
       }
       void insert(int val)
       {
           size=size + 1;
           int index=size;
           arr[index]=val;
           while(index > 1)
           {
               int parent=index/2;
               if(arr[parent] < arr[index])
               {
                   swap(arr[parent],arr[index]);
                   index=parent;
               }
               else
               {
                   return;
               }
           }
         }  
        void print()
           {
               for(int i=1;i<=size;i++)
               {
                   cout<<arr[i]<<" ";
               }
               cout<<endl;
           }
        void deleteroot()
           {
               if(size==0)
               {
                   return ;
               }
               arr[1]=arr[size];
               size--;
               int i=1;
               while( i < size)
               {
                   int leftindex=2*i;
                   int rightindex=2*i + 1;
                   if(leftindex <= size || rightindex <= size && arr[leftindex] < arr[rightindex])
                   {
                       if(arr[rightindex] > arr[i])
                       {
                           swap(arr[rightindex],arr[i]);
                           i=rightindex;
                       }
                       else
                       {
                           return;
                       }
                   }
                   if(leftindex <= size || rightindex <= size && arr[leftindex] > arr[rightindex])
                   {
                       if(arr[leftindex] > arr[i])
                       {
                           swap(arr[leftindex],arr[i]);
                           i=leftindex;
                       }
                       else
                       {
                           return;
                       }
                   }
               }
           }
       
};
int main() {
    heap hp;
    int n;
    cout<<"enter the heap elements"<<endl;
    cout<<"number of element you want to insert"<<endl;
    cin>>n;
    int p;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        hp.insert(p);
    }
    hp.print();
    hp.deleteroot();
    hp.print();
    return 0;
}*/
 //Heapify function to maintain heap property.
  /*  void heapify(int arr[], int n, int i)  
    {
      int largest =i;
      int left=2*i + 1;
      int right=2*i + 2;
      if(left < n && arr[left] > arr[largest])
      {
          largest=left;
      }
      if(right < n && arr[right] > arr[largest])
      {
         largest=right;
      }
      if(largest != i)
      {
          swap(arr[i],arr[largest]);
          heapify(arr,n,largest);
      }
    
    }*/
