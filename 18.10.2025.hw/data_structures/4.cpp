# include <queue>
# include <iostream>
using namespace std;
int main () {
    queue<string> q;
    q.push("Carlos");
    cout<<"Came: "<<q.back()<<endl;
    q.push("Max");
    cout<<"Came: "<<q.back()<<endl;
    cout<<"Serviced: "<<q.front()<<endl;
    q.pop();
    q.push("Mihail");
    cout<<"Came: "<<q.back()<<endl;
    q.push("Ivan");
    cout<<"Came: "<<q.back()<<endl;
    cout<<"Serviced: "<<q.front()<<endl;
    q.pop();
    cout<<"Serviced: "<<q.front()<<endl;
    q.pop();
    q.push("Michael");
    cout<<"Came: "<<q.back()<<endl;
    q.push("Charles");
    cout<<"Came: "<<q.back()<<endl;
    cout<<"Serviced: "<<q.front()<<endl;
    q.pop();
    cout<<"Serviced: "<<q.front()<<endl;
    q.pop();
    cout<<"Serviced: "<<q.front()<<endl;
}