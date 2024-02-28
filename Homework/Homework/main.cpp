#include "HouseholdAppliances.h"
#include "PortableElectronics.h"
#include "PortableMixer.h"

int main()
{
    IElectronics* ShopElectronics[5];

    ShopElectronics[0] = new Oven(15, 2000);
    ShopElectronics[1] = new Television(10, 30);
    ShopElectronics[2] = new Player(24, 500);
    ShopElectronics[3] = new Phone(12, 5);
    ShopElectronics[4] = new PortableMixer(1, 30);

    bool open = true;
    while (open)
    {
        cout << "�������� ����� : 1 - ����, 2 - ���������, 3 - �����, 4 - �������, 5 - ����������� ������, 0 ����� �����" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            ShopElectronics[0]->ShowSpec();
            break;

        case 2:
            ShopElectronics[1]->ShowSpec();
            break;

        case 3:
            ShopElectronics[2]->ShowSpec();
            break;

        case 4:
            ShopElectronics[3]->ShowSpec();
            break;

        case 5:
            ShopElectronics[4]->ShowSpec();
            break;

        case 0:
            open = false;
            break;

        default:
            cout << "�������� ����� �� 1 �� 5 ��� 0, ����� �����" << endl;
            break;
        }
    }
    delete ShopElectronics[0];
    delete ShopElectronics[1];
    delete ShopElectronics[2];
    delete ShopElectronics[3];
    delete ShopElectronics[4];

    return 0;
}