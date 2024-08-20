/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 13:24:43 by anurtiag          #+#    #+#             */
/*   Updated: 2024/08/19 11:32:53 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ScalarConverter.hpp"

void test1()
{
    std::cout << "\n\n\ntest1: simple test\n\n\n";
    std::string s1 = "a"; std::string s2 = "0"; std::string s3 = "9.9"; std::string s4 = "97.1f";
    ScalarConverter::convert(s1);
    std::cout << "\n";
    ScalarConverter::convert(s2);
    std::cout << "\n";
    ScalarConverter::convert(s3);
    std::cout << "\n";
    ScalarConverter::convert(s4);
    std::cout << "\n\n\n";
}

void test2()
{
    std::cout << "\n\n\ntest2: out of range\n\n\n";
    std::string s1 = "300"; std::string s2 = "2147483648.0"; std::string s3 = "1797693134862315708145274237317043567980705675258449965989174768031572607800285387605895586327668781715404589535143824642343213268894641827684675467035375169860499105765512820762454900903893289440758685084551339423045832369032229481658085593321233482747978262041447231644448738177180919299881250404026184124858361.0";
    ScalarConverter::convert(s1);
    std::cout << "\n";
    ScalarConverter::convert(s2);
    std::cout << "\n";
    ScalarConverter::convert(s3);
    std::cout << "\n\n\n";
}

void test3()
{
    std::cout << "\n\n\ntest3: double pseudo literals\n\n\n";
    std::string s1 = "inf"; std::string s2 = "-inf"; std::string s3 = "nan"; std::string s4 = "-nan";
    ScalarConverter::convert(s1);
    std::cout << "\n";
    ScalarConverter::convert(s2);
    std::cout << "\n";
    ScalarConverter::convert(s3);
    std::cout << "\n";
    ScalarConverter::convert(s4);
    std::cout << "\n\n\n";
}

void test4()
{
    std::cout << "\n\n\ntest4: float pseudo literals\n\n\n";
    std::string s1 = "inff"; std::string s2 = "-inff"; std::string s3 = "nanf"; std::string s4 = "-nanf";
    ScalarConverter::convert(s1);
    std::cout << "\n";
    ScalarConverter::convert(s2);
    std::cout << "\n";
    ScalarConverter::convert(s3);
    std::cout << "\n";
    ScalarConverter::convert(s4);
    std::cout << "\n\n\n";
}

int main()
{
    // test1();
    test2();
    // test3();
    // test4();
}

// int main(int argc, char** argv)
// {
//     if(argc != 2)
//     {
//         std::cerr << "invalid arguments\n";
//         return(1);
//     }
//     std::string literal = argv[1];
//     ScalarConverter::convert(literal);
//     std::string a = "a";
//     std::cout << std::atol(a.c_str()) << std::endl;
//     return(0);
// }