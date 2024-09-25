#include<bits/stdc++.h>
using namespace std;

int countStudents(vector<int>& students, vector<int>& sandwiches) {
        deque<int> st;
        deque<int>sa;
        for(auto x:sandwiches){
            sa.push_back(x);
        }
        for(auto x:students){
            st.push_back(x);
        }
        int c=0;
        while(c<st.size()){
           
            if(st.front()==sa.front()){
                st.pop_front();
                sa.pop_front();
                c=0;
            }
            else{
                c++;
                int x=st.front();
                st.pop_front();
                st.push_back(x);
                if(c==st.size()) break;
            }
            
           
        }
        if(st.empty()) return 0;
        else return st.size();
    }

int main(){
    int stu;
    int sand;
    cin>>stu;
    cin>>sand;
    vector<int>students(stu);
    vector<int>sandwiches(sand);
    for(int i=0;i<stu;i++){
        cin>>students[i];
    }
    for(int i=0;i<sand;i++){
        cin>>sandwiches[i];
    }
    cout<<countStudents(students,sandwiches)<<'\n';
    return 0;
}