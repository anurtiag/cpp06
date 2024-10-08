/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 04:22:22 by kali              #+#    #+#             */
/*   Updated: 2024/08/18 13:00:50 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <cctype>
# include <sstream>
# include <limits>
# include <cstdlib>
# include <cmath>
# include <iomanip>

enum
{
    TOCHAR,
    TOINT,
    TODOUBLE,
    TOFLOAT
};

class ScalarConverter
{
    private:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter& source);
        ScalarConverter& operator=(const ScalarConverter& source);
    public:
        static void convert(std::string& literal);
};

#endif