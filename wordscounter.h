#ifndef WORDSCOUNTER_H
#define WORDSCOUNTER_H

#include <string>
#include <set>

class WordsCounter
{
public:
    /**
     * @brief WordsCounter default C-tor
     */
    WordsCounter();
    /**
     * @brief WordsCounter default D-tor
     */
    ~WordsCounter();

    /**
     * @brief InputString - method to enter text with keyboard
     */
    void InputString();

private:

    /**
     * @brief inputString - string that user inputs
     */
    std::string inputString;
    /**
     * @brief uniqueSet - container which stores unique words
     */
    std::set<std::string> uniqueSet;
    /**
      * @brief CountUniqueWords - counts the number of unique words and shows them
      * @return the number of unique words, size_t because number of words can't be negative
      */
     size_t CountUniqueWords();
    /**
     * @brief CharactersVerification - method checks if characters are in range from 'a' to 'z'
     * @param str - string characters which will be cheked
     * @return tokenString - string without invalid characters
     */
    std::string CharactersVerification(std::string str);

    /**
     * @brief ConvetToLowerCase - method converts string to lowercase
     */
    void ConvertToLowerCase();
};

#endif // WORDSCOUNTER_H
