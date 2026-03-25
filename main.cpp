/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/25 17:11:32 by rshaheen      #+#    #+#                 */
/*   Updated: 2026/03/25 17:14:21 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "include/Handler.hpp"
#include <iostream>

int main()
{
    Request req;
    req.method = "GET";
    req.path = "/";

    std::cout << Handler::handle(req) << std::endl;
}