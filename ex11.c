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
#include <stdio.h>
#include <stdlib.h>

void exibirMenu() {
    int opcao;

    printf("=====================================\n");
    printf("    Bem-vindo ao Battle of Forro!    \n");
    printf("=====================================\n");
    printf("pressione 1 para iniciar sua batalha.\n");
    printf("pressione 2 para sair.\n: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        int x;
        printf("você acorda e percebe que todo o seu time esta morto, mas também sobrou um oponente para você encarar, você como um guerreiro conhecido como centurião decide lutar, porém seu oponente não é nada fraco, ele é o Lawbrider, um cavaleiro com 195 cm , pesando mais de 100kg, com uma armadura super resistente e portando um poleaxe, uma arma versátil de combate medieval, com cabo de mais de 2m, lâmina afiada, martelo esmagador e uma ponta perfurante. Unindo força e precisão, a sua frente havia duas escolhas de armas para pegar, escolha com sabedoria.\n");
        printf("(1) Espada Gladius\n");
        printf("(2) Epsilon Axe\n: ");
        scanf("%d", &x);

        if (x == 1) {
            printf("Gladius, por ser uma espada padrão dos soldados romanos, curta e ideal para combates corpo a corpo, eficiente tanto para cortes quanto para estocadas rápidas, era perfeita para você que havia treinado sua vida toda com ela.\n");
        }
        if (x == 2) {
            printf("Você nunca tinha visto uma arma como essa antes, logo não tinha ideia de como usá-la, dando chance para o Lawbringer atacá-lo e arrancar sua cabeça.\n");
            exit(0);
        }
        if (x > 1) {
            printf("Essa opção não existe. Você fica parado olhando para o chão e tem o corpo perfurado pelo poleaxe do Lawbringer, assim morrendo.\n");
            exit(0);
        }

        printf("Você com sua Gladius entra em um combate épico contra o Lawbringer até que ele grita 'AD MORTEM INIMICUS' lançando um ataque cortante extremamente poderoso com o poleaxe na sua direção. Você rapidamente pensa em:\n");
        printf("(3) Esquivar do ataque\n");
        printf("(4) Dar um soco nele\n: ");
        scanf("%d", &x);

        if (x == 3) {
            printf("Você tenta esquivar-se do golpe, porém o golpe varre uma área muito maior do que você imaginou e acaba sendo atingido por ele, sendo partido ao meio. Você morre, deixando sua equipe desapontada.\n");
            exit(0);
        }
        if (x == 4) {
            printf("Você desfere não um soco qualquer, mas sim um soco capaz de quebrar paredes! Antes do golpe atingir Lawbringer, você grita 'INCREDIBILIS', derrubando-o no chão e deixando uma abertura para perfurar a barriga dele com sua espada Gladius. Assim, você o mata, deixando todo o seu time orgulhoso por derrotar um oponente tão formidável.\n");
        }
        if (x > 4) {
            printf("Essa opção não existe. Você morreu.\n");
            exit(0);
        }

        printf("Fim de Jogo. Pressione 3 para sair.\n: ");

        do {
            scanf("%d", &opcao);
            if (opcao != 3) {
                printf("Opção invalida. Pressione 3 para sair.\n");
            }
        } while (opcao != 3);

        printf("Saindo do jogo... Até logo guerreiro!\n");
        exit(0);
    }
    if (opcao == 2) {
        printf("Saindo do jogo... Até logo guerreiro!\n");
    }
    if (opcao > 2) {
        printf("Opção invalida. Tente novamente.\n");
        exibirMenu();
    }
}

int main() {
    exibirMenu();
    return 0;
}
/* ------------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : C config for Vim modeline    */
/* Template by Dr. Beco <rcb at beco dot cc>       Version 20180716.101436   */

