#include <iostream>
#include <vector>
#include <map>
using namespace std;
int a[20], n, sum, index[20], sum_1, sum_2;
vector<int> v1, v2;
string s1, s2;
map<string, int> smap;
int main()
{   
	cout <<"No of elements  ";
	cin >> n;
	
	for(int i=0;i<n;i++)
		{cin >> a[i];sum+=a[i];}
	if( sum%2 ) cout<<"not possible :("; 
	else{
		sum >>= 1;
		int i, j, power, d;
		for(power=0;power<1<<n;power++){
			sum_1 = sum_2 = 0;
			v1.clear(); v2.clear();
			memset(index,0,sizeof(index));
			d = power;
			j = 0;
			s1.clear(); s2.clear();
			while(d){
				if(d&1) {sum_1+=a[j];v1.push_back(a[j]);index[j]=1;s1+=a[j];}				
				j++; d>>=1;
			}
			for(i=0;i<n;i++){
				if(!index[i]){
					sum_2+=a[i];
					v2.push_back(a[i]);
					s2+=a[i];
				}
			}
			if( sum_1 == sum_2 && smap[s1]!=1 && smap[s2]!=1){
				cout<<"SET- \n";
				for(i=0;i<v1.size();i++)
					cout<<v1[i]<<"  ";
				cout << endl;
			
				for(i=0;i<v2.size();i++)
					cout<<v2[i]<<"  ";
				cout <<endl<<endl<<endl;
				smap[s1]++;
				smap[s2]++;
			}
		}
	}
	system("pause");
	return 0;
}
