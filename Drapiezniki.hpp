#ifndef DRAPIEZNIKI_HPP_INCLUDED
#define DRAPIEZNIKI_HPP_INCLUDED

#include "OrganizmyZywe.hpp"
#include "Zwierzeta.hpp"

class Drapiezniki : public Zwierzeta
{
public:
    void poluj();

private:
    void syty();
};
#endif // DRAPIEZNIKI_HPP_INCLUDED
