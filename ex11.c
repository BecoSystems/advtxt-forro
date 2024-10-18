/*****************************************************************************
 *   exN.c                                    Version 20180714.101818        *
 *                                                                           *
 *   Brief description                                                       *
 *   Copyright (C) 2016-2018    by Ruben Carlo Benante                       *
 *****************************************************************************
 *   This program is free software; you can redistribute it and/or modify    *
 *   it under the terms of the GNU General Public License as published by    *
 *   the Free Software Foundation; either version 2 of the License.          *
 *                                                                           *
 *   This program is distributed in the hope that it will be useful,         *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of          *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the           *
 *   GNU General Public License for more details.                            *
 *                                                                           *
 *   You should have received a copy of the GNU General Public License       *
 *   along with this program; if not, write to the                           *
 *   Free Software Foundation, Inc.,                                         *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.               *
 *****************************************************************************
 *   To contact the author, please write to:                                 *
 *   Ruben Carlo Benante                                                     *
 *   Email: rcb@beco.cc                                                      *
 *   Webpage: www.beco.cc                                                    *
 *   Phone: +55 (81) 3184-7555                                               *
 *****************************************************************************/

/* ------------------------------------------------------------------------- */
#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int x;
    printf("você acorda e percebe que todo o seu time esta morto, mas também sobrou um oponente para você encarar, você como um guerreiro conhecido como centurião decide lutar, porém seu oponente não é nada fraco, ele é o Lawbrider, um cavaleiro com 195 cm , pesando mais de 100kg, com uma armadura super resistente e portando um poleaxe  uma arma versátil de combate medieval, com cabo de mais de 2m, lâmina afiada, martelo esmagador e uma ponta perfurante. Unindo força e precisão, a sua frente havia duas escolhas de armas para pegar, escolha com sabedoria.\n");
    printf("(1)espada gladius\n");
    printf("(2)epsilon axe\n");
    scanf("%d",&x);
    if(x==1){
        printf("gladius por ser uma espada padrão dos soldados romanos, curta e ideal para combates corpo a corpo, eficiente tanto para cortes quanto para estocadas rápidas era perfeita para você que havia treinado sua vida toda com ela\n");
    }
    if(x==2){
        printf("você nunca tinha visto uma arma como essa antes, logo não tinha ideia de como usa-la, dando chance para para o Lawbrider ataca-lo e arrancar sua cabeça\n");
        exit (0);
}
    if(x>2){
        printf("essa opção não existe, você fica parado olhando para o chão e tem o corpo pefurado pelo poleaxe do Lawbrider, assim morrendo.\n");
        exit(0);
    }
    if(x>1){
        printf("essa opção não existe, você fica parado olhando para o chão e tem o corpo pefurado pelo poleaxe do Lawbrider, assim morrendo.\n");
        exit(0);
    }
    printf("você com sua gladius entre em um combate épico contra o Lawbrider até que ele grita AD MORTEM INIMICUS lançando um ataque cortante extremamente poderoso com o poleaxe na sua direção e você rapidamente pensa em\n");
    printf("(3)esquivar do ataque\n");
    printf("(4)dar um soco nele\n");
    scanf("%d",&x);
    if(x<3){
        printf("você tá doido e precisa estudar, logo morreu\n");
    }
    if(x>4){
        printf("essa opção não existe, você morreu\n");
    }
    if(x==3){
        printf("você tenta esquivar-se do golpe, porém o golpe varre uma área muito maior do que você imaginou e acaba sendo atingido por ele e é partido ao meio, assim morrendo e deixando sua equipe desapontada.\n");
 exit(0);
    }
    if(x==4){
    printf("você desfere não um soco qualquer e sim um soco capaz de quebrar paredes e antes do golpe atingir Lawbrider você grita INCREDIBILIS derrubando-o no chão deixando uma abertura para você perfurar a barriga dele com sua espada gladius, assim você faz e o mata, deixando todo seu time orgulhoso por derrotar um oponente tão formidável.\n");
    }
    }

/* ------------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : C config for Vim modeline    */
/* Template by Dr. Beco <rcb at beco dot cc>       Version 20180716.101436   */

