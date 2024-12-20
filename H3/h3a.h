#ifndef H3A_H
#define H3A_H

    #include <iostream>

using namespace std;

    class Chef
    {
    protected:
    string name;
    public:
    explicit Chef(const string &name);
    ~Chef();
    void makeSalad() const;
    void makeSoup() const;
    string getName() const;
};

// **********Vaihe 2***********

class ItalianChef : public Chef {
public:
    explicit ItalianChef(const string &name);
    ~ItalianChef();

    void makepasta() const;
};

#endif // H3A_H
