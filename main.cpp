#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;


 
class StringBuffer
{
	
	int length,memory;
	char *string;
	int calcLength(char str[])
	{
		int temp;
		temp = strlen(str);
		return temp;
		
	}
	
	char* getString()
	{
		return string;
	}
	public:
		
		StringBuffer()
		{
			string = (char*)malloc(16*sizeof(char));
			memory = 16;
			length=0;
		}
		
		StringBuffer(int size)
		{
			string = (char*)malloc(size*sizeof(char));
			memory  = size;
			length=0;
			  
		}
		
		StringBuffer(char str[])
		{
			length = calcLength(str); 
			
			string = (char*)malloc((length+16)*sizeof(char));
			strcpy(string,str);
			memory = length+16;
			
		}
		
		
		void display()
		{
			cout<<"\n"<<string<<"\n";
		}
		
		void insert(char input[],int index)
		{
			int intcount,i,j;
			intcount = calcLength(input);
			char arr[length+intcount];
			strcpy(arr,string);
			if(memory>(intcount+length))
			{
				
				for(i = 0;i<intcount;i++)
				{
				
					string[index+i]= input[i];
					
				}
				cout<<i<<"\n";
				j=index;
				for(i=index+intcount;j<length;i++ ,j++)
				{
					cout<<i<<"\n";
					cout<<j<<"\n";
					string[i]=arr[j];
				}
				length = length+intcount;
			}
			else
			{
				string = (char*)malloc(memory*2);
				memory = memory*2;
				strcpy(string,arr);
				insert(input,index);
			}			
			
			
		}
		
		
		
		
		
};



int main() 
{
	

	
	
	
	
	
	
	
	
//	int n;
//	char input[1000];
//	char str[100000];
//	cout<<"Give string : ";
//	cin>>input;
//	StringBuffer obj(input);
//	
//	while(1)
//	{
//		cout<<"\n1 Give string\n2 Display\n3 Exit\n";
//		cin>>n;
//		switch(n)
//		{
//			case 1:
//				{
//					int index;
//					
//					cout<<"\nGive string to add : ";
//					cin>>str;
//					cout<<"\nGive index: ";
//					cin>>index;
//					
//					cout<<"\nDone!";
//					
//				}
//					break;
//			case 2:
//				{
//					obj.display();
//				}
//				break;
//			case 3:
//				{
//					exit(0);
//				}
//				
//		}
//	}
	return 0;
}
