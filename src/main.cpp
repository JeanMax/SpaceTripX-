// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mc <mc.maxcanal@gmail.com>                 +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2020/01/13 13:41:54 by mc                #+#    #+#             //
//   Updated: 2020/01/13 14:52:23 by mc               ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "proj3000.hpp"

int		main(int ac, char **av)
{
    MSG("ac: " << ac);
    while (*av)
        MSG("av: " << *av++);

    return EXIT_SUCCESS;
}
