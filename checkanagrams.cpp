/* 5.Write a method to decide if two strings are anagrams or not  */
#include<iostream>
using namespace std;

class checkAnagrams{
	public: int arr1Size,arr2Size;
	public: checkAnagrams(int arr1Len,int arr2Len){
		arr1Size=arr1Len;
		arr2Size=arr2Len;
	}
	/* function return status of is string anagrm or not*/
	public: int findAnagram(char *arr1,char *arr2) {
		if(arr1Size!=arr2Size) {
			return 0;
		} else{
			arr1=changeToLowerCase(arr1);
			arr2=changeToLowerCase(arr2);
			arr1=doSoryArrayUsingSelection(arr1);
			arr2=doSoryArrayUsingSelection(arr2);
			for (int i = 0; arr1[i]!='\0'; ++i)
			{
				if(arr1[i]!=arr2[i]) {	
					return 0;
				}
			}
		}
		return 1;
	} 

	// sorting an array using selection sort
	public: char* doSoryArrayUsingSelection(char *arr){
		char back;
		for (int i = 0; arr[i]!='\0'; ++i)
		{
			for (int j = i+1; arr[j]!='\0'; ++j)
			{
				if(arr[i]>arr[j]) {
					back=arr[i];
					arr[i]=arr[j];
					arr[j]=back;
				}
			}

		}
		return arr;
	}
	// convert all charcter of an string into lower case
	public: char* changeToLowerCase(char *arr) {
		int low[] = {97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122};
		for (int i = 0; arr[i]!='\0'; ++i)
		{
			if(arr[i]>=65 && arr[i]<=90) {
				
				arr[i]=low[arr[i]-65];
			}
		}
		return arr;
	}

};

int main(){
	char arr1[] = "AJAYkku";
	int strLength1 = (sizeof(arr1)/sizeof(*arr1)); // getting size of string
	char arr2[] = "kkAJAY";
	int strLength2 = (sizeof(arr2)/sizeof(*arr2)); // getting size of string
	
	checkAnagrams anagrams(strLength1,strLength2);
	if(anagrams.findAnagram(arr1,arr2))
		cout<<"Strings are anagrams";
	else
		cout<<"Strings are not anagrams";
}