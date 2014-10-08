//#include <iostream>
//
//using namespace std;
//
//void add_one(char *show,int &wei);
//void print(char *show);
//
//int main()
//{
//	int N;
//	cin>>N;
//	char *show=new char[N+1];
//	for(int i=0;i<N;i++)
//		show[i]='0';
//	show[N]='\0';
//	int wei=N-1;
//	while(wei>=0)
//	{
//		wei=N-1;
//		add_one(show,wei);
//		print(show);
//	}
//	return 0;
//}
//
//void add_one(char *show,int &wei)
//{
//	if(wei<0)
//		return;
//	if(show[wei]=='9')
//	{
//		show[wei]='0';
//		wei--;
//		add_one(show,wei);
//	}
//	else
//		show[wei]+=1;
//	return;
//}
//void print(char *show)
//{
//	int num=0;
//	while(show[num]=='0')
//		num++;
//	cout<<show+num<<endl;
//}