#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <string>

class Rectangle
{
    private:
        ///attributs
        std::string m_nom;
        int m_long;
        int m_lar;
    public:
        ///methodes
        //constructeurs : m�thodes qui portnt le nom de la classe,
        // appel�es lors de la cr�ation en m�moire d'un objet
        // r�le : garantir que les objets sont correctement initialis�s avant d'�tre utilis�s
        //(appel obligatoire d'un des constructeurs pr�vus dans la classe)
        //Rectangle(); Faut-il un constructeur par d�faut ?
        Rectangle(std::string nom);
        Rectangle(std::string nom,int lo,int la);
        ~Rectangle();
        void afficher() const;//const : la m�thode ne peut pas modifier l'objet qui l'appelle
        //accesseurs si necessaires
        // si on a besoin de consulter la valeur des attributs dans une m�thode ext�rieure � la classe
        int getLong() const;
        // si on a besoin de changer la valeur des attributs dans une m�thode ext�rieure � la classe
        void setLong(int l);
        //autres m�thodes
        int getAire() const;
};

#endif // RECTANGLE_H
