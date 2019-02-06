    #include <iostream>
#include "copier.h"
#include "printer2D.h"
#include "pprinter3D.h"
#include <vector>
int main()
{
    std::vector<Printer*> printers;

    Printer2D twoDPrinterNo1(11, 13);
    Printer2D twoDPrinterNo2(80, 86);
    Printer2D twoDPrinterNo3(8, 17);
    Printer3D threeDPrinterNo1(80,11,13);
    Printer3D threeDprinterNo2(86,1,13);
    Copier firstCopier(22,33,99);
    Copier secondCopier(11,55,111);
    Scanner firstScanner(7);
    Scanner secondScanner(13);


    printers.push_back(&twoDPrinterNo1);
    printers.push_back(&twoDPrinterNo2);
    printers.push_back(&twoDPrinterNo3);
    printers.push_back(&threeDprinterNo2);
    printers.push_back(&threeDPrinterNo1);
    printers.push_back(&firstCopier);

    for (int i = 0; i < printers.size(); i++){

        (*printers[i]).print();
    }

    std::vector<Scanner*> scanners;

    scanners.push_back(&firstScanner);
    scanners.push_back(&secondScanner);
    scanners.push_back(&firstCopier);
    scanners.push_back(&secondCopier);

    for (int i = 0; i < scanners.size(); i++){

        (*scanners[i]).scan();
    }

    Copier thirdCopier(22,33,44);
    thirdCopier.copy();

    std::cout << "Hello, World! MivaaaAAAaaaaaan!!!!" << std::endl;
    return 0;
}