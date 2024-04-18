#include "Brain.hpp"

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
    return ;
}

Brain::Brain( void ): len(0)
{
    std::cout << "Brain Constructor called" << std::endl;
    return ;
}

Brain& Brain::operator=(const Brain &other)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	this->len = other.len;
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = other.ideas[i];
    }
	return *this;
}

Brain::Brain(const Brain &cp)
{
	std::cout << "Brain copy constructor called" << std::endl;
    *this = cp;
    return;
}

int Brain::getSize(void) const
{
	return this->len;
}

std::string Brain::getIdea(int i) const
{
	if (i < 0 || i > 100)
		return NULL;
	return this->ideas[i];
}

void Brain::addIdea(std::string idea)
{
	if (this->len < 100)
	{
		this->ideas[this->len] = idea;
		this->len++;
	}
    else
        std::cout << "The brain is full of ideas." << std::endl;
}
