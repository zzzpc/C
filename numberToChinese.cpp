//读取文件 
#include<cstdio>
#include<algorithm>
#include<iostream>
#include<string>
#include<stack>
//
using namespace std;

int main(){
	string s;
	cin >> s;
	int a[10] = { 0 };
	int length = s.length();
	for (int i = 0; i < length; i++){
		a[i] = s[i] - '0';
	}
	cout << length;
	int count = 0;
	while (length)
	{   
		
		switch ((a[count]))
		{
		case   9: cout << "九"; break;
		case   8: cout << "八"; break;
		case   7: cout << "七"; break;
		case   6: cout << "六"; break;
		case   5: cout << "五"; break;
		case   4: cout << "四"; break;
		case   3: cout << "三"; break;
		case   2: cout << "二"; break;
		case   1: cout << "一"; break;
		case   0:
		{			
					if (count == 1 || count == 3) cout << "零";
					else if (count == 7) ;
					else cout << "零";
					break;
		}
		default:
			break;
		}
		if (length == 7 || length == 4||length ==2){
			if (a[length-1] == 0){
				cout << "";
			}
			else{
				if (length == 7) cout << "百";
				else if (length== 2) cout << "十";
				else cout << "千";

			}
		}
		else{
			switch (length)
			{
			case  9: cout << "亿"; break;
			case  8: cout << "千"; break;
			case  6: { if (a[count] == 0);
					 else cout << "十"; break;
					 }
			case  5: cout << "万"; break;
			case  3: cout << "百"; break;
			case  2: cout << "十"; break;
			default:
				break;
			}
		}
		length--;
		count++;
	}
	return 0;
}



