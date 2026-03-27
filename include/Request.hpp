/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Request.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/25 16:55:43 by rshaheen      #+#    #+#                 */
/*   Updated: 2026/03/25 16:57:10 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef REQUEST_HPP
#define REQUEST_HPP

#include <string>
#include <map>


//represents an HTTP request
//Request is a simple struct that holds the method, path, body, and headers of an HTTP request
//headers are stored in a map where the key is the header name and the value is the header value
//example: headers["Content-Type"] = "application/json";

struct Request 
{
    std::string method;   // GET, POST
    std::string path;     // /index.html
    std::string body;
    std::map<std::string, std::string> headers;
};

#endif