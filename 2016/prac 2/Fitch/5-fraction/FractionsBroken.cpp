#include<iomanip>	//missing iostream

using namspace std; // namespace spelt wrong

int main(){
	
	cout<<'This is a fraction calculator'<<endl;//incorrect quotation marks
	cout<<"**********************"<<endl;
	int a,b,c,d;//int should be double
	
	cout >>"Enter the first fraction "<<endl;//cout crocadiles are wrong
	cout<<" Enter the numerator: " << endl;
	cin>>a;
	cout<<" Enter the denominator: "//missin semicolon
	cin>>b;
	
	cout <<"Enter the second fraction "<<end;//endl
	cout<<" Enter the numerator: " ;
	cin>c;//c crocodiles
	cout<<" Enter the denominator: " 
	cin>>d;
	
		
	cout<< a <<'/'<<b<<" + " <<c <<"/"<<d<<" = " ;
	cout<<showpoint<<setprecision(2)<<fixed;
	
	cout<< a/(b +c)/d<<endl;//bodmas
	
	
	//forget cases when denominator is 0;
	//there are 10 errors :)
	//dont upload the make file
	
	return 0;	
}
/*
checked input


1>   4/2 + 4/2 = 2.00
2>   3/4 + 9/6 = 2.25
2> 200000/5 + -9/8 = 39998.88
3> 2/0 +8/9 = crash
