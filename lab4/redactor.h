#ifndef REDACTOR_H
#define REDACTOR_H

#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

/**
    @file redactor.h
*/

/**
    @brief String input
    @details
    a function that allows you to take and return a certain string

    @param temporary value, which will serve as a further signal
    @return some string from text file
*/

string StrInput();

/**
    @brief dialog confirmation
    @details
    this function is necessary to confirm changes to the original text

    @param temporary value, which will serve as a further signal

    @return int value that will serve as a signal for further actions
*/

int CaseDialog();

/**
    @brief dialog confirmation
    @details
    if the function value "CaseDialog" is not equal "y" or "n", it displays an error and prompts you to re-enter the value
*/

int DialogYN();

/**
    @brief replacing words
    @details
    function of replacing the location of a word using a word entered by the user
    @param text file with initial text

    @return edited text
*/

string Corrector(string In, string badwords);

/**
    @brief function initialization
    @details
    function that calls the text editing function
*/

string Bad(string str);


#endif

