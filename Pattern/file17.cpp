//    // using pairs 
   #include <bits/stdc++.h>
   using namespace std;
   int main()
   {
//     // pair<int,int>p1={2,3};
//     // cout<<p1.first<<endl; // should print 2
//     // cout<<p1.second<<endl; // should print 3
//     // // now user input of pair
//     // pair<int,int>p2;
//     // cout<<"Enter two integers: "<<endl;
//     // cin>>p2.first>>p2.second;
//     // cout<<"You entered: "<<p2.first<<" and "<<p2.second<<endl;
//     // return 0;
      

//     // // using nested pairs
//     // pair<int,pair<int,int>>p;
//     // cout<<"enter the first integer: "<<endl;
//     // cin>>p.first;
//     // cin>>p.second.first>>p.second.second;
//     // cout<<"You entered: "<<p.first<<" "<<p.second.first<<" "<<p.second.second;


//     // using array of pairs
//     int n;
//     cout<<"Enter number of pairs: "<<endl;
//     cin>>n;
//     pair<int,int>arr[n];
//     //taking input
//     for(int i=0;i<n;i++)
//     {
//         cout<<"Enter two numbers for pair "<<i+1<<": "<<endl;
//         cin>>arr[i].first>>arr[i].second;
//     }
//     //printing output
//     cout<<"You entered the following pairs: "<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i].first<<" "<<arr[i].second<<endl;
//     }
//     return 0;
//    }
//  vector<int> v;
//  v.push_back(2);
//  v.push_back(3);
//  cout<<v[0];
//  cout<<v[1];
//  v.emplace_back(4);
//  cout<<v[2];
// vector<pair<int,char>>v;
// v.push_back({2,'A'});
// v.emplace_back(3,'B');
// for(int i=0;i<v.size();i++)
// {
//     cout<<v[i].first<<" "<<v[i].second<<endl;   
// }   
vector<pair<pair<int,int>,int>> v;
v.push_back({{2,3},4});
v.emplace_back(make_pair(5,6),7);
for(int i=0;i<v.size();i++)
{
    cout<<v[i].first.first<<" "<<v[i].first.second<<" "<<v[i].second<<endl;
} 
 return 0;
   }