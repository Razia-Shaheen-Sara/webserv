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
    Request req; // Create a Request object
    req.method = "GET"; // Set the HTTP method to "GET"
    req.path = "/"; // Set the path to the root of the server
    std::cout << Handler::handle(req) << std::endl;// Call the Handler's handle method with the request and print the response
}

//GET is a http method
// HTTP method = a simple string that tells the server WHAT action the client wants.
// Examples:
// "GET"    → fetch/read data
// "POST"   → send/create data
// "DELETE" → remove data
