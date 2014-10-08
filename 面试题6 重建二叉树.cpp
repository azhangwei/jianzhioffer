//#include <iostream>
//
//using namespace std;
//
//struct tree
//{
//	int value;
//	tree *left;
//	tree *right;
//};
//
//void rebuild(int *qian,int *zhong,int length,tree **head);
//void show(tree *head);
//bool mark;
//int main()
//{
//	int num;
//	while(cin>>num)
//	{
//		mark=true;
//		int *qian=new int[num];
//		int *zhong=new int[num];
//		for(int i=0;i<num;i++)
//			cin>>qian[i];
//		for(int i=0;i<num;i++)
//			cin>>zhong[i];
//		tree *head=NULL;
//		rebuild(qian,zhong,num-1,&head);
//		tree *shows=head;
//		if(!mark)
//		{
//			cout<<"No"<<endl;
//		}
//		else
//		show(shows);
//		delete []qian;
//		delete []zhong;
//	}
//	return 0;
//}
//
//void rebuild(int *qian,int *zhong,int length,tree **head)
//{
//	int temp_num=qian[0];
//	int i;
//	if(length<0)
//		return;
//	for(i=0;i<=length;i++)
//		if(zhong[i]==temp_num)
//			break;
//	if(i==length+1)
//	{
//		mark=false;
//		return;
//	}
//	tree *temp=new tree();
//	temp->value=temp_num;
//	temp->left=NULL;
//	temp->right=NULL;
//	*head=temp;
//	rebuild(qian+1,zhong,i-1,&temp->left);
//	rebuild(qian+i+1,zhong+i+1,length-i-1,&temp->right);
//}
//void show(tree *head)
//{
//	if(head!=NULL)
//	{
//		show(head->left);
//		show(head->right);
//		cout<<head->value<<" ";
//		return;
//	}
//	else
//		return;
//}