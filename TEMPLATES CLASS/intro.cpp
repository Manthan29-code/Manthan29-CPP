
#include<iostream > 
using namespace std;
#define size 3

template <class T>  // we can also create multiple template like template<class a, class b, ...>
class vector         // we can also define marco named size in tampelate { template <class T ,int size>} and have to provide 
{                    // value of size when we initialize object od that class
    T *v;
    public:
         vector()
         {
            v=new T[size];
            int i;
            for (i=0; i<size; i++)
            {
                v[i]=0;
            }
         }
         vector(T* a)
         {
            v=new T[size];
            int i;
            for (i=0; i<size; i++)
            {
                v[i]=a[i];
            }
         }
         T operator*(vector &y)
         {
            T sum=0;
            int i;
            for ( i=0;i<size; i++)
            {
                sum += v[i] * y.v[i];
            }
            return sum;
         }
         void display()
         {
            int i;
            for (i=0;i<size; i++)
            {
                cout<<v[i]<<"\t";
            
            }
            cout<<endl;
            
         }
// we can make function which retuen type is of template class ...         
         T sum()
         {
            int i=0;
            T total=0;
            for (i=0;i<size; i++)
            {
                total+=v[i];
            }
            return total;
         }
         T max();
         ~vector()
	     {
	        cout<<"distructor called "<< endl;
	        delete(v);
	     }
};
//this is  how to define template class function outside class

/*template <class T>
T vector<T>::sum()  // <return type> classname<T>:: member function
{
            int i=0;
            T total=0;
            for (i=0;i<3; i++)
            {
                total+=v[i];
            }
            return total;
}
*/

template <class T>
T vector<T>::max()
{
    int i;
    T MAX=0;
    for (i=0;i<size; i++)
    {
      if(v[i]>MAX)
          MAX=v[i];          
    }
     return MAX;
}
// we can also ovelode template function as normal function

int main()
{
    int multiple;
    int  x[size]={1,2,3};
    int  y[size]={3,2,1};
    int  w[size]={16438,2836,38473};
    float  z[size]={1.2,2.4,3.5};
    vector <int> v1(x);
    vector <int> v2(y);
    vector <int> v4(w);
    vector <float> v3(z);
    v1.display();
    v2.display();
    v3.display();
    v4.display();
    cout<<v4.sum()<<endl;
    cout<<v3.sum()<<endl;
    cout<<v2.sum()<<endl;
    cout<<v1.sum()<<endl;
    cout<<"max value is "<<v1.max()<<endl;
    cout<<"max value is "<<v2.max()<<endl;
    cout<<"max value is "<<v3.max()<<endl;
    cout<<"max value is "<<v4.max()<<endl;
    multiple=v1*v2;  // operator ovetloding
    cout<<multiple<<endl;
   //multiple= v1*v3;  both object should be of same type othe wise it throw an error
    multiple=v3*v3;  // operator ovetloding
    cout<< multiple;
    return 0;

}