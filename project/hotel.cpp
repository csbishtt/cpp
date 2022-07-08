#include <iostream>
using namespace std;
int main()
{

    int choice, quant;
    int qroom = 0, qpasta = 0, qcoffee = 0, qchoclate = 0, qbanana = 0, qnoodles = 0, qmagie = 0;
    int sroom = 0, spasta = 0, scoffee = 0, schoclate = 0, sbanana = 0, snoodles = 0, smagie = 0;
    int troom = 0, tpasta = 0, tcoffee = 0, tchoclate = 0, tbanana = 0, tnoodles = 0, tmagie = 0;

    cout << "enter quantity of room : " << endl;
    cin >> qroom;

    cout << "enter quantity of pasta : " << endl;
    cin >> qpasta;

    cout << "enter quantity of coffee : " << endl;
    cin >> qcoffee;

    cout << "enter quantity of choclate : " << endl;
    cin >> qchoclate;

    cout << "enter quantity of banana : " << endl;
    cin >> qbanana;

    cout << "enter quantity of noodles : " << endl;
    cin >> qnoodles;

    cout << "enter quantity of magie : " << endl;
    cin >> qmagie;

    cout << endl;

m:
    cout << "\n\n\n\t\t*****menu*****" << endl;
    cout << "press 1 for room " << endl;
    cout << "press 2 for pasta " << endl;
    cout << "press 3 for coffee " << endl;
    cout << "press 4 for choclate " << endl;
    cout << "press 5 for banana " << endl;
    cout << "press 6 for noodles " << endl;
    cout << "press 7 for magie " << endl;
    cout << "press 8 for exit " << endl;
    cout << "press 9 for information regarding" << endl;
    cout << "enter your choice : " << endl;
    cin >> choice;
    cout << endl;

    switch (choice)
    {
    case 1:
        cout << "enter number of room you want :" << endl;
        cin >> quant;
        if (qroom - sroom >= quant)
        {
            sroom = sroom + quant;
            troom = troom + (quant * 1200);
            cout << quant << " room are booked " << endl;
        }
        else
        {
            cout << "sorry we have only " << qroom - sroom << " room left !" << endl;
        }

        break;

    case 2:
        cout << "enter number of pasta you will oder :" << endl;
        cin >> quant;
        if (qpasta - spasta >= quant)
        {
            spasta = spasta + quant;
            troom = tpasta + (quant * 100);
            cout << quant << " of the pasta are order " << endl;
        }
        else
        {
            cout << "sorry we have only " << qpasta - spasta << " pasta left !" << endl;
        }

        break;

    case 3:
        cout << "enter number of coffee you will oder :" << endl;
        cin >> quant;
        if (qcoffee - scoffee >= quant)
        {
            scoffee = scoffee + quant;
            tcoffee = tcoffee + (quant * 50);
            cout << quant << " of the coffee are order " << endl;
        }
        else
        {
            cout << "sorry we have only " << qcoffee - scoffee << " coffee left !" << endl;
        }

        break;

    case 4:
        cout << "enter number of choclate you will oder :" << endl;
        cin >> quant;
        if (qchoclate - schoclate >= quant)
        {
            schoclate = schoclate + quant;
            tchoclate = tchoclate + (quant * 175);
            cout << quant << " of the choclate are order " << endl;
        }
        else
        {
            cout << "sorry we have only " << qchoclate - schoclate << " choclate left !" << endl;
        }

        break;

    case 5:
        cout << "enter number of banana you will oder :" << endl;
        cin >> quant;
        if (qbanana - sbanana >= quant)
        {
            sbanana = sbanana + quant;
            tbanana = tbanana + (quant * 30);
            cut << tbanana << " of the banana are order " << endl;
        }
        else
        {
            cout << "sorry we have only " << qbanana - sbanana << " banana left !" << endl;
        }

        break;

    case 6:
        cout << "enter number of noodles you will oder :" << endl;
        cin >> quant;
        if (qnoodles - snoodles >= quant)
        {
            snoodles = snoodles + quant;
            tnoodles = tnoodles + (quant * 100);
            cout << quant << " of the noodles are order " << endl;
        }
        else
        {
            cout << "sorry we have only " << qnoodles - snoodles << " noddles left !" << endl;
        }

        break;

    case 7:
        cout << "enter number of magie you will oder :" << endl;
        cin >> quant;
        if (qmagie - smagie >= quant)
        {
            smagie = smagie + quant;
            tmagie = tmagie + (quant * 20);

            cout << tmagie << " of the magie are order " << endl;
        }
        else
        {
            cout << "sorry we have only " << qmagie - smagie << " magie left !" << endl;
        }
        break;

    case 8:
        cout << " thanaks for the visiting " << endl;
        exit(0);
        break;

    case 9:
        cout << "the number of room we have: " << qroom << endl;
        cout << "the number of room sold : " << sroom << endl;
        cout << "the remaining room we have :" << qroom - sroom << endl;
        cout << "the total revenue from room : " << troom<<endl;

        cout << "the number of pasta we have: " << qpasta << endl;
        cout << "the number of pasta sold : " << spasta << endl;
        cout << "the remaining pasta we have :" << qpasta - spasta << endl;
        cout << "the total revenue from pasta : " << tpasta<<endl;

        cout << "the number of coffee we have: " << qcoffee << endl;
        cout << "the number of coffee sold : " << scoffee << endl;
        cout << "the remaining coffee we have :" << qcoffee - scoffee << endl;
        cout << "the total revenue from coffee : " << tcoffee<<endl;

        cout << "the number of choclate we have: " << qchoclate << endl;
        cout << "the number of choclate sold : " << schoclate << endl;
        cout << "the remaining choclate we have :" << qchoclate - schoclate << endl;
        cout << "the total revenue from choclate : " << tchoclate<<endl;

        cout << "the number of banana we have: " << qbanana<< endl;
        cout << "the number of banana sold : " << sbanana << endl;
        cout << "the remaining banana we have :" << qbanana - sbanana << endl;
        cout << "the total revenue from banana : " << tbanana<<endl;

        cout << "the number of noddles we have : " << qnoodles << endl;
        cout << "the number of noddles sold : " << snoodles << endl;
        cout << "the remaining noddles we have :" << qnoodles - snoodles << endl;
        cout << "the total revenue from noddles : " << tnoodles<<endl;

        cout << "the number of magie we have: " << qmagie << endl;
        cout << "the number of magie sold : " << smagie << endl;
        cout << "the remaining magie we have :" << qmagie - smagie << endl;
        cout << "the total revenue from magie : " << tmagie<<endl;

        cout<<"the total revenue of the day is "<<tpasta+tcoffee+tchoclate+tbanana+tnoodles+tmagie+troom<<endl;
        break;

    default:
        cout << "enter correct choice and try again " << endl;
    }

    goto m;

    return 0;
}