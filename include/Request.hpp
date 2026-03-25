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

struct Request 
{
    std::string method;   // GET, POST
    std::string path;     // /index.html
    std::string body;
    std::map<std::string, std::string> headers;
};

#endif