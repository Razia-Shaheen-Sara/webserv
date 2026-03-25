/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Response.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/25 16:55:37 by rshaheen      #+#    #+#                 */
/*   Updated: 2026/03/25 16:57:20 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RESPONSE_HPP
#define RESPONSE_HPP

#include <string>

class Response 
{
	public:
    	static std::string build(int status, const std::string& body, const std::string& contentType);
};

#endif