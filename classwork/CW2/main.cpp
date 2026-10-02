#include "Bank.h"

static void richBank(Bank bank_arr[], const size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        if (bank_arr[i].getMoney() > 2.6e2)
        {
            cout << bank_arr[i].getName() << endl;
        }
    }
}

Bank* findBank(Bank* banks, size_t size, string name)
{
    for (size_t i = 0; i < size; i++)
    {
        if (banks[i].getName() == name)
        {
            return &banks[i];
        }
    }

    return nullptr;
}

Bank* createBanks(size_t size)
{
    Bank* banks = new Bank[size];

    for (size_t i = 0; i < size; i++)
    {
        string name;
        double money;

        cout << "Enter bank name: ";
        cin >> name;

        cout << "Enter money: ";
        cin >> money;

        banks[i].setName(name);
        banks[i].setMoney(money);
    }

    return banks;
}

int main()
{
    const unsigned int N = 4;

    Bank banks1[N] = {
        { "Private Bank", 3e5 },
        { "Raifaisen Bank", 2.5e4 },
        { "MonoBank", 4.2e3 },
        { "VST", 2.6e2 } // Написати функцію, яка розшукує банки 
                        // у яких грошей більше ніж 2.6e2
    };

    richBank(banks1, N);

    Bank* bank = findBank(banks1, N, "MonoBank");
    Bank* banks2 = createBanks(2);

    delete bank;
    delete banks2;
}