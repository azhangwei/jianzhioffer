//#include <iostream>
//
//using namespace std;
//
//struct Node
//{
//	int value;
//	Node *next;
//	Node *last;
//};
//
//int main()
//{
//	int val;
//	Node *start=NULL;
//	Node *temp=start;
//	while(cin>>val)
//	{
//		if(val==-1)
//			break;
//		Node *ne=new Node();
//		ne->value=val;
//		ne->next=NULL;
//		ne->last=NULL;
//		if(start==NULL)
//		{
//			start=ne;
//			temp=start;
//		}
//		else
//		{
//			ne->last=temp;
//			temp->next=ne;
//			temp=temp->next;
//		}
//	}
//	//temp=start;
//	while(temp!=NULL)
//	{
//		cout<<temp->value<<endl;
//		temp=temp->last;
//	}
//	return 0;
//}