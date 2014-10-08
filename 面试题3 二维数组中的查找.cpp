//#include <iostream>
//#include <vector>
//
//using namespace std;
//bool find(int *vec,int m,int n,int find_num);
//int main()
//{
//	int m,n;
//	int find_num;
//	while(cin>>m>>n)
//	{
//		cin>>find_num;
//		int *vec=new int[m*n];
//		for(int i=0;i<m;i++)
//			for(int j=0;j<n;j++)
//			{
//				cin>>vec[i*m+j];
//			}
//		if(find(vec,m,n,find_num))
//			cout<<"Yes"<<endl;
//		else
//			cout<<"No"<<endl;
//		delete [] vec;
//	}
//	return 0;
//}
//bool find(int *vec,int m,int n,int find_num)
//{
//	bool mark=false;
//	int sm=0;
//	int sn=n-1;
//	while(sm<m&&sn>=0)
//	{
//		int tmp_num=vec[sm*m+sn];
//		if(tmp_num==find_num)
//		{
//			mark=true;
//			break;
//		}
//		if(tmp_num>find_num)
//			sn--;
//		if(tmp_num<find_num)
//			sm++;
//
//	}
//	return mark;
//}