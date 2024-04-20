#include<iostream.h>
using namespace std;
class matrix
{
    int x[5][5],m,n;
    public:
    matrix(){
        m=5,n=5;
         for(int i=0; i<m; i++)
        {
           for(int j=0; j<n; j++)
           { 
             x[i][j]=0;
           }
        }
    }
    void set_dimention()
    {
        cout<<"Enter the dimention of the matrix: ";
        cin>>m>>n;
    }
    int matrix_m_row()
    {
        return m;
    }
    int matrix_n_column()
    {
        return n;
    }
    void get_value()
    {
        cout<<"enter"<<m*n<<"value for the matrix:"<<endl;
        for(int i=0; i<m; i++)
        {
           for(int j=0; j<n; j++)
           { 
             cin>>x[i][j];
           }
        }
        cout<<endl;
    }
    void display()
    {
         cout<<"Matrix is"<<endl;
        for(int i=0; i<m; i++)
        {
           for(int j=0; j<n; j++)
           { 
             cout<<x[i][j]<<" ";
           }
            cout<<endl;
        }
        cout<<endl;
    }
    matrix operator /(matrix z)
    {
        matrix temp;
        temp.m=m;
        temp.n=n;
        for(int i=0; i<m; i++)
        {
           for(int j=0; j<n; j++)
           {
             temp.x[i][j]=x[i][j]+z.x[i][j];  
           } 
        }
        return temp;
    }
    matrix operator %(matrix z)
    {
        matrix temp;
        temp.m=m;
        temp.n=n; 
        for(int i=0; i<m; i++)
        {
           for(int j=0; j<n; j++)
           {
             temp.x[i][j]= x[i][j] - z.x[i][j];  
           } 
        }
        return temp;
    }
};
int main()
{
    matrix obj1;
    matrix obj2;
    matrix obj3;
    matrix obj4;

    obj1.set_dimention();
    obj1.get_value();
    obj1.display();

    obj2.set_dimention();
    obj2.get_value();
    obj2.display();

    obj3 =obj1 / obj2;
    cout<<"The value of matrix after addtion is;"<<endl;
    obj3.display();

    obj4 =obj1.operator %(obj2);
    cout<<"The value of matrix after subtraction is;"<<endl;
    obj4.display();

    return 0;
}