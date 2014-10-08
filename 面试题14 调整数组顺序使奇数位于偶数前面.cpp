//#include <iostream>
//
//using namespace std;
//
//void exchange(int *line,int wei);
//
//int main()
//{
//	int num;
//	cin>>num;
//	int *line=new int[num];
//	for(int i=0;i<num;i++)
//		cin>>line[i];
//	bool yes=false;
//	for(int i=0;i<num;i++)
//	{
//		if((line[i]&(0x1))==0)
//		{
//			yes=true;
//		}
//		if((line[i]&(0x1))!=0&&yes)
//		{
//			exchange(line,i);
//			yes=false;
//			i--;
//		}
//	}
//	for(int i=0;i<num;i++)
//		cout<<line[i]<<" ";
//	return 0;
//}
//
//void exchange(int *line,int wei)
//{
//	if(wei<0)
//		return;
//	if((line[wei-1]&(0x1))==0)
//	{
//		int tmp=line[wei];
//		line[wei]=line[wei-1];
//		line[wei-1]=tmp;
//		exchange(line,wei-1);
//	}
//}
