#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <string>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria* source[4];

public:
    MateriaSource();
    virtual ~MateriaSource();
    virtual void learnMateria(AMateria*);
    virtual AMateria* createMateria(std::string const & type);
};

#endif
