#include <iostream>
#include <algorithm>
#include <cstring>

bool binarySearch(char * arr , int size , char element)
{
	int begin = 0;
	int end = size-2;
	int middle;

	int cnt=1;	
	while(begin<=end){
		middle = (begin+end)/2;
		std::cout << "On iteration " << cnt << ": begin= " << begin << " , middle = " << middle  << " , end = " << end << '\n';  
		if(arr[middle] == element) return 1;
		else if(element < arr[middle]){
			end = middle-1;
		}
		else{
			begin = middle+1;
		}
		cnt++;
	}
	

	return 0;
}

int main()
{
	char arr[] = "106501Nikolov";
	int size = strlen(arr)+1;
	std::sort(arr, arr + strlen(arr));
	
	std::cout << "Searching for '9' in " << arr << ":\n" << binarySearch(arr,size,'9') << '\n'
	<< "Searching for '8' in " << arr << ":\n" << binarySearch(arr,size,'8') << '\n'
	<< "Searching for '7' in " << arr << ":\n" << binarySearch(arr,size,'7') << '\n'
	<< "Searching for 'q' in " << arr << ":\n" << binarySearch(arr,size,'q') << '\n'
	<< "Searching for 'u' in " << arr << ":\n" << binarySearch(arr,size,'u') << '\n'
	<< "Searching for 'y' in " << arr << ":\n" << binarySearch(arr,size,'y') << '\n'
	<< "Searching for 'o' in " << arr << ":\n" << binarySearch(arr,size,'o') << '\n';
	
	return 0;
}
