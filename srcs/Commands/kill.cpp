/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kill.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:40:57 by arudy             #+#    #+#             */
/*   Updated: 2022/11/30 18:27:10 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Server.hpp"
#include "../../includes/User.hpp"
#include "../../includes/Channel.hpp"

int	Server::_kill(User *user, std::string buff) {
	if (!user->isOp())
		return _sendError(user, ERR_NOPRIVILEGES(user->getClient(), user->getNick()));
	std::pair<std::string, std::string> pair = _strToPair(buff);

	if (pair.first.empty() || pair.second.empty())
		return _sendError(user, ERR_NEEDMOREPARAMS(user->getClient(), user->getNick(), "KILL"));
	User *tmp;
	std::map<int, User *>::iterator it = _users.begin();
	for (; it != _users.end(); it++) {
		if (it->second->getNick() == pair.first) {
			tmp = it->second;
			break;
		}
	}
	if (it == _users.end())
		return _sendError(user, ERR_NOSUCHNICK(user->getClient(), user->getNick(), pair.first));
	_sendExecuted(tmp, ":" + user->getNick() + " KILL " + tmp->getNick() + " " + pair.second + "\r\n");
	return _disconnectUser(tmp, 0);
}
