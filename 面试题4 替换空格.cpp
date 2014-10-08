//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	char *line=new char[1000];
//	string lines;
//	gets(line);
//	getline(cin,lines);
//	int length=0;
//	int kong=0;
//	while(line[length]!='\0')
//	{
//		if(line[length]==' ')
//			kong++;
//		length++;
//	}
//	int total_length=length+2*kong;
//	length--;
//	line[total_length--]='\0';
//	while(length>=0)
//	{
//		if(line[length]==' ')
//		{
//			line[total_length--]='0';
//			line[total_length--]='2';
//			line[total_length--]='%';
//			length--;
//		}
//		else
//			line[total_length--]=line[length--];
//	}
//	cout<<line;
//	return 0;
//}