//#include <iostream>
//
//using namespace std;
//
//int find_min(int *vec,int begin,int end);
//
//int main()
//{
//	int num;
//	while(cin>>num)
//	{
//		int *vec=new int[num];
//		for(int i=0;i<num;i++)
//			cin>>vec[i];
//		cout<<vec[find_min(vec,0,num-1)]<<endl;
//
//	}
//	return 0;
//}
//
//int find_min(int *vec,int begin,int end)
//{
//	int mid;
//	while(vec[begin]>=vec[end])
//	{
//	   mid=begin+(end-begin)/2;
//	   if(vec[mid]>vec[begin])
//		   begin=mid;
//	   if(vec[mid]<vec[end])
//		   end=mid;
//	   if(begin==end-1)
//	   {
//		   begin=end;
//		   break;
//	   }
//	}
//    return begin;
//}