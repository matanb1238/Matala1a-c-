//
// Created by matan on 03/03/2021.
//

#include "snowman.hpp"
#include <iostream>
//using namespace ariel;


std::string ariel::snowman(long i) {
    std::string str = std::to_string(i);
    std::string string;
    if((str.at(0)) == '1'){
         string += "\n"
                   " _===_\n";
    }
    else if(str.at(0)=='2'){
        string += "  ___ \n"
                     " .....\n";
    }
    else if(str.at(0)=='3'){
        string += "   _  \n"
                     "  /_\\ \n";
    }
    else if(str.at(0)=='4'){
        string += "  ___ \n"
                     " (_*_)\n";
    }


    if(str.at(4)=='2'){
        string += "\\";
        if(str.at(2)=='1'){
            string += "(.";
        }
        else if(str.at(2)=='2'){
            string += "(o";
        }
        else if(str.at(2)=='3'){
            string += "(O";
        }
        else if(str.at(2)=='4'){
            string += "(-";
        }
    }
    else if(str.at(2)=='1'){
        string += " (.";
    }
    else if(str.at(2)=='2'){
        string += " (o";
    }
    else if(str.at(2)=='3'){
        string += " (O";
    }
    else if(str.at(2)=='4'){
        string += " (-";
    }



    if(str.at(1)=='1'){
        string += ",";
    }
    else if(str.at(1)=='2'){
        string += ".";
    }
    else if(str.at(1)=='3'){
        string += "_";
    }
    else if(str.at(1)=='4'){
        string += "";
    }


    if(str.at(5)=='2'){
        if(str.at(3)=='1'){
            string += ".)";
        }
        else if(str.at(3)=='2'){
            string += "o)";
        }
        else if(str.at(3)=='3'){
            string += "O)";
        }
        else if(str.at(3)=='4'){
            string += "-)";
        }
        if(str.at(5)=='2'){
            string += "/\n";
        }
    }
    else if(str.at(3)=='1'){
        string += ".)\n";
    }
    else if(str.at(3)=='2'){
        string += "o)\n";
    }
    else if(str.at(3)=='3'){
        string += "O)\n";
    }
    else if(str.at(3)=='4'){
        string += "-)\n";
    }
    if(str.at(5)=='2'){
        string += "/\n";
    }


    if(str.at(4)=='1'){
        string += "<(";
    }
    else if(str.at(4)=='3'){
        string += "/(";
    }
    else if(str.at(4)=='4'){
        string += " ( ";
    }
    else string += " (";



    if(str.at(6)=='1'){
        string += ":";
    }
    else if(str.at(6)=='2'){
        string += "] [";
    }
    else if(str.at(6)=='3'){
        string += "> <";
    }
    else if(str.at(6)=='4'){
        string += "";
    }

    if(str.at(5)=='1'){
        string += ")>\n";
    }
    else if(str.at(5)=='3'){
        string += ")\\n";
    }
    else if(str.at(5)=='4'){
        string += " )\n";
    }



    if(str.at(7)=='1'){
        string += " ( : )\n";
    }
    else if(str.at(7)=='2'){
        string += " (" ")\n";
    }
    else if(str.at(7)=='3'){
        string += " (___)\n";
    }
    else if(str.at(7)=='4'){
        string += " (   )\n";
    }

    return string;
}



