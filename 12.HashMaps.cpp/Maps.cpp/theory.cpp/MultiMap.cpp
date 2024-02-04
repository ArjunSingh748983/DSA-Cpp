#include <iostream>
#include <map>
using namespace std;

int main()
{
    multimap<string, int> directory;
    directory.insert(make_pair("urvi", 8567));
    directory.insert(make_pair("urvi", 2433));
    directory.insert(make_pair("Survi", 234533));
    for (auto pair : directory)
    {
        cout << pair.first << " " << pair.second << endl;
    }
    return 0;
}