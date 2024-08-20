/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:29:39 by anurtiag          #+#    #+#             */
/*   Updated: 2024/08/19 16:16:55 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data* data = new Data;
    data->data = 42;
    std::cout << "data memory address is: " << data << std::endl;
    uintptr_t serialize_data = Serializer::serialize(data);
    std::stringstream ss;
    std::cout << "the serialized value is: " << serialize_data << std::endl;
    ss << std::hex << serialize_data;
    std::string hexadecimal = ss.str();
    std::cout << "the serialized value in hexadecimal is: " << hexadecimal << std::endl;
    Data* deserialize_data = Serializer::deserialize(serialize_data);
    std::cout << "the deserialized memory address is: " << deserialize_data << std::endl;
    return(0);
}