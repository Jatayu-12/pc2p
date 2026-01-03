#include <iostream>
#include<string>

int main()
{
enum class Season{summer, winter};
Season now = Season::winter;
switch(now)
{
	case Season::summer:
		break;
	case Season::winter:
		std::cout<<"stay warm!"<<std::endl;
		break;
}
return 0;

}
