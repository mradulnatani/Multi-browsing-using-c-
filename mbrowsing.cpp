//#include<bits/stdc++.h>
#include<string>
#include<vector>
#include <cstdlib>
#include <thread>
using namespace std;
void open_url(const string& url) {
    string command = "start " + url;

    system(command.c_str());
}

int main() {
    vector<string> urls = {
        "http://www.google.com",
        "http://www.bing.com",
        "http://www.yahoo.com"
    };

    vector<thread> threads;

    for (const auto& url : urls) {
        threads.push_back(thread(open_url, url));
    }

    for (auto& thread : threads) {
        thread.join();
    }

    return 0;
}