#include <iostream>
#include <vector>

int main() {
    std::vector<int> livelliAcqua(7);
    int somma = 0;

    std::cout << "Inserisci i livelli dell'acqua per ogni giorno della settimana (in cm):\n";
    for (int i = 0; i < 7; ++i) {
        std::cout << "Giorno " << (i + 1) << ": ";
        std::cin >> livelliAcqua[i];
        somma += livelliAcqua[i];
    }

    std::cout << "Giorni in cui il livello dell'acqua supera i 10 cm:\n";
    for (int i = 0; i < 7; ++i) {
        if (livelliAcqua[i] > 10) {
            std::cout << "Giorno " << (i + 1) << "\n";
        }
    }

    double livelloMedio = static_cast<double>(somma) / 7;
    std::cout << "Valore medio del livello dell'acqua: " << livelloMedio << " cm\n";

    if (livelloMedio > 0) {
        std::cout << "Acqua alta\n";
    } else {
        std::cout << "Livello normale\n";
    }

    return 0;
}

 
 

