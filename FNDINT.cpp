#include <iostream>
using namespace std;
int unique(long long int number)
{
    char seen[10] = {0};
    while (number) {
        int digit = number % 10;
        number /= 10;
        if (seen[digit]++)
            return 0;
     }
     return 1;
}
 
int main() {
    int kp;
    cin>>kp;
    while(kp--){
        int one;
        cin>>one;
        while(true){
            int temp1=++one;
            if(unique(temp1)==1){
                cout<<temp1<<endl;
                break;
            }
            else{
                temp1++;
            }
        }
    }
	return 0;
}