#include<iostream.h>
using namespace std;

int main()
{
    int size=10;
    char *line;
    line=new char[size];
    // GETLINE()--> it is used to  read chracters from user accroding to given size
    cin.getline(line,size); 
    // WRITE()--> it is used to write chracters from line accroding to given size
    cout.write(line ,size);
    return 0;
}