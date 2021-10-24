#include <iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;

struct Journal{
    vector<string>entries;
    void addEntry(const string& e){
        entries.push_back(e);
    }
    vector<string> getEntries(){
        return entries;
    }
    string title;
    Journal(string t):title(t){}
};

// separation of concerns, don't include persistence in journal class
struct PersistenceManager {
    void save(Journal j, string fname){
        ofstream ofs(fname);
        for(auto f : j.getEntries())   ofs<<f<<endl;
    }
};

int main(){
    Journal j("a");
    j.addEntry("afjd");
    j.addEntry("afjfdsfd");
    PersistenceManager ps;
    ps.save(j, "a.txt");
    return 0;
}