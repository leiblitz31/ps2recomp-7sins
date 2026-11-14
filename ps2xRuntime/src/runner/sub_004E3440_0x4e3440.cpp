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

// Function: sub_004E3440
// Address: 0x4e3440 - 0x4e3eb0
void sub_004E3440_0x4e3440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3440_0x4e3440");
#endif

    switch (ctx->pc) {
        case 0x4e3440u: goto label_4e3440;
        case 0x4e3444u: goto label_4e3444;
        case 0x4e3448u: goto label_4e3448;
        case 0x4e344cu: goto label_4e344c;
        case 0x4e3450u: goto label_4e3450;
        case 0x4e3454u: goto label_4e3454;
        case 0x4e3458u: goto label_4e3458;
        case 0x4e345cu: goto label_4e345c;
        case 0x4e3460u: goto label_4e3460;
        case 0x4e3464u: goto label_4e3464;
        case 0x4e3468u: goto label_4e3468;
        case 0x4e346cu: goto label_4e346c;
        case 0x4e3470u: goto label_4e3470;
        case 0x4e3474u: goto label_4e3474;
        case 0x4e3478u: goto label_4e3478;
        case 0x4e347cu: goto label_4e347c;
        case 0x4e3480u: goto label_4e3480;
        case 0x4e3484u: goto label_4e3484;
        case 0x4e3488u: goto label_4e3488;
        case 0x4e348cu: goto label_4e348c;
        case 0x4e3490u: goto label_4e3490;
        case 0x4e3494u: goto label_4e3494;
        case 0x4e3498u: goto label_4e3498;
        case 0x4e349cu: goto label_4e349c;
        case 0x4e34a0u: goto label_4e34a0;
        case 0x4e34a4u: goto label_4e34a4;
        case 0x4e34a8u: goto label_4e34a8;
        case 0x4e34acu: goto label_4e34ac;
        case 0x4e34b0u: goto label_4e34b0;
        case 0x4e34b4u: goto label_4e34b4;
        case 0x4e34b8u: goto label_4e34b8;
        case 0x4e34bcu: goto label_4e34bc;
        case 0x4e34c0u: goto label_4e34c0;
        case 0x4e34c4u: goto label_4e34c4;
        case 0x4e34c8u: goto label_4e34c8;
        case 0x4e34ccu: goto label_4e34cc;
        case 0x4e34d0u: goto label_4e34d0;
        case 0x4e34d4u: goto label_4e34d4;
        case 0x4e34d8u: goto label_4e34d8;
        case 0x4e34dcu: goto label_4e34dc;
        case 0x4e34e0u: goto label_4e34e0;
        case 0x4e34e4u: goto label_4e34e4;
        case 0x4e34e8u: goto label_4e34e8;
        case 0x4e34ecu: goto label_4e34ec;
        case 0x4e34f0u: goto label_4e34f0;
        case 0x4e34f4u: goto label_4e34f4;
        case 0x4e34f8u: goto label_4e34f8;
        case 0x4e34fcu: goto label_4e34fc;
        case 0x4e3500u: goto label_4e3500;
        case 0x4e3504u: goto label_4e3504;
        case 0x4e3508u: goto label_4e3508;
        case 0x4e350cu: goto label_4e350c;
        case 0x4e3510u: goto label_4e3510;
        case 0x4e3514u: goto label_4e3514;
        case 0x4e3518u: goto label_4e3518;
        case 0x4e351cu: goto label_4e351c;
        case 0x4e3520u: goto label_4e3520;
        case 0x4e3524u: goto label_4e3524;
        case 0x4e3528u: goto label_4e3528;
        case 0x4e352cu: goto label_4e352c;
        case 0x4e3530u: goto label_4e3530;
        case 0x4e3534u: goto label_4e3534;
        case 0x4e3538u: goto label_4e3538;
        case 0x4e353cu: goto label_4e353c;
        case 0x4e3540u: goto label_4e3540;
        case 0x4e3544u: goto label_4e3544;
        case 0x4e3548u: goto label_4e3548;
        case 0x4e354cu: goto label_4e354c;
        case 0x4e3550u: goto label_4e3550;
        case 0x4e3554u: goto label_4e3554;
        case 0x4e3558u: goto label_4e3558;
        case 0x4e355cu: goto label_4e355c;
        case 0x4e3560u: goto label_4e3560;
        case 0x4e3564u: goto label_4e3564;
        case 0x4e3568u: goto label_4e3568;
        case 0x4e356cu: goto label_4e356c;
        case 0x4e3570u: goto label_4e3570;
        case 0x4e3574u: goto label_4e3574;
        case 0x4e3578u: goto label_4e3578;
        case 0x4e357cu: goto label_4e357c;
        case 0x4e3580u: goto label_4e3580;
        case 0x4e3584u: goto label_4e3584;
        case 0x4e3588u: goto label_4e3588;
        case 0x4e358cu: goto label_4e358c;
        case 0x4e3590u: goto label_4e3590;
        case 0x4e3594u: goto label_4e3594;
        case 0x4e3598u: goto label_4e3598;
        case 0x4e359cu: goto label_4e359c;
        case 0x4e35a0u: goto label_4e35a0;
        case 0x4e35a4u: goto label_4e35a4;
        case 0x4e35a8u: goto label_4e35a8;
        case 0x4e35acu: goto label_4e35ac;
        case 0x4e35b0u: goto label_4e35b0;
        case 0x4e35b4u: goto label_4e35b4;
        case 0x4e35b8u: goto label_4e35b8;
        case 0x4e35bcu: goto label_4e35bc;
        case 0x4e35c0u: goto label_4e35c0;
        case 0x4e35c4u: goto label_4e35c4;
        case 0x4e35c8u: goto label_4e35c8;
        case 0x4e35ccu: goto label_4e35cc;
        case 0x4e35d0u: goto label_4e35d0;
        case 0x4e35d4u: goto label_4e35d4;
        case 0x4e35d8u: goto label_4e35d8;
        case 0x4e35dcu: goto label_4e35dc;
        case 0x4e35e0u: goto label_4e35e0;
        case 0x4e35e4u: goto label_4e35e4;
        case 0x4e35e8u: goto label_4e35e8;
        case 0x4e35ecu: goto label_4e35ec;
        case 0x4e35f0u: goto label_4e35f0;
        case 0x4e35f4u: goto label_4e35f4;
        case 0x4e35f8u: goto label_4e35f8;
        case 0x4e35fcu: goto label_4e35fc;
        case 0x4e3600u: goto label_4e3600;
        case 0x4e3604u: goto label_4e3604;
        case 0x4e3608u: goto label_4e3608;
        case 0x4e360cu: goto label_4e360c;
        case 0x4e3610u: goto label_4e3610;
        case 0x4e3614u: goto label_4e3614;
        case 0x4e3618u: goto label_4e3618;
        case 0x4e361cu: goto label_4e361c;
        case 0x4e3620u: goto label_4e3620;
        case 0x4e3624u: goto label_4e3624;
        case 0x4e3628u: goto label_4e3628;
        case 0x4e362cu: goto label_4e362c;
        case 0x4e3630u: goto label_4e3630;
        case 0x4e3634u: goto label_4e3634;
        case 0x4e3638u: goto label_4e3638;
        case 0x4e363cu: goto label_4e363c;
        case 0x4e3640u: goto label_4e3640;
        case 0x4e3644u: goto label_4e3644;
        case 0x4e3648u: goto label_4e3648;
        case 0x4e364cu: goto label_4e364c;
        case 0x4e3650u: goto label_4e3650;
        case 0x4e3654u: goto label_4e3654;
        case 0x4e3658u: goto label_4e3658;
        case 0x4e365cu: goto label_4e365c;
        case 0x4e3660u: goto label_4e3660;
        case 0x4e3664u: goto label_4e3664;
        case 0x4e3668u: goto label_4e3668;
        case 0x4e366cu: goto label_4e366c;
        case 0x4e3670u: goto label_4e3670;
        case 0x4e3674u: goto label_4e3674;
        case 0x4e3678u: goto label_4e3678;
        case 0x4e367cu: goto label_4e367c;
        case 0x4e3680u: goto label_4e3680;
        case 0x4e3684u: goto label_4e3684;
        case 0x4e3688u: goto label_4e3688;
        case 0x4e368cu: goto label_4e368c;
        case 0x4e3690u: goto label_4e3690;
        case 0x4e3694u: goto label_4e3694;
        case 0x4e3698u: goto label_4e3698;
        case 0x4e369cu: goto label_4e369c;
        case 0x4e36a0u: goto label_4e36a0;
        case 0x4e36a4u: goto label_4e36a4;
        case 0x4e36a8u: goto label_4e36a8;
        case 0x4e36acu: goto label_4e36ac;
        case 0x4e36b0u: goto label_4e36b0;
        case 0x4e36b4u: goto label_4e36b4;
        case 0x4e36b8u: goto label_4e36b8;
        case 0x4e36bcu: goto label_4e36bc;
        case 0x4e36c0u: goto label_4e36c0;
        case 0x4e36c4u: goto label_4e36c4;
        case 0x4e36c8u: goto label_4e36c8;
        case 0x4e36ccu: goto label_4e36cc;
        case 0x4e36d0u: goto label_4e36d0;
        case 0x4e36d4u: goto label_4e36d4;
        case 0x4e36d8u: goto label_4e36d8;
        case 0x4e36dcu: goto label_4e36dc;
        case 0x4e36e0u: goto label_4e36e0;
        case 0x4e36e4u: goto label_4e36e4;
        case 0x4e36e8u: goto label_4e36e8;
        case 0x4e36ecu: goto label_4e36ec;
        case 0x4e36f0u: goto label_4e36f0;
        case 0x4e36f4u: goto label_4e36f4;
        case 0x4e36f8u: goto label_4e36f8;
        case 0x4e36fcu: goto label_4e36fc;
        case 0x4e3700u: goto label_4e3700;
        case 0x4e3704u: goto label_4e3704;
        case 0x4e3708u: goto label_4e3708;
        case 0x4e370cu: goto label_4e370c;
        case 0x4e3710u: goto label_4e3710;
        case 0x4e3714u: goto label_4e3714;
        case 0x4e3718u: goto label_4e3718;
        case 0x4e371cu: goto label_4e371c;
        case 0x4e3720u: goto label_4e3720;
        case 0x4e3724u: goto label_4e3724;
        case 0x4e3728u: goto label_4e3728;
        case 0x4e372cu: goto label_4e372c;
        case 0x4e3730u: goto label_4e3730;
        case 0x4e3734u: goto label_4e3734;
        case 0x4e3738u: goto label_4e3738;
        case 0x4e373cu: goto label_4e373c;
        case 0x4e3740u: goto label_4e3740;
        case 0x4e3744u: goto label_4e3744;
        case 0x4e3748u: goto label_4e3748;
        case 0x4e374cu: goto label_4e374c;
        case 0x4e3750u: goto label_4e3750;
        case 0x4e3754u: goto label_4e3754;
        case 0x4e3758u: goto label_4e3758;
        case 0x4e375cu: goto label_4e375c;
        case 0x4e3760u: goto label_4e3760;
        case 0x4e3764u: goto label_4e3764;
        case 0x4e3768u: goto label_4e3768;
        case 0x4e376cu: goto label_4e376c;
        case 0x4e3770u: goto label_4e3770;
        case 0x4e3774u: goto label_4e3774;
        case 0x4e3778u: goto label_4e3778;
        case 0x4e377cu: goto label_4e377c;
        case 0x4e3780u: goto label_4e3780;
        case 0x4e3784u: goto label_4e3784;
        case 0x4e3788u: goto label_4e3788;
        case 0x4e378cu: goto label_4e378c;
        case 0x4e3790u: goto label_4e3790;
        case 0x4e3794u: goto label_4e3794;
        case 0x4e3798u: goto label_4e3798;
        case 0x4e379cu: goto label_4e379c;
        case 0x4e37a0u: goto label_4e37a0;
        case 0x4e37a4u: goto label_4e37a4;
        case 0x4e37a8u: goto label_4e37a8;
        case 0x4e37acu: goto label_4e37ac;
        case 0x4e37b0u: goto label_4e37b0;
        case 0x4e37b4u: goto label_4e37b4;
        case 0x4e37b8u: goto label_4e37b8;
        case 0x4e37bcu: goto label_4e37bc;
        case 0x4e37c0u: goto label_4e37c0;
        case 0x4e37c4u: goto label_4e37c4;
        case 0x4e37c8u: goto label_4e37c8;
        case 0x4e37ccu: goto label_4e37cc;
        case 0x4e37d0u: goto label_4e37d0;
        case 0x4e37d4u: goto label_4e37d4;
        case 0x4e37d8u: goto label_4e37d8;
        case 0x4e37dcu: goto label_4e37dc;
        case 0x4e37e0u: goto label_4e37e0;
        case 0x4e37e4u: goto label_4e37e4;
        case 0x4e37e8u: goto label_4e37e8;
        case 0x4e37ecu: goto label_4e37ec;
        case 0x4e37f0u: goto label_4e37f0;
        case 0x4e37f4u: goto label_4e37f4;
        case 0x4e37f8u: goto label_4e37f8;
        case 0x4e37fcu: goto label_4e37fc;
        case 0x4e3800u: goto label_4e3800;
        case 0x4e3804u: goto label_4e3804;
        case 0x4e3808u: goto label_4e3808;
        case 0x4e380cu: goto label_4e380c;
        case 0x4e3810u: goto label_4e3810;
        case 0x4e3814u: goto label_4e3814;
        case 0x4e3818u: goto label_4e3818;
        case 0x4e381cu: goto label_4e381c;
        case 0x4e3820u: goto label_4e3820;
        case 0x4e3824u: goto label_4e3824;
        case 0x4e3828u: goto label_4e3828;
        case 0x4e382cu: goto label_4e382c;
        case 0x4e3830u: goto label_4e3830;
        case 0x4e3834u: goto label_4e3834;
        case 0x4e3838u: goto label_4e3838;
        case 0x4e383cu: goto label_4e383c;
        case 0x4e3840u: goto label_4e3840;
        case 0x4e3844u: goto label_4e3844;
        case 0x4e3848u: goto label_4e3848;
        case 0x4e384cu: goto label_4e384c;
        case 0x4e3850u: goto label_4e3850;
        case 0x4e3854u: goto label_4e3854;
        case 0x4e3858u: goto label_4e3858;
        case 0x4e385cu: goto label_4e385c;
        case 0x4e3860u: goto label_4e3860;
        case 0x4e3864u: goto label_4e3864;
        case 0x4e3868u: goto label_4e3868;
        case 0x4e386cu: goto label_4e386c;
        case 0x4e3870u: goto label_4e3870;
        case 0x4e3874u: goto label_4e3874;
        case 0x4e3878u: goto label_4e3878;
        case 0x4e387cu: goto label_4e387c;
        case 0x4e3880u: goto label_4e3880;
        case 0x4e3884u: goto label_4e3884;
        case 0x4e3888u: goto label_4e3888;
        case 0x4e388cu: goto label_4e388c;
        case 0x4e3890u: goto label_4e3890;
        case 0x4e3894u: goto label_4e3894;
        case 0x4e3898u: goto label_4e3898;
        case 0x4e389cu: goto label_4e389c;
        case 0x4e38a0u: goto label_4e38a0;
        case 0x4e38a4u: goto label_4e38a4;
        case 0x4e38a8u: goto label_4e38a8;
        case 0x4e38acu: goto label_4e38ac;
        case 0x4e38b0u: goto label_4e38b0;
        case 0x4e38b4u: goto label_4e38b4;
        case 0x4e38b8u: goto label_4e38b8;
        case 0x4e38bcu: goto label_4e38bc;
        case 0x4e38c0u: goto label_4e38c0;
        case 0x4e38c4u: goto label_4e38c4;
        case 0x4e38c8u: goto label_4e38c8;
        case 0x4e38ccu: goto label_4e38cc;
        case 0x4e38d0u: goto label_4e38d0;
        case 0x4e38d4u: goto label_4e38d4;
        case 0x4e38d8u: goto label_4e38d8;
        case 0x4e38dcu: goto label_4e38dc;
        case 0x4e38e0u: goto label_4e38e0;
        case 0x4e38e4u: goto label_4e38e4;
        case 0x4e38e8u: goto label_4e38e8;
        case 0x4e38ecu: goto label_4e38ec;
        case 0x4e38f0u: goto label_4e38f0;
        case 0x4e38f4u: goto label_4e38f4;
        case 0x4e38f8u: goto label_4e38f8;
        case 0x4e38fcu: goto label_4e38fc;
        case 0x4e3900u: goto label_4e3900;
        case 0x4e3904u: goto label_4e3904;
        case 0x4e3908u: goto label_4e3908;
        case 0x4e390cu: goto label_4e390c;
        case 0x4e3910u: goto label_4e3910;
        case 0x4e3914u: goto label_4e3914;
        case 0x4e3918u: goto label_4e3918;
        case 0x4e391cu: goto label_4e391c;
        case 0x4e3920u: goto label_4e3920;
        case 0x4e3924u: goto label_4e3924;
        case 0x4e3928u: goto label_4e3928;
        case 0x4e392cu: goto label_4e392c;
        case 0x4e3930u: goto label_4e3930;
        case 0x4e3934u: goto label_4e3934;
        case 0x4e3938u: goto label_4e3938;
        case 0x4e393cu: goto label_4e393c;
        case 0x4e3940u: goto label_4e3940;
        case 0x4e3944u: goto label_4e3944;
        case 0x4e3948u: goto label_4e3948;
        case 0x4e394cu: goto label_4e394c;
        case 0x4e3950u: goto label_4e3950;
        case 0x4e3954u: goto label_4e3954;
        case 0x4e3958u: goto label_4e3958;
        case 0x4e395cu: goto label_4e395c;
        case 0x4e3960u: goto label_4e3960;
        case 0x4e3964u: goto label_4e3964;
        case 0x4e3968u: goto label_4e3968;
        case 0x4e396cu: goto label_4e396c;
        case 0x4e3970u: goto label_4e3970;
        case 0x4e3974u: goto label_4e3974;
        case 0x4e3978u: goto label_4e3978;
        case 0x4e397cu: goto label_4e397c;
        case 0x4e3980u: goto label_4e3980;
        case 0x4e3984u: goto label_4e3984;
        case 0x4e3988u: goto label_4e3988;
        case 0x4e398cu: goto label_4e398c;
        case 0x4e3990u: goto label_4e3990;
        case 0x4e3994u: goto label_4e3994;
        case 0x4e3998u: goto label_4e3998;
        case 0x4e399cu: goto label_4e399c;
        case 0x4e39a0u: goto label_4e39a0;
        case 0x4e39a4u: goto label_4e39a4;
        case 0x4e39a8u: goto label_4e39a8;
        case 0x4e39acu: goto label_4e39ac;
        case 0x4e39b0u: goto label_4e39b0;
        case 0x4e39b4u: goto label_4e39b4;
        case 0x4e39b8u: goto label_4e39b8;
        case 0x4e39bcu: goto label_4e39bc;
        case 0x4e39c0u: goto label_4e39c0;
        case 0x4e39c4u: goto label_4e39c4;
        case 0x4e39c8u: goto label_4e39c8;
        case 0x4e39ccu: goto label_4e39cc;
        case 0x4e39d0u: goto label_4e39d0;
        case 0x4e39d4u: goto label_4e39d4;
        case 0x4e39d8u: goto label_4e39d8;
        case 0x4e39dcu: goto label_4e39dc;
        case 0x4e39e0u: goto label_4e39e0;
        case 0x4e39e4u: goto label_4e39e4;
        case 0x4e39e8u: goto label_4e39e8;
        case 0x4e39ecu: goto label_4e39ec;
        case 0x4e39f0u: goto label_4e39f0;
        case 0x4e39f4u: goto label_4e39f4;
        case 0x4e39f8u: goto label_4e39f8;
        case 0x4e39fcu: goto label_4e39fc;
        case 0x4e3a00u: goto label_4e3a00;
        case 0x4e3a04u: goto label_4e3a04;
        case 0x4e3a08u: goto label_4e3a08;
        case 0x4e3a0cu: goto label_4e3a0c;
        case 0x4e3a10u: goto label_4e3a10;
        case 0x4e3a14u: goto label_4e3a14;
        case 0x4e3a18u: goto label_4e3a18;
        case 0x4e3a1cu: goto label_4e3a1c;
        case 0x4e3a20u: goto label_4e3a20;
        case 0x4e3a24u: goto label_4e3a24;
        case 0x4e3a28u: goto label_4e3a28;
        case 0x4e3a2cu: goto label_4e3a2c;
        case 0x4e3a30u: goto label_4e3a30;
        case 0x4e3a34u: goto label_4e3a34;
        case 0x4e3a38u: goto label_4e3a38;
        case 0x4e3a3cu: goto label_4e3a3c;
        case 0x4e3a40u: goto label_4e3a40;
        case 0x4e3a44u: goto label_4e3a44;
        case 0x4e3a48u: goto label_4e3a48;
        case 0x4e3a4cu: goto label_4e3a4c;
        case 0x4e3a50u: goto label_4e3a50;
        case 0x4e3a54u: goto label_4e3a54;
        case 0x4e3a58u: goto label_4e3a58;
        case 0x4e3a5cu: goto label_4e3a5c;
        case 0x4e3a60u: goto label_4e3a60;
        case 0x4e3a64u: goto label_4e3a64;
        case 0x4e3a68u: goto label_4e3a68;
        case 0x4e3a6cu: goto label_4e3a6c;
        case 0x4e3a70u: goto label_4e3a70;
        case 0x4e3a74u: goto label_4e3a74;
        case 0x4e3a78u: goto label_4e3a78;
        case 0x4e3a7cu: goto label_4e3a7c;
        case 0x4e3a80u: goto label_4e3a80;
        case 0x4e3a84u: goto label_4e3a84;
        case 0x4e3a88u: goto label_4e3a88;
        case 0x4e3a8cu: goto label_4e3a8c;
        case 0x4e3a90u: goto label_4e3a90;
        case 0x4e3a94u: goto label_4e3a94;
        case 0x4e3a98u: goto label_4e3a98;
        case 0x4e3a9cu: goto label_4e3a9c;
        case 0x4e3aa0u: goto label_4e3aa0;
        case 0x4e3aa4u: goto label_4e3aa4;
        case 0x4e3aa8u: goto label_4e3aa8;
        case 0x4e3aacu: goto label_4e3aac;
        case 0x4e3ab0u: goto label_4e3ab0;
        case 0x4e3ab4u: goto label_4e3ab4;
        case 0x4e3ab8u: goto label_4e3ab8;
        case 0x4e3abcu: goto label_4e3abc;
        case 0x4e3ac0u: goto label_4e3ac0;
        case 0x4e3ac4u: goto label_4e3ac4;
        case 0x4e3ac8u: goto label_4e3ac8;
        case 0x4e3accu: goto label_4e3acc;
        case 0x4e3ad0u: goto label_4e3ad0;
        case 0x4e3ad4u: goto label_4e3ad4;
        case 0x4e3ad8u: goto label_4e3ad8;
        case 0x4e3adcu: goto label_4e3adc;
        case 0x4e3ae0u: goto label_4e3ae0;
        case 0x4e3ae4u: goto label_4e3ae4;
        case 0x4e3ae8u: goto label_4e3ae8;
        case 0x4e3aecu: goto label_4e3aec;
        case 0x4e3af0u: goto label_4e3af0;
        case 0x4e3af4u: goto label_4e3af4;
        case 0x4e3af8u: goto label_4e3af8;
        case 0x4e3afcu: goto label_4e3afc;
        case 0x4e3b00u: goto label_4e3b00;
        case 0x4e3b04u: goto label_4e3b04;
        case 0x4e3b08u: goto label_4e3b08;
        case 0x4e3b0cu: goto label_4e3b0c;
        case 0x4e3b10u: goto label_4e3b10;
        case 0x4e3b14u: goto label_4e3b14;
        case 0x4e3b18u: goto label_4e3b18;
        case 0x4e3b1cu: goto label_4e3b1c;
        case 0x4e3b20u: goto label_4e3b20;
        case 0x4e3b24u: goto label_4e3b24;
        case 0x4e3b28u: goto label_4e3b28;
        case 0x4e3b2cu: goto label_4e3b2c;
        case 0x4e3b30u: goto label_4e3b30;
        case 0x4e3b34u: goto label_4e3b34;
        case 0x4e3b38u: goto label_4e3b38;
        case 0x4e3b3cu: goto label_4e3b3c;
        case 0x4e3b40u: goto label_4e3b40;
        case 0x4e3b44u: goto label_4e3b44;
        case 0x4e3b48u: goto label_4e3b48;
        case 0x4e3b4cu: goto label_4e3b4c;
        case 0x4e3b50u: goto label_4e3b50;
        case 0x4e3b54u: goto label_4e3b54;
        case 0x4e3b58u: goto label_4e3b58;
        case 0x4e3b5cu: goto label_4e3b5c;
        case 0x4e3b60u: goto label_4e3b60;
        case 0x4e3b64u: goto label_4e3b64;
        case 0x4e3b68u: goto label_4e3b68;
        case 0x4e3b6cu: goto label_4e3b6c;
        case 0x4e3b70u: goto label_4e3b70;
        case 0x4e3b74u: goto label_4e3b74;
        case 0x4e3b78u: goto label_4e3b78;
        case 0x4e3b7cu: goto label_4e3b7c;
        case 0x4e3b80u: goto label_4e3b80;
        case 0x4e3b84u: goto label_4e3b84;
        case 0x4e3b88u: goto label_4e3b88;
        case 0x4e3b8cu: goto label_4e3b8c;
        case 0x4e3b90u: goto label_4e3b90;
        case 0x4e3b94u: goto label_4e3b94;
        case 0x4e3b98u: goto label_4e3b98;
        case 0x4e3b9cu: goto label_4e3b9c;
        case 0x4e3ba0u: goto label_4e3ba0;
        case 0x4e3ba4u: goto label_4e3ba4;
        case 0x4e3ba8u: goto label_4e3ba8;
        case 0x4e3bacu: goto label_4e3bac;
        case 0x4e3bb0u: goto label_4e3bb0;
        case 0x4e3bb4u: goto label_4e3bb4;
        case 0x4e3bb8u: goto label_4e3bb8;
        case 0x4e3bbcu: goto label_4e3bbc;
        case 0x4e3bc0u: goto label_4e3bc0;
        case 0x4e3bc4u: goto label_4e3bc4;
        case 0x4e3bc8u: goto label_4e3bc8;
        case 0x4e3bccu: goto label_4e3bcc;
        case 0x4e3bd0u: goto label_4e3bd0;
        case 0x4e3bd4u: goto label_4e3bd4;
        case 0x4e3bd8u: goto label_4e3bd8;
        case 0x4e3bdcu: goto label_4e3bdc;
        case 0x4e3be0u: goto label_4e3be0;
        case 0x4e3be4u: goto label_4e3be4;
        case 0x4e3be8u: goto label_4e3be8;
        case 0x4e3becu: goto label_4e3bec;
        case 0x4e3bf0u: goto label_4e3bf0;
        case 0x4e3bf4u: goto label_4e3bf4;
        case 0x4e3bf8u: goto label_4e3bf8;
        case 0x4e3bfcu: goto label_4e3bfc;
        case 0x4e3c00u: goto label_4e3c00;
        case 0x4e3c04u: goto label_4e3c04;
        case 0x4e3c08u: goto label_4e3c08;
        case 0x4e3c0cu: goto label_4e3c0c;
        case 0x4e3c10u: goto label_4e3c10;
        case 0x4e3c14u: goto label_4e3c14;
        case 0x4e3c18u: goto label_4e3c18;
        case 0x4e3c1cu: goto label_4e3c1c;
        case 0x4e3c20u: goto label_4e3c20;
        case 0x4e3c24u: goto label_4e3c24;
        case 0x4e3c28u: goto label_4e3c28;
        case 0x4e3c2cu: goto label_4e3c2c;
        case 0x4e3c30u: goto label_4e3c30;
        case 0x4e3c34u: goto label_4e3c34;
        case 0x4e3c38u: goto label_4e3c38;
        case 0x4e3c3cu: goto label_4e3c3c;
        case 0x4e3c40u: goto label_4e3c40;
        case 0x4e3c44u: goto label_4e3c44;
        case 0x4e3c48u: goto label_4e3c48;
        case 0x4e3c4cu: goto label_4e3c4c;
        case 0x4e3c50u: goto label_4e3c50;
        case 0x4e3c54u: goto label_4e3c54;
        case 0x4e3c58u: goto label_4e3c58;
        case 0x4e3c5cu: goto label_4e3c5c;
        case 0x4e3c60u: goto label_4e3c60;
        case 0x4e3c64u: goto label_4e3c64;
        case 0x4e3c68u: goto label_4e3c68;
        case 0x4e3c6cu: goto label_4e3c6c;
        case 0x4e3c70u: goto label_4e3c70;
        case 0x4e3c74u: goto label_4e3c74;
        case 0x4e3c78u: goto label_4e3c78;
        case 0x4e3c7cu: goto label_4e3c7c;
        case 0x4e3c80u: goto label_4e3c80;
        case 0x4e3c84u: goto label_4e3c84;
        case 0x4e3c88u: goto label_4e3c88;
        case 0x4e3c8cu: goto label_4e3c8c;
        case 0x4e3c90u: goto label_4e3c90;
        case 0x4e3c94u: goto label_4e3c94;
        case 0x4e3c98u: goto label_4e3c98;
        case 0x4e3c9cu: goto label_4e3c9c;
        case 0x4e3ca0u: goto label_4e3ca0;
        case 0x4e3ca4u: goto label_4e3ca4;
        case 0x4e3ca8u: goto label_4e3ca8;
        case 0x4e3cacu: goto label_4e3cac;
        case 0x4e3cb0u: goto label_4e3cb0;
        case 0x4e3cb4u: goto label_4e3cb4;
        case 0x4e3cb8u: goto label_4e3cb8;
        case 0x4e3cbcu: goto label_4e3cbc;
        case 0x4e3cc0u: goto label_4e3cc0;
        case 0x4e3cc4u: goto label_4e3cc4;
        case 0x4e3cc8u: goto label_4e3cc8;
        case 0x4e3cccu: goto label_4e3ccc;
        case 0x4e3cd0u: goto label_4e3cd0;
        case 0x4e3cd4u: goto label_4e3cd4;
        case 0x4e3cd8u: goto label_4e3cd8;
        case 0x4e3cdcu: goto label_4e3cdc;
        case 0x4e3ce0u: goto label_4e3ce0;
        case 0x4e3ce4u: goto label_4e3ce4;
        case 0x4e3ce8u: goto label_4e3ce8;
        case 0x4e3cecu: goto label_4e3cec;
        case 0x4e3cf0u: goto label_4e3cf0;
        case 0x4e3cf4u: goto label_4e3cf4;
        case 0x4e3cf8u: goto label_4e3cf8;
        case 0x4e3cfcu: goto label_4e3cfc;
        case 0x4e3d00u: goto label_4e3d00;
        case 0x4e3d04u: goto label_4e3d04;
        case 0x4e3d08u: goto label_4e3d08;
        case 0x4e3d0cu: goto label_4e3d0c;
        case 0x4e3d10u: goto label_4e3d10;
        case 0x4e3d14u: goto label_4e3d14;
        case 0x4e3d18u: goto label_4e3d18;
        case 0x4e3d1cu: goto label_4e3d1c;
        case 0x4e3d20u: goto label_4e3d20;
        case 0x4e3d24u: goto label_4e3d24;
        case 0x4e3d28u: goto label_4e3d28;
        case 0x4e3d2cu: goto label_4e3d2c;
        case 0x4e3d30u: goto label_4e3d30;
        case 0x4e3d34u: goto label_4e3d34;
        case 0x4e3d38u: goto label_4e3d38;
        case 0x4e3d3cu: goto label_4e3d3c;
        case 0x4e3d40u: goto label_4e3d40;
        case 0x4e3d44u: goto label_4e3d44;
        case 0x4e3d48u: goto label_4e3d48;
        case 0x4e3d4cu: goto label_4e3d4c;
        case 0x4e3d50u: goto label_4e3d50;
        case 0x4e3d54u: goto label_4e3d54;
        case 0x4e3d58u: goto label_4e3d58;
        case 0x4e3d5cu: goto label_4e3d5c;
        case 0x4e3d60u: goto label_4e3d60;
        case 0x4e3d64u: goto label_4e3d64;
        case 0x4e3d68u: goto label_4e3d68;
        case 0x4e3d6cu: goto label_4e3d6c;
        case 0x4e3d70u: goto label_4e3d70;
        case 0x4e3d74u: goto label_4e3d74;
        case 0x4e3d78u: goto label_4e3d78;
        case 0x4e3d7cu: goto label_4e3d7c;
        case 0x4e3d80u: goto label_4e3d80;
        case 0x4e3d84u: goto label_4e3d84;
        case 0x4e3d88u: goto label_4e3d88;
        case 0x4e3d8cu: goto label_4e3d8c;
        case 0x4e3d90u: goto label_4e3d90;
        case 0x4e3d94u: goto label_4e3d94;
        case 0x4e3d98u: goto label_4e3d98;
        case 0x4e3d9cu: goto label_4e3d9c;
        case 0x4e3da0u: goto label_4e3da0;
        case 0x4e3da4u: goto label_4e3da4;
        case 0x4e3da8u: goto label_4e3da8;
        case 0x4e3dacu: goto label_4e3dac;
        case 0x4e3db0u: goto label_4e3db0;
        case 0x4e3db4u: goto label_4e3db4;
        case 0x4e3db8u: goto label_4e3db8;
        case 0x4e3dbcu: goto label_4e3dbc;
        case 0x4e3dc0u: goto label_4e3dc0;
        case 0x4e3dc4u: goto label_4e3dc4;
        case 0x4e3dc8u: goto label_4e3dc8;
        case 0x4e3dccu: goto label_4e3dcc;
        case 0x4e3dd0u: goto label_4e3dd0;
        case 0x4e3dd4u: goto label_4e3dd4;
        case 0x4e3dd8u: goto label_4e3dd8;
        case 0x4e3ddcu: goto label_4e3ddc;
        case 0x4e3de0u: goto label_4e3de0;
        case 0x4e3de4u: goto label_4e3de4;
        case 0x4e3de8u: goto label_4e3de8;
        case 0x4e3decu: goto label_4e3dec;
        case 0x4e3df0u: goto label_4e3df0;
        case 0x4e3df4u: goto label_4e3df4;
        case 0x4e3df8u: goto label_4e3df8;
        case 0x4e3dfcu: goto label_4e3dfc;
        case 0x4e3e00u: goto label_4e3e00;
        case 0x4e3e04u: goto label_4e3e04;
        case 0x4e3e08u: goto label_4e3e08;
        case 0x4e3e0cu: goto label_4e3e0c;
        case 0x4e3e10u: goto label_4e3e10;
        case 0x4e3e14u: goto label_4e3e14;
        case 0x4e3e18u: goto label_4e3e18;
        case 0x4e3e1cu: goto label_4e3e1c;
        case 0x4e3e20u: goto label_4e3e20;
        case 0x4e3e24u: goto label_4e3e24;
        case 0x4e3e28u: goto label_4e3e28;
        case 0x4e3e2cu: goto label_4e3e2c;
        case 0x4e3e30u: goto label_4e3e30;
        case 0x4e3e34u: goto label_4e3e34;
        case 0x4e3e38u: goto label_4e3e38;
        case 0x4e3e3cu: goto label_4e3e3c;
        case 0x4e3e40u: goto label_4e3e40;
        case 0x4e3e44u: goto label_4e3e44;
        case 0x4e3e48u: goto label_4e3e48;
        case 0x4e3e4cu: goto label_4e3e4c;
        case 0x4e3e50u: goto label_4e3e50;
        case 0x4e3e54u: goto label_4e3e54;
        case 0x4e3e58u: goto label_4e3e58;
        case 0x4e3e5cu: goto label_4e3e5c;
        case 0x4e3e60u: goto label_4e3e60;
        case 0x4e3e64u: goto label_4e3e64;
        case 0x4e3e68u: goto label_4e3e68;
        case 0x4e3e6cu: goto label_4e3e6c;
        case 0x4e3e70u: goto label_4e3e70;
        case 0x4e3e74u: goto label_4e3e74;
        case 0x4e3e78u: goto label_4e3e78;
        case 0x4e3e7cu: goto label_4e3e7c;
        case 0x4e3e80u: goto label_4e3e80;
        case 0x4e3e84u: goto label_4e3e84;
        case 0x4e3e88u: goto label_4e3e88;
        case 0x4e3e8cu: goto label_4e3e8c;
        case 0x4e3e90u: goto label_4e3e90;
        case 0x4e3e94u: goto label_4e3e94;
        case 0x4e3e98u: goto label_4e3e98;
        case 0x4e3e9cu: goto label_4e3e9c;
        case 0x4e3ea0u: goto label_4e3ea0;
        case 0x4e3ea4u: goto label_4e3ea4;
        case 0x4e3ea8u: goto label_4e3ea8;
        case 0x4e3eacu: goto label_4e3eac;
        default: break;
    }

    ctx->pc = 0x4e3440u;

label_4e3440:
    // 0x4e3440: 0x6e657261  ldr         $a1, 0x7261($s3)
    ctx->pc = 0x4e3440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4e3444:
    // 0x4e3444: 0x63612061  daddi       $at, $k1, 0x2061
    ctx->pc = 0x4e3444u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)8289; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_4e3448:
    // 0x4e3448: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x4e3448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e344c:
    // 0x4e344c: 0x72756320  .word       0x72756320                   # madd1       $t4, $s3, $s5 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e344cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 21); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_4e3450:
    // 0x4e3450: 0x3a726f73  xori        $s2, $s3, 0x6F73
    ctx->pc = 0x4e3450u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28531);
label_4e3454:
    // 0x4e3454: 0x414c4620  .word       0x414C4620                   # INVALID     $t2, $t4, 0x4620 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e3454u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x4E3454 raw=0x414C4620");
label_4e3458:
    // 0x4e3458: 0x52455454  beql        $s2, $a1, . + 4 + (0x5454 << 2)
label_4e345c:
    if (ctx->pc == 0x4E345Cu) {
        ctx->pc = 0x4E345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3458u;
        // 0x4e345c: 0xa4549  .word       0x000A4549                   # jalr        $t0, $zero # 000A0540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $8, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3460u;
        goto label_4e3460;
    }
    ctx->pc = 0x4E3458u;
    {
        const bool branch_taken_0x4e3458 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        if (branch_taken_0x4e3458) {
            ctx->pc = 0x4E345Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3458u;
            // 0x4e345c: 0xa4549  .word       0x000A4549                   # jalr        $t0, $zero # 000A0540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            // JALR $8, $0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F85ACu;
            return;
        }
    }
    ctx->pc = 0x4E3460u;
label_4e3460:
    // 0x4e3460: 0x6e657261  ldr         $a1, 0x7261($s3)
    ctx->pc = 0x4e3460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4e3464:
    // 0x4e3464: 0x63612061  daddi       $at, $k1, 0x2061
    ctx->pc = 0x4e3464u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)8289; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_4e3468:
    // 0x4e3468: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x4e3468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e346c:
    // 0x4e346c: 0x72756320  .word       0x72756320                   # madd1       $t4, $s3, $s5 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e346cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 21); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_4e3470:
    // 0x4e3470: 0x3a726f73  xori        $s2, $s3, 0x6F73
    ctx->pc = 0x4e3470u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28531);
label_4e3474:
    // 0x4e3474: 0x52455320  beql        $s2, $a1, . + 4 + (0x5320 << 2)
label_4e3478:
    if (ctx->pc == 0x4E3478u) {
        ctx->pc = 0x4E3478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3474u;
        // 0x4e3478: 0x58554549  .word       0x58554549                   # blezl       $v0, . + 4 + (0x4549 << 2) # 00150000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x4E3478 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E347Cu;
        goto label_4e347c;
    }
    ctx->pc = 0x4E3474u;
    {
        const bool branch_taken_0x4e3474 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        if (branch_taken_0x4e3474) {
            ctx->pc = 0x4E3478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3474u;
            // 0x4e3478: 0x58554549  .word       0x58554549                   # blezl       $v0, . + 4 + (0x4549 << 2) # 00150000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E3478 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F80F8u;
            return;
        }
    }
    ctx->pc = 0x4E347Cu;
label_4e347c:
    // 0x4e347c: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x4e347cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_4e3480:
    // 0x4e3480: 0x6e657261  ldr         $a1, 0x7261($s3)
    ctx->pc = 0x4e3480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4e3484:
    // 0x4e3484: 0x63612061  daddi       $at, $k1, 0x2061
    ctx->pc = 0x4e3484u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)8289; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_4e3488:
    // 0x4e3488: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x4e3488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e348c:
    // 0x4e348c: 0x72756320  .word       0x72756320                   # madd1       $t4, $s3, $s5 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e348cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 21); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_4e3490:
    // 0x4e3490: 0x3a726f73  xori        $s2, $s3, 0x6F73
    ctx->pc = 0x4e3490u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28531);
label_4e3494:
    // 0x4e3494: 0x57454e20  bnel        $k0, $a1, . + 4 + (0x4E20 << 2)
label_4e3498:
    if (ctx->pc == 0x4E3498u) {
        ctx->pc = 0x4E3498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3494u;
        // 0x4e3498: 0xa454741  j           func_9151D04 (Delay Slot)
        // J 0x9151D04 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E349Cu;
        goto label_4e349c;
    }
    ctx->pc = 0x4E3494u;
    {
        const bool branch_taken_0x4e3494 = (GPR_U64(ctx, 26) != GPR_U64(ctx, 5));
        if (branch_taken_0x4e3494) {
            ctx->pc = 0x4E3498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3494u;
            // 0x4e3498: 0xa454741  j           func_9151D04 (Delay Slot)
            // J 0x9151D04 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F6D18u;
            return;
        }
    }
    ctx->pc = 0x4E349Cu;
label_4e349c:
    // 0x4e349c: 0x0  nop
    ctx->pc = 0x4e349cu;
    // NOP
label_4e34a0:
    // 0x4e34a0: 0x6e657261  ldr         $a1, 0x7261($s3)
    ctx->pc = 0x4e34a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4e34a4:
    // 0x4e34a4: 0x63612061  daddi       $at, $k1, 0x2061
    ctx->pc = 0x4e34a4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)8289; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_4e34a8:
    // 0x4e34a8: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x4e34a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e34ac:
    // 0x4e34ac: 0x72756320  .word       0x72756320                   # madd1       $t4, $s3, $s5 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e34acu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 21); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_4e34b0:
    // 0x4e34b0: 0x3a726f73  xori        $s2, $s3, 0x6F73
    ctx->pc = 0x4e34b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28531);
label_4e34b4:
    // 0x4e34b4: 0x47524120  .word       0x47524120                   # INVALID     $k0, $s2, 0x4120 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e34b4u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x20 at 0x4E34B4 raw=0x47524120");
label_4e34b8:
    // 0x4e34b8: 0xa544e45  j           func_9513914
label_4e34bc:
    if (ctx->pc == 0x4E34BCu) {
        ctx->pc = 0x4E34C0u;
        goto label_4e34c0;
    }
    ctx->pc = 0x4E34B8u;
    ctx->pc = 0x9513914u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9513914u, 0x4E34B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E34C0u;
label_4e34c0:
    // 0x4e34c0: 0x6e657261  ldr         $a1, 0x7261($s3)
    ctx->pc = 0x4e34c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4e34c4:
    // 0x4e34c4: 0x63612061  daddi       $at, $k1, 0x2061
    ctx->pc = 0x4e34c4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)8289; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_4e34c8:
    // 0x4e34c8: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x4e34c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e34cc:
    // 0x4e34cc: 0x72756320  .word       0x72756320                   # madd1       $t4, $s3, $s5 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e34ccu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 21); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_4e34d0:
    // 0x4e34d0: 0x3a726f73  xori        $s2, $s3, 0x6F73
    ctx->pc = 0x4e34d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28531);
label_4e34d4:
    // 0x4e34d4: 0x4f524420  .word       0x4F524420                   # INVALID     $k0, $s2, 0x4420 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e34d4u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E34D4 raw=0x4F524420");
label_4e34d8:
    // 0x4e34d8: 0xa455547  j           func_915551C
label_4e34dc:
    if (ctx->pc == 0x4E34DCu) {
        ctx->pc = 0x4E34E0u;
        goto label_4e34e0;
    }
    ctx->pc = 0x4E34D8u;
    ctx->pc = 0x915551Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x915551Cu, 0x4E34D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E34E0u;
label_4e34e0:
    // 0x4e34e0: 0x6e657261  ldr         $a1, 0x7261($s3)
    ctx->pc = 0x4e34e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4e34e4:
    // 0x4e34e4: 0x63612061  daddi       $at, $k1, 0x2061
    ctx->pc = 0x4e34e4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)8289; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_4e34e8:
    // 0x4e34e8: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x4e34e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e34ec:
    // 0x4e34ec: 0x72756320  .word       0x72756320                   # madd1       $t4, $s3, $s5 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e34ecu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 21); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_4e34f0:
    // 0x4e34f0: 0x3a726f73  xori        $s2, $s3, 0x6F73
    ctx->pc = 0x4e34f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28531);
label_4e34f4:
    // 0x4e34f4: 0x54454a20  bnel        $v0, $a1, . + 4 + (0x4A20 << 2)
label_4e34f8:
    if (ctx->pc == 0x4E34F8u) {
        ctx->pc = 0x4E34F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E34F4u;
        // 0x4e34f8: 0xa544553  j           func_951154C (Delay Slot)
        // J 0x951154C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E34FCu;
        goto label_4e34fc;
    }
    ctx->pc = 0x4E34F4u;
    {
        const bool branch_taken_0x4e34f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x4e34f4) {
            ctx->pc = 0x4E34F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E34F4u;
            // 0x4e34f8: 0xa544553  j           func_951154C (Delay Slot)
            // J 0x951154C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F5D78u;
            return;
        }
    }
    ctx->pc = 0x4E34FCu;
label_4e34fc:
    // 0x4e34fc: 0x0  nop
    ctx->pc = 0x4e34fcu;
    // NOP
label_4e3500:
    // 0x4e3500: 0x6e657261  ldr         $a1, 0x7261($s3)
    ctx->pc = 0x4e3500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4e3504:
    // 0x4e3504: 0x63612061  daddi       $at, $k1, 0x2061
    ctx->pc = 0x4e3504u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)8289; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_4e3508:
    // 0x4e3508: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x4e3508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e350c:
    // 0x4e350c: 0x72756320  .word       0x72756320                   # madd1       $t4, $s3, $s5 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e350cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 21); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_4e3510:
    // 0x4e3510: 0x3a726f73  xori        $s2, $s3, 0x6F73
    ctx->pc = 0x4e3510u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28531);
label_4e3514:
    // 0x4e3514: 0x494b5320  .word       0x494B5320                   # INVALID     $t2, $t3, 0x5320 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x4e3514u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x4E3514 raw=0x494B5320");
label_4e3518:
    // 0x4e3518: 0x4f4e4c4c  .word       0x4F4E4C4C                   # INVALID     $k0, $t6, 0x4C4C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3518u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E3518 raw=0x4F4E4C4C");
label_4e351c:
    // 0x4e351c: 0xa454e  .word       0x000A454E                   # INVALID     $zero, $t2, 0x454E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e351cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x4E351C raw=0x000A454E");
label_4e3520:
    // 0x4e3520: 0x5f6e7462  .word       0x5F6E7462                   # bgtzl       $k1, . + 4 + (0x7462 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e3524:
    if (ctx->pc == 0x4E3524u) {
        ctx->pc = 0x4E3524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3520u;
        // 0x4e3524: 0x61697274  daddi       $t1, $t3, 0x7274 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29300; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3528u;
        goto label_4e3528;
    }
    ctx->pc = 0x4E3520u;
    {
        const bool branch_taken_0x4e3520 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3520) {
            ctx->pc = 0x4E3524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3520u;
            // 0x4e3524: 0x61697274  daddi       $t1, $t3, 0x7274 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29300; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5006ACu;
            return;
        }
    }
    ctx->pc = 0x4E3528u;
label_4e3528:
    // 0x4e3528: 0x656c676e  daddiu      $t4, $t3, 0x676E
    ctx->pc = 0x4e3528u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26478);
label_4e352c:
    // 0x4e352c: 0x0  nop
    ctx->pc = 0x4e352cu;
    // NOP
label_4e3530:
    // 0x4e3530: 0x0  nop
    ctx->pc = 0x4e3530u;
    // NOP
label_4e3534:
    // 0x4e3534: 0x0  nop
    ctx->pc = 0x4e3534u;
    // NOP
label_4e3538:
    // 0x4e3538: 0x0  nop
    ctx->pc = 0x4e3538u;
    // NOP
label_4e353c:
    // 0x4e353c: 0x0  nop
    ctx->pc = 0x4e353cu;
    // NOP
label_4e3540:
    // 0x4e3540: 0x7661656c  .word       0x7661656C                   # INVALID     $s3, $at, 0x656C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3540u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E3540 raw=0x7661656C");
label_4e3544:
    // 0x4e3544: 0x63615f65  daddi       $at, $k1, 0x5F65
    ctx->pc = 0x4e3544u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)24421; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_4e3548:
    // 0x4e3548: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x4e3548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e354c:
    // 0x4e354c: 0x0  nop
    ctx->pc = 0x4e354cu;
    // NOP
label_4e3550:
    // 0x4e3550: 0x0  nop
    ctx->pc = 0x4e3550u;
    // NOP
label_4e3554:
    // 0x4e3554: 0x0  nop
    ctx->pc = 0x4e3554u;
    // NOP
label_4e3558:
    // 0x4e3558: 0x0  nop
    ctx->pc = 0x4e3558u;
    // NOP
label_4e355c:
    // 0x4e355c: 0x0  nop
    ctx->pc = 0x4e355cu;
    // NOP
label_4e3560:
    // 0x4e3560: 0x5f6e7462  .word       0x5F6E7462                   # bgtzl       $k1, . + 4 + (0x7462 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e3564:
    if (ctx->pc == 0x4E3564u) {
        ctx->pc = 0x4E3564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3560u;
        // 0x4e3564: 0x61757173  daddi       $s5, $t3, 0x7173 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29043; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3568u;
        goto label_4e3568;
    }
    ctx->pc = 0x4E3560u;
    {
        const bool branch_taken_0x4e3560 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3560) {
            ctx->pc = 0x4E3564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3560u;
            // 0x4e3564: 0x61757173  daddi       $s5, $t3, 0x7173 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29043; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5006ECu;
            return;
        }
    }
    ctx->pc = 0x4E3568u;
label_4e3568:
    // 0x4e3568: 0x6572  tlt         $zero, $zero, 405
    ctx->pc = 0x4e3568u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e356c:
    // 0x4e356c: 0x0  nop
    ctx->pc = 0x4e356cu;
    // NOP
label_4e3570:
    // 0x4e3570: 0x0  nop
    ctx->pc = 0x4e3570u;
    // NOP
label_4e3574:
    // 0x4e3574: 0x0  nop
    ctx->pc = 0x4e3574u;
    // NOP
label_4e3578:
    // 0x4e3578: 0x0  nop
    ctx->pc = 0x4e3578u;
    // NOP
label_4e357c:
    // 0x4e357c: 0x0  nop
    ctx->pc = 0x4e357cu;
    // NOP
label_4e3580:
    // 0x4e3580: 0x5f6e7462  .word       0x5F6E7462                   # bgtzl       $k1, . + 4 + (0x7462 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e3584:
    if (ctx->pc == 0x4E3584u) {
        ctx->pc = 0x4E3584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3580u;
        // 0x4e3584: 0x72617473  .word       0x72617473                   # INVALID     $s3, $at, 0x7473 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
        throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x4E3584 raw=0x72617473");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3588u;
        goto label_4e3588;
    }
    ctx->pc = 0x4E3580u;
    {
        const bool branch_taken_0x4e3580 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3580) {
            ctx->pc = 0x4E3584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3580u;
            // 0x4e3584: 0x72617473  .word       0x72617473                   # INVALID     $s3, $at, 0x7473 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x4E3584 raw=0x72617473");
            ctx->in_delay_slot = false;
            ctx->pc = 0x50070Cu;
            return;
        }
    }
    ctx->pc = 0x4E3588u;
label_4e3588:
    // 0x4e3588: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x4e3588u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e358c:
    // 0x4e358c: 0x0  nop
    ctx->pc = 0x4e358cu;
    // NOP
label_4e3590:
    // 0x4e3590: 0x0  nop
    ctx->pc = 0x4e3590u;
    // NOP
label_4e3594:
    // 0x4e3594: 0x0  nop
    ctx->pc = 0x4e3594u;
    // NOP
label_4e3598:
    // 0x4e3598: 0x0  nop
    ctx->pc = 0x4e3598u;
    // NOP
label_4e359c:
    // 0x4e359c: 0x0  nop
    ctx->pc = 0x4e359cu;
    // NOP
label_4e35a0:
    // 0x4e35a0: 0x5f6c6572  .word       0x5F6C6572                   # bgtzl       $k1, . + 4 + (0x6572 << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_4e35a4:
    if (ctx->pc == 0x4E35A4u) {
        ctx->pc = 0x4E35A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E35A0u;
        // 0x4e35a4: 0x69746361  ldl         $s4, 0x6361($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E35A8u;
        goto label_4e35a8;
    }
    ctx->pc = 0x4E35A0u;
    {
        const bool branch_taken_0x4e35a0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e35a0) {
            ctx->pc = 0x4E35A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E35A0u;
            // 0x4e35a4: 0x69746361  ldl         $s4, 0x6361($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FCB6Cu;
            return;
        }
    }
    ctx->pc = 0x4E35A8u;
label_4e35a8:
    // 0x4e35a8: 0x6e6f  .word       0x00006E6F                   # dsubu       $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e35a8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_4e35ac:
    // 0x4e35ac: 0x0  nop
    ctx->pc = 0x4e35acu;
    // NOP
label_4e35b0:
    // 0x4e35b0: 0x0  nop
    ctx->pc = 0x4e35b0u;
    // NOP
label_4e35b4:
    // 0x4e35b4: 0x0  nop
    ctx->pc = 0x4e35b4u;
    // NOP
label_4e35b8:
    // 0x4e35b8: 0x0  nop
    ctx->pc = 0x4e35b8u;
    // NOP
label_4e35bc:
    // 0x4e35bc: 0x0  nop
    ctx->pc = 0x4e35bcu;
    // NOP
label_4e35c0:
    // 0x4e35c0: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e35c0u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_4e35c4:
    // 0x4e35c4: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e35c4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_4e35c8:
    // 0x4e35c8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e35c8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_4e35cc:
    // 0x4e35cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e35ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_4e35d0:
    // 0x4e35d0: 0x5f6e7462  .word       0x5F6E7462                   # bgtzl       $k1, . + 4 + (0x7462 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e35d4:
    if (ctx->pc == 0x4E35D4u) {
        ctx->pc = 0x4E35D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E35D0u;
        // 0x4e35d4: 0x61697274  daddi       $t1, $t3, 0x7274 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29300; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E35D8u;
        goto label_4e35d8;
    }
    ctx->pc = 0x4E35D0u;
    {
        const bool branch_taken_0x4e35d0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e35d0) {
            ctx->pc = 0x4E35D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E35D0u;
            // 0x4e35d4: 0x61697274  daddi       $t1, $t3, 0x7274 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29300; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x50075Cu;
            return;
        }
    }
    ctx->pc = 0x4E35D8u;
label_4e35d8:
    // 0x4e35d8: 0x656c676e  daddiu      $t4, $t3, 0x676E
    ctx->pc = 0x4e35d8u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26478);
label_4e35dc:
    // 0x4e35dc: 0x0  nop
    ctx->pc = 0x4e35dcu;
    // NOP
label_4e35e0:
    // 0x4e35e0: 0x5f6e7462  .word       0x5F6E7462                   # bgtzl       $k1, . + 4 + (0x7462 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e35e4:
    if (ctx->pc == 0x4E35E4u) {
        ctx->pc = 0x4E35E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E35E0u;
        // 0x4e35e4: 0x61757173  daddi       $s5, $t3, 0x7173 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29043; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E35E8u;
        goto label_4e35e8;
    }
    ctx->pc = 0x4E35E0u;
    {
        const bool branch_taken_0x4e35e0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e35e0) {
            ctx->pc = 0x4E35E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E35E0u;
            // 0x4e35e4: 0x61757173  daddi       $s5, $t3, 0x7173 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29043; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x50076Cu;
            return;
        }
    }
    ctx->pc = 0x4E35E8u;
label_4e35e8:
    // 0x4e35e8: 0x6572  tlt         $zero, $zero, 405
    ctx->pc = 0x4e35e8u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e35ec:
    // 0x4e35ec: 0x0  nop
    ctx->pc = 0x4e35ecu;
    // NOP
label_4e35f0:
    // 0x4e35f0: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e35f4:
    if (ctx->pc == 0x4E35F4u) {
        ctx->pc = 0x4E35F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E35F0u;
        // 0x4e35f4: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E35F8u;
        goto label_4e35f8;
    }
    ctx->pc = 0x4E35F0u;
    {
        const bool branch_taken_0x4e35f0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e35f0) {
            ctx->pc = 0x4E35F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E35F0u;
            // 0x4e35f4: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
            { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FEB98u;
            return;
        }
    }
    ctx->pc = 0x4E35F8u;
label_4e35f8:
    // 0x4e35f8: 0x4e41505f  .word       0x4E41505F                   # INVALID     $s2, $at, 0x505F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e35f8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E35F8 raw=0x4E41505F");
label_4e35fc:
    // 0x4e35fc: 0x5f4c454e  .word       0x5F4C454E                   # bgtzl       $k0, . + 4 + (0x454E << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_4e3600:
    if (ctx->pc == 0x4E3600u) {
        ctx->pc = 0x4E3600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E35FCu;
        // 0x4e3600: 0x445f53  .word       0x00445F53                   # mtlo        $v0 # 00045F40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->lo = GPR_U64(ctx, 2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3604u;
        goto label_4e3604;
    }
    ctx->pc = 0x4E35FCu;
    {
        const bool branch_taken_0x4e35fc = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e35fc) {
            ctx->pc = 0x4E3600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E35FCu;
            // 0x4e3600: 0x445f53  .word       0x00445F53                   # mtlo        $v0 # 00045F40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            ctx->lo = GPR_U64(ctx, 2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F4B38u;
            return;
        }
    }
    ctx->pc = 0x4E3604u;
label_4e3604:
    // 0x4e3604: 0x0  nop
    ctx->pc = 0x4e3604u;
    // NOP
label_4e3608:
    // 0x4e3608: 0x0  nop
    ctx->pc = 0x4e3608u;
    // NOP
label_4e360c:
    // 0x4e360c: 0x0  nop
    ctx->pc = 0x4e360cu;
    // NOP
label_4e3610:
    // 0x4e3610: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e3614:
    if (ctx->pc == 0x4E3614u) {
        ctx->pc = 0x4E3614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3610u;
        // 0x4e3614: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3618u;
        goto label_4e3618;
    }
    ctx->pc = 0x4E3610u;
    {
        const bool branch_taken_0x4e3610 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3610) {
            ctx->pc = 0x4E3614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3610u;
            // 0x4e3614: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
            { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FEBB8u;
            return;
        }
    }
    ctx->pc = 0x4E3618u;
label_4e3618:
    // 0x4e3618: 0x4e41505f  .word       0x4E41505F                   # INVALID     $s2, $at, 0x505F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3618u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E3618 raw=0x4E41505F");
label_4e361c:
    // 0x4e361c: 0x5f4c454e  .word       0x5F4C454E                   # bgtzl       $k0, . + 4 + (0x454E << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_4e3620:
    if (ctx->pc == 0x4E3620u) {
        ctx->pc = 0x4E3620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E361Cu;
        // 0x4e3620: 0x4d5f53  .word       0x004D5F53                   # mtlo        $v0 # 000D5F40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->lo = GPR_U64(ctx, 2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3624u;
        goto label_4e3624;
    }
    ctx->pc = 0x4E361Cu;
    {
        const bool branch_taken_0x4e361c = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e361c) {
            ctx->pc = 0x4E3620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E361Cu;
            // 0x4e3620: 0x4d5f53  .word       0x004D5F53                   # mtlo        $v0 # 000D5F40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            ctx->lo = GPR_U64(ctx, 2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F4B58u;
            return;
        }
    }
    ctx->pc = 0x4E3624u;
label_4e3624:
    // 0x4e3624: 0x0  nop
    ctx->pc = 0x4e3624u;
    // NOP
label_4e3628:
    // 0x4e3628: 0x0  nop
    ctx->pc = 0x4e3628u;
    // NOP
label_4e362c:
    // 0x4e362c: 0x0  nop
    ctx->pc = 0x4e362cu;
    // NOP
label_4e3630:
    // 0x4e3630: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e3634:
    if (ctx->pc == 0x4E3634u) {
        ctx->pc = 0x4E3634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3630u;
        // 0x4e3634: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3638u;
        goto label_4e3638;
    }
    ctx->pc = 0x4E3630u;
    {
        const bool branch_taken_0x4e3630 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3630) {
            ctx->pc = 0x4E3634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3630u;
            // 0x4e3634: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
            { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FEBD8u;
            return;
        }
    }
    ctx->pc = 0x4E3638u;
label_4e3638:
    // 0x4e3638: 0x4e41505f  .word       0x4E41505F                   # INVALID     $s2, $at, 0x505F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3638u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E3638 raw=0x4E41505F");
label_4e363c:
    // 0x4e363c: 0x5f4c454e  .word       0x5F4C454E                   # bgtzl       $k0, . + 4 + (0x454E << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_4e3640:
    if (ctx->pc == 0x4E3640u) {
        ctx->pc = 0x4E3640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E363Cu;
        // 0x4e3640: 0x755f73  tltu        $v1, $s5, 381 (Delay Slot)
        if (GPR_U64(ctx, 3) < GPR_U64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3644u;
        goto label_4e3644;
    }
    ctx->pc = 0x4E363Cu;
    {
        const bool branch_taken_0x4e363c = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e363c) {
            ctx->pc = 0x4E3640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E363Cu;
            // 0x4e3640: 0x755f73  tltu        $v1, $s5, 381 (Delay Slot)
            if (GPR_U64(ctx, 3) < GPR_U64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F4B78u;
            return;
        }
    }
    ctx->pc = 0x4E3644u;
label_4e3644:
    // 0x4e3644: 0x0  nop
    ctx->pc = 0x4e3644u;
    // NOP
label_4e3648:
    // 0x4e3648: 0x0  nop
    ctx->pc = 0x4e3648u;
    // NOP
label_4e364c:
    // 0x4e364c: 0x0  nop
    ctx->pc = 0x4e364cu;
    // NOP
label_4e3650:
    // 0x4e3650: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e3654:
    if (ctx->pc == 0x4E3654u) {
        ctx->pc = 0x4E3654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3650u;
        // 0x4e3654: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3658u;
        goto label_4e3658;
    }
    ctx->pc = 0x4E3650u;
    {
        const bool branch_taken_0x4e3650 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3650) {
            ctx->pc = 0x4E3654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3650u;
            // 0x4e3654: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
            { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FEBF8u;
            return;
        }
    }
    ctx->pc = 0x4E3658u;
label_4e3658:
    // 0x4e3658: 0x4e41505f  .word       0x4E41505F                   # INVALID     $s2, $at, 0x505F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3658u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E3658 raw=0x4E41505F");
label_4e365c:
    // 0x4e365c: 0x5f4c454e  .word       0x5F4C454E                   # bgtzl       $k0, . + 4 + (0x454E << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_4e3660:
    if (ctx->pc == 0x4E3660u) {
        ctx->pc = 0x4E3660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E365Cu;
        // 0x4e3660: 0x645f6d  .word       0x00645F6D                   # daddu       $t3, $v1, $a0 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3664u;
        goto label_4e3664;
    }
    ctx->pc = 0x4E365Cu;
    {
        const bool branch_taken_0x4e365c = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e365c) {
            ctx->pc = 0x4E3660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E365Cu;
            // 0x4e3660: 0x645f6d  .word       0x00645F6D                   # daddu       $t3, $v1, $a0 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F4B98u;
            return;
        }
    }
    ctx->pc = 0x4E3664u;
label_4e3664:
    // 0x4e3664: 0x0  nop
    ctx->pc = 0x4e3664u;
    // NOP
label_4e3668:
    // 0x4e3668: 0x0  nop
    ctx->pc = 0x4e3668u;
    // NOP
label_4e366c:
    // 0x4e366c: 0x0  nop
    ctx->pc = 0x4e366cu;
    // NOP
label_4e3670:
    // 0x4e3670: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e3674:
    if (ctx->pc == 0x4E3674u) {
        ctx->pc = 0x4E3674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3670u;
        // 0x4e3674: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3678u;
        goto label_4e3678;
    }
    ctx->pc = 0x4E3670u;
    {
        const bool branch_taken_0x4e3670 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3670) {
            ctx->pc = 0x4E3674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3670u;
            // 0x4e3674: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
            { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FEC18u;
            return;
        }
    }
    ctx->pc = 0x4E3678u;
label_4e3678:
    // 0x4e3678: 0x4e41505f  .word       0x4E41505F                   # INVALID     $s2, $at, 0x505F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3678u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E3678 raw=0x4E41505F");
label_4e367c:
    // 0x4e367c: 0x5f4c454e  .word       0x5F4C454E                   # bgtzl       $k0, . + 4 + (0x454E << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_4e3680:
    if (ctx->pc == 0x4E3680u) {
        ctx->pc = 0x4E3680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E367Cu;
        // 0x4e3680: 0x6d5f6d  .word       0x006D5F6D                   # daddu       $t3, $v1, $t5 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3684u;
        goto label_4e3684;
    }
    ctx->pc = 0x4E367Cu;
    {
        const bool branch_taken_0x4e367c = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e367c) {
            ctx->pc = 0x4E3680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E367Cu;
            // 0x4e3680: 0x6d5f6d  .word       0x006D5F6D                   # daddu       $t3, $v1, $t5 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 13));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F4BB8u;
            return;
        }
    }
    ctx->pc = 0x4E3684u;
label_4e3684:
    // 0x4e3684: 0x0  nop
    ctx->pc = 0x4e3684u;
    // NOP
label_4e3688:
    // 0x4e3688: 0x0  nop
    ctx->pc = 0x4e3688u;
    // NOP
label_4e368c:
    // 0x4e368c: 0x0  nop
    ctx->pc = 0x4e368cu;
    // NOP
label_4e3690:
    // 0x4e3690: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e3694:
    if (ctx->pc == 0x4E3694u) {
        ctx->pc = 0x4E3694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3690u;
        // 0x4e3694: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3698u;
        goto label_4e3698;
    }
    ctx->pc = 0x4E3690u;
    {
        const bool branch_taken_0x4e3690 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3690) {
            ctx->pc = 0x4E3694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3690u;
            // 0x4e3694: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
            { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FEC38u;
            return;
        }
    }
    ctx->pc = 0x4E3698u;
label_4e3698:
    // 0x4e3698: 0x4e41505f  .word       0x4E41505F                   # INVALID     $s2, $at, 0x505F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3698u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E3698 raw=0x4E41505F");
label_4e369c:
    // 0x4e369c: 0x5f4c454e  .word       0x5F4C454E                   # bgtzl       $k0, . + 4 + (0x454E << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_4e36a0:
    if (ctx->pc == 0x4E36A0u) {
        ctx->pc = 0x4E36A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E369Cu;
        // 0x4e36a0: 0x755f6d  .word       0x00755F6D                   # daddu       $t3, $v1, $s5 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E36A4u;
        goto label_4e36a4;
    }
    ctx->pc = 0x4E369Cu;
    {
        const bool branch_taken_0x4e369c = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e369c) {
            ctx->pc = 0x4E36A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E369Cu;
            // 0x4e36a0: 0x755f6d  .word       0x00755F6D                   # daddu       $t3, $v1, $s5 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F4BD8u;
            return;
        }
    }
    ctx->pc = 0x4E36A4u;
label_4e36a4:
    // 0x4e36a4: 0x0  nop
    ctx->pc = 0x4e36a4u;
    // NOP
label_4e36a8:
    // 0x4e36a8: 0x0  nop
    ctx->pc = 0x4e36a8u;
    // NOP
label_4e36ac:
    // 0x4e36ac: 0x0  nop
    ctx->pc = 0x4e36acu;
    // NOP
label_4e36b0:
    // 0x4e36b0: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e36b4:
    if (ctx->pc == 0x4E36B4u) {
        ctx->pc = 0x4E36B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E36B0u;
        // 0x4e36b4: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E36B8u;
        goto label_4e36b8;
    }
    ctx->pc = 0x4E36B0u;
    {
        const bool branch_taken_0x4e36b0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e36b0) {
            ctx->pc = 0x4E36B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E36B0u;
            // 0x4e36b4: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
            { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FEC58u;
            return;
        }
    }
    ctx->pc = 0x4E36B8u;
label_4e36b8:
    // 0x4e36b8: 0x4e41505f  .word       0x4E41505F                   # INVALID     $s2, $at, 0x505F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e36b8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E36B8 raw=0x4E41505F");
label_4e36bc:
    // 0x4e36bc: 0x5f4c454e  .word       0x5F4C454E                   # bgtzl       $k0, . + 4 + (0x454E << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_4e36c0:
    if (ctx->pc == 0x4E36C0u) {
        ctx->pc = 0x4E36C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E36BCu;
        // 0x4e36c0: 0x645f65  .word       0x00645F65                   # or          $t3, $v1, $a0 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E36C4u;
        goto label_4e36c4;
    }
    ctx->pc = 0x4E36BCu;
    {
        const bool branch_taken_0x4e36bc = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e36bc) {
            ctx->pc = 0x4E36C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E36BCu;
            // 0x4e36c0: 0x645f65  .word       0x00645F65                   # or          $t3, $v1, $a0 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F4BF8u;
            return;
        }
    }
    ctx->pc = 0x4E36C4u;
label_4e36c4:
    // 0x4e36c4: 0x0  nop
    ctx->pc = 0x4e36c4u;
    // NOP
label_4e36c8:
    // 0x4e36c8: 0x0  nop
    ctx->pc = 0x4e36c8u;
    // NOP
label_4e36cc:
    // 0x4e36cc: 0x0  nop
    ctx->pc = 0x4e36ccu;
    // NOP
label_4e36d0:
    // 0x4e36d0: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e36d4:
    if (ctx->pc == 0x4E36D4u) {
        ctx->pc = 0x4E36D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E36D0u;
        // 0x4e36d4: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E36D8u;
        goto label_4e36d8;
    }
    ctx->pc = 0x4E36D0u;
    {
        const bool branch_taken_0x4e36d0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e36d0) {
            ctx->pc = 0x4E36D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E36D0u;
            // 0x4e36d4: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
            { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FEC78u;
            return;
        }
    }
    ctx->pc = 0x4E36D8u;
label_4e36d8:
    // 0x4e36d8: 0x4e41505f  .word       0x4E41505F                   # INVALID     $s2, $at, 0x505F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e36d8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E36D8 raw=0x4E41505F");
label_4e36dc:
    // 0x4e36dc: 0x5f4c454e  .word       0x5F4C454E                   # bgtzl       $k0, . + 4 + (0x454E << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_4e36e0:
    if (ctx->pc == 0x4E36E0u) {
        ctx->pc = 0x4E36E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E36DCu;
        // 0x4e36e0: 0x6d5f65  .word       0x006D5F65                   # or          $t3, $v1, $t5 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E36E4u;
        goto label_4e36e4;
    }
    ctx->pc = 0x4E36DCu;
    {
        const bool branch_taken_0x4e36dc = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e36dc) {
            ctx->pc = 0x4E36E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E36DCu;
            // 0x4e36e0: 0x6d5f65  .word       0x006D5F65                   # or          $t3, $v1, $t5 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F4C18u;
            return;
        }
    }
    ctx->pc = 0x4E36E4u;
label_4e36e4:
    // 0x4e36e4: 0x0  nop
    ctx->pc = 0x4e36e4u;
    // NOP
label_4e36e8:
    // 0x4e36e8: 0x0  nop
    ctx->pc = 0x4e36e8u;
    // NOP
label_4e36ec:
    // 0x4e36ec: 0x0  nop
    ctx->pc = 0x4e36ecu;
    // NOP
label_4e36f0:
    // 0x4e36f0: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e36f4:
    if (ctx->pc == 0x4E36F4u) {
        ctx->pc = 0x4E36F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E36F0u;
        // 0x4e36f4: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E36F8u;
        goto label_4e36f8;
    }
    ctx->pc = 0x4E36F0u;
    {
        const bool branch_taken_0x4e36f0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e36f0) {
            ctx->pc = 0x4E36F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E36F0u;
            // 0x4e36f4: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
            { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FEC98u;
            return;
        }
    }
    ctx->pc = 0x4E36F8u;
label_4e36f8:
    // 0x4e36f8: 0x4e41505f  .word       0x4E41505F                   # INVALID     $s2, $at, 0x505F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e36f8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E36F8 raw=0x4E41505F");
label_4e36fc:
    // 0x4e36fc: 0x5f4c454e  .word       0x5F4C454E                   # bgtzl       $k0, . + 4 + (0x454E << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_4e3700:
    if (ctx->pc == 0x4E3700u) {
        ctx->pc = 0x4E3700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E36FCu;
        // 0x4e3700: 0x755f65  .word       0x00755F65                   # or          $t3, $v1, $s5 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3704u;
        goto label_4e3704;
    }
    ctx->pc = 0x4E36FCu;
    {
        const bool branch_taken_0x4e36fc = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e36fc) {
            ctx->pc = 0x4E3700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E36FCu;
            // 0x4e3700: 0x755f65  .word       0x00755F65                   # or          $t3, $v1, $s5 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F4C38u;
            return;
        }
    }
    ctx->pc = 0x4E3704u;
label_4e3704:
    // 0x4e3704: 0x0  nop
    ctx->pc = 0x4e3704u;
    // NOP
label_4e3708:
    // 0x4e3708: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e370c:
    if (ctx->pc == 0x4E370Cu) {
        ctx->pc = 0x4E370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3708u;
        // 0x4e370c: 0x425f324c  .word       0x425F324C                   # INVALID     $s2, $ra, 0x324C # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x4E370C raw=0x425F324C");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3710u;
        goto label_4e3710;
    }
    ctx->pc = 0x4E3708u;
    {
        const bool branch_taken_0x4e3708 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3708) {
            ctx->pc = 0x4E370Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3708u;
            // 0x4e370c: 0x425f324c  .word       0x425F324C                   # INVALID     $s2, $ra, 0x324C # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x4E370C raw=0x425F324C");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FECB0u;
            return;
        }
    }
    ctx->pc = 0x4E3710u;
label_4e3710:
    // 0x4e3710: 0x4f545455  .word       0x4F545455                   # INVALID     $k0, $s4, 0x5455 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3710u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E3710 raw=0x4F545455");
label_4e3714:
    // 0x4e3714: 0x4e  .word       0x0000004E                   # INVALID     $zero, $zero, 0x4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3714u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x4E3714 raw=0x0000004E");
label_4e3718:
    // 0x4e3718: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e371c:
    if (ctx->pc == 0x4E371Cu) {
        ctx->pc = 0x4E371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3718u;
        // 0x4e371c: 0x425f3252  .word       0x425F3252                   # INVALID     $s2, $ra, 0x3252 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x4E371C raw=0x425F3252");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3720u;
        goto label_4e3720;
    }
    ctx->pc = 0x4E3718u;
    {
        const bool branch_taken_0x4e3718 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3718) {
            ctx->pc = 0x4E371Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3718u;
            // 0x4e371c: 0x425f3252  .word       0x425F3252                   # INVALID     $s2, $ra, 0x3252 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x4E371C raw=0x425F3252");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FECC0u;
            return;
        }
    }
    ctx->pc = 0x4E3720u;
label_4e3720:
    // 0x4e3720: 0x4f545455  .word       0x4F545455                   # INVALID     $k0, $s4, 0x5455 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3720u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E3720 raw=0x4F545455");
label_4e3724:
    // 0x4e3724: 0x4e  .word       0x0000004E                   # INVALID     $zero, $zero, 0x4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3724u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x4E3724 raw=0x0000004E");
label_4e3728:
    // 0x4e3728: 0x0  nop
    ctx->pc = 0x4e3728u;
    // NOP
label_4e372c:
    // 0x4e372c: 0x0  nop
    ctx->pc = 0x4e372cu;
    // NOP
label_4e3730:
    // 0x4e3730: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e3734:
    if (ctx->pc == 0x4E3734u) {
        ctx->pc = 0x4E3734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3730u;
        // 0x4e3734: 0x425f324c  .word       0x425F324C                   # INVALID     $s2, $ra, 0x324C # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x4E3734 raw=0x425F324C");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3738u;
        goto label_4e3738;
    }
    ctx->pc = 0x4E3730u;
    {
        const bool branch_taken_0x4e3730 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3730) {
            ctx->pc = 0x4E3734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3730u;
            // 0x4e3734: 0x425f324c  .word       0x425F324C                   # INVALID     $s2, $ra, 0x324C # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x4E3734 raw=0x425F324C");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FECD8u;
            return;
        }
    }
    ctx->pc = 0x4E3738u;
label_4e3738:
    // 0x4e3738: 0x4f545455  .word       0x4F545455                   # INVALID     $k0, $s4, 0x5455 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3738u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E3738 raw=0x4F545455");
label_4e373c:
    // 0x4e373c: 0x52505f4e  beql        $s2, $s0, . + 4 + (0x5F4E << 2)
label_4e3740:
    if (ctx->pc == 0x4E3740u) {
        ctx->pc = 0x4E3740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E373Cu;
        // 0x4e3740: 0x45535345  .word       0x45535345                   # INVALID     $t2, $s3, 0x5345 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
        throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x5 at 0x4E3740 raw=0x45535345");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3744u;
        goto label_4e3744;
    }
    ctx->pc = 0x4E373Cu;
    {
        const bool branch_taken_0x4e373c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        if (branch_taken_0x4e373c) {
            ctx->pc = 0x4E3740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E373Cu;
            // 0x4e3740: 0x45535345  .word       0x45535345                   # INVALID     $t2, $s3, 0x5345 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x5 at 0x4E3740 raw=0x45535345");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FB478u;
            return;
        }
    }
    ctx->pc = 0x4E3744u;
label_4e3744:
    // 0x4e3744: 0x44  .word       0x00000044                   # sllv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3744u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_4e3748:
    // 0x4e3748: 0x0  nop
    ctx->pc = 0x4e3748u;
    // NOP
label_4e374c:
    // 0x4e374c: 0x0  nop
    ctx->pc = 0x4e374cu;
    // NOP
label_4e3750:
    // 0x4e3750: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e3754:
    if (ctx->pc == 0x4E3754u) {
        ctx->pc = 0x4E3754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3750u;
        // 0x4e3754: 0x425f3252  .word       0x425F3252                   # INVALID     $s2, $ra, 0x3252 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x4E3754 raw=0x425F3252");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3758u;
        goto label_4e3758;
    }
    ctx->pc = 0x4E3750u;
    {
        const bool branch_taken_0x4e3750 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3750) {
            ctx->pc = 0x4E3754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3750u;
            // 0x4e3754: 0x425f3252  .word       0x425F3252                   # INVALID     $s2, $ra, 0x3252 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x4E3754 raw=0x425F3252");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FECF8u;
            return;
        }
    }
    ctx->pc = 0x4E3758u;
label_4e3758:
    // 0x4e3758: 0x4f545455  .word       0x4F545455                   # INVALID     $k0, $s4, 0x5455 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3758u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E3758 raw=0x4F545455");
label_4e375c:
    // 0x4e375c: 0x52505f4e  beql        $s2, $s0, . + 4 + (0x5F4E << 2)
label_4e3760:
    if (ctx->pc == 0x4E3760u) {
        ctx->pc = 0x4E3760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E375Cu;
        // 0x4e3760: 0x45535345  .word       0x45535345                   # INVALID     $t2, $s3, 0x5345 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
        throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x5 at 0x4E3760 raw=0x45535345");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3764u;
        goto label_4e3764;
    }
    ctx->pc = 0x4E375Cu;
    {
        const bool branch_taken_0x4e375c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        if (branch_taken_0x4e375c) {
            ctx->pc = 0x4E3760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E375Cu;
            // 0x4e3760: 0x45535345  .word       0x45535345                   # INVALID     $t2, $s3, 0x5345 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x5 at 0x4E3760 raw=0x45535345");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FB498u;
            return;
        }
    }
    ctx->pc = 0x4E3764u;
label_4e3764:
    // 0x4e3764: 0x44  .word       0x00000044                   # sllv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3764u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_4e3768:
    // 0x4e3768: 0x0  nop
    ctx->pc = 0x4e3768u;
    // NOP
label_4e376c:
    // 0x4e376c: 0x0  nop
    ctx->pc = 0x4e376cu;
    // NOP
label_4e3770:
    // 0x4e3770: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e3774:
    if (ctx->pc == 0x4E3774u) {
        ctx->pc = 0x4E3774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3770u;
        // 0x4e3774: 0x425f324c  .word       0x425F324C                   # INVALID     $s2, $ra, 0x324C # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x4E3774 raw=0x425F324C");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3778u;
        goto label_4e3778;
    }
    ctx->pc = 0x4E3770u;
    {
        const bool branch_taken_0x4e3770 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3770) {
            ctx->pc = 0x4E3774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3770u;
            // 0x4e3774: 0x425f324c  .word       0x425F324C                   # INVALID     $s2, $ra, 0x324C # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x4E3774 raw=0x425F324C");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FED18u;
            return;
        }
    }
    ctx->pc = 0x4E3778u;
label_4e3778:
    // 0x4e3778: 0x4f545455  .word       0x4F545455                   # INVALID     $k0, $s4, 0x5455 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3778u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E3778 raw=0x4F545455");
label_4e377c:
    // 0x4e377c: 0x494d5f4e  .word       0x494D5F4E                   # INVALID     $t2, $t5, 0x5F4E # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x4e377cu;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x4E377C raw=0x494D5F4E");
label_4e3780:
    // 0x4e3780: 0x44455353  .word       0x44455353                   # cfc1        $a1, $10 # 00000353 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e3780u;
    SET_GPR_U32(ctx, 5, 0); // Unimplemented FCR10
label_4e3784:
    // 0x4e3784: 0x0  nop
    ctx->pc = 0x4e3784u;
    // NOP
label_4e3788:
    // 0x4e3788: 0x0  nop
    ctx->pc = 0x4e3788u;
    // NOP
label_4e378c:
    // 0x4e378c: 0x0  nop
    ctx->pc = 0x4e378cu;
    // NOP
label_4e3790:
    // 0x4e3790: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e3794:
    if (ctx->pc == 0x4E3794u) {
        ctx->pc = 0x4E3794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3790u;
        // 0x4e3794: 0x425f3252  .word       0x425F3252                   # INVALID     $s2, $ra, 0x3252 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x4E3794 raw=0x425F3252");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3798u;
        goto label_4e3798;
    }
    ctx->pc = 0x4E3790u;
    {
        const bool branch_taken_0x4e3790 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3790) {
            ctx->pc = 0x4E3794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3790u;
            // 0x4e3794: 0x425f3252  .word       0x425F3252                   # INVALID     $s2, $ra, 0x3252 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x4E3794 raw=0x425F3252");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FED38u;
            return;
        }
    }
    ctx->pc = 0x4E3798u;
label_4e3798:
    // 0x4e3798: 0x4f545455  .word       0x4F545455                   # INVALID     $k0, $s4, 0x5455 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3798u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E3798 raw=0x4F545455");
label_4e379c:
    // 0x4e379c: 0x494d5f4e  .word       0x494D5F4E                   # INVALID     $t2, $t5, 0x5F4E # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x4e379cu;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x4E379C raw=0x494D5F4E");
label_4e37a0:
    // 0x4e37a0: 0x44455353  .word       0x44455353                   # cfc1        $a1, $10 # 00000353 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e37a0u;
    SET_GPR_U32(ctx, 5, 0); // Unimplemented FCR10
label_4e37a4:
    // 0x4e37a4: 0x0  nop
    ctx->pc = 0x4e37a4u;
    // NOP
label_4e37a8:
    // 0x4e37a8: 0x0  nop
    ctx->pc = 0x4e37a8u;
    // NOP
label_4e37ac:
    // 0x4e37ac: 0x0  nop
    ctx->pc = 0x4e37acu;
    // NOP
label_4e37b0:
    // 0x4e37b0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e37b0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e37b4:
    // 0x4e37b4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e37b4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e37b8:
    // 0x4e37b8: 0x6e61705c  ldr         $at, 0x705C($s3)
    ctx->pc = 0x4e37b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28764); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_4e37bc:
    // 0x4e37bc: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_4e37c0:
    if (ctx->pc == 0x4E37C0u) {
        ctx->pc = 0x4E37C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E37BCu;
        // 0x4e37c0: 0x5f6c6e70  .word       0x5F6C6E70                   # bgtzl       $k1, . + 4 + (0x6E70 << 2) # 000C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x4E37C0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E37C4u;
        goto label_4e37c4;
    }
    ctx->pc = 0x4E37BCu;
    {
        const bool branch_taken_0x4e37bc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e37bc) {
            ctx->pc = 0x4E37C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E37BCu;
            // 0x4e37c0: 0x5f6c6e70  .word       0x5F6C6E70                   # bgtzl       $k1, . + 4 + (0x6E70 << 2) # 000C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E37C0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE954u;
            return;
        }
    }
    ctx->pc = 0x4E37C4u;
label_4e37c4:
    // 0x4e37c4: 0x62746361  daddi       $s4, $s3, 0x6361
    ctx->pc = 0x4e37c4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)25441; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e37c8:
    // 0x4e37c8: 0x7478742e  .word       0x7478742E                   # INVALID     $v1, $t8, 0x742E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e37c8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E37C8 raw=0x7478742E");
label_4e37cc:
    // 0x4e37cc: 0x0  nop
    ctx->pc = 0x4e37ccu;
    // NOP
label_4e37d0:
    // 0x4e37d0: 0x5f6e7462  .word       0x5F6E7462                   # bgtzl       $k1, . + 4 + (0x7462 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e37d4:
    if (ctx->pc == 0x4E37D4u) {
        ctx->pc = 0x4E37D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E37D0u;
        // 0x4e37d4: 0x67623030  daddiu      $v0, $k1, 0x3030 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)12336);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E37D8u;
        goto label_4e37d8;
    }
    ctx->pc = 0x4E37D0u;
    {
        const bool branch_taken_0x4e37d0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e37d0) {
            ctx->pc = 0x4E37D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E37D0u;
            // 0x4e37d4: 0x67623030  daddiu      $v0, $k1, 0x3030 (Delay Slot)
            SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)12336);
            ctx->in_delay_slot = false;
            ctx->pc = 0x50095Cu;
            return;
        }
    }
    ctx->pc = 0x4E37D8u;
label_4e37d8:
    // 0x4e37d8: 0x0  nop
    ctx->pc = 0x4e37d8u;
    // NOP
label_4e37dc:
    // 0x4e37dc: 0x0  nop
    ctx->pc = 0x4e37dcu;
    // NOP
label_4e37e0:
    // 0x4e37e0: 0x5f6e7462  .word       0x5F6E7462                   # bgtzl       $k1, . + 4 + (0x7462 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e37e4:
    if (ctx->pc == 0x4E37E4u) {
        ctx->pc = 0x4E37E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E37E0u;
        // 0x4e37e4: 0x67623130  daddiu      $v0, $k1, 0x3130 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)12592);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E37E8u;
        goto label_4e37e8;
    }
    ctx->pc = 0x4E37E0u;
    {
        const bool branch_taken_0x4e37e0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e37e0) {
            ctx->pc = 0x4E37E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E37E0u;
            // 0x4e37e4: 0x67623130  daddiu      $v0, $k1, 0x3130 (Delay Slot)
            SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)12592);
            ctx->in_delay_slot = false;
            ctx->pc = 0x50096Cu;
            return;
        }
    }
    ctx->pc = 0x4E37E8u;
label_4e37e8:
    // 0x4e37e8: 0x0  nop
    ctx->pc = 0x4e37e8u;
    // NOP
label_4e37ec:
    // 0x4e37ec: 0x0  nop
    ctx->pc = 0x4e37ecu;
    // NOP
label_4e37f0:
    // 0x4e37f0: 0x5f6e7462  .word       0x5F6E7462                   # bgtzl       $k1, . + 4 + (0x7462 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e37f4:
    if (ctx->pc == 0x4E37F4u) {
        ctx->pc = 0x4E37F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E37F0u;
        // 0x4e37f4: 0x67623230  daddiu      $v0, $k1, 0x3230 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)12848);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E37F8u;
        goto label_4e37f8;
    }
    ctx->pc = 0x4E37F0u;
    {
        const bool branch_taken_0x4e37f0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e37f0) {
            ctx->pc = 0x4E37F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E37F0u;
            // 0x4e37f4: 0x67623230  daddiu      $v0, $k1, 0x3230 (Delay Slot)
            SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)12848);
            ctx->in_delay_slot = false;
            ctx->pc = 0x50097Cu;
            return;
        }
    }
    ctx->pc = 0x4E37F8u;
label_4e37f8:
    // 0x4e37f8: 0x0  nop
    ctx->pc = 0x4e37f8u;
    // NOP
label_4e37fc:
    // 0x4e37fc: 0x0  nop
    ctx->pc = 0x4e37fcu;
    // NOP
label_4e3800:
    // 0x4e3800: 0x5f6e7462  .word       0x5F6E7462                   # bgtzl       $k1, . + 4 + (0x7462 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e3804:
    if (ctx->pc == 0x4E3804u) {
        ctx->pc = 0x4E3804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3800u;
        // 0x4e3804: 0x67623330  daddiu      $v0, $k1, 0x3330 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)13104);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3808u;
        goto label_4e3808;
    }
    ctx->pc = 0x4E3800u;
    {
        const bool branch_taken_0x4e3800 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3800) {
            ctx->pc = 0x4E3804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3800u;
            // 0x4e3804: 0x67623330  daddiu      $v0, $k1, 0x3330 (Delay Slot)
            SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)13104);
            ctx->in_delay_slot = false;
            ctx->pc = 0x50098Cu;
            return;
        }
    }
    ctx->pc = 0x4E3808u;
label_4e3808:
    // 0x4e3808: 0x0  nop
    ctx->pc = 0x4e3808u;
    // NOP
label_4e380c:
    // 0x4e380c: 0x0  nop
    ctx->pc = 0x4e380cu;
    // NOP
label_4e3810:
    // 0x4e3810: 0x5f6e7462  .word       0x5F6E7462                   # bgtzl       $k1, . + 4 + (0x7462 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e3814:
    if (ctx->pc == 0x4E3814u) {
        ctx->pc = 0x4E3814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3810u;
        // 0x4e3814: 0x67623030  daddiu      $v0, $k1, 0x3030 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)12336);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3818u;
        goto label_4e3818;
    }
    ctx->pc = 0x4E3810u;
    {
        const bool branch_taken_0x4e3810 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3810) {
            ctx->pc = 0x4E3814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3810u;
            // 0x4e3814: 0x67623030  daddiu      $v0, $k1, 0x3030 (Delay Slot)
            SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)12336);
            ctx->in_delay_slot = false;
            ctx->pc = 0x50099Cu;
            return;
        }
    }
    ctx->pc = 0x4E3818u;
label_4e3818:
    // 0x4e3818: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x4e3818u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e381c:
    // 0x4e381c: 0x0  nop
    ctx->pc = 0x4e381cu;
    // NOP
label_4e3820:
    // 0x4e3820: 0x5f6e7462  .word       0x5F6E7462                   # bgtzl       $k1, . + 4 + (0x7462 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e3824:
    if (ctx->pc == 0x4E3824u) {
        ctx->pc = 0x4E3824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3820u;
        // 0x4e3824: 0x67623130  daddiu      $v0, $k1, 0x3130 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)12592);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3828u;
        goto label_4e3828;
    }
    ctx->pc = 0x4E3820u;
    {
        const bool branch_taken_0x4e3820 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3820) {
            ctx->pc = 0x4E3824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3820u;
            // 0x4e3824: 0x67623130  daddiu      $v0, $k1, 0x3130 (Delay Slot)
            SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)12592);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5009ACu;
            return;
        }
    }
    ctx->pc = 0x4E3828u;
label_4e3828:
    // 0x4e3828: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x4e3828u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e382c:
    // 0x4e382c: 0x0  nop
    ctx->pc = 0x4e382cu;
    // NOP
label_4e3830:
    // 0x4e3830: 0x5f6e7462  .word       0x5F6E7462                   # bgtzl       $k1, . + 4 + (0x7462 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e3834:
    if (ctx->pc == 0x4E3834u) {
        ctx->pc = 0x4E3834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3830u;
        // 0x4e3834: 0x67623230  daddiu      $v0, $k1, 0x3230 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)12848);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3838u;
        goto label_4e3838;
    }
    ctx->pc = 0x4E3830u;
    {
        const bool branch_taken_0x4e3830 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3830) {
            ctx->pc = 0x4E3834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3830u;
            // 0x4e3834: 0x67623230  daddiu      $v0, $k1, 0x3230 (Delay Slot)
            SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)12848);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5009BCu;
            return;
        }
    }
    ctx->pc = 0x4E3838u;
label_4e3838:
    // 0x4e3838: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x4e3838u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e383c:
    // 0x4e383c: 0x0  nop
    ctx->pc = 0x4e383cu;
    // NOP
label_4e3840:
    // 0x4e3840: 0x5f6e7462  .word       0x5F6E7462                   # bgtzl       $k1, . + 4 + (0x7462 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e3844:
    if (ctx->pc == 0x4E3844u) {
        ctx->pc = 0x4E3844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3840u;
        // 0x4e3844: 0x67623330  daddiu      $v0, $k1, 0x3330 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)13104);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3848u;
        goto label_4e3848;
    }
    ctx->pc = 0x4E3840u;
    {
        const bool branch_taken_0x4e3840 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3840) {
            ctx->pc = 0x4E3844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3840u;
            // 0x4e3844: 0x67623330  daddiu      $v0, $k1, 0x3330 (Delay Slot)
            SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)13104);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5009CCu;
            return;
        }
    }
    ctx->pc = 0x4E3848u;
label_4e3848:
    // 0x4e3848: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x4e3848u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e384c:
    // 0x4e384c: 0x0  nop
    ctx->pc = 0x4e384cu;
    // NOP
label_4e3850:
    // 0x4e3850: 0x5f747331  .word       0x5F747331                   # bgtzl       $k1, . + 4 + (0x7331 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_4e3854:
    if (ctx->pc == 0x4E3854u) {
        ctx->pc = 0x4E3854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3850u;
        // 0x4e3854: 0x69746361  ldl         $s4, 0x6361($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3858u;
        goto label_4e3858;
    }
    ctx->pc = 0x4E3850u;
    {
        const bool branch_taken_0x4e3850 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3850) {
            ctx->pc = 0x4E3854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3850u;
            // 0x4e3854: 0x69746361  ldl         $s4, 0x6361($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x500518u;
            return;
        }
    }
    ctx->pc = 0x4E3858u;
label_4e3858:
    // 0x4e3858: 0x6e6f  .word       0x00006E6F                   # dsubu       $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3858u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_4e385c:
    // 0x4e385c: 0x0  nop
    ctx->pc = 0x4e385cu;
    // NOP
label_4e3860:
    // 0x4e3860: 0x5f646e32  .word       0x5F646E32                   # bgtzl       $k1, . + 4 + (0x6E32 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_4e3864:
    if (ctx->pc == 0x4E3864u) {
        ctx->pc = 0x4E3864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3860u;
        // 0x4e3864: 0x69746361  ldl         $s4, 0x6361($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3868u;
        goto label_4e3868;
    }
    ctx->pc = 0x4E3860u;
    {
        const bool branch_taken_0x4e3860 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3860) {
            ctx->pc = 0x4E3864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3860u;
            // 0x4e3864: 0x69746361  ldl         $s4, 0x6361($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FF12Cu;
            return;
        }
    }
    ctx->pc = 0x4E3868u;
label_4e3868:
    // 0x4e3868: 0x6e6f  .word       0x00006E6F                   # dsubu       $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3868u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_4e386c:
    // 0x4e386c: 0x0  nop
    ctx->pc = 0x4e386cu;
    // NOP
label_4e3870:
    // 0x4e3870: 0x5f647233  .word       0x5F647233                   # bgtzl       $k1, . + 4 + (0x7233 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_4e3874:
    if (ctx->pc == 0x4E3874u) {
        ctx->pc = 0x4E3874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3870u;
        // 0x4e3874: 0x69746361  ldl         $s4, 0x6361($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3878u;
        goto label_4e3878;
    }
    ctx->pc = 0x4E3870u;
    {
        const bool branch_taken_0x4e3870 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3870) {
            ctx->pc = 0x4E3874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3870u;
            // 0x4e3874: 0x69746361  ldl         $s4, 0x6361($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x500140u;
            return;
        }
    }
    ctx->pc = 0x4E3878u;
label_4e3878:
    // 0x4e3878: 0x6e6f  .word       0x00006E6F                   # dsubu       $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3878u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_4e387c:
    // 0x4e387c: 0x0  nop
    ctx->pc = 0x4e387cu;
    // NOP
label_4e3880:
    // 0x4e3880: 0x5f687434  .word       0x5F687434                   # bgtzl       $k1, . + 4 + (0x7434 << 2) # 00080000 <InstrIdType: CPU_NORMAL>
label_4e3884:
    if (ctx->pc == 0x4E3884u) {
        ctx->pc = 0x4E3884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3880u;
        // 0x4e3884: 0x69746361  ldl         $s4, 0x6361($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3888u;
        goto label_4e3888;
    }
    ctx->pc = 0x4E3880u;
    {
        const bool branch_taken_0x4e3880 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3880) {
            ctx->pc = 0x4E3884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3880u;
            // 0x4e3884: 0x69746361  ldl         $s4, 0x6361($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x500954u;
            return;
        }
    }
    ctx->pc = 0x4E3888u;
label_4e3888:
    // 0x4e3888: 0x6e6f  .word       0x00006E6F                   # dsubu       $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3888u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_4e388c:
    // 0x4e388c: 0x0  nop
    ctx->pc = 0x4e388cu;
    // NOP
label_4e3890:
    // 0x4e3890: 0x5f687435  .word       0x5F687435                   # bgtzl       $k1, . + 4 + (0x7435 << 2) # 00080000 <InstrIdType: CPU_NORMAL>
label_4e3894:
    if (ctx->pc == 0x4E3894u) {
        ctx->pc = 0x4E3894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3890u;
        // 0x4e3894: 0x69746361  ldl         $s4, 0x6361($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3898u;
        goto label_4e3898;
    }
    ctx->pc = 0x4E3890u;
    {
        const bool branch_taken_0x4e3890 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3890) {
            ctx->pc = 0x4E3894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3890u;
            // 0x4e3894: 0x69746361  ldl         $s4, 0x6361($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x500968u;
            return;
        }
    }
    ctx->pc = 0x4E3898u;
label_4e3898:
    // 0x4e3898: 0x6e6f  .word       0x00006E6F                   # dsubu       $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3898u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_4e389c:
    // 0x4e389c: 0x0  nop
    ctx->pc = 0x4e389cu;
    // NOP
label_4e38a0:
    // 0x4e38a0: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e38a4:
    if (ctx->pc == 0x4E38A4u) {
        ctx->pc = 0x4E38A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E38A0u;
        // 0x4e38a4: 0x666e6973  daddiu      $t6, $s3, 0x6973 (Delay Slot)
        SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)26995);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E38A8u;
        goto label_4e38a8;
    }
    ctx->pc = 0x4E38A0u;
    {
        const bool branch_taken_0x4e38a0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e38a0) {
            ctx->pc = 0x4E38A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E38A0u;
            // 0x4e38a4: 0x666e6973  daddiu      $t6, $s3, 0x6973 (Delay Slot)
            SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)26995);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FEE48u;
            return;
        }
    }
    ctx->pc = 0x4E38A8u;
label_4e38a8:
    // 0x4e38a8: 0x6873616c  ldl         $s3, 0x616C($v1)
    ctx->pc = 0x4e38a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24940); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_4e38ac:
    // 0x4e38ac: 0x0  nop
    ctx->pc = 0x4e38acu;
    // NOP
label_4e38b0:
    // 0x4e38b0: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e38b4:
    if (ctx->pc == 0x4E38B4u) {
        ctx->pc = 0x4E38B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E38B0u;
        // 0x4e38b4: 0x63616c70  daddi       $at, $k1, 0x6C70 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27760; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E38B8u;
        goto label_4e38b8;
    }
    ctx->pc = 0x4E38B0u;
    {
        const bool branch_taken_0x4e38b0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e38b0) {
            ctx->pc = 0x4E38B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E38B0u;
            // 0x4e38b4: 0x63616c70  daddi       $at, $k1, 0x6C70 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27760; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FEE58u;
            return;
        }
    }
    ctx->pc = 0x4E38B8u;
label_4e38b8:
    // 0x4e38b8: 0x666e6965  daddiu      $t6, $s3, 0x6965
    ctx->pc = 0x4e38b8u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)26981);
label_4e38bc:
    // 0x4e38bc: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e38bcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_4e38c0:
    // 0x4e38c0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e38c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e38c4:
    // 0x4e38c4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e38c4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e38c8:
    // 0x4e38c8: 0x6e61705c  ldr         $at, 0x705C($s3)
    ctx->pc = 0x4e38c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28764); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_4e38cc:
    // 0x4e38cc: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_4e38d0:
    if (ctx->pc == 0x4E38D0u) {
        ctx->pc = 0x4E38D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E38CCu;
        // 0x4e38d0: 0x5f6c6e70  .word       0x5F6C6E70                   # bgtzl       $k1, . + 4 + (0x6E70 << 2) # 000C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x4E38D0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E38D4u;
        goto label_4e38d4;
    }
    ctx->pc = 0x4E38CCu;
    {
        const bool branch_taken_0x4e38cc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e38cc) {
            ctx->pc = 0x4E38D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E38CCu;
            // 0x4e38d0: 0x5f6c6e70  .word       0x5F6C6E70                   # bgtzl       $k1, . + 4 + (0x6E70 << 2) # 000C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E38D0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FEA64u;
            return;
        }
    }
    ctx->pc = 0x4E38D4u;
label_4e38d4:
    // 0x4e38d4: 0x746c7562  .word       0x746C7562                   # INVALID     $v1, $t4, 0x7562 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e38d4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E38D4 raw=0x746C7562");
label_4e38d8:
    // 0x4e38d8: 0x7478742e  .word       0x7478742E                   # INVALID     $v1, $t8, 0x742E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e38d8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E38D8 raw=0x7478742E");
label_4e38dc:
    // 0x4e38dc: 0x0  nop
    ctx->pc = 0x4e38dcu;
    // NOP
label_4e38e0:
    // 0x4e38e0: 0x6576656c  daddiu      $s6, $t3, 0x656C
    ctx->pc = 0x4e38e0u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25964);
label_4e38e4:
    // 0x4e38e4: 0x75632e6c  .word       0x75632E6C                   # INVALID     $t3, $v1, 0x2E6C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e38e4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E38E4 raw=0x75632E6C");
label_4e38e8:
    // 0x4e38e8: 0x6e657272  ldr         $a1, 0x7272($s3)
    ctx->pc = 0x4e38e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29298); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4e38ec:
    // 0x4e38ec: 0x75662e74  .word       0x75662E74                   # INVALID     $t3, $a2, 0x2E74 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e38ecu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E38EC raw=0x75662E74");
label_4e38f0:
    // 0x4e38f0: 0x61706c6c  daddi       $s0, $t3, 0x6C6C
    ctx->pc = 0x4e38f0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27756; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
label_4e38f4:
    // 0x4e38f4: 0x616e6874  daddi       $t6, $t3, 0x6874
    ctx->pc = 0x4e38f4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26740; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_4e38f8:
    // 0x4e38f8: 0x656d  .word       0x0000656D                   # daddu       $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e38f8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e38fc:
    // 0x4e38fc: 0x0  nop
    ctx->pc = 0x4e38fcu;
    // NOP
label_4e3900:
    // 0x4e3900: 0x5f4e5326  .word       0x5F4E5326                   # bgtzl       $k0, . + 4 + (0x5326 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e3904:
    if (ctx->pc == 0x4E3904u) {
        ctx->pc = 0x4E3904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3900u;
        // 0x4e3904: 0x30257325  andi        $a1, $at, 0x7325 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)29477);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3908u;
        goto label_4e3908;
    }
    ctx->pc = 0x4E3900u;
    {
        const bool branch_taken_0x4e3900 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e3900) {
            ctx->pc = 0x4E3904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3900u;
            // 0x4e3904: 0x30257325  andi        $a1, $at, 0x7325 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)29477);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F859Cu;
            return;
        }
    }
    ctx->pc = 0x4E3908u;
label_4e3908:
    // 0x4e3908: 0x616434  teq         $v1, $at, 400
    ctx->pc = 0x4e3908u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_4e390c:
    // 0x4e390c: 0x0  nop
    ctx->pc = 0x4e390cu;
    // NOP
label_4e3910:
    // 0x4e3910: 0x5f4e5326  .word       0x5F4E5326                   # bgtzl       $k0, . + 4 + (0x5326 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e3914:
    if (ctx->pc == 0x4E3914u) {
        ctx->pc = 0x4E3914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3910u;
        // 0x4e3914: 0x30257325  andi        $a1, $at, 0x7325 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)29477);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3918u;
        goto label_4e3918;
    }
    ctx->pc = 0x4E3910u;
    {
        const bool branch_taken_0x4e3910 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e3910) {
            ctx->pc = 0x4E3914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3910u;
            // 0x4e3914: 0x30257325  andi        $a1, $at, 0x7325 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)29477);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F85ACu;
            return;
        }
    }
    ctx->pc = 0x4E3918u;
label_4e3918:
    // 0x4e3918: 0x626434  teq         $v1, $v0, 400
    ctx->pc = 0x4e3918u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_4e391c:
    // 0x4e391c: 0x0  nop
    ctx->pc = 0x4e391cu;
    // NOP
label_4e3920:
    // 0x4e3920: 0x544c4226  bnel        $v0, $t4, . + 4 + (0x4226 << 2)
label_4e3924:
    if (ctx->pc == 0x4E3924u) {
        ctx->pc = 0x4E3924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3920u;
        // 0x4e3924: 0x7765725f  .word       0x7765725F                   # INVALID     $k1, $a1, 0x725F # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E3924 raw=0x7765725F");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3928u;
        goto label_4e3928;
    }
    ctx->pc = 0x4E3920u;
    {
        const bool branch_taken_0x4e3920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        if (branch_taken_0x4e3920) {
            ctx->pc = 0x4E3924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3920u;
            // 0x4e3924: 0x7765725f  .word       0x7765725F                   # INVALID     $k1, $a1, 0x725F # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E3924 raw=0x7765725F");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F41BCu;
            return;
        }
    }
    ctx->pc = 0x4E3928u;
label_4e3928:
    // 0x4e3928: 0x61647261  daddi       $a0, $t3, 0x7261
    ctx->pc = 0x4e3928u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29281; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, res); }
label_4e392c:
    // 0x4e392c: 0x0  nop
    ctx->pc = 0x4e392cu;
    // NOP
label_4e3930:
    // 0x4e3930: 0x544c4226  bnel        $v0, $t4, . + 4 + (0x4226 << 2)
label_4e3934:
    if (ctx->pc == 0x4E3934u) {
        ctx->pc = 0x4E3934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3930u;
        // 0x4e3934: 0x7765725f  .word       0x7765725F                   # INVALID     $k1, $a1, 0x725F # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E3934 raw=0x7765725F");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3938u;
        goto label_4e3938;
    }
    ctx->pc = 0x4E3930u;
    {
        const bool branch_taken_0x4e3930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        if (branch_taken_0x4e3930) {
            ctx->pc = 0x4E3934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3930u;
            // 0x4e3934: 0x7765725f  .word       0x7765725F                   # INVALID     $k1, $a1, 0x725F # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E3934 raw=0x7765725F");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F41CCu;
            return;
        }
    }
    ctx->pc = 0x4E3938u;
label_4e3938:
    // 0x4e3938: 0x62647261  daddi       $a0, $s3, 0x7261
    ctx->pc = 0x4e3938u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)29281; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, res); }
label_4e393c:
    // 0x4e393c: 0x0  nop
    ctx->pc = 0x4e393cu;
    // NOP
label_4e3940:
    // 0x4e3940: 0x5f424726  .word       0x5F424726                   # bgtzl       $k0, . + 4 + (0x4726 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
label_4e3944:
    if (ctx->pc == 0x4E3944u) {
        ctx->pc = 0x4E3944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3940u;
        // 0x4e3944: 0x65746f6e  daddiu      $s4, $t3, 0x6F6E (Delay Slot)
        SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28526);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3948u;
        goto label_4e3948;
    }
    ctx->pc = 0x4E3940u;
    {
        const bool branch_taken_0x4e3940 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e3940) {
            ctx->pc = 0x4E3944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3940u;
            // 0x4e3944: 0x65746f6e  daddiu      $s4, $t3, 0x6F6E (Delay Slot)
            SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28526);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F55DCu;
            return;
        }
    }
    ctx->pc = 0x4E3948u;
label_4e3948:
    // 0x4e3948: 0x7478  dsll        $t6, $zero, 17
    ctx->pc = 0x4e3948u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) << 17);
label_4e394c:
    // 0x4e394c: 0x0  nop
    ctx->pc = 0x4e394cu;
    // NOP
label_4e3950:
    // 0x4e3950: 0x544c4226  bnel        $v0, $t4, . + 4 + (0x4226 << 2)
label_4e3954:
    if (ctx->pc == 0x4E3954u) {
        ctx->pc = 0x4E3954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3950u;
        // 0x4e3954: 0x3230255f  andi        $s0, $s1, 0x255F (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9567);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3958u;
        goto label_4e3958;
    }
    ctx->pc = 0x4E3950u;
    {
        const bool branch_taken_0x4e3950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        if (branch_taken_0x4e3950) {
            ctx->pc = 0x4E3954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3950u;
            // 0x4e3954: 0x3230255f  andi        $s0, $s1, 0x255F (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9567);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F41ECu;
            return;
        }
    }
    ctx->pc = 0x4E3958u;
label_4e3958:
    // 0x4e3958: 0x32302564  andi        $s0, $s1, 0x2564
    ctx->pc = 0x4e3958u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9572);
label_4e395c:
    // 0x4e395c: 0x32302564  andi        $s0, $s1, 0x2564
    ctx->pc = 0x4e395cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9572);
label_4e3960:
    // 0x4e3960: 0x6164  .word       0x00006164                   # and         $t4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3960u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_4e3964:
    // 0x4e3964: 0x0  nop
    ctx->pc = 0x4e3964u;
    // NOP
label_4e3968:
    // 0x4e3968: 0x0  nop
    ctx->pc = 0x4e3968u;
    // NOP
label_4e396c:
    // 0x4e396c: 0x0  nop
    ctx->pc = 0x4e396cu;
    // NOP
label_4e3970:
    // 0x4e3970: 0x544c4226  bnel        $v0, $t4, . + 4 + (0x4226 << 2)
label_4e3974:
    if (ctx->pc == 0x4E3974u) {
        ctx->pc = 0x4E3974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3970u;
        // 0x4e3974: 0x3230255f  andi        $s0, $s1, 0x255F (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9567);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3978u;
        goto label_4e3978;
    }
    ctx->pc = 0x4E3970u;
    {
        const bool branch_taken_0x4e3970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        if (branch_taken_0x4e3970) {
            ctx->pc = 0x4E3974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3970u;
            // 0x4e3974: 0x3230255f  andi        $s0, $s1, 0x255F (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9567);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F420Cu;
            return;
        }
    }
    ctx->pc = 0x4E3978u;
label_4e3978:
    // 0x4e3978: 0x32302564  andi        $s0, $s1, 0x2564
    ctx->pc = 0x4e3978u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9572);
label_4e397c:
    // 0x4e397c: 0x32302564  andi        $s0, $s1, 0x2564
    ctx->pc = 0x4e397cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9572);
label_4e3980:
    // 0x4e3980: 0x6264  .word       0x00006264                   # and         $t4, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3980u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_4e3984:
    // 0x4e3984: 0x0  nop
    ctx->pc = 0x4e3984u;
    // NOP
label_4e3988:
    // 0x4e3988: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e398c:
    if (ctx->pc == 0x4E398Cu) {
        ctx->pc = 0x4E398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3988u;
        // 0x4e398c: 0x74636572  .word       0x74636572                   # INVALID     $v1, $v1, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E398C raw=0x74636572");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3990u;
        goto label_4e3990;
    }
    ctx->pc = 0x4E3988u;
    {
        const bool branch_taken_0x4e3988 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3988) {
            ctx->pc = 0x4E398Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3988u;
            // 0x4e398c: 0x74636572  .word       0x74636572                   # INVALID     $v1, $v1, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E398C raw=0x74636572");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FEF30u;
            return;
        }
    }
    ctx->pc = 0x4E3990u;
label_4e3990:
    // 0x4e3990: 0x3030  tge         $zero, $zero, 192
    ctx->pc = 0x4e3990u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e3994:
    // 0x4e3994: 0x0  nop
    ctx->pc = 0x4e3994u;
    // NOP
label_4e3998:
    // 0x4e3998: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_4e399c:
    if (ctx->pc == 0x4E399Cu) {
        ctx->pc = 0x4E399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3998u;
        // 0x4e399c: 0x656e696c  daddiu      $t6, $t3, 0x696C (Delay Slot)
        SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26988);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E39A0u;
        goto label_4e39a0;
    }
    ctx->pc = 0x4E3998u;
    {
        const bool branch_taken_0x4e3998 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3998) {
            ctx->pc = 0x4E399Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3998u;
            // 0x4e399c: 0x656e696c  daddiu      $t6, $t3, 0x696C (Delay Slot)
            SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26988);
            ctx->in_delay_slot = false;
            ctx->pc = 0x501B6Cu;
            return;
        }
    }
    ctx->pc = 0x4E39A0u;
label_4e39a0:
    // 0x4e39a0: 0x0  nop
    ctx->pc = 0x4e39a0u;
    // NOP
label_4e39a4:
    // 0x4e39a4: 0x0  nop
    ctx->pc = 0x4e39a4u;
    // NOP
label_4e39a8:
    // 0x4e39a8: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_4e39ac:
    if (ctx->pc == 0x4E39ACu) {
        ctx->pc = 0x4E39ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E39A8u;
        // 0x4e39ac: 0x6c6c7562  ldr         $t4, 0x7562($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30050); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E39B0u;
        goto label_4e39b0;
    }
    ctx->pc = 0x4E39A8u;
    {
        const bool branch_taken_0x4e39a8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e39a8) {
            ctx->pc = 0x4E39ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E39A8u;
            // 0x4e39ac: 0x6c6c7562  ldr         $t4, 0x7562($v1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30050); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x501B7Cu;
            return;
        }
    }
    ctx->pc = 0x4E39B0u;
label_4e39b0:
    // 0x4e39b0: 0x7465  .word       0x00007465                   # move        $t6, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e39b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4e39b4:
    // 0x4e39b4: 0x0  nop
    ctx->pc = 0x4e39b4u;
    // NOP
label_4e39b8:
    // 0x4e39b8: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e39bc:
    if (ctx->pc == 0x4E39BCu) {
        ctx->pc = 0x4E39BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E39B8u;
        // 0x4e39bc: 0x72647262  .word       0x72647262                   # INVALID     $s3, $a0, 0x7262 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
        throw std::runtime_error("Unhandled MMI instruction: function 0x22 at 0x4E39BC raw=0x72647262");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E39C0u;
        goto label_4e39c0;
    }
    ctx->pc = 0x4E39B8u;
    {
        const bool branch_taken_0x4e39b8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e39b8) {
            ctx->pc = 0x4E39BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E39B8u;
            // 0x4e39bc: 0x72647262  .word       0x72647262                   # INVALID     $s3, $a0, 0x7262 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x22 at 0x4E39BC raw=0x72647262");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FEF60u;
            return;
        }
    }
    ctx->pc = 0x4E39C0u;
label_4e39c0:
    // 0x4e39c0: 0x74746f62  .word       0x74746F62                   # INVALID     $v1, $s4, 0x6F62 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e39c0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E39C0 raw=0x74746F62");
label_4e39c4:
    // 0x4e39c4: 0x6d6f  .word       0x00006D6F                   # dsubu       $t5, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e39c4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_4e39c8:
    // 0x4e39c8: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e39cc:
    if (ctx->pc == 0x4E39CCu) {
        ctx->pc = 0x4E39CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E39C8u;
        // 0x4e39cc: 0x72647262  .word       0x72647262                   # INVALID     $s3, $a0, 0x7262 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
        throw std::runtime_error("Unhandled MMI instruction: function 0x22 at 0x4E39CC raw=0x72647262");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E39D0u;
        goto label_4e39d0;
    }
    ctx->pc = 0x4E39C8u;
    {
        const bool branch_taken_0x4e39c8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e39c8) {
            ctx->pc = 0x4E39CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E39C8u;
            // 0x4e39cc: 0x72647262  .word       0x72647262                   # INVALID     $s3, $a0, 0x7262 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x22 at 0x4E39CC raw=0x72647262");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FEF70u;
            return;
        }
    }
    ctx->pc = 0x4E39D0u;
label_4e39d0:
    // 0x4e39d0: 0x706f74  teq         $v1, $s0, 445
    ctx->pc = 0x4e39d0u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
label_4e39d4:
    // 0x4e39d4: 0x0  nop
    ctx->pc = 0x4e39d4u;
    // NOP
label_4e39d8:
    // 0x4e39d8: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_4e39dc:
    if (ctx->pc == 0x4E39DCu) {
        ctx->pc = 0x4E39DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E39D8u;
        // 0x4e39dc: 0x746e6f63  .word       0x746E6F63                   # INVALID     $v1, $t6, 0x6F63 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E39DC raw=0x746E6F63");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E39E0u;
        goto label_4e39e0;
    }
    ctx->pc = 0x4E39D8u;
    {
        const bool branch_taken_0x4e39d8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e39d8) {
            ctx->pc = 0x4E39DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E39D8u;
            // 0x4e39dc: 0x746e6f63  .word       0x746E6F63                   # INVALID     $v1, $t6, 0x6F63 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E39DC raw=0x746E6F63");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501BACu;
            return;
        }
    }
    ctx->pc = 0x4E39E0u;
label_4e39e0:
    // 0x4e39e0: 0x0  nop
    ctx->pc = 0x4e39e0u;
    // NOP
label_4e39e4:
    // 0x4e39e4: 0x0  nop
    ctx->pc = 0x4e39e4u;
    // NOP
label_4e39e8:
    // 0x4e39e8: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e39ec:
    if (ctx->pc == 0x4E39ECu) {
        ctx->pc = 0x4E39ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E39E8u;
        // 0x4e39ec: 0x74636572  .word       0x74636572                   # INVALID     $v1, $v1, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E39EC raw=0x74636572");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E39F0u;
        goto label_4e39f0;
    }
    ctx->pc = 0x4E39E8u;
    {
        const bool branch_taken_0x4e39e8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e39e8) {
            ctx->pc = 0x4E39ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E39E8u;
            // 0x4e39ec: 0x74636572  .word       0x74636572                   # INVALID     $v1, $v1, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E39EC raw=0x74636572");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FEF90u;
            return;
        }
    }
    ctx->pc = 0x4E39F0u;
label_4e39f0:
    // 0x4e39f0: 0x64323025  daddiu      $s2, $at, 0x3025
    ctx->pc = 0x4e39f0u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)12325);
label_4e39f4:
    // 0x4e39f4: 0x0  nop
    ctx->pc = 0x4e39f4u;
    // NOP
label_4e39f8:
    // 0x4e39f8: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_4e39fc:
    if (ctx->pc == 0x4E39FCu) {
        ctx->pc = 0x4E39FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E39F8u;
        // 0x4e39fc: 0x656e696c  daddiu      $t6, $t3, 0x696C (Delay Slot)
        SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26988);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3A00u;
        goto label_4e3a00;
    }
    ctx->pc = 0x4E39F8u;
    {
        const bool branch_taken_0x4e39f8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e39f8) {
            ctx->pc = 0x4E39FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E39F8u;
            // 0x4e39fc: 0x656e696c  daddiu      $t6, $t3, 0x696C (Delay Slot)
            SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26988);
            ctx->in_delay_slot = false;
            ctx->pc = 0x501BCCu;
            return;
        }
    }
    ctx->pc = 0x4E3A00u;
label_4e3a00:
    // 0x4e3a00: 0x64323025  daddiu      $s2, $at, 0x3025
    ctx->pc = 0x4e3a00u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)12325);
label_4e3a04:
    // 0x4e3a04: 0x0  nop
    ctx->pc = 0x4e3a04u;
    // NOP
label_4e3a08:
    // 0x4e3a08: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_4e3a0c:
    if (ctx->pc == 0x4E3A0Cu) {
        ctx->pc = 0x4E3A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3A08u;
        // 0x4e3a0c: 0x6c6c7562  ldr         $t4, 0x7562($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30050); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3A10u;
        goto label_4e3a10;
    }
    ctx->pc = 0x4E3A08u;
    {
        const bool branch_taken_0x4e3a08 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3a08) {
            ctx->pc = 0x4E3A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3A08u;
            // 0x4e3a0c: 0x6c6c7562  ldr         $t4, 0x7562($v1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30050); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x501BDCu;
            return;
        }
    }
    ctx->pc = 0x4E3A10u;
label_4e3a10:
    // 0x4e3a10: 0x30257465  andi        $a1, $at, 0x7465
    ctx->pc = 0x4e3a10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)29797);
label_4e3a14:
    // 0x4e3a14: 0x6432  tlt         $zero, $zero, 400
    ctx->pc = 0x4e3a14u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e3a18:
    // 0x4e3a18: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e3a1c:
    if (ctx->pc == 0x4E3A1Cu) {
        ctx->pc = 0x4E3A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3A18u;
        // 0x4e3a1c: 0x6f73706f  ldr         $s3, 0x706F($k1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28783); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3A20u;
        goto label_4e3a20;
    }
    ctx->pc = 0x4E3A18u;
    {
        const bool branch_taken_0x4e3a18 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e3a18) {
            ctx->pc = 0x4E3A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3A18u;
            // 0x4e3a1c: 0x6f73706f  ldr         $s3, 0x706F($k1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28783); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F7AB4u;
            return;
        }
    }
    ctx->pc = 0x4E3A20u;
label_4e3a20:
    // 0x4e3a20: 0x646e75  .word       0x00646E75                   # INVALID     $v1, $a0, 0x6E75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3a20u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x4E3A20 raw=0x00646E75");
label_4e3a24:
    // 0x4e3a24: 0x0  nop
    ctx->pc = 0x4e3a24u;
    // NOP
label_4e3a28:
    // 0x4e3a28: 0x0  nop
    ctx->pc = 0x4e3a28u;
    // NOP
label_4e3a2c:
    // 0x4e3a2c: 0x0  nop
    ctx->pc = 0x4e3a2cu;
    // NOP
label_4e3a30:
    // 0x4e3a30: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e3a34:
    if (ctx->pc == 0x4E3A34u) {
        ctx->pc = 0x4E3A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3A30u;
        // 0x4e3a34: 0x6f63706f  ldr         $v1, 0x706F($k1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28783); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3A38u;
        goto label_4e3a38;
    }
    ctx->pc = 0x4E3A30u;
    {
        const bool branch_taken_0x4e3a30 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e3a30) {
            ctx->pc = 0x4E3A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3A30u;
            // 0x4e3a34: 0x6f63706f  ldr         $v1, 0x706F($k1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28783); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F7ACCu;
            return;
        }
    }
    ctx->pc = 0x4E3A38u;
label_4e3a38:
    // 0x4e3a38: 0x6f72746e  ldr         $s2, 0x746E($k1)
    ctx->pc = 0x4e3a38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29806); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_4e3a3c:
    // 0x4e3a3c: 0x72656c6c  .word       0x72656C6C                   # INVALID     $s3, $a1, 0x6C6C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e3a3cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x4E3A3C raw=0x72656C6C");
label_4e3a40:
    // 0x4e3a40: 0x0  nop
    ctx->pc = 0x4e3a40u;
    // NOP
label_4e3a44:
    // 0x4e3a44: 0x0  nop
    ctx->pc = 0x4e3a44u;
    // NOP
label_4e3a48:
    // 0x4e3a48: 0x0  nop
    ctx->pc = 0x4e3a48u;
    // NOP
label_4e3a4c:
    // 0x4e3a4c: 0x0  nop
    ctx->pc = 0x4e3a4cu;
    // NOP
label_4e3a50:
    // 0x4e3a50: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e3a50u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e3a54:
    // 0x4e3a54: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e3a54u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e3a58:
    // 0x4e3a58: 0x6e61705c  ldr         $at, 0x705C($s3)
    ctx->pc = 0x4e3a58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28764); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_4e3a5c:
    // 0x4e3a5c: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_4e3a60:
    if (ctx->pc == 0x4E3A60u) {
        ctx->pc = 0x4E3A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3A5Cu;
        // 0x4e3a60: 0x5f6c6e70  .word       0x5F6C6E70                   # bgtzl       $k1, . + 4 + (0x6E70 << 2) # 000C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x4E3A60 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3A64u;
        goto label_4e3a64;
    }
    ctx->pc = 0x4E3A5Cu;
    {
        const bool branch_taken_0x4e3a5c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e3a5c) {
            ctx->pc = 0x4E3A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3A5Cu;
            // 0x4e3a60: 0x5f6c6e70  .word       0x5F6C6E70                   # bgtzl       $k1, . + 4 + (0x6E70 << 2) # 000C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E3A60 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FEBF4u;
            return;
        }
    }
    ctx->pc = 0x4E3A64u;
label_4e3a64:
    // 0x4e3a64: 0x666e6f63  daddiu      $t6, $s3, 0x6F63
    ctx->pc = 0x4e3a64u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)28515);
label_4e3a68:
    // 0x4e3a68: 0x7478742e  .word       0x7478742E                   # INVALID     $v1, $t8, 0x742E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3a68u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E3A68 raw=0x7478742E");
label_4e3a6c:
    // 0x4e3a6c: 0x0  nop
    ctx->pc = 0x4e3a6cu;
    // NOP
label_4e3a70:
    // 0x4e3a70: 0x6b636162  ldl         $v1, 0x6162($k1)
    ctx->pc = 0x4e3a70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24930); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4e3a74:
    // 0x4e3a74: 0x756f7267  .word       0x756F7267                   # INVALID     $t3, $t7, 0x7267 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3a74u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E3A74 raw=0x756F7267");
label_4e3a78:
    // 0x4e3a78: 0x646e  .word       0x0000646E                   # dsub        $t4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3a78u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_4e3a7c:
    // 0x4e3a7c: 0x0  nop
    ctx->pc = 0x4e3a7cu;
    // NOP
label_4e3a80:
    // 0x4e3a80: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_4e3a84:
    if (ctx->pc == 0x4E3A84u) {
        ctx->pc = 0x4E3A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3A80u;
        // 0x4e3a84: 0x3025706f  andi        $a1, $at, 0x706F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)28783);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3A88u;
        goto label_4e3a88;
    }
    ctx->pc = 0x4E3A80u;
    {
        const bool branch_taken_0x4e3a80 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3a80) {
            ctx->pc = 0x4E3A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3A80u;
            // 0x4e3a84: 0x3025706f  andi        $a1, $at, 0x706F (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)28783);
            ctx->in_delay_slot = false;
            ctx->pc = 0x501C54u;
            return;
        }
    }
    ctx->pc = 0x4E3A88u;
label_4e3a88:
    // 0x4e3a88: 0x6432  tlt         $zero, $zero, 400
    ctx->pc = 0x4e3a88u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e3a8c:
    // 0x4e3a8c: 0x0  nop
    ctx->pc = 0x4e3a8cu;
    // NOP
label_4e3a90:
    // 0x4e3a90: 0x705f6373  .word       0x705F6373                   # INVALID     $v0, $ra, 0x6373 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e3a90u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x4E3A90 raw=0x705F6373");
label_4e3a94:
    // 0x4e3a94: 0x69666f72  ldl         $a2, 0x6F72($t3)
    ctx->pc = 0x4e3a94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28530); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_4e3a98:
    // 0x4e3a98: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3a98u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_4e3a9c:
    // 0x4e3a9c: 0x0  nop
    ctx->pc = 0x4e3a9cu;
    // NOP
label_4e3aa0:
    // 0x4e3aa0: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_4e3aa4:
    if (ctx->pc == 0x4E3AA4u) {
        ctx->pc = 0x4E3AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3AA0u;
        // 0x4e3aa4: 0x726c7464  .word       0x726C7464                   # INVALID     $s3, $t4, 0x7464 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
        throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x4E3AA4 raw=0x726C7464");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3AA8u;
        goto label_4e3aa8;
    }
    ctx->pc = 0x4E3AA0u;
    {
        const bool branch_taken_0x4e3aa0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3aa0) {
            ctx->pc = 0x4E3AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3AA0u;
            // 0x4e3aa4: 0x726c7464  .word       0x726C7464                   # INVALID     $s3, $t4, 0x7464 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x4E3AA4 raw=0x726C7464");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501C74u;
            return;
        }
    }
    ctx->pc = 0x4E3AA8u;
label_4e3aa8:
    // 0x4e3aa8: 0x0  nop
    ctx->pc = 0x4e3aa8u;
    // NOP
label_4e3aac:
    // 0x4e3aac: 0x0  nop
    ctx->pc = 0x4e3aacu;
    // NOP
label_4e3ab0:
    // 0x4e3ab0: 0x6f5f6975  ldr         $ra, 0x6975($k0)
    ctx->pc = 0x4e3ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 26997); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
label_4e3ab4:
    // 0x4e3ab4: 0x61677475  daddi       $a3, $t3, 0x7475
    ctx->pc = 0x4e3ab4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29813; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, res); }
label_4e3ab8:
    // 0x4e3ab8: 0x735f656d  .word       0x735F656D                   # INVALID     $k0, $ra, 0x656D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e3ab8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4E3AB8 raw=0x735F656D");
label_4e3abc:
    // 0x4e3abc: 0x63656c65  daddi       $a1, $k1, 0x6C65
    ctx->pc = 0x4e3abcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4e3ac0:
    // 0x4e3ac0: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x4e3ac0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e3ac4:
    // 0x4e3ac4: 0x0  nop
    ctx->pc = 0x4e3ac4u;
    // NOP
label_4e3ac8:
    // 0x4e3ac8: 0x0  nop
    ctx->pc = 0x4e3ac8u;
    // NOP
label_4e3acc:
    // 0x4e3acc: 0x0  nop
    ctx->pc = 0x4e3accu;
    // NOP
label_4e3ad0:
    // 0x4e3ad0: 0x6f5f6975  ldr         $ra, 0x6975($k0)
    ctx->pc = 0x4e3ad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 26997); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
label_4e3ad4:
    // 0x4e3ad4: 0x61677475  daddi       $a3, $t3, 0x7475
    ctx->pc = 0x4e3ad4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29813; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, res); }
label_4e3ad8:
    // 0x4e3ad8: 0x765f656d  .word       0x765F656D                   # INVALID     $s2, $ra, 0x656D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3ad8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E3AD8 raw=0x765F656D");
label_4e3adc:
    // 0x4e3adc: 0x64696c61  daddiu      $t1, $v1, 0x6C61
    ctx->pc = 0x4e3adcu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27745);
label_4e3ae0:
    // 0x4e3ae0: 0x0  nop
    ctx->pc = 0x4e3ae0u;
    // NOP
label_4e3ae4:
    // 0x4e3ae4: 0x0  nop
    ctx->pc = 0x4e3ae4u;
    // NOP
label_4e3ae8:
    // 0x4e3ae8: 0x0  nop
    ctx->pc = 0x4e3ae8u;
    // NOP
label_4e3aec:
    // 0x4e3aec: 0x0  nop
    ctx->pc = 0x4e3aecu;
    // NOP
label_4e3af0:
    // 0x4e3af0: 0x6f5f6975  ldr         $ra, 0x6975($k0)
    ctx->pc = 0x4e3af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 26997); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
label_4e3af4:
    // 0x4e3af4: 0x61677475  daddi       $a3, $t3, 0x7475
    ctx->pc = 0x4e3af4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29813; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, res); }
label_4e3af8:
    // 0x4e3af8: 0x625f656d  daddi       $ra, $s2, 0x656D
    ctx->pc = 0x4e3af8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 18); int64_t imm = (int64_t)(int32_t)25965; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_4e3afc:
    // 0x4e3afc: 0x6b6361  .word       0x006B6361                   # addu        $t4, $v1, $t3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3afcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_4e3b00:
    // 0x4e3b00: 0x7265706f  .word       0x7265706F                   # INVALID     $s3, $a1, 0x706F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e3b00u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x4E3B00 raw=0x7265706F");
label_4e3b04:
    // 0x4e3b04: 0x6f697461  ldr         $t1, 0x7461($k1)
    ctx->pc = 0x4e3b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29793); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e3b08:
    // 0x4e3b08: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3b08u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_4e3b0c:
    // 0x4e3b0c: 0x0  nop
    ctx->pc = 0x4e3b0cu;
    // NOP
label_4e3b10:
    // 0x4e3b10: 0x685f3177  ldl         $ra, 0x3177($v0)
    ctx->pc = 0x4e3b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12663); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3b14:
    // 0x4e3b14: 0x6968775f  ldl         $t0, 0x775F($t3)
    ctx->pc = 0x4e3b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4e3b18:
    // 0x4e3b18: 0x36316574  ori         $s1, $s1, 0x6574
    ctx->pc = 0x4e3b18u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)25972);
label_4e3b1c:
    // 0x4e3b1c: 0x785f  .word       0x0000785F                   # ddivu       $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3b1cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E3B1C raw=0x0000785F");
label_4e3b20:
    // 0x4e3b20: 0x685f326d  ldl         $ra, 0x326D($v0)
    ctx->pc = 0x4e3b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12909); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3b24:
    // 0x4e3b24: 0x6968775f  ldl         $t0, 0x775F($t3)
    ctx->pc = 0x4e3b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4e3b28:
    // 0x4e3b28: 0x35306574  ori         $s0, $t1, 0x6574
    ctx->pc = 0x4e3b28u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)25972);
label_4e3b2c:
    // 0x4e3b2c: 0x785f  .word       0x0000785F                   # ddivu       $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3b2cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E3B2C raw=0x0000785F");
label_4e3b30:
    // 0x4e3b30: 0x685f3177  ldl         $ra, 0x3177($v0)
    ctx->pc = 0x4e3b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12663); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3b34:
    // 0x4e3b34: 0x6968775f  ldl         $t0, 0x775F($t3)
    ctx->pc = 0x4e3b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4e3b38:
    // 0x4e3b38: 0x34306574  ori         $s0, $at, 0x6574
    ctx->pc = 0x4e3b38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25972);
label_4e3b3c:
    // 0x4e3b3c: 0x785f  .word       0x0000785F                   # ddivu       $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3b3cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E3B3C raw=0x0000785F");
label_4e3b40:
    // 0x4e3b40: 0x685f3277  ldl         $ra, 0x3277($v0)
    ctx->pc = 0x4e3b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12919); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3b44:
    // 0x4e3b44: 0x6968775f  ldl         $t0, 0x775F($t3)
    ctx->pc = 0x4e3b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4e3b48:
    // 0x4e3b48: 0x6c6f6574  ldr         $t7, 0x6574($v1)
    ctx->pc = 0x4e3b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25972); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e3b4c:
    // 0x4e3b4c: 0x5f303064  .word       0x5F303064                   # bgtzl       $t9, . + 4 + (0x3064 << 2) # 00100000 <InstrIdType: CPU_NORMAL>
label_4e3b50:
    if (ctx->pc == 0x4E3B50u) {
        ctx->pc = 0x4E3B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3B4Cu;
        // 0x4e3b50: 0x78  dsll        $zero, $zero, 1 (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3B54u;
        goto label_4e3b54;
    }
    ctx->pc = 0x4E3B4Cu;
    {
        const bool branch_taken_0x4e3b4c = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x4e3b4c) {
            ctx->pc = 0x4E3B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3B4Cu;
            // 0x4e3b50: 0x78  dsll        $zero, $zero, 1 (Delay Slot)
            SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EFCE0u;
            return;
        }
    }
    ctx->pc = 0x4E3B54u;
label_4e3b54:
    // 0x4e3b54: 0x0  nop
    ctx->pc = 0x4e3b54u;
    // NOP
label_4e3b58:
    // 0x4e3b58: 0x685f3177  ldl         $ra, 0x3177($v0)
    ctx->pc = 0x4e3b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12663); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3b5c:
    // 0x4e3b5c: 0x696e615f  ldl         $t6, 0x615F($t3)
    ctx->pc = 0x4e3b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24927); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4e3b60:
    // 0x4e3b60: 0x30306174  andi        $s0, $at, 0x6174
    ctx->pc = 0x4e3b60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)24948);
label_4e3b64:
    // 0x4e3b64: 0x785f  .word       0x0000785F                   # ddivu       $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3b64u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E3B64 raw=0x0000785F");
label_4e3b68:
    // 0x4e3b68: 0x685f3177  ldl         $ra, 0x3177($v0)
    ctx->pc = 0x4e3b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12663); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3b6c:
    // 0x4e3b6c: 0x616c625f  daddi       $t4, $t3, 0x625F
    ctx->pc = 0x4e3b6cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25183; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_4e3b70:
    // 0x4e3b70: 0x33306b63  andi        $s0, $t9, 0x6B63
    ctx->pc = 0x4e3b70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)27491);
label_4e3b74:
    // 0x4e3b74: 0x785f  .word       0x0000785F                   # ddivu       $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3b74u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E3B74 raw=0x0000785F");
label_4e3b78:
    // 0x4e3b78: 0x685f3177  ldl         $ra, 0x3177($v0)
    ctx->pc = 0x4e3b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12663); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3b7c:
    // 0x4e3b7c: 0x6968775f  ldl         $t0, 0x775F($t3)
    ctx->pc = 0x4e3b7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4e3b80:
    // 0x4e3b80: 0x35306574  ori         $s0, $t1, 0x6574
    ctx->pc = 0x4e3b80u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)25972);
label_4e3b84:
    // 0x4e3b84: 0x785f  .word       0x0000785F                   # ddivu       $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3b84u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E3B84 raw=0x0000785F");
label_4e3b88:
    // 0x4e3b88: 0x685f316d  ldl         $ra, 0x316D($v0)
    ctx->pc = 0x4e3b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12653); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3b8c:
    // 0x4e3b8c: 0x6968775f  ldl         $t0, 0x775F($t3)
    ctx->pc = 0x4e3b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4e3b90:
    // 0x4e3b90: 0x38306574  xori        $s0, $at, 0x6574
    ctx->pc = 0x4e3b90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)25972);
label_4e3b94:
    // 0x4e3b94: 0x785f  .word       0x0000785F                   # ddivu       $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3b94u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E3B94 raw=0x0000785F");
label_4e3b98:
    // 0x4e3b98: 0x685f3277  ldl         $ra, 0x3277($v0)
    ctx->pc = 0x4e3b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12919); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3b9c:
    // 0x4e3b9c: 0x6968775f  ldl         $t0, 0x775F($t3)
    ctx->pc = 0x4e3b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4e3ba0:
    // 0x4e3ba0: 0x33306574  andi        $s0, $t9, 0x6574
    ctx->pc = 0x4e3ba0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)25972);
label_4e3ba4:
    // 0x4e3ba4: 0x785f  .word       0x0000785F                   # ddivu       $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3ba4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E3BA4 raw=0x0000785F");
label_4e3ba8:
    // 0x4e3ba8: 0x685f316d  ldl         $ra, 0x316D($v0)
    ctx->pc = 0x4e3ba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12653); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3bac:
    // 0x4e3bac: 0x6968775f  ldl         $t0, 0x775F($t3)
    ctx->pc = 0x4e3bacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4e3bb0:
    // 0x4e3bb0: 0x32306574  andi        $s0, $s1, 0x6574
    ctx->pc = 0x4e3bb0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)25972);
label_4e3bb4:
    // 0x4e3bb4: 0x785f  .word       0x0000785F                   # ddivu       $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3bb4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E3BB4 raw=0x0000785F");
label_4e3bb8:
    // 0x4e3bb8: 0x685f316d  ldl         $ra, 0x316D($v0)
    ctx->pc = 0x4e3bb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12653); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3bbc:
    // 0x4e3bbc: 0x6968775f  ldl         $t0, 0x775F($t3)
    ctx->pc = 0x4e3bbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4e3bc0:
    // 0x4e3bc0: 0x37306574  ori         $s0, $t9, 0x6574
    ctx->pc = 0x4e3bc0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)25972);
label_4e3bc4:
    // 0x4e3bc4: 0x785f  .word       0x0000785F                   # ddivu       $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3bc4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E3BC4 raw=0x0000785F");
label_4e3bc8:
    // 0x4e3bc8: 0x685f316d  ldl         $ra, 0x316D($v0)
    ctx->pc = 0x4e3bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12653); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3bcc:
    // 0x4e3bcc: 0x616c625f  daddi       $t4, $t3, 0x625F
    ctx->pc = 0x4e3bccu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25183; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_4e3bd0:
    // 0x4e3bd0: 0x31306b63  andi        $s0, $t1, 0x6B63
    ctx->pc = 0x4e3bd0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)27491);
label_4e3bd4:
    // 0x4e3bd4: 0x785f  .word       0x0000785F                   # ddivu       $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3bd4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E3BD4 raw=0x0000785F");
label_4e3bd8:
    // 0x4e3bd8: 0x685f3177  ldl         $ra, 0x3177($v0)
    ctx->pc = 0x4e3bd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12663); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3bdc:
    // 0x4e3bdc: 0x6968775f  ldl         $t0, 0x775F($t3)
    ctx->pc = 0x4e3bdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4e3be0:
    // 0x4e3be0: 0x37306574  ori         $s0, $t9, 0x6574
    ctx->pc = 0x4e3be0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)25972);
label_4e3be4:
    // 0x4e3be4: 0x785f  .word       0x0000785F                   # ddivu       $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3be4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E3BE4 raw=0x0000785F");
label_4e3be8:
    // 0x4e3be8: 0x685f3177  ldl         $ra, 0x3177($v0)
    ctx->pc = 0x4e3be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12663); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3bec:
    // 0x4e3bec: 0x6968775f  ldl         $t0, 0x775F($t3)
    ctx->pc = 0x4e3becu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4e3bf0:
    // 0x4e3bf0: 0x33306574  andi        $s0, $t9, 0x6574
    ctx->pc = 0x4e3bf0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)25972);
label_4e3bf4:
    // 0x4e3bf4: 0x785f  .word       0x0000785F                   # ddivu       $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3bf4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E3BF4 raw=0x0000785F");
label_4e3bf8:
    // 0x4e3bf8: 0x0  nop
    ctx->pc = 0x4e3bf8u;
    // NOP
label_4e3bfc:
    // 0x4e3bfc: 0x0  nop
    ctx->pc = 0x4e3bfcu;
    // NOP
label_4e3c00:
    // 0x4e3c00: 0x685f3177  ldl         $ra, 0x3177($v0)
    ctx->pc = 0x4e3c00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12663); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3c04:
    // 0x4e3c04: 0x6968775f  ldl         $t0, 0x775F($t3)
    ctx->pc = 0x4e3c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4e3c08:
    // 0x4e3c08: 0x37306574  ori         $s0, $t9, 0x6574
    ctx->pc = 0x4e3c08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)25972);
label_4e3c0c:
    // 0x4e3c0c: 0x73616d5f  .word       0x73616D5F                   # INVALID     $k1, $at, 0x6D5F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e3c0cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x1F at 0x4E3C0C raw=0x73616D5F");
label_4e3c10:
    // 0x4e3c10: 0x785f6b  .word       0x00785F6B                   # sltu        $t3, $v1, $t8 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3c10u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
label_4e3c14:
    // 0x4e3c14: 0x0  nop
    ctx->pc = 0x4e3c14u;
    // NOP
label_4e3c18:
    // 0x4e3c18: 0x685f316d  ldl         $ra, 0x316D($v0)
    ctx->pc = 0x4e3c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12653); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3c1c:
    // 0x4e3c1c: 0x6172635f  daddi       $s2, $t3, 0x635F
    ctx->pc = 0x4e3c1cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25439; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_4e3c20:
    // 0x4e3c20: 0x3030706d  andi        $s0, $at, 0x706D
    ctx->pc = 0x4e3c20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)28781);
label_4e3c24:
    // 0x4e3c24: 0x785f  .word       0x0000785F                   # ddivu       $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3c24u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E3C24 raw=0x0000785F");
label_4e3c28:
    // 0x4e3c28: 0x0  nop
    ctx->pc = 0x4e3c28u;
    // NOP
label_4e3c2c:
    // 0x4e3c2c: 0x0  nop
    ctx->pc = 0x4e3c2cu;
    // NOP
label_4e3c30:
    // 0x4e3c30: 0x685f3177  ldl         $ra, 0x3177($v0)
    ctx->pc = 0x4e3c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12663); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3c34:
    // 0x4e3c34: 0x6968775f  ldl         $t0, 0x775F($t3)
    ctx->pc = 0x4e3c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4e3c38:
    // 0x4e3c38: 0x31306574  andi        $s0, $t1, 0x6574
    ctx->pc = 0x4e3c38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)25972);
label_4e3c3c:
    // 0x4e3c3c: 0x73616d5f  .word       0x73616D5F                   # INVALID     $k1, $at, 0x6D5F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e3c3cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x1F at 0x4E3C3C raw=0x73616D5F");
label_4e3c40:
    // 0x4e3c40: 0x785f6b  .word       0x00785F6B                   # sltu        $t3, $v1, $t8 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3c40u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
label_4e3c44:
    // 0x4e3c44: 0x0  nop
    ctx->pc = 0x4e3c44u;
    // NOP
label_4e3c48:
    // 0x4e3c48: 0x0  nop
    ctx->pc = 0x4e3c48u;
    // NOP
label_4e3c4c:
    // 0x4e3c4c: 0x0  nop
    ctx->pc = 0x4e3c4cu;
    // NOP
label_4e3c50:
    // 0x4e3c50: 0x685f326d  ldl         $ra, 0x326D($v0)
    ctx->pc = 0x4e3c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12909); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3c54:
    // 0x4e3c54: 0x74616c5f  .word       0x74616C5F                   # INVALID     $v1, $at, 0x6C5F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3c54u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E3C54 raw=0x74616C5F");
label_4e3c58:
    // 0x4e3c58: 0x306f6e69  andi        $t7, $v1, 0x6E69
    ctx->pc = 0x4e3c58u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)28265);
label_4e3c5c:
    // 0x4e3c5c: 0x616d5f30  daddi       $t5, $t3, 0x5F30
    ctx->pc = 0x4e3c5cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24368; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_4e3c60:
    // 0x4e3c60: 0x785f6b73  lq          $ra, 0x6B73($v0)
    ctx->pc = 0x4e3c60u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 2), 27507)));
label_4e3c64:
    // 0x4e3c64: 0x0  nop
    ctx->pc = 0x4e3c64u;
    // NOP
label_4e3c68:
    // 0x4e3c68: 0x0  nop
    ctx->pc = 0x4e3c68u;
    // NOP
label_4e3c6c:
    // 0x4e3c6c: 0x0  nop
    ctx->pc = 0x4e3c6cu;
    // NOP
label_4e3c70:
    // 0x4e3c70: 0x685f3177  ldl         $ra, 0x3177($v0)
    ctx->pc = 0x4e3c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12663); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3c74:
    // 0x4e3c74: 0x6973615f  ldl         $s3, 0x615F($t3)
    ctx->pc = 0x4e3c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24927); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_4e3c78:
    // 0x4e3c78: 0x5f323061  .word       0x5F323061                   # bgtzl       $t9, . + 4 + (0x3061 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
label_4e3c7c:
    if (ctx->pc == 0x4E3C7Cu) {
        ctx->pc = 0x4E3C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3C78u;
        // 0x4e3c7c: 0x6b73616d  ldl         $s3, 0x616D($k1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24941); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3C80u;
        goto label_4e3c80;
    }
    ctx->pc = 0x4E3C78u;
    {
        const bool branch_taken_0x4e3c78 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x4e3c78) {
            ctx->pc = 0x4E3C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3C78u;
            // 0x4e3c7c: 0x6b73616d  ldl         $s3, 0x616D($k1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24941); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EFE00u;
            return;
        }
    }
    ctx->pc = 0x4E3C80u;
label_4e3c80:
    // 0x4e3c80: 0x785f  .word       0x0000785F                   # ddivu       $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3c80u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E3C80 raw=0x0000785F");
label_4e3c84:
    // 0x4e3c84: 0x0  nop
    ctx->pc = 0x4e3c84u;
    // NOP
label_4e3c88:
    // 0x4e3c88: 0x0  nop
    ctx->pc = 0x4e3c88u;
    // NOP
label_4e3c8c:
    // 0x4e3c8c: 0x0  nop
    ctx->pc = 0x4e3c8cu;
    // NOP
label_4e3c90:
    // 0x4e3c90: 0x685f316d  ldl         $ra, 0x316D($v0)
    ctx->pc = 0x4e3c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12653); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3c94:
    // 0x4e3c94: 0x74616c5f  .word       0x74616C5F                   # INVALID     $v1, $at, 0x6C5F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3c94u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E3C94 raw=0x74616C5F");
label_4e3c98:
    // 0x4e3c98: 0x306f6e69  andi        $t7, $v1, 0x6E69
    ctx->pc = 0x4e3c98u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)28265);
label_4e3c9c:
    // 0x4e3c9c: 0x616d5f30  daddi       $t5, $t3, 0x5F30
    ctx->pc = 0x4e3c9cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24368; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_4e3ca0:
    // 0x4e3ca0: 0x785f6b73  lq          $ra, 0x6B73($v0)
    ctx->pc = 0x4e3ca0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 2), 27507)));
label_4e3ca4:
    // 0x4e3ca4: 0x0  nop
    ctx->pc = 0x4e3ca4u;
    // NOP
label_4e3ca8:
    // 0x4e3ca8: 0x0  nop
    ctx->pc = 0x4e3ca8u;
    // NOP
label_4e3cac:
    // 0x4e3cac: 0x0  nop
    ctx->pc = 0x4e3cacu;
    // NOP
label_4e3cb0:
    // 0x4e3cb0: 0x685f3177  ldl         $ra, 0x3177($v0)
    ctx->pc = 0x4e3cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12663); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3cb4:
    // 0x4e3cb4: 0x6968775f  ldl         $t0, 0x775F($t3)
    ctx->pc = 0x4e3cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4e3cb8:
    // 0x4e3cb8: 0x35316574  ori         $s1, $t1, 0x6574
    ctx->pc = 0x4e3cb8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)25972);
label_4e3cbc:
    // 0x4e3cbc: 0x73616d5f  .word       0x73616D5F                   # INVALID     $k1, $at, 0x6D5F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e3cbcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x1F at 0x4E3CBC raw=0x73616D5F");
label_4e3cc0:
    // 0x4e3cc0: 0x785f6b  .word       0x00785F6B                   # sltu        $t3, $v1, $t8 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3cc0u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
label_4e3cc4:
    // 0x4e3cc4: 0x0  nop
    ctx->pc = 0x4e3cc4u;
    // NOP
label_4e3cc8:
    // 0x4e3cc8: 0x685f316d  ldl         $ra, 0x316D($v0)
    ctx->pc = 0x4e3cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12653); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3ccc:
    // 0x4e3ccc: 0x6973615f  ldl         $s3, 0x615F($t3)
    ctx->pc = 0x4e3cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24927); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_4e3cd0:
    // 0x4e3cd0: 0x5f353061  .word       0x5F353061                   # bgtzl       $t9, . + 4 + (0x3061 << 2) # 00150000 <InstrIdType: CPU_NORMAL>
label_4e3cd4:
    if (ctx->pc == 0x4E3CD4u) {
        ctx->pc = 0x4E3CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3CD0u;
        // 0x4e3cd4: 0x78  dsll        $zero, $zero, 1 (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3CD8u;
        goto label_4e3cd8;
    }
    ctx->pc = 0x4E3CD0u;
    {
        const bool branch_taken_0x4e3cd0 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x4e3cd0) {
            ctx->pc = 0x4E3CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3CD0u;
            // 0x4e3cd4: 0x78  dsll        $zero, $zero, 1 (Delay Slot)
            SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EFE58u;
            return;
        }
    }
    ctx->pc = 0x4E3CD8u;
label_4e3cd8:
    // 0x4e3cd8: 0x685f316d  ldl         $ra, 0x316D($v0)
    ctx->pc = 0x4e3cd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12653); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3cdc:
    // 0x4e3cdc: 0x6968775f  ldl         $t0, 0x775F($t3)
    ctx->pc = 0x4e3cdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4e3ce0:
    // 0x4e3ce0: 0x34306574  ori         $s0, $at, 0x6574
    ctx->pc = 0x4e3ce0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25972);
label_4e3ce4:
    // 0x4e3ce4: 0x785f  .word       0x0000785F                   # ddivu       $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3ce4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E3CE4 raw=0x0000785F");
label_4e3ce8:
    // 0x4e3ce8: 0x685f3177  ldl         $ra, 0x3177($v0)
    ctx->pc = 0x4e3ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12663); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3cec:
    // 0x4e3cec: 0x616c625f  daddi       $t4, $t3, 0x625F
    ctx->pc = 0x4e3cecu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25183; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_4e3cf0:
    // 0x4e3cf0: 0x31306b63  andi        $s0, $t1, 0x6B63
    ctx->pc = 0x4e3cf0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)27491);
label_4e3cf4:
    // 0x4e3cf4: 0x785f  .word       0x0000785F                   # ddivu       $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3cf4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E3CF4 raw=0x0000785F");
label_4e3cf8:
    // 0x4e3cf8: 0x0  nop
    ctx->pc = 0x4e3cf8u;
    // NOP
label_4e3cfc:
    // 0x4e3cfc: 0x0  nop
    ctx->pc = 0x4e3cfcu;
    // NOP
label_4e3d00:
    // 0x4e3d00: 0x685f3277  ldl         $ra, 0x3277($v0)
    ctx->pc = 0x4e3d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12919); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3d04:
    // 0x4e3d04: 0x74616c5f  .word       0x74616C5F                   # INVALID     $v1, $at, 0x6C5F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3d04u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E3D04 raw=0x74616C5F");
label_4e3d08:
    // 0x4e3d08: 0x306f6e69  andi        $t7, $v1, 0x6E69
    ctx->pc = 0x4e3d08u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)28265);
label_4e3d0c:
    // 0x4e3d0c: 0x785f30  tge         $v1, $t8, 380
    ctx->pc = 0x4e3d0cu;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_4e3d10:
    // 0x4e3d10: 0x685f3177  ldl         $ra, 0x3177($v0)
    ctx->pc = 0x4e3d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12663); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3d14:
    // 0x4e3d14: 0x6968775f  ldl         $t0, 0x775F($t3)
    ctx->pc = 0x4e3d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4e3d18:
    // 0x4e3d18: 0x34326574  ori         $s2, $at, 0x6574
    ctx->pc = 0x4e3d18u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25972);
label_4e3d1c:
    // 0x4e3d1c: 0x785f  .word       0x0000785F                   # ddivu       $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3d1cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E3D1C raw=0x0000785F");
label_4e3d20:
    // 0x4e3d20: 0x685f3177  ldl         $ra, 0x3177($v0)
    ctx->pc = 0x4e3d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12663); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3d24:
    // 0x4e3d24: 0x6968775f  ldl         $t0, 0x775F($t3)
    ctx->pc = 0x4e3d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4e3d28:
    // 0x4e3d28: 0x6c6f6574  ldr         $t7, 0x6574($v1)
    ctx->pc = 0x4e3d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25972); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e3d2c:
    // 0x4e3d2c: 0x5f303064  .word       0x5F303064                   # bgtzl       $t9, . + 4 + (0x3064 << 2) # 00100000 <InstrIdType: CPU_NORMAL>
label_4e3d30:
    if (ctx->pc == 0x4E3D30u) {
        ctx->pc = 0x4E3D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3D2Cu;
        // 0x4e3d30: 0x78  dsll        $zero, $zero, 1 (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3D34u;
        goto label_4e3d34;
    }
    ctx->pc = 0x4E3D2Cu;
    {
        const bool branch_taken_0x4e3d2c = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x4e3d2c) {
            ctx->pc = 0x4E3D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3D2Cu;
            // 0x4e3d30: 0x78  dsll        $zero, $zero, 1 (Delay Slot)
            SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EFEC0u;
            return;
        }
    }
    ctx->pc = 0x4E3D34u;
label_4e3d34:
    // 0x4e3d34: 0x0  nop
    ctx->pc = 0x4e3d34u;
    // NOP
label_4e3d38:
    // 0x4e3d38: 0x685f316d  ldl         $ra, 0x316D($v0)
    ctx->pc = 0x4e3d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12653); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3d3c:
    // 0x4e3d3c: 0x6968775f  ldl         $t0, 0x775F($t3)
    ctx->pc = 0x4e3d3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4e3d40:
    // 0x4e3d40: 0x36316574  ori         $s1, $s1, 0x6574
    ctx->pc = 0x4e3d40u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)25972);
label_4e3d44:
    // 0x4e3d44: 0x785f  .word       0x0000785F                   # ddivu       $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3d44u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E3D44 raw=0x0000785F");
label_4e3d48:
    // 0x4e3d48: 0x685f326d  ldl         $ra, 0x326D($v0)
    ctx->pc = 0x4e3d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12909); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3d4c:
    // 0x4e3d4c: 0x616c625f  daddi       $t4, $t3, 0x625F
    ctx->pc = 0x4e3d4cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25183; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_4e3d50:
    // 0x4e3d50: 0x32306b63  andi        $s0, $s1, 0x6B63
    ctx->pc = 0x4e3d50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)27491);
label_4e3d54:
    // 0x4e3d54: 0x785f  .word       0x0000785F                   # ddivu       $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3d54u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E3D54 raw=0x0000785F");
label_4e3d58:
    // 0x4e3d58: 0x685f316d  ldl         $ra, 0x316D($v0)
    ctx->pc = 0x4e3d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12653); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3d5c:
    // 0x4e3d5c: 0x6968775f  ldl         $t0, 0x775F($t3)
    ctx->pc = 0x4e3d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4e3d60:
    // 0x4e3d60: 0x30316574  andi        $s1, $at, 0x6574
    ctx->pc = 0x4e3d60u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)25972);
label_4e3d64:
    // 0x4e3d64: 0x785f  .word       0x0000785F                   # ddivu       $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3d64u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E3D64 raw=0x0000785F");
label_4e3d68:
    // 0x4e3d68: 0x685f3177  ldl         $ra, 0x3177($v0)
    ctx->pc = 0x4e3d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12663); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3d6c:
    // 0x4e3d6c: 0x6968775f  ldl         $t0, 0x775F($t3)
    ctx->pc = 0x4e3d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4e3d70:
    // 0x4e3d70: 0x38306574  xori        $s0, $at, 0x6574
    ctx->pc = 0x4e3d70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)25972);
label_4e3d74:
    // 0x4e3d74: 0x785f  .word       0x0000785F                   # ddivu       $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3d74u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E3D74 raw=0x0000785F");
label_4e3d78:
    // 0x4e3d78: 0x685f3177  ldl         $ra, 0x3177($v0)
    ctx->pc = 0x4e3d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12663); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3d7c:
    // 0x4e3d7c: 0x6973615f  ldl         $s3, 0x615F($t3)
    ctx->pc = 0x4e3d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24927); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_4e3d80:
    // 0x4e3d80: 0x5f323061  .word       0x5F323061                   # bgtzl       $t9, . + 4 + (0x3061 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
label_4e3d84:
    if (ctx->pc == 0x4E3D84u) {
        ctx->pc = 0x4E3D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3D80u;
        // 0x4e3d84: 0x78  dsll        $zero, $zero, 1 (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3D88u;
        goto label_4e3d88;
    }
    ctx->pc = 0x4E3D80u;
    {
        const bool branch_taken_0x4e3d80 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x4e3d80) {
            ctx->pc = 0x4E3D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3D80u;
            // 0x4e3d84: 0x78  dsll        $zero, $zero, 1 (Delay Slot)
            SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EFF08u;
            return;
        }
    }
    ctx->pc = 0x4E3D88u;
label_4e3d88:
    // 0x4e3d88: 0x0  nop
    ctx->pc = 0x4e3d88u;
    // NOP
label_4e3d8c:
    // 0x4e3d8c: 0x0  nop
    ctx->pc = 0x4e3d8cu;
    // NOP
label_4e3d90:
    // 0x4e3d90: 0x685f316d  ldl         $ra, 0x316D($v0)
    ctx->pc = 0x4e3d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12653); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3d94:
    // 0x4e3d94: 0x74616c5f  .word       0x74616C5F                   # INVALID     $v1, $at, 0x6C5F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3d94u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E3D94 raw=0x74616C5F");
label_4e3d98:
    // 0x4e3d98: 0x306f6e69  andi        $t7, $v1, 0x6E69
    ctx->pc = 0x4e3d98u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)28265);
label_4e3d9c:
    // 0x4e3d9c: 0x785f30  tge         $v1, $t8, 380
    ctx->pc = 0x4e3d9cu;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_4e3da0:
    // 0x4e3da0: 0x685f3177  ldl         $ra, 0x3177($v0)
    ctx->pc = 0x4e3da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12663); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3da4:
    // 0x4e3da4: 0x74616c5f  .word       0x74616C5F                   # INVALID     $v1, $at, 0x6C5F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3da4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E3DA4 raw=0x74616C5F");
label_4e3da8:
    // 0x4e3da8: 0x306f6e69  andi        $t7, $v1, 0x6E69
    ctx->pc = 0x4e3da8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)28265);
label_4e3dac:
    // 0x4e3dac: 0x785f30  tge         $v1, $t8, 380
    ctx->pc = 0x4e3dacu;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_4e3db0:
    // 0x4e3db0: 0x685f3177  ldl         $ra, 0x3177($v0)
    ctx->pc = 0x4e3db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12663); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3db4:
    // 0x4e3db4: 0x6968775f  ldl         $t0, 0x775F($t3)
    ctx->pc = 0x4e3db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4e3db8:
    // 0x4e3db8: 0x6c6f6574  ldr         $t7, 0x6574($v1)
    ctx->pc = 0x4e3db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25972); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e3dbc:
    // 0x4e3dbc: 0x5f313064  .word       0x5F313064                   # bgtzl       $t9, . + 4 + (0x3064 << 2) # 00110000 <InstrIdType: CPU_NORMAL>
label_4e3dc0:
    if (ctx->pc == 0x4E3DC0u) {
        ctx->pc = 0x4E3DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3DBCu;
        // 0x4e3dc0: 0x78  dsll        $zero, $zero, 1 (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3DC4u;
        goto label_4e3dc4;
    }
    ctx->pc = 0x4E3DBCu;
    {
        const bool branch_taken_0x4e3dbc = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x4e3dbc) {
            ctx->pc = 0x4E3DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3DBCu;
            // 0x4e3dc0: 0x78  dsll        $zero, $zero, 1 (Delay Slot)
            SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EFF50u;
            return;
        }
    }
    ctx->pc = 0x4E3DC4u;
label_4e3dc4:
    // 0x4e3dc4: 0x0  nop
    ctx->pc = 0x4e3dc4u;
    // NOP
label_4e3dc8:
    // 0x4e3dc8: 0x0  nop
    ctx->pc = 0x4e3dc8u;
    // NOP
label_4e3dcc:
    // 0x4e3dcc: 0x0  nop
    ctx->pc = 0x4e3dccu;
    // NOP
label_4e3dd0:
    // 0x4e3dd0: 0x685f3177  ldl         $ra, 0x3177($v0)
    ctx->pc = 0x4e3dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12663); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3dd4:
    // 0x4e3dd4: 0x6968775f  ldl         $t0, 0x775F($t3)
    ctx->pc = 0x4e3dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4e3dd8:
    // 0x4e3dd8: 0x6c6f6574  ldr         $t7, 0x6574($v1)
    ctx->pc = 0x4e3dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25972); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e3ddc:
    // 0x4e3ddc: 0x5f323064  .word       0x5F323064                   # bgtzl       $t9, . + 4 + (0x3064 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
label_4e3de0:
    if (ctx->pc == 0x4E3DE0u) {
        ctx->pc = 0x4E3DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3DDCu;
        // 0x4e3de0: 0x78  dsll        $zero, $zero, 1 (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3DE4u;
        goto label_4e3de4;
    }
    ctx->pc = 0x4E3DDCu;
    {
        const bool branch_taken_0x4e3ddc = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x4e3ddc) {
            ctx->pc = 0x4E3DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3DDCu;
            // 0x4e3de0: 0x78  dsll        $zero, $zero, 1 (Delay Slot)
            SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EFF70u;
            return;
        }
    }
    ctx->pc = 0x4E3DE4u;
label_4e3de4:
    // 0x4e3de4: 0x0  nop
    ctx->pc = 0x4e3de4u;
    // NOP
label_4e3de8:
    // 0x4e3de8: 0x685f3177  ldl         $ra, 0x3177($v0)
    ctx->pc = 0x4e3de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12663); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3dec:
    // 0x4e3dec: 0x616c625f  daddi       $t4, $t3, 0x625F
    ctx->pc = 0x4e3decu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25183; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_4e3df0:
    // 0x4e3df0: 0x30306b63  andi        $s0, $at, 0x6B63
    ctx->pc = 0x4e3df0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)27491);
label_4e3df4:
    // 0x4e3df4: 0x785f  .word       0x0000785F                   # ddivu       $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3df4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E3DF4 raw=0x0000785F");
label_4e3df8:
    // 0x4e3df8: 0x685f316d  ldl         $ra, 0x316D($v0)
    ctx->pc = 0x4e3df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12653); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e3dfc:
    // 0x4e3dfc: 0x6968775f  ldl         $t0, 0x775F($t3)
    ctx->pc = 0x4e3dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4e3e00:
    // 0x4e3e00: 0x33306574  andi        $s0, $t9, 0x6574
    ctx->pc = 0x4e3e00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)25972);
label_4e3e04:
    // 0x4e3e04: 0x785f  .word       0x0000785F                   # ddivu       $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3e04u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E3E04 raw=0x0000785F");
label_4e3e08:
    // 0x4e3e08: 0x0  nop
    ctx->pc = 0x4e3e08u;
    // NOP
label_4e3e0c:
    // 0x4e3e0c: 0x0  nop
    ctx->pc = 0x4e3e0cu;
    // NOP
label_4e3e10:
    // 0x4e3e10: 0x4e3b10  .word       0x004E3B10                   # mfhi        $a3 # 004E0300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3e10u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_4e3e14:
    // 0x4e3e14: 0x4e3b20  .word       0x004E3B20                   # add         $a3, $v0, $t6 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3e14u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_4e3e18:
    // 0x4e3e18: 0x4e3b30  tge         $v0, $t6, 236
    ctx->pc = 0x4e3e18u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4e3e1c:
    // 0x4e3e1c: 0x4e3b40  .word       0x004E3B40                   # sll         $a3, $t6, 13 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 14), 13));
label_4e3e20:
    // 0x4e3e20: 0x4e3b58  .word       0x004E3B58                   # mult        $a3, $v0, $t6 # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e3e20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_4e3e24:
    // 0x4e3e24: 0x4e3b68  .word       0x004E3B68                   # mfsa        $a3 # 004E0340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e3e24u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_4e3e28:
    // 0x4e3e28: 0x4e3b78  .word       0x004E3B78                   # dsll        $a3, $t6, 13 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3e28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 14) << 13);
label_4e3e2c:
    // 0x4e3e2c: 0x4e3b88  .word       0x004E3B88                   # jr          $v0 # 000E3B80 <InstrIdType: CPU_SPECIAL>
label_4e3e30:
    if (ctx->pc == 0x4E3E30u) {
        ctx->pc = 0x4E3E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3E2Cu;
        // 0x4e3e30: 0x4e3b98  .word       0x004E3B98                   # mult        $a3, $v0, $t6 # 00000380 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3E34u;
        goto label_4e3e34;
    }
    ctx->pc = 0x4E3E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x4E3E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3E2Cu;
        // 0x4e3e30: 0x4e3b98  .word       0x004E3B98                   # mult        $a3, $v0, $t6 # 00000380 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3E2Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4E3E34u;
label_4e3e34:
    // 0x4e3e34: 0x4e3ba8  .word       0x004E3BA8                   # mfsa        $a3 # 004E0380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e3e34u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_4e3e38:
    // 0x4e3e38: 0x4e3bb8  .word       0x004E3BB8                   # dsll        $a3, $t6, 14 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3e38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 14) << 14);
label_4e3e3c:
    // 0x4e3e3c: 0x4e3bc8  .word       0x004E3BC8                   # jr          $v0 # 000E3BC0 <InstrIdType: CPU_SPECIAL>
label_4e3e40:
    if (ctx->pc == 0x4E3E40u) {
        ctx->pc = 0x4E3E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3E3Cu;
        // 0x4e3e40: 0x4e3bd8  .word       0x004E3BD8                   # mult        $a3, $v0, $t6 # 000003C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3E44u;
        goto label_4e3e44;
    }
    ctx->pc = 0x4E3E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x4E3E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3E3Cu;
        // 0x4e3e40: 0x4e3bd8  .word       0x004E3BD8                   # mult        $a3, $v0, $t6 # 000003C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3E3Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4E3E44u;
label_4e3e44:
    // 0x4e3e44: 0x4e3be8  .word       0x004E3BE8                   # mfsa        $a3 # 004E03C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e3e44u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_4e3e48:
    // 0x4e3e48: 0x4e3c00  .word       0x004E3C00                   # sll         $a3, $t6, 16 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3e48u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
label_4e3e4c:
    // 0x4e3e4c: 0x4e3c18  .word       0x004E3C18                   # mult        $a3, $v0, $t6 # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e3e4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_4e3e50:
    // 0x4e3e50: 0x4e3c30  tge         $v0, $t6, 240
    ctx->pc = 0x4e3e50u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4e3e54:
    // 0x4e3e54: 0x4e3c50  .word       0x004E3C50                   # mfhi        $a3 # 004E0440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3e54u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_4e3e58:
    // 0x4e3e58: 0x4e3c70  tge         $v0, $t6, 241
    ctx->pc = 0x4e3e58u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4e3e5c:
    // 0x4e3e5c: 0x4e3c90  .word       0x004E3C90                   # mfhi        $a3 # 004E0480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3e5cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_4e3e60:
    // 0x4e3e60: 0x4e3cb0  tge         $v0, $t6, 242
    ctx->pc = 0x4e3e60u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4e3e64:
    // 0x4e3e64: 0x4e3cc8  .word       0x004E3CC8                   # jr          $v0 # 000E3CC0 <InstrIdType: CPU_SPECIAL>
label_4e3e68:
    if (ctx->pc == 0x4E3E68u) {
        ctx->pc = 0x4E3E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3E64u;
        // 0x4e3e68: 0x4e3cd8  .word       0x004E3CD8                   # mult        $a3, $v0, $t6 # 000004C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3E6Cu;
        goto label_4e3e6c;
    }
    ctx->pc = 0x4E3E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x4E3E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3E64u;
        // 0x4e3e68: 0x4e3cd8  .word       0x004E3CD8                   # mult        $a3, $v0, $t6 # 000004C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3E64u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4E3E6Cu;
label_4e3e6c:
    // 0x4e3e6c: 0x4e3ce8  .word       0x004E3CE8                   # mfsa        $a3 # 004E04C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e3e6cu;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_4e3e70:
    // 0x4e3e70: 0x4e3d00  .word       0x004E3D00                   # sll         $a3, $t6, 20 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3e70u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 14), 20));
label_4e3e74:
    // 0x4e3e74: 0x4e3d10  .word       0x004E3D10                   # mfhi        $a3 # 004E0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3e74u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_4e3e78:
    // 0x4e3e78: 0x4e3d20  .word       0x004E3D20                   # add         $a3, $v0, $t6 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3e78u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_4e3e7c:
    // 0x4e3e7c: 0x4e3d38  .word       0x004E3D38                   # dsll        $a3, $t6, 20 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3e7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 14) << 20);
label_4e3e80:
    // 0x4e3e80: 0x4e3d48  .word       0x004E3D48                   # jr          $v0 # 000E3D40 <InstrIdType: CPU_SPECIAL>
label_4e3e84:
    if (ctx->pc == 0x4E3E84u) {
        ctx->pc = 0x4E3E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3E80u;
        // 0x4e3e84: 0x4e3d58  .word       0x004E3D58                   # mult        $a3, $v0, $t6 # 00000540 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3E88u;
        goto label_4e3e88;
    }
    ctx->pc = 0x4E3E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x4E3E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3E80u;
        // 0x4e3e84: 0x4e3d58  .word       0x004E3D58                   # mult        $a3, $v0, $t6 # 00000540 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3E80u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4E3E88u;
label_4e3e88:
    // 0x4e3e88: 0x4e3d68  .word       0x004E3D68                   # mfsa        $a3 # 004E0540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e3e88u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_4e3e8c:
    // 0x4e3e8c: 0x4e3d78  .word       0x004E3D78                   # dsll        $a3, $t6, 21 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3e8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 14) << 21);
label_4e3e90:
    // 0x4e3e90: 0x4e3d90  .word       0x004E3D90                   # mfhi        $a3 # 004E0580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3e90u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_4e3e94:
    // 0x4e3e94: 0x4e3da0  .word       0x004E3DA0                   # add         $a3, $v0, $t6 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3e94u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_4e3e98:
    // 0x4e3e98: 0x4e3db0  tge         $v0, $t6, 246
    ctx->pc = 0x4e3e98u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4e3e9c:
    // 0x4e3e9c: 0x4e3dd0  .word       0x004E3DD0                   # mfhi        $a3 # 004E05C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3e9cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_4e3ea0:
    // 0x4e3ea0: 0x4e3de8  .word       0x004E3DE8                   # mfsa        $a3 # 004E05C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e3ea0u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_4e3ea4:
    // 0x4e3ea4: 0x4e3df8  .word       0x004E3DF8                   # dsll        $a3, $t6, 23 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3ea4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 14) << 23);
label_4e3ea8:
    // 0x4e3ea8: 0x0  nop
    ctx->pc = 0x4e3ea8u;
    // NOP
label_4e3eac:
    // 0x4e3eac: 0x0  nop
    ctx->pc = 0x4e3eacu;
    // NOP
    ctx->pc = 0x4e3eb0u;
}
