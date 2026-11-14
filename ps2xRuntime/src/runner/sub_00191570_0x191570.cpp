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

// Function: sub_00191570
// Address: 0x191570 - 0x191d10
void sub_00191570_0x191570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191570_0x191570");
#endif

    switch (ctx->pc) {
        case 0x191570u: goto label_191570;
        case 0x191574u: goto label_191574;
        case 0x191578u: goto label_191578;
        case 0x19157cu: goto label_19157c;
        case 0x191580u: goto label_191580;
        case 0x191584u: goto label_191584;
        case 0x191588u: goto label_191588;
        case 0x19158cu: goto label_19158c;
        case 0x191590u: goto label_191590;
        case 0x191594u: goto label_191594;
        case 0x191598u: goto label_191598;
        case 0x19159cu: goto label_19159c;
        case 0x1915a0u: goto label_1915a0;
        case 0x1915a4u: goto label_1915a4;
        case 0x1915a8u: goto label_1915a8;
        case 0x1915acu: goto label_1915ac;
        case 0x1915b0u: goto label_1915b0;
        case 0x1915b4u: goto label_1915b4;
        case 0x1915b8u: goto label_1915b8;
        case 0x1915bcu: goto label_1915bc;
        case 0x1915c0u: goto label_1915c0;
        case 0x1915c4u: goto label_1915c4;
        case 0x1915c8u: goto label_1915c8;
        case 0x1915ccu: goto label_1915cc;
        case 0x1915d0u: goto label_1915d0;
        case 0x1915d4u: goto label_1915d4;
        case 0x1915d8u: goto label_1915d8;
        case 0x1915dcu: goto label_1915dc;
        case 0x1915e0u: goto label_1915e0;
        case 0x1915e4u: goto label_1915e4;
        case 0x1915e8u: goto label_1915e8;
        case 0x1915ecu: goto label_1915ec;
        case 0x1915f0u: goto label_1915f0;
        case 0x1915f4u: goto label_1915f4;
        case 0x1915f8u: goto label_1915f8;
        case 0x1915fcu: goto label_1915fc;
        case 0x191600u: goto label_191600;
        case 0x191604u: goto label_191604;
        case 0x191608u: goto label_191608;
        case 0x19160cu: goto label_19160c;
        case 0x191610u: goto label_191610;
        case 0x191614u: goto label_191614;
        case 0x191618u: goto label_191618;
        case 0x19161cu: goto label_19161c;
        case 0x191620u: goto label_191620;
        case 0x191624u: goto label_191624;
        case 0x191628u: goto label_191628;
        case 0x19162cu: goto label_19162c;
        case 0x191630u: goto label_191630;
        case 0x191634u: goto label_191634;
        case 0x191638u: goto label_191638;
        case 0x19163cu: goto label_19163c;
        case 0x191640u: goto label_191640;
        case 0x191644u: goto label_191644;
        case 0x191648u: goto label_191648;
        case 0x19164cu: goto label_19164c;
        case 0x191650u: goto label_191650;
        case 0x191654u: goto label_191654;
        case 0x191658u: goto label_191658;
        case 0x19165cu: goto label_19165c;
        case 0x191660u: goto label_191660;
        case 0x191664u: goto label_191664;
        case 0x191668u: goto label_191668;
        case 0x19166cu: goto label_19166c;
        case 0x191670u: goto label_191670;
        case 0x191674u: goto label_191674;
        case 0x191678u: goto label_191678;
        case 0x19167cu: goto label_19167c;
        case 0x191680u: goto label_191680;
        case 0x191684u: goto label_191684;
        case 0x191688u: goto label_191688;
        case 0x19168cu: goto label_19168c;
        case 0x191690u: goto label_191690;
        case 0x191694u: goto label_191694;
        case 0x191698u: goto label_191698;
        case 0x19169cu: goto label_19169c;
        case 0x1916a0u: goto label_1916a0;
        case 0x1916a4u: goto label_1916a4;
        case 0x1916a8u: goto label_1916a8;
        case 0x1916acu: goto label_1916ac;
        case 0x1916b0u: goto label_1916b0;
        case 0x1916b4u: goto label_1916b4;
        case 0x1916b8u: goto label_1916b8;
        case 0x1916bcu: goto label_1916bc;
        case 0x1916c0u: goto label_1916c0;
        case 0x1916c4u: goto label_1916c4;
        case 0x1916c8u: goto label_1916c8;
        case 0x1916ccu: goto label_1916cc;
        case 0x1916d0u: goto label_1916d0;
        case 0x1916d4u: goto label_1916d4;
        case 0x1916d8u: goto label_1916d8;
        case 0x1916dcu: goto label_1916dc;
        case 0x1916e0u: goto label_1916e0;
        case 0x1916e4u: goto label_1916e4;
        case 0x1916e8u: goto label_1916e8;
        case 0x1916ecu: goto label_1916ec;
        case 0x1916f0u: goto label_1916f0;
        case 0x1916f4u: goto label_1916f4;
        case 0x1916f8u: goto label_1916f8;
        case 0x1916fcu: goto label_1916fc;
        case 0x191700u: goto label_191700;
        case 0x191704u: goto label_191704;
        case 0x191708u: goto label_191708;
        case 0x19170cu: goto label_19170c;
        case 0x191710u: goto label_191710;
        case 0x191714u: goto label_191714;
        case 0x191718u: goto label_191718;
        case 0x19171cu: goto label_19171c;
        case 0x191720u: goto label_191720;
        case 0x191724u: goto label_191724;
        case 0x191728u: goto label_191728;
        case 0x19172cu: goto label_19172c;
        case 0x191730u: goto label_191730;
        case 0x191734u: goto label_191734;
        case 0x191738u: goto label_191738;
        case 0x19173cu: goto label_19173c;
        case 0x191740u: goto label_191740;
        case 0x191744u: goto label_191744;
        case 0x191748u: goto label_191748;
        case 0x19174cu: goto label_19174c;
        case 0x191750u: goto label_191750;
        case 0x191754u: goto label_191754;
        case 0x191758u: goto label_191758;
        case 0x19175cu: goto label_19175c;
        case 0x191760u: goto label_191760;
        case 0x191764u: goto label_191764;
        case 0x191768u: goto label_191768;
        case 0x19176cu: goto label_19176c;
        case 0x191770u: goto label_191770;
        case 0x191774u: goto label_191774;
        case 0x191778u: goto label_191778;
        case 0x19177cu: goto label_19177c;
        case 0x191780u: goto label_191780;
        case 0x191784u: goto label_191784;
        case 0x191788u: goto label_191788;
        case 0x19178cu: goto label_19178c;
        case 0x191790u: goto label_191790;
        case 0x191794u: goto label_191794;
        case 0x191798u: goto label_191798;
        case 0x19179cu: goto label_19179c;
        case 0x1917a0u: goto label_1917a0;
        case 0x1917a4u: goto label_1917a4;
        case 0x1917a8u: goto label_1917a8;
        case 0x1917acu: goto label_1917ac;
        case 0x1917b0u: goto label_1917b0;
        case 0x1917b4u: goto label_1917b4;
        case 0x1917b8u: goto label_1917b8;
        case 0x1917bcu: goto label_1917bc;
        case 0x1917c0u: goto label_1917c0;
        case 0x1917c4u: goto label_1917c4;
        case 0x1917c8u: goto label_1917c8;
        case 0x1917ccu: goto label_1917cc;
        case 0x1917d0u: goto label_1917d0;
        case 0x1917d4u: goto label_1917d4;
        case 0x1917d8u: goto label_1917d8;
        case 0x1917dcu: goto label_1917dc;
        case 0x1917e0u: goto label_1917e0;
        case 0x1917e4u: goto label_1917e4;
        case 0x1917e8u: goto label_1917e8;
        case 0x1917ecu: goto label_1917ec;
        case 0x1917f0u: goto label_1917f0;
        case 0x1917f4u: goto label_1917f4;
        case 0x1917f8u: goto label_1917f8;
        case 0x1917fcu: goto label_1917fc;
        case 0x191800u: goto label_191800;
        case 0x191804u: goto label_191804;
        case 0x191808u: goto label_191808;
        case 0x19180cu: goto label_19180c;
        case 0x191810u: goto label_191810;
        case 0x191814u: goto label_191814;
        case 0x191818u: goto label_191818;
        case 0x19181cu: goto label_19181c;
        case 0x191820u: goto label_191820;
        case 0x191824u: goto label_191824;
        case 0x191828u: goto label_191828;
        case 0x19182cu: goto label_19182c;
        case 0x191830u: goto label_191830;
        case 0x191834u: goto label_191834;
        case 0x191838u: goto label_191838;
        case 0x19183cu: goto label_19183c;
        case 0x191840u: goto label_191840;
        case 0x191844u: goto label_191844;
        case 0x191848u: goto label_191848;
        case 0x19184cu: goto label_19184c;
        case 0x191850u: goto label_191850;
        case 0x191854u: goto label_191854;
        case 0x191858u: goto label_191858;
        case 0x19185cu: goto label_19185c;
        case 0x191860u: goto label_191860;
        case 0x191864u: goto label_191864;
        case 0x191868u: goto label_191868;
        case 0x19186cu: goto label_19186c;
        case 0x191870u: goto label_191870;
        case 0x191874u: goto label_191874;
        case 0x191878u: goto label_191878;
        case 0x19187cu: goto label_19187c;
        case 0x191880u: goto label_191880;
        case 0x191884u: goto label_191884;
        case 0x191888u: goto label_191888;
        case 0x19188cu: goto label_19188c;
        case 0x191890u: goto label_191890;
        case 0x191894u: goto label_191894;
        case 0x191898u: goto label_191898;
        case 0x19189cu: goto label_19189c;
        case 0x1918a0u: goto label_1918a0;
        case 0x1918a4u: goto label_1918a4;
        case 0x1918a8u: goto label_1918a8;
        case 0x1918acu: goto label_1918ac;
        case 0x1918b0u: goto label_1918b0;
        case 0x1918b4u: goto label_1918b4;
        case 0x1918b8u: goto label_1918b8;
        case 0x1918bcu: goto label_1918bc;
        case 0x1918c0u: goto label_1918c0;
        case 0x1918c4u: goto label_1918c4;
        case 0x1918c8u: goto label_1918c8;
        case 0x1918ccu: goto label_1918cc;
        case 0x1918d0u: goto label_1918d0;
        case 0x1918d4u: goto label_1918d4;
        case 0x1918d8u: goto label_1918d8;
        case 0x1918dcu: goto label_1918dc;
        case 0x1918e0u: goto label_1918e0;
        case 0x1918e4u: goto label_1918e4;
        case 0x1918e8u: goto label_1918e8;
        case 0x1918ecu: goto label_1918ec;
        case 0x1918f0u: goto label_1918f0;
        case 0x1918f4u: goto label_1918f4;
        case 0x1918f8u: goto label_1918f8;
        case 0x1918fcu: goto label_1918fc;
        case 0x191900u: goto label_191900;
        case 0x191904u: goto label_191904;
        case 0x191908u: goto label_191908;
        case 0x19190cu: goto label_19190c;
        case 0x191910u: goto label_191910;
        case 0x191914u: goto label_191914;
        case 0x191918u: goto label_191918;
        case 0x19191cu: goto label_19191c;
        case 0x191920u: goto label_191920;
        case 0x191924u: goto label_191924;
        case 0x191928u: goto label_191928;
        case 0x19192cu: goto label_19192c;
        case 0x191930u: goto label_191930;
        case 0x191934u: goto label_191934;
        case 0x191938u: goto label_191938;
        case 0x19193cu: goto label_19193c;
        case 0x191940u: goto label_191940;
        case 0x191944u: goto label_191944;
        case 0x191948u: goto label_191948;
        case 0x19194cu: goto label_19194c;
        case 0x191950u: goto label_191950;
        case 0x191954u: goto label_191954;
        case 0x191958u: goto label_191958;
        case 0x19195cu: goto label_19195c;
        case 0x191960u: goto label_191960;
        case 0x191964u: goto label_191964;
        case 0x191968u: goto label_191968;
        case 0x19196cu: goto label_19196c;
        case 0x191970u: goto label_191970;
        case 0x191974u: goto label_191974;
        case 0x191978u: goto label_191978;
        case 0x19197cu: goto label_19197c;
        case 0x191980u: goto label_191980;
        case 0x191984u: goto label_191984;
        case 0x191988u: goto label_191988;
        case 0x19198cu: goto label_19198c;
        case 0x191990u: goto label_191990;
        case 0x191994u: goto label_191994;
        case 0x191998u: goto label_191998;
        case 0x19199cu: goto label_19199c;
        case 0x1919a0u: goto label_1919a0;
        case 0x1919a4u: goto label_1919a4;
        case 0x1919a8u: goto label_1919a8;
        case 0x1919acu: goto label_1919ac;
        case 0x1919b0u: goto label_1919b0;
        case 0x1919b4u: goto label_1919b4;
        case 0x1919b8u: goto label_1919b8;
        case 0x1919bcu: goto label_1919bc;
        case 0x1919c0u: goto label_1919c0;
        case 0x1919c4u: goto label_1919c4;
        case 0x1919c8u: goto label_1919c8;
        case 0x1919ccu: goto label_1919cc;
        case 0x1919d0u: goto label_1919d0;
        case 0x1919d4u: goto label_1919d4;
        case 0x1919d8u: goto label_1919d8;
        case 0x1919dcu: goto label_1919dc;
        case 0x1919e0u: goto label_1919e0;
        case 0x1919e4u: goto label_1919e4;
        case 0x1919e8u: goto label_1919e8;
        case 0x1919ecu: goto label_1919ec;
        case 0x1919f0u: goto label_1919f0;
        case 0x1919f4u: goto label_1919f4;
        case 0x1919f8u: goto label_1919f8;
        case 0x1919fcu: goto label_1919fc;
        case 0x191a00u: goto label_191a00;
        case 0x191a04u: goto label_191a04;
        case 0x191a08u: goto label_191a08;
        case 0x191a0cu: goto label_191a0c;
        case 0x191a10u: goto label_191a10;
        case 0x191a14u: goto label_191a14;
        case 0x191a18u: goto label_191a18;
        case 0x191a1cu: goto label_191a1c;
        case 0x191a20u: goto label_191a20;
        case 0x191a24u: goto label_191a24;
        case 0x191a28u: goto label_191a28;
        case 0x191a2cu: goto label_191a2c;
        case 0x191a30u: goto label_191a30;
        case 0x191a34u: goto label_191a34;
        case 0x191a38u: goto label_191a38;
        case 0x191a3cu: goto label_191a3c;
        case 0x191a40u: goto label_191a40;
        case 0x191a44u: goto label_191a44;
        case 0x191a48u: goto label_191a48;
        case 0x191a4cu: goto label_191a4c;
        case 0x191a50u: goto label_191a50;
        case 0x191a54u: goto label_191a54;
        case 0x191a58u: goto label_191a58;
        case 0x191a5cu: goto label_191a5c;
        case 0x191a60u: goto label_191a60;
        case 0x191a64u: goto label_191a64;
        case 0x191a68u: goto label_191a68;
        case 0x191a6cu: goto label_191a6c;
        case 0x191a70u: goto label_191a70;
        case 0x191a74u: goto label_191a74;
        case 0x191a78u: goto label_191a78;
        case 0x191a7cu: goto label_191a7c;
        case 0x191a80u: goto label_191a80;
        case 0x191a84u: goto label_191a84;
        case 0x191a88u: goto label_191a88;
        case 0x191a8cu: goto label_191a8c;
        case 0x191a90u: goto label_191a90;
        case 0x191a94u: goto label_191a94;
        case 0x191a98u: goto label_191a98;
        case 0x191a9cu: goto label_191a9c;
        case 0x191aa0u: goto label_191aa0;
        case 0x191aa4u: goto label_191aa4;
        case 0x191aa8u: goto label_191aa8;
        case 0x191aacu: goto label_191aac;
        case 0x191ab0u: goto label_191ab0;
        case 0x191ab4u: goto label_191ab4;
        case 0x191ab8u: goto label_191ab8;
        case 0x191abcu: goto label_191abc;
        case 0x191ac0u: goto label_191ac0;
        case 0x191ac4u: goto label_191ac4;
        case 0x191ac8u: goto label_191ac8;
        case 0x191accu: goto label_191acc;
        case 0x191ad0u: goto label_191ad0;
        case 0x191ad4u: goto label_191ad4;
        case 0x191ad8u: goto label_191ad8;
        case 0x191adcu: goto label_191adc;
        case 0x191ae0u: goto label_191ae0;
        case 0x191ae4u: goto label_191ae4;
        case 0x191ae8u: goto label_191ae8;
        case 0x191aecu: goto label_191aec;
        case 0x191af0u: goto label_191af0;
        case 0x191af4u: goto label_191af4;
        case 0x191af8u: goto label_191af8;
        case 0x191afcu: goto label_191afc;
        case 0x191b00u: goto label_191b00;
        case 0x191b04u: goto label_191b04;
        case 0x191b08u: goto label_191b08;
        case 0x191b0cu: goto label_191b0c;
        case 0x191b10u: goto label_191b10;
        case 0x191b14u: goto label_191b14;
        case 0x191b18u: goto label_191b18;
        case 0x191b1cu: goto label_191b1c;
        case 0x191b20u: goto label_191b20;
        case 0x191b24u: goto label_191b24;
        case 0x191b28u: goto label_191b28;
        case 0x191b2cu: goto label_191b2c;
        case 0x191b30u: goto label_191b30;
        case 0x191b34u: goto label_191b34;
        case 0x191b38u: goto label_191b38;
        case 0x191b3cu: goto label_191b3c;
        case 0x191b40u: goto label_191b40;
        case 0x191b44u: goto label_191b44;
        case 0x191b48u: goto label_191b48;
        case 0x191b4cu: goto label_191b4c;
        case 0x191b50u: goto label_191b50;
        case 0x191b54u: goto label_191b54;
        case 0x191b58u: goto label_191b58;
        case 0x191b5cu: goto label_191b5c;
        case 0x191b60u: goto label_191b60;
        case 0x191b64u: goto label_191b64;
        case 0x191b68u: goto label_191b68;
        case 0x191b6cu: goto label_191b6c;
        case 0x191b70u: goto label_191b70;
        case 0x191b74u: goto label_191b74;
        case 0x191b78u: goto label_191b78;
        case 0x191b7cu: goto label_191b7c;
        case 0x191b80u: goto label_191b80;
        case 0x191b84u: goto label_191b84;
        case 0x191b88u: goto label_191b88;
        case 0x191b8cu: goto label_191b8c;
        case 0x191b90u: goto label_191b90;
        case 0x191b94u: goto label_191b94;
        case 0x191b98u: goto label_191b98;
        case 0x191b9cu: goto label_191b9c;
        case 0x191ba0u: goto label_191ba0;
        case 0x191ba4u: goto label_191ba4;
        case 0x191ba8u: goto label_191ba8;
        case 0x191bacu: goto label_191bac;
        case 0x191bb0u: goto label_191bb0;
        case 0x191bb4u: goto label_191bb4;
        case 0x191bb8u: goto label_191bb8;
        case 0x191bbcu: goto label_191bbc;
        case 0x191bc0u: goto label_191bc0;
        case 0x191bc4u: goto label_191bc4;
        case 0x191bc8u: goto label_191bc8;
        case 0x191bccu: goto label_191bcc;
        case 0x191bd0u: goto label_191bd0;
        case 0x191bd4u: goto label_191bd4;
        case 0x191bd8u: goto label_191bd8;
        case 0x191bdcu: goto label_191bdc;
        case 0x191be0u: goto label_191be0;
        case 0x191be4u: goto label_191be4;
        case 0x191be8u: goto label_191be8;
        case 0x191becu: goto label_191bec;
        case 0x191bf0u: goto label_191bf0;
        case 0x191bf4u: goto label_191bf4;
        case 0x191bf8u: goto label_191bf8;
        case 0x191bfcu: goto label_191bfc;
        case 0x191c00u: goto label_191c00;
        case 0x191c04u: goto label_191c04;
        case 0x191c08u: goto label_191c08;
        case 0x191c0cu: goto label_191c0c;
        case 0x191c10u: goto label_191c10;
        case 0x191c14u: goto label_191c14;
        case 0x191c18u: goto label_191c18;
        case 0x191c1cu: goto label_191c1c;
        case 0x191c20u: goto label_191c20;
        case 0x191c24u: goto label_191c24;
        case 0x191c28u: goto label_191c28;
        case 0x191c2cu: goto label_191c2c;
        case 0x191c30u: goto label_191c30;
        case 0x191c34u: goto label_191c34;
        case 0x191c38u: goto label_191c38;
        case 0x191c3cu: goto label_191c3c;
        case 0x191c40u: goto label_191c40;
        case 0x191c44u: goto label_191c44;
        case 0x191c48u: goto label_191c48;
        case 0x191c4cu: goto label_191c4c;
        case 0x191c50u: goto label_191c50;
        case 0x191c54u: goto label_191c54;
        case 0x191c58u: goto label_191c58;
        case 0x191c5cu: goto label_191c5c;
        case 0x191c60u: goto label_191c60;
        case 0x191c64u: goto label_191c64;
        case 0x191c68u: goto label_191c68;
        case 0x191c6cu: goto label_191c6c;
        case 0x191c70u: goto label_191c70;
        case 0x191c74u: goto label_191c74;
        case 0x191c78u: goto label_191c78;
        case 0x191c7cu: goto label_191c7c;
        case 0x191c80u: goto label_191c80;
        case 0x191c84u: goto label_191c84;
        case 0x191c88u: goto label_191c88;
        case 0x191c8cu: goto label_191c8c;
        case 0x191c90u: goto label_191c90;
        case 0x191c94u: goto label_191c94;
        case 0x191c98u: goto label_191c98;
        case 0x191c9cu: goto label_191c9c;
        case 0x191ca0u: goto label_191ca0;
        case 0x191ca4u: goto label_191ca4;
        case 0x191ca8u: goto label_191ca8;
        case 0x191cacu: goto label_191cac;
        case 0x191cb0u: goto label_191cb0;
        case 0x191cb4u: goto label_191cb4;
        case 0x191cb8u: goto label_191cb8;
        case 0x191cbcu: goto label_191cbc;
        case 0x191cc0u: goto label_191cc0;
        case 0x191cc4u: goto label_191cc4;
        case 0x191cc8u: goto label_191cc8;
        case 0x191cccu: goto label_191ccc;
        case 0x191cd0u: goto label_191cd0;
        case 0x191cd4u: goto label_191cd4;
        case 0x191cd8u: goto label_191cd8;
        case 0x191cdcu: goto label_191cdc;
        case 0x191ce0u: goto label_191ce0;
        case 0x191ce4u: goto label_191ce4;
        case 0x191ce8u: goto label_191ce8;
        case 0x191cecu: goto label_191cec;
        case 0x191cf0u: goto label_191cf0;
        case 0x191cf4u: goto label_191cf4;
        case 0x191cf8u: goto label_191cf8;
        case 0x191cfcu: goto label_191cfc;
        case 0x191d00u: goto label_191d00;
        case 0x191d04u: goto label_191d04;
        case 0x191d08u: goto label_191d08;
        case 0x191d0cu: goto label_191d0c;
        default: break;
    }

    ctx->pc = 0x191570u;

label_191570:
    // 0x191570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x191570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_191574:
    // 0x191574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_191578:
    // 0x191578: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x191578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_19157c:
    // 0x19157c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19157cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_191580:
    // 0x191580: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x191580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_191584:
    // 0x191584: 0xc0ad6a8  jal         func_2B5AA0
label_191588:
    if (ctx->pc == 0x191588u) {
        ctx->pc = 0x19158Cu;
        goto label_19158c;
    }
    ctx->pc = 0x191584u;
    SET_GPR_U32(ctx, 31, 0x19158Cu);
    ctx->pc = 0x2B5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AA0u, 0x191584u, 0x19158Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19158Cu;
label_19158c:
    // 0x19158c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x19158cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_191590:
    // 0x191590: 0x246342a0  addiu       $v1, $v1, 0x42A0
    ctx->pc = 0x191590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17056));
label_191594:
    // 0x191594: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x191594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_191598:
    // 0x191598: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x191598u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_19159c:
    // 0x19159c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19159cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1915a0:
    // 0x1915a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1915a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1915a4:
    // 0x1915a4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1915a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1915a8:
    // 0x1915a8: 0x3e00008  jr          $ra
label_1915ac:
    if (ctx->pc == 0x1915ACu) {
        ctx->pc = 0x1915B0u;
        goto label_1915b0;
    }
    ctx->pc = 0x1915A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1915A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1915B0u;
label_1915b0:
    // 0x1915b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1915b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1915b4:
    // 0x1915b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1915b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1915b8:
    // 0x1915b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1915b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1915bc:
    // 0x1915bc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1915bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_1915c0:
    // 0x1915c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1915c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1915c4:
    // 0x1915c4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1915c8:
    if (ctx->pc == 0x1915C8u) {
        ctx->pc = 0x1915CCu;
        goto label_1915cc;
    }
    ctx->pc = 0x1915C4u;
    {
        const bool branch_taken_0x1915c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1915c4) {
            ctx->pc = 0x19160Cu;
            goto label_19160c;
        }
    }
    ctx->pc = 0x1915CCu;
label_1915cc:
    // 0x1915cc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1915ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1915d0:
    // 0x1915d0: 0x246342a0  addiu       $v1, $v1, 0x42A0
    ctx->pc = 0x1915d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17056));
label_1915d4:
    // 0x1915d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1915d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1915d8:
    // 0x1915d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1915d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1915dc:
    // 0x1915dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1915dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1915e0:
    // 0x1915e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1915e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1915e4:
    // 0x1915e4: 0xc0ad6d4  jal         func_2B5B50
label_1915e8:
    if (ctx->pc == 0x1915E8u) {
        ctx->pc = 0x1915ECu;
        goto label_1915ec;
    }
    ctx->pc = 0x1915E4u;
    SET_GPR_U32(ctx, 31, 0x1915ECu);
    ctx->pc = 0x2B5B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B50u, 0x1915E4u, 0x1915ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1915ECu;
label_1915ec:
    // 0x1915ec: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1915ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_1915f0:
    // 0x1915f0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1915f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_1915f4:
    // 0x1915f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1915f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1915f8:
    // 0x1915f8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1915fc:
    if (ctx->pc == 0x1915FCu) {
        ctx->pc = 0x191600u;
        goto label_191600;
    }
    ctx->pc = 0x1915F8u;
    {
        const bool branch_taken_0x1915f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1915f8) {
            ctx->pc = 0x19160Cu;
            goto label_19160c;
        }
    }
    ctx->pc = 0x191600u;
label_191600:
    // 0x191600: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x191600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_191604:
    // 0x191604: 0xc0ba070  jal         func_2E81C0
label_191608:
    if (ctx->pc == 0x191608u) {
        ctx->pc = 0x19160Cu;
        goto label_19160c;
    }
    ctx->pc = 0x191604u;
    SET_GPR_U32(ctx, 31, 0x19160Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x191604u, 0x19160Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19160Cu;
label_19160c:
    // 0x19160c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19160cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_191610:
    // 0x191610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_191614:
    // 0x191614: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x191614u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_191618:
    // 0x191618: 0x3e00008  jr          $ra
label_19161c:
    if (ctx->pc == 0x19161Cu) {
        ctx->pc = 0x191620u;
        goto label_191620;
    }
    ctx->pc = 0x191618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191620u;
label_191620:
    // 0x191620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x191620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_191624:
    // 0x191624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_191628:
    // 0x191628: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x191628u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_19162c:
    // 0x19162c: 0x93a20020  lbu         $v0, 0x20($sp)
    ctx->pc = 0x19162cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_191630:
    // 0x191630: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x191630u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_191634:
    // 0x191634: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x191634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_191638:
    // 0x191638: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x191638u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_19163c:
    // 0x19163c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x19163cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_191640:
    // 0x191640: 0x2405006d  addiu       $a1, $zero, 0x6D
    ctx->pc = 0x191640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_191644:
    // 0x191644: 0xc08d69c  jal         func_235A70
label_191648:
    if (ctx->pc == 0x191648u) {
        ctx->pc = 0x19164Cu;
        goto label_19164c;
    }
    ctx->pc = 0x191644u;
    SET_GPR_U32(ctx, 31, 0x19164Cu);
    ctx->pc = 0x235A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A70u, 0x191644u, 0x19164Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19164Cu;
label_19164c:
    // 0x19164c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19164cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_191650:
    // 0x191650: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x191650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_191654:
    // 0x191654: 0x3e00008  jr          $ra
label_191658:
    if (ctx->pc == 0x191658u) {
        ctx->pc = 0x19165Cu;
        goto label_19165c;
    }
    ctx->pc = 0x191654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19165Cu;
label_19165c:
    // 0x19165c: 0x0  nop
    ctx->pc = 0x19165cu;
    // NOP
label_191660:
    // 0x191660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x191660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_191664:
    // 0x191664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_191668:
    // 0x191668: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x191668u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_19166c:
    // 0x19166c: 0x93a20020  lbu         $v0, 0x20($sp)
    ctx->pc = 0x19166cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_191670:
    // 0x191670: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x191670u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_191674:
    // 0x191674: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x191674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_191678:
    // 0x191678: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x191678u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_19167c:
    // 0x19167c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x19167cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_191680:
    // 0x191680: 0x2405006e  addiu       $a1, $zero, 0x6E
    ctx->pc = 0x191680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_191684:
    // 0x191684: 0xc08d69c  jal         func_235A70
label_191688:
    if (ctx->pc == 0x191688u) {
        ctx->pc = 0x19168Cu;
        goto label_19168c;
    }
    ctx->pc = 0x191684u;
    SET_GPR_U32(ctx, 31, 0x19168Cu);
    ctx->pc = 0x235A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A70u, 0x191684u, 0x19168Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19168Cu;
label_19168c:
    // 0x19168c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19168cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_191690:
    // 0x191690: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x191690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_191694:
    // 0x191694: 0x3e00008  jr          $ra
label_191698:
    if (ctx->pc == 0x191698u) {
        ctx->pc = 0x19169Cu;
        goto label_19169c;
    }
    ctx->pc = 0x191694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19169Cu;
label_19169c:
    // 0x19169c: 0x0  nop
    ctx->pc = 0x19169cu;
    // NOP
label_1916a0:
    // 0x1916a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1916a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1916a4:
    // 0x1916a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1916a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1916a8:
    // 0x1916a8: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x1916a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_1916ac:
    // 0x1916ac: 0x93a20020  lbu         $v0, 0x20($sp)
    ctx->pc = 0x1916acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_1916b0:
    // 0x1916b0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1916b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1916b4:
    // 0x1916b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1916b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1916b8:
    // 0x1916b8: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1916b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1916bc:
    // 0x1916bc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1916bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1916c0:
    // 0x1916c0: 0x2405006f  addiu       $a1, $zero, 0x6F
    ctx->pc = 0x1916c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_1916c4:
    // 0x1916c4: 0xc08d69c  jal         func_235A70
label_1916c8:
    if (ctx->pc == 0x1916C8u) {
        ctx->pc = 0x1916CCu;
        goto label_1916cc;
    }
    ctx->pc = 0x1916C4u;
    SET_GPR_U32(ctx, 31, 0x1916CCu);
    ctx->pc = 0x235A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A70u, 0x1916C4u, 0x1916CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1916CCu;
label_1916cc:
    // 0x1916cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1916ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1916d0:
    // 0x1916d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1916d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1916d4:
    // 0x1916d4: 0x3e00008  jr          $ra
label_1916d8:
    if (ctx->pc == 0x1916D8u) {
        ctx->pc = 0x1916DCu;
        goto label_1916dc;
    }
    ctx->pc = 0x1916D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1916D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1916DCu;
label_1916dc:
    // 0x1916dc: 0x0  nop
    ctx->pc = 0x1916dcu;
    // NOP
label_1916e0:
    // 0x1916e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1916e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1916e4:
    // 0x1916e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1916e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1916e8:
    // 0x1916e8: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x1916e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_1916ec:
    // 0x1916ec: 0x93a20020  lbu         $v0, 0x20($sp)
    ctx->pc = 0x1916ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_1916f0:
    // 0x1916f0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1916f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1916f4:
    // 0x1916f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1916f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1916f8:
    // 0x1916f8: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1916f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1916fc:
    // 0x1916fc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1916fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_191700:
    // 0x191700: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x191700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_191704:
    // 0x191704: 0xc08d69c  jal         func_235A70
label_191708:
    if (ctx->pc == 0x191708u) {
        ctx->pc = 0x19170Cu;
        goto label_19170c;
    }
    ctx->pc = 0x191704u;
    SET_GPR_U32(ctx, 31, 0x19170Cu);
    ctx->pc = 0x235A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A70u, 0x191704u, 0x19170Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19170Cu;
label_19170c:
    // 0x19170c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19170cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_191710:
    // 0x191710: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x191710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_191714:
    // 0x191714: 0x3e00008  jr          $ra
label_191718:
    if (ctx->pc == 0x191718u) {
        ctx->pc = 0x19171Cu;
        goto label_19171c;
    }
    ctx->pc = 0x191714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19171Cu;
label_19171c:
    // 0x19171c: 0x0  nop
    ctx->pc = 0x19171cu;
    // NOP
label_191720:
    // 0x191720: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x191720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_191724:
    // 0x191724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_191728:
    // 0x191728: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x191728u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_19172c:
    // 0x19172c: 0x93a20020  lbu         $v0, 0x20($sp)
    ctx->pc = 0x19172cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_191730:
    // 0x191730: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x191730u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_191734:
    // 0x191734: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x191734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_191738:
    // 0x191738: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x191738u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_19173c:
    // 0x19173c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x19173cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_191740:
    // 0x191740: 0x24050071  addiu       $a1, $zero, 0x71
    ctx->pc = 0x191740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
label_191744:
    // 0x191744: 0xc08d69c  jal         func_235A70
label_191748:
    if (ctx->pc == 0x191748u) {
        ctx->pc = 0x19174Cu;
        goto label_19174c;
    }
    ctx->pc = 0x191744u;
    SET_GPR_U32(ctx, 31, 0x19174Cu);
    ctx->pc = 0x235A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A70u, 0x191744u, 0x19174Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19174Cu;
label_19174c:
    // 0x19174c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19174cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_191750:
    // 0x191750: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x191750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_191754:
    // 0x191754: 0x3e00008  jr          $ra
label_191758:
    if (ctx->pc == 0x191758u) {
        ctx->pc = 0x19175Cu;
        goto label_19175c;
    }
    ctx->pc = 0x191754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19175Cu;
label_19175c:
    // 0x19175c: 0x0  nop
    ctx->pc = 0x19175cu;
    // NOP
label_191760:
    // 0x191760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x191760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_191764:
    // 0x191764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_191768:
    // 0x191768: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x191768u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_19176c:
    // 0x19176c: 0x93a20020  lbu         $v0, 0x20($sp)
    ctx->pc = 0x19176cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_191770:
    // 0x191770: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x191770u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_191774:
    // 0x191774: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x191774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_191778:
    // 0x191778: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x191778u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_19177c:
    // 0x19177c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x19177cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_191780:
    // 0x191780: 0x24050072  addiu       $a1, $zero, 0x72
    ctx->pc = 0x191780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_191784:
    // 0x191784: 0xc08d69c  jal         func_235A70
label_191788:
    if (ctx->pc == 0x191788u) {
        ctx->pc = 0x19178Cu;
        goto label_19178c;
    }
    ctx->pc = 0x191784u;
    SET_GPR_U32(ctx, 31, 0x19178Cu);
    ctx->pc = 0x235A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A70u, 0x191784u, 0x19178Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19178Cu;
label_19178c:
    // 0x19178c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19178cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_191790:
    // 0x191790: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x191790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_191794:
    // 0x191794: 0x3e00008  jr          $ra
label_191798:
    if (ctx->pc == 0x191798u) {
        ctx->pc = 0x19179Cu;
        goto label_19179c;
    }
    ctx->pc = 0x191794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19179Cu;
label_19179c:
    // 0x19179c: 0x0  nop
    ctx->pc = 0x19179cu;
    // NOP
label_1917a0:
    // 0x1917a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1917a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1917a4:
    // 0x1917a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1917a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1917a8:
    // 0x1917a8: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x1917a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_1917ac:
    // 0x1917ac: 0x93a20020  lbu         $v0, 0x20($sp)
    ctx->pc = 0x1917acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_1917b0:
    // 0x1917b0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1917b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1917b4:
    // 0x1917b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1917b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1917b8:
    // 0x1917b8: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1917b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1917bc:
    // 0x1917bc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1917bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1917c0:
    // 0x1917c0: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x1917c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_1917c4:
    // 0x1917c4: 0xc08d69c  jal         func_235A70
label_1917c8:
    if (ctx->pc == 0x1917C8u) {
        ctx->pc = 0x1917CCu;
        goto label_1917cc;
    }
    ctx->pc = 0x1917C4u;
    SET_GPR_U32(ctx, 31, 0x1917CCu);
    ctx->pc = 0x235A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A70u, 0x1917C4u, 0x1917CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1917CCu;
label_1917cc:
    // 0x1917cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1917ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1917d0:
    // 0x1917d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1917d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1917d4:
    // 0x1917d4: 0x3e00008  jr          $ra
label_1917d8:
    if (ctx->pc == 0x1917D8u) {
        ctx->pc = 0x1917DCu;
        goto label_1917dc;
    }
    ctx->pc = 0x1917D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1917D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1917DCu;
label_1917dc:
    // 0x1917dc: 0x0  nop
    ctx->pc = 0x1917dcu;
    // NOP
label_1917e0:
    // 0x1917e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1917e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1917e4:
    // 0x1917e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1917e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1917e8:
    // 0x1917e8: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x1917e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_1917ec:
    // 0x1917ec: 0x93a20020  lbu         $v0, 0x20($sp)
    ctx->pc = 0x1917ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_1917f0:
    // 0x1917f0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1917f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1917f4:
    // 0x1917f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1917f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1917f8:
    // 0x1917f8: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1917f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1917fc:
    // 0x1917fc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1917fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_191800:
    // 0x191800: 0x24050074  addiu       $a1, $zero, 0x74
    ctx->pc = 0x191800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_191804:
    // 0x191804: 0xc08d69c  jal         func_235A70
label_191808:
    if (ctx->pc == 0x191808u) {
        ctx->pc = 0x19180Cu;
        goto label_19180c;
    }
    ctx->pc = 0x191804u;
    SET_GPR_U32(ctx, 31, 0x19180Cu);
    ctx->pc = 0x235A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A70u, 0x191804u, 0x19180Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19180Cu;
label_19180c:
    // 0x19180c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19180cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_191810:
    // 0x191810: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x191810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_191814:
    // 0x191814: 0x3e00008  jr          $ra
label_191818:
    if (ctx->pc == 0x191818u) {
        ctx->pc = 0x19181Cu;
        goto label_19181c;
    }
    ctx->pc = 0x191814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19181Cu;
label_19181c:
    // 0x19181c: 0x0  nop
    ctx->pc = 0x19181cu;
    // NOP
label_191820:
    // 0x191820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x191820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_191824:
    // 0x191824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_191828:
    // 0x191828: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x191828u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_19182c:
    // 0x19182c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x19182cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_191830:
    // 0x191830: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x191830u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191834:
    // 0x191834: 0x0  nop
    ctx->pc = 0x191834u;
    // NOP
label_191838:
    // 0x191838: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x191838u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19183c:
    // 0x19183c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19183cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191840:
    // 0x191840: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_191844:
    if (ctx->pc == 0x191844u) {
        ctx->pc = 0x191848u;
        goto label_191848;
    }
    ctx->pc = 0x191840u;
    {
        const bool branch_taken_0x191840 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x191840) {
            ctx->pc = 0x19184Cu;
            goto label_19184c;
        }
    }
    ctx->pc = 0x191848u;
label_191848:
    // 0x191848: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x191848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19184c:
    // 0x19184c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x19184cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_191850:
    // 0x191850: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x191850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_191854:
    // 0x191854: 0x24050069  addiu       $a1, $zero, 0x69
    ctx->pc = 0x191854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_191858:
    // 0x191858: 0xc08d69c  jal         func_235A70
label_19185c:
    if (ctx->pc == 0x19185Cu) {
        ctx->pc = 0x191860u;
        goto label_191860;
    }
    ctx->pc = 0x191858u;
    SET_GPR_U32(ctx, 31, 0x191860u);
    ctx->pc = 0x235A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A70u, 0x191858u, 0x191860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191860u;
label_191860:
    // 0x191860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_191864:
    // 0x191864: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x191864u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_191868:
    // 0x191868: 0x3e00008  jr          $ra
label_19186c:
    if (ctx->pc == 0x19186Cu) {
        ctx->pc = 0x191870u;
        goto label_191870;
    }
    ctx->pc = 0x191868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191870u;
label_191870:
    // 0x191870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x191870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_191874:
    // 0x191874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_191878:
    // 0x191878: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x191878u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_19187c:
    // 0x19187c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x19187cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_191880:
    // 0x191880: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x191880u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191884:
    // 0x191884: 0x0  nop
    ctx->pc = 0x191884u;
    // NOP
label_191888:
    // 0x191888: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x191888u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19188c:
    // 0x19188c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19188cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191890:
    // 0x191890: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_191894:
    if (ctx->pc == 0x191894u) {
        ctx->pc = 0x191898u;
        goto label_191898;
    }
    ctx->pc = 0x191890u;
    {
        const bool branch_taken_0x191890 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x191890) {
            ctx->pc = 0x19189Cu;
            goto label_19189c;
        }
    }
    ctx->pc = 0x191898u;
label_191898:
    // 0x191898: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x191898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19189c:
    // 0x19189c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x19189cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1918a0:
    // 0x1918a0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1918a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1918a4:
    // 0x1918a4: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x1918a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_1918a8:
    // 0x1918a8: 0xc08d69c  jal         func_235A70
label_1918ac:
    if (ctx->pc == 0x1918ACu) {
        ctx->pc = 0x1918B0u;
        goto label_1918b0;
    }
    ctx->pc = 0x1918A8u;
    SET_GPR_U32(ctx, 31, 0x1918B0u);
    ctx->pc = 0x235A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A70u, 0x1918A8u, 0x1918B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1918B0u;
label_1918b0:
    // 0x1918b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1918b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1918b4:
    // 0x1918b4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1918b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1918b8:
    // 0x1918b8: 0x3e00008  jr          $ra
label_1918bc:
    if (ctx->pc == 0x1918BCu) {
        ctx->pc = 0x1918C0u;
        goto label_1918c0;
    }
    ctx->pc = 0x1918B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1918B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1918C0u;
label_1918c0:
    // 0x1918c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1918c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1918c4:
    // 0x1918c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1918c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1918c8:
    // 0x1918c8: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x1918c8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1918cc:
    // 0x1918cc: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1918ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1918d0:
    // 0x1918d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1918d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1918d4:
    // 0x1918d4: 0x0  nop
    ctx->pc = 0x1918d4u;
    // NOP
label_1918d8:
    // 0x1918d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1918d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1918dc:
    // 0x1918dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1918dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1918e0:
    // 0x1918e0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1918e4:
    if (ctx->pc == 0x1918E4u) {
        ctx->pc = 0x1918E8u;
        goto label_1918e8;
    }
    ctx->pc = 0x1918E0u;
    {
        const bool branch_taken_0x1918e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1918e0) {
            ctx->pc = 0x1918ECu;
            goto label_1918ec;
        }
    }
    ctx->pc = 0x1918E8u;
label_1918e8:
    // 0x1918e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1918e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1918ec:
    // 0x1918ec: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1918ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1918f0:
    // 0x1918f0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1918f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1918f4:
    // 0x1918f4: 0x2405006b  addiu       $a1, $zero, 0x6B
    ctx->pc = 0x1918f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
label_1918f8:
    // 0x1918f8: 0xc08d69c  jal         func_235A70
label_1918fc:
    if (ctx->pc == 0x1918FCu) {
        ctx->pc = 0x191900u;
        goto label_191900;
    }
    ctx->pc = 0x1918F8u;
    SET_GPR_U32(ctx, 31, 0x191900u);
    ctx->pc = 0x235A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A70u, 0x1918F8u, 0x191900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191900u;
label_191900:
    // 0x191900: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_191904:
    // 0x191904: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x191904u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_191908:
    // 0x191908: 0x3e00008  jr          $ra
label_19190c:
    if (ctx->pc == 0x19190Cu) {
        ctx->pc = 0x191910u;
        goto label_191910;
    }
    ctx->pc = 0x191908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191910u;
label_191910:
    // 0x191910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x191910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_191914:
    // 0x191914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_191918:
    // 0x191918: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x191918u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_19191c:
    // 0x19191c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x19191cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_191920:
    // 0x191920: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x191920u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191924:
    // 0x191924: 0x0  nop
    ctx->pc = 0x191924u;
    // NOP
label_191928:
    // 0x191928: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x191928u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19192c:
    // 0x19192c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19192cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191930:
    // 0x191930: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_191934:
    if (ctx->pc == 0x191934u) {
        ctx->pc = 0x191938u;
        goto label_191938;
    }
    ctx->pc = 0x191930u;
    {
        const bool branch_taken_0x191930 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x191930) {
            ctx->pc = 0x19193Cu;
            goto label_19193c;
        }
    }
    ctx->pc = 0x191938u;
label_191938:
    // 0x191938: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x191938u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19193c:
    // 0x19193c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x19193cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_191940:
    // 0x191940: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x191940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_191944:
    // 0x191944: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x191944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_191948:
    // 0x191948: 0xc08d69c  jal         func_235A70
label_19194c:
    if (ctx->pc == 0x19194Cu) {
        ctx->pc = 0x191950u;
        goto label_191950;
    }
    ctx->pc = 0x191948u;
    SET_GPR_U32(ctx, 31, 0x191950u);
    ctx->pc = 0x235A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A70u, 0x191948u, 0x191950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191950u;
label_191950:
    // 0x191950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_191954:
    // 0x191954: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x191954u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_191958:
    // 0x191958: 0x3e00008  jr          $ra
label_19195c:
    if (ctx->pc == 0x19195Cu) {
        ctx->pc = 0x191960u;
        goto label_191960;
    }
    ctx->pc = 0x191958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191960u;
label_191960:
    // 0x191960: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x191960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_191964:
    // 0x191964: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x191964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_191968:
    // 0x191968: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x191968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_19196c:
    // 0x19196c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x19196cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_191970:
    // 0x191970: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x191970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_191974:
    // 0x191974: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x191974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_191978:
    // 0x191978: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x191978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_19197c:
    // 0x19197c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19197cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_191980:
    // 0x191980: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x191980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_191984:
    // 0x191984: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x191984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_191988:
    // 0x191988: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x191988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_19198c:
    // 0x19198c: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x19198cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
label_191990:
    // 0x191990: 0xa3a500d0  sb          $a1, 0xD0($sp)
    ctx->pc = 0x191990u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 5));
label_191994:
    // 0x191994: 0x93a200d0  lbu         $v0, 0xD0($sp)
    ctx->pc = 0x191994u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
label_191998:
    // 0x191998: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x191998u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_19199c:
    // 0x19199c: 0x38450001  xori        $a1, $v0, 0x1
    ctx->pc = 0x19199cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1919a0:
    // 0x1919a0: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1919a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1919a4:
    // 0x1919a4: 0xc0ad96c  jal         func_2B65B0
label_1919a8:
    if (ctx->pc == 0x1919A8u) {
        ctx->pc = 0x1919ACu;
        goto label_1919ac;
    }
    ctx->pc = 0x1919A4u;
    SET_GPR_U32(ctx, 31, 0x1919ACu);
    ctx->pc = 0x2B65B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B65B0u, 0x1919A4u, 0x1919ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1919ACu;
label_1919ac:
    // 0x1919ac: 0x93a200d0  lbu         $v0, 0xD0($sp)
    ctx->pc = 0x1919acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
label_1919b0:
    // 0x1919b0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1919b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1919b4:
    // 0x1919b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1919b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1919b8:
    // 0x1919b8: 0x14620072  bne         $v1, $v0, . + 4 + (0x72 << 2)
label_1919bc:
    if (ctx->pc == 0x1919BCu) {
        ctx->pc = 0x1919C0u;
        goto label_1919c0;
    }
    ctx->pc = 0x1919B8u;
    {
        const bool branch_taken_0x1919b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1919b8) {
            ctx->pc = 0x191B84u;
            goto label_191b84;
        }
    }
    ctx->pc = 0x1919C0u;
label_1919c0:
    // 0x1919c0: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x1919c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
label_1919c4:
    // 0x1919c4: 0xc04fc54  jal         func_13F150
label_1919c8:
    if (ctx->pc == 0x1919C8u) {
        ctx->pc = 0x1919CCu;
        goto label_1919cc;
    }
    ctx->pc = 0x1919C4u;
    SET_GPR_U32(ctx, 31, 0x1919CCu);
    ctx->pc = 0x13F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F150u, 0x1919C4u, 0x1919CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1919CCu;
label_1919cc:
    // 0x1919cc: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x1919ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
label_1919d0:
    // 0x1919d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1919d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1919d4:
    // 0x1919d4: 0xc04fbc4  jal         func_13EF10
label_1919d8:
    if (ctx->pc == 0x1919D8u) {
        ctx->pc = 0x1919DCu;
        goto label_1919dc;
    }
    ctx->pc = 0x1919D4u;
    SET_GPR_U32(ctx, 31, 0x1919DCu);
    ctx->pc = 0x13EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF10u, 0x1919D4u, 0x1919DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1919DCu;
label_1919dc:
    // 0x1919dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1919dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1919e0:
    // 0x1919e0: 0x10110097  beq         $zero, $s1, . + 4 + (0x97 << 2)
label_1919e4:
    if (ctx->pc == 0x1919E4u) {
        ctx->pc = 0x1919E8u;
        goto label_1919e8;
    }
    ctx->pc = 0x1919E0u;
    {
        const bool branch_taken_0x1919e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x1919e0) {
            ctx->pc = 0x191C40u;
            goto label_191c40;
        }
    }
    ctx->pc = 0x1919E8u;
label_1919e8:
    // 0x1919e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1919e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1919ec:
    // 0x1919ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1919ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1919f0:
    // 0x1919f0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1919f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1919f4:
    // 0x1919f4: 0x320f809  jalr        $t9
label_1919f8:
    if (ctx->pc == 0x1919F8u) {
        ctx->pc = 0x1919FCu;
        goto label_1919fc;
    }
    ctx->pc = 0x1919F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1919FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1919F4u, 0x1919FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1919FCu;
label_1919fc:
    // 0x1919fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1919fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191a00:
    // 0x191a00: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x191a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_191a04:
    // 0x191a04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x191a04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_191a08:
    // 0x191a08: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x191a08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_191a0c:
    // 0x191a0c: 0x320f809  jalr        $t9
label_191a10:
    if (ctx->pc == 0x191A10u) {
        ctx->pc = 0x191A14u;
        goto label_191a14;
    }
    ctx->pc = 0x191A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x191A14u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191A0Cu, 0x191A14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x191A14u;
label_191a14:
    // 0x191a14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x191a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191a18:
    // 0x191a18: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x191a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_191a1c:
    // 0x191a1c: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x191a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_191a20:
    // 0x191a20: 0xc063f94  jal         func_18FE50
label_191a24:
    if (ctx->pc == 0x191A24u) {
        ctx->pc = 0x191A28u;
        goto label_191a28;
    }
    ctx->pc = 0x191A20u;
    SET_GPR_U32(ctx, 31, 0x191A28u);
    ctx->pc = 0x18FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FE50u, 0x191A20u, 0x191A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191A28u;
label_191a28:
    // 0x191a28: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x191a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_191a2c:
    // 0x191a2c: 0x26450050  addiu       $a1, $s2, 0x50
    ctx->pc = 0x191a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_191a30:
    // 0x191a30: 0xc063f94  jal         func_18FE50
label_191a34:
    if (ctx->pc == 0x191A34u) {
        ctx->pc = 0x191A38u;
        goto label_191a38;
    }
    ctx->pc = 0x191A30u;
    SET_GPR_U32(ctx, 31, 0x191A38u);
    ctx->pc = 0x18FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FE50u, 0x191A30u, 0x191A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191A38u;
label_191a38:
    // 0x191a38: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x191a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
label_191a3c:
    // 0x191a3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x191a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191a40:
    // 0x191a40: 0xc04fbc4  jal         func_13EF10
label_191a44:
    if (ctx->pc == 0x191A44u) {
        ctx->pc = 0x191A48u;
        goto label_191a48;
    }
    ctx->pc = 0x191A40u;
    SET_GPR_U32(ctx, 31, 0x191A48u);
    ctx->pc = 0x13EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF10u, 0x191A40u, 0x191A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191A48u;
label_191a48:
    // 0x191a48: 0x16220045  bne         $s1, $v0, . + 4 + (0x45 << 2)
label_191a4c:
    if (ctx->pc == 0x191A4Cu) {
        ctx->pc = 0x191A50u;
        goto label_191a50;
    }
    ctx->pc = 0x191A48u;
    {
        const bool branch_taken_0x191a48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x191a48) {
            ctx->pc = 0x191B60u;
            goto label_191b60;
        }
    }
    ctx->pc = 0x191A50u;
label_191a50:
    // 0x191a50: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x191a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_191a54:
    // 0x191a54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x191a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_191a58:
    // 0x191a58: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_191a5c:
    if (ctx->pc == 0x191A5Cu) {
        ctx->pc = 0x191A60u;
        goto label_191a60;
    }
    ctx->pc = 0x191A58u;
    {
        const bool branch_taken_0x191a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191a58) {
            ctx->pc = 0x191B60u;
            goto label_191b60;
        }
    }
    ctx->pc = 0x191A60u;
label_191a60:
    // 0x191a60: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x191a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_191a64:
    // 0x191a64: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x191a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_191a68:
    // 0x191a68: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x191a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_191a6c:
    // 0x191a6c: 0xc085538  jal         func_2154E0
label_191a70:
    if (ctx->pc == 0x191A70u) {
        ctx->pc = 0x191A74u;
        goto label_191a74;
    }
    ctx->pc = 0x191A6Cu;
    SET_GPR_U32(ctx, 31, 0x191A74u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x191A6Cu, 0x191A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191A74u;
label_191a74:
    // 0x191a74: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x191a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_191a78:
    // 0x191a78: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x191a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_191a7c:
    // 0x191a7c: 0xc096880  jal         func_25A200
label_191a80:
    if (ctx->pc == 0x191A80u) {
        ctx->pc = 0x191A84u;
        goto label_191a84;
    }
    ctx->pc = 0x191A7Cu;
    SET_GPR_U32(ctx, 31, 0x191A84u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x191A7Cu, 0x191A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191A84u;
label_191a84:
    // 0x191a84: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x191a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_191a88:
    // 0x191a88: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x191a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_191a8c:
    // 0x191a8c: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_191a90:
    if (ctx->pc == 0x191A90u) {
        ctx->pc = 0x191A94u;
        goto label_191a94;
    }
    ctx->pc = 0x191A8Cu;
    {
        const bool branch_taken_0x191a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191a8c) {
            ctx->pc = 0x191B24u;
            goto label_191b24;
        }
    }
    ctx->pc = 0x191A94u;
label_191a94:
    // 0x191a94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x191a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_191a98:
    // 0x191a98: 0x27859208  addiu       $a1, $gp, -0x6DF8
    ctx->pc = 0x191a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939144));
label_191a9c:
    // 0x191a9c: 0xc124f70  jal         func_493DC0
label_191aa0:
    if (ctx->pc == 0x191AA0u) {
        ctx->pc = 0x191AA4u;
        goto label_191aa4;
    }
    ctx->pc = 0x191A9Cu;
    SET_GPR_U32(ctx, 31, 0x191AA4u);
    ctx->pc = 0x493DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x493DC0u, 0x191A9Cu, 0x191AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191AA4u;
label_191aa4:
    // 0x191aa4: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_191aa8:
    if (ctx->pc == 0x191AA8u) {
        ctx->pc = 0x191AACu;
        goto label_191aac;
    }
    ctx->pc = 0x191AA4u;
    {
        const bool branch_taken_0x191aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191aa4) {
            ctx->pc = 0x191B60u;
            goto label_191b60;
        }
    }
    ctx->pc = 0x191AACu;
label_191aac:
    // 0x191aac: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x191aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_191ab0:
    // 0x191ab0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x191ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_191ab4:
    // 0x191ab4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x191ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_191ab8:
    // 0x191ab8: 0xc085538  jal         func_2154E0
label_191abc:
    if (ctx->pc == 0x191ABCu) {
        ctx->pc = 0x191AC0u;
        goto label_191ac0;
    }
    ctx->pc = 0x191AB8u;
    SET_GPR_U32(ctx, 31, 0x191AC0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x191AB8u, 0x191AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191AC0u;
label_191ac0:
    // 0x191ac0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x191ac0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191ac4:
    // 0x191ac4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x191ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_191ac8:
    // 0x191ac8: 0xc0a82cc  jal         func_2A0B30
label_191acc:
    if (ctx->pc == 0x191ACCu) {
        ctx->pc = 0x191AD0u;
        goto label_191ad0;
    }
    ctx->pc = 0x191AC8u;
    SET_GPR_U32(ctx, 31, 0x191AD0u);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x191AC8u, 0x191AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191AD0u;
label_191ad0:
    // 0x191ad0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x191ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191ad4:
    // 0x191ad4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x191ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_191ad8:
    // 0x191ad8: 0xc121e84  jal         func_487A10
label_191adc:
    if (ctx->pc == 0x191ADCu) {
        ctx->pc = 0x191AE0u;
        goto label_191ae0;
    }
    ctx->pc = 0x191AD8u;
    SET_GPR_U32(ctx, 31, 0x191AE0u);
    ctx->pc = 0x487A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A10u, 0x191AD8u, 0x191AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191AE0u;
label_191ae0:
    // 0x191ae0: 0x27a300a8  addiu       $v1, $sp, 0xA8
    ctx->pc = 0x191ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_191ae4:
    // 0x191ae4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x191ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_191ae8:
    // 0x191ae8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x191ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_191aec:
    // 0x191aec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x191aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_191af0:
    // 0x191af0: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x191af0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_191af4:
    // 0x191af4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x191af4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_191af8:
    // 0x191af8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x191af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_191afc:
    // 0x191afc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_191b00:
    // 0x191b00: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x191b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_191b04:
    // 0x191b04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x191b04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191b08:
    // 0x191b08: 0xc106598  jal         func_419660
label_191b0c:
    if (ctx->pc == 0x191B0Cu) {
        ctx->pc = 0x191B10u;
        goto label_191b10;
    }
    ctx->pc = 0x191B08u;
    SET_GPR_U32(ctx, 31, 0x191B10u);
    ctx->pc = 0x419660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419660u, 0x191B08u, 0x191B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191B10u;
label_191b10:
    // 0x191b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_191b14:
    // 0x191b14: 0xc106794  jal         func_419E50
label_191b18:
    if (ctx->pc == 0x191B18u) {
        ctx->pc = 0x191B1Cu;
        goto label_191b1c;
    }
    ctx->pc = 0x191B14u;
    SET_GPR_U32(ctx, 31, 0x191B1Cu);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x191B14u, 0x191B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191B1Cu;
label_191b1c:
    // 0x191b1c: 0x10000010  b           . + 4 + (0x10 << 2)
label_191b20:
    if (ctx->pc == 0x191B20u) {
        ctx->pc = 0x191B24u;
        goto label_191b24;
    }
    ctx->pc = 0x191B1Cu;
    {
        const bool branch_taken_0x191b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191b1c) {
            ctx->pc = 0x191B60u;
            goto label_191b60;
        }
    }
    ctx->pc = 0x191B24u;
label_191b24:
    // 0x191b24: 0x8f82b9e0  lw          $v0, -0x4620($gp)
    ctx->pc = 0x191b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949344)));
label_191b28:
    // 0x191b28: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_191b2c:
    if (ctx->pc == 0x191B2Cu) {
        ctx->pc = 0x191B30u;
        goto label_191b30;
    }
    ctx->pc = 0x191B28u;
    {
        const bool branch_taken_0x191b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191b28) {
            ctx->pc = 0x191B60u;
            goto label_191b60;
        }
    }
    ctx->pc = 0x191B30u;
label_191b30:
    // 0x191b30: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x191b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
label_191b34:
    // 0x191b34: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x191b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_191b38:
    // 0x191b38: 0xc04fbd0  jal         func_13EF40
label_191b3c:
    if (ctx->pc == 0x191B3Cu) {
        ctx->pc = 0x191B40u;
        goto label_191b40;
    }
    ctx->pc = 0x191B38u;
    SET_GPR_U32(ctx, 31, 0x191B40u);
    ctx->pc = 0x13EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF40u, 0x191B38u, 0x191B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191B40u;
label_191b40:
    // 0x191b40: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x191b40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191b44:
    // 0x191b44: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x191b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_191b48:
    // 0x191b48: 0xc04d374  jal         func_134DD0
label_191b4c:
    if (ctx->pc == 0x191B4Cu) {
        ctx->pc = 0x191B50u;
        goto label_191b50;
    }
    ctx->pc = 0x191B48u;
    SET_GPR_U32(ctx, 31, 0x191B50u);
    ctx->pc = 0x134DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134DD0u, 0x191B48u, 0x191B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191B50u;
label_191b50:
    // 0x191b50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x191b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_191b54:
    // 0x191b54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x191b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191b58:
    // 0x191b58: 0xc04cf14  jal         func_133C50
label_191b5c:
    if (ctx->pc == 0x191B5Cu) {
        ctx->pc = 0x191B60u;
        goto label_191b60;
    }
    ctx->pc = 0x191B58u;
    SET_GPR_U32(ctx, 31, 0x191B60u);
    ctx->pc = 0x133C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133C50u, 0x191B58u, 0x191B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191B60u;
label_191b60:
    // 0x191b60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x191b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_191b64:
    // 0x191b64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x191b64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_191b68:
    // 0x191b68: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x191b68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_191b6c:
    // 0x191b6c: 0x320f809  jalr        $t9
label_191b70:
    if (ctx->pc == 0x191B70u) {
        ctx->pc = 0x191B74u;
        goto label_191b74;
    }
    ctx->pc = 0x191B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x191B74u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191B6Cu, 0x191B74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x191B74u;
label_191b74:
    // 0x191b74: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x191b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_191b78:
    // 0x191b78: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x191b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_191b7c:
    // 0x191b7c: 0x10000030  b           . + 4 + (0x30 << 2)
label_191b80:
    if (ctx->pc == 0x191B80u) {
        ctx->pc = 0x191B84u;
        goto label_191b84;
    }
    ctx->pc = 0x191B7Cu;
    {
        const bool branch_taken_0x191b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191b7c) {
            ctx->pc = 0x191C40u;
            goto label_191c40;
        }
    }
    ctx->pc = 0x191B84u;
label_191b84:
    // 0x191b84: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x191b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
label_191b88:
    // 0x191b88: 0xc04fc54  jal         func_13F150
label_191b8c:
    if (ctx->pc == 0x191B8Cu) {
        ctx->pc = 0x191B90u;
        goto label_191b90;
    }
    ctx->pc = 0x191B88u;
    SET_GPR_U32(ctx, 31, 0x191B90u);
    ctx->pc = 0x13F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F150u, 0x191B88u, 0x191B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191B90u;
label_191b90:
    // 0x191b90: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x191b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
label_191b94:
    // 0x191b94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x191b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191b98:
    // 0x191b98: 0xc04fbc4  jal         func_13EF10
label_191b9c:
    if (ctx->pc == 0x191B9Cu) {
        ctx->pc = 0x191BA0u;
        goto label_191ba0;
    }
    ctx->pc = 0x191B98u;
    SET_GPR_U32(ctx, 31, 0x191BA0u);
    ctx->pc = 0x13EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF10u, 0x191B98u, 0x191BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191BA0u;
label_191ba0:
    // 0x191ba0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x191ba0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191ba4:
    // 0x191ba4: 0x10140026  beq         $zero, $s4, . + 4 + (0x26 << 2)
label_191ba8:
    if (ctx->pc == 0x191BA8u) {
        ctx->pc = 0x191BACu;
        goto label_191bac;
    }
    ctx->pc = 0x191BA4u;
    {
        const bool branch_taken_0x191ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 20));
        if (branch_taken_0x191ba4) {
            ctx->pc = 0x191C40u;
            goto label_191c40;
        }
    }
    ctx->pc = 0x191BACu;
label_191bac:
    // 0x191bac: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x191bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
label_191bb0:
    // 0x191bb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x191bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191bb4:
    // 0x191bb4: 0xc04fbc4  jal         func_13EF10
label_191bb8:
    if (ctx->pc == 0x191BB8u) {
        ctx->pc = 0x191BBCu;
        goto label_191bbc;
    }
    ctx->pc = 0x191BB4u;
    SET_GPR_U32(ctx, 31, 0x191BBCu);
    ctx->pc = 0x13EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF10u, 0x191BB4u, 0x191BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191BBCu;
label_191bbc:
    // 0x191bbc: 0x16820020  bne         $s4, $v0, . + 4 + (0x20 << 2)
label_191bc0:
    if (ctx->pc == 0x191BC0u) {
        ctx->pc = 0x191BC4u;
        goto label_191bc4;
    }
    ctx->pc = 0x191BBCu;
    {
        const bool branch_taken_0x191bbc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x191bbc) {
            ctx->pc = 0x191C40u;
            goto label_191c40;
        }
    }
    ctx->pc = 0x191BC4u;
label_191bc4:
    // 0x191bc4: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x191bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_191bc8:
    // 0x191bc8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x191bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_191bcc:
    // 0x191bcc: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_191bd0:
    if (ctx->pc == 0x191BD0u) {
        ctx->pc = 0x191BD4u;
        goto label_191bd4;
    }
    ctx->pc = 0x191BCCu;
    {
        const bool branch_taken_0x191bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x191bcc) {
            ctx->pc = 0x191C40u;
            goto label_191c40;
        }
    }
    ctx->pc = 0x191BD4u;
label_191bd4:
    // 0x191bd4: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x191bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_191bd8:
    // 0x191bd8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x191bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_191bdc:
    // 0x191bdc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x191bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_191be0:
    // 0x191be0: 0xc085538  jal         func_2154E0
label_191be4:
    if (ctx->pc == 0x191BE4u) {
        ctx->pc = 0x191BE8u;
        goto label_191be8;
    }
    ctx->pc = 0x191BE0u;
    SET_GPR_U32(ctx, 31, 0x191BE8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x191BE0u, 0x191BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191BE8u;
label_191be8:
    // 0x191be8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x191be8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191bec:
    // 0x191bec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x191becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_191bf0:
    // 0x191bf0: 0xc096880  jal         func_25A200
label_191bf4:
    if (ctx->pc == 0x191BF4u) {
        ctx->pc = 0x191BF8u;
        goto label_191bf8;
    }
    ctx->pc = 0x191BF0u;
    SET_GPR_U32(ctx, 31, 0x191BF8u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x191BF0u, 0x191BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191BF8u;
label_191bf8:
    // 0x191bf8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x191bf8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191bfc:
    // 0x191bfc: 0x12c00010  beqz        $s6, . + 4 + (0x10 << 2)
label_191c00:
    if (ctx->pc == 0x191C00u) {
        ctx->pc = 0x191C04u;
        goto label_191c04;
    }
    ctx->pc = 0x191BFCu;
    {
        const bool branch_taken_0x191bfc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x191bfc) {
            ctx->pc = 0x191C40u;
            goto label_191c40;
        }
    }
    ctx->pc = 0x191C04u;
label_191c04:
    // 0x191c04: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x191c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
label_191c08:
    // 0x191c08: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x191c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_191c0c:
    // 0x191c0c: 0xc04fbd0  jal         func_13EF40
label_191c10:
    if (ctx->pc == 0x191C10u) {
        ctx->pc = 0x191C14u;
        goto label_191c14;
    }
    ctx->pc = 0x191C0Cu;
    SET_GPR_U32(ctx, 31, 0x191C14u);
    ctx->pc = 0x13EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF40u, 0x191C0Cu, 0x191C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191C14u;
label_191c14:
    // 0x191c14: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x191c14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191c18:
    // 0x191c18: 0x8f83b9e0  lw          $v1, -0x4620($gp)
    ctx->pc = 0x191c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949344)));
label_191c1c:
    // 0x191c1c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_191c20:
    if (ctx->pc == 0x191C20u) {
        ctx->pc = 0x191C24u;
        goto label_191c24;
    }
    ctx->pc = 0x191C1Cu;
    {
        const bool branch_taken_0x191c1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x191c1c) {
            ctx->pc = 0x191C40u;
            goto label_191c40;
        }
    }
    ctx->pc = 0x191C24u;
label_191c24:
    // 0x191c24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x191c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_191c28:
    // 0x191c28: 0xc04d374  jal         func_134DD0
label_191c2c:
    if (ctx->pc == 0x191C2Cu) {
        ctx->pc = 0x191C30u;
        goto label_191c30;
    }
    ctx->pc = 0x191C28u;
    SET_GPR_U32(ctx, 31, 0x191C30u);
    ctx->pc = 0x134DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134DD0u, 0x191C28u, 0x191C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191C30u;
label_191c30:
    // 0x191c30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x191c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_191c34:
    // 0x191c34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x191c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191c38:
    // 0x191c38: 0xc04cf14  jal         func_133C50
label_191c3c:
    if (ctx->pc == 0x191C3Cu) {
        ctx->pc = 0x191C40u;
        goto label_191c40;
    }
    ctx->pc = 0x191C38u;
    SET_GPR_U32(ctx, 31, 0x191C40u);
    ctx->pc = 0x133C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133C50u, 0x191C38u, 0x191C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191C40u;
label_191c40:
    // 0x191c40: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x191c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_191c44:
    // 0x191c44: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x191c44u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_191c48:
    // 0x191c48: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x191c48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_191c4c:
    // 0x191c4c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x191c4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_191c50:
    // 0x191c50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x191c50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_191c54:
    // 0x191c54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x191c54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_191c58:
    // 0x191c58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x191c58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_191c5c:
    // 0x191c5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x191c5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_191c60:
    // 0x191c60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x191c60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_191c64:
    // 0x191c64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x191c64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_191c68:
    // 0x191c68: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x191c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_191c6c:
    // 0x191c6c: 0x3e00008  jr          $ra
label_191c70:
    if (ctx->pc == 0x191C70u) {
        ctx->pc = 0x191C74u;
        goto label_191c74;
    }
    ctx->pc = 0x191C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191C74u;
label_191c74:
    // 0x191c74: 0x0  nop
    ctx->pc = 0x191c74u;
    // NOP
label_191c78:
    // 0x191c78: 0x0  nop
    ctx->pc = 0x191c78u;
    // NOP
label_191c7c:
    // 0x191c7c: 0x0  nop
    ctx->pc = 0x191c7cu;
    // NOP
label_191c80:
    // 0x191c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x191c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_191c84:
    // 0x191c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_191c88:
    // 0x191c88: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x191c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_191c8c:
    // 0x191c8c: 0x24050079  addiu       $a1, $zero, 0x79
    ctx->pc = 0x191c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
label_191c90:
    // 0x191c90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x191c90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191c94:
    // 0x191c94: 0xc08d69c  jal         func_235A70
label_191c98:
    if (ctx->pc == 0x191C98u) {
        ctx->pc = 0x191C9Cu;
        goto label_191c9c;
    }
    ctx->pc = 0x191C94u;
    SET_GPR_U32(ctx, 31, 0x191C9Cu);
    ctx->pc = 0x235A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A70u, 0x191C94u, 0x191C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191C9Cu;
label_191c9c:
    // 0x191c9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_191ca0:
    // 0x191ca0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x191ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_191ca4:
    // 0x191ca4: 0x3e00008  jr          $ra
label_191ca8:
    if (ctx->pc == 0x191CA8u) {
        ctx->pc = 0x191CACu;
        goto label_191cac;
    }
    ctx->pc = 0x191CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191CACu;
label_191cac:
    // 0x191cac: 0x0  nop
    ctx->pc = 0x191cacu;
    // NOP
label_191cb0:
    // 0x191cb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x191cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_191cb4:
    // 0x191cb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_191cb8:
    // 0x191cb8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x191cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_191cbc:
    // 0x191cbc: 0x2405007b  addiu       $a1, $zero, 0x7B
    ctx->pc = 0x191cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
label_191cc0:
    // 0x191cc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x191cc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191cc4:
    // 0x191cc4: 0xc08d69c  jal         func_235A70
label_191cc8:
    if (ctx->pc == 0x191CC8u) {
        ctx->pc = 0x191CCCu;
        goto label_191ccc;
    }
    ctx->pc = 0x191CC4u;
    SET_GPR_U32(ctx, 31, 0x191CCCu);
    ctx->pc = 0x235A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A70u, 0x191CC4u, 0x191CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191CCCu;
label_191ccc:
    // 0x191ccc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_191cd0:
    // 0x191cd0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x191cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_191cd4:
    // 0x191cd4: 0x3e00008  jr          $ra
label_191cd8:
    if (ctx->pc == 0x191CD8u) {
        ctx->pc = 0x191CDCu;
        goto label_191cdc;
    }
    ctx->pc = 0x191CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191CDCu;
label_191cdc:
    // 0x191cdc: 0x0  nop
    ctx->pc = 0x191cdcu;
    // NOP
label_191ce0:
    // 0x191ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x191ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_191ce4:
    // 0x191ce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_191ce8:
    // 0x191ce8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x191ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_191cec:
    // 0x191cec: 0x2405007c  addiu       $a1, $zero, 0x7C
    ctx->pc = 0x191cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
label_191cf0:
    // 0x191cf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x191cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191cf4:
    // 0x191cf4: 0xc08d69c  jal         func_235A70
label_191cf8:
    if (ctx->pc == 0x191CF8u) {
        ctx->pc = 0x191CFCu;
        goto label_191cfc;
    }
    ctx->pc = 0x191CF4u;
    SET_GPR_U32(ctx, 31, 0x191CFCu);
    ctx->pc = 0x235A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A70u, 0x191CF4u, 0x191CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191CFCu;
label_191cfc:
    // 0x191cfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_191d00:
    // 0x191d00: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x191d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_191d04:
    // 0x191d04: 0x3e00008  jr          $ra
label_191d08:
    if (ctx->pc == 0x191D08u) {
        ctx->pc = 0x191D0Cu;
        goto label_191d0c;
    }
    ctx->pc = 0x191D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191D0Cu;
label_191d0c:
    // 0x191d0c: 0x0  nop
    ctx->pc = 0x191d0cu;
    // NOP
    ctx->pc = 0x191d10u;
}
