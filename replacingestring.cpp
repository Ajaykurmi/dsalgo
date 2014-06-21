/* Write a method to replace all spaces in a string with ‘%20’*/

#include<iostream>
using namespace std;
class StringReplace{
	public: char* replaceSpace(char *arr){
		int i=0;
		int j=0;
		char *dynamic;
		dynamic = (char *) malloc(sizeof(char));
		for (int i = 0; arr[i]!='\0'; ++i)
		{
			if(arr[i]==32){
				dynamic[j]='%';
				j++;
				dynamic[j]='2';
				j++;
				dynamic[j]='0';
				j++;
			} else {
				dynamic[j]=arr[i];
				j++;
			}
		}
		dynamic[j]='\0';
		return dynamic;
	}
};

void main(){
	char arr[] = "ajay singh kurmi";
	StringReplace repl;
	char* value = repl.replaceSpace(arr);
	printf("\nReplaced St are: %s\n", value);
}