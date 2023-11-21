/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:33:23 by fprosper          #+#    #+#             */
/*   Updated: 2023/11/15 16:15:58 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* In questo piccolo script si andra a definire l'oggetto derivato da una classe
Zombie e si andra a guardare da vicino la gestione e l'inizializzazione degli
attributi privati relativi all'oggetto.

La prima funzione definisce un oggetto zombie1 di tipo Zombie ed inizializza
l'attributo Name con Marco 

La seconda funzione chiama entra nell'oggetto zombie1 e chiama la funzione
definita dal prototipo Classe Zombie e stampa il Name relativo all'oggetto,
in questo caso quindi Marco

La terza funzione tramite allocaione dinamica definisce un oggetto zombie2
derivato dalla classe prototipo Zombie ed esattamente come eseguito per zombie1
presente su memoria heep, viene inizializzato l'attributo Name con Giovanna.

La quarta funzione entra nell'oggetto creato zombie2 e chiama la funzione
announce definita nella classe Zombie

infine la quarta funzione elimina la memoria allocata per zombie2 */

#include "./include/Zombie.hpp"

int main(void)
{
    Zombie zombie1("Marco");
    zombie1.announce();
    Zombie *zombie2 = newZombie("Giovanna");
    zombie2->announce();
    randomChump("Frank");
    delete zombie2;
    return (0);
}
