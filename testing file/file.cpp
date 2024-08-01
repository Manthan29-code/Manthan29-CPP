#include<iostream.h>
#include<fstream>
#include<vector>
#include<string>
using namespace std;

class Bank
{
    private:
    int id=0;
    string name="";
    int amount=0;   
    public:
    Bank(int userid,string Name,int Amount=0)
    {
        this->id=userid;
        this->name=Name;
        this->amount= Amount;
    }
    // Bank(const Bank& a)
    // {
    //     cout<<"\n copyconstructor called"<<endl;
    // }
    void show_detail()
    {
        cout<<this->id<<"  "<<this->name<<" "<<this->amount<<endl; 
    }
    void add_amount(int Amount)
    {
        if(Amount<=0)
        {
            cout<<"\nenter valid amount"<<endl;
        }
        else
        {
            this->amount+=Amount;
        }
    }
    void withdraw_amount(int Amount)
    {
        if((this->amount-Amount)<0)
        {
            cout<<"\nenter valid amount"<<endl;
        }
        else
        {
            this->amount-=Amount;
        }
    }
    int get_id()
    {
        return this->id;
    }
    int get_amount()
    {
        return this->amount;
    } 
    string get_name()
    {
        return this->name;
    }  
};


int main()
{
    // ofstream fout("record.txt");

    vector<Bank> manager;
    vector<Bank> manager_copy;
    manager.push_back(Bank(1,"Manthan",20000));
    manager.push_back(Bank(2,"Rahul",20000));
    manager.push_back(Bank(3,"Mehul",20000));
    manager.push_back(Bank(4,"Jay",20000));
    manager.push_back(Bank(5,"Mahendra",45000));

    // for (int i=0;i<5;i++)
    // {
    //     fout<<manager[i].get_id();
    //     fout<<manager[i].get_name(); 
    //     fout<<manager[i].get_amount();
    //     fout<<endl;
    // }
    // fout.close();

    ifstream fin("record.txt");
    int ac_count;
    fin>>ac_count;
    for (int i=0;i<ac_count;i++)
    {
        int id,amu;
        string c_name;
        fin>>id;
        fin>>c_name;
        fin>>amu;
        manager_copy.push_back(Bank(id,c_name,amu));
        
        
    }
    fin.close();
    cout<<"\n file closed outsied loop ";
    for (auto &m : manager_copy)
    {
        m.show_detail();
    }
    




    
    

    return 0;
}    