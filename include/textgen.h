// Copyright 2023 Fenridan
#ifndef INCLUDE_TEXTGEN_H_
#define INCLUDE_TEXTGEN_H_
#include <string>
#include <deque>
#include <vector>
#include <map>
class Gen {
 private:
    std::string data;
    std::vector<std::string> words;
    typedef std::deque<std::string> prefix;
    int NPREF;
    int MAXGEN;
 public:
    std::map<prefix, std::vector<std::string> > statetab;
    Gen(std::string arr, int val1, int val2);
    std::string getText();
    Gen(std::map<prefix, std::vector<std::string> > val,
        std::vector<std::string> words, int val1, int val2);
};
#endif // INCLUDE_TEXTGEN_H_
