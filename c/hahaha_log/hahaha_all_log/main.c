#include <stdio.h>

void HappyLog1(void);
void HappyLog2(void);
void HappyLog3(void);
void HappyLog4_DaXieDeWU(void);
void HappyLog5(void);
void HappyLog6(void);

int main(int argc, char *argv[]) {
    HappyLog1();
    HappyLog2();
    HappyLog3();
    HappyLog4_DaXieDeWU();
    HappyLog5();
    HappyLog6();

    return 0;
}

void HappyLog1(void) {
    printf("                    .::::.                                \r\n");
    printf("                  .::::::::.                              \r\n");
    printf("                 :::::::::::                              \r\n");
    printf("             ..:::::::::::'                               \r\n");
    printf("           '::::::::::::'                                 \r\n");
    printf("             .::::::::::                                  \r\n");
    printf("        '::::::::::::::..                                 \r\n");
    printf("             ..::::::::::::.                              \r\n");
    printf("           ``::::::::::::::::                             \r\n");
    printf("            ::::``:::::::::'        .:::.                 \r\n");
    printf("           ::::'   ':::::'       .::::::::.               \r\n");
    printf("         .::::'      ::::     .:::::::'::::.              \r\n");
    printf("        .:::'       :::::  .:::::::::' ':::::.            \r\n");
    printf("       .::'        :::::.:::::::::'      ':::::.          \r\n");
    printf("      .::'         ::::::::::::::'         ``::::.        \r\n");
    printf("  ...:::           ::::::::::::'              ``::.       \r\n");
    printf(" ````':.          ':::::::::'                  ::::..     \r\n");
    printf("                    '.:::::'                    ':'````.. \r\n");
}

void HappyLog2(void) {
    printf("                     _ooOoo_                             \r\n");
    printf("                    o8888888o                            \r\n");
    printf("                    88\" . \"88                          \r\n");
    printf("                    (| -_- |)                            \r\n");
    printf("                     O\\ = /O                            \r\n");
    printf("                 ____/`---'\\____                        \r\n");
    printf("               .   ' \\| |// `.                          \r\n");
    printf("                / \\\\||| : |||// \\                     \r\n");
    printf("              / _||||| -:- |||||- \\                     \r\n");
    printf("                | | \\\\\\ - /// | |                     \r\n");
    printf("              | \\_| ''\\---/'' | |                      \r\n");
    printf("               \\ .-\\__ `-` ___/-. /                    \r\n");
    printf("            ___`. .' /--.--\\ `. . __                    \r\n");
    printf("         ."" '< `.___\\_<|>_/___.' >'"".                 \r\n");
    printf("        | | : `- \\`.;`\\ _ /`;.`/ - ` : | |             \r\n");
    printf("          \\ \\ `-. \\_ __\\ /__ _/ .-` / /              \r\n");
    printf("  ======`-.____`-.___\\_____/___.-`____.-'======         \r\n");
    printf("                     `=---='                             \r\n");
    printf("                                                         \r\n");
    printf(".........................................................\r\n");
    printf("                                                         \r\n");
    printf("                 BUG BUG GO AWAY!                        \r\n");
    printf("                     佛祖镇楼                            \r\n");
    printf("   佛曰:                                               \r\n");
    printf("           写字楼里写字间，写字间里程序员；            \r\n");
    printf("           程序人员写程序，又拿程序换酒钱。            \r\n");
    printf("           酒醒只在网上坐，酒醉还来网下眠；            \r\n");
    printf("           酒醉酒醒日复日，网上网下年复年。            \r\n");
    printf("           但愿老死电脑间，不愿鞠躬老板前；            \r\n");
    printf("           奔驰宝马贵者趣，公交自行程序员。            \r\n");
    printf("           别人笑我忒疯癫，我笑自己命太贱；            \r\n");
    printf("           不见满街漂亮妹，哪个归得程序员？            \r\n");
}

void HappyLog3(void) {
    printf("      1只羊 == one sheep                 \r\n");
    printf("      2只羊 == two sheeps                \r\n");
    printf("      3只羊 == three sheeps              \r\n");
    printf("      4只羊 == four sheeps               \r\n");
    printf("      5只羊 == five sheeps               \r\n");
    printf("      6只羊 == six sheeps                \r\n");
    printf("      7只羊 == seven sheeps              \r\n");
    printf("      8只羊 == eight sheeps              \r\n");
    printf("      9只羊 == nine sheeps               \r\n");
    printf("      10只羊 == ten sheeps               \r\n");
    printf("      11只羊 == eleven sheeps            \r\n");
    printf("      12只羊 == twelve sheeps            \r\n");
    printf("      13只羊 == thirteen sheeps          \r\n");
    printf("      14只羊 == fourteen sheeps          \r\n");
    printf("      15只羊 == fifteen sheeps           \r\n");
    printf("      16只羊 == sixteen sheeps           \r\n");
    printf("      17只羊 == seventeen sheeps         \r\n");
    printf("      18只羊 == eighteen sheeps          \r\n");
    printf("      19只羊 == nineteen sheeps          \r\n");
    printf("      20只羊 == twenty sheeps            \r\n");
    printf("      21只羊 == twenty one sheeps        \r\n");
    printf("      22只羊 == twenty two sheeps        \r\n");
    printf("      23只羊 == twenty three sheeps      \r\n");
    printf("      24只羊 == twenty four sheeps       \r\n");
    printf("      25只羊 == twenty five sheeps       \r\n");
    printf("      26只羊 == twenty six sheeps        \r\n");
    printf("      ...                                \r\n");
}

void HappyLog4_DaXieDeWU(void) {
    int i, j, k;

    for (i = 1; i <= 21; i++)
        printf(" ");//第一行空格
    for (i = 1; i <= 12; i++)
        printf("*");//第一行*
    printf("\n");//换行
    for (j = 1; j <= 3; j++) {
        for (k = 1; k <= 20 - j; k++)
            printf(" ");//下三行左侧空格
        for (k = 1; k <= 15 + 2 * j; k++)
            printf("*");//下三行*
        printf("\n");
    }
    for (i = 1; i <= 9; i++) {
        for (k = 1; k <= 19; k++)
            printf(" ");//下九行空格
        for (k = 1; k <= 16; k++)
            printf("*");//下九行*
        printf("\n");
    }
    for (i = 1; i <= 3; i++) {
        for (k = 1; k <= 7 - 2 * i; k++)
            printf(" ");
        for (k = 1; k <= 1 + 5 * i; k++)
            printf("*");
        for (k = 1; k <= 11 - 3 * i; k++)
            printf(" ");
        for (k = 1; k <= 16; k++)
            printf("*");
        for (k = 1; k <= 11 - 3 * i; k++)
            printf(" ");
        for (k = 1; k <= 1 + 5 * i; k++)
            printf("*");//下三行
        printf("\n");
    }
    for (i = 1; i <= 2; i++) {
        for (k = 1; k <= 18; k++)
            printf("*");
        printf(" ");
        for (k = 1; k <= 16; k++)
            printf("*");
        printf(" ");
        for (k = 1; k <= 18; k++)
            printf("*");
        printf("\n");
    }
    for (i = 1; i <= 2; i++) {
        for (k = 1; k <= i-1; k++)
            printf(" ");
        for (k = 1; k <= 55 - 2 * i; k++)
            printf("*");
        printf("\n");
    }
    for (i = 1; i <= 3; i++)
        printf(" ");
    for (i = 1; i <= 46; i++)
        printf("*");
    printf("\n");
    for (i = 1; i <= 6; i++)
        printf(" ");
    for (i = 1; i <= 40; i++)
        printf("*");
    printf("\n");
    for (i = 1; i <= 10; i++)
        printf(" ");
    for (i = 1; i <= 34; i++)
        printf("*");
    printf("\n");
    for (i = 1; i <= 16; i++)
        printf(" ");
    for (i = 1; i <= 21; i++)
        printf("*");
    printf("\n\n\n\n\n");
}

void HappyLog5(void){
    printf("┌┬┬┬┬┬●●┬┬┬┬┬┬┬┬┬┐\r\n");
    printf("├┼┼┼┼●┼┼●┼┼┼┼┼┼┼┼┤\r\n");
    printf("├┼┼┼┼┼●●┼●●┼┼┼┼┼┼┤\r\n");
    printf("├┼┼┼┼┼┼┼┼●┼●┼┼┼┼┼┤\r\n");
    printf("├┼○○┼┼┼┼●┼┼┼●┼┼┼┼┤\r\n");
    printf("├○┼┼○┼○●○○○●●●┼┼┼┤\r\n");
    printf("├○┼┼○┼○┼┼┼┼○┼┼●┼┼┤\r\n");
    printf("├┼○○┼┼○┼┼┼┼○┼┼●┼┼┤\r\n");
    printf("├┼┼┼┼┼○┼┼┼┼○○○●●●┤\r\n");
    printf("└┴┴┴┴┴┴┴┴┴┴┴┴┴┴┴┴┘\r\n");
    printf("在黑子的猛烈攻势下，白棋看似处于劣势，节节败退，实则暗藏杀机，乃故意诱敌深入也。\r\n");
    printf("反之，黑子看似攻势虽猛，却深陷其中，难以自拔，不出两分钟局势必将逆转。\r\n");
    printf("届时，白子定如骑士一般反身冲杀黑棋，从天而降，反守为攻，势如破竹，\r\n");
    printf("黑棋后劲不足只能缴械投降，任人宰割。无奈仰天长叹：援军迟迟不至，真乃天要亡我也！！\r\n");
}

void HappyLog6(void){
    printf("┌┬┬┬┬┬○○┬┬┬┬┬┬┬┬┬┐\r\n");
    printf("├┼┼┼┼○┼┼○┼┼┼┼┼┼┼┼┤\r\n");
    printf("├┼┼┼┼┼○○┼○○┼┼┼┼┼┼┤\r\n");
    printf("├┼┼┼┼┼┼┼┼○┼○┼┼┼┼┼┤\r\n");
    printf("├┼●●┼┼┼┼○┼┼┼○┼┼┼┼┤\r\n");
    printf("├●┼┼●┼●○●●●○○○┼┼┼┤\r\n");
    printf("├●┼┼●┼●┼┼┼┼●┼┼○┼┼┤\r\n");
    printf("├┼●●┼┼●┼┼┼┼●┼┼○┼┼┤\r\n");
    printf("├┼┼┼┼┼●┼┼┼┼●●●○○○┤\r\n");
    printf("└┴┴┴┴┴┴┴┴┴┴┴┴┴┴┴┴┘\r\n");
    printf("在黑子的猛烈攻势下，白棋看似处于劣势，节节败退，实则暗藏杀机，乃故意诱敌深入也。\r\n");
    printf("反之，黑子看似攻势虽猛，却深陷其中，难以自拔，不出两分钟局势必将逆转。\r\n");
    printf("届时，白子定如骑士一般反身冲杀黑棋，从天而降，反守为攻，势如破竹，\r\n");
    printf("黑棋后劲不足只能缴械投降，任人宰割。无奈仰天长叹：援军迟迟不至，真乃天要亡我也！！\r\n");
}

