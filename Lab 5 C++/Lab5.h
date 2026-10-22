using namespace icecream;

namespace icecream {
    enum rating { EXCELLENT, GOOD, OK, NOT_GOOD, BAD };

    enum flavors { VANILLA, CHOCOLATE, STRAWBERRY, BANANA, OREO};

    rating getRating(double vScore, double cScore, double sScore, double bScore, double oScore){
        average = (vScore + cScore + sScore + bScore + oScore) / 5.0;
        if (average >= 9.0) {
            return EXCELLENT;
        } else if (average >= 7.0 && average < 9.0) {
            return GOOD;
        } else if (average >= 5.0 && average < 7.0) {
            return OK;
        } else if (average >= 3.0 && average < 5.0) {
            return NOT_GOOD;
        } else {
            return BAD;
        }
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

    void incrementFlavorCount(flavors favorite){
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
        }   
    }
    
    string convertRateToMessage (rating rate, flavors favFlavor){
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
        }
        cout << "Favorite: ";
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
        }
        cout << "Totals for each flavor:" << endl;
        cout << "Vanilla: " << vanillaCount << endl;
        cout << "Chocolate: " << chocolateCount << endl;
        cout << "Strawberry: " << strawberryCount << endl;
        cout << "Banana: " << bananaCount << endl;
        cout << "Oreo: " << oreoCount << endl;
}

}