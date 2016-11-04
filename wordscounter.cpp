#include "wordscounter.h"

#include <iostream>
#include <algorithm>
#include <sstream>

WordsCounter::WordsCounter()
{

}

WordsCounter::~WordsCounter()
{

}

void WordsCounter::InputString()
{
    std::cout << "Enter please text:" << std::endl;

    //get line from input stream into string
    std::getline (std::cin, inputString);

    ConvertToLowerCase();

    CountUniqueWords();
}

void WordsCounter::ConvertToLowerCase()
{
    //algorithm to convert string to lowercase
    std::transform(inputString.begin(),
                   inputString.end(),
                   inputString.begin(),
                   ::tolower);
}

std::string WordsCounter::CharactersVerification(std::string str)
{
    //ASCII code of character 'a'
    char minChar = 97;
    //ASCII code of character 'z'
    char maxChar = 122;
    //token for che checked word
    std::string tokenString;


    for(size_t i = 0; i < str.size(); i++){

        //all characters that are out of range will be ignored
        if(str[i] >= minChar && str[i] <= maxChar){

            tokenString += str[i];
        }
    }
    return tokenString;
}

size_t WordsCounter::CountUniqueWords()
{
    //used to split string using std::getline
    std::istringstream streamInputString(inputString);
    //token for splitted word
    std::string tokenString;
    //space delimiter
    char delimiter = ' ';

    //divide string into words by space
    while(std::getline(streamInputString, tokenString, delimiter)) {

        std::string space = "";

        //check if word is not space between words
        if(tokenString != space){

            //variable for better code reading
            std::string word = CharactersVerification(tokenString);

            //if checked word is not empty we add it to the unique words
            if(word.size() > 0) {

                uniqueSet.insert(word);
            }
        }
    }

    //the number of unique words is the number of elemnts in unuqueSet
    size_t uniqueWords = uniqueSet.size();

    std::cout << "Number of unuqiue words: "<< uniqueWords << std::endl;

    //shows the number of unique words
    size_t uniqueWordsNumber = 0;

    //out in console unique words
    for(auto u : uniqueSet){

        ++uniqueWordsNumber;
        std::cout << uniqueWordsNumber << " : "<< u << std::endl;
    }

    return uniqueWords;
}



