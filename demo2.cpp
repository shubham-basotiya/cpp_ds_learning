#include <iostream>
using namespace std;

/* Start fistFirstOccur function is not right properly because its confuse with colision effect */

// int findFirstOccur(int arr[], int hashArry[], int s)
// {
// 	for(int i = 0; i < s; i++)
// 	{
// 		int count = 1;
// 		int hashTable = arr[i]%s;
// 		if(hashArry[hashTable] == -1)
// 		{
// 			hashArry[hashTable] = count;
// 		}
// 		else
// 		{
// 			hashArry[hashTable] = (count=+2);
// 		}
// 	}
// 	for(int i = 0; i < s; i++) 
// 	{
// 		cout<<hashArry[i]<<" ";
// 	}
// 	cout<<endl;
// 	for(int i = 0; i < s; i++)
// 	{
// 		int hashTable = arr[i]%s;
// 		if(hashArry[hashTable] == 1)
// 		return arr[i];	
// 	}

// }


// int main() {
// 	// your code goes here
// 	int arr[] = {3, 4, 12, 5, 3, 4, 5};
// 	int s = sizeof(arr)/sizeof(arr[0]);
// 	cout<<"size of array : "<< s << endl;
// 	int hashArry[s];
// 	for(int i = 0; i < s; i++)
// 	{
// 		hashArry[i] = -1;
// 	}
// 	cout<< "result = "<< findFirstOccur(arr, hashArry, s);
// 	return 0;
// }

/* End findFistOccurence function */

/* Start FindSingleOcurence function is correct properly beacuase XOR operation with different number is 0 || XOR operation with 0 is itself number

int findSingleOccurence(int arr[], int s)
{
	int res = arr[0];
	for (int i = 1; i < s; i++)
	{
		res = res ^ arr[i];
	}
	
	return res;
}

int main()
{
	int arr[] = {2, 3, 4, 5, 13, 13, 4, 2, 5};
	int s = sizeof(arr)/sizeof(arr[0]);
	cout<<"Single Occurence : " << findSingleOccurence(arr, s);

	return 0;
}

End findSingleOccurence function here */

/* Start Selection Sort Sorting Algorithm

void selectionSort(int arr[], int s)
{
	for(int i = 0; i < s; i++)
	{
		for(int j = i+1; j < s; j++)
		{
			if(arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main()
{
	int s;
	cout<<"Enter the size of Array : ";
	cin>>s;
	int arr[s];

	for(int i = 0; i < s; i++)
	{
		cin>>arr[i];
	}

	selectionSort(arr, s);

	cout<<"Sorted Array with help of Selection Sort Sorting Algorithm : ";
	for(int i = 0; i < s; i++)
	{
		cout<<arr[i] << " ";
	}
	cout<<endl;

	return 0;
}

here End Selection Sort Sorting Algorithm */

/* Start Insertion Sort Sorting Algorithm

void insertSort(int arr[], int s)
{
	for(int i = 1; i <= s-1; i++)
	{
		for(int j = i; arr[j] < arr[j-1] && j > 0; j--)
		{
			int temp = arr[j];
			arr[j] = arr[j-1];
			arr[j-1] = temp;
		}
		
	}
}

int main()
{
	int s;
	cout<<"Enter the size of array : ";
	cin>>s;
	int arr[s];
	for(int i = 0; i < s; i++)
	{
		cin>>arr[i];
	}
	insertSort(arr, s);
	cout<<"Sorted Array with the help of Insert Sort Sorting Algorithm : ";
	for(int i = 0; i < s; i++)
	{
		cout<<arr[i] << " ";
	}
	cout<<endl;

	return 0;
}

End Insertion Sort Algorithm here */

/* Start BubbleSort Sorting without optimization method

void bubleSort(int arr[], int s)
{
	for(int i = 0; i < s-1; i++)
	{
		for(int j = 0; j < s-i-1; j++)
		{
			if(arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int main()
{
	int s;
	cout<<"Enter the size of array : ";
	cin>>s;
	int arr[s];

	for(int i = 0; i < s; i++)
	{
		cin>>arr[i];
	}

	bubleSort(arr, s);
	cout<<endl;
	cout<<"Sorted Array using Bubble Sort Sorting Algorithm :";
	for(int i = 0; i < s; i++)
	{
		cout<<arr[i] << " ";
	}
	cout<<endl;

	return 0;
}

End Bubble Sort Sorting Algorithm */

/* Start BubbleSort Sorting with optimization method
void bubleSort(int arr[], int s)
{
	int flag = 0;
	for(int i = 0; i < s-1; i++)
	{
		for(int j = 0; j < s-i-1; j++)
		{
			if(arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				flag = 1;
			}
		}
		if(flag == 0)
		break;
	}
}

int main()
{
	int s;
	cout<<"Enter the size of array : ";
	cin>>s;
	int arr[s];

	for(int i = 0; i < s; i++)
	{
		cin>>arr[i];
	}

    bubleSort(arr, s);

	cout<<"Sorted Array using Bubble Sort Sorting Algorithm :";
	for(int i = 0; i < s; i++)
	{
		cout<<arr[i] << " ";
	}
	cout<<endl;

	return 0;
}

End Optimize Bubble Sort Sorting Algorithm */

/* Start Beep(frequency, dealy)
int main()
{
	for(int i = 1000; i < 1050; i+=1)
	{
		Beep(i, 10);
	}
	for(int j = 2000; j < 2050; j+=1)
	{
		Beep(j, 10);
	}
}

*/

/* Start Collisions avoidance using linear probing

void insertElement(int arr[], int s, int element)
{
	int key = element%s;
	for(int i = 0; i <= s; i++)
	{	
	if(arr[key + i] == -1)
	{
		arr[key] = element;
		cout<<"Insert element successfully!"<<endl;
		break;
	}

	else
	{
		cout<<"Hash Table full" << endl;
		break;
	}
	}
}

int main()
{
	char dicision = 'x';
	int s;
	cout<<"Enter the size of array : ";
	cin>>s;
	int arr[s];
	for(int i = 0; i < s; i++)
		{
			arr[i] = -1;
		}
	while (dicision == 'x')
	{
		int element;
		
		cout<<"Enter the element that you want to insert in hash table : ";
		cin>>element;
		insertElement(arr, s, element);
		cout<<"If you want to exit program then Press ___ y ___ Otherwise ___ x ___  : ";
		cin>>dicision;
	}

	for(int i = 0; i < s; i++)
	{
		cout << arr[i] << " ";
	}
	cout<<endl;
	return 0;
	
}

End Collisions avoidance using linear probing */