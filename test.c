/******************************************************************************

                                    Password cracker

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    puts("`````````````````````````--::/::--.`````````````````````````\n``````````````````./+shhysoossssssyyhys+:.``````````````````\n``````````````./sdho/-.:+yddddddddhs/-:/shho:```````````````\n````````````/ydo/.```/hdddddddddddddddo.``-/ydo:````````````\n`````````.+dy:``````+ddddddddddddddddddh.````.+hh/``````````\n````````+ds.```````-ddddddddddddddddddddy```````:yh/````````\n``````:hh-`````````/ddddddddddddddddddddh`````````/ds.``````\n`````odo```````````-ddddddddddddddddddddy``````````.yd-`````\n````od/`````````````ddhhdddddddddddddydd+````````````sd:````\n```od/``````````````yd+`.:oyddddho+-``dd-`````````````yd-```\n``:do```````/y-````/dd+`````hddd/````-ddy````-s+```````hh```\n``hh``````-yddds.``/ddddyhddddddddhyydddy.``odddy-`````:d+``\n`:d+`````oddddddd/``-syyddddd+ssddddhyy+``/ddddddd+`````yd``\n`+d.```:hdddddddddy-````sdddhoysdddd.```-ydddddddddh-```+d-`\n`sd```+dddddo`/dddddo```sddddddddddd.``odddddy-oddddd```:d:`\n`sd```odddh-```.sddddh:`/dhsysysyydy`/dddddh/```-hddd```:d:`\n`+d-``oddo`````+y+hddddy.-o/sddddh/-ydddddo+h+````odh```+d-`\n`.do``oh-````-ydddo+dddddoods+dddddo+ddds:ydddy.```-y```hh``\n``sd.`:``````hdddd/`.sddddh+s:.oddddh/o-``/dddd+```````/d+``\n``.ds````````hdds.``.o/hdddds.-yohdddds.```.sdd+``````.dh```\n```/do```````hh:```+dddo+dddosdddssddddd/````:h/``````yd-```\n````+do``````+````yddddy-.+oddddds.-hddddo`````.````.yd-````\n`````:dy.`````````yddd/``:hddddh/+.``+dddo`````````-hh.`````\n``````.yd/````````ydo.``sddddd++ddd+``-ydo````````odo```````\n````````/hy:``````o-```-dddds..sdddd.```++``````/hy-````````\n``````````/hh+.````````-ddh-````/hdd.````````-ody:``````````\n````````````:ody+-`````-d/````````od.`````:ohho.````````````\n```````````````-oydy+/-..``````````-.:/oydy/-```````````````\n```````````````````-/oyhhhysooossyhhyso:-```````````````````\n``````````````````````````..----..``````````````````````````\n*/");
    int pass[4];
    puts("Enter your pass");
    scanf("%d%d%d%d", &pass[0], &pass[1], &pass[2], &pass[3]);
    //breaker
    int combinations = 0;
    int a, b, c, d;
    a = b = c = d = 0;
    while (combinations < 10000)
    {
        printf("Trying : %d%d%d%d\n", a,b,c,d);

        if (pass[0] == a && pass[1] == b && pass[2] == c && pass[2] == d)
        {
            puts("pasword matched");
            printf("cracked: %d%d%d%d\n", pass[0], pass[1], pass[2], pass[3]);
            break;
        }
        else
        {
            d++;
            if (d == 10)
            {
                d = 0;
                c++;
                if (c == 10)
                {
                    c = 0;
                    b++;
                    if (b == 10)
                    {
                        b = 0;
                        a++;
                    }
                }
            }
        }
        combinations++;
    }
    system("pause");
}

