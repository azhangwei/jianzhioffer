//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int num;
//	int value;
//	unsigned int u_value;
//	int sum_1;
//	cin>>num;
//	for(int i=0;i<num;i++)
//	{
//		cin>>value;
//		sum_1=0;
//		if(value<0)
//			u_value=value+4294967296;
//		else
//			u_value=value;
//		if(u_value>0)
//		{
//			sum_1++;
//			while(value&(value-1))
//			{
//				sum_1++;
//				value=value&(value-1);
//			}
//		}
//		cout<<sum_1<<endl;
//	}
//	return 0;
//}