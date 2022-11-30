#include <iostream>
using namespace std;
void Marks();
void CPSP();
void MinMax();
void Sum();
void Fib();
void Prime();
void Matrix();
void Armstrong();
void Transpose();
int main()
{
	// Prime();
	// Marks();
	// CPSP();
	// MinMax();
	// Sum();
	// Fib();
	// Matrix();
	cout << " Enter a choice \n \t1 For Prime :\n\t2 For Marks :\n\t3 For CPSP :\n\t4 For MinMax :\n\t5 For Sum :\n\t6 For Matrix :\n\t7 For Fibonaccie :\n\t8 For Armstrong :-\n\t9 For Transpose \n";
	int ch ;
	cin >> ch;
	switch (ch)
	{
	case 1:Prime();
		break;
	case 2:Marks();
		break;
	case 3:CPSP();
		break;
	case 4:MinMax();
		break;
	case 5:Sum();
		break;
	case 6:Matrix();
		break;	
	case 7:Fib();
		break;
    case 8:Armstrong();
		break;
	case 9:Transpose();
		break;
	default: cout << " Invalid !!!" ;
	}
}
void Matrix()
{
	int size = 2;
	int arr1[size][size], arr2[size][size], resarr[size][size];

	cout << " Enter Element for Matrix 1 \n";
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cin >> arr1[i][j];
		}
	}
	cout << " Matrix 1 \n ";
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << arr1[i][j] << " \t ";
		}
		cout << "\n";
	}

	cout << " Enter Element for Matrix 2 \n";
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cin >> arr2[i][j];
		}
	}
	cout << " Matrix 2 \n ";
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << arr2[i][j] << " \t ";
		}
		cout << "\n";
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			resarr[i][j] = arr1[i][j] * arr2[i][j];
		}
	}
	cout << " Multiplication = \n ";
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << resarr[i][j] << " \t";
		}
		cout << "\n";
	}
}
void EvenOdd()
{
	int n;
	cout << " Enter a Number ";
	cin >> n;

	if (n % 2 == 0)
	{
		cout << " Number is Even";
	}
	else
	{
		cout << " Number is Odd";
	}
}
void Prime()
{
	int n, count = 0;
	cout << " Enter number : - ";
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			count++;
		}
	}
	if (count > 1)
	{
		cout << " Number is Not Prime ";
	}
	else
	{
		cout << " Number is  Prime ";
	}
}
void CPSP()
{

	int sp, cp;
	cout << "\n Enter Cost Price = ";
	cin >> cp;
	cout << "\n Enter Selling Price = ";
	cin >> sp;
	if (sp > cp)
	{
		cout << "\n Profit = " << sp - cp;
	}
	else
	{
		cout << "\n Loss = " << cp - sp;
	}
}
void Sum()
{
	int no1, no2, result=0;
	cout << " Enter 2 nums :- ";
	cin >> no1 >> no2;
	cout << "\n no1 = " << no1 << " \t no2 = " << no2 << endl ;
	if (no1 > no2)
	{
		int temp;
		temp = no1;
		no1 = no2;
		no2 = temp;
	}
	for (int k = no1 + 1; k < no2; k++)
	{
		result += k;
	}
	cout << " Result = " << result;
}

void MinMax()
{

	int num1, num2, num3;
	cout << " Enter any 3 number = ";
	cin >> num1 >> num2 >> num3;
	if (num1 > num2 && num1 > num3)
	{
		cout << num1 << " is Bigger ";
	}
	else if (num2 > num1 && num2 > num3)
	{
		cout << num2 << " is Bigger ";
	}
	else
	{
		cout << num3 << " is Bigger ";
	}
	if (num1 < num2 && num1 < num3)
	{
		cout << num1 << " is Smaller ";
	}
	else if (num2 < num1 && num2 < num3)
	{
		cout << num2 << " is Smaller ";
	}
	else
	{
		cout << num3 << " is Smaller ";
	}
}

void Marks()
{
	int sub1, sub2, sub3;
	int avg, total;
	cout << " Enter 3 Sibject's Marks :- ";
	cin >> sub1 >> sub2 >> sub3;
	cout << "\n Sub 1 Mark = \t " << sub1 << "\n Sub 2 Mark = \t " << sub2 << "\n Sub 3 Mark = " << sub3;
	total = sub1 + sub2 + sub3;
	avg = total / 3;

	cout << "\n Total = " << total;
	if (avg >= 75 && avg < 100)
	{
		cout << "\n Result = Pass \t "
			 << "Grade = A \t "
			 << " Average = " << avg;
	}
	else if (avg >= 65 && avg < 75)
	{
		cout << "\n Result = Pass \t , Grade = B \t , Average = " << avg;
	}
	else if (avg >= 55 && avg < 65)
	{
		cout << "\n Result = Pass \t , Grade = C \t , Average = " << avg;
	}
	else if (avg <= 54 && avg >= 40)
	{
		cout << "\n Pass !!!";
	}
	else
	{
		cout << "\n Fail !!!";
	}
}

void Fib(){
	int num,f1=0,f2=1,res;
	cout << "Enter a Number ";
	cin >> num ; 
	cout << f1;
	cout << f2;
	for(int i = 2 ; i < num ; ++i){
		res = f1+f2;
		cout << res;
		f1= f2;
		f2= res;
	}
}

void Armstrong(){
	int num,org=0,rem=0,arm=0;
	cout << " Enter a Number :- \n";
	cin >> num ; 
	org = num ; 
	while(num != 0){
		rem = num %10;
		arm += (rem*rem*rem);
		num /= 10;
	}
	if(org == arm ){
		cout << arm <<" is Armstrong ";
	}else{
		cout << arm <<" is Not Armstrong ";
	}
}

void Transpose(){
	int size=0;
	cout << "Enter Size of Mattix ";
	cin >> size ;
	int arr[size][size],transpose[size][size];
	cout << "Enter Elements for Matrix :- \n ";
	for(int i=0;i<size;i++){
		for(int j = 0 ; j < size ; j++){
			cin >> arr[i][j];
		}
	}
	for(int i=0;i<size;i++){
		for(int j = 0 ; j < size ; j++){
			transpose[j][i]=arr[i][j];
		}
	}
	cout << "Elements of Matrix :- \n ";
	for(int i=0;i<size;i++){
		for(int j = 0 ; j < size ; j++){
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "Transpose of Matrix :- \n ";
	for(int i=0;i<size;i++){
		for(int j = 0 ; j < size ; j++){
			cout << transpose[i][j] << "\t";
		}
		cout << endl;
	}
	int temp= 0;
	int temp1= 0;
	for(int k = 0; k <size ; k++){
		if(arr[k][k] == arr[0][0]){
			temp++;
		}
	}
	int p=size-1,q=0,c=0;
	while(c<size){
		if(arr[q][p] == arr[0][size-1]){
			temp1++;
		}
		p--;
		q++;
		c++;
	}
	if(temp == size || temp1 == size){
		cout << " Matrix is Diagonal ";
	}else{
		cout << " Matrix is Not Diagonal ";
	}
}
