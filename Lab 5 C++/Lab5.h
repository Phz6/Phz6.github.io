#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

namespace icecream {
    int vanillaCount = 0;
    int chocolateCount = 0;
    int strawberryCount = 0;
    int bananaCount = 0;
    int oreoCount = 0;
    
    enum rating { EXCELLENT, GOOD, OK, NOT_GOOD, BAD };

    enum flavors { VANILLA, CHOCOLATE, STRAWBERRY, BANANA, OREO};

    rating getRating(double vScore, double cScore, double sScore, double bScore, double oScore){
        double average = (vScore + cScore + sScore + bScore + oScore) / 5.0;

        if (average >= 9.0) {
            return EXCELLENT;
        } else if (average >= 7.0) {
            return GOOD;
        } else if (average >= 5.0) {
            return OK;
        } else if (average >= 3.0) {
            return NOT_GOOD;
        }

        return BAD;
    }

    flavors getFavoriteFlavor(double vScore, double cScore, double sScore, double bScore, double oScore){
        if (vScore >= cScore && vScore >= sScore && vScore >= bScore && vScore >= oScore) {
            return VANILLA;
        } else if (cScore >= vScore && cScore >= sScore && cScore >= bScore && cScore >= oScore) {
            return CHOCOLATE;
        } else if (sScore >= vScore && sScore >= cScore && sScore >= bScore && sScore >= oScore) {
            return STRAWBERRY;
        } else if (bScore >= vScore && bScore >= cScore && bScore >= sScore && bScore >= oScore) {
            return BANANA;
        } else {
            return OREO;
        }
    }

    void incrementFlavorCount(flavors favorite, int& vanillaCount, int& chocolateCount, int& strawberryCount, int& bananaCount, int& oreoCount){
        switch (favorite) {
            case VANILLA:
                vanillaCount++;
                break;
            case CHOCOLATE:
                chocolateCount++;
                break;
            case STRAWBERRY:
                strawberryCount++;
                break;
            case BANANA:
                bananaCount++;
                break;
            case OREO:
                oreoCount++;
                break;
            default:
                break;
        }
    }
    
    void convertRateToMessage (rating rate, flavors favFlavor, int vanillaCount, int chocolateCount, int strawberryCount, int bananaCount, int oreoCount){
        cout << "Customer rating is ";
        switch (rate){
            case EXCELLENT:
                cout << "excellent.";
                break;
            case GOOD:
                cout << "good.";
                break;
            case OK:
                cout << "ok.";
                break;
            case NOT_GOOD:
                cout << "not good.";
                break;
            case BAD:
                cout << "bad.";
                break;
            default:
                cout << "unknown.";
                break;
        }
        cout << " Favorite: ";
        switch (favFlavor){
            case VANILLA:
                cout << "Vanilla.";
                break;
            case CHOCOLATE:
                cout << "Chocolate.";
                break;
            case STRAWBERRY:
                cout << "Strawberry.";
                break;
            case BANANA:
                cout << "Banana.";
                break;
            case OREO:
                cout << "Oreo.";
                break;
            default:
                cout << "Unknown flavor.";
                break;
        }
        cout << "\nTotals for each flavor:" << endl;
        cout << "Vanilla: " << vanillaCount << endl;
        cout << "Chocolate: " << chocolateCount << endl;
        cout << "Strawberry: " << strawberryCount << endl;
        cout << "Banana: " << bananaCount << endl;
        cout << "Oreo: " << oreoCount << endl;
    }
}
