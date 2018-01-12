/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <qduperon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 09:40:06 by qduperon          #+#    #+#             */
/*   Updated: 2018/01/10 19:04:18 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include <string>
#include <iostream>
#include <fstream>


void  replace(std::string &str, std::string const &s1, std::string const &s2)
{
    for(size_t i = 0; (i = str.find(s1, i)) != std::string::npos;)
    {
        str.replace(i, s1.length(), s2);
        i += s2.length();
    }
}

int   main(int ac, char **av)
{
    if (ac != 4)
        std::cerr  << "invalid arguments !" << std::endl;
    else
    {
        std::ifstream        file(av[1]);
        std::stringstream    buffer;
        std::string            filename = av[1];
        std::string            newFile = filename.append(".replace");
        std::ofstream        ofs(newFile);

		if (file)
        {
			if (!av[2][0])
				return (-1);
            buffer << file.rdbuf();
            std::string str = buffer.str();
            replace(str, av[2], av[3]);
            ofs << str;
        }
        else
            std::cerr << "invald file !" << std::endl;
    }
}
