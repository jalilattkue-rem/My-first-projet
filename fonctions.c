#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// exercice2.1: somme de deux nombres//
/*@brief calcul la somme de 2 nombres
@param the users enter 2 nombers
@return int somme[out]*/
int somme(void)
{
    int a, b;
    printf("entrer des nombres/n");
    scanf("%d%d", &a, &b);
    return a + b;
}

// execice 2.2: moyenne de trois notes
/*@brief calcul la moyenne
@param the users enters note
@return float moyenne[out]*/
float moyenne()
{
    int tab[3];
    float moyenne = 0;
    for (int i = 0; i < 3; i++)
    {
        printf("entrer une note %d:", i + 1);
        scanf("%d", &tab[i]);
        moyenne += tab[i];
    }
    moyenne /= 3;
    return moyenne;
}

// exercice2.3: aire du rectangle
/*@brief calcul de l'aire du rectangle
@param the users enters la log et la largeur
@return aire[out ]*/

float A_rectangle()
{
    float aire, longueur, largeur;
    printf("entrer respectivement la longueur et la largeur");
    scanf("%f%f", &longueur, &largeur);
    aire = longueur * largeur;
    return aire;
}
/*
// exercice2.4: conversion de temperature
/*@Brief convertit la temperature
@param the users enter temp C°
@return temp F*/

float convert_temp()
{
    float F;
    float C;
    printf("entrer la température en celsius");
    scanf("℅f", &C);
    F = (C * 1.8) + 32;
    printf("la temperature en fahrenheit est de %f/n", F);
    return F;
}
// exo 2.5 Prix TTC
/*@brief calcul TTC
@param the users enter price HT
@return HT*/

float TTC()
{
    float HT, TTC;
    const float TVA = 19.25;
    printf("entrer le prix HT");
    scanf("%f", &HT);
    TTC = HT * (1 + TVA);
    return TTC;
}

/*exercice 3: Probleme de Base;
3.1 @brief echange de 02 variables*/

int echange1()
{
    int x = 10, y = 20;
    x = y;
    y = 10;
    return x, y;
}
int echange2()
{
    int x = 10, y = 20, D;
    x = D;
    x = y;
    y = D;
    return x, y;
}

/*3.2 @brief perimetre du cercle
@param [in] rayon
@return perimetre , aire*/

const float pi = 3.14159;
float cercle()
{
    float r, p, a;
    printf("entrer le rayon du cercle");
    scanf("%f", &r);
    p = 2 * pi * r;
    a = pi * sqrt(r);
    return a, p;
}
/*3.3 @brief calcul d'une facture
@param [in] quantité
@return montant total et TTC
*/
const float tva = 19.25;
float cal_facture()
{
    int pr_U, qte, Mt;
    float TTC;
    printf("entrer le prix unitaire et la quantité");
    scanf("%d %d", &pr_U, &qte);
    Mt = pr_U * qte;
    TTC = (Mt * tva) / 100;
    return Mt, TTC;
}
/*3.4 @brief calcul l'IMC
@param [in] poids et taille
@return imc
*/
float Imc()
{
    float P, t, imc;
    printf("entrer le poids et la taille");
    scanf("%f%f", &P, &t);
    imc = P / (sqrt(t));
    return imc;
}

int main()
{
    int resultat = 0;
    printf("--- Test exercice 2.1 ---/t");
    resultat = somme();
    printf("resultat est %d", resultat);
    printf("---Test exercice 2.2---/t");
    float moyg = 0;
    moyg = moyenne();
    printf("la moyenne est de %f", moyg);
    float calculaire = 0;
    printf("--- Test exercice 2.3---/t");
    calculaire = A_rectangle();
    return 0;
}
