#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D3138
// Address: 0x3d3138 - 0x3d3758
void sub_003D3138_0x3d3138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D3138_0x3d3138");
#endif

    switch (ctx->pc) {
        case 0x3d3138u: goto label_3d3138;
        case 0x3d313cu: goto label_3d313c;
        case 0x3d3140u: goto label_3d3140;
        case 0x3d3144u: goto label_3d3144;
        case 0x3d3148u: goto label_3d3148;
        case 0x3d314cu: goto label_3d314c;
        case 0x3d3150u: goto label_3d3150;
        case 0x3d3154u: goto label_3d3154;
        case 0x3d3158u: goto label_3d3158;
        case 0x3d315cu: goto label_3d315c;
        case 0x3d3160u: goto label_3d3160;
        case 0x3d3164u: goto label_3d3164;
        case 0x3d3168u: goto label_3d3168;
        case 0x3d316cu: goto label_3d316c;
        case 0x3d3170u: goto label_3d3170;
        case 0x3d3174u: goto label_3d3174;
        case 0x3d3178u: goto label_3d3178;
        case 0x3d317cu: goto label_3d317c;
        case 0x3d3180u: goto label_3d3180;
        case 0x3d3184u: goto label_3d3184;
        case 0x3d3188u: goto label_3d3188;
        case 0x3d318cu: goto label_3d318c;
        case 0x3d3190u: goto label_3d3190;
        case 0x3d3194u: goto label_3d3194;
        case 0x3d3198u: goto label_3d3198;
        case 0x3d319cu: goto label_3d319c;
        case 0x3d31a0u: goto label_3d31a0;
        case 0x3d31a4u: goto label_3d31a4;
        case 0x3d31a8u: goto label_3d31a8;
        case 0x3d31acu: goto label_3d31ac;
        case 0x3d31b0u: goto label_3d31b0;
        case 0x3d31b4u: goto label_3d31b4;
        case 0x3d31b8u: goto label_3d31b8;
        case 0x3d31bcu: goto label_3d31bc;
        case 0x3d31c0u: goto label_3d31c0;
        case 0x3d31c4u: goto label_3d31c4;
        case 0x3d31c8u: goto label_3d31c8;
        case 0x3d31ccu: goto label_3d31cc;
        case 0x3d31d0u: goto label_3d31d0;
        case 0x3d31d4u: goto label_3d31d4;
        case 0x3d31d8u: goto label_3d31d8;
        case 0x3d31dcu: goto label_3d31dc;
        case 0x3d31e0u: goto label_3d31e0;
        case 0x3d31e4u: goto label_3d31e4;
        case 0x3d31e8u: goto label_3d31e8;
        case 0x3d31ecu: goto label_3d31ec;
        case 0x3d31f0u: goto label_3d31f0;
        case 0x3d31f4u: goto label_3d31f4;
        case 0x3d31f8u: goto label_3d31f8;
        case 0x3d31fcu: goto label_3d31fc;
        case 0x3d3200u: goto label_3d3200;
        case 0x3d3204u: goto label_3d3204;
        case 0x3d3208u: goto label_3d3208;
        case 0x3d320cu: goto label_3d320c;
        case 0x3d3210u: goto label_3d3210;
        case 0x3d3214u: goto label_3d3214;
        case 0x3d3218u: goto label_3d3218;
        case 0x3d321cu: goto label_3d321c;
        case 0x3d3220u: goto label_3d3220;
        case 0x3d3224u: goto label_3d3224;
        case 0x3d3228u: goto label_3d3228;
        case 0x3d322cu: goto label_3d322c;
        case 0x3d3230u: goto label_3d3230;
        case 0x3d3234u: goto label_3d3234;
        case 0x3d3238u: goto label_3d3238;
        case 0x3d323cu: goto label_3d323c;
        case 0x3d3240u: goto label_3d3240;
        case 0x3d3244u: goto label_3d3244;
        case 0x3d3248u: goto label_3d3248;
        case 0x3d324cu: goto label_3d324c;
        case 0x3d3250u: goto label_3d3250;
        case 0x3d3254u: goto label_3d3254;
        case 0x3d3258u: goto label_3d3258;
        case 0x3d325cu: goto label_3d325c;
        case 0x3d3260u: goto label_3d3260;
        case 0x3d3264u: goto label_3d3264;
        case 0x3d3268u: goto label_3d3268;
        case 0x3d326cu: goto label_3d326c;
        case 0x3d3270u: goto label_3d3270;
        case 0x3d3274u: goto label_3d3274;
        case 0x3d3278u: goto label_3d3278;
        case 0x3d327cu: goto label_3d327c;
        case 0x3d3280u: goto label_3d3280;
        case 0x3d3284u: goto label_3d3284;
        case 0x3d3288u: goto label_3d3288;
        case 0x3d328cu: goto label_3d328c;
        case 0x3d3290u: goto label_3d3290;
        case 0x3d3294u: goto label_3d3294;
        case 0x3d3298u: goto label_3d3298;
        case 0x3d329cu: goto label_3d329c;
        case 0x3d32a0u: goto label_3d32a0;
        case 0x3d32a4u: goto label_3d32a4;
        case 0x3d32a8u: goto label_3d32a8;
        case 0x3d32acu: goto label_3d32ac;
        case 0x3d32b0u: goto label_3d32b0;
        case 0x3d32b4u: goto label_3d32b4;
        case 0x3d32b8u: goto label_3d32b8;
        case 0x3d32bcu: goto label_3d32bc;
        case 0x3d32c0u: goto label_3d32c0;
        case 0x3d32c4u: goto label_3d32c4;
        case 0x3d32c8u: goto label_3d32c8;
        case 0x3d32ccu: goto label_3d32cc;
        case 0x3d32d0u: goto label_3d32d0;
        case 0x3d32d4u: goto label_3d32d4;
        case 0x3d32d8u: goto label_3d32d8;
        case 0x3d32dcu: goto label_3d32dc;
        case 0x3d32e0u: goto label_3d32e0;
        case 0x3d32e4u: goto label_3d32e4;
        case 0x3d32e8u: goto label_3d32e8;
        case 0x3d32ecu: goto label_3d32ec;
        case 0x3d32f0u: goto label_3d32f0;
        case 0x3d32f4u: goto label_3d32f4;
        case 0x3d32f8u: goto label_3d32f8;
        case 0x3d32fcu: goto label_3d32fc;
        case 0x3d3300u: goto label_3d3300;
        case 0x3d3304u: goto label_3d3304;
        case 0x3d3308u: goto label_3d3308;
        case 0x3d330cu: goto label_3d330c;
        case 0x3d3310u: goto label_3d3310;
        case 0x3d3314u: goto label_3d3314;
        case 0x3d3318u: goto label_3d3318;
        case 0x3d331cu: goto label_3d331c;
        case 0x3d3320u: goto label_3d3320;
        case 0x3d3324u: goto label_3d3324;
        case 0x3d3328u: goto label_3d3328;
        case 0x3d332cu: goto label_3d332c;
        case 0x3d3330u: goto label_3d3330;
        case 0x3d3334u: goto label_3d3334;
        case 0x3d3338u: goto label_3d3338;
        case 0x3d333cu: goto label_3d333c;
        case 0x3d3340u: goto label_3d3340;
        case 0x3d3344u: goto label_3d3344;
        case 0x3d3348u: goto label_3d3348;
        case 0x3d334cu: goto label_3d334c;
        case 0x3d3350u: goto label_3d3350;
        case 0x3d3354u: goto label_3d3354;
        case 0x3d3358u: goto label_3d3358;
        case 0x3d335cu: goto label_3d335c;
        case 0x3d3360u: goto label_3d3360;
        case 0x3d3364u: goto label_3d3364;
        case 0x3d3368u: goto label_3d3368;
        case 0x3d336cu: goto label_3d336c;
        case 0x3d3370u: goto label_3d3370;
        case 0x3d3374u: goto label_3d3374;
        case 0x3d3378u: goto label_3d3378;
        case 0x3d337cu: goto label_3d337c;
        case 0x3d3380u: goto label_3d3380;
        case 0x3d3384u: goto label_3d3384;
        case 0x3d3388u: goto label_3d3388;
        case 0x3d338cu: goto label_3d338c;
        case 0x3d3390u: goto label_3d3390;
        case 0x3d3394u: goto label_3d3394;
        case 0x3d3398u: goto label_3d3398;
        case 0x3d339cu: goto label_3d339c;
        case 0x3d33a0u: goto label_3d33a0;
        case 0x3d33a4u: goto label_3d33a4;
        case 0x3d33a8u: goto label_3d33a8;
        case 0x3d33acu: goto label_3d33ac;
        case 0x3d33b0u: goto label_3d33b0;
        case 0x3d33b4u: goto label_3d33b4;
        case 0x3d33b8u: goto label_3d33b8;
        case 0x3d33bcu: goto label_3d33bc;
        case 0x3d33c0u: goto label_3d33c0;
        case 0x3d33c4u: goto label_3d33c4;
        case 0x3d33c8u: goto label_3d33c8;
        case 0x3d33ccu: goto label_3d33cc;
        case 0x3d33d0u: goto label_3d33d0;
        case 0x3d33d4u: goto label_3d33d4;
        case 0x3d33d8u: goto label_3d33d8;
        case 0x3d33dcu: goto label_3d33dc;
        case 0x3d33e0u: goto label_3d33e0;
        case 0x3d33e4u: goto label_3d33e4;
        case 0x3d33e8u: goto label_3d33e8;
        case 0x3d33ecu: goto label_3d33ec;
        case 0x3d33f0u: goto label_3d33f0;
        case 0x3d33f4u: goto label_3d33f4;
        case 0x3d33f8u: goto label_3d33f8;
        case 0x3d33fcu: goto label_3d33fc;
        case 0x3d3400u: goto label_3d3400;
        case 0x3d3404u: goto label_3d3404;
        case 0x3d3408u: goto label_3d3408;
        case 0x3d340cu: goto label_3d340c;
        case 0x3d3410u: goto label_3d3410;
        case 0x3d3414u: goto label_3d3414;
        case 0x3d3418u: goto label_3d3418;
        case 0x3d341cu: goto label_3d341c;
        case 0x3d3420u: goto label_3d3420;
        case 0x3d3424u: goto label_3d3424;
        case 0x3d3428u: goto label_3d3428;
        case 0x3d342cu: goto label_3d342c;
        case 0x3d3430u: goto label_3d3430;
        case 0x3d3434u: goto label_3d3434;
        case 0x3d3438u: goto label_3d3438;
        case 0x3d343cu: goto label_3d343c;
        case 0x3d3440u: goto label_3d3440;
        case 0x3d3444u: goto label_3d3444;
        case 0x3d3448u: goto label_3d3448;
        case 0x3d344cu: goto label_3d344c;
        case 0x3d3450u: goto label_3d3450;
        case 0x3d3454u: goto label_3d3454;
        case 0x3d3458u: goto label_3d3458;
        case 0x3d345cu: goto label_3d345c;
        case 0x3d3460u: goto label_3d3460;
        case 0x3d3464u: goto label_3d3464;
        case 0x3d3468u: goto label_3d3468;
        case 0x3d346cu: goto label_3d346c;
        case 0x3d3470u: goto label_3d3470;
        case 0x3d3474u: goto label_3d3474;
        case 0x3d3478u: goto label_3d3478;
        case 0x3d347cu: goto label_3d347c;
        case 0x3d3480u: goto label_3d3480;
        case 0x3d3484u: goto label_3d3484;
        case 0x3d3488u: goto label_3d3488;
        case 0x3d348cu: goto label_3d348c;
        case 0x3d3490u: goto label_3d3490;
        case 0x3d3494u: goto label_3d3494;
        case 0x3d3498u: goto label_3d3498;
        case 0x3d349cu: goto label_3d349c;
        case 0x3d34a0u: goto label_3d34a0;
        case 0x3d34a4u: goto label_3d34a4;
        case 0x3d34a8u: goto label_3d34a8;
        case 0x3d34acu: goto label_3d34ac;
        case 0x3d34b0u: goto label_3d34b0;
        case 0x3d34b4u: goto label_3d34b4;
        case 0x3d34b8u: goto label_3d34b8;
        case 0x3d34bcu: goto label_3d34bc;
        case 0x3d34c0u: goto label_3d34c0;
        case 0x3d34c4u: goto label_3d34c4;
        case 0x3d34c8u: goto label_3d34c8;
        case 0x3d34ccu: goto label_3d34cc;
        case 0x3d34d0u: goto label_3d34d0;
        case 0x3d34d4u: goto label_3d34d4;
        case 0x3d34d8u: goto label_3d34d8;
        case 0x3d34dcu: goto label_3d34dc;
        case 0x3d34e0u: goto label_3d34e0;
        case 0x3d34e4u: goto label_3d34e4;
        case 0x3d34e8u: goto label_3d34e8;
        case 0x3d34ecu: goto label_3d34ec;
        case 0x3d34f0u: goto label_3d34f0;
        case 0x3d34f4u: goto label_3d34f4;
        case 0x3d34f8u: goto label_3d34f8;
        case 0x3d34fcu: goto label_3d34fc;
        case 0x3d3500u: goto label_3d3500;
        case 0x3d3504u: goto label_3d3504;
        case 0x3d3508u: goto label_3d3508;
        case 0x3d350cu: goto label_3d350c;
        case 0x3d3510u: goto label_3d3510;
        case 0x3d3514u: goto label_3d3514;
        case 0x3d3518u: goto label_3d3518;
        case 0x3d351cu: goto label_3d351c;
        case 0x3d3520u: goto label_3d3520;
        case 0x3d3524u: goto label_3d3524;
        case 0x3d3528u: goto label_3d3528;
        case 0x3d352cu: goto label_3d352c;
        case 0x3d3530u: goto label_3d3530;
        case 0x3d3534u: goto label_3d3534;
        case 0x3d3538u: goto label_3d3538;
        case 0x3d353cu: goto label_3d353c;
        case 0x3d3540u: goto label_3d3540;
        case 0x3d3544u: goto label_3d3544;
        case 0x3d3548u: goto label_3d3548;
        case 0x3d354cu: goto label_3d354c;
        case 0x3d3550u: goto label_3d3550;
        case 0x3d3554u: goto label_3d3554;
        case 0x3d3558u: goto label_3d3558;
        case 0x3d355cu: goto label_3d355c;
        case 0x3d3560u: goto label_3d3560;
        case 0x3d3564u: goto label_3d3564;
        case 0x3d3568u: goto label_3d3568;
        case 0x3d356cu: goto label_3d356c;
        case 0x3d3570u: goto label_3d3570;
        case 0x3d3574u: goto label_3d3574;
        case 0x3d3578u: goto label_3d3578;
        case 0x3d357cu: goto label_3d357c;
        case 0x3d3580u: goto label_3d3580;
        case 0x3d3584u: goto label_3d3584;
        case 0x3d3588u: goto label_3d3588;
        case 0x3d358cu: goto label_3d358c;
        case 0x3d3590u: goto label_3d3590;
        case 0x3d3594u: goto label_3d3594;
        case 0x3d3598u: goto label_3d3598;
        case 0x3d359cu: goto label_3d359c;
        case 0x3d35a0u: goto label_3d35a0;
        case 0x3d35a4u: goto label_3d35a4;
        case 0x3d35a8u: goto label_3d35a8;
        case 0x3d35acu: goto label_3d35ac;
        case 0x3d35b0u: goto label_3d35b0;
        case 0x3d35b4u: goto label_3d35b4;
        case 0x3d35b8u: goto label_3d35b8;
        case 0x3d35bcu: goto label_3d35bc;
        case 0x3d35c0u: goto label_3d35c0;
        case 0x3d35c4u: goto label_3d35c4;
        case 0x3d35c8u: goto label_3d35c8;
        case 0x3d35ccu: goto label_3d35cc;
        case 0x3d35d0u: goto label_3d35d0;
        case 0x3d35d4u: goto label_3d35d4;
        case 0x3d35d8u: goto label_3d35d8;
        case 0x3d35dcu: goto label_3d35dc;
        case 0x3d35e0u: goto label_3d35e0;
        case 0x3d35e4u: goto label_3d35e4;
        case 0x3d35e8u: goto label_3d35e8;
        case 0x3d35ecu: goto label_3d35ec;
        case 0x3d35f0u: goto label_3d35f0;
        case 0x3d35f4u: goto label_3d35f4;
        case 0x3d35f8u: goto label_3d35f8;
        case 0x3d35fcu: goto label_3d35fc;
        case 0x3d3600u: goto label_3d3600;
        case 0x3d3604u: goto label_3d3604;
        case 0x3d3608u: goto label_3d3608;
        case 0x3d360cu: goto label_3d360c;
        case 0x3d3610u: goto label_3d3610;
        case 0x3d3614u: goto label_3d3614;
        case 0x3d3618u: goto label_3d3618;
        case 0x3d361cu: goto label_3d361c;
        case 0x3d3620u: goto label_3d3620;
        case 0x3d3624u: goto label_3d3624;
        case 0x3d3628u: goto label_3d3628;
        case 0x3d362cu: goto label_3d362c;
        case 0x3d3630u: goto label_3d3630;
        case 0x3d3634u: goto label_3d3634;
        case 0x3d3638u: goto label_3d3638;
        case 0x3d363cu: goto label_3d363c;
        case 0x3d3640u: goto label_3d3640;
        case 0x3d3644u: goto label_3d3644;
        case 0x3d3648u: goto label_3d3648;
        case 0x3d364cu: goto label_3d364c;
        case 0x3d3650u: goto label_3d3650;
        case 0x3d3654u: goto label_3d3654;
        case 0x3d3658u: goto label_3d3658;
        case 0x3d365cu: goto label_3d365c;
        case 0x3d3660u: goto label_3d3660;
        case 0x3d3664u: goto label_3d3664;
        case 0x3d3668u: goto label_3d3668;
        case 0x3d366cu: goto label_3d366c;
        case 0x3d3670u: goto label_3d3670;
        case 0x3d3674u: goto label_3d3674;
        case 0x3d3678u: goto label_3d3678;
        case 0x3d367cu: goto label_3d367c;
        case 0x3d3680u: goto label_3d3680;
        case 0x3d3684u: goto label_3d3684;
        case 0x3d3688u: goto label_3d3688;
        case 0x3d368cu: goto label_3d368c;
        case 0x3d3690u: goto label_3d3690;
        case 0x3d3694u: goto label_3d3694;
        case 0x3d3698u: goto label_3d3698;
        case 0x3d369cu: goto label_3d369c;
        case 0x3d36a0u: goto label_3d36a0;
        case 0x3d36a4u: goto label_3d36a4;
        case 0x3d36a8u: goto label_3d36a8;
        case 0x3d36acu: goto label_3d36ac;
        case 0x3d36b0u: goto label_3d36b0;
        case 0x3d36b4u: goto label_3d36b4;
        case 0x3d36b8u: goto label_3d36b8;
        case 0x3d36bcu: goto label_3d36bc;
        case 0x3d36c0u: goto label_3d36c0;
        case 0x3d36c4u: goto label_3d36c4;
        case 0x3d36c8u: goto label_3d36c8;
        case 0x3d36ccu: goto label_3d36cc;
        case 0x3d36d0u: goto label_3d36d0;
        case 0x3d36d4u: goto label_3d36d4;
        case 0x3d36d8u: goto label_3d36d8;
        case 0x3d36dcu: goto label_3d36dc;
        case 0x3d36e0u: goto label_3d36e0;
        case 0x3d36e4u: goto label_3d36e4;
        case 0x3d36e8u: goto label_3d36e8;
        case 0x3d36ecu: goto label_3d36ec;
        case 0x3d36f0u: goto label_3d36f0;
        case 0x3d36f4u: goto label_3d36f4;
        case 0x3d36f8u: goto label_3d36f8;
        case 0x3d36fcu: goto label_3d36fc;
        case 0x3d3700u: goto label_3d3700;
        case 0x3d3704u: goto label_3d3704;
        case 0x3d3708u: goto label_3d3708;
        case 0x3d370cu: goto label_3d370c;
        case 0x3d3710u: goto label_3d3710;
        case 0x3d3714u: goto label_3d3714;
        case 0x3d3718u: goto label_3d3718;
        case 0x3d371cu: goto label_3d371c;
        case 0x3d3720u: goto label_3d3720;
        case 0x3d3724u: goto label_3d3724;
        case 0x3d3728u: goto label_3d3728;
        case 0x3d372cu: goto label_3d372c;
        case 0x3d3730u: goto label_3d3730;
        case 0x3d3734u: goto label_3d3734;
        case 0x3d3738u: goto label_3d3738;
        case 0x3d373cu: goto label_3d373c;
        case 0x3d3740u: goto label_3d3740;
        case 0x3d3744u: goto label_3d3744;
        case 0x3d3748u: goto label_3d3748;
        case 0x3d374cu: goto label_3d374c;
        case 0x3d3750u: goto label_3d3750;
        case 0x3d3754u: goto label_3d3754;
        default: break;
    }

    ctx->pc = 0x3d3138u;

label_3d3138:
    // 0x3d3138: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3d3138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3d313c:
    // 0x3d313c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d313cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d3140:
    // 0x3d3140: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3d3140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_3d3144:
    // 0x3d3144: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3d3144u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d3148:
    // 0x3d3148: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3d3148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3d314c:
    // 0x3d314c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3d314cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3d3150:
    // 0x3d3150: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d3150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d3154:
    // 0x3d3154: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3d3154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3d3158:
    // 0x3d3158: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3d3158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d315c:
    // 0x3d315c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3d315cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3d3160:
    // 0x3d3160: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3d3160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3d3164:
    // 0x3d3164: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d3164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d3168:
    // 0x3d3168: 0xc0f4df6  jal         func_3D37D8
label_3d316c:
    if (ctx->pc == 0x3D316Cu) {
        ctx->pc = 0x3D316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3168u;
        // 0x3d316c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3170u;
        goto label_3d3170;
    }
    ctx->pc = 0x3D3168u;
    SET_GPR_U32(ctx, 31, 0x3D3170u);
    ctx->pc = 0x3D316Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3168u;
    // 0x3d316c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D37D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D37D8u, 0x3D3168u, 0x3D3170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3170u;
label_3d3170:
    // 0x3d3170: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3d3170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3d3174:
    // 0x3d3174: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3d3174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d3178:
    // 0x3d3178: 0xc103642  jal         func_40D908
label_3d317c:
    if (ctx->pc == 0x3D317Cu) {
        ctx->pc = 0x3D317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3178u;
        // 0x3d317c: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3180u;
        goto label_3d3180;
    }
    ctx->pc = 0x3D3178u;
    SET_GPR_U32(ctx, 31, 0x3D3180u);
    ctx->pc = 0x3D317Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3178u;
    // 0x3d317c: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3D3178u, 0x3D3180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3180u;
label_3d3180:
    // 0x3d3180: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d3180u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d3184:
    // 0x3d3184: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x3d3184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3d3188:
    // 0x3d3188: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_3d318c:
    if (ctx->pc == 0x3D318Cu) {
        ctx->pc = 0x3D318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3188u;
        // 0x3d318c: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3190u;
        goto label_3d3190;
    }
    ctx->pc = 0x3D3188u;
    {
        const bool branch_taken_0x3d3188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3188u;
        // 0x3d318c: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3188) {
            ctx->pc = 0x3D321Cu;
            goto label_3d321c;
        }
    }
    ctx->pc = 0x3D3190u;
label_3d3190:
    // 0x3d3190: 0x2454b298  addiu       $s4, $v0, -0x4D68
    ctx->pc = 0x3d3190u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947480));
label_3d3194:
    // 0x3d3194: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3d3194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3d3198:
    // 0x3d3198: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3d3198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d319c:
    // 0x3d319c: 0xc1036da  jal         func_40DB68
label_3d31a0:
    if (ctx->pc == 0x3D31A0u) {
        ctx->pc = 0x3D31A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D319Cu;
        // 0x3d31a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D31A4u;
        goto label_3d31a4;
    }
    ctx->pc = 0x3D319Cu;
    SET_GPR_U32(ctx, 31, 0x3D31A4u);
    ctx->pc = 0x3D31A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D319Cu;
    // 0x3d31a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3D319Cu, 0x3D31A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D31A4u;
label_3d31a4:
    // 0x3d31a4: 0xc0c8ea8  jal         func_323AA0
label_3d31a8:
    if (ctx->pc == 0x3D31A8u) {
        ctx->pc = 0x3D31A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D31A4u;
        // 0x3d31a8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D31ACu;
        goto label_3d31ac;
    }
    ctx->pc = 0x3D31A4u;
    SET_GPR_U32(ctx, 31, 0x3D31ACu);
    ctx->pc = 0x3D31A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D31A4u;
    // 0x3d31a8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323AA0u, 0x3D31A4u, 0x3D31ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D31ACu;
label_3d31ac:
    // 0x3d31ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d31acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d31b0:
    // 0x3d31b0: 0xc10376a  jal         func_40DDA8
label_3d31b4:
    if (ctx->pc == 0x3D31B4u) {
        ctx->pc = 0x3D31B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D31B0u;
        // 0x3d31b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D31B8u;
        goto label_3d31b8;
    }
    ctx->pc = 0x3D31B0u;
    SET_GPR_U32(ctx, 31, 0x3D31B8u);
    ctx->pc = 0x3D31B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D31B0u;
    // 0x3d31b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3D31B0u, 0x3D31B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D31B8u;
label_3d31b8:
    // 0x3d31b8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3d31b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3d31bc:
    // 0x3d31bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3d31c0:
    if (ctx->pc == 0x3D31C0u) {
        ctx->pc = 0x3D31C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D31BCu;
        // 0x3d31c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D31C4u;
        goto label_3d31c4;
    }
    ctx->pc = 0x3D31BCu;
    {
        const bool branch_taken_0x3d31bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D31C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D31BCu;
        // 0x3d31c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d31bc) {
            ctx->pc = 0x3D31DCu;
            goto label_3d31dc;
        }
    }
    ctx->pc = 0x3D31C4u;
label_3d31c4:
    // 0x3d31c4: 0xc1036da  jal         func_40DB68
label_3d31c8:
    if (ctx->pc == 0x3D31C8u) {
        ctx->pc = 0x3D31C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D31C4u;
        // 0x3d31c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D31CCu;
        goto label_3d31cc;
    }
    ctx->pc = 0x3D31C4u;
    SET_GPR_U32(ctx, 31, 0x3D31CCu);
    ctx->pc = 0x3D31C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D31C4u;
    // 0x3d31c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3D31C4u, 0x3D31CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D31CCu;
label_3d31cc:
    // 0x3d31cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3d31ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d31d0:
    // 0x3d31d0: 0x5603fff7  bnel        $s0, $v1, . + 4 + (-0x9 << 2)
label_3d31d4:
    if (ctx->pc == 0x3D31D4u) {
        ctx->pc = 0x3D31D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D31D0u;
        // 0x3d31d4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D31D8u;
        goto label_3d31d8;
    }
    ctx->pc = 0x3D31D0u;
    {
        const bool branch_taken_0x3d31d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d31d0) {
            ctx->pc = 0x3D31D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D31D0u;
            // 0x3d31d4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D31B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d31b0;
        }
    }
    ctx->pc = 0x3D31D8u;
label_3d31d8:
    // 0x3d31d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3d31d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d31dc:
    // 0x3d31dc: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_3d31e0:
    if (ctx->pc == 0x3D31E0u) {
        ctx->pc = 0x3D31E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D31DCu;
        // 0x3d31e0: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D31E4u;
        goto label_3d31e4;
    }
    ctx->pc = 0x3D31DCu;
    {
        const bool branch_taken_0x3d31dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D31E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D31DCu;
        // 0x3d31e0: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d31dc) {
            ctx->pc = 0x3D3208u;
            goto label_3d3208;
        }
    }
    ctx->pc = 0x3D31E4u;
label_3d31e4:
    // 0x3d31e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d31e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d31e8:
    // 0x3d31e8: 0xc1036e0  jal         func_40DB80
label_3d31ec:
    if (ctx->pc == 0x3D31ECu) {
        ctx->pc = 0x3D31ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D31E8u;
        // 0x3d31ec: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D31F0u;
        goto label_3d31f0;
    }
    ctx->pc = 0x3D31E8u;
    SET_GPR_U32(ctx, 31, 0x3D31F0u);
    ctx->pc = 0x3D31ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D31E8u;
    // 0x3d31ec: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3D31E8u, 0x3D31F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D31F0u;
label_3d31f0:
    // 0x3d31f0: 0x8e8300bc  lw          $v1, 0xBC($s4)
    ctx->pc = 0x3d31f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 188)));
label_3d31f4:
    // 0x3d31f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d31f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d31f8:
    // 0x3d31f8: 0x60f809  jalr        $v1
label_3d31fc:
    if (ctx->pc == 0x3D31FCu) {
        ctx->pc = 0x3D31FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D31F8u;
        // 0x3d31fc: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3200u;
        goto label_3d3200;
    }
    ctx->pc = 0x3D31F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D3200u);
        ctx->pc = 0x3D31FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D31F8u;
        // 0x3d31fc: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D31F8u, 0x3D3200u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D3200u;
label_3d3200:
    // 0x3d3200: 0x14500037  bne         $v0, $s0, . + 4 + (0x37 << 2)
label_3d3204:
    if (ctx->pc == 0x3D3204u) {
        ctx->pc = 0x3D3204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3200u;
        // 0x3d3204: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3208u;
        goto label_3d3208;
    }
    ctx->pc = 0x3D3200u;
    {
        const bool branch_taken_0x3d3200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3D3204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3200u;
        // 0x3d3204: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3200) {
            ctx->pc = 0x3D32E0u;
            goto label_3d32e0;
        }
    }
    ctx->pc = 0x3D3208u;
label_3d3208:
    // 0x3d3208: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x3d3208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3d320c:
    // 0x3d320c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3d320cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3d3210:
    // 0x3d3210: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x3d3210u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3d3214:
    // 0x3d3214: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_3d3218:
    if (ctx->pc == 0x3D3218u) {
        ctx->pc = 0x3D3218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3214u;
        // 0x3d3218: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D321Cu;
        goto label_3d321c;
    }
    ctx->pc = 0x3D3214u;
    {
        const bool branch_taken_0x3d3214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3214u;
        // 0x3d3218: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3214) {
            ctx->pc = 0x3D3198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d3198;
        }
    }
    ctx->pc = 0x3D321Cu;
label_3d321c:
    // 0x3d321c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3d321cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3d3220:
    // 0x3d3220: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_3d3224:
    if (ctx->pc == 0x3D3224u) {
        ctx->pc = 0x3D3224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3220u;
        // 0x3d3224: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3228u;
        goto label_3d3228;
    }
    ctx->pc = 0x3D3220u;
    {
        const bool branch_taken_0x3d3220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3220u;
        // 0x3d3224: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3220) {
            ctx->pc = 0x3D32CCu;
            goto label_3d32cc;
        }
    }
    ctx->pc = 0x3D3228u;
label_3d3228:
    // 0x3d3228: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3d3228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_3d322c:
    // 0x3d322c: 0x2454b298  addiu       $s4, $v0, -0x4D68
    ctx->pc = 0x3d322cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947480));
label_3d3230:
    // 0x3d3230: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3d3230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3d3234:
    // 0x3d3234: 0x0  nop
    ctx->pc = 0x3d3234u;
    // NOP
label_3d3238:
    // 0x3d3238: 0xc1036da  jal         func_40DB68
label_3d323c:
    if (ctx->pc == 0x3D323Cu) {
        ctx->pc = 0x3D323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3238u;
        // 0x3d323c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3240u;
        goto label_3d3240;
    }
    ctx->pc = 0x3D3238u;
    SET_GPR_U32(ctx, 31, 0x3D3240u);
    ctx->pc = 0x3D323Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3238u;
    // 0x3d323c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3D3238u, 0x3D3240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3240u;
label_3d3240:
    // 0x3d3240: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3d3240u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d3244:
    // 0x3d3244: 0xc0c8ecc  jal         func_323B30
label_3d3248:
    if (ctx->pc == 0x3D3248u) {
        ctx->pc = 0x3D3248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3244u;
        // 0x3d3248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D324Cu;
        goto label_3d324c;
    }
    ctx->pc = 0x3D3244u;
    SET_GPR_U32(ctx, 31, 0x3D324Cu);
    ctx->pc = 0x3D3248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3244u;
    // 0x3d3248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B30u, 0x3D3244u, 0x3D324Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D324Cu;
label_3d324c:
    // 0x3d324c: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x3d324cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_3d3250:
    // 0x3d3250: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x3d3250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_3d3254:
    // 0x3d3254: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_3d3258:
    if (ctx->pc == 0x3D3258u) {
        ctx->pc = 0x3D3258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3254u;
        // 0x3d3258: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D325Cu;
        goto label_3d325c;
    }
    ctx->pc = 0x3D3254u;
    {
        const bool branch_taken_0x3d3254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3254u;
        // 0x3d3258: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3254) {
            ctx->pc = 0x3D32B8u;
            goto label_3d32b8;
        }
    }
    ctx->pc = 0x3D325Cu;
label_3d325c:
    // 0x3d325c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3d325cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d3260:
    // 0x3d3260: 0xc10376a  jal         func_40DDA8
label_3d3264:
    if (ctx->pc == 0x3D3264u) {
        ctx->pc = 0x3D3264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3260u;
        // 0x3d3264: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3268u;
        goto label_3d3268;
    }
    ctx->pc = 0x3D3260u;
    SET_GPR_U32(ctx, 31, 0x3D3268u);
    ctx->pc = 0x3D3264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3260u;
    // 0x3d3264: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3D3260u, 0x3D3268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3268u;
label_3d3268:
    // 0x3d3268: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3d3268u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3d326c:
    // 0x3d326c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3d3270:
    if (ctx->pc == 0x3D3270u) {
        ctx->pc = 0x3D3270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D326Cu;
        // 0x3d3270: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3274u;
        goto label_3d3274;
    }
    ctx->pc = 0x3D326Cu;
    {
        const bool branch_taken_0x3d326c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D326Cu;
        // 0x3d3270: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d326c) {
            ctx->pc = 0x3D328Cu;
            goto label_3d328c;
        }
    }
    ctx->pc = 0x3D3274u;
label_3d3274:
    // 0x3d3274: 0xc1036da  jal         func_40DB68
label_3d3278:
    if (ctx->pc == 0x3D3278u) {
        ctx->pc = 0x3D3278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3274u;
        // 0x3d3278: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D327Cu;
        goto label_3d327c;
    }
    ctx->pc = 0x3D3274u;
    SET_GPR_U32(ctx, 31, 0x3D327Cu);
    ctx->pc = 0x3D3278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3274u;
    // 0x3d3278: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3D3274u, 0x3D327Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D327Cu;
label_3d327c:
    // 0x3d327c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3d327cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d3280:
    // 0x3d3280: 0x5603fff7  bnel        $s0, $v1, . + 4 + (-0x9 << 2)
label_3d3284:
    if (ctx->pc == 0x3D3284u) {
        ctx->pc = 0x3D3284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3280u;
        // 0x3d3284: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3288u;
        goto label_3d3288;
    }
    ctx->pc = 0x3D3280u;
    {
        const bool branch_taken_0x3d3280 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d3280) {
            ctx->pc = 0x3D3284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3280u;
            // 0x3d3284: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d3260;
        }
    }
    ctx->pc = 0x3D3288u;
label_3d3288:
    // 0x3d3288: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3d3288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d328c:
    // 0x3d328c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_3d3290:
    if (ctx->pc == 0x3D3290u) {
        ctx->pc = 0x3D3290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D328Cu;
        // 0x3d3290: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3294u;
        goto label_3d3294;
    }
    ctx->pc = 0x3D328Cu;
    {
        const bool branch_taken_0x3d328c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D328Cu;
        // 0x3d3290: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d328c) {
            ctx->pc = 0x3D32B8u;
            goto label_3d32b8;
        }
    }
    ctx->pc = 0x3D3294u;
label_3d3294:
    // 0x3d3294: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d3294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d3298:
    // 0x3d3298: 0xc1036e0  jal         func_40DB80
label_3d329c:
    if (ctx->pc == 0x3D329Cu) {
        ctx->pc = 0x3D329Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3298u;
        // 0x3d329c: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D32A0u;
        goto label_3d32a0;
    }
    ctx->pc = 0x3D3298u;
    SET_GPR_U32(ctx, 31, 0x3D32A0u);
    ctx->pc = 0x3D329Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3298u;
    // 0x3d329c: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3D3298u, 0x3D32A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D32A0u;
label_3d32a0:
    // 0x3d32a0: 0x8e8300bc  lw          $v1, 0xBC($s4)
    ctx->pc = 0x3d32a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 188)));
label_3d32a4:
    // 0x3d32a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d32a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d32a8:
    // 0x3d32a8: 0x60f809  jalr        $v1
label_3d32ac:
    if (ctx->pc == 0x3D32ACu) {
        ctx->pc = 0x3D32ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D32A8u;
        // 0x3d32ac: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D32B0u;
        goto label_3d32b0;
    }
    ctx->pc = 0x3D32A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D32B0u);
        ctx->pc = 0x3D32ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D32A8u;
        // 0x3d32ac: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D32A8u, 0x3D32B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D32B0u;
label_3d32b0:
    // 0x3d32b0: 0x1450000b  bne         $v0, $s0, . + 4 + (0xB << 2)
label_3d32b4:
    if (ctx->pc == 0x3D32B4u) {
        ctx->pc = 0x3D32B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D32B0u;
        // 0x3d32b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D32B8u;
        goto label_3d32b8;
    }
    ctx->pc = 0x3D32B0u;
    {
        const bool branch_taken_0x3d32b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3D32B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D32B0u;
        // 0x3d32b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d32b0) {
            ctx->pc = 0x3D32E0u;
            goto label_3d32e0;
        }
    }
    ctx->pc = 0x3D32B8u;
label_3d32b8:
    // 0x3d32b8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3d32b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3d32bc:
    // 0x3d32bc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3d32bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3d32c0:
    // 0x3d32c0: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x3d32c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3d32c4:
    // 0x3d32c4: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_3d32c8:
    if (ctx->pc == 0x3D32C8u) {
        ctx->pc = 0x3D32C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D32C4u;
        // 0x3d32c8: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D32CCu;
        goto label_3d32cc;
    }
    ctx->pc = 0x3D32C4u;
    {
        const bool branch_taken_0x3d32c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D32C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D32C4u;
        // 0x3d32c8: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d32c4) {
            ctx->pc = 0x3D3238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d3238;
        }
    }
    ctx->pc = 0x3D32CCu;
label_3d32cc:
    // 0x3d32cc: 0xc103684  jal         func_40DA10
label_3d32d0:
    if (ctx->pc == 0x3D32D0u) {
        ctx->pc = 0x3D32D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D32CCu;
        // 0x3d32d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D32D4u;
        goto label_3d32d4;
    }
    ctx->pc = 0x3D32CCu;
    SET_GPR_U32(ctx, 31, 0x3D32D4u);
    ctx->pc = 0x3D32D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D32CCu;
    // 0x3d32d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3D32CCu, 0x3D32D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D32D4u;
label_3d32d4:
    // 0x3d32d4: 0xc0f5238  jal         func_3D48E0
label_3d32d8:
    if (ctx->pc == 0x3D32D8u) {
        ctx->pc = 0x3D32D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D32D4u;
        // 0x3d32d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D32DCu;
        goto label_3d32dc;
    }
    ctx->pc = 0x3D32D4u;
    SET_GPR_U32(ctx, 31, 0x3D32DCu);
    ctx->pc = 0x3D32D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D32D4u;
    // 0x3d32d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D48E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D48E0u, 0x3D32D4u, 0x3D32DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D32DCu;
label_3d32dc:
    // 0x3d32dc: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3d32dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d32e0:
    // 0x3d32e0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3d32e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3d32e4:
    // 0x3d32e4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3d32e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3d32e8:
    // 0x3d32e8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3d32e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d32ec:
    // 0x3d32ec: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3d32ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d32f0:
    // 0x3d32f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3d32f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d32f4:
    // 0x3d32f4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3d32f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d32f8:
    // 0x3d32f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d32f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d32fc:
    // 0x3d32fc: 0x3e00008  jr          $ra
label_3d3300:
    if (ctx->pc == 0x3D3300u) {
        ctx->pc = 0x3D3300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D32FCu;
        // 0x3d3300: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3304u;
        goto label_3d3304;
    }
    ctx->pc = 0x3D32FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D32FCu;
        // 0x3d3300: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D32FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D3304u;
label_3d3304:
    // 0x3d3304: 0x0  nop
    ctx->pc = 0x3d3304u;
    // NOP
label_3d3308:
    // 0x3d3308: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3d3308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3d330c:
    // 0x3d330c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d330cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d3310:
    // 0x3d3310: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d3310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3d3314:
    // 0x3d3314: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3d3314u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d3318:
    // 0x3d3318: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3d3318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3d331c:
    // 0x3d331c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3d331cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3d3320:
    // 0x3d3320: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d3320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d3324:
    // 0x3d3324: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3d3324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3d3328:
    // 0x3d3328: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3d3328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d332c:
    // 0x3d332c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d332cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d3330:
    // 0x3d3330: 0xc0f4df6  jal         func_3D37D8
label_3d3334:
    if (ctx->pc == 0x3D3334u) {
        ctx->pc = 0x3D3334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3330u;
        // 0x3d3334: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3338u;
        goto label_3d3338;
    }
    ctx->pc = 0x3D3330u;
    SET_GPR_U32(ctx, 31, 0x3D3338u);
    ctx->pc = 0x3D3334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3330u;
    // 0x3d3334: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D37D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D37D8u, 0x3D3330u, 0x3D3338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3338u;
label_3d3338:
    // 0x3d3338: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x3d3338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3d333c:
    // 0x3d333c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_3d3340:
    if (ctx->pc == 0x3D3340u) {
        ctx->pc = 0x3D3340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D333Cu;
        // 0x3d3340: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3344u;
        goto label_3d3344;
    }
    ctx->pc = 0x3D333Cu;
    {
        const bool branch_taken_0x3d333c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D333Cu;
        // 0x3d3340: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d333c) {
            ctx->pc = 0x3D3388u;
            goto label_3d3388;
        }
    }
    ctx->pc = 0x3D3344u;
label_3d3344:
    // 0x3d3344: 0x2452b1e0  addiu       $s2, $v0, -0x4E20
    ctx->pc = 0x3d3344u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947296));
label_3d3348:
    // 0x3d3348: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3d3348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3d334c:
    // 0x3d334c: 0xc1036da  jal         func_40DB68
label_3d3350:
    if (ctx->pc == 0x3D3350u) {
        ctx->pc = 0x3D3350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D334Cu;
        // 0x3d3350: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3354u;
        goto label_3d3354;
    }
    ctx->pc = 0x3D334Cu;
    SET_GPR_U32(ctx, 31, 0x3D3354u);
    ctx->pc = 0x3D3350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D334Cu;
    // 0x3d3350: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3D334Cu, 0x3D3354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3354u;
label_3d3354:
    // 0x3d3354: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3d3354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d3358:
    // 0x3d3358: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x3d3358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_3d335c:
    // 0x3d335c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x3d335cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d3360:
    // 0x3d3360: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x3d3360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3d3364:
    // 0x3d3364: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3d3368:
    if (ctx->pc == 0x3D3368u) {
        ctx->pc = 0x3D3368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3364u;
        // 0x3d3368: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D336Cu;
        goto label_3d336c;
    }
    ctx->pc = 0x3D3364u;
    {
        const bool branch_taken_0x3d3364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3364u;
        // 0x3d3368: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3364) {
            ctx->pc = 0x3D3378u;
            goto label_3d3378;
        }
    }
    ctx->pc = 0x3D336Cu;
label_3d336c:
    // 0x3d336c: 0xc0c8e22  jal         func_323888
label_3d3370:
    if (ctx->pc == 0x3D3370u) {
        ctx->pc = 0x3D3374u;
        goto label_3d3374;
    }
    ctx->pc = 0x3D336Cu;
    SET_GPR_U32(ctx, 31, 0x3D3374u);
    ctx->pc = 0x323888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323888u, 0x3D336Cu, 0x3D3374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3374u;
label_3d3374:
    // 0x3d3374: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x3d3374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3d3378:
    // 0x3d3378: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3d3378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3d337c:
    // 0x3d337c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3d337cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3d3380:
    // 0x3d3380: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_3d3384:
    if (ctx->pc == 0x3D3384u) {
        ctx->pc = 0x3D3384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3380u;
        // 0x3d3384: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3388u;
        goto label_3d3388;
    }
    ctx->pc = 0x3D3380u;
    {
        const bool branch_taken_0x3d3380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3380u;
        // 0x3d3384: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3380) {
            ctx->pc = 0x3D3348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d3348;
        }
    }
    ctx->pc = 0x3D3388u;
label_3d3388:
    // 0x3d3388: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3d3388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3d338c:
    // 0x3d338c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_3d3390:
    if (ctx->pc == 0x3D3390u) {
        ctx->pc = 0x3D3390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D338Cu;
        // 0x3d3390: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3394u;
        goto label_3d3394;
    }
    ctx->pc = 0x3D338Cu;
    {
        const bool branch_taken_0x3d338c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D338Cu;
        // 0x3d3390: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d338c) {
            ctx->pc = 0x3D33F0u;
            goto label_3d33f0;
        }
    }
    ctx->pc = 0x3D3394u;
label_3d3394:
    // 0x3d3394: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d3394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3d3398:
    // 0x3d3398: 0x2452b1e0  addiu       $s2, $v0, -0x4E20
    ctx->pc = 0x3d3398u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947296));
label_3d339c:
    // 0x3d339c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3d339cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3d33a0:
    // 0x3d33a0: 0xc1036da  jal         func_40DB68
label_3d33a4:
    if (ctx->pc == 0x3D33A4u) {
        ctx->pc = 0x3D33A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D33A0u;
        // 0x3d33a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D33A8u;
        goto label_3d33a8;
    }
    ctx->pc = 0x3D33A0u;
    SET_GPR_U32(ctx, 31, 0x3D33A8u);
    ctx->pc = 0x3D33A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D33A0u;
    // 0x3d33a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3D33A0u, 0x3D33A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D33A8u;
label_3d33a8:
    // 0x3d33a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3d33a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d33ac:
    // 0x3d33ac: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3d33acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_3d33b0:
    // 0x3d33b0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3d33b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3d33b4:
    // 0x3d33b4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3d33b8:
    if (ctx->pc == 0x3D33B8u) {
        ctx->pc = 0x3D33B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D33B4u;
        // 0x3d33b8: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D33BCu;
        goto label_3d33bc;
    }
    ctx->pc = 0x3D33B4u;
    {
        const bool branch_taken_0x3d33b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D33B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D33B4u;
        // 0x3d33b8: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d33b4) {
            ctx->pc = 0x3D33E0u;
            goto label_3d33e0;
        }
    }
    ctx->pc = 0x3D33BCu;
label_3d33bc:
    // 0x3d33bc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3d33bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3d33c0:
    // 0x3d33c0: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x3d33c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d33c4:
    // 0x3d33c4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x3d33c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3d33c8:
    // 0x3d33c8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3d33cc:
    if (ctx->pc == 0x3D33CCu) {
        ctx->pc = 0x3D33CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D33C8u;
        // 0x3d33cc: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D33D0u;
        goto label_3d33d0;
    }
    ctx->pc = 0x3D33C8u;
    {
        const bool branch_taken_0x3d33c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d33c8) {
            ctx->pc = 0x3D33CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D33C8u;
            // 0x3d33cc: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D33DCu;
            goto label_3d33dc;
        }
    }
    ctx->pc = 0x3D33D0u;
label_3d33d0:
    // 0x3d33d0: 0xc0c8e22  jal         func_323888
label_3d33d4:
    if (ctx->pc == 0x3D33D4u) {
        ctx->pc = 0x3D33D8u;
        goto label_3d33d8;
    }
    ctx->pc = 0x3D33D0u;
    SET_GPR_U32(ctx, 31, 0x3D33D8u);
    ctx->pc = 0x323888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323888u, 0x3D33D0u, 0x3D33D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D33D8u;
label_3d33d8:
    // 0x3d33d8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x3d33d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_3d33dc:
    // 0x3d33dc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3d33dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3d33e0:
    // 0x3d33e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3d33e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3d33e4:
    // 0x3d33e4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3d33e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3d33e8:
    // 0x3d33e8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_3d33ec:
    if (ctx->pc == 0x3D33ECu) {
        ctx->pc = 0x3D33ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D33E8u;
        // 0x3d33ec: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D33F0u;
        goto label_3d33f0;
    }
    ctx->pc = 0x3D33E8u;
    {
        const bool branch_taken_0x3d33e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D33ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D33E8u;
        // 0x3d33ec: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d33e8) {
            ctx->pc = 0x3D33A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d33a0;
        }
    }
    ctx->pc = 0x3D33F0u;
label_3d33f0:
    // 0x3d33f0: 0xc0f5238  jal         func_3D48E0
label_3d33f4:
    if (ctx->pc == 0x3D33F4u) {
        ctx->pc = 0x3D33F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D33F0u;
        // 0x3d33f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D33F8u;
        goto label_3d33f8;
    }
    ctx->pc = 0x3D33F0u;
    SET_GPR_U32(ctx, 31, 0x3D33F8u);
    ctx->pc = 0x3D33F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D33F0u;
    // 0x3d33f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D48E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D48E0u, 0x3D33F0u, 0x3D33F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D33F8u;
label_3d33f8:
    // 0x3d33f8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3d33f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d33fc:
    // 0x3d33fc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3d33fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d3400:
    // 0x3d3400: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3d3400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d3404:
    // 0x3d3404: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3d3404u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d3408:
    // 0x3d3408: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d3408u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d340c:
    // 0x3d340c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d340cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d3410:
    // 0x3d3410: 0x3e00008  jr          $ra
label_3d3414:
    if (ctx->pc == 0x3D3414u) {
        ctx->pc = 0x3D3414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3410u;
        // 0x3d3414: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3418u;
        goto label_3d3418;
    }
    ctx->pc = 0x3D3410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3410u;
        // 0x3d3414: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D3418u;
label_3d3418:
    // 0x3d3418: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d3418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d341c:
    // 0x3d341c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3d341cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3d3420:
    // 0x3d3420: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d3420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d3424:
    // 0x3d3424: 0x8c62b1e4  lw          $v0, -0x4E1C($v1)
    ctx->pc = 0x3d3424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947300)));
label_3d3428:
    // 0x3d3428: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d3428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d342c:
    // 0x3d342c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3d342cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3d3430:
    // 0x3d3430: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d3430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d3434:
    // 0x3d3434: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x3d3434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3d3438:
    // 0x3d3438: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x3d3438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3d343c:
    // 0x3d343c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3d3440:
    if (ctx->pc == 0x3D3440u) {
        ctx->pc = 0x3D3440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D343Cu;
        // 0x3d3440: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3444u;
        goto label_3d3444;
    }
    ctx->pc = 0x3D343Cu;
    {
        const bool branch_taken_0x3d343c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d343c) {
            ctx->pc = 0x3D3440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D343Cu;
            // 0x3d3440: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3450u;
            goto label_3d3450;
        }
    }
    ctx->pc = 0x3D3444u;
label_3d3444:
    // 0x3d3444: 0xc0c8e22  jal         func_323888
label_3d3448:
    if (ctx->pc == 0x3D3448u) {
        ctx->pc = 0x3D344Cu;
        goto label_3d344c;
    }
    ctx->pc = 0x3D3444u;
    SET_GPR_U32(ctx, 31, 0x3D344Cu);
    ctx->pc = 0x323888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323888u, 0x3D3444u, 0x3D344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D344Cu;
label_3d344c:
    // 0x3d344c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x3d344cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_3d3450:
    // 0x3d3450: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3d3450u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d3454:
    // 0x3d3454: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3d3454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d3458:
    // 0x3d3458: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d3458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d345c:
    // 0x3d345c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d345cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d3460:
    // 0x3d3460: 0x3e00008  jr          $ra
label_3d3464:
    if (ctx->pc == 0x3D3464u) {
        ctx->pc = 0x3D3464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3460u;
        // 0x3d3464: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3468u;
        goto label_3d3468;
    }
    ctx->pc = 0x3D3460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3460u;
        // 0x3d3464: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D3468u;
label_3d3468:
    // 0x3d3468: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d3468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d346c:
    // 0x3d346c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3d346cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3d3470:
    // 0x3d3470: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d3470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d3474:
    // 0x3d3474: 0x8c62b1ec  lw          $v0, -0x4E14($v1)
    ctx->pc = 0x3d3474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947308)));
label_3d3478:
    // 0x3d3478: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d3478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d347c:
    // 0x3d347c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3d347cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3d3480:
    // 0x3d3480: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d3480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d3484:
    // 0x3d3484: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x3d3484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3d3488:
    // 0x3d3488: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x3d3488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3d348c:
    // 0x3d348c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3d3490:
    if (ctx->pc == 0x3D3490u) {
        ctx->pc = 0x3D3490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D348Cu;
        // 0x3d3490: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3494u;
        goto label_3d3494;
    }
    ctx->pc = 0x3D348Cu;
    {
        const bool branch_taken_0x3d348c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d348c) {
            ctx->pc = 0x3D3490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D348Cu;
            // 0x3d3490: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D34A0u;
            goto label_3d34a0;
        }
    }
    ctx->pc = 0x3D3494u;
label_3d3494:
    // 0x3d3494: 0xc0c8e22  jal         func_323888
label_3d3498:
    if (ctx->pc == 0x3D3498u) {
        ctx->pc = 0x3D349Cu;
        goto label_3d349c;
    }
    ctx->pc = 0x3D3494u;
    SET_GPR_U32(ctx, 31, 0x3D349Cu);
    ctx->pc = 0x323888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323888u, 0x3D3494u, 0x3D349Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D349Cu;
label_3d349c:
    // 0x3d349c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x3d349cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_3d34a0:
    // 0x3d34a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3d34a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d34a4:
    // 0x3d34a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3d34a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d34a8:
    // 0x3d34a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d34a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d34ac:
    // 0x3d34ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d34acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d34b0:
    // 0x3d34b0: 0x3e00008  jr          $ra
label_3d34b4:
    if (ctx->pc == 0x3D34B4u) {
        ctx->pc = 0x3D34B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D34B0u;
        // 0x3d34b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D34B8u;
        goto label_3d34b8;
    }
    ctx->pc = 0x3D34B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D34B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D34B0u;
        // 0x3d34b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D34B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D34B8u;
label_3d34b8:
    // 0x3d34b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d34b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3d34bc:
    // 0x3d34bc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d34bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3d34c0:
    // 0x3d34c0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3d34c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_3d34c4:
    // 0x3d34c4: 0x8c43b1e4  lw          $v1, -0x4E1C($v0)
    ctx->pc = 0x3d34c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947300)));
label_3d34c8:
    // 0x3d34c8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3d34c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d34cc:
    // 0x3d34cc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3d34ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3d34d0:
    // 0x3d34d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3d34d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3d34d4:
    // 0x3d34d4: 0x2838821  addu        $s1, $s4, $v1
    ctx->pc = 0x3d34d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_3d34d8:
    // 0x3d34d8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3d34d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3d34dc:
    // 0x3d34dc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3d34dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d34e0:
    // 0x3d34e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d34e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d34e4:
    // 0x3d34e4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3d34e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3d34e8:
    // 0x3d34e8: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x3d34e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3d34ec:
    // 0x3d34ec: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_3d34f0:
    if (ctx->pc == 0x3D34F0u) {
        ctx->pc = 0x3D34F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D34ECu;
        // 0x3d34f0: 0x8e330018  lw          $s3, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D34F4u;
        goto label_3d34f4;
    }
    ctx->pc = 0x3D34ECu;
    {
        const bool branch_taken_0x3d34ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D34F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D34ECu;
        // 0x3d34f0: 0x8e330018  lw          $s3, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d34ec) {
            ctx->pc = 0x3D3520u;
            goto label_3d3520;
        }
    }
    ctx->pc = 0x3D34F4u;
label_3d34f4:
    // 0x3d34f4: 0xc0c8d72  jal         func_3235C8
label_3d34f8:
    if (ctx->pc == 0x3D34F8u) {
        ctx->pc = 0x3D34F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D34F4u;
        // 0x3d34f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D34FCu;
        goto label_3d34fc;
    }
    ctx->pc = 0x3D34F4u;
    SET_GPR_U32(ctx, 31, 0x3D34FCu);
    ctx->pc = 0x3D34F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D34F4u;
    // 0x3d34f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3235C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3235C8u, 0x3D34F4u, 0x3D34FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D34FCu;
label_3d34fc:
    // 0x3d34fc: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_3d3500:
    if (ctx->pc == 0x3D3500u) {
        ctx->pc = 0x3D3500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D34FCu;
        // 0x3d3500: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3504u;
        goto label_3d3504;
    }
    ctx->pc = 0x3D34FCu;
    {
        const bool branch_taken_0x3d34fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D34FCu;
        // 0x3d3500: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d34fc) {
            ctx->pc = 0x3D3520u;
            goto label_3d3520;
        }
    }
    ctx->pc = 0x3D3504u;
label_3d3504:
    // 0x3d3504: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3d3504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d3508:
    // 0x3d3508: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3d3508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3d350c:
    // 0x3d350c: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x3d350cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3d3510:
    // 0x3d3510: 0xc63018  mult        $a2, $a2, $a2
    ctx->pc = 0x3d3510u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_3d3514:
    // 0x3d3514: 0x24c60007  addiu       $a2, $a2, 0x7
    ctx->pc = 0x3d3514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
label_3d3518:
    // 0x3d3518: 0xc0bb7e6  jal         func_2EDF98
label_3d351c:
    if (ctx->pc == 0x3D351Cu) {
        ctx->pc = 0x3D351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3518u;
        // 0x3d351c: 0x630c2  srl         $a2, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3520u;
        goto label_3d3520;
    }
    ctx->pc = 0x3D3518u;
    SET_GPR_U32(ctx, 31, 0x3D3520u);
    ctx->pc = 0x3D351Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3518u;
    // 0x3d351c: 0x630c2  srl         $a2, $a2, 3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3D3518u, 0x3D3520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3520u;
label_3d3520:
    // 0x3d3520: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
label_3d3524:
    if (ctx->pc == 0x3D3524u) {
        ctx->pc = 0x3D3524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3520u;
        // 0x3d3524: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3528u;
        goto label_3d3528;
    }
    ctx->pc = 0x3D3520u;
    {
        const bool branch_taken_0x3d3520 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3520u;
        // 0x3d3524: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3520) {
            ctx->pc = 0x3D3550u;
            goto label_3d3550;
        }
    }
    ctx->pc = 0x3D3528u;
label_3d3528:
    // 0x3d3528: 0xa222000c  sb          $v0, 0xC($s1)
    ctx->pc = 0x3d3528u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 2));
label_3d352c:
    // 0x3d352c: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x3d352cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_3d3530:
    // 0x3d3530: 0xa223000d  sb          $v1, 0xD($s1)
    ctx->pc = 0x3d3530u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 13), (uint8_t)GPR_U32(ctx, 3));
label_3d3534:
    // 0x3d3534: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x3d3534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_3d3538:
    // 0x3d3538: 0xa222000e  sb          $v0, 0xE($s1)
    ctx->pc = 0x3d3538u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 2));
label_3d353c:
    // 0x3d353c: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x3d353cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_3d3540:
    // 0x3d3540: 0xa223000f  sb          $v1, 0xF($s1)
    ctx->pc = 0x3d3540u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 3));
label_3d3544:
    // 0x3d3544: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x3d3544u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_3d3548:
    // 0x3d3548: 0x10000002  b           . + 4 + (0x2 << 2)
label_3d354c:
    if (ctx->pc == 0x3D354Cu) {
        ctx->pc = 0x3D354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3548u;
        // 0x3d354c: 0xa2220010  sb          $v0, 0x10($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3550u;
        goto label_3d3550;
    }
    ctx->pc = 0x3D3548u;
    {
        const bool branch_taken_0x3d3548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3548u;
        // 0x3d354c: 0xa2220010  sb          $v0, 0x10($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3548) {
            ctx->pc = 0x3D3554u;
            goto label_3d3554;
        }
    }
    ctx->pc = 0x3D3550u;
label_3d3550:
    // 0x3d3550: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x3d3550u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
label_3d3554:
    // 0x3d3554: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3d3554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d3558:
    // 0x3d3558: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3d3558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d355c:
    // 0x3d355c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3d355cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d3560:
    // 0x3d3560: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3d3560u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d3564:
    // 0x3d3564: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3d3564u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d3568:
    // 0x3d3568: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3d3568u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d356c:
    // 0x3d356c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d356cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d3570:
    // 0x3d3570: 0x3e00008  jr          $ra
label_3d3574:
    if (ctx->pc == 0x3D3574u) {
        ctx->pc = 0x3D3574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3570u;
        // 0x3d3574: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3578u;
        goto label_3d3578;
    }
    ctx->pc = 0x3D3570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3570u;
        // 0x3d3574: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D3578u;
label_3d3578:
    // 0x3d3578: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d3578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3d357c:
    // 0x3d357c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d357cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3d3580:
    // 0x3d3580: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3d3580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_3d3584:
    // 0x3d3584: 0x8c43b1ec  lw          $v1, -0x4E14($v0)
    ctx->pc = 0x3d3584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947308)));
label_3d3588:
    // 0x3d3588: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3d3588u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d358c:
    // 0x3d358c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3d358cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3d3590:
    // 0x3d3590: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3d3590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3d3594:
    // 0x3d3594: 0x2838821  addu        $s1, $s4, $v1
    ctx->pc = 0x3d3594u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_3d3598:
    // 0x3d3598: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3d3598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3d359c:
    // 0x3d359c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3d359cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d35a0:
    // 0x3d35a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d35a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d35a4:
    // 0x3d35a4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3d35a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3d35a8:
    // 0x3d35a8: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x3d35a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3d35ac:
    // 0x3d35ac: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_3d35b0:
    if (ctx->pc == 0x3D35B0u) {
        ctx->pc = 0x3D35B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D35ACu;
        // 0x3d35b0: 0x8e330018  lw          $s3, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D35B4u;
        goto label_3d35b4;
    }
    ctx->pc = 0x3D35ACu;
    {
        const bool branch_taken_0x3d35ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D35B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D35ACu;
        // 0x3d35b0: 0x8e330018  lw          $s3, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d35ac) {
            ctx->pc = 0x3D35E0u;
            goto label_3d35e0;
        }
    }
    ctx->pc = 0x3D35B4u;
label_3d35b4:
    // 0x3d35b4: 0xc0c8d72  jal         func_3235C8
label_3d35b8:
    if (ctx->pc == 0x3D35B8u) {
        ctx->pc = 0x3D35B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D35B4u;
        // 0x3d35b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D35BCu;
        goto label_3d35bc;
    }
    ctx->pc = 0x3D35B4u;
    SET_GPR_U32(ctx, 31, 0x3D35BCu);
    ctx->pc = 0x3D35B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D35B4u;
    // 0x3d35b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3235C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3235C8u, 0x3D35B4u, 0x3D35BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D35BCu;
label_3d35bc:
    // 0x3d35bc: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_3d35c0:
    if (ctx->pc == 0x3D35C0u) {
        ctx->pc = 0x3D35C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D35BCu;
        // 0x3d35c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D35C4u;
        goto label_3d35c4;
    }
    ctx->pc = 0x3D35BCu;
    {
        const bool branch_taken_0x3d35bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D35C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D35BCu;
        // 0x3d35c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d35bc) {
            ctx->pc = 0x3D35E0u;
            goto label_3d35e0;
        }
    }
    ctx->pc = 0x3D35C4u;
label_3d35c4:
    // 0x3d35c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3d35c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d35c8:
    // 0x3d35c8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3d35c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3d35cc:
    // 0x3d35cc: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x3d35ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3d35d0:
    // 0x3d35d0: 0xc63018  mult        $a2, $a2, $a2
    ctx->pc = 0x3d35d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_3d35d4:
    // 0x3d35d4: 0x24c60007  addiu       $a2, $a2, 0x7
    ctx->pc = 0x3d35d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
label_3d35d8:
    // 0x3d35d8: 0xc0bb7e6  jal         func_2EDF98
label_3d35dc:
    if (ctx->pc == 0x3D35DCu) {
        ctx->pc = 0x3D35DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D35D8u;
        // 0x3d35dc: 0x630c2  srl         $a2, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D35E0u;
        goto label_3d35e0;
    }
    ctx->pc = 0x3D35D8u;
    SET_GPR_U32(ctx, 31, 0x3D35E0u);
    ctx->pc = 0x3D35DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D35D8u;
    // 0x3d35dc: 0x630c2  srl         $a2, $a2, 3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3D35D8u, 0x3D35E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D35E0u;
label_3d35e0:
    // 0x3d35e0: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
label_3d35e4:
    if (ctx->pc == 0x3D35E4u) {
        ctx->pc = 0x3D35E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D35E0u;
        // 0x3d35e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D35E8u;
        goto label_3d35e8;
    }
    ctx->pc = 0x3D35E0u;
    {
        const bool branch_taken_0x3d35e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D35E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D35E0u;
        // 0x3d35e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d35e0) {
            ctx->pc = 0x3D3610u;
            goto label_3d3610;
        }
    }
    ctx->pc = 0x3D35E8u;
label_3d35e8:
    // 0x3d35e8: 0xa222000c  sb          $v0, 0xC($s1)
    ctx->pc = 0x3d35e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 2));
label_3d35ec:
    // 0x3d35ec: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x3d35ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_3d35f0:
    // 0x3d35f0: 0xa223000d  sb          $v1, 0xD($s1)
    ctx->pc = 0x3d35f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 13), (uint8_t)GPR_U32(ctx, 3));
label_3d35f4:
    // 0x3d35f4: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x3d35f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_3d35f8:
    // 0x3d35f8: 0xa222000e  sb          $v0, 0xE($s1)
    ctx->pc = 0x3d35f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 2));
label_3d35fc:
    // 0x3d35fc: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x3d35fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_3d3600:
    // 0x3d3600: 0xa223000f  sb          $v1, 0xF($s1)
    ctx->pc = 0x3d3600u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 3));
label_3d3604:
    // 0x3d3604: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x3d3604u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_3d3608:
    // 0x3d3608: 0x10000002  b           . + 4 + (0x2 << 2)
label_3d360c:
    if (ctx->pc == 0x3D360Cu) {
        ctx->pc = 0x3D360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3608u;
        // 0x3d360c: 0xa2220010  sb          $v0, 0x10($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3610u;
        goto label_3d3610;
    }
    ctx->pc = 0x3D3608u;
    {
        const bool branch_taken_0x3d3608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3608u;
        // 0x3d360c: 0xa2220010  sb          $v0, 0x10($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3608) {
            ctx->pc = 0x3D3614u;
            goto label_3d3614;
        }
    }
    ctx->pc = 0x3D3610u;
label_3d3610:
    // 0x3d3610: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x3d3610u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
label_3d3614:
    // 0x3d3614: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3d3614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d3618:
    // 0x3d3618: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3d3618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d361c:
    // 0x3d361c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3d361cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d3620:
    // 0x3d3620: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3d3620u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d3624:
    // 0x3d3624: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3d3624u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d3628:
    // 0x3d3628: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3d3628u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d362c:
    // 0x3d362c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d362cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d3630:
    // 0x3d3630: 0x3e00008  jr          $ra
label_3d3634:
    if (ctx->pc == 0x3D3634u) {
        ctx->pc = 0x3D3634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3630u;
        // 0x3d3634: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3638u;
        goto label_3d3638;
    }
    ctx->pc = 0x3D3630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3630u;
        // 0x3d3634: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D3638u;
label_3d3638:
    // 0x3d3638: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3d3638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3d363c:
    // 0x3d363c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3d363cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d3640:
    // 0x3d3640: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3d3640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3d3644:
    // 0x3d3644: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d3644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d3648:
    // 0x3d3648: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3d3648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3d364c:
    // 0x3d364c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d364cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d3650:
    // 0x3d3650: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d3650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3d3654:
    // 0x3d3654: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3d3654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d3658:
    // 0x3d3658: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3d3658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3d365c:
    // 0x3d365c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d365cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d3660:
    // 0x3d3660: 0xc0f4df6  jal         func_3D37D8
label_3d3664:
    if (ctx->pc == 0x3D3664u) {
        ctx->pc = 0x3D3664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3660u;
        // 0x3d3664: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3668u;
        goto label_3d3668;
    }
    ctx->pc = 0x3D3660u;
    SET_GPR_U32(ctx, 31, 0x3D3668u);
    ctx->pc = 0x3D3664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3660u;
    // 0x3d3664: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D37D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D37D8u, 0x3D3660u, 0x3D3668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3668u;
label_3d3668:
    // 0x3d3668: 0xc1081b0  jal         func_4206C0
label_3d366c:
    if (ctx->pc == 0x3D366Cu) {
        ctx->pc = 0x3D3670u;
        goto label_3d3670;
    }
    ctx->pc = 0x3D3668u;
    SET_GPR_U32(ctx, 31, 0x3D3670u);
    ctx->pc = 0x4206C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4206C0u, 0x3D3668u, 0x3D3670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3670u;
label_3d3670:
    // 0x3d3670: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d3670u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d3674:
    // 0x3d3674: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x3d3674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3d3678:
    // 0x3d3678: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_3d367c:
    if (ctx->pc == 0x3D367Cu) {
        ctx->pc = 0x3D367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3678u;
        // 0x3d367c: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3680u;
        goto label_3d3680;
    }
    ctx->pc = 0x3D3678u;
    {
        const bool branch_taken_0x3d3678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3678u;
        // 0x3d367c: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3678) {
            ctx->pc = 0x3D36C4u;
            goto label_3d36c4;
        }
    }
    ctx->pc = 0x3D3680u;
label_3d3680:
    // 0x3d3680: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3d3680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3d3684:
    // 0x3d3684: 0x0  nop
    ctx->pc = 0x3d3684u;
    // NOP
label_3d3688:
    // 0x3d3688: 0xc1036da  jal         func_40DB68
label_3d368c:
    if (ctx->pc == 0x3D368Cu) {
        ctx->pc = 0x3D368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3688u;
        // 0x3d368c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3690u;
        goto label_3d3690;
    }
    ctx->pc = 0x3D3688u;
    SET_GPR_U32(ctx, 31, 0x3D3690u);
    ctx->pc = 0x3D368Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3688u;
    // 0x3d368c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3D3688u, 0x3D3690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3690u;
label_3d3690:
    // 0x3d3690: 0xc0c8ea8  jal         func_323AA0
label_3d3694:
    if (ctx->pc == 0x3D3694u) {
        ctx->pc = 0x3D3694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3690u;
        // 0x3d3694: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3698u;
        goto label_3d3698;
    }
    ctx->pc = 0x3D3690u;
    SET_GPR_U32(ctx, 31, 0x3D3698u);
    ctx->pc = 0x3D3694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3690u;
    // 0x3d3694: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323AA0u, 0x3D3690u, 0x3D3698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3698u;
label_3d3698:
    // 0x3d3698: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3d369c:
    if (ctx->pc == 0x3D369Cu) {
        ctx->pc = 0x3D369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3698u;
        // 0x3d369c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D36A0u;
        goto label_3d36a0;
    }
    ctx->pc = 0x3D3698u;
    {
        const bool branch_taken_0x3d3698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3698u;
        // 0x3d369c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3698) {
            ctx->pc = 0x3D36ACu;
            goto label_3d36ac;
        }
    }
    ctx->pc = 0x3D36A0u;
label_3d36a0:
    // 0x3d36a0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3d36a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d36a4:
    // 0x3d36a4: 0xc10826c  jal         func_4209B0
label_3d36a8:
    if (ctx->pc == 0x3D36A8u) {
        ctx->pc = 0x3D36A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D36A4u;
        // 0x3d36a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D36ACu;
        goto label_3d36ac;
    }
    ctx->pc = 0x3D36A4u;
    SET_GPR_U32(ctx, 31, 0x3D36ACu);
    ctx->pc = 0x3D36A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D36A4u;
    // 0x3d36a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4209B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4209B0u, 0x3D36A4u, 0x3D36ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D36ACu;
label_3d36ac:
    // 0x3d36ac: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x3d36acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3d36b0:
    // 0x3d36b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3d36b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3d36b4:
    // 0x3d36b4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3d36b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3d36b8:
    // 0x3d36b8: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
label_3d36bc:
    if (ctx->pc == 0x3D36BCu) {
        ctx->pc = 0x3D36BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D36B8u;
        // 0x3d36bc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D36C0u;
        goto label_3d36c0;
    }
    ctx->pc = 0x3D36B8u;
    {
        const bool branch_taken_0x3d36b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d36b8) {
            ctx->pc = 0x3D36BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D36B8u;
            // 0x3d36bc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d3688;
        }
    }
    ctx->pc = 0x3D36C0u;
label_3d36c0:
    // 0x3d36c0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3d36c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3d36c4:
    // 0x3d36c4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_3d36c8:
    if (ctx->pc == 0x3D36C8u) {
        ctx->pc = 0x3D36C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D36C4u;
        // 0x3d36c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D36CCu;
        goto label_3d36cc;
    }
    ctx->pc = 0x3D36C4u;
    {
        const bool branch_taken_0x3d36c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D36C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D36C4u;
        // 0x3d36c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d36c4) {
            ctx->pc = 0x3D3720u;
            goto label_3d3720;
        }
    }
    ctx->pc = 0x3D36CCu;
label_3d36cc:
    // 0x3d36cc: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3d36ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3d36d0:
    // 0x3d36d0: 0xc1036da  jal         func_40DB68
label_3d36d4:
    if (ctx->pc == 0x3D36D4u) {
        ctx->pc = 0x3D36D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D36D0u;
        // 0x3d36d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D36D8u;
        goto label_3d36d8;
    }
    ctx->pc = 0x3D36D0u;
    SET_GPR_U32(ctx, 31, 0x3D36D8u);
    ctx->pc = 0x3D36D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D36D0u;
    // 0x3d36d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3D36D0u, 0x3D36D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D36D8u;
label_3d36d8:
    // 0x3d36d8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3d36d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d36dc:
    // 0x3d36dc: 0xc0c8ecc  jal         func_323B30
label_3d36e0:
    if (ctx->pc == 0x3D36E0u) {
        ctx->pc = 0x3D36E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D36DCu;
        // 0x3d36e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D36E4u;
        goto label_3d36e4;
    }
    ctx->pc = 0x3D36DCu;
    SET_GPR_U32(ctx, 31, 0x3D36E4u);
    ctx->pc = 0x3D36E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D36DCu;
    // 0x3d36e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B30u, 0x3D36DCu, 0x3D36E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D36E4u;
label_3d36e4:
    // 0x3d36e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3d36e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d36e8:
    // 0x3d36e8: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x3d36e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_3d36ec:
    // 0x3d36ec: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3d36ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3d36f0:
    // 0x3d36f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3d36f4:
    if (ctx->pc == 0x3D36F4u) {
        ctx->pc = 0x3D36F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D36F0u;
        // 0x3d36f4: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D36F8u;
        goto label_3d36f8;
    }
    ctx->pc = 0x3D36F0u;
    {
        const bool branch_taken_0x3d36f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D36F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D36F0u;
        // 0x3d36f4: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d36f0) {
            ctx->pc = 0x3D3710u;
            goto label_3d3710;
        }
    }
    ctx->pc = 0x3D36F8u;
label_3d36f8:
    // 0x3d36f8: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_3d36fc:
    if (ctx->pc == 0x3D36FCu) {
        ctx->pc = 0x3D36FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D36F8u;
        // 0x3d36fc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3700u;
        goto label_3d3700;
    }
    ctx->pc = 0x3D36F8u;
    {
        const bool branch_taken_0x3d36f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d36f8) {
            ctx->pc = 0x3D36FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D36F8u;
            // 0x3d36fc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3714u;
            goto label_3d3714;
        }
    }
    ctx->pc = 0x3D3700u;
label_3d3700:
    // 0x3d3700: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3d3700u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d3704:
    // 0x3d3704: 0xc10826c  jal         func_4209B0
label_3d3708:
    if (ctx->pc == 0x3D3708u) {
        ctx->pc = 0x3D3708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3704u;
        // 0x3d3708: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D370Cu;
        goto label_3d370c;
    }
    ctx->pc = 0x3D3704u;
    SET_GPR_U32(ctx, 31, 0x3D370Cu);
    ctx->pc = 0x3D3708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3704u;
    // 0x3d3708: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4209B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4209B0u, 0x3D3704u, 0x3D370Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D370Cu;
label_3d370c:
    // 0x3d370c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3d370cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3d3710:
    // 0x3d3710: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3d3710u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3d3714:
    // 0x3d3714: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3d3714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3d3718:
    // 0x3d3718: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_3d371c:
    if (ctx->pc == 0x3D371Cu) {
        ctx->pc = 0x3D371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3718u;
        // 0x3d371c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3720u;
        goto label_3d3720;
    }
    ctx->pc = 0x3D3718u;
    {
        const bool branch_taken_0x3d3718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3718u;
        // 0x3d371c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3718) {
            ctx->pc = 0x3D36D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d36d0;
        }
    }
    ctx->pc = 0x3D3720u;
label_3d3720:
    // 0x3d3720: 0xc0f5238  jal         func_3D48E0
label_3d3724:
    if (ctx->pc == 0x3D3724u) {
        ctx->pc = 0x3D3724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3720u;
        // 0x3d3724: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3728u;
        goto label_3d3728;
    }
    ctx->pc = 0x3D3720u;
    SET_GPR_U32(ctx, 31, 0x3D3728u);
    ctx->pc = 0x3D3724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3720u;
    // 0x3d3724: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D48E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D48E0u, 0x3D3720u, 0x3D3728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3728u;
label_3d3728:
    // 0x3d3728: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
label_3d372c:
    if (ctx->pc == 0x3D372Cu) {
        ctx->pc = 0x3D372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3728u;
        // 0x3d372c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3730u;
        goto label_3d3730;
    }
    ctx->pc = 0x3D3728u;
    {
        const bool branch_taken_0x3d3728 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3728u;
        // 0x3d372c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3728) {
            ctx->pc = 0x3D373Cu;
            goto label_3d373c;
        }
    }
    ctx->pc = 0x3D3730u;
label_3d3730:
    // 0x3d3730: 0xc1081de  jal         func_420778
label_3d3734:
    if (ctx->pc == 0x3D3734u) {
        ctx->pc = 0x3D3734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3730u;
        // 0x3d3734: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3738u;
        goto label_3d3738;
    }
    ctx->pc = 0x3D3730u;
    SET_GPR_U32(ctx, 31, 0x3D3738u);
    ctx->pc = 0x3D3734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3730u;
    // 0x3d3734: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420778u, 0x3D3730u, 0x3D3738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3738u;
label_3d3738:
    // 0x3d3738: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d3738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d373c:
    // 0x3d373c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3d373cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d3740:
    // 0x3d3740: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3d3740u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d3744:
    // 0x3d3744: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3d3744u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d3748:
    // 0x3d3748: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d3748u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d374c:
    // 0x3d374c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d374cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d3750:
    // 0x3d3750: 0x3e00008  jr          $ra
label_3d3754:
    if (ctx->pc == 0x3D3754u) {
        ctx->pc = 0x3D3754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3750u;
        // 0x3d3754: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3758u;
        goto label_fallthrough_0x3d3750;
    }
    ctx->pc = 0x3D3750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3750u;
        // 0x3d3754: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d3750:
    ctx->pc = 0x3D3758u;
}
