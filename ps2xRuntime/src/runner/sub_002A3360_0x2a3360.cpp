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

// Function: sub_002A3360
// Address: 0x2a3360 - 0x2a3a00
void sub_002A3360_0x2a3360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3360_0x2a3360");
#endif

    switch (ctx->pc) {
        case 0x2a3360u: goto label_2a3360;
        case 0x2a3364u: goto label_2a3364;
        case 0x2a3368u: goto label_2a3368;
        case 0x2a336cu: goto label_2a336c;
        case 0x2a3370u: goto label_2a3370;
        case 0x2a3374u: goto label_2a3374;
        case 0x2a3378u: goto label_2a3378;
        case 0x2a337cu: goto label_2a337c;
        case 0x2a3380u: goto label_2a3380;
        case 0x2a3384u: goto label_2a3384;
        case 0x2a3388u: goto label_2a3388;
        case 0x2a338cu: goto label_2a338c;
        case 0x2a3390u: goto label_2a3390;
        case 0x2a3394u: goto label_2a3394;
        case 0x2a3398u: goto label_2a3398;
        case 0x2a339cu: goto label_2a339c;
        case 0x2a33a0u: goto label_2a33a0;
        case 0x2a33a4u: goto label_2a33a4;
        case 0x2a33a8u: goto label_2a33a8;
        case 0x2a33acu: goto label_2a33ac;
        case 0x2a33b0u: goto label_2a33b0;
        case 0x2a33b4u: goto label_2a33b4;
        case 0x2a33b8u: goto label_2a33b8;
        case 0x2a33bcu: goto label_2a33bc;
        case 0x2a33c0u: goto label_2a33c0;
        case 0x2a33c4u: goto label_2a33c4;
        case 0x2a33c8u: goto label_2a33c8;
        case 0x2a33ccu: goto label_2a33cc;
        case 0x2a33d0u: goto label_2a33d0;
        case 0x2a33d4u: goto label_2a33d4;
        case 0x2a33d8u: goto label_2a33d8;
        case 0x2a33dcu: goto label_2a33dc;
        case 0x2a33e0u: goto label_2a33e0;
        case 0x2a33e4u: goto label_2a33e4;
        case 0x2a33e8u: goto label_2a33e8;
        case 0x2a33ecu: goto label_2a33ec;
        case 0x2a33f0u: goto label_2a33f0;
        case 0x2a33f4u: goto label_2a33f4;
        case 0x2a33f8u: goto label_2a33f8;
        case 0x2a33fcu: goto label_2a33fc;
        case 0x2a3400u: goto label_2a3400;
        case 0x2a3404u: goto label_2a3404;
        case 0x2a3408u: goto label_2a3408;
        case 0x2a340cu: goto label_2a340c;
        case 0x2a3410u: goto label_2a3410;
        case 0x2a3414u: goto label_2a3414;
        case 0x2a3418u: goto label_2a3418;
        case 0x2a341cu: goto label_2a341c;
        case 0x2a3420u: goto label_2a3420;
        case 0x2a3424u: goto label_2a3424;
        case 0x2a3428u: goto label_2a3428;
        case 0x2a342cu: goto label_2a342c;
        case 0x2a3430u: goto label_2a3430;
        case 0x2a3434u: goto label_2a3434;
        case 0x2a3438u: goto label_2a3438;
        case 0x2a343cu: goto label_2a343c;
        case 0x2a3440u: goto label_2a3440;
        case 0x2a3444u: goto label_2a3444;
        case 0x2a3448u: goto label_2a3448;
        case 0x2a344cu: goto label_2a344c;
        case 0x2a3450u: goto label_2a3450;
        case 0x2a3454u: goto label_2a3454;
        case 0x2a3458u: goto label_2a3458;
        case 0x2a345cu: goto label_2a345c;
        case 0x2a3460u: goto label_2a3460;
        case 0x2a3464u: goto label_2a3464;
        case 0x2a3468u: goto label_2a3468;
        case 0x2a346cu: goto label_2a346c;
        case 0x2a3470u: goto label_2a3470;
        case 0x2a3474u: goto label_2a3474;
        case 0x2a3478u: goto label_2a3478;
        case 0x2a347cu: goto label_2a347c;
        case 0x2a3480u: goto label_2a3480;
        case 0x2a3484u: goto label_2a3484;
        case 0x2a3488u: goto label_2a3488;
        case 0x2a348cu: goto label_2a348c;
        case 0x2a3490u: goto label_2a3490;
        case 0x2a3494u: goto label_2a3494;
        case 0x2a3498u: goto label_2a3498;
        case 0x2a349cu: goto label_2a349c;
        case 0x2a34a0u: goto label_2a34a0;
        case 0x2a34a4u: goto label_2a34a4;
        case 0x2a34a8u: goto label_2a34a8;
        case 0x2a34acu: goto label_2a34ac;
        case 0x2a34b0u: goto label_2a34b0;
        case 0x2a34b4u: goto label_2a34b4;
        case 0x2a34b8u: goto label_2a34b8;
        case 0x2a34bcu: goto label_2a34bc;
        case 0x2a34c0u: goto label_2a34c0;
        case 0x2a34c4u: goto label_2a34c4;
        case 0x2a34c8u: goto label_2a34c8;
        case 0x2a34ccu: goto label_2a34cc;
        case 0x2a34d0u: goto label_2a34d0;
        case 0x2a34d4u: goto label_2a34d4;
        case 0x2a34d8u: goto label_2a34d8;
        case 0x2a34dcu: goto label_2a34dc;
        case 0x2a34e0u: goto label_2a34e0;
        case 0x2a34e4u: goto label_2a34e4;
        case 0x2a34e8u: goto label_2a34e8;
        case 0x2a34ecu: goto label_2a34ec;
        case 0x2a34f0u: goto label_2a34f0;
        case 0x2a34f4u: goto label_2a34f4;
        case 0x2a34f8u: goto label_2a34f8;
        case 0x2a34fcu: goto label_2a34fc;
        case 0x2a3500u: goto label_2a3500;
        case 0x2a3504u: goto label_2a3504;
        case 0x2a3508u: goto label_2a3508;
        case 0x2a350cu: goto label_2a350c;
        case 0x2a3510u: goto label_2a3510;
        case 0x2a3514u: goto label_2a3514;
        case 0x2a3518u: goto label_2a3518;
        case 0x2a351cu: goto label_2a351c;
        case 0x2a3520u: goto label_2a3520;
        case 0x2a3524u: goto label_2a3524;
        case 0x2a3528u: goto label_2a3528;
        case 0x2a352cu: goto label_2a352c;
        case 0x2a3530u: goto label_2a3530;
        case 0x2a3534u: goto label_2a3534;
        case 0x2a3538u: goto label_2a3538;
        case 0x2a353cu: goto label_2a353c;
        case 0x2a3540u: goto label_2a3540;
        case 0x2a3544u: goto label_2a3544;
        case 0x2a3548u: goto label_2a3548;
        case 0x2a354cu: goto label_2a354c;
        case 0x2a3550u: goto label_2a3550;
        case 0x2a3554u: goto label_2a3554;
        case 0x2a3558u: goto label_2a3558;
        case 0x2a355cu: goto label_2a355c;
        case 0x2a3560u: goto label_2a3560;
        case 0x2a3564u: goto label_2a3564;
        case 0x2a3568u: goto label_2a3568;
        case 0x2a356cu: goto label_2a356c;
        case 0x2a3570u: goto label_2a3570;
        case 0x2a3574u: goto label_2a3574;
        case 0x2a3578u: goto label_2a3578;
        case 0x2a357cu: goto label_2a357c;
        case 0x2a3580u: goto label_2a3580;
        case 0x2a3584u: goto label_2a3584;
        case 0x2a3588u: goto label_2a3588;
        case 0x2a358cu: goto label_2a358c;
        case 0x2a3590u: goto label_2a3590;
        case 0x2a3594u: goto label_2a3594;
        case 0x2a3598u: goto label_2a3598;
        case 0x2a359cu: goto label_2a359c;
        case 0x2a35a0u: goto label_2a35a0;
        case 0x2a35a4u: goto label_2a35a4;
        case 0x2a35a8u: goto label_2a35a8;
        case 0x2a35acu: goto label_2a35ac;
        case 0x2a35b0u: goto label_2a35b0;
        case 0x2a35b4u: goto label_2a35b4;
        case 0x2a35b8u: goto label_2a35b8;
        case 0x2a35bcu: goto label_2a35bc;
        case 0x2a35c0u: goto label_2a35c0;
        case 0x2a35c4u: goto label_2a35c4;
        case 0x2a35c8u: goto label_2a35c8;
        case 0x2a35ccu: goto label_2a35cc;
        case 0x2a35d0u: goto label_2a35d0;
        case 0x2a35d4u: goto label_2a35d4;
        case 0x2a35d8u: goto label_2a35d8;
        case 0x2a35dcu: goto label_2a35dc;
        case 0x2a35e0u: goto label_2a35e0;
        case 0x2a35e4u: goto label_2a35e4;
        case 0x2a35e8u: goto label_2a35e8;
        case 0x2a35ecu: goto label_2a35ec;
        case 0x2a35f0u: goto label_2a35f0;
        case 0x2a35f4u: goto label_2a35f4;
        case 0x2a35f8u: goto label_2a35f8;
        case 0x2a35fcu: goto label_2a35fc;
        case 0x2a3600u: goto label_2a3600;
        case 0x2a3604u: goto label_2a3604;
        case 0x2a3608u: goto label_2a3608;
        case 0x2a360cu: goto label_2a360c;
        case 0x2a3610u: goto label_2a3610;
        case 0x2a3614u: goto label_2a3614;
        case 0x2a3618u: goto label_2a3618;
        case 0x2a361cu: goto label_2a361c;
        case 0x2a3620u: goto label_2a3620;
        case 0x2a3624u: goto label_2a3624;
        case 0x2a3628u: goto label_2a3628;
        case 0x2a362cu: goto label_2a362c;
        case 0x2a3630u: goto label_2a3630;
        case 0x2a3634u: goto label_2a3634;
        case 0x2a3638u: goto label_2a3638;
        case 0x2a363cu: goto label_2a363c;
        case 0x2a3640u: goto label_2a3640;
        case 0x2a3644u: goto label_2a3644;
        case 0x2a3648u: goto label_2a3648;
        case 0x2a364cu: goto label_2a364c;
        case 0x2a3650u: goto label_2a3650;
        case 0x2a3654u: goto label_2a3654;
        case 0x2a3658u: goto label_2a3658;
        case 0x2a365cu: goto label_2a365c;
        case 0x2a3660u: goto label_2a3660;
        case 0x2a3664u: goto label_2a3664;
        case 0x2a3668u: goto label_2a3668;
        case 0x2a366cu: goto label_2a366c;
        case 0x2a3670u: goto label_2a3670;
        case 0x2a3674u: goto label_2a3674;
        case 0x2a3678u: goto label_2a3678;
        case 0x2a367cu: goto label_2a367c;
        case 0x2a3680u: goto label_2a3680;
        case 0x2a3684u: goto label_2a3684;
        case 0x2a3688u: goto label_2a3688;
        case 0x2a368cu: goto label_2a368c;
        case 0x2a3690u: goto label_2a3690;
        case 0x2a3694u: goto label_2a3694;
        case 0x2a3698u: goto label_2a3698;
        case 0x2a369cu: goto label_2a369c;
        case 0x2a36a0u: goto label_2a36a0;
        case 0x2a36a4u: goto label_2a36a4;
        case 0x2a36a8u: goto label_2a36a8;
        case 0x2a36acu: goto label_2a36ac;
        case 0x2a36b0u: goto label_2a36b0;
        case 0x2a36b4u: goto label_2a36b4;
        case 0x2a36b8u: goto label_2a36b8;
        case 0x2a36bcu: goto label_2a36bc;
        case 0x2a36c0u: goto label_2a36c0;
        case 0x2a36c4u: goto label_2a36c4;
        case 0x2a36c8u: goto label_2a36c8;
        case 0x2a36ccu: goto label_2a36cc;
        case 0x2a36d0u: goto label_2a36d0;
        case 0x2a36d4u: goto label_2a36d4;
        case 0x2a36d8u: goto label_2a36d8;
        case 0x2a36dcu: goto label_2a36dc;
        case 0x2a36e0u: goto label_2a36e0;
        case 0x2a36e4u: goto label_2a36e4;
        case 0x2a36e8u: goto label_2a36e8;
        case 0x2a36ecu: goto label_2a36ec;
        case 0x2a36f0u: goto label_2a36f0;
        case 0x2a36f4u: goto label_2a36f4;
        case 0x2a36f8u: goto label_2a36f8;
        case 0x2a36fcu: goto label_2a36fc;
        case 0x2a3700u: goto label_2a3700;
        case 0x2a3704u: goto label_2a3704;
        case 0x2a3708u: goto label_2a3708;
        case 0x2a370cu: goto label_2a370c;
        case 0x2a3710u: goto label_2a3710;
        case 0x2a3714u: goto label_2a3714;
        case 0x2a3718u: goto label_2a3718;
        case 0x2a371cu: goto label_2a371c;
        case 0x2a3720u: goto label_2a3720;
        case 0x2a3724u: goto label_2a3724;
        case 0x2a3728u: goto label_2a3728;
        case 0x2a372cu: goto label_2a372c;
        case 0x2a3730u: goto label_2a3730;
        case 0x2a3734u: goto label_2a3734;
        case 0x2a3738u: goto label_2a3738;
        case 0x2a373cu: goto label_2a373c;
        case 0x2a3740u: goto label_2a3740;
        case 0x2a3744u: goto label_2a3744;
        case 0x2a3748u: goto label_2a3748;
        case 0x2a374cu: goto label_2a374c;
        case 0x2a3750u: goto label_2a3750;
        case 0x2a3754u: goto label_2a3754;
        case 0x2a3758u: goto label_2a3758;
        case 0x2a375cu: goto label_2a375c;
        case 0x2a3760u: goto label_2a3760;
        case 0x2a3764u: goto label_2a3764;
        case 0x2a3768u: goto label_2a3768;
        case 0x2a376cu: goto label_2a376c;
        case 0x2a3770u: goto label_2a3770;
        case 0x2a3774u: goto label_2a3774;
        case 0x2a3778u: goto label_2a3778;
        case 0x2a377cu: goto label_2a377c;
        case 0x2a3780u: goto label_2a3780;
        case 0x2a3784u: goto label_2a3784;
        case 0x2a3788u: goto label_2a3788;
        case 0x2a378cu: goto label_2a378c;
        case 0x2a3790u: goto label_2a3790;
        case 0x2a3794u: goto label_2a3794;
        case 0x2a3798u: goto label_2a3798;
        case 0x2a379cu: goto label_2a379c;
        case 0x2a37a0u: goto label_2a37a0;
        case 0x2a37a4u: goto label_2a37a4;
        case 0x2a37a8u: goto label_2a37a8;
        case 0x2a37acu: goto label_2a37ac;
        case 0x2a37b0u: goto label_2a37b0;
        case 0x2a37b4u: goto label_2a37b4;
        case 0x2a37b8u: goto label_2a37b8;
        case 0x2a37bcu: goto label_2a37bc;
        case 0x2a37c0u: goto label_2a37c0;
        case 0x2a37c4u: goto label_2a37c4;
        case 0x2a37c8u: goto label_2a37c8;
        case 0x2a37ccu: goto label_2a37cc;
        case 0x2a37d0u: goto label_2a37d0;
        case 0x2a37d4u: goto label_2a37d4;
        case 0x2a37d8u: goto label_2a37d8;
        case 0x2a37dcu: goto label_2a37dc;
        case 0x2a37e0u: goto label_2a37e0;
        case 0x2a37e4u: goto label_2a37e4;
        case 0x2a37e8u: goto label_2a37e8;
        case 0x2a37ecu: goto label_2a37ec;
        case 0x2a37f0u: goto label_2a37f0;
        case 0x2a37f4u: goto label_2a37f4;
        case 0x2a37f8u: goto label_2a37f8;
        case 0x2a37fcu: goto label_2a37fc;
        case 0x2a3800u: goto label_2a3800;
        case 0x2a3804u: goto label_2a3804;
        case 0x2a3808u: goto label_2a3808;
        case 0x2a380cu: goto label_2a380c;
        case 0x2a3810u: goto label_2a3810;
        case 0x2a3814u: goto label_2a3814;
        case 0x2a3818u: goto label_2a3818;
        case 0x2a381cu: goto label_2a381c;
        case 0x2a3820u: goto label_2a3820;
        case 0x2a3824u: goto label_2a3824;
        case 0x2a3828u: goto label_2a3828;
        case 0x2a382cu: goto label_2a382c;
        case 0x2a3830u: goto label_2a3830;
        case 0x2a3834u: goto label_2a3834;
        case 0x2a3838u: goto label_2a3838;
        case 0x2a383cu: goto label_2a383c;
        case 0x2a3840u: goto label_2a3840;
        case 0x2a3844u: goto label_2a3844;
        case 0x2a3848u: goto label_2a3848;
        case 0x2a384cu: goto label_2a384c;
        case 0x2a3850u: goto label_2a3850;
        case 0x2a3854u: goto label_2a3854;
        case 0x2a3858u: goto label_2a3858;
        case 0x2a385cu: goto label_2a385c;
        case 0x2a3860u: goto label_2a3860;
        case 0x2a3864u: goto label_2a3864;
        case 0x2a3868u: goto label_2a3868;
        case 0x2a386cu: goto label_2a386c;
        case 0x2a3870u: goto label_2a3870;
        case 0x2a3874u: goto label_2a3874;
        case 0x2a3878u: goto label_2a3878;
        case 0x2a387cu: goto label_2a387c;
        case 0x2a3880u: goto label_2a3880;
        case 0x2a3884u: goto label_2a3884;
        case 0x2a3888u: goto label_2a3888;
        case 0x2a388cu: goto label_2a388c;
        case 0x2a3890u: goto label_2a3890;
        case 0x2a3894u: goto label_2a3894;
        case 0x2a3898u: goto label_2a3898;
        case 0x2a389cu: goto label_2a389c;
        case 0x2a38a0u: goto label_2a38a0;
        case 0x2a38a4u: goto label_2a38a4;
        case 0x2a38a8u: goto label_2a38a8;
        case 0x2a38acu: goto label_2a38ac;
        case 0x2a38b0u: goto label_2a38b0;
        case 0x2a38b4u: goto label_2a38b4;
        case 0x2a38b8u: goto label_2a38b8;
        case 0x2a38bcu: goto label_2a38bc;
        case 0x2a38c0u: goto label_2a38c0;
        case 0x2a38c4u: goto label_2a38c4;
        case 0x2a38c8u: goto label_2a38c8;
        case 0x2a38ccu: goto label_2a38cc;
        case 0x2a38d0u: goto label_2a38d0;
        case 0x2a38d4u: goto label_2a38d4;
        case 0x2a38d8u: goto label_2a38d8;
        case 0x2a38dcu: goto label_2a38dc;
        case 0x2a38e0u: goto label_2a38e0;
        case 0x2a38e4u: goto label_2a38e4;
        case 0x2a38e8u: goto label_2a38e8;
        case 0x2a38ecu: goto label_2a38ec;
        case 0x2a38f0u: goto label_2a38f0;
        case 0x2a38f4u: goto label_2a38f4;
        case 0x2a38f8u: goto label_2a38f8;
        case 0x2a38fcu: goto label_2a38fc;
        case 0x2a3900u: goto label_2a3900;
        case 0x2a3904u: goto label_2a3904;
        case 0x2a3908u: goto label_2a3908;
        case 0x2a390cu: goto label_2a390c;
        case 0x2a3910u: goto label_2a3910;
        case 0x2a3914u: goto label_2a3914;
        case 0x2a3918u: goto label_2a3918;
        case 0x2a391cu: goto label_2a391c;
        case 0x2a3920u: goto label_2a3920;
        case 0x2a3924u: goto label_2a3924;
        case 0x2a3928u: goto label_2a3928;
        case 0x2a392cu: goto label_2a392c;
        case 0x2a3930u: goto label_2a3930;
        case 0x2a3934u: goto label_2a3934;
        case 0x2a3938u: goto label_2a3938;
        case 0x2a393cu: goto label_2a393c;
        case 0x2a3940u: goto label_2a3940;
        case 0x2a3944u: goto label_2a3944;
        case 0x2a3948u: goto label_2a3948;
        case 0x2a394cu: goto label_2a394c;
        case 0x2a3950u: goto label_2a3950;
        case 0x2a3954u: goto label_2a3954;
        case 0x2a3958u: goto label_2a3958;
        case 0x2a395cu: goto label_2a395c;
        case 0x2a3960u: goto label_2a3960;
        case 0x2a3964u: goto label_2a3964;
        case 0x2a3968u: goto label_2a3968;
        case 0x2a396cu: goto label_2a396c;
        case 0x2a3970u: goto label_2a3970;
        case 0x2a3974u: goto label_2a3974;
        case 0x2a3978u: goto label_2a3978;
        case 0x2a397cu: goto label_2a397c;
        case 0x2a3980u: goto label_2a3980;
        case 0x2a3984u: goto label_2a3984;
        case 0x2a3988u: goto label_2a3988;
        case 0x2a398cu: goto label_2a398c;
        case 0x2a3990u: goto label_2a3990;
        case 0x2a3994u: goto label_2a3994;
        case 0x2a3998u: goto label_2a3998;
        case 0x2a399cu: goto label_2a399c;
        case 0x2a39a0u: goto label_2a39a0;
        case 0x2a39a4u: goto label_2a39a4;
        case 0x2a39a8u: goto label_2a39a8;
        case 0x2a39acu: goto label_2a39ac;
        case 0x2a39b0u: goto label_2a39b0;
        case 0x2a39b4u: goto label_2a39b4;
        case 0x2a39b8u: goto label_2a39b8;
        case 0x2a39bcu: goto label_2a39bc;
        case 0x2a39c0u: goto label_2a39c0;
        case 0x2a39c4u: goto label_2a39c4;
        case 0x2a39c8u: goto label_2a39c8;
        case 0x2a39ccu: goto label_2a39cc;
        case 0x2a39d0u: goto label_2a39d0;
        case 0x2a39d4u: goto label_2a39d4;
        case 0x2a39d8u: goto label_2a39d8;
        case 0x2a39dcu: goto label_2a39dc;
        case 0x2a39e0u: goto label_2a39e0;
        case 0x2a39e4u: goto label_2a39e4;
        case 0x2a39e8u: goto label_2a39e8;
        case 0x2a39ecu: goto label_2a39ec;
        case 0x2a39f0u: goto label_2a39f0;
        case 0x2a39f4u: goto label_2a39f4;
        case 0x2a39f8u: goto label_2a39f8;
        case 0x2a39fcu: goto label_2a39fc;
        default: break;
    }

    ctx->pc = 0x2a3360u;

label_2a3360:
    // 0x2a3360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a3360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a3364:
    // 0x2a3364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a3364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a3368:
    // 0x2a3368: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a3368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2a336c:
    // 0x2a336c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a336cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a3370:
    // 0x2a3370: 0xc09d130  jal         func_2744C0
label_2a3374:
    if (ctx->pc == 0x2A3374u) {
        ctx->pc = 0x2A3378u;
        goto label_2a3378;
    }
    ctx->pc = 0x2A3370u;
    SET_GPR_U32(ctx, 31, 0x2A3378u);
    ctx->pc = 0x2744C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744C0u, 0x2A3370u, 0x2A3378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3378u;
label_2a3378:
    // 0x2a3378: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2a3378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2a337c:
    // 0x2a337c: 0x246362c0  addiu       $v1, $v1, 0x62C0
    ctx->pc = 0x2a337cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25280));
label_2a3380:
    // 0x2a3380: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a3380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a3384:
    // 0x2a3384: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a3384u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a3388:
    // 0x2a3388: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a3388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a338c:
    // 0x2a338c: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x2a338cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
label_2a3390:
    // 0x2a3390: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a3390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a3394:
    // 0x2a3394: 0xa0400078  sb          $zero, 0x78($v0)
    ctx->pc = 0x2a3394u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 120), (uint8_t)GPR_U32(ctx, 0));
label_2a3398:
    // 0x2a3398: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a3398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a339c:
    // 0x2a339c: 0xac40007c  sw          $zero, 0x7C($v0)
    ctx->pc = 0x2a339cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 0));
label_2a33a0:
    // 0x2a33a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a33a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a33a4:
    // 0x2a33a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a33a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a33a8:
    // 0x2a33a8: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x2a33a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
label_2a33ac:
    // 0x2a33ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a33acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a33b0:
    // 0x2a33b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a33b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a33b4:
    // 0x2a33b4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a33b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2a33b8:
    // 0x2a33b8: 0x3e00008  jr          $ra
label_2a33bc:
    if (ctx->pc == 0x2A33BCu) {
        ctx->pc = 0x2A33C0u;
        goto label_2a33c0;
    }
    ctx->pc = 0x2A33B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A33B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A33C0u;
label_2a33c0:
    // 0x2a33c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a33c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a33c4:
    // 0x2a33c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a33c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a33c8:
    // 0x2a33c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a33c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2a33cc:
    // 0x2a33cc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2a33ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_2a33d0:
    // 0x2a33d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a33d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a33d4:
    // 0x2a33d4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2a33d8:
    if (ctx->pc == 0x2A33D8u) {
        ctx->pc = 0x2A33DCu;
        goto label_2a33dc;
    }
    ctx->pc = 0x2A33D4u;
    {
        const bool branch_taken_0x2a33d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a33d4) {
            ctx->pc = 0x2A341Cu;
            goto label_2a341c;
        }
    }
    ctx->pc = 0x2A33DCu;
label_2a33dc:
    // 0x2a33dc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2a33dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2a33e0:
    // 0x2a33e0: 0x246362c0  addiu       $v1, $v1, 0x62C0
    ctx->pc = 0x2a33e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25280));
label_2a33e4:
    // 0x2a33e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a33e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a33e8:
    // 0x2a33e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a33e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a33ec:
    // 0x2a33ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a33ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a33f0:
    // 0x2a33f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a33f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a33f4:
    // 0x2a33f4: 0xc09d150  jal         func_274540
label_2a33f8:
    if (ctx->pc == 0x2A33F8u) {
        ctx->pc = 0x2A33FCu;
        goto label_2a33fc;
    }
    ctx->pc = 0x2A33F4u;
    SET_GPR_U32(ctx, 31, 0x2A33FCu);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x2A33F4u, 0x2A33FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A33FCu;
label_2a33fc:
    // 0x2a33fc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2a33fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_2a3400:
    // 0x2a3400: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2a3400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_2a3404:
    // 0x2a3404: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a3404u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2a3408:
    // 0x2a3408: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_2a340c:
    if (ctx->pc == 0x2A340Cu) {
        ctx->pc = 0x2A3410u;
        goto label_2a3410;
    }
    ctx->pc = 0x2A3408u;
    {
        const bool branch_taken_0x2a3408 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2a3408) {
            ctx->pc = 0x2A341Cu;
            goto label_2a341c;
        }
    }
    ctx->pc = 0x2A3410u;
label_2a3410:
    // 0x2a3410: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a3410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a3414:
    // 0x2a3414: 0xc0ba070  jal         func_2E81C0
label_2a3418:
    if (ctx->pc == 0x2A3418u) {
        ctx->pc = 0x2A341Cu;
        goto label_2a341c;
    }
    ctx->pc = 0x2A3414u;
    SET_GPR_U32(ctx, 31, 0x2A341Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2A3414u, 0x2A341Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A341Cu;
label_2a341c:
    // 0x2a341c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a341cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a3420:
    // 0x2a3420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a3420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a3424:
    // 0x2a3424: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2a3424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2a3428:
    // 0x2a3428: 0x3e00008  jr          $ra
label_2a342c:
    if (ctx->pc == 0x2A342Cu) {
        ctx->pc = 0x2A3430u;
        goto label_2a3430;
    }
    ctx->pc = 0x2A3428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3430u;
label_2a3430:
    // 0x2a3430: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a3430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2a3434:
    // 0x2a3434: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a3434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a3438:
    // 0x2a3438: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a3438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a343c:
    // 0x2a343c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2a343cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_2a3440:
    // 0x2a3440: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2a3440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_2a3444:
    // 0x2a3444: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2a3444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_2a3448:
    // 0x2a3448: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2a3448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2a344c:
    // 0x2a344c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2a344cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a3450:
    // 0x2a3450: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2a3450u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a3454:
    // 0x2a3454: 0xc09d18c  jal         func_274630
label_2a3458:
    if (ctx->pc == 0x2A3458u) {
        ctx->pc = 0x2A345Cu;
        goto label_2a345c;
    }
    ctx->pc = 0x2A3454u;
    SET_GPR_U32(ctx, 31, 0x2A345Cu);
    ctx->pc = 0x274630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274630u, 0x2A3454u, 0x2A345Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A345Cu;
label_2a345c:
    // 0x2a345c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2a345cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2a3460:
    // 0x2a3460: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a3460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a3464:
    // 0x2a3464: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a3464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a3468:
    // 0x2a3468: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a3468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a346c:
    // 0x2a346c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2a346cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a3470:
    // 0x2a3470: 0x3e00008  jr          $ra
label_2a3474:
    if (ctx->pc == 0x2A3474u) {
        ctx->pc = 0x2A3478u;
        goto label_2a3478;
    }
    ctx->pc = 0x2A3470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3478u;
label_2a3478:
    // 0x2a3478: 0x0  nop
    ctx->pc = 0x2a3478u;
    // NOP
label_2a347c:
    // 0x2a347c: 0x0  nop
    ctx->pc = 0x2a347cu;
    // NOP
label_2a3480:
    // 0x2a3480: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a3480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2a3484:
    // 0x2a3484: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a3484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2a3488:
    // 0x2a3488: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a3488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a348c:
    // 0x2a348c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a348cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a3490:
    // 0x2a3490: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2a3490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_2a3494:
    // 0x2a3494: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2a3494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a3498:
    // 0x2a3498: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x2a3498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2a349c:
    // 0x2a349c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a349cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2a34a0:
    // 0x2a34a0: 0xc085538  jal         func_2154E0
label_2a34a4:
    if (ctx->pc == 0x2A34A4u) {
        ctx->pc = 0x2A34A8u;
        goto label_2a34a8;
    }
    ctx->pc = 0x2A34A0u;
    SET_GPR_U32(ctx, 31, 0x2A34A8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A34A0u, 0x2A34A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A34A8u;
label_2a34a8:
    // 0x2a34a8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2a34a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a34ac:
    // 0x2a34ac: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x2a34acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_2a34b0:
    // 0x2a34b0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2a34b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a34b4:
    // 0x2a34b4: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a34b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2a34b8:
    // 0x2a34b8: 0xc0a85b4  jal         func_2A16D0
label_2a34bc:
    if (ctx->pc == 0x2A34BCu) {
        ctx->pc = 0x2A34C0u;
        goto label_2a34c0;
    }
    ctx->pc = 0x2A34B8u;
    SET_GPR_U32(ctx, 31, 0x2A34C0u);
    ctx->pc = 0x2A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A16D0u, 0x2A34B8u, 0x2A34C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A34C0u;
label_2a34c0:
    // 0x2a34c0: 0x8f83a5cc  lw          $v1, -0x5A34($gp)
    ctx->pc = 0x2a34c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944204)));
label_2a34c4:
    // 0x2a34c4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2a34c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a34c8:
    // 0x2a34c8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2a34cc:
    if (ctx->pc == 0x2A34CCu) {
        ctx->pc = 0x2A34D0u;
        goto label_2a34d0;
    }
    ctx->pc = 0x2A34C8u;
    {
        const bool branch_taken_0x2a34c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a34c8) {
            ctx->pc = 0x2A34ECu;
            goto label_2a34ec;
        }
    }
    ctx->pc = 0x2A34D0u;
label_2a34d0:
    // 0x2a34d0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a34d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2a34d4:
    // 0x2a34d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a34d8:
    if (ctx->pc == 0x2A34D8u) {
        ctx->pc = 0x2A34DCu;
        goto label_2a34dc;
    }
    ctx->pc = 0x2A34D4u;
    {
        const bool branch_taken_0x2a34d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a34d4) {
            ctx->pc = 0x2A34ECu;
            goto label_2a34ec;
        }
    }
    ctx->pc = 0x2A34DCu;
label_2a34dc:
    // 0x2a34dc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a34dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2a34e0:
    // 0x2a34e0: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x2a34e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_2a34e4:
    // 0x2a34e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a34e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2a34e8:
    // 0x2a34e8: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2a34e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_2a34ec:
    // 0x2a34ec: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2a34ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a34f0:
    // 0x2a34f0: 0xc09d1d8  jal         func_274760
label_2a34f4:
    if (ctx->pc == 0x2A34F4u) {
        ctx->pc = 0x2A34F8u;
        goto label_2a34f8;
    }
    ctx->pc = 0x2A34F0u;
    SET_GPR_U32(ctx, 31, 0x2A34F8u);
    ctx->pc = 0x274760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274760u, 0x2A34F0u, 0x2A34F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A34F8u;
label_2a34f8:
    // 0x2a34f8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2a34f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2a34fc:
    // 0x2a34fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a34fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a3500:
    // 0x2a3500: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a3500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a3504:
    // 0x2a3504: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a3504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a3508:
    // 0x2a3508: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a3508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a350c:
    // 0x2a350c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2a350cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2a3510:
    // 0x2a3510: 0x3e00008  jr          $ra
label_2a3514:
    if (ctx->pc == 0x2A3514u) {
        ctx->pc = 0x2A3518u;
        goto label_2a3518;
    }
    ctx->pc = 0x2A3510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3518u;
label_2a3518:
    // 0x2a3518: 0x0  nop
    ctx->pc = 0x2a3518u;
    // NOP
label_2a351c:
    // 0x2a351c: 0x0  nop
    ctx->pc = 0x2a351cu;
    // NOP
label_2a3520:
    // 0x2a3520: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a3520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2a3524:
    // 0x2a3524: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a3524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2a3528:
    // 0x2a3528: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a3528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a352c:
    // 0x2a352c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a352cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a3530:
    // 0x2a3530: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2a3530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_2a3534:
    // 0x2a3534: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2a3534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2a3538:
    // 0x2a3538: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2a3538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a353c:
    // 0x2a353c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2a353cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a3540:
    // 0x2a3540: 0xc09d1e4  jal         func_274790
label_2a3544:
    if (ctx->pc == 0x2A3544u) {
        ctx->pc = 0x2A3548u;
        goto label_2a3548;
    }
    ctx->pc = 0x2A3540u;
    SET_GPR_U32(ctx, 31, 0x2A3548u);
    ctx->pc = 0x274790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274790u, 0x2A3540u, 0x2A3548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3548u;
label_2a3548:
    // 0x2a3548: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2a3548u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2a354c:
    // 0x2a354c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2a354cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a3550:
    // 0x2a3550: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x2a3550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2a3554:
    // 0x2a3554: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a3554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2a3558:
    // 0x2a3558: 0xc085538  jal         func_2154E0
label_2a355c:
    if (ctx->pc == 0x2A355Cu) {
        ctx->pc = 0x2A3560u;
        goto label_2a3560;
    }
    ctx->pc = 0x2A3558u;
    SET_GPR_U32(ctx, 31, 0x2A3560u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A3558u, 0x2A3560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3560u;
label_2a3560:
    // 0x2a3560: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2a3560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a3564:
    // 0x2a3564: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x2a3564u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_2a3568:
    // 0x2a3568: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2a3568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a356c:
    // 0x2a356c: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a356cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2a3570:
    // 0x2a3570: 0xc0a85b4  jal         func_2A16D0
label_2a3574:
    if (ctx->pc == 0x2A3574u) {
        ctx->pc = 0x2A3578u;
        goto label_2a3578;
    }
    ctx->pc = 0x2A3570u;
    SET_GPR_U32(ctx, 31, 0x2A3578u);
    ctx->pc = 0x2A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A16D0u, 0x2A3570u, 0x2A3578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3578u;
label_2a3578:
    // 0x2a3578: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x2a3578u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2a357c:
    // 0x2a357c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a357cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a3580:
    // 0x2a3580: 0xc0c7620  jal         func_31D880
label_2a3584:
    if (ctx->pc == 0x2A3584u) {
        ctx->pc = 0x2A3588u;
        goto label_2a3588;
    }
    ctx->pc = 0x2A3580u;
    SET_GPR_U32(ctx, 31, 0x2A3588u);
    ctx->pc = 0x31D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D880u, 0x2A3580u, 0x2A3588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3588u;
label_2a3588:
    // 0x2a3588: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2a3588u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2a358c:
    // 0x2a358c: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
label_2a3590:
    if (ctx->pc == 0x2A3590u) {
        ctx->pc = 0x2A3594u;
        goto label_2a3594;
    }
    ctx->pc = 0x2A358Cu;
    {
        const bool branch_taken_0x2a358c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a358c) {
            ctx->pc = 0x2A35E0u;
            goto label_2a35e0;
        }
    }
    ctx->pc = 0x2A3594u;
label_2a3594:
    // 0x2a3594: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2a3594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a3598:
    // 0x2a3598: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2a3598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2a359c:
    // 0x2a359c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a359cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2a35a0:
    // 0x2a35a0: 0x24a5db10  addiu       $a1, $a1, -0x24F0
    ctx->pc = 0x2a35a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957840));
label_2a35a4:
    // 0x2a35a4: 0x2786a3e0  addiu       $a2, $gp, -0x5C20
    ctx->pc = 0x2a35a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943712));
label_2a35a8:
    // 0x2a35a8: 0xc04206c  jal         func_1081B0
label_2a35ac:
    if (ctx->pc == 0x2A35ACu) {
        ctx->pc = 0x2A35B0u;
        goto label_2a35b0;
    }
    ctx->pc = 0x2A35A8u;
    SET_GPR_U32(ctx, 31, 0x2A35B0u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x2A35A8u, 0x2A35B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A35B0u;
label_2a35b0:
    // 0x2a35b0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2a35b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a35b4:
    // 0x2a35b4: 0x24640058  addiu       $a0, $v1, 0x58
    ctx->pc = 0x2a35b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
label_2a35b8:
    // 0x2a35b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a35b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a35bc:
    // 0x2a35bc: 0xc0bc5c6  jal         func_2F1718
label_2a35c0:
    if (ctx->pc == 0x2A35C0u) {
        ctx->pc = 0x2A35C4u;
        goto label_2a35c4;
    }
    ctx->pc = 0x2A35BCu;
    SET_GPR_U32(ctx, 31, 0x2A35C4u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2A35BCu, 0x2A35C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A35C4u;
label_2a35c4:
    // 0x2a35c4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2a35c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a35c8:
    // 0x2a35c8: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x2a35c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
label_2a35cc:
    // 0x2a35cc: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x2a35ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_2a35d0:
    // 0x2a35d0: 0xc08a78c  jal         func_229E30
label_2a35d4:
    if (ctx->pc == 0x2A35D4u) {
        ctx->pc = 0x2A35D8u;
        goto label_2a35d8;
    }
    ctx->pc = 0x2A35D0u;
    SET_GPR_U32(ctx, 31, 0x2A35D8u);
    ctx->pc = 0x229E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229E30u, 0x2A35D0u, 0x2A35D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A35D8u;
label_2a35d8:
    // 0x2a35d8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2a35d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a35dc:
    // 0x2a35dc: 0xac62007c  sw          $v0, 0x7C($v1)
    ctx->pc = 0x2a35dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 2));
label_2a35e0:
    // 0x2a35e0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a35e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a35e4:
    // 0x2a35e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a35e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a35e8:
    // 0x2a35e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a35e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a35ec:
    // 0x2a35ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a35ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a35f0:
    // 0x2a35f0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2a35f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a35f4:
    // 0x2a35f4: 0x3e00008  jr          $ra
label_2a35f8:
    if (ctx->pc == 0x2A35F8u) {
        ctx->pc = 0x2A35FCu;
        goto label_2a35fc;
    }
    ctx->pc = 0x2A35F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A35F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A35FCu;
label_2a35fc:
    // 0x2a35fc: 0x0  nop
    ctx->pc = 0x2a35fcu;
    // NOP
label_2a3600:
    // 0x2a3600: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a3600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2a3604:
    // 0x2a3604: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a3604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2a3608:
    // 0x2a3608: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a3608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a360c:
    // 0x2a360c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a360cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a3610:
    // 0x2a3610: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a3610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a3614:
    // 0x2a3614: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2a3614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_2a3618:
    // 0x2a3618: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a3618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a361c:
    // 0x2a361c: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a361cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2a3620:
    // 0x2a3620: 0xc0a85b4  jal         func_2A16D0
label_2a3624:
    if (ctx->pc == 0x2A3624u) {
        ctx->pc = 0x2A3628u;
        goto label_2a3628;
    }
    ctx->pc = 0x2A3620u;
    SET_GPR_U32(ctx, 31, 0x2A3628u);
    ctx->pc = 0x2A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A16D0u, 0x2A3620u, 0x2A3628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3628u;
label_2a3628:
    // 0x2a3628: 0x8c520018  lw          $s2, 0x18($v0)
    ctx->pc = 0x2a3628u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2a362c:
    // 0x2a362c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a362cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3630:
    // 0x2a3630: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a3630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a3634:
    // 0x2a3634: 0xc0c7620  jal         func_31D880
label_2a3638:
    if (ctx->pc == 0x2A3638u) {
        ctx->pc = 0x2A363Cu;
        goto label_2a363c;
    }
    ctx->pc = 0x2A3634u;
    SET_GPR_U32(ctx, 31, 0x2A363Cu);
    ctx->pc = 0x31D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D880u, 0x2A3634u, 0x2A363Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A363Cu;
label_2a363c:
    // 0x2a363c: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2a363cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2a3640:
    // 0x2a3640: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_2a3644:
    if (ctx->pc == 0x2A3644u) {
        ctx->pc = 0x2A3648u;
        goto label_2a3648;
    }
    ctx->pc = 0x2A3640u;
    {
        const bool branch_taken_0x2a3640 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3640) {
            ctx->pc = 0x2A3650u;
            goto label_2a3650;
        }
    }
    ctx->pc = 0x2A3648u;
label_2a3648:
    // 0x2a3648: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a3648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a364c:
    // 0x2a364c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2a364cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2a3650:
    // 0x2a3650: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a3650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a3654:
    // 0x2a3654: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x2a3654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_2a3658:
    // 0x2a3658: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2a3658u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a365c:
    // 0x2a365c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2a365cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2a3660:
    // 0x2a3660: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x2a3660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_2a3664:
    // 0x2a3664: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a3664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2a3668:
    // 0x2a3668: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2a3668u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a366c:
    // 0x2a366c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a366cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2a3670:
    // 0x2a3670: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a3670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2a3674:
    // 0x2a3674: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2a3674u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2a3678:
    // 0x2a3678: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2a3678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a367c:
    // 0x2a367c: 0xc09d248  jal         func_274920
label_2a3680:
    if (ctx->pc == 0x2A3680u) {
        ctx->pc = 0x2A3684u;
        goto label_2a3684;
    }
    ctx->pc = 0x2A367Cu;
    SET_GPR_U32(ctx, 31, 0x2A3684u);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x2A367Cu, 0x2A3684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3684u;
label_2a3684:
    // 0x2a3684: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a3684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a3688:
    // 0x2a3688: 0x1043008a  beq         $v0, $v1, . + 4 + (0x8A << 2)
label_2a368c:
    if (ctx->pc == 0x2A368Cu) {
        ctx->pc = 0x2A3690u;
        goto label_2a3690;
    }
    ctx->pc = 0x2A3688u;
    {
        const bool branch_taken_0x2a3688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a3688) {
            ctx->pc = 0x2A38B4u;
            goto label_2a38b4;
        }
    }
    ctx->pc = 0x2A3690u;
label_2a3690:
    // 0x2a3690: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a3690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a3694:
    // 0x2a3694: 0x10430021  beq         $v0, $v1, . + 4 + (0x21 << 2)
label_2a3698:
    if (ctx->pc == 0x2A3698u) {
        ctx->pc = 0x2A369Cu;
        goto label_2a369c;
    }
    ctx->pc = 0x2A3694u;
    {
        const bool branch_taken_0x2a3694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a3694) {
            ctx->pc = 0x2A371Cu;
            goto label_2a371c;
        }
    }
    ctx->pc = 0x2A369Cu;
label_2a369c:
    // 0x2a369c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a369cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a36a0:
    // 0x2a36a0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_2a36a4:
    if (ctx->pc == 0x2A36A4u) {
        ctx->pc = 0x2A36A8u;
        goto label_2a36a8;
    }
    ctx->pc = 0x2A36A0u;
    {
        const bool branch_taken_0x2a36a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a36a0) {
            ctx->pc = 0x2A36B0u;
            goto label_2a36b0;
        }
    }
    ctx->pc = 0x2A36A8u;
label_2a36a8:
    // 0x2a36a8: 0x10000087  b           . + 4 + (0x87 << 2)
label_2a36ac:
    if (ctx->pc == 0x2A36ACu) {
        ctx->pc = 0x2A36B0u;
        goto label_2a36b0;
    }
    ctx->pc = 0x2A36A8u;
    {
        const bool branch_taken_0x2a36a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a36a8) {
            ctx->pc = 0x2A38C8u;
            goto label_2a38c8;
        }
    }
    ctx->pc = 0x2A36B0u;
label_2a36b0:
    // 0x2a36b0: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_2a36b4:
    if (ctx->pc == 0x2A36B4u) {
        ctx->pc = 0x2A36B8u;
        goto label_2a36b8;
    }
    ctx->pc = 0x2A36B0u;
    {
        const bool branch_taken_0x2a36b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a36b0) {
            ctx->pc = 0x2A3704u;
            goto label_2a3704;
        }
    }
    ctx->pc = 0x2A36B8u;
label_2a36b8:
    // 0x2a36b8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a36b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a36bc:
    // 0x2a36bc: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a36bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2a36c0:
    // 0x2a36c0: 0xc0a85b4  jal         func_2A16D0
label_2a36c4:
    if (ctx->pc == 0x2A36C4u) {
        ctx->pc = 0x2A36C8u;
        goto label_2a36c8;
    }
    ctx->pc = 0x2A36C0u;
    SET_GPR_U32(ctx, 31, 0x2A36C8u);
    ctx->pc = 0x2A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A16D0u, 0x2A36C0u, 0x2A36C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A36C8u;
label_2a36c8:
    // 0x2a36c8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2a36c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a36cc:
    // 0x2a36cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a36ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a36d0:
    // 0x2a36d0: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x2a36d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_2a36d4:
    // 0x2a36d4: 0xc0c786a  jal         func_31E1A8
label_2a36d8:
    if (ctx->pc == 0x2A36D8u) {
        ctx->pc = 0x2A36DCu;
        goto label_2a36dc;
    }
    ctx->pc = 0x2A36D4u;
    SET_GPR_U32(ctx, 31, 0x2A36DCu);
    ctx->pc = 0x31E1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E1A8u, 0x2A36D4u, 0x2A36DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A36DCu;
label_2a36dc:
    // 0x2a36dc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a36dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a36e0:
    // 0x2a36e0: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a36e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2a36e4:
    // 0x2a36e4: 0xc0a85b4  jal         func_2A16D0
label_2a36e8:
    if (ctx->pc == 0x2A36E8u) {
        ctx->pc = 0x2A36ECu;
        goto label_2a36ec;
    }
    ctx->pc = 0x2A36E4u;
    SET_GPR_U32(ctx, 31, 0x2A36ECu);
    ctx->pc = 0x2A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A16D0u, 0x2A36E4u, 0x2A36ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A36ECu;
label_2a36ec:
    // 0x2a36ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a36ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a36f0:
    // 0x2a36f0: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2a36f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2a36f4:
    // 0x2a36f4: 0x24a53a00  addiu       $a1, $a1, 0x3A00
    ctx->pc = 0x2a36f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14848));
label_2a36f8:
    // 0x2a36f8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2a36f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a36fc:
    // 0x2a36fc: 0xc0c79f2  jal         func_31E7C8
label_2a3700:
    if (ctx->pc == 0x2A3700u) {
        ctx->pc = 0x2A3704u;
        goto label_2a3704;
    }
    ctx->pc = 0x2A36FCu;
    SET_GPR_U32(ctx, 31, 0x2A3704u);
    ctx->pc = 0x31E7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7C8u, 0x2A36FCu, 0x2A3704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3704u;
label_2a3704:
    // 0x2a3704: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2a3704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a3708:
    // 0x2a3708: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a3708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a370c:
    // 0x2a370c: 0xc09d250  jal         func_274940
label_2a3710:
    if (ctx->pc == 0x2A3710u) {
        ctx->pc = 0x2A3714u;
        goto label_2a3714;
    }
    ctx->pc = 0x2A370Cu;
    SET_GPR_U32(ctx, 31, 0x2A3714u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2A370Cu, 0x2A3714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3714u;
label_2a3714:
    // 0x2a3714: 0x1000006c  b           . + 4 + (0x6C << 2)
label_2a3718:
    if (ctx->pc == 0x2A3718u) {
        ctx->pc = 0x2A371Cu;
        goto label_2a371c;
    }
    ctx->pc = 0x2A3714u;
    {
        const bool branch_taken_0x2a3714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3714) {
            ctx->pc = 0x2A38C8u;
            goto label_2a38c8;
        }
    }
    ctx->pc = 0x2A371Cu;
label_2a371c:
    // 0x2a371c: 0x1220005d  beqz        $s1, . + 4 + (0x5D << 2)
label_2a3720:
    if (ctx->pc == 0x2A3720u) {
        ctx->pc = 0x2A3724u;
        goto label_2a3724;
    }
    ctx->pc = 0x2A371Cu;
    {
        const bool branch_taken_0x2a371c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a371c) {
            ctx->pc = 0x2A3894u;
            goto label_2a3894;
        }
    }
    ctx->pc = 0x2A3724u;
label_2a3724:
    // 0x2a3724: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a3724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a3728:
    // 0x2a3728: 0x90420078  lbu         $v0, 0x78($v0)
    ctx->pc = 0x2a3728u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 120)));
label_2a372c:
    // 0x2a372c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_2a3730:
    if (ctx->pc == 0x2A3730u) {
        ctx->pc = 0x2A3734u;
        goto label_2a3734;
    }
    ctx->pc = 0x2A372Cu;
    {
        const bool branch_taken_0x2a372c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a372c) {
            ctx->pc = 0x2A37A4u;
            goto label_2a37a4;
        }
    }
    ctx->pc = 0x2A3734u;
label_2a3734:
    // 0x2a3734: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a3734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a3738:
    // 0x2a3738: 0xa0400078  sb          $zero, 0x78($v0)
    ctx->pc = 0x2a3738u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 120), (uint8_t)GPR_U32(ctx, 0));
label_2a373c:
    // 0x2a373c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a373cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a3740:
    // 0x2a3740: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a3740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2a3744:
    // 0x2a3744: 0xc0a85b4  jal         func_2A16D0
label_2a3748:
    if (ctx->pc == 0x2A3748u) {
        ctx->pc = 0x2A374Cu;
        goto label_2a374c;
    }
    ctx->pc = 0x2A3744u;
    SET_GPR_U32(ctx, 31, 0x2A374Cu);
    ctx->pc = 0x2A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A16D0u, 0x2A3744u, 0x2A374Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A374Cu;
label_2a374c:
    // 0x2a374c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a374cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3750:
    // 0x2a3750: 0xc0c79b8  jal         func_31E6E0
label_2a3754:
    if (ctx->pc == 0x2A3754u) {
        ctx->pc = 0x2A3758u;
        goto label_2a3758;
    }
    ctx->pc = 0x2A3750u;
    SET_GPR_U32(ctx, 31, 0x2A3758u);
    ctx->pc = 0x31E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E6E0u, 0x2A3750u, 0x2A3758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3758u;
label_2a3758:
    // 0x2a3758: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a3758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a375c:
    // 0x2a375c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a375cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a3760:
    // 0x2a3760: 0x0  nop
    ctx->pc = 0x2a3760u;
    // NOP
label_2a3764:
    // 0x2a3764: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2a3764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2a3768:
    // 0x2a3768: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a3768u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a376c:
    // 0x2a376c: 0x0  nop
    ctx->pc = 0x2a376cu;
    // NOP
label_2a3770:
    // 0x2a3770: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2a3770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_2a3774:
    // 0x2a3774: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a3774u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a3778:
    // 0x2a3778: 0x0  nop
    ctx->pc = 0x2a3778u;
    // NOP
label_2a377c:
    // 0x2a377c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2a377cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2a3780:
    // 0x2a3780: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a3780u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a3784:
    // 0x2a3784: 0x0  nop
    ctx->pc = 0x2a3784u;
    // NOP
label_2a3788:
    // 0x2a3788: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2a3788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_2a378c:
    // 0x2a378c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a378cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a3790:
    // 0x2a3790: 0x0  nop
    ctx->pc = 0x2a3790u;
    // NOP
label_2a3794:
    // 0x2a3794: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2a3794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_2a3798:
    // 0x2a3798: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a3798u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a379c:
    // 0x2a379c: 0x0  nop
    ctx->pc = 0x2a379cu;
    // NOP
label_2a37a0:
    // 0x2a37a0: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2a37a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_2a37a4:
    // 0x2a37a4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a37a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a37a8:
    // 0x2a37a8: 0xc4410080  lwc1        $f1, 0x80($v0)
    ctx->pc = 0x2a37a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a37ac:
    // 0x2a37ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a37acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a37b0:
    // 0x2a37b0: 0x0  nop
    ctx->pc = 0x2a37b0u;
    // NOP
label_2a37b4:
    // 0x2a37b4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2a37b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a37b8:
    // 0x2a37b8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_2a37bc:
    if (ctx->pc == 0x2A37BCu) {
        ctx->pc = 0x2A37C0u;
        goto label_2a37c0;
    }
    ctx->pc = 0x2A37B8u;
    {
        const bool branch_taken_0x2a37b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a37b8) {
            ctx->pc = 0x2A37ECu;
            goto label_2a37ec;
        }
    }
    ctx->pc = 0x2A37C0u;
label_2a37c0:
    // 0x2a37c0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a37c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a37c4:
    // 0x2a37c4: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a37c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2a37c8:
    // 0x2a37c8: 0xc0a85b4  jal         func_2A16D0
label_2a37cc:
    if (ctx->pc == 0x2A37CCu) {
        ctx->pc = 0x2A37D0u;
        goto label_2a37d0;
    }
    ctx->pc = 0x2A37C8u;
    SET_GPR_U32(ctx, 31, 0x2A37D0u);
    ctx->pc = 0x2A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A16D0u, 0x2A37C8u, 0x2A37D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A37D0u;
label_2a37d0:
    // 0x2a37d0: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x2a37d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2a37d4:
    // 0x2a37d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a37d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a37d8:
    // 0x2a37d8: 0xc46c000c  lwc1        $f12, 0xC($v1)
    ctx->pc = 0x2a37d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a37dc:
    // 0x2a37dc: 0xc0c7910  jal         func_31E440
label_2a37e0:
    if (ctx->pc == 0x2A37E0u) {
        ctx->pc = 0x2A37E4u;
        goto label_2a37e4;
    }
    ctx->pc = 0x2A37DCu;
    SET_GPR_U32(ctx, 31, 0x2A37E4u);
    ctx->pc = 0x31E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E440u, 0x2A37DCu, 0x2A37E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A37E4u;
label_2a37e4:
    // 0x2a37e4: 0x10000038  b           . + 4 + (0x38 << 2)
label_2a37e8:
    if (ctx->pc == 0x2A37E8u) {
        ctx->pc = 0x2A37ECu;
        goto label_2a37ec;
    }
    ctx->pc = 0x2A37E4u;
    {
        const bool branch_taken_0x2a37e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a37e4) {
            ctx->pc = 0x2A38C8u;
            goto label_2a38c8;
        }
    }
    ctx->pc = 0x2A37ECu;
label_2a37ec:
    // 0x2a37ec: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a37ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a37f0:
    // 0x2a37f0: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a37f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2a37f4:
    // 0x2a37f4: 0xc0a85b4  jal         func_2A16D0
label_2a37f8:
    if (ctx->pc == 0x2A37F8u) {
        ctx->pc = 0x2A37FCu;
        goto label_2a37fc;
    }
    ctx->pc = 0x2A37F4u;
    SET_GPR_U32(ctx, 31, 0x2A37FCu);
    ctx->pc = 0x2A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A16D0u, 0x2A37F4u, 0x2A37FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A37FCu;
label_2a37fc:
    // 0x2a37fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a37fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3800:
    // 0x2a3800: 0xc0c79e2  jal         func_31E788
label_2a3804:
    if (ctx->pc == 0x2A3804u) {
        ctx->pc = 0x2A3808u;
        goto label_2a3808;
    }
    ctx->pc = 0x2A3800u;
    SET_GPR_U32(ctx, 31, 0x2A3808u);
    ctx->pc = 0x31E788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E788u, 0x2A3800u, 0x2A3808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3808u;
label_2a3808:
    // 0x2a3808: 0x14020014  bne         $zero, $v0, . + 4 + (0x14 << 2)
label_2a380c:
    if (ctx->pc == 0x2A380Cu) {
        ctx->pc = 0x2A3810u;
        goto label_2a3810;
    }
    ctx->pc = 0x2A3808u;
    {
        const bool branch_taken_0x2a3808 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a3808) {
            ctx->pc = 0x2A385Cu;
            goto label_2a385c;
        }
    }
    ctx->pc = 0x2A3810u;
label_2a3810:
    // 0x2a3810: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a3810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a3814:
    // 0x2a3814: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a3814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2a3818:
    // 0x2a3818: 0xc0a85b4  jal         func_2A16D0
label_2a381c:
    if (ctx->pc == 0x2A381Cu) {
        ctx->pc = 0x2A3820u;
        goto label_2a3820;
    }
    ctx->pc = 0x2A3818u;
    SET_GPR_U32(ctx, 31, 0x2A3820u);
    ctx->pc = 0x2A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A16D0u, 0x2A3818u, 0x2A3820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3820u;
label_2a3820:
    // 0x2a3820: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2a3820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a3824:
    // 0x2a3824: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a3824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3828:
    // 0x2a3828: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x2a3828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_2a382c:
    // 0x2a382c: 0xc0c786a  jal         func_31E1A8
label_2a3830:
    if (ctx->pc == 0x2A3830u) {
        ctx->pc = 0x2A3834u;
        goto label_2a3834;
    }
    ctx->pc = 0x2A382Cu;
    SET_GPR_U32(ctx, 31, 0x2A3834u);
    ctx->pc = 0x31E1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E1A8u, 0x2A382Cu, 0x2A3834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3834u;
label_2a3834:
    // 0x2a3834: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a3834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a3838:
    // 0x2a3838: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a3838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2a383c:
    // 0x2a383c: 0xc0a85b4  jal         func_2A16D0
label_2a3840:
    if (ctx->pc == 0x2A3840u) {
        ctx->pc = 0x2A3844u;
        goto label_2a3844;
    }
    ctx->pc = 0x2A383Cu;
    SET_GPR_U32(ctx, 31, 0x2A3844u);
    ctx->pc = 0x2A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A16D0u, 0x2A383Cu, 0x2A3844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3844u;
label_2a3844:
    // 0x2a3844: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a3844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3848:
    // 0x2a3848: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2a3848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2a384c:
    // 0x2a384c: 0x24a53a00  addiu       $a1, $a1, 0x3A00
    ctx->pc = 0x2a384cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14848));
label_2a3850:
    // 0x2a3850: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2a3850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a3854:
    // 0x2a3854: 0xc0c79f2  jal         func_31E7C8
label_2a3858:
    if (ctx->pc == 0x2A3858u) {
        ctx->pc = 0x2A385Cu;
        goto label_2a385c;
    }
    ctx->pc = 0x2A3854u;
    SET_GPR_U32(ctx, 31, 0x2A385Cu);
    ctx->pc = 0x31E7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7C8u, 0x2A3854u, 0x2A385Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A385Cu;
label_2a385c:
    // 0x2a385c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a385cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a3860:
    // 0x2a3860: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a3860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2a3864:
    // 0x2a3864: 0xc0a85b4  jal         func_2A16D0
label_2a3868:
    if (ctx->pc == 0x2A3868u) {
        ctx->pc = 0x2A386Cu;
        goto label_2a386c;
    }
    ctx->pc = 0x2A3864u;
    SET_GPR_U32(ctx, 31, 0x2A386Cu);
    ctx->pc = 0x2A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A16D0u, 0x2A3864u, 0x2A386Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A386Cu;
label_2a386c:
    // 0x2a386c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2a386cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a3870:
    // 0x2a3870: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a3870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3874:
    // 0x2a3874: 0xc46c0080  lwc1        $f12, 0x80($v1)
    ctx->pc = 0x2a3874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a3878:
    // 0x2a3878: 0xc0c7910  jal         func_31E440
label_2a387c:
    if (ctx->pc == 0x2A387Cu) {
        ctx->pc = 0x2A3880u;
        goto label_2a3880;
    }
    ctx->pc = 0x2A3878u;
    SET_GPR_U32(ctx, 31, 0x2A3880u);
    ctx->pc = 0x31E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E440u, 0x2A3878u, 0x2A3880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3880u;
label_2a3880:
    // 0x2a3880: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a3880u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a3884:
    // 0x2a3884: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2a3884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a3888:
    // 0x2a3888: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x2a3888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
label_2a388c:
    // 0x2a388c: 0x1000000e  b           . + 4 + (0xE << 2)
label_2a3890:
    if (ctx->pc == 0x2A3890u) {
        ctx->pc = 0x2A3894u;
        goto label_2a3894;
    }
    ctx->pc = 0x2A388Cu;
    {
        const bool branch_taken_0x2a388c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a388c) {
            ctx->pc = 0x2A38C8u;
            goto label_2a38c8;
        }
    }
    ctx->pc = 0x2A3894u;
label_2a3894:
    // 0x2a3894: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x2a3894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2a3898:
    // 0x2a3898: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2a3898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a389c:
    // 0x2a389c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2a389cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a38a0:
    // 0x2a38a0: 0xc4600080  lwc1        $f0, 0x80($v1)
    ctx->pc = 0x2a38a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a38a4:
    // 0x2a38a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a38a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2a38a8:
    // 0x2a38a8: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x2a38a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
label_2a38ac:
    // 0x2a38ac: 0x10000006  b           . + 4 + (0x6 << 2)
label_2a38b0:
    if (ctx->pc == 0x2A38B0u) {
        ctx->pc = 0x2A38B4u;
        goto label_2a38b4;
    }
    ctx->pc = 0x2A38ACu;
    {
        const bool branch_taken_0x2a38ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a38ac) {
            ctx->pc = 0x2A38C8u;
            goto label_2a38c8;
        }
    }
    ctx->pc = 0x2A38B4u;
label_2a38b4:
    // 0x2a38b4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2a38b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a38b8:
    // 0x2a38b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a38b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a38bc:
    // 0x2a38bc: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x2a38bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_2a38c0:
    // 0x2a38c0: 0x320f809  jalr        $t9
label_2a38c4:
    if (ctx->pc == 0x2A38C4u) {
        ctx->pc = 0x2A38C8u;
        goto label_2a38c8;
    }
    ctx->pc = 0x2A38C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A38C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A38C0u, 0x2A38C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A38C8u;
label_2a38c8:
    // 0x2a38c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a38c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2a38cc:
    // 0x2a38cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a38ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a38d0:
    // 0x2a38d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a38d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a38d4:
    // 0x2a38d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a38d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a38d8:
    // 0x2a38d8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2a38d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a38dc:
    // 0x2a38dc: 0x3e00008  jr          $ra
label_2a38e0:
    if (ctx->pc == 0x2A38E0u) {
        ctx->pc = 0x2A38E4u;
        goto label_2a38e4;
    }
    ctx->pc = 0x2A38DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A38DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A38E4u;
label_2a38e4:
    // 0x2a38e4: 0x0  nop
    ctx->pc = 0x2a38e4u;
    // NOP
label_2a38e8:
    // 0x2a38e8: 0x0  nop
    ctx->pc = 0x2a38e8u;
    // NOP
label_2a38ec:
    // 0x2a38ec: 0x0  nop
    ctx->pc = 0x2a38ecu;
    // NOP
label_2a38f0:
    // 0x2a38f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a38f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2a38f4:
    // 0x2a38f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a38f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2a38f8:
    // 0x2a38f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a38f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a38fc:
    // 0x2a38fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a38fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a3900:
    // 0x2a3900: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a3900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a3904:
    // 0x2a3904: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2a3904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_2a3908:
    // 0x2a3908: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a3908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a390c:
    // 0x2a390c: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a390cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2a3910:
    // 0x2a3910: 0xc0a85b4  jal         func_2A16D0
label_2a3914:
    if (ctx->pc == 0x2A3914u) {
        ctx->pc = 0x2A3918u;
        goto label_2a3918;
    }
    ctx->pc = 0x2A3910u;
    SET_GPR_U32(ctx, 31, 0x2A3918u);
    ctx->pc = 0x2A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A16D0u, 0x2A3910u, 0x2A3918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3918u;
label_2a3918:
    // 0x2a3918: 0x8c520018  lw          $s2, 0x18($v0)
    ctx->pc = 0x2a3918u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2a391c:
    // 0x2a391c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a391cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a3920:
    // 0x2a3920: 0xc0c7620  jal         func_31D880
label_2a3924:
    if (ctx->pc == 0x2A3924u) {
        ctx->pc = 0x2A3928u;
        goto label_2a3928;
    }
    ctx->pc = 0x2A3920u;
    SET_GPR_U32(ctx, 31, 0x2A3928u);
    ctx->pc = 0x31D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D880u, 0x2A3920u, 0x2A3928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3928u;
label_2a3928:
    // 0x2a3928: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a3928u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a392c:
    // 0x2a392c: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x2a392cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2a3930:
    // 0x2a3930: 0x14200023  bnez        $at, . + 4 + (0x23 << 2)
label_2a3934:
    if (ctx->pc == 0x2A3934u) {
        ctx->pc = 0x2A3938u;
        goto label_2a3938;
    }
    ctx->pc = 0x2A3930u;
    {
        const bool branch_taken_0x2a3930 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3930) {
            ctx->pc = 0x2A39C0u;
            goto label_2a39c0;
        }
    }
    ctx->pc = 0x2A3938u;
label_2a3938:
    // 0x2a3938: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a3938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a393c:
    // 0x2a393c: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a393cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2a3940:
    // 0x2a3940: 0xc0a85b4  jal         func_2A16D0
label_2a3944:
    if (ctx->pc == 0x2A3944u) {
        ctx->pc = 0x2A3948u;
        goto label_2a3948;
    }
    ctx->pc = 0x2A3940u;
    SET_GPR_U32(ctx, 31, 0x2A3948u);
    ctx->pc = 0x2A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A16D0u, 0x2A3940u, 0x2A3948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3948u;
label_2a3948:
    // 0x2a3948: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a3948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a394c:
    // 0x2a394c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a394cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3950:
    // 0x2a3950: 0xc0c786a  jal         func_31E1A8
label_2a3954:
    if (ctx->pc == 0x2A3954u) {
        ctx->pc = 0x2A3958u;
        goto label_2a3958;
    }
    ctx->pc = 0x2A3950u;
    SET_GPR_U32(ctx, 31, 0x2A3958u);
    ctx->pc = 0x31E1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E1A8u, 0x2A3950u, 0x2A3958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3958u;
label_2a3958:
    // 0x2a3958: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a3958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a395c:
    // 0x2a395c: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a395cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2a3960:
    // 0x2a3960: 0xc0a85b4  jal         func_2A16D0
label_2a3964:
    if (ctx->pc == 0x2A3964u) {
        ctx->pc = 0x2A3968u;
        goto label_2a3968;
    }
    ctx->pc = 0x2A3960u;
    SET_GPR_U32(ctx, 31, 0x2A3968u);
    ctx->pc = 0x2A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A16D0u, 0x2A3960u, 0x2A3968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3968u;
label_2a3968:
    // 0x2a3968: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a3968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a396c:
    // 0x2a396c: 0xc0c79b8  jal         func_31E6E0
label_2a3970:
    if (ctx->pc == 0x2A3970u) {
        ctx->pc = 0x2A3974u;
        goto label_2a3974;
    }
    ctx->pc = 0x2A396Cu;
    SET_GPR_U32(ctx, 31, 0x2A3974u);
    ctx->pc = 0x31E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E6E0u, 0x2A396Cu, 0x2A3974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3974u;
label_2a3974:
    // 0x2a3974: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a3974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3978:
    // 0x2a3978: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a3978u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a397c:
    // 0x2a397c: 0x0  nop
    ctx->pc = 0x2a397cu;
    // NOP
label_2a3980:
    // 0x2a3980: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2a3980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2a3984:
    // 0x2a3984: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a3984u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a3988:
    // 0x2a3988: 0x0  nop
    ctx->pc = 0x2a3988u;
    // NOP
label_2a398c:
    // 0x2a398c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2a398cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_2a3990:
    // 0x2a3990: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a3990u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a3994:
    // 0x2a3994: 0x0  nop
    ctx->pc = 0x2a3994u;
    // NOP
label_2a3998:
    // 0x2a3998: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2a3998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2a399c:
    // 0x2a399c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a399cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a39a0:
    // 0x2a39a0: 0x0  nop
    ctx->pc = 0x2a39a0u;
    // NOP
label_2a39a4:
    // 0x2a39a4: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2a39a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_2a39a8:
    // 0x2a39a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a39a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a39ac:
    // 0x2a39ac: 0x0  nop
    ctx->pc = 0x2a39acu;
    // NOP
label_2a39b0:
    // 0x2a39b0: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2a39b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_2a39b4:
    // 0x2a39b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a39b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a39b8:
    // 0x2a39b8: 0x0  nop
    ctx->pc = 0x2a39b8u;
    // NOP
label_2a39bc:
    // 0x2a39bc: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2a39bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_2a39c0:
    // 0x2a39c0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a39c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a39c4:
    // 0x2a39c4: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x2a39c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_2a39c8:
    // 0x2a39c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2a39cc:
    if (ctx->pc == 0x2A39CCu) {
        ctx->pc = 0x2A39D0u;
        goto label_2a39d0;
    }
    ctx->pc = 0x2A39C8u;
    {
        const bool branch_taken_0x2a39c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a39c8) {
            ctx->pc = 0x2A39D8u;
            goto label_2a39d8;
        }
    }
    ctx->pc = 0x2A39D0u;
label_2a39d0:
    // 0x2a39d0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a39d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a39d4:
    // 0x2a39d4: 0xac40007c  sw          $zero, 0x7C($v0)
    ctx->pc = 0x2a39d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 0));
label_2a39d8:
    // 0x2a39d8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2a39d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a39dc:
    // 0x2a39dc: 0xc09d220  jal         func_274880
label_2a39e0:
    if (ctx->pc == 0x2A39E0u) {
        ctx->pc = 0x2A39E4u;
        goto label_2a39e4;
    }
    ctx->pc = 0x2A39DCu;
    SET_GPR_U32(ctx, 31, 0x2A39E4u);
    ctx->pc = 0x274880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274880u, 0x2A39DCu, 0x2A39E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A39E4u;
label_2a39e4:
    // 0x2a39e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a39e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2a39e8:
    // 0x2a39e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a39e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a39ec:
    // 0x2a39ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a39ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a39f0:
    // 0x2a39f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a39f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a39f4:
    // 0x2a39f4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2a39f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a39f8:
    // 0x2a39f8: 0x3e00008  jr          $ra
label_2a39fc:
    if (ctx->pc == 0x2A39FCu) {
        ctx->pc = 0x2A3A00u;
        goto label_fallthrough_0x2a39f8;
    }
    ctx->pc = 0x2A39F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A39F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a39f8:
    ctx->pc = 0x2A3A00u;
}
