#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructed" << std::endl;
}
Brain::Brain(const Brain& copy)
{
	*this = copy;
	std::cout << "Brain copy constructed" << std::endl;
}
Brain &Brain::operator=(const Brain& copy)
{
	if(this != &copy)
	{
		for(int i=0; i<100;i++){
			ideas[i] = copy.ideas[i];
		}
		std::cout << "Brain assigned" << std::endl;
	}
	return *this;
}
std::string& Brain::getIdea(int index)
{
		return ideas[index];
}
void Brain::setIdea(const std::string& idea,int index)
{
		ideas[index]=idea;
}
Brain::~Brain()
{
	std::cout << "Brain destroyed" << std::endl;
}
