#include <fstream>
#include <string.h>
#include <vector>
#include "Estudiante.h"

using namespace std;

    void split(string res[], string x)
    {
        int e = 0;

        for(int i = 0; i< x.size(); i++)
        {
            if(x[i] == ',')
            {
                e++;
            }
            res[e].push_back(x[i]);
        }
    }

int main() {
    ifstream source("source-file.txt");
    ofstream dest("dest-file.txt");

    string x;
    //source >> x;
    getline(source, x);

    Estudiante e();

    source.close();
    dest << x;
    return 0;
}