/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 04:22:18 by kali              #+#    #+#             */
/*   Updated: 2024/08/19 12:10:04 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    
}

ScalarConverter::ScalarConverter(const ScalarConverter& source)
{
    *this = source;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& source)
{
    (void)source;
    return(*this);
}

ScalarConverter::~ScalarConverter()
{
    
}

void CheckDouble(double checknum, char* endptr)
{
    // if(endptr != NULL)
    //     std::cout << "algo emos hecho mal\nebaluamos: " << checknum << std::endl << "endptr tiene: " << (int)*endptr << std::endl;
    if(*endptr != '\0' || checknum < -std::numeric_limits<double>::max() || checknum > std::numeric_limits<double>::max())
        throw std::invalid_argument("double: impossible");
}

void CheckFloat(double checknum, char* endptr)
{
    if(*endptr != '\0' || checknum < -std::numeric_limits<float>::max() || checknum > std::numeric_limits<float>::max())
        throw std::invalid_argument("float: impossible");
}

void CheckInt(double checknum, char* endptr)
{
    if(*endptr != '\0' || checknum < std::numeric_limits<int>::min() || checknum > std::numeric_limits<int>::max())
        throw std::invalid_argument("int: impossible");
}

void CheckChar(double checknum, char* endptr)
{
    if(*endptr != '\0' || checknum < std::numeric_limits<char>::min() || checknum > std::numeric_limits<char>::max())
        throw std::invalid_argument("char: impossible");
    if(isprint(static_cast<int>(checknum)) == 0)
        throw std::invalid_argument("char: Not Displayable");
}

void IsChar(std::string& literal, char n)
{
    (void)literal;
    std::cout << std::fixed << std::setprecision(1);
    try
    {
        std::cout << "char: " << n << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "int: " << static_cast<int>(n) << std::endl;
    std::cout << "float: " << static_cast<float>(n) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(n) << std::endl;
}

void IsInt(std::string& literal, int n)
{
    char end = '\0';
    char* endptr = &end;
    std::cout << std::fixed << std::setprecision(1);
    try
    {
        std::cout << "llegamos aqui?\n";
        CheckChar(strtod(literal.c_str(), &endptr), endptr);
        std::cout << "char: " << static_cast<char>(n) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        CheckInt(strtod(literal.c_str(), &endptr), endptr);
        std::cout << "int: " << n << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "float: " << static_cast<float>(n) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(n) << std::endl;
}


void IsDouble(std::string& literal, double n)
{
    std::cout << "is double\n";
    // std::cout << std::fixed << std::setprecision(1);
    char end = '\0';
    char* endptr = &end;
    try
    {
        CheckChar(strtod(literal.c_str(), &endptr), endptr);
        std::cout << "char: " << static_cast<char>(n) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        CheckInt(strtod(literal.c_str(), &endptr), endptr);
        std::cout << "int: " << static_cast<int>(n) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        CheckFloat(strtod(literal.c_str(), &endptr), endptr);
        std::cout << "float: " << static_cast<float>(n) << "f" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        CheckDouble(strtod(literal.c_str(), &endptr), endptr);
        std::cout << "double: " << n << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }   
}

void IsFloat(std::string& literal, float n)
{
    // std::cout << std::fixed << std::setprecision(1);
    std::cout << "isfloat\n";
    char end = '\0';
    char* endptr = &end;
    try
    {
        CheckChar(strtod(literal.c_str(), &endptr), endptr);
        std::cout << "char: " << static_cast<char>(n) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        CheckInt(strtod(literal.c_str(), &endptr), endptr);
        std::cout << "int: " << static_cast<int>(n) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        CheckFloat(std::strtod(literal.c_str(), &endptr), endptr);
        std::cout << "float: " << n << "f" << std::endl;;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        CheckDouble(std::strtod(literal.c_str(), &endptr), endptr);
        std::cout << "double: " << static_cast<double>(n) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }   
}

bool IsNum(std::string& literal)
{
    for(size_t i = 0; i < literal.length(); i++)
    {
        if(literal[i] < '1' || literal[i] > '9')
            return(false);
    }
    return(true);
}

bool IsPseudo(std::string& literal)
{
    if(literal.find("inf") == std::string::npos && literal.find("nan") == std::string::npos)
        return(false);
    std::cout << "char: impossible\n";
    std::cout << "int: impossible\n";
    std::cout << "float: " << ((literal.find("inff") == std::string::npos && literal.find("nanf") == std::string::npos) ? (literal + "f") : literal) << std::endl;
    std::cout << "double: " << ((literal.find("inff") != std::string::npos || literal.find("nanf") != std::string::npos) ? literal.substr(0, literal.length() -1) : literal) << std::endl;
    return(true);
}


//se mira que tipo de dato es para setear el modo
void ScalarConverter::convert(std::string& literal)
{
    if(IsPseudo(literal) == true)
        return ;
    
    if(literal.find('.') != std::string::npos)//double or float
    {
        if(literal.find('f') != std::string::npos)
        {
            IsFloat(literal, std::atof(literal.c_str()));
        }
        else
        {
            IsDouble(literal, std::atof(literal.c_str()));
        }
    }
    else
    {
        if(isprint((int)*literal.c_str()) != 0 && literal.length() == 1 && IsNum(literal) == false)//char
        {
            IsChar(literal, *literal.c_str());
        }
        else
            IsInt(literal, std::atoi(literal.c_str()));
    }
}



// void IsChar(std::string& literal, char n)
// {
//     std::cout << "ischar\n";
//     std::cout << "char: " << n << std::endl;
//     std::cout << "int: " << static_cast<int>(n) << std::endl;
//     std::cout << "float: " << static_cast<float>(n) << "f" << std::endl;
//     std::cout << "double: " << static_cast<double>(n) << std::endl;
// }

// void IsInt(std::string& literal, int n)
// {
//     std::cout << "isint\n";
//     std::cout << "char: " << static_cast<char>(n) << std::endl;
//     std::cout << "int: " << n << std::endl;
//     std::cout << "float: " << static_cast<float>(n) << "f" << std::endl;
//     std::cout << "double: " << static_cast<double>(n) << std::endl;
// }

// void IsDouble(std::string& literal, double n)
// {
//     std::cout << "isdouble\n";
//     std::cout << "char: " << static_cast<char>(n) << std::endl;
//     std::cout << "int: " << static_cast<int>(n) << std::endl;
//     std::cout << "float: " << static_cast<float>(n) << "f" << std::endl;
//     std::cout << "double: " << n << std::endl;
// }