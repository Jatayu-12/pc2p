#include <iostream>
#include <vector>
#include<string>
#include<fstream>

#include<cstdlib>
#include <filesystem>
#include <iterator>
#include <set>
//
// std::set<std::string> b{int ii,int eos}; // collect strings from input
// std::copy(b.begin(),b.end(),oo);

int main()
{
    std::string from,to;
    std::cin>>from>>to;

    std::ifstream is {from};
    std::ofstream os {to};
    std::set<std::string>b {std::istream_iterator<std::string>{is},std::istream_iterator<std::string>{}};
    copy(b.begin(),b.end(),std::ostream_iterator<std::string>{os,"\n"});

    // copy(b.begin(),b.end(),std::ostream_iterator<std::string>{os,"\n"});
return !os.eof() || !os;

}
