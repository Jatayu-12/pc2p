#include<iostream>
#include<vector>


int main()
{
	int new_vec_value;
	std::cin >> new_vec_value;
	std::vector<int> data ={1,2,3};
	data.push_back(new_vec_value);
	std::cout << data[3]<< std::endl;
}
