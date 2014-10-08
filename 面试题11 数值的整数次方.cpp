//#include <iostream>
//
//using namespace std;
//
//double Power(double base,unsigned int exponent);
//bool equal(double a,double b);
//
//int main()
//{
//	int num;
//	double base;
//	int exponent;
//	cin>>num;
//	for(int i=0;i<num;i++)
//	{
//		cin>>base>>exponent;
//		if(exponent<0&&equal(base,0.0))
//		{
//			cout<<0.0<<endl;
//			//return 0;
//		}
//        unsigned int exp=(unsigned int)exponent;
//		if(exponent<0)
//			exp=(unsigned int)(-exponent);
//		double result=Power(base,exp);
//		if(exponent<0)
//			result=1.0/result;
//		cout<<result<<endl;
//	}
//	return 0;
//}
//
//double Power(double base,unsigned int exponent)
//{
//	if(exponent==0)
//		return 0;
//	if(exponent==1)
//		return base;
//	double result=Power(base,exponent>>1);
//	result*=result;
//	if((exponent&(0x1))!=0)
//		result*=base;
//	return result;
//}
//
//bool equal(double a,double b)
//{
//	if(abs(a-b)<=0.00001)
//		return true;
//	else
//		return false;
//}