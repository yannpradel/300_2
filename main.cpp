#include <iostream>
#include "Rectangle.h"
int main()
{
    //d�claration d'objets instances de Rectangle
    // et donc appel du constructeur dont le proto
    Rectangle r1("aa",2,5);
    Rectangle r2("bb",3,6);
    std::cout<<r1.getLong()<<std::endl;
    //Rectangle r3;
    //On demande � un objet d'executer une m�thode :
    //Appel de la m�thoide afficher de la classe de r1
    // (de la classe Rectangle)
    //r1 est pass� implicitement en param�tre
    // son adresse erst r�cup�r� par la m�thode dans le pointeur this
    r1.afficher();
    r2.afficher();
    return 0;
}
