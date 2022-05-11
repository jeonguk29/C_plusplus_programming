#include <iostream>
using std::cout;
using std::endl;
int Gop(int i, int j, int k=1, int l=1)
{
	return(i*j*k*l);
}

int Hap(int i, int j, int k=0, int l=0)
{
        return(i+j+k+l);
}


int main(void)
{
	cout<<Gop(1,2)<<endl;        // 1*2*1*1
	cout<<Gop(1,2,3)<<endl;     // 1*2*3*1
	cout<<Gop(1,2,3,4)<<endl;  // 1*2*3*4        
	
	cout<<Hap(1,2)<<endl;        // 1+2+0+0
	cout<<Hap(1,2,3)<<endl;     // 1+2+3+0
	cout<<Hap(1,2,3,4)<<endl;  // 1+2+3+4     

//결과 
//2
//6
//24

//3
//6
//10

}



