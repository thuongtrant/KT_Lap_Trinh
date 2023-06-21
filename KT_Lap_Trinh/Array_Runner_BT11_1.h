#pragma once
#include <iostream>
#include "Runner.h"
using namespace std;

int Array_Runner_BT11_1()
{
	Runner("Array_Runner_BT11").addDescription("Bai hoc: Array").message();

    char arr[13][6];
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            arr[i][j] = '*';
        }
    }
    for (int i = 0; i < 14; i++)
    {
        if (i == 0)
        {
            cout << "\t";
            for (char i = 'A'; i < 'G'; i++)
                cout << i << "\t";
            cout << endl;
        }
        else
        {
            cout << "Hang " << i << "\t";
            for (int j = 0; j < 6; j++)
            {
                cout << arr[i - 1][j] << "\t";
            }
            cout << endl;
        }
    }
    int choose;
    int n;
comeback:
    cout << "Chon loai ve (1)thuonggia (2)phothong (3)tietkiem" << endl;
    cin >> choose;
    while (choose < 1 || choose > 3)
    {
        cout << "Nhap lai!" << endl;
        cin >> choose;
    }
    switch (choose)
    {
    case 1:
        cout << "Chon ghe muon ngoi: ";
        cin >> n;
        system("cls");
        for (int i = 0; i < 2; i++)
        {
            if (arr[i][n - 1] == '*')
            {
                arr[i][n - 1] = 'X';
                break;
            }
        }
        goto come;
        cout << "Ghe ban muon dat da het!";
        break;
    case 2:
        cout << "Chon ghe muon ngoi: ";
        cin >> n;
        system("cls");
        for (int i = 2; i < 7; i++)
        {
            if (arr[i][n - 1] == '*')
            {
                arr[i][n - 1] = 'X';
                break;
            }
        }
        goto come;
        cout << "Ghe ban muon dat da het!";
        break;
    case 3:
        cout << "Chon ghe muon ngoi: ";
        cin >> n;
        system("cls");
        for (int i = 7; i < 13; i++)
        {
            if (arr[i][n - 1] == '*')
            {
                arr[i][n - 1] = 'X';
                break;
            }
        }
        goto come;
        cout << "Ghe ban muon dat da het!";
        break;
    }
come:
    for (int i = 0; i < 14; i++)
    {
        if (i == 0)
        {
            cout << "\t";
            for (char i = 'A'; i < 'G'; i++)
                cout << i << "\t";
            cout << endl;
        }
        else
        {
            cout << "Hang " << i << "\t";
            for (int j = 0; j < 6; j++)
            {
                cout << arr[i - 1][j] << "\t";
            }
            cout << endl;
        }
    }
    int x;
    cout << "Ban muon dat them ghe khong? (1)Co (2)Khong" << endl;
    cin >> x;
    while (x < 1 || x > 2)
    {
        cout << "Nhap lai!" << endl;
        cin >> x;
    }
    switch (x)
    {
    case 1:
        goto comeback;
        break;
    case 2:
        return 0;
    }
}
