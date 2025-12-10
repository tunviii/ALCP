#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
struct item{
    int weight, profit, index;
};
bool cmp(item a, item b){
    return (double)a.profit/a.weight>(double)b.profit/b.weight;
}void greedyKnapsack(int W, vector<item>&items){
    double totalValue=0.0;
    int currentWeight=0;
    sort(items.begin(), items.end(), cmp);
    vector<double>solution(items.size(), 0.0);
    for(int i=0; i<items.size();i++){
        if(currentWeight+items[i].weight<=W){
            currentWeight+=items[i].weight;
            totalValue+=items[i].profit;
            solution[items[i].index]=1;
        }
        else{
            int remain=W-currentWeight;
            float fraction=(double)remain/items[i].weight;
            totalValue+=fraction*items[i].profit;
            solution[items[i].index]=fraction;
            break;
        }
    }
    cout<<"Maximum profit: "<<totalValue<<endl;
    cout<<"Solution: ";
    for(int i=0; i<solution.size(); i++){
        cout<<solution[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n, W;
    cout<<"Enter no. of items: ";
    cin>>n; 
    cout<<"Enter knapsack capacity: ";
    cin>>W;
    vector<item>items(n);
    if(n<=0){
        cout<<"No. of items must be positive";
        return 0;
    }
    if(W<=0){
        cout<<"Knapsack capacity must be positive";
    }
    cout<<"Enter items and their weights: ";
    for(int i=0; i<n; i++){
        items[i].index=i;
        cin>>items[i].profit>>items[i].weight;
        if(items[i].profit<0){
            cout<<"Profit can't be negative.";
            return 0;
        }
        if(items[i].weight<=0){
            cout<<"Weight must be positive.";
            return 0;
        }
    }
    greedyKnapsack(W, items);
    return 0;
}
