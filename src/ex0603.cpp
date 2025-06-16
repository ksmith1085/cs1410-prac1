#include <iostream>
#include <string>

using namespace std;

enum class BillKind{
    One, Five, Ten, Twenty
};

struct CashInOneBillKind{
    BillKind kind;
    int count;
};

struct Cash {
    CashInOneBillKind ones;
    CashInOneBillKind fives;
    CashInOneBillKind tens;
    CashInOneBillKind twenties;
};

int totalCash(Cash& c){
    return (
        c.ones.count * 1 +
        c.fives.count * 5 +
        c.tens.count * 10 +
        c.twenties.count * 20
    );
}

int totalCash2(Cash* c){// change & to an * allows ptrs to access members of the structure
    return (
        c->ones.count * 1 +
        c->fives.count * 5 +
        c->tens.count * 10 +
        c->twenties.count * 20
    );
}

int main(){
    Cash inWallet{
        {BillKind::One, 2},
        {BillKind::Five, 3},
        {BillKind::Ten, 1},
        {BillKind::Twenty, 3},
    };

    cout << "Total cash in wallet: " << totalCash(inWallet) << endl;
    cout << "Total cash in wallet: " << totalCash2(&inWallet) << endl;

    Cash *dwallet = new Cash{
        {BillKind::One, 2},
        {BillKind::Five, 3},
        {BillKind::Ten, 1},
        {BillKind::Twenty, 3},
    };

       cout << "Total cash in wallet: " << totalCash(*dwallet) << endl;
       cout << "Total cash in wallet: " << totalCash2(dwallet) << endl;
    return 0;
}