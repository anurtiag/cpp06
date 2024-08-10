/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 13:24:43 by anurtiag          #+#    #+#             */
/*   Updated: 2024/08/10 11:36:21 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ScalarConverter.hpp"

int main(int argc, char** argv)
{
    if(argc != 2)
    {
        std::cerr << "invalid arguments\n";
        return(1);
    }
    ScalarConverter::convert(argv[1]);
    return(0);
}