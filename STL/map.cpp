#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> m;
   int n;
   cin>>n;
   for (int i = 0; i < n; i++)
   {
        string s;
        cin>>s;
        m[s]++;
   }

   for(auto &x: m)
   {
    cout<<x.first<<" "<<x.second<<endl;
   }
   



    // map<string , int> m;
    // m.insert({"Gaurang", 3001});
    // m.insert({"Alok", 3008});
    // m.insert({"Khateeb", 3006});
   
    // cout<< m.size()<<endl;
    //  m.erase(m.find("Alok"));
    // m["Varad"];
    // for( auto &x: m)
    // {
    //     cout<<x.first<< " "<< x.second<<endl;
    // }
   
    // if(m.find("Alok")==m.end())
    // {
    //     cout<<"Not Found"<<endl;
    // }
    // else{
    //     cout<<"Found"<<endl;
    // }

    // auto it= m.lower_bound("Alok");
    // cout<<(*it).first<<" "<<(*it).second<<endl;;

    // cout<< m.size()<<endl;
    return 0;
}