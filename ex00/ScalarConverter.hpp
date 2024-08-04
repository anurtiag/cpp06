/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 04:22:22 by kali              #+#    #+#             */
/*   Updated: 2024/07/26 04:48:26 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>

class ScalarConverter
{
    private:
        
    public:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter& source);
        ScalarConverter& operator=(const ScalarConverter& source);
        static void convert(std::string& s);
};

#endif