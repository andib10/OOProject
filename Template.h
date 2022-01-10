
#ifndef OOP_TEMPLATE_H
#define OOP_TEMPLATE_H

#include <string>

template <class T> class Info {
    T obiect;
    std::string detalii;
public:
    Info(T obiect, const std::string &detalii) : obiect(obiect), detalii(detalii) {}

    ~Info() = default;

    void afis() {
        std::cout << detalii << '\n';
    }
};

template <> class Info<Pizzerie> {
    Pizzerie p;
    std::string detalii;
    int rating;
    bool home_delivery;
public:
    Info(const Pizzerie &p, const std::string &detalii, int rating, bool homeDelivery) : p(p), detalii(detalii),
                                                                                         rating(rating),
                                                                                         home_delivery(homeDelivery) {}
    void afis() {
        std::cout << detalii << " cu rating de " << rating << " stele, ";
        if(home_delivery)
            std::cout << "cu livrare la domiciliu\n";
        else
            std::cout << "fara livrare la domiciliu\n";
    }
};


#endif //OOP_TEMPLATE_H
