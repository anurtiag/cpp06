/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 04:22:18 by kali              #+#    #+#             */
/*   Updated: 2024/08/10 11:45:14 by anurtiag         ###   ########.fr       */
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


// bool CheckData(long nbr, std::string type)
// {
//     if(type == "char" && static_cast<char>(nbr) <)
//     {
        
//     }
// }

void IsChar(char n)
{
    std::cout << "char: " << n << std::endl;
    std::cout << "int: " << static_cast<int>(n) << std::endl;
    std::cout << "float: " << static_cast<float>(n) << std::endl;
    std::cout << "double: " << static_cast<double>(n) << std::endl;
}

void IsInt(int n)
{
    std::cout << "char: " << static_cast<char>(n) << std::endl;
    std::cout << "int: " << n << std::endl;
    std::cout << "float: " << static_cast<float>(n) << std::endl;
    std::cout << "double: " << static_cast<double>(n) << std::endl;
}

void IsDouble(double n)
{
    std::cout << "char: " << static_cast<char>(n) << std::endl;
    std::cout << "int: " << static_cast<int>(n) << std::endl;
    std::cout << "float: " << static_cast<float>(n) << std::endl;
    std::cout << "double: " << n << std::endl;
}

void IsFloat(float n)
{
    std::cout << "char: " << static_cast<char>(n) << std::endl;
    std::cout << "int: " << static_cast<int>(n) << std::endl;
    std::cout << "float: " << n << std::endl;
    std::cout << "double: " << static_cast<double>(n) << std::endl;
}

void ScalarConverter::convert(const std::string& literal)
{
    std::stringstream ss(literal.c_str());

    if(literal.find('.') != std::string::npos)//double or float
    {
        if(literal.find('f') != std::string::npos)
            IsFloat(std::atof(literal.c_str()));
        else
            IsDouble(std::atof(literal.c_str()));
    }
    else
    {
        std::cout << "aunque sea llegamos por aqui?\n" << literal << std::endl << isprint(atoi(literal.c_str())) << std::endl;
        if(isprint(atoi(literal.c_str())) != 0)//char
        {
            IsChar(std::atoi(literal.c_str()));
        }
        else
            IsInt(std::atoi(literal.c_str()));
    }
}

// void print(void* data)
// {
    
// // void IsChar(char n)
// // {
// //     std::cout << "char: " << n << std::endl;
// //     std::cout << "int: " << static_cast<int>(n) << std::endl;
// //     std::cout << "float: " << static_cast<float>(n) << std::endl;
// //     std::cout << "double: " << static_cast<double>(n) << std::endl;
// // }

// // void IsInt(int n)
// // {
// //     std::cout << "char: " << n << std::endl;
// //     std::cout << "int: " << static_cast<int>(n) << std::endl;
// //     std::cout << "float: " << static_cast<float>(n) << std::endl;
// //     std::cout << "double: " << static_cast<double>(n) << std::endl;
// // }

// // void IsDouble(char n)
// // {
// //     std::cout << "char: " << n << std::endl;
// //     std::cout << "int: " << static_cast<int>(n) << std::endl;
// //     std::cout << "float: " << static_cast<float>(n) << std::endl;
// //     std::cout << "double: " << static_cast<double>(n) << std::endl;
// // }

// // void IsFloat(float n)
// // {
// //     std::cout << "char: " << static_cast<char>(n) << std::endl;
// //     std::cout << "int: " << static_cast<int>(n) << std::endl;
// //     std::cout << "float: " << n << std::endl;
// //     std::cout << "double: " << static_cast<double>(n) << std::endl;
// // }
// }