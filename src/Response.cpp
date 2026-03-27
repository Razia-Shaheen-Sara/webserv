/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Response.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/25 16:58:35 by rshaheen      #+#    #+#                 */
/*   Updated: 2026/03/25 17:14:08 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Response.hpp"
#include <sstream>

static std::string getStatusText(int status)
{
    if (status == 200) return "OK";
    if (status == 404) return "Not Found";
    if (status == 500) return "Internal Server Error";
    return "OK";
}

std::string Response::build(int status, const std::string& body, const std::string& contentType)
{
    std::ostringstream res;

    res << "HTTP/1.1 " << status << " " << getStatusText(status) << "\r\n";
    res << "Content-Length: " << body.size() << "\r\n";
    res << "Content-Type: " << contentType << "\r\n";
    res << "Connection: close\r\n";
    res << "\r\n";
    res << body;
    return res.str();
}

// std::ostringstream is a stream used to build strings.
// It works like std::cout with << operator,
// but instead of printing to console, it writes to a buffer in memory
// which is retrieved by calling [name].str().