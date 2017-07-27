#include <iostream>
#include <stdio.h>
#include <string>
#include <memory>
#include <boost/filesystem.hpp>
#include <math.h>
#include <iomanip>

using namespace std;

int main(int argc, char* argv[])
{
    if(argc < 2)
    {
        cout << "usage diskudage /path/to/directory" <<endl;
        return 0;
    }
    string result;
    string path = "/home";
    boost::filesystem::path source{argv[1]};
    boost::filesystem::space_info informator = boost::filesystem::space(source);
    float free = ceil(informator.available)/1073741824;
    float usage = ceil(informator.capacity - informator.available)/1073741824;
    cout << source << endl;
    cout << "free space: " << fixed << setprecision(2) << free << "GB" << endl;
    cout << "usage space: " << fixed << setprecision(2) << usage << "GB"<< endl;
    return 0;
}
