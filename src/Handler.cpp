/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Handler.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/25 16:59:06 by rshaheen      #+#    #+#                 */
/*   Updated: 2026/03/25 17:13:56 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Handler.hpp"
#include "../include/Response.hpp"

std::string Handler::handle(const Request& req)
{
    if (req.method == "GET" && req.path == "/")
        return Response::build(200, "Hello World", "text/plain");

    return Response::build(404, "Not Found", "text/plain");
}