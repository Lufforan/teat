#include <string>
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <utility>
#include <cmath>
using namespace std;
class st{
    public:
	int snum;
    string name;
    float mat;
    float phy;
    float eng;
    int cnum;
    float sum;
};
bool cmp(st x, st y)
{
    if(x.cnum!=y.cnum)
        return x.cnum<y.cnum;
    else
        return x.sum>y.sum;
}
st stu[30];
int main ()
{
    int ch1;
    int flag = 0;
    int temp1;
    stu[0].snum=10001;
    stu[0].name="Zhang";
    stu[0].cnum=11;
    stu[0].mat=99.5;
    stu[0].phy=88.5;
    stu[0].eng=89.5;
    stu[1].snum=10002;
    stu[1].name="Yang";
    stu[1].cnum=12;
    stu[1].mat=77.9;
    stu[1].phy=56.5;
    stu[1].eng=87.5;
    stu[2].snum=10003;
	stu[2].name="Liang";
    stu[2].cnum=11;
    stu[2].mat=92.5;
    stu[2].phy=99;
    stu[2].eng=60.5;

    cin>>ch1;
    for(int i=0;i<3;)
    {
        stu[i].sum=stu[i].mat + stu[i].phy + stu[i].eng;
        i++;
    }
	sort(stu,stu+3,cmp);
    for(int i=0;i<3;)
    {
        if(ch1==stu[i].snum)
        {
            flag = 1;
			temp1 = i;
            break;
        }
		i++;
	}
	if(flag==0)
	{
		cout<<stu[0].cnum<<' '<<stu[0].snum<<' '<<stu[0].name<<' '<<fixed
			<<setprecision(1)<<stu[0].mat<<' '<<stu[0].phy<<' '<<stu[0].eng
			<<endl;
    for(int i=1;i<3;)
    {
        if(stu[i].cnum==stu[i-1].cnum)
		{
            cout<<"   "<<stu[i].snum<<' '<<fixed<<setprecision(1)
				<<stu[i].name<<' '<<stu[i].mat<<' '<<stu[i].phy<<' '
				<<stu[i].eng<<endl;
		}        
		else
		{
            cout<<stu[i].cnum<<' '<<stu[i].snum<<' '<<fixed<<setprecision(1)
				<<stu[i].name<<' '<<stu[i].mat<<' '<<stu[i].phy<<' '
				<<stu[i].eng<<endl;
		}
        i++;
    }
	}
	else
	{
		cin>>stu[temp1].cnum>>stu[temp1].name
		   >>stu[temp1].mat>>stu[temp1].phy>>stu[temp1].eng;
		
		for(int i=0;i<3;)
    	{
        	stu[i].sum=(stu[i].mat + stu[i].phy + stu[i].eng);
        	i++;
			
    	}
		sort(stu,stu+3,cmp);
        cout<<stu[0].cnum<<' '<<stu[0].snum<<' '<<stu[0].name<<' '<<fixed
            <<setprecision(1)<<stu[0].mat<<' '<<stu[0].phy<<' '<<stu[0].eng;
        if(stu[0].snum==ch1)
			cout<<" modified"<<endl;
		else
			cout<<endl;    
    for(int i=1;i<3;)
    {
        if(stu[i].cnum==stu[i-1].cnum)
        {
            cout<<"   "<<stu[i].snum<<' '<<fixed<<setprecision(1)
                <<stu[i].name<<' '<<stu[i].mat<<' '<<stu[i].phy<<' '
				<<stu[i].eng;
        }
        else
        {
            cout<<stu[i].cnum<<' '<<stu[i].snum<<' '<<fixed<<setprecision(1)
                <<stu[i].name<<' '<<stu[i].mat<<' '<<stu[i].phy<<' '
				<<stu[i].eng;
        }
		if(stu[i].snum==ch1)
            cout<<" modified"<<endl;
        else
            cout<<endl;
        i++;
	}
	}
	return 0;
}







