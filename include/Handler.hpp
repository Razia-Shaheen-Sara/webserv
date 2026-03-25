/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Handler.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/25 16:55:46 by rshaheen      #+#    #+#                 */
/*   Updated: 2026/03/25 16:57:45 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLER_HPP
#define HANDLER_HPP

#include "Request.hpp"
#include <string>

class Handler 
{
	public:
    	static std::string handle(const Request& req);
};

#endif