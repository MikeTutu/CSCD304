#include<iostream>
#include<cstdlib>
#include<ctime>
#include<time.h>
#include<fstream>
using namespace std;

void Merge(int *a, int low, int high, int mid)
{
	
	int i, j, k, temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;

	while (i <= mid && j <= high)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}
 
	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}
 
	while (j <= high)
	{
		temp[k] = a[j];
		k++;
		j++;
	}
 
	for (i = low; i <= high; i++)
	{
		a[i] = temp[i-low];
	}
}
 
void MergeSort(int *a, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid=(low+high)/2;
		
		MergeSort(a, low, mid);
		MergeSort(a, mid+1, high);
 
		Merge(a, low, high, mid);
	}
}

int main()
{
	time_t start_t, end_t;
   double diff_t;
	
	int res, num =1;
	cout<<"How many times should this be executed"<<endl;
	cin>>res;
	while(num <= res){
	
	int n;
	cout<<" Enter number of random values to be displayed:";
	cin>>n;
	time(&start_t);
	
	int arr[n];
	srand(time(0));
	for(int x = 1; x<n; x++){
		arr[x] = rand();
	}
	
	for(int y = 0; y<n; y++){
		cout<<" "<<arr[y];
	}
	cout<<endl;
	
	MergeSort(arr, 0, n-1);
	
	cout<<"Sorted Data "<<endl;
	for (int i = 0; i < n; i++)
        cout<<" "<<arr[i];
	
	time(&end_t);
	diff_t = difftime(end_t, start_t);
	cout<<"\n\nTime used:"<<diff_t<<"sec";
	//========================================================================
	
/*	int ray[res] = {n};
	double array[res] = {diff_t};
	int size;
	
	ofstream file("points.dat");
	if(file.is_open())
	{
		file<<"X-Axis\t\t"<<"Y-Axis"<<endl;
		/*for(int count = 0; count < size; count++){
			file<<ray[count]<<"\t\t"<<array[count]<<endl;
		}
		file<<n<<"\t\t"<<diff_t<<endl;
		//file.close();
		
	}    
	else{
	
	cout<<"Failed to add"<<endl;
}*/

	     

	num = num + 1;
	 
	
	cout<<endl;
	}
	

	
   return 0;
}  
