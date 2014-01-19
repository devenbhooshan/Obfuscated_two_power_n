#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;
// PS Our Team Name is vanilla_twilight no doubt you will find it everywhere.

int vanilla_TWILIGHT(int a$b, int b$a)
{
// Dance of Death
vector<int> _b$a,_a;
_b$a.push_back(a$b);
_a.push_back(b$a);
while(a$b)
{
a$b/=2;
_b$a.push_back(a$b);
}
while(_a.size()!=_b$a.size())
{
b$a*=2;
_a.push_back(b$a);
}

vector<bool> sta;
sta.resize(_a.size(),0);
for (int i=0;i<_b$a.size();i++)
{
if (!_b$a[i]%2) sta[i]=1;
}

int ans=0;
for (int i=0;i<_b$a.size();i++)
{
if (!sta[i]) ans+=_a[i];
}

return ans;
}

int vani(int a, int b)
{
// Would you like to dance under the vanilla twillight?
int x=vanilla_TWILIGHT(a,b);
int y=vanilla_TWILIGHT(x,x);
x-=(y%10);
return x;
}

int ans(int arr[],int a){
	int vanilla1OI=0;
a--;
	int twi=1;
	while(a>=0){
	vanilla1OI+=arr[a]*twi;
        twi*=2;
	a--;	
	}
return vanilla1OI;

}
int vanilla_twilight( int VANILLA, int TWILIGHT ) {		
    int VANILLA_TWILIGHT ;
    __asm__ __volatile__ ( "movl %1, %%eax;""movl %2, %%ebx;""VANILLA: cmpl $0, %%ebx;""je TWILIGHT;""xorl %%edx, %%edx;""idivl %%ebx;""movl %%ebx, %%eax;""movl %%edx, %%ebx;""jmp VANILLA;""TWILIGHT: movl %%eax, %0;" : "=g" (VANILLA_TWILIGHT) : "g" (VANILLA), "g" (TWILIGHT));
int arr[12121];
int van[]={1,0,1,1,1,1,0,1,0,1,1,0,0,1};

int assas=ans(van,14);

int i=0;

while(i<12121){
i[arr]=i+2*100+VANILLA_TWILIGHT/VANILLA;
i++;
}


    return VANILLA_TWILIGHT+i-assas ;
	
}

int main() {
	const volatile int vann = 10;
	int *van = (int*) &vann;
	    int vanilla=2, twilight=1245425 ;

cin>>twilight;
		*van=twilight/2;
		vanilla=twilight-*van;
	*van= vanilla_twilight(vanilla+*van, twilight)  ;
	
int m=1,q;	
if (vann%2==0)
{
q=vani(vanilla_twilight(1<<1,2),vanilla_twilight(2,2));
for (int i=1;i<=twilight/2;i++)
m*=q;
}

else
{
q=vani(vanilla_twilight(2,2),vanilla_twilight(2,2));
for (int i=1;i<=vann/2;i++)
m*=q;
m*=vanilla_twilight(1<<1,2);
}

cout<<m<<'\n';	
	
    return 0 ;
}
