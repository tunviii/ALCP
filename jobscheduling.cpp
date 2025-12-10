#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class person{
    public:
        int deadline;
        double profit;
        int index;
        person(int d=-1, double p=-1, int i=0): deadline(d), profit(p), index(i){}

};
vector<person>jobSequencing(vector<person>list){
    auto lambda=[&](auto x1, auto x2){return x1.profit>x2.profit;};
    sort(list.begin(), list.end(), lambda);
    int maxDeadline=-1;
    for(auto d:list) if(d.deadline>maxDeadline)maxDeadline=d.deadline;
    vector<person>holders(maxDeadline);
    for(auto job: list){
        int d=job.deadline-1;
        while(holders[d].deadline!=-1 && d>0)
        d--;
        if(holders[d].deadline==-1)
        holders[d]=job;
    }
    return holders;
}
int main(){
    vector<int>deadlines={2,1,2,1,3};
    vector<double>profits={100, 19, 27, 25, 15};
    vector<person>list;
    for(int i=0; i<deadlines.size(); i++){
        list.push_back(person(deadlines[i], profits[i]));
        vector<person>answers=jobSequencing(list);
        for(auto jobs: answers) cout<<jobs.index<<", "<<jobs.deadline<<", "<<jobs.profit<<endl;
        
    }
    return 0;
}