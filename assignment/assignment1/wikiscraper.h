#ifndef WIKISCRAPER_H
#define WIKISCRAPER_H

#include <cpr/cpr.h>

#include <filesystem>  // making inputting files easier
#include <fstream>     // for ifstream
#include <iostream>    // for cout, cin
#include <iterator>
#include <queue>
#include <sstream>  // for stringstream
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::priority_queue;
using std::string;
using std::stringstream;
using std::unordered_map;
using std::unordered_set;
using std::vector;

class WikiScraper {
public:
    WikiScraper();

    /*
     * This method takes the page name of a Wikipedia page and
     * returns an unordered_set containing all the links on this page.
     */
    std::unordered_set<std::string> getLinkSet(const std::string& page_name);

private:
    std::string getPageSource(const std::string& page_name);
    std::unordered_map<std::string, std::string> page_cache;
    std::unordered_map<std::string, std::unordered_set<std::string>> linkset_cache;
};

vector<string> findWikiLadder(const string& start_page, const string& end_page);
bool valid_wikilink(const string& link);
unordered_set<string> findWikiLinks(const string& inp);

#endif  // WIKISCRAPER_H
