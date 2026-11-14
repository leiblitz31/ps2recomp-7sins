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

// Function: sub_003746E0
// Address: 0x3746e0 - 0x376ac0
void sub_003746E0_0x3746e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003746E0_0x3746e0");
#endif

    switch (ctx->pc) {
        case 0x3746e0u: goto label_3746e0;
        case 0x3746e4u: goto label_3746e4;
        case 0x3746e8u: goto label_3746e8;
        case 0x3746ecu: goto label_3746ec;
        case 0x3746f0u: goto label_3746f0;
        case 0x3746f4u: goto label_3746f4;
        case 0x3746f8u: goto label_3746f8;
        case 0x3746fcu: goto label_3746fc;
        case 0x374700u: goto label_374700;
        case 0x374704u: goto label_374704;
        case 0x374708u: goto label_374708;
        case 0x37470cu: goto label_37470c;
        case 0x374710u: goto label_374710;
        case 0x374714u: goto label_374714;
        case 0x374718u: goto label_374718;
        case 0x37471cu: goto label_37471c;
        case 0x374720u: goto label_374720;
        case 0x374724u: goto label_374724;
        case 0x374728u: goto label_374728;
        case 0x37472cu: goto label_37472c;
        case 0x374730u: goto label_374730;
        case 0x374734u: goto label_374734;
        case 0x374738u: goto label_374738;
        case 0x37473cu: goto label_37473c;
        case 0x374740u: goto label_374740;
        case 0x374744u: goto label_374744;
        case 0x374748u: goto label_374748;
        case 0x37474cu: goto label_37474c;
        case 0x374750u: goto label_374750;
        case 0x374754u: goto label_374754;
        case 0x374758u: goto label_374758;
        case 0x37475cu: goto label_37475c;
        case 0x374760u: goto label_374760;
        case 0x374764u: goto label_374764;
        case 0x374768u: goto label_374768;
        case 0x37476cu: goto label_37476c;
        case 0x374770u: goto label_374770;
        case 0x374774u: goto label_374774;
        case 0x374778u: goto label_374778;
        case 0x37477cu: goto label_37477c;
        case 0x374780u: goto label_374780;
        case 0x374784u: goto label_374784;
        case 0x374788u: goto label_374788;
        case 0x37478cu: goto label_37478c;
        case 0x374790u: goto label_374790;
        case 0x374794u: goto label_374794;
        case 0x374798u: goto label_374798;
        case 0x37479cu: goto label_37479c;
        case 0x3747a0u: goto label_3747a0;
        case 0x3747a4u: goto label_3747a4;
        case 0x3747a8u: goto label_3747a8;
        case 0x3747acu: goto label_3747ac;
        case 0x3747b0u: goto label_3747b0;
        case 0x3747b4u: goto label_3747b4;
        case 0x3747b8u: goto label_3747b8;
        case 0x3747bcu: goto label_3747bc;
        case 0x3747c0u: goto label_3747c0;
        case 0x3747c4u: goto label_3747c4;
        case 0x3747c8u: goto label_3747c8;
        case 0x3747ccu: goto label_3747cc;
        case 0x3747d0u: goto label_3747d0;
        case 0x3747d4u: goto label_3747d4;
        case 0x3747d8u: goto label_3747d8;
        case 0x3747dcu: goto label_3747dc;
        case 0x3747e0u: goto label_3747e0;
        case 0x3747e4u: goto label_3747e4;
        case 0x3747e8u: goto label_3747e8;
        case 0x3747ecu: goto label_3747ec;
        case 0x3747f0u: goto label_3747f0;
        case 0x3747f4u: goto label_3747f4;
        case 0x3747f8u: goto label_3747f8;
        case 0x3747fcu: goto label_3747fc;
        case 0x374800u: goto label_374800;
        case 0x374804u: goto label_374804;
        case 0x374808u: goto label_374808;
        case 0x37480cu: goto label_37480c;
        case 0x374810u: goto label_374810;
        case 0x374814u: goto label_374814;
        case 0x374818u: goto label_374818;
        case 0x37481cu: goto label_37481c;
        case 0x374820u: goto label_374820;
        case 0x374824u: goto label_374824;
        case 0x374828u: goto label_374828;
        case 0x37482cu: goto label_37482c;
        case 0x374830u: goto label_374830;
        case 0x374834u: goto label_374834;
        case 0x374838u: goto label_374838;
        case 0x37483cu: goto label_37483c;
        case 0x374840u: goto label_374840;
        case 0x374844u: goto label_374844;
        case 0x374848u: goto label_374848;
        case 0x37484cu: goto label_37484c;
        case 0x374850u: goto label_374850;
        case 0x374854u: goto label_374854;
        case 0x374858u: goto label_374858;
        case 0x37485cu: goto label_37485c;
        case 0x374860u: goto label_374860;
        case 0x374864u: goto label_374864;
        case 0x374868u: goto label_374868;
        case 0x37486cu: goto label_37486c;
        case 0x374870u: goto label_374870;
        case 0x374874u: goto label_374874;
        case 0x374878u: goto label_374878;
        case 0x37487cu: goto label_37487c;
        case 0x374880u: goto label_374880;
        case 0x374884u: goto label_374884;
        case 0x374888u: goto label_374888;
        case 0x37488cu: goto label_37488c;
        case 0x374890u: goto label_374890;
        case 0x374894u: goto label_374894;
        case 0x374898u: goto label_374898;
        case 0x37489cu: goto label_37489c;
        case 0x3748a0u: goto label_3748a0;
        case 0x3748a4u: goto label_3748a4;
        case 0x3748a8u: goto label_3748a8;
        case 0x3748acu: goto label_3748ac;
        case 0x3748b0u: goto label_3748b0;
        case 0x3748b4u: goto label_3748b4;
        case 0x3748b8u: goto label_3748b8;
        case 0x3748bcu: goto label_3748bc;
        case 0x3748c0u: goto label_3748c0;
        case 0x3748c4u: goto label_3748c4;
        case 0x3748c8u: goto label_3748c8;
        case 0x3748ccu: goto label_3748cc;
        case 0x3748d0u: goto label_3748d0;
        case 0x3748d4u: goto label_3748d4;
        case 0x3748d8u: goto label_3748d8;
        case 0x3748dcu: goto label_3748dc;
        case 0x3748e0u: goto label_3748e0;
        case 0x3748e4u: goto label_3748e4;
        case 0x3748e8u: goto label_3748e8;
        case 0x3748ecu: goto label_3748ec;
        case 0x3748f0u: goto label_3748f0;
        case 0x3748f4u: goto label_3748f4;
        case 0x3748f8u: goto label_3748f8;
        case 0x3748fcu: goto label_3748fc;
        case 0x374900u: goto label_374900;
        case 0x374904u: goto label_374904;
        case 0x374908u: goto label_374908;
        case 0x37490cu: goto label_37490c;
        case 0x374910u: goto label_374910;
        case 0x374914u: goto label_374914;
        case 0x374918u: goto label_374918;
        case 0x37491cu: goto label_37491c;
        case 0x374920u: goto label_374920;
        case 0x374924u: goto label_374924;
        case 0x374928u: goto label_374928;
        case 0x37492cu: goto label_37492c;
        case 0x374930u: goto label_374930;
        case 0x374934u: goto label_374934;
        case 0x374938u: goto label_374938;
        case 0x37493cu: goto label_37493c;
        case 0x374940u: goto label_374940;
        case 0x374944u: goto label_374944;
        case 0x374948u: goto label_374948;
        case 0x37494cu: goto label_37494c;
        case 0x374950u: goto label_374950;
        case 0x374954u: goto label_374954;
        case 0x374958u: goto label_374958;
        case 0x37495cu: goto label_37495c;
        case 0x374960u: goto label_374960;
        case 0x374964u: goto label_374964;
        case 0x374968u: goto label_374968;
        case 0x37496cu: goto label_37496c;
        case 0x374970u: goto label_374970;
        case 0x374974u: goto label_374974;
        case 0x374978u: goto label_374978;
        case 0x37497cu: goto label_37497c;
        case 0x374980u: goto label_374980;
        case 0x374984u: goto label_374984;
        case 0x374988u: goto label_374988;
        case 0x37498cu: goto label_37498c;
        case 0x374990u: goto label_374990;
        case 0x374994u: goto label_374994;
        case 0x374998u: goto label_374998;
        case 0x37499cu: goto label_37499c;
        case 0x3749a0u: goto label_3749a0;
        case 0x3749a4u: goto label_3749a4;
        case 0x3749a8u: goto label_3749a8;
        case 0x3749acu: goto label_3749ac;
        case 0x3749b0u: goto label_3749b0;
        case 0x3749b4u: goto label_3749b4;
        case 0x3749b8u: goto label_3749b8;
        case 0x3749bcu: goto label_3749bc;
        case 0x3749c0u: goto label_3749c0;
        case 0x3749c4u: goto label_3749c4;
        case 0x3749c8u: goto label_3749c8;
        case 0x3749ccu: goto label_3749cc;
        case 0x3749d0u: goto label_3749d0;
        case 0x3749d4u: goto label_3749d4;
        case 0x3749d8u: goto label_3749d8;
        case 0x3749dcu: goto label_3749dc;
        case 0x3749e0u: goto label_3749e0;
        case 0x3749e4u: goto label_3749e4;
        case 0x3749e8u: goto label_3749e8;
        case 0x3749ecu: goto label_3749ec;
        case 0x3749f0u: goto label_3749f0;
        case 0x3749f4u: goto label_3749f4;
        case 0x3749f8u: goto label_3749f8;
        case 0x3749fcu: goto label_3749fc;
        case 0x374a00u: goto label_374a00;
        case 0x374a04u: goto label_374a04;
        case 0x374a08u: goto label_374a08;
        case 0x374a0cu: goto label_374a0c;
        case 0x374a10u: goto label_374a10;
        case 0x374a14u: goto label_374a14;
        case 0x374a18u: goto label_374a18;
        case 0x374a1cu: goto label_374a1c;
        case 0x374a20u: goto label_374a20;
        case 0x374a24u: goto label_374a24;
        case 0x374a28u: goto label_374a28;
        case 0x374a2cu: goto label_374a2c;
        case 0x374a30u: goto label_374a30;
        case 0x374a34u: goto label_374a34;
        case 0x374a38u: goto label_374a38;
        case 0x374a3cu: goto label_374a3c;
        case 0x374a40u: goto label_374a40;
        case 0x374a44u: goto label_374a44;
        case 0x374a48u: goto label_374a48;
        case 0x374a4cu: goto label_374a4c;
        case 0x374a50u: goto label_374a50;
        case 0x374a54u: goto label_374a54;
        case 0x374a58u: goto label_374a58;
        case 0x374a5cu: goto label_374a5c;
        case 0x374a60u: goto label_374a60;
        case 0x374a64u: goto label_374a64;
        case 0x374a68u: goto label_374a68;
        case 0x374a6cu: goto label_374a6c;
        case 0x374a70u: goto label_374a70;
        case 0x374a74u: goto label_374a74;
        case 0x374a78u: goto label_374a78;
        case 0x374a7cu: goto label_374a7c;
        case 0x374a80u: goto label_374a80;
        case 0x374a84u: goto label_374a84;
        case 0x374a88u: goto label_374a88;
        case 0x374a8cu: goto label_374a8c;
        case 0x374a90u: goto label_374a90;
        case 0x374a94u: goto label_374a94;
        case 0x374a98u: goto label_374a98;
        case 0x374a9cu: goto label_374a9c;
        case 0x374aa0u: goto label_374aa0;
        case 0x374aa4u: goto label_374aa4;
        case 0x374aa8u: goto label_374aa8;
        case 0x374aacu: goto label_374aac;
        case 0x374ab0u: goto label_374ab0;
        case 0x374ab4u: goto label_374ab4;
        case 0x374ab8u: goto label_374ab8;
        case 0x374abcu: goto label_374abc;
        case 0x374ac0u: goto label_374ac0;
        case 0x374ac4u: goto label_374ac4;
        case 0x374ac8u: goto label_374ac8;
        case 0x374accu: goto label_374acc;
        case 0x374ad0u: goto label_374ad0;
        case 0x374ad4u: goto label_374ad4;
        case 0x374ad8u: goto label_374ad8;
        case 0x374adcu: goto label_374adc;
        case 0x374ae0u: goto label_374ae0;
        case 0x374ae4u: goto label_374ae4;
        case 0x374ae8u: goto label_374ae8;
        case 0x374aecu: goto label_374aec;
        case 0x374af0u: goto label_374af0;
        case 0x374af4u: goto label_374af4;
        case 0x374af8u: goto label_374af8;
        case 0x374afcu: goto label_374afc;
        case 0x374b00u: goto label_374b00;
        case 0x374b04u: goto label_374b04;
        case 0x374b08u: goto label_374b08;
        case 0x374b0cu: goto label_374b0c;
        case 0x374b10u: goto label_374b10;
        case 0x374b14u: goto label_374b14;
        case 0x374b18u: goto label_374b18;
        case 0x374b1cu: goto label_374b1c;
        case 0x374b20u: goto label_374b20;
        case 0x374b24u: goto label_374b24;
        case 0x374b28u: goto label_374b28;
        case 0x374b2cu: goto label_374b2c;
        case 0x374b30u: goto label_374b30;
        case 0x374b34u: goto label_374b34;
        case 0x374b38u: goto label_374b38;
        case 0x374b3cu: goto label_374b3c;
        case 0x374b40u: goto label_374b40;
        case 0x374b44u: goto label_374b44;
        case 0x374b48u: goto label_374b48;
        case 0x374b4cu: goto label_374b4c;
        case 0x374b50u: goto label_374b50;
        case 0x374b54u: goto label_374b54;
        case 0x374b58u: goto label_374b58;
        case 0x374b5cu: goto label_374b5c;
        case 0x374b60u: goto label_374b60;
        case 0x374b64u: goto label_374b64;
        case 0x374b68u: goto label_374b68;
        case 0x374b6cu: goto label_374b6c;
        case 0x374b70u: goto label_374b70;
        case 0x374b74u: goto label_374b74;
        case 0x374b78u: goto label_374b78;
        case 0x374b7cu: goto label_374b7c;
        case 0x374b80u: goto label_374b80;
        case 0x374b84u: goto label_374b84;
        case 0x374b88u: goto label_374b88;
        case 0x374b8cu: goto label_374b8c;
        case 0x374b90u: goto label_374b90;
        case 0x374b94u: goto label_374b94;
        case 0x374b98u: goto label_374b98;
        case 0x374b9cu: goto label_374b9c;
        case 0x374ba0u: goto label_374ba0;
        case 0x374ba4u: goto label_374ba4;
        case 0x374ba8u: goto label_374ba8;
        case 0x374bacu: goto label_374bac;
        case 0x374bb0u: goto label_374bb0;
        case 0x374bb4u: goto label_374bb4;
        case 0x374bb8u: goto label_374bb8;
        case 0x374bbcu: goto label_374bbc;
        case 0x374bc0u: goto label_374bc0;
        case 0x374bc4u: goto label_374bc4;
        case 0x374bc8u: goto label_374bc8;
        case 0x374bccu: goto label_374bcc;
        case 0x374bd0u: goto label_374bd0;
        case 0x374bd4u: goto label_374bd4;
        case 0x374bd8u: goto label_374bd8;
        case 0x374bdcu: goto label_374bdc;
        case 0x374be0u: goto label_374be0;
        case 0x374be4u: goto label_374be4;
        case 0x374be8u: goto label_374be8;
        case 0x374becu: goto label_374bec;
        case 0x374bf0u: goto label_374bf0;
        case 0x374bf4u: goto label_374bf4;
        case 0x374bf8u: goto label_374bf8;
        case 0x374bfcu: goto label_374bfc;
        case 0x374c00u: goto label_374c00;
        case 0x374c04u: goto label_374c04;
        case 0x374c08u: goto label_374c08;
        case 0x374c0cu: goto label_374c0c;
        case 0x374c10u: goto label_374c10;
        case 0x374c14u: goto label_374c14;
        case 0x374c18u: goto label_374c18;
        case 0x374c1cu: goto label_374c1c;
        case 0x374c20u: goto label_374c20;
        case 0x374c24u: goto label_374c24;
        case 0x374c28u: goto label_374c28;
        case 0x374c2cu: goto label_374c2c;
        case 0x374c30u: goto label_374c30;
        case 0x374c34u: goto label_374c34;
        case 0x374c38u: goto label_374c38;
        case 0x374c3cu: goto label_374c3c;
        case 0x374c40u: goto label_374c40;
        case 0x374c44u: goto label_374c44;
        case 0x374c48u: goto label_374c48;
        case 0x374c4cu: goto label_374c4c;
        case 0x374c50u: goto label_374c50;
        case 0x374c54u: goto label_374c54;
        case 0x374c58u: goto label_374c58;
        case 0x374c5cu: goto label_374c5c;
        case 0x374c60u: goto label_374c60;
        case 0x374c64u: goto label_374c64;
        case 0x374c68u: goto label_374c68;
        case 0x374c6cu: goto label_374c6c;
        case 0x374c70u: goto label_374c70;
        case 0x374c74u: goto label_374c74;
        case 0x374c78u: goto label_374c78;
        case 0x374c7cu: goto label_374c7c;
        case 0x374c80u: goto label_374c80;
        case 0x374c84u: goto label_374c84;
        case 0x374c88u: goto label_374c88;
        case 0x374c8cu: goto label_374c8c;
        case 0x374c90u: goto label_374c90;
        case 0x374c94u: goto label_374c94;
        case 0x374c98u: goto label_374c98;
        case 0x374c9cu: goto label_374c9c;
        case 0x374ca0u: goto label_374ca0;
        case 0x374ca4u: goto label_374ca4;
        case 0x374ca8u: goto label_374ca8;
        case 0x374cacu: goto label_374cac;
        case 0x374cb0u: goto label_374cb0;
        case 0x374cb4u: goto label_374cb4;
        case 0x374cb8u: goto label_374cb8;
        case 0x374cbcu: goto label_374cbc;
        case 0x374cc0u: goto label_374cc0;
        case 0x374cc4u: goto label_374cc4;
        case 0x374cc8u: goto label_374cc8;
        case 0x374cccu: goto label_374ccc;
        case 0x374cd0u: goto label_374cd0;
        case 0x374cd4u: goto label_374cd4;
        case 0x374cd8u: goto label_374cd8;
        case 0x374cdcu: goto label_374cdc;
        case 0x374ce0u: goto label_374ce0;
        case 0x374ce4u: goto label_374ce4;
        case 0x374ce8u: goto label_374ce8;
        case 0x374cecu: goto label_374cec;
        case 0x374cf0u: goto label_374cf0;
        case 0x374cf4u: goto label_374cf4;
        case 0x374cf8u: goto label_374cf8;
        case 0x374cfcu: goto label_374cfc;
        case 0x374d00u: goto label_374d00;
        case 0x374d04u: goto label_374d04;
        case 0x374d08u: goto label_374d08;
        case 0x374d0cu: goto label_374d0c;
        case 0x374d10u: goto label_374d10;
        case 0x374d14u: goto label_374d14;
        case 0x374d18u: goto label_374d18;
        case 0x374d1cu: goto label_374d1c;
        case 0x374d20u: goto label_374d20;
        case 0x374d24u: goto label_374d24;
        case 0x374d28u: goto label_374d28;
        case 0x374d2cu: goto label_374d2c;
        case 0x374d30u: goto label_374d30;
        case 0x374d34u: goto label_374d34;
        case 0x374d38u: goto label_374d38;
        case 0x374d3cu: goto label_374d3c;
        case 0x374d40u: goto label_374d40;
        case 0x374d44u: goto label_374d44;
        case 0x374d48u: goto label_374d48;
        case 0x374d4cu: goto label_374d4c;
        case 0x374d50u: goto label_374d50;
        case 0x374d54u: goto label_374d54;
        case 0x374d58u: goto label_374d58;
        case 0x374d5cu: goto label_374d5c;
        case 0x374d60u: goto label_374d60;
        case 0x374d64u: goto label_374d64;
        case 0x374d68u: goto label_374d68;
        case 0x374d6cu: goto label_374d6c;
        case 0x374d70u: goto label_374d70;
        case 0x374d74u: goto label_374d74;
        case 0x374d78u: goto label_374d78;
        case 0x374d7cu: goto label_374d7c;
        case 0x374d80u: goto label_374d80;
        case 0x374d84u: goto label_374d84;
        case 0x374d88u: goto label_374d88;
        case 0x374d8cu: goto label_374d8c;
        case 0x374d90u: goto label_374d90;
        case 0x374d94u: goto label_374d94;
        case 0x374d98u: goto label_374d98;
        case 0x374d9cu: goto label_374d9c;
        case 0x374da0u: goto label_374da0;
        case 0x374da4u: goto label_374da4;
        case 0x374da8u: goto label_374da8;
        case 0x374dacu: goto label_374dac;
        case 0x374db0u: goto label_374db0;
        case 0x374db4u: goto label_374db4;
        case 0x374db8u: goto label_374db8;
        case 0x374dbcu: goto label_374dbc;
        case 0x374dc0u: goto label_374dc0;
        case 0x374dc4u: goto label_374dc4;
        case 0x374dc8u: goto label_374dc8;
        case 0x374dccu: goto label_374dcc;
        case 0x374dd0u: goto label_374dd0;
        case 0x374dd4u: goto label_374dd4;
        case 0x374dd8u: goto label_374dd8;
        case 0x374ddcu: goto label_374ddc;
        case 0x374de0u: goto label_374de0;
        case 0x374de4u: goto label_374de4;
        case 0x374de8u: goto label_374de8;
        case 0x374decu: goto label_374dec;
        case 0x374df0u: goto label_374df0;
        case 0x374df4u: goto label_374df4;
        case 0x374df8u: goto label_374df8;
        case 0x374dfcu: goto label_374dfc;
        case 0x374e00u: goto label_374e00;
        case 0x374e04u: goto label_374e04;
        case 0x374e08u: goto label_374e08;
        case 0x374e0cu: goto label_374e0c;
        case 0x374e10u: goto label_374e10;
        case 0x374e14u: goto label_374e14;
        case 0x374e18u: goto label_374e18;
        case 0x374e1cu: goto label_374e1c;
        case 0x374e20u: goto label_374e20;
        case 0x374e24u: goto label_374e24;
        case 0x374e28u: goto label_374e28;
        case 0x374e2cu: goto label_374e2c;
        case 0x374e30u: goto label_374e30;
        case 0x374e34u: goto label_374e34;
        case 0x374e38u: goto label_374e38;
        case 0x374e3cu: goto label_374e3c;
        case 0x374e40u: goto label_374e40;
        case 0x374e44u: goto label_374e44;
        case 0x374e48u: goto label_374e48;
        case 0x374e4cu: goto label_374e4c;
        case 0x374e50u: goto label_374e50;
        case 0x374e54u: goto label_374e54;
        case 0x374e58u: goto label_374e58;
        case 0x374e5cu: goto label_374e5c;
        case 0x374e60u: goto label_374e60;
        case 0x374e64u: goto label_374e64;
        case 0x374e68u: goto label_374e68;
        case 0x374e6cu: goto label_374e6c;
        case 0x374e70u: goto label_374e70;
        case 0x374e74u: goto label_374e74;
        case 0x374e78u: goto label_374e78;
        case 0x374e7cu: goto label_374e7c;
        case 0x374e80u: goto label_374e80;
        case 0x374e84u: goto label_374e84;
        case 0x374e88u: goto label_374e88;
        case 0x374e8cu: goto label_374e8c;
        case 0x374e90u: goto label_374e90;
        case 0x374e94u: goto label_374e94;
        case 0x374e98u: goto label_374e98;
        case 0x374e9cu: goto label_374e9c;
        case 0x374ea0u: goto label_374ea0;
        case 0x374ea4u: goto label_374ea4;
        case 0x374ea8u: goto label_374ea8;
        case 0x374eacu: goto label_374eac;
        case 0x374eb0u: goto label_374eb0;
        case 0x374eb4u: goto label_374eb4;
        case 0x374eb8u: goto label_374eb8;
        case 0x374ebcu: goto label_374ebc;
        case 0x374ec0u: goto label_374ec0;
        case 0x374ec4u: goto label_374ec4;
        case 0x374ec8u: goto label_374ec8;
        case 0x374eccu: goto label_374ecc;
        case 0x374ed0u: goto label_374ed0;
        case 0x374ed4u: goto label_374ed4;
        case 0x374ed8u: goto label_374ed8;
        case 0x374edcu: goto label_374edc;
        case 0x374ee0u: goto label_374ee0;
        case 0x374ee4u: goto label_374ee4;
        case 0x374ee8u: goto label_374ee8;
        case 0x374eecu: goto label_374eec;
        case 0x374ef0u: goto label_374ef0;
        case 0x374ef4u: goto label_374ef4;
        case 0x374ef8u: goto label_374ef8;
        case 0x374efcu: goto label_374efc;
        case 0x374f00u: goto label_374f00;
        case 0x374f04u: goto label_374f04;
        case 0x374f08u: goto label_374f08;
        case 0x374f0cu: goto label_374f0c;
        case 0x374f10u: goto label_374f10;
        case 0x374f14u: goto label_374f14;
        case 0x374f18u: goto label_374f18;
        case 0x374f1cu: goto label_374f1c;
        case 0x374f20u: goto label_374f20;
        case 0x374f24u: goto label_374f24;
        case 0x374f28u: goto label_374f28;
        case 0x374f2cu: goto label_374f2c;
        case 0x374f30u: goto label_374f30;
        case 0x374f34u: goto label_374f34;
        case 0x374f38u: goto label_374f38;
        case 0x374f3cu: goto label_374f3c;
        case 0x374f40u: goto label_374f40;
        case 0x374f44u: goto label_374f44;
        case 0x374f48u: goto label_374f48;
        case 0x374f4cu: goto label_374f4c;
        case 0x374f50u: goto label_374f50;
        case 0x374f54u: goto label_374f54;
        case 0x374f58u: goto label_374f58;
        case 0x374f5cu: goto label_374f5c;
        case 0x374f60u: goto label_374f60;
        case 0x374f64u: goto label_374f64;
        case 0x374f68u: goto label_374f68;
        case 0x374f6cu: goto label_374f6c;
        case 0x374f70u: goto label_374f70;
        case 0x374f74u: goto label_374f74;
        case 0x374f78u: goto label_374f78;
        case 0x374f7cu: goto label_374f7c;
        case 0x374f80u: goto label_374f80;
        case 0x374f84u: goto label_374f84;
        case 0x374f88u: goto label_374f88;
        case 0x374f8cu: goto label_374f8c;
        case 0x374f90u: goto label_374f90;
        case 0x374f94u: goto label_374f94;
        case 0x374f98u: goto label_374f98;
        case 0x374f9cu: goto label_374f9c;
        case 0x374fa0u: goto label_374fa0;
        case 0x374fa4u: goto label_374fa4;
        case 0x374fa8u: goto label_374fa8;
        case 0x374facu: goto label_374fac;
        case 0x374fb0u: goto label_374fb0;
        case 0x374fb4u: goto label_374fb4;
        case 0x374fb8u: goto label_374fb8;
        case 0x374fbcu: goto label_374fbc;
        case 0x374fc0u: goto label_374fc0;
        case 0x374fc4u: goto label_374fc4;
        case 0x374fc8u: goto label_374fc8;
        case 0x374fccu: goto label_374fcc;
        case 0x374fd0u: goto label_374fd0;
        case 0x374fd4u: goto label_374fd4;
        case 0x374fd8u: goto label_374fd8;
        case 0x374fdcu: goto label_374fdc;
        case 0x374fe0u: goto label_374fe0;
        case 0x374fe4u: goto label_374fe4;
        case 0x374fe8u: goto label_374fe8;
        case 0x374fecu: goto label_374fec;
        case 0x374ff0u: goto label_374ff0;
        case 0x374ff4u: goto label_374ff4;
        case 0x374ff8u: goto label_374ff8;
        case 0x374ffcu: goto label_374ffc;
        case 0x375000u: goto label_375000;
        case 0x375004u: goto label_375004;
        case 0x375008u: goto label_375008;
        case 0x37500cu: goto label_37500c;
        case 0x375010u: goto label_375010;
        case 0x375014u: goto label_375014;
        case 0x375018u: goto label_375018;
        case 0x37501cu: goto label_37501c;
        case 0x375020u: goto label_375020;
        case 0x375024u: goto label_375024;
        case 0x375028u: goto label_375028;
        case 0x37502cu: goto label_37502c;
        case 0x375030u: goto label_375030;
        case 0x375034u: goto label_375034;
        case 0x375038u: goto label_375038;
        case 0x37503cu: goto label_37503c;
        case 0x375040u: goto label_375040;
        case 0x375044u: goto label_375044;
        case 0x375048u: goto label_375048;
        case 0x37504cu: goto label_37504c;
        case 0x375050u: goto label_375050;
        case 0x375054u: goto label_375054;
        case 0x375058u: goto label_375058;
        case 0x37505cu: goto label_37505c;
        case 0x375060u: goto label_375060;
        case 0x375064u: goto label_375064;
        case 0x375068u: goto label_375068;
        case 0x37506cu: goto label_37506c;
        case 0x375070u: goto label_375070;
        case 0x375074u: goto label_375074;
        case 0x375078u: goto label_375078;
        case 0x37507cu: goto label_37507c;
        case 0x375080u: goto label_375080;
        case 0x375084u: goto label_375084;
        case 0x375088u: goto label_375088;
        case 0x37508cu: goto label_37508c;
        case 0x375090u: goto label_375090;
        case 0x375094u: goto label_375094;
        case 0x375098u: goto label_375098;
        case 0x37509cu: goto label_37509c;
        case 0x3750a0u: goto label_3750a0;
        case 0x3750a4u: goto label_3750a4;
        case 0x3750a8u: goto label_3750a8;
        case 0x3750acu: goto label_3750ac;
        case 0x3750b0u: goto label_3750b0;
        case 0x3750b4u: goto label_3750b4;
        case 0x3750b8u: goto label_3750b8;
        case 0x3750bcu: goto label_3750bc;
        case 0x3750c0u: goto label_3750c0;
        case 0x3750c4u: goto label_3750c4;
        case 0x3750c8u: goto label_3750c8;
        case 0x3750ccu: goto label_3750cc;
        case 0x3750d0u: goto label_3750d0;
        case 0x3750d4u: goto label_3750d4;
        case 0x3750d8u: goto label_3750d8;
        case 0x3750dcu: goto label_3750dc;
        case 0x3750e0u: goto label_3750e0;
        case 0x3750e4u: goto label_3750e4;
        case 0x3750e8u: goto label_3750e8;
        case 0x3750ecu: goto label_3750ec;
        case 0x3750f0u: goto label_3750f0;
        case 0x3750f4u: goto label_3750f4;
        case 0x3750f8u: goto label_3750f8;
        case 0x3750fcu: goto label_3750fc;
        case 0x375100u: goto label_375100;
        case 0x375104u: goto label_375104;
        case 0x375108u: goto label_375108;
        case 0x37510cu: goto label_37510c;
        case 0x375110u: goto label_375110;
        case 0x375114u: goto label_375114;
        case 0x375118u: goto label_375118;
        case 0x37511cu: goto label_37511c;
        case 0x375120u: goto label_375120;
        case 0x375124u: goto label_375124;
        case 0x375128u: goto label_375128;
        case 0x37512cu: goto label_37512c;
        case 0x375130u: goto label_375130;
        case 0x375134u: goto label_375134;
        case 0x375138u: goto label_375138;
        case 0x37513cu: goto label_37513c;
        case 0x375140u: goto label_375140;
        case 0x375144u: goto label_375144;
        case 0x375148u: goto label_375148;
        case 0x37514cu: goto label_37514c;
        case 0x375150u: goto label_375150;
        case 0x375154u: goto label_375154;
        case 0x375158u: goto label_375158;
        case 0x37515cu: goto label_37515c;
        case 0x375160u: goto label_375160;
        case 0x375164u: goto label_375164;
        case 0x375168u: goto label_375168;
        case 0x37516cu: goto label_37516c;
        case 0x375170u: goto label_375170;
        case 0x375174u: goto label_375174;
        case 0x375178u: goto label_375178;
        case 0x37517cu: goto label_37517c;
        case 0x375180u: goto label_375180;
        case 0x375184u: goto label_375184;
        case 0x375188u: goto label_375188;
        case 0x37518cu: goto label_37518c;
        case 0x375190u: goto label_375190;
        case 0x375194u: goto label_375194;
        case 0x375198u: goto label_375198;
        case 0x37519cu: goto label_37519c;
        case 0x3751a0u: goto label_3751a0;
        case 0x3751a4u: goto label_3751a4;
        case 0x3751a8u: goto label_3751a8;
        case 0x3751acu: goto label_3751ac;
        case 0x3751b0u: goto label_3751b0;
        case 0x3751b4u: goto label_3751b4;
        case 0x3751b8u: goto label_3751b8;
        case 0x3751bcu: goto label_3751bc;
        case 0x3751c0u: goto label_3751c0;
        case 0x3751c4u: goto label_3751c4;
        case 0x3751c8u: goto label_3751c8;
        case 0x3751ccu: goto label_3751cc;
        case 0x3751d0u: goto label_3751d0;
        case 0x3751d4u: goto label_3751d4;
        case 0x3751d8u: goto label_3751d8;
        case 0x3751dcu: goto label_3751dc;
        case 0x3751e0u: goto label_3751e0;
        case 0x3751e4u: goto label_3751e4;
        case 0x3751e8u: goto label_3751e8;
        case 0x3751ecu: goto label_3751ec;
        case 0x3751f0u: goto label_3751f0;
        case 0x3751f4u: goto label_3751f4;
        case 0x3751f8u: goto label_3751f8;
        case 0x3751fcu: goto label_3751fc;
        case 0x375200u: goto label_375200;
        case 0x375204u: goto label_375204;
        case 0x375208u: goto label_375208;
        case 0x37520cu: goto label_37520c;
        case 0x375210u: goto label_375210;
        case 0x375214u: goto label_375214;
        case 0x375218u: goto label_375218;
        case 0x37521cu: goto label_37521c;
        case 0x375220u: goto label_375220;
        case 0x375224u: goto label_375224;
        case 0x375228u: goto label_375228;
        case 0x37522cu: goto label_37522c;
        case 0x375230u: goto label_375230;
        case 0x375234u: goto label_375234;
        case 0x375238u: goto label_375238;
        case 0x37523cu: goto label_37523c;
        case 0x375240u: goto label_375240;
        case 0x375244u: goto label_375244;
        case 0x375248u: goto label_375248;
        case 0x37524cu: goto label_37524c;
        case 0x375250u: goto label_375250;
        case 0x375254u: goto label_375254;
        case 0x375258u: goto label_375258;
        case 0x37525cu: goto label_37525c;
        case 0x375260u: goto label_375260;
        case 0x375264u: goto label_375264;
        case 0x375268u: goto label_375268;
        case 0x37526cu: goto label_37526c;
        case 0x375270u: goto label_375270;
        case 0x375274u: goto label_375274;
        case 0x375278u: goto label_375278;
        case 0x37527cu: goto label_37527c;
        case 0x375280u: goto label_375280;
        case 0x375284u: goto label_375284;
        case 0x375288u: goto label_375288;
        case 0x37528cu: goto label_37528c;
        case 0x375290u: goto label_375290;
        case 0x375294u: goto label_375294;
        case 0x375298u: goto label_375298;
        case 0x37529cu: goto label_37529c;
        case 0x3752a0u: goto label_3752a0;
        case 0x3752a4u: goto label_3752a4;
        case 0x3752a8u: goto label_3752a8;
        case 0x3752acu: goto label_3752ac;
        case 0x3752b0u: goto label_3752b0;
        case 0x3752b4u: goto label_3752b4;
        case 0x3752b8u: goto label_3752b8;
        case 0x3752bcu: goto label_3752bc;
        case 0x3752c0u: goto label_3752c0;
        case 0x3752c4u: goto label_3752c4;
        case 0x3752c8u: goto label_3752c8;
        case 0x3752ccu: goto label_3752cc;
        case 0x3752d0u: goto label_3752d0;
        case 0x3752d4u: goto label_3752d4;
        case 0x3752d8u: goto label_3752d8;
        case 0x3752dcu: goto label_3752dc;
        case 0x3752e0u: goto label_3752e0;
        case 0x3752e4u: goto label_3752e4;
        case 0x3752e8u: goto label_3752e8;
        case 0x3752ecu: goto label_3752ec;
        case 0x3752f0u: goto label_3752f0;
        case 0x3752f4u: goto label_3752f4;
        case 0x3752f8u: goto label_3752f8;
        case 0x3752fcu: goto label_3752fc;
        case 0x375300u: goto label_375300;
        case 0x375304u: goto label_375304;
        case 0x375308u: goto label_375308;
        case 0x37530cu: goto label_37530c;
        case 0x375310u: goto label_375310;
        case 0x375314u: goto label_375314;
        case 0x375318u: goto label_375318;
        case 0x37531cu: goto label_37531c;
        case 0x375320u: goto label_375320;
        case 0x375324u: goto label_375324;
        case 0x375328u: goto label_375328;
        case 0x37532cu: goto label_37532c;
        case 0x375330u: goto label_375330;
        case 0x375334u: goto label_375334;
        case 0x375338u: goto label_375338;
        case 0x37533cu: goto label_37533c;
        case 0x375340u: goto label_375340;
        case 0x375344u: goto label_375344;
        case 0x375348u: goto label_375348;
        case 0x37534cu: goto label_37534c;
        case 0x375350u: goto label_375350;
        case 0x375354u: goto label_375354;
        case 0x375358u: goto label_375358;
        case 0x37535cu: goto label_37535c;
        case 0x375360u: goto label_375360;
        case 0x375364u: goto label_375364;
        case 0x375368u: goto label_375368;
        case 0x37536cu: goto label_37536c;
        case 0x375370u: goto label_375370;
        case 0x375374u: goto label_375374;
        case 0x375378u: goto label_375378;
        case 0x37537cu: goto label_37537c;
        case 0x375380u: goto label_375380;
        case 0x375384u: goto label_375384;
        case 0x375388u: goto label_375388;
        case 0x37538cu: goto label_37538c;
        case 0x375390u: goto label_375390;
        case 0x375394u: goto label_375394;
        case 0x375398u: goto label_375398;
        case 0x37539cu: goto label_37539c;
        case 0x3753a0u: goto label_3753a0;
        case 0x3753a4u: goto label_3753a4;
        case 0x3753a8u: goto label_3753a8;
        case 0x3753acu: goto label_3753ac;
        case 0x3753b0u: goto label_3753b0;
        case 0x3753b4u: goto label_3753b4;
        case 0x3753b8u: goto label_3753b8;
        case 0x3753bcu: goto label_3753bc;
        case 0x3753c0u: goto label_3753c0;
        case 0x3753c4u: goto label_3753c4;
        case 0x3753c8u: goto label_3753c8;
        case 0x3753ccu: goto label_3753cc;
        case 0x3753d0u: goto label_3753d0;
        case 0x3753d4u: goto label_3753d4;
        case 0x3753d8u: goto label_3753d8;
        case 0x3753dcu: goto label_3753dc;
        case 0x3753e0u: goto label_3753e0;
        case 0x3753e4u: goto label_3753e4;
        case 0x3753e8u: goto label_3753e8;
        case 0x3753ecu: goto label_3753ec;
        case 0x3753f0u: goto label_3753f0;
        case 0x3753f4u: goto label_3753f4;
        case 0x3753f8u: goto label_3753f8;
        case 0x3753fcu: goto label_3753fc;
        case 0x375400u: goto label_375400;
        case 0x375404u: goto label_375404;
        case 0x375408u: goto label_375408;
        case 0x37540cu: goto label_37540c;
        case 0x375410u: goto label_375410;
        case 0x375414u: goto label_375414;
        case 0x375418u: goto label_375418;
        case 0x37541cu: goto label_37541c;
        case 0x375420u: goto label_375420;
        case 0x375424u: goto label_375424;
        case 0x375428u: goto label_375428;
        case 0x37542cu: goto label_37542c;
        case 0x375430u: goto label_375430;
        case 0x375434u: goto label_375434;
        case 0x375438u: goto label_375438;
        case 0x37543cu: goto label_37543c;
        case 0x375440u: goto label_375440;
        case 0x375444u: goto label_375444;
        case 0x375448u: goto label_375448;
        case 0x37544cu: goto label_37544c;
        case 0x375450u: goto label_375450;
        case 0x375454u: goto label_375454;
        case 0x375458u: goto label_375458;
        case 0x37545cu: goto label_37545c;
        case 0x375460u: goto label_375460;
        case 0x375464u: goto label_375464;
        case 0x375468u: goto label_375468;
        case 0x37546cu: goto label_37546c;
        case 0x375470u: goto label_375470;
        case 0x375474u: goto label_375474;
        case 0x375478u: goto label_375478;
        case 0x37547cu: goto label_37547c;
        case 0x375480u: goto label_375480;
        case 0x375484u: goto label_375484;
        case 0x375488u: goto label_375488;
        case 0x37548cu: goto label_37548c;
        case 0x375490u: goto label_375490;
        case 0x375494u: goto label_375494;
        case 0x375498u: goto label_375498;
        case 0x37549cu: goto label_37549c;
        case 0x3754a0u: goto label_3754a0;
        case 0x3754a4u: goto label_3754a4;
        case 0x3754a8u: goto label_3754a8;
        case 0x3754acu: goto label_3754ac;
        case 0x3754b0u: goto label_3754b0;
        case 0x3754b4u: goto label_3754b4;
        case 0x3754b8u: goto label_3754b8;
        case 0x3754bcu: goto label_3754bc;
        case 0x3754c0u: goto label_3754c0;
        case 0x3754c4u: goto label_3754c4;
        case 0x3754c8u: goto label_3754c8;
        case 0x3754ccu: goto label_3754cc;
        case 0x3754d0u: goto label_3754d0;
        case 0x3754d4u: goto label_3754d4;
        case 0x3754d8u: goto label_3754d8;
        case 0x3754dcu: goto label_3754dc;
        case 0x3754e0u: goto label_3754e0;
        case 0x3754e4u: goto label_3754e4;
        case 0x3754e8u: goto label_3754e8;
        case 0x3754ecu: goto label_3754ec;
        case 0x3754f0u: goto label_3754f0;
        case 0x3754f4u: goto label_3754f4;
        case 0x3754f8u: goto label_3754f8;
        case 0x3754fcu: goto label_3754fc;
        case 0x375500u: goto label_375500;
        case 0x375504u: goto label_375504;
        case 0x375508u: goto label_375508;
        case 0x37550cu: goto label_37550c;
        case 0x375510u: goto label_375510;
        case 0x375514u: goto label_375514;
        case 0x375518u: goto label_375518;
        case 0x37551cu: goto label_37551c;
        case 0x375520u: goto label_375520;
        case 0x375524u: goto label_375524;
        case 0x375528u: goto label_375528;
        case 0x37552cu: goto label_37552c;
        case 0x375530u: goto label_375530;
        case 0x375534u: goto label_375534;
        case 0x375538u: goto label_375538;
        case 0x37553cu: goto label_37553c;
        case 0x375540u: goto label_375540;
        case 0x375544u: goto label_375544;
        case 0x375548u: goto label_375548;
        case 0x37554cu: goto label_37554c;
        case 0x375550u: goto label_375550;
        case 0x375554u: goto label_375554;
        case 0x375558u: goto label_375558;
        case 0x37555cu: goto label_37555c;
        case 0x375560u: goto label_375560;
        case 0x375564u: goto label_375564;
        case 0x375568u: goto label_375568;
        case 0x37556cu: goto label_37556c;
        case 0x375570u: goto label_375570;
        case 0x375574u: goto label_375574;
        case 0x375578u: goto label_375578;
        case 0x37557cu: goto label_37557c;
        case 0x375580u: goto label_375580;
        case 0x375584u: goto label_375584;
        case 0x375588u: goto label_375588;
        case 0x37558cu: goto label_37558c;
        case 0x375590u: goto label_375590;
        case 0x375594u: goto label_375594;
        case 0x375598u: goto label_375598;
        case 0x37559cu: goto label_37559c;
        case 0x3755a0u: goto label_3755a0;
        case 0x3755a4u: goto label_3755a4;
        case 0x3755a8u: goto label_3755a8;
        case 0x3755acu: goto label_3755ac;
        case 0x3755b0u: goto label_3755b0;
        case 0x3755b4u: goto label_3755b4;
        case 0x3755b8u: goto label_3755b8;
        case 0x3755bcu: goto label_3755bc;
        case 0x3755c0u: goto label_3755c0;
        case 0x3755c4u: goto label_3755c4;
        case 0x3755c8u: goto label_3755c8;
        case 0x3755ccu: goto label_3755cc;
        case 0x3755d0u: goto label_3755d0;
        case 0x3755d4u: goto label_3755d4;
        case 0x3755d8u: goto label_3755d8;
        case 0x3755dcu: goto label_3755dc;
        case 0x3755e0u: goto label_3755e0;
        case 0x3755e4u: goto label_3755e4;
        case 0x3755e8u: goto label_3755e8;
        case 0x3755ecu: goto label_3755ec;
        case 0x3755f0u: goto label_3755f0;
        case 0x3755f4u: goto label_3755f4;
        case 0x3755f8u: goto label_3755f8;
        case 0x3755fcu: goto label_3755fc;
        case 0x375600u: goto label_375600;
        case 0x375604u: goto label_375604;
        case 0x375608u: goto label_375608;
        case 0x37560cu: goto label_37560c;
        case 0x375610u: goto label_375610;
        case 0x375614u: goto label_375614;
        case 0x375618u: goto label_375618;
        case 0x37561cu: goto label_37561c;
        case 0x375620u: goto label_375620;
        case 0x375624u: goto label_375624;
        case 0x375628u: goto label_375628;
        case 0x37562cu: goto label_37562c;
        case 0x375630u: goto label_375630;
        case 0x375634u: goto label_375634;
        case 0x375638u: goto label_375638;
        case 0x37563cu: goto label_37563c;
        case 0x375640u: goto label_375640;
        case 0x375644u: goto label_375644;
        case 0x375648u: goto label_375648;
        case 0x37564cu: goto label_37564c;
        case 0x375650u: goto label_375650;
        case 0x375654u: goto label_375654;
        case 0x375658u: goto label_375658;
        case 0x37565cu: goto label_37565c;
        case 0x375660u: goto label_375660;
        case 0x375664u: goto label_375664;
        case 0x375668u: goto label_375668;
        case 0x37566cu: goto label_37566c;
        case 0x375670u: goto label_375670;
        case 0x375674u: goto label_375674;
        case 0x375678u: goto label_375678;
        case 0x37567cu: goto label_37567c;
        case 0x375680u: goto label_375680;
        case 0x375684u: goto label_375684;
        case 0x375688u: goto label_375688;
        case 0x37568cu: goto label_37568c;
        case 0x375690u: goto label_375690;
        case 0x375694u: goto label_375694;
        case 0x375698u: goto label_375698;
        case 0x37569cu: goto label_37569c;
        case 0x3756a0u: goto label_3756a0;
        case 0x3756a4u: goto label_3756a4;
        case 0x3756a8u: goto label_3756a8;
        case 0x3756acu: goto label_3756ac;
        case 0x3756b0u: goto label_3756b0;
        case 0x3756b4u: goto label_3756b4;
        case 0x3756b8u: goto label_3756b8;
        case 0x3756bcu: goto label_3756bc;
        case 0x3756c0u: goto label_3756c0;
        case 0x3756c4u: goto label_3756c4;
        case 0x3756c8u: goto label_3756c8;
        case 0x3756ccu: goto label_3756cc;
        case 0x3756d0u: goto label_3756d0;
        case 0x3756d4u: goto label_3756d4;
        case 0x3756d8u: goto label_3756d8;
        case 0x3756dcu: goto label_3756dc;
        case 0x3756e0u: goto label_3756e0;
        case 0x3756e4u: goto label_3756e4;
        case 0x3756e8u: goto label_3756e8;
        case 0x3756ecu: goto label_3756ec;
        case 0x3756f0u: goto label_3756f0;
        case 0x3756f4u: goto label_3756f4;
        case 0x3756f8u: goto label_3756f8;
        case 0x3756fcu: goto label_3756fc;
        case 0x375700u: goto label_375700;
        case 0x375704u: goto label_375704;
        case 0x375708u: goto label_375708;
        case 0x37570cu: goto label_37570c;
        case 0x375710u: goto label_375710;
        case 0x375714u: goto label_375714;
        case 0x375718u: goto label_375718;
        case 0x37571cu: goto label_37571c;
        case 0x375720u: goto label_375720;
        case 0x375724u: goto label_375724;
        case 0x375728u: goto label_375728;
        case 0x37572cu: goto label_37572c;
        case 0x375730u: goto label_375730;
        case 0x375734u: goto label_375734;
        case 0x375738u: goto label_375738;
        case 0x37573cu: goto label_37573c;
        case 0x375740u: goto label_375740;
        case 0x375744u: goto label_375744;
        case 0x375748u: goto label_375748;
        case 0x37574cu: goto label_37574c;
        case 0x375750u: goto label_375750;
        case 0x375754u: goto label_375754;
        case 0x375758u: goto label_375758;
        case 0x37575cu: goto label_37575c;
        case 0x375760u: goto label_375760;
        case 0x375764u: goto label_375764;
        case 0x375768u: goto label_375768;
        case 0x37576cu: goto label_37576c;
        case 0x375770u: goto label_375770;
        case 0x375774u: goto label_375774;
        case 0x375778u: goto label_375778;
        case 0x37577cu: goto label_37577c;
        case 0x375780u: goto label_375780;
        case 0x375784u: goto label_375784;
        case 0x375788u: goto label_375788;
        case 0x37578cu: goto label_37578c;
        case 0x375790u: goto label_375790;
        case 0x375794u: goto label_375794;
        case 0x375798u: goto label_375798;
        case 0x37579cu: goto label_37579c;
        case 0x3757a0u: goto label_3757a0;
        case 0x3757a4u: goto label_3757a4;
        case 0x3757a8u: goto label_3757a8;
        case 0x3757acu: goto label_3757ac;
        case 0x3757b0u: goto label_3757b0;
        case 0x3757b4u: goto label_3757b4;
        case 0x3757b8u: goto label_3757b8;
        case 0x3757bcu: goto label_3757bc;
        case 0x3757c0u: goto label_3757c0;
        case 0x3757c4u: goto label_3757c4;
        case 0x3757c8u: goto label_3757c8;
        case 0x3757ccu: goto label_3757cc;
        case 0x3757d0u: goto label_3757d0;
        case 0x3757d4u: goto label_3757d4;
        case 0x3757d8u: goto label_3757d8;
        case 0x3757dcu: goto label_3757dc;
        case 0x3757e0u: goto label_3757e0;
        case 0x3757e4u: goto label_3757e4;
        case 0x3757e8u: goto label_3757e8;
        case 0x3757ecu: goto label_3757ec;
        case 0x3757f0u: goto label_3757f0;
        case 0x3757f4u: goto label_3757f4;
        case 0x3757f8u: goto label_3757f8;
        case 0x3757fcu: goto label_3757fc;
        case 0x375800u: goto label_375800;
        case 0x375804u: goto label_375804;
        case 0x375808u: goto label_375808;
        case 0x37580cu: goto label_37580c;
        case 0x375810u: goto label_375810;
        case 0x375814u: goto label_375814;
        case 0x375818u: goto label_375818;
        case 0x37581cu: goto label_37581c;
        case 0x375820u: goto label_375820;
        case 0x375824u: goto label_375824;
        case 0x375828u: goto label_375828;
        case 0x37582cu: goto label_37582c;
        case 0x375830u: goto label_375830;
        case 0x375834u: goto label_375834;
        case 0x375838u: goto label_375838;
        case 0x37583cu: goto label_37583c;
        case 0x375840u: goto label_375840;
        case 0x375844u: goto label_375844;
        case 0x375848u: goto label_375848;
        case 0x37584cu: goto label_37584c;
        case 0x375850u: goto label_375850;
        case 0x375854u: goto label_375854;
        case 0x375858u: goto label_375858;
        case 0x37585cu: goto label_37585c;
        case 0x375860u: goto label_375860;
        case 0x375864u: goto label_375864;
        case 0x375868u: goto label_375868;
        case 0x37586cu: goto label_37586c;
        case 0x375870u: goto label_375870;
        case 0x375874u: goto label_375874;
        case 0x375878u: goto label_375878;
        case 0x37587cu: goto label_37587c;
        case 0x375880u: goto label_375880;
        case 0x375884u: goto label_375884;
        case 0x375888u: goto label_375888;
        case 0x37588cu: goto label_37588c;
        case 0x375890u: goto label_375890;
        case 0x375894u: goto label_375894;
        case 0x375898u: goto label_375898;
        case 0x37589cu: goto label_37589c;
        case 0x3758a0u: goto label_3758a0;
        case 0x3758a4u: goto label_3758a4;
        case 0x3758a8u: goto label_3758a8;
        case 0x3758acu: goto label_3758ac;
        case 0x3758b0u: goto label_3758b0;
        case 0x3758b4u: goto label_3758b4;
        case 0x3758b8u: goto label_3758b8;
        case 0x3758bcu: goto label_3758bc;
        case 0x3758c0u: goto label_3758c0;
        case 0x3758c4u: goto label_3758c4;
        case 0x3758c8u: goto label_3758c8;
        case 0x3758ccu: goto label_3758cc;
        case 0x3758d0u: goto label_3758d0;
        case 0x3758d4u: goto label_3758d4;
        case 0x3758d8u: goto label_3758d8;
        case 0x3758dcu: goto label_3758dc;
        case 0x3758e0u: goto label_3758e0;
        case 0x3758e4u: goto label_3758e4;
        case 0x3758e8u: goto label_3758e8;
        case 0x3758ecu: goto label_3758ec;
        case 0x3758f0u: goto label_3758f0;
        case 0x3758f4u: goto label_3758f4;
        case 0x3758f8u: goto label_3758f8;
        case 0x3758fcu: goto label_3758fc;
        case 0x375900u: goto label_375900;
        case 0x375904u: goto label_375904;
        case 0x375908u: goto label_375908;
        case 0x37590cu: goto label_37590c;
        case 0x375910u: goto label_375910;
        case 0x375914u: goto label_375914;
        case 0x375918u: goto label_375918;
        case 0x37591cu: goto label_37591c;
        case 0x375920u: goto label_375920;
        case 0x375924u: goto label_375924;
        case 0x375928u: goto label_375928;
        case 0x37592cu: goto label_37592c;
        case 0x375930u: goto label_375930;
        case 0x375934u: goto label_375934;
        case 0x375938u: goto label_375938;
        case 0x37593cu: goto label_37593c;
        case 0x375940u: goto label_375940;
        case 0x375944u: goto label_375944;
        case 0x375948u: goto label_375948;
        case 0x37594cu: goto label_37594c;
        case 0x375950u: goto label_375950;
        case 0x375954u: goto label_375954;
        case 0x375958u: goto label_375958;
        case 0x37595cu: goto label_37595c;
        case 0x375960u: goto label_375960;
        case 0x375964u: goto label_375964;
        case 0x375968u: goto label_375968;
        case 0x37596cu: goto label_37596c;
        case 0x375970u: goto label_375970;
        case 0x375974u: goto label_375974;
        case 0x375978u: goto label_375978;
        case 0x37597cu: goto label_37597c;
        case 0x375980u: goto label_375980;
        case 0x375984u: goto label_375984;
        case 0x375988u: goto label_375988;
        case 0x37598cu: goto label_37598c;
        case 0x375990u: goto label_375990;
        case 0x375994u: goto label_375994;
        case 0x375998u: goto label_375998;
        case 0x37599cu: goto label_37599c;
        case 0x3759a0u: goto label_3759a0;
        case 0x3759a4u: goto label_3759a4;
        case 0x3759a8u: goto label_3759a8;
        case 0x3759acu: goto label_3759ac;
        case 0x3759b0u: goto label_3759b0;
        case 0x3759b4u: goto label_3759b4;
        case 0x3759b8u: goto label_3759b8;
        case 0x3759bcu: goto label_3759bc;
        case 0x3759c0u: goto label_3759c0;
        case 0x3759c4u: goto label_3759c4;
        case 0x3759c8u: goto label_3759c8;
        case 0x3759ccu: goto label_3759cc;
        case 0x3759d0u: goto label_3759d0;
        case 0x3759d4u: goto label_3759d4;
        case 0x3759d8u: goto label_3759d8;
        case 0x3759dcu: goto label_3759dc;
        case 0x3759e0u: goto label_3759e0;
        case 0x3759e4u: goto label_3759e4;
        case 0x3759e8u: goto label_3759e8;
        case 0x3759ecu: goto label_3759ec;
        case 0x3759f0u: goto label_3759f0;
        case 0x3759f4u: goto label_3759f4;
        case 0x3759f8u: goto label_3759f8;
        case 0x3759fcu: goto label_3759fc;
        case 0x375a00u: goto label_375a00;
        case 0x375a04u: goto label_375a04;
        case 0x375a08u: goto label_375a08;
        case 0x375a0cu: goto label_375a0c;
        case 0x375a10u: goto label_375a10;
        case 0x375a14u: goto label_375a14;
        case 0x375a18u: goto label_375a18;
        case 0x375a1cu: goto label_375a1c;
        case 0x375a20u: goto label_375a20;
        case 0x375a24u: goto label_375a24;
        case 0x375a28u: goto label_375a28;
        case 0x375a2cu: goto label_375a2c;
        case 0x375a30u: goto label_375a30;
        case 0x375a34u: goto label_375a34;
        case 0x375a38u: goto label_375a38;
        case 0x375a3cu: goto label_375a3c;
        case 0x375a40u: goto label_375a40;
        case 0x375a44u: goto label_375a44;
        case 0x375a48u: goto label_375a48;
        case 0x375a4cu: goto label_375a4c;
        case 0x375a50u: goto label_375a50;
        case 0x375a54u: goto label_375a54;
        case 0x375a58u: goto label_375a58;
        case 0x375a5cu: goto label_375a5c;
        case 0x375a60u: goto label_375a60;
        case 0x375a64u: goto label_375a64;
        case 0x375a68u: goto label_375a68;
        case 0x375a6cu: goto label_375a6c;
        case 0x375a70u: goto label_375a70;
        case 0x375a74u: goto label_375a74;
        case 0x375a78u: goto label_375a78;
        case 0x375a7cu: goto label_375a7c;
        case 0x375a80u: goto label_375a80;
        case 0x375a84u: goto label_375a84;
        case 0x375a88u: goto label_375a88;
        case 0x375a8cu: goto label_375a8c;
        case 0x375a90u: goto label_375a90;
        case 0x375a94u: goto label_375a94;
        case 0x375a98u: goto label_375a98;
        case 0x375a9cu: goto label_375a9c;
        case 0x375aa0u: goto label_375aa0;
        case 0x375aa4u: goto label_375aa4;
        case 0x375aa8u: goto label_375aa8;
        case 0x375aacu: goto label_375aac;
        case 0x375ab0u: goto label_375ab0;
        case 0x375ab4u: goto label_375ab4;
        case 0x375ab8u: goto label_375ab8;
        case 0x375abcu: goto label_375abc;
        case 0x375ac0u: goto label_375ac0;
        case 0x375ac4u: goto label_375ac4;
        case 0x375ac8u: goto label_375ac8;
        case 0x375accu: goto label_375acc;
        case 0x375ad0u: goto label_375ad0;
        case 0x375ad4u: goto label_375ad4;
        case 0x375ad8u: goto label_375ad8;
        case 0x375adcu: goto label_375adc;
        case 0x375ae0u: goto label_375ae0;
        case 0x375ae4u: goto label_375ae4;
        case 0x375ae8u: goto label_375ae8;
        case 0x375aecu: goto label_375aec;
        case 0x375af0u: goto label_375af0;
        case 0x375af4u: goto label_375af4;
        case 0x375af8u: goto label_375af8;
        case 0x375afcu: goto label_375afc;
        case 0x375b00u: goto label_375b00;
        case 0x375b04u: goto label_375b04;
        case 0x375b08u: goto label_375b08;
        case 0x375b0cu: goto label_375b0c;
        case 0x375b10u: goto label_375b10;
        case 0x375b14u: goto label_375b14;
        case 0x375b18u: goto label_375b18;
        case 0x375b1cu: goto label_375b1c;
        case 0x375b20u: goto label_375b20;
        case 0x375b24u: goto label_375b24;
        case 0x375b28u: goto label_375b28;
        case 0x375b2cu: goto label_375b2c;
        case 0x375b30u: goto label_375b30;
        case 0x375b34u: goto label_375b34;
        case 0x375b38u: goto label_375b38;
        case 0x375b3cu: goto label_375b3c;
        case 0x375b40u: goto label_375b40;
        case 0x375b44u: goto label_375b44;
        case 0x375b48u: goto label_375b48;
        case 0x375b4cu: goto label_375b4c;
        case 0x375b50u: goto label_375b50;
        case 0x375b54u: goto label_375b54;
        case 0x375b58u: goto label_375b58;
        case 0x375b5cu: goto label_375b5c;
        case 0x375b60u: goto label_375b60;
        case 0x375b64u: goto label_375b64;
        case 0x375b68u: goto label_375b68;
        case 0x375b6cu: goto label_375b6c;
        case 0x375b70u: goto label_375b70;
        case 0x375b74u: goto label_375b74;
        case 0x375b78u: goto label_375b78;
        case 0x375b7cu: goto label_375b7c;
        case 0x375b80u: goto label_375b80;
        case 0x375b84u: goto label_375b84;
        case 0x375b88u: goto label_375b88;
        case 0x375b8cu: goto label_375b8c;
        case 0x375b90u: goto label_375b90;
        case 0x375b94u: goto label_375b94;
        case 0x375b98u: goto label_375b98;
        case 0x375b9cu: goto label_375b9c;
        case 0x375ba0u: goto label_375ba0;
        case 0x375ba4u: goto label_375ba4;
        case 0x375ba8u: goto label_375ba8;
        case 0x375bacu: goto label_375bac;
        case 0x375bb0u: goto label_375bb0;
        case 0x375bb4u: goto label_375bb4;
        case 0x375bb8u: goto label_375bb8;
        case 0x375bbcu: goto label_375bbc;
        case 0x375bc0u: goto label_375bc0;
        case 0x375bc4u: goto label_375bc4;
        case 0x375bc8u: goto label_375bc8;
        case 0x375bccu: goto label_375bcc;
        case 0x375bd0u: goto label_375bd0;
        case 0x375bd4u: goto label_375bd4;
        case 0x375bd8u: goto label_375bd8;
        case 0x375bdcu: goto label_375bdc;
        case 0x375be0u: goto label_375be0;
        case 0x375be4u: goto label_375be4;
        case 0x375be8u: goto label_375be8;
        case 0x375becu: goto label_375bec;
        case 0x375bf0u: goto label_375bf0;
        case 0x375bf4u: goto label_375bf4;
        case 0x375bf8u: goto label_375bf8;
        case 0x375bfcu: goto label_375bfc;
        case 0x375c00u: goto label_375c00;
        case 0x375c04u: goto label_375c04;
        case 0x375c08u: goto label_375c08;
        case 0x375c0cu: goto label_375c0c;
        case 0x375c10u: goto label_375c10;
        case 0x375c14u: goto label_375c14;
        case 0x375c18u: goto label_375c18;
        case 0x375c1cu: goto label_375c1c;
        case 0x375c20u: goto label_375c20;
        case 0x375c24u: goto label_375c24;
        case 0x375c28u: goto label_375c28;
        case 0x375c2cu: goto label_375c2c;
        case 0x375c30u: goto label_375c30;
        case 0x375c34u: goto label_375c34;
        case 0x375c38u: goto label_375c38;
        case 0x375c3cu: goto label_375c3c;
        case 0x375c40u: goto label_375c40;
        case 0x375c44u: goto label_375c44;
        case 0x375c48u: goto label_375c48;
        case 0x375c4cu: goto label_375c4c;
        case 0x375c50u: goto label_375c50;
        case 0x375c54u: goto label_375c54;
        case 0x375c58u: goto label_375c58;
        case 0x375c5cu: goto label_375c5c;
        case 0x375c60u: goto label_375c60;
        case 0x375c64u: goto label_375c64;
        case 0x375c68u: goto label_375c68;
        case 0x375c6cu: goto label_375c6c;
        case 0x375c70u: goto label_375c70;
        case 0x375c74u: goto label_375c74;
        case 0x375c78u: goto label_375c78;
        case 0x375c7cu: goto label_375c7c;
        case 0x375c80u: goto label_375c80;
        case 0x375c84u: goto label_375c84;
        case 0x375c88u: goto label_375c88;
        case 0x375c8cu: goto label_375c8c;
        case 0x375c90u: goto label_375c90;
        case 0x375c94u: goto label_375c94;
        case 0x375c98u: goto label_375c98;
        case 0x375c9cu: goto label_375c9c;
        case 0x375ca0u: goto label_375ca0;
        case 0x375ca4u: goto label_375ca4;
        case 0x375ca8u: goto label_375ca8;
        case 0x375cacu: goto label_375cac;
        case 0x375cb0u: goto label_375cb0;
        case 0x375cb4u: goto label_375cb4;
        case 0x375cb8u: goto label_375cb8;
        case 0x375cbcu: goto label_375cbc;
        case 0x375cc0u: goto label_375cc0;
        case 0x375cc4u: goto label_375cc4;
        case 0x375cc8u: goto label_375cc8;
        case 0x375cccu: goto label_375ccc;
        case 0x375cd0u: goto label_375cd0;
        case 0x375cd4u: goto label_375cd4;
        case 0x375cd8u: goto label_375cd8;
        case 0x375cdcu: goto label_375cdc;
        case 0x375ce0u: goto label_375ce0;
        case 0x375ce4u: goto label_375ce4;
        case 0x375ce8u: goto label_375ce8;
        case 0x375cecu: goto label_375cec;
        case 0x375cf0u: goto label_375cf0;
        case 0x375cf4u: goto label_375cf4;
        case 0x375cf8u: goto label_375cf8;
        case 0x375cfcu: goto label_375cfc;
        case 0x375d00u: goto label_375d00;
        case 0x375d04u: goto label_375d04;
        case 0x375d08u: goto label_375d08;
        case 0x375d0cu: goto label_375d0c;
        case 0x375d10u: goto label_375d10;
        case 0x375d14u: goto label_375d14;
        case 0x375d18u: goto label_375d18;
        case 0x375d1cu: goto label_375d1c;
        case 0x375d20u: goto label_375d20;
        case 0x375d24u: goto label_375d24;
        case 0x375d28u: goto label_375d28;
        case 0x375d2cu: goto label_375d2c;
        case 0x375d30u: goto label_375d30;
        case 0x375d34u: goto label_375d34;
        case 0x375d38u: goto label_375d38;
        case 0x375d3cu: goto label_375d3c;
        case 0x375d40u: goto label_375d40;
        case 0x375d44u: goto label_375d44;
        case 0x375d48u: goto label_375d48;
        case 0x375d4cu: goto label_375d4c;
        case 0x375d50u: goto label_375d50;
        case 0x375d54u: goto label_375d54;
        case 0x375d58u: goto label_375d58;
        case 0x375d5cu: goto label_375d5c;
        case 0x375d60u: goto label_375d60;
        case 0x375d64u: goto label_375d64;
        case 0x375d68u: goto label_375d68;
        case 0x375d6cu: goto label_375d6c;
        case 0x375d70u: goto label_375d70;
        case 0x375d74u: goto label_375d74;
        case 0x375d78u: goto label_375d78;
        case 0x375d7cu: goto label_375d7c;
        case 0x375d80u: goto label_375d80;
        case 0x375d84u: goto label_375d84;
        case 0x375d88u: goto label_375d88;
        case 0x375d8cu: goto label_375d8c;
        case 0x375d90u: goto label_375d90;
        case 0x375d94u: goto label_375d94;
        case 0x375d98u: goto label_375d98;
        case 0x375d9cu: goto label_375d9c;
        case 0x375da0u: goto label_375da0;
        case 0x375da4u: goto label_375da4;
        case 0x375da8u: goto label_375da8;
        case 0x375dacu: goto label_375dac;
        case 0x375db0u: goto label_375db0;
        case 0x375db4u: goto label_375db4;
        case 0x375db8u: goto label_375db8;
        case 0x375dbcu: goto label_375dbc;
        case 0x375dc0u: goto label_375dc0;
        case 0x375dc4u: goto label_375dc4;
        case 0x375dc8u: goto label_375dc8;
        case 0x375dccu: goto label_375dcc;
        case 0x375dd0u: goto label_375dd0;
        case 0x375dd4u: goto label_375dd4;
        case 0x375dd8u: goto label_375dd8;
        case 0x375ddcu: goto label_375ddc;
        case 0x375de0u: goto label_375de0;
        case 0x375de4u: goto label_375de4;
        case 0x375de8u: goto label_375de8;
        case 0x375decu: goto label_375dec;
        case 0x375df0u: goto label_375df0;
        case 0x375df4u: goto label_375df4;
        case 0x375df8u: goto label_375df8;
        case 0x375dfcu: goto label_375dfc;
        case 0x375e00u: goto label_375e00;
        case 0x375e04u: goto label_375e04;
        case 0x375e08u: goto label_375e08;
        case 0x375e0cu: goto label_375e0c;
        case 0x375e10u: goto label_375e10;
        case 0x375e14u: goto label_375e14;
        case 0x375e18u: goto label_375e18;
        case 0x375e1cu: goto label_375e1c;
        case 0x375e20u: goto label_375e20;
        case 0x375e24u: goto label_375e24;
        case 0x375e28u: goto label_375e28;
        case 0x375e2cu: goto label_375e2c;
        case 0x375e30u: goto label_375e30;
        case 0x375e34u: goto label_375e34;
        case 0x375e38u: goto label_375e38;
        case 0x375e3cu: goto label_375e3c;
        case 0x375e40u: goto label_375e40;
        case 0x375e44u: goto label_375e44;
        case 0x375e48u: goto label_375e48;
        case 0x375e4cu: goto label_375e4c;
        case 0x375e50u: goto label_375e50;
        case 0x375e54u: goto label_375e54;
        case 0x375e58u: goto label_375e58;
        case 0x375e5cu: goto label_375e5c;
        case 0x375e60u: goto label_375e60;
        case 0x375e64u: goto label_375e64;
        case 0x375e68u: goto label_375e68;
        case 0x375e6cu: goto label_375e6c;
        case 0x375e70u: goto label_375e70;
        case 0x375e74u: goto label_375e74;
        case 0x375e78u: goto label_375e78;
        case 0x375e7cu: goto label_375e7c;
        case 0x375e80u: goto label_375e80;
        case 0x375e84u: goto label_375e84;
        case 0x375e88u: goto label_375e88;
        case 0x375e8cu: goto label_375e8c;
        case 0x375e90u: goto label_375e90;
        case 0x375e94u: goto label_375e94;
        case 0x375e98u: goto label_375e98;
        case 0x375e9cu: goto label_375e9c;
        case 0x375ea0u: goto label_375ea0;
        case 0x375ea4u: goto label_375ea4;
        case 0x375ea8u: goto label_375ea8;
        case 0x375eacu: goto label_375eac;
        case 0x375eb0u: goto label_375eb0;
        case 0x375eb4u: goto label_375eb4;
        case 0x375eb8u: goto label_375eb8;
        case 0x375ebcu: goto label_375ebc;
        case 0x375ec0u: goto label_375ec0;
        case 0x375ec4u: goto label_375ec4;
        case 0x375ec8u: goto label_375ec8;
        case 0x375eccu: goto label_375ecc;
        case 0x375ed0u: goto label_375ed0;
        case 0x375ed4u: goto label_375ed4;
        case 0x375ed8u: goto label_375ed8;
        case 0x375edcu: goto label_375edc;
        case 0x375ee0u: goto label_375ee0;
        case 0x375ee4u: goto label_375ee4;
        case 0x375ee8u: goto label_375ee8;
        case 0x375eecu: goto label_375eec;
        case 0x375ef0u: goto label_375ef0;
        case 0x375ef4u: goto label_375ef4;
        case 0x375ef8u: goto label_375ef8;
        case 0x375efcu: goto label_375efc;
        case 0x375f00u: goto label_375f00;
        case 0x375f04u: goto label_375f04;
        case 0x375f08u: goto label_375f08;
        case 0x375f0cu: goto label_375f0c;
        case 0x375f10u: goto label_375f10;
        case 0x375f14u: goto label_375f14;
        case 0x375f18u: goto label_375f18;
        case 0x375f1cu: goto label_375f1c;
        case 0x375f20u: goto label_375f20;
        case 0x375f24u: goto label_375f24;
        case 0x375f28u: goto label_375f28;
        case 0x375f2cu: goto label_375f2c;
        case 0x375f30u: goto label_375f30;
        case 0x375f34u: goto label_375f34;
        case 0x375f38u: goto label_375f38;
        case 0x375f3cu: goto label_375f3c;
        case 0x375f40u: goto label_375f40;
        case 0x375f44u: goto label_375f44;
        case 0x375f48u: goto label_375f48;
        case 0x375f4cu: goto label_375f4c;
        case 0x375f50u: goto label_375f50;
        case 0x375f54u: goto label_375f54;
        case 0x375f58u: goto label_375f58;
        case 0x375f5cu: goto label_375f5c;
        case 0x375f60u: goto label_375f60;
        case 0x375f64u: goto label_375f64;
        case 0x375f68u: goto label_375f68;
        case 0x375f6cu: goto label_375f6c;
        case 0x375f70u: goto label_375f70;
        case 0x375f74u: goto label_375f74;
        case 0x375f78u: goto label_375f78;
        case 0x375f7cu: goto label_375f7c;
        case 0x375f80u: goto label_375f80;
        case 0x375f84u: goto label_375f84;
        case 0x375f88u: goto label_375f88;
        case 0x375f8cu: goto label_375f8c;
        case 0x375f90u: goto label_375f90;
        case 0x375f94u: goto label_375f94;
        case 0x375f98u: goto label_375f98;
        case 0x375f9cu: goto label_375f9c;
        case 0x375fa0u: goto label_375fa0;
        case 0x375fa4u: goto label_375fa4;
        case 0x375fa8u: goto label_375fa8;
        case 0x375facu: goto label_375fac;
        case 0x375fb0u: goto label_375fb0;
        case 0x375fb4u: goto label_375fb4;
        case 0x375fb8u: goto label_375fb8;
        case 0x375fbcu: goto label_375fbc;
        case 0x375fc0u: goto label_375fc0;
        case 0x375fc4u: goto label_375fc4;
        case 0x375fc8u: goto label_375fc8;
        case 0x375fccu: goto label_375fcc;
        case 0x375fd0u: goto label_375fd0;
        case 0x375fd4u: goto label_375fd4;
        case 0x375fd8u: goto label_375fd8;
        case 0x375fdcu: goto label_375fdc;
        case 0x375fe0u: goto label_375fe0;
        case 0x375fe4u: goto label_375fe4;
        case 0x375fe8u: goto label_375fe8;
        case 0x375fecu: goto label_375fec;
        case 0x375ff0u: goto label_375ff0;
        case 0x375ff4u: goto label_375ff4;
        case 0x375ff8u: goto label_375ff8;
        case 0x375ffcu: goto label_375ffc;
        case 0x376000u: goto label_376000;
        case 0x376004u: goto label_376004;
        case 0x376008u: goto label_376008;
        case 0x37600cu: goto label_37600c;
        case 0x376010u: goto label_376010;
        case 0x376014u: goto label_376014;
        case 0x376018u: goto label_376018;
        case 0x37601cu: goto label_37601c;
        case 0x376020u: goto label_376020;
        case 0x376024u: goto label_376024;
        case 0x376028u: goto label_376028;
        case 0x37602cu: goto label_37602c;
        case 0x376030u: goto label_376030;
        case 0x376034u: goto label_376034;
        case 0x376038u: goto label_376038;
        case 0x37603cu: goto label_37603c;
        case 0x376040u: goto label_376040;
        case 0x376044u: goto label_376044;
        case 0x376048u: goto label_376048;
        case 0x37604cu: goto label_37604c;
        case 0x376050u: goto label_376050;
        case 0x376054u: goto label_376054;
        case 0x376058u: goto label_376058;
        case 0x37605cu: goto label_37605c;
        case 0x376060u: goto label_376060;
        case 0x376064u: goto label_376064;
        case 0x376068u: goto label_376068;
        case 0x37606cu: goto label_37606c;
        case 0x376070u: goto label_376070;
        case 0x376074u: goto label_376074;
        case 0x376078u: goto label_376078;
        case 0x37607cu: goto label_37607c;
        case 0x376080u: goto label_376080;
        case 0x376084u: goto label_376084;
        case 0x376088u: goto label_376088;
        case 0x37608cu: goto label_37608c;
        case 0x376090u: goto label_376090;
        case 0x376094u: goto label_376094;
        case 0x376098u: goto label_376098;
        case 0x37609cu: goto label_37609c;
        case 0x3760a0u: goto label_3760a0;
        case 0x3760a4u: goto label_3760a4;
        case 0x3760a8u: goto label_3760a8;
        case 0x3760acu: goto label_3760ac;
        case 0x3760b0u: goto label_3760b0;
        case 0x3760b4u: goto label_3760b4;
        case 0x3760b8u: goto label_3760b8;
        case 0x3760bcu: goto label_3760bc;
        case 0x3760c0u: goto label_3760c0;
        case 0x3760c4u: goto label_3760c4;
        case 0x3760c8u: goto label_3760c8;
        case 0x3760ccu: goto label_3760cc;
        case 0x3760d0u: goto label_3760d0;
        case 0x3760d4u: goto label_3760d4;
        case 0x3760d8u: goto label_3760d8;
        case 0x3760dcu: goto label_3760dc;
        case 0x3760e0u: goto label_3760e0;
        case 0x3760e4u: goto label_3760e4;
        case 0x3760e8u: goto label_3760e8;
        case 0x3760ecu: goto label_3760ec;
        case 0x3760f0u: goto label_3760f0;
        case 0x3760f4u: goto label_3760f4;
        case 0x3760f8u: goto label_3760f8;
        case 0x3760fcu: goto label_3760fc;
        case 0x376100u: goto label_376100;
        case 0x376104u: goto label_376104;
        case 0x376108u: goto label_376108;
        case 0x37610cu: goto label_37610c;
        case 0x376110u: goto label_376110;
        case 0x376114u: goto label_376114;
        case 0x376118u: goto label_376118;
        case 0x37611cu: goto label_37611c;
        case 0x376120u: goto label_376120;
        case 0x376124u: goto label_376124;
        case 0x376128u: goto label_376128;
        case 0x37612cu: goto label_37612c;
        case 0x376130u: goto label_376130;
        case 0x376134u: goto label_376134;
        case 0x376138u: goto label_376138;
        case 0x37613cu: goto label_37613c;
        case 0x376140u: goto label_376140;
        case 0x376144u: goto label_376144;
        case 0x376148u: goto label_376148;
        case 0x37614cu: goto label_37614c;
        case 0x376150u: goto label_376150;
        case 0x376154u: goto label_376154;
        case 0x376158u: goto label_376158;
        case 0x37615cu: goto label_37615c;
        case 0x376160u: goto label_376160;
        case 0x376164u: goto label_376164;
        case 0x376168u: goto label_376168;
        case 0x37616cu: goto label_37616c;
        case 0x376170u: goto label_376170;
        case 0x376174u: goto label_376174;
        case 0x376178u: goto label_376178;
        case 0x37617cu: goto label_37617c;
        case 0x376180u: goto label_376180;
        case 0x376184u: goto label_376184;
        case 0x376188u: goto label_376188;
        case 0x37618cu: goto label_37618c;
        case 0x376190u: goto label_376190;
        case 0x376194u: goto label_376194;
        case 0x376198u: goto label_376198;
        case 0x37619cu: goto label_37619c;
        case 0x3761a0u: goto label_3761a0;
        case 0x3761a4u: goto label_3761a4;
        case 0x3761a8u: goto label_3761a8;
        case 0x3761acu: goto label_3761ac;
        case 0x3761b0u: goto label_3761b0;
        case 0x3761b4u: goto label_3761b4;
        case 0x3761b8u: goto label_3761b8;
        case 0x3761bcu: goto label_3761bc;
        case 0x3761c0u: goto label_3761c0;
        case 0x3761c4u: goto label_3761c4;
        case 0x3761c8u: goto label_3761c8;
        case 0x3761ccu: goto label_3761cc;
        case 0x3761d0u: goto label_3761d0;
        case 0x3761d4u: goto label_3761d4;
        case 0x3761d8u: goto label_3761d8;
        case 0x3761dcu: goto label_3761dc;
        case 0x3761e0u: goto label_3761e0;
        case 0x3761e4u: goto label_3761e4;
        case 0x3761e8u: goto label_3761e8;
        case 0x3761ecu: goto label_3761ec;
        case 0x3761f0u: goto label_3761f0;
        case 0x3761f4u: goto label_3761f4;
        case 0x3761f8u: goto label_3761f8;
        case 0x3761fcu: goto label_3761fc;
        case 0x376200u: goto label_376200;
        case 0x376204u: goto label_376204;
        case 0x376208u: goto label_376208;
        case 0x37620cu: goto label_37620c;
        case 0x376210u: goto label_376210;
        case 0x376214u: goto label_376214;
        case 0x376218u: goto label_376218;
        case 0x37621cu: goto label_37621c;
        case 0x376220u: goto label_376220;
        case 0x376224u: goto label_376224;
        case 0x376228u: goto label_376228;
        case 0x37622cu: goto label_37622c;
        case 0x376230u: goto label_376230;
        case 0x376234u: goto label_376234;
        case 0x376238u: goto label_376238;
        case 0x37623cu: goto label_37623c;
        case 0x376240u: goto label_376240;
        case 0x376244u: goto label_376244;
        case 0x376248u: goto label_376248;
        case 0x37624cu: goto label_37624c;
        case 0x376250u: goto label_376250;
        case 0x376254u: goto label_376254;
        case 0x376258u: goto label_376258;
        case 0x37625cu: goto label_37625c;
        case 0x376260u: goto label_376260;
        case 0x376264u: goto label_376264;
        case 0x376268u: goto label_376268;
        case 0x37626cu: goto label_37626c;
        case 0x376270u: goto label_376270;
        case 0x376274u: goto label_376274;
        case 0x376278u: goto label_376278;
        case 0x37627cu: goto label_37627c;
        case 0x376280u: goto label_376280;
        case 0x376284u: goto label_376284;
        case 0x376288u: goto label_376288;
        case 0x37628cu: goto label_37628c;
        case 0x376290u: goto label_376290;
        case 0x376294u: goto label_376294;
        case 0x376298u: goto label_376298;
        case 0x37629cu: goto label_37629c;
        case 0x3762a0u: goto label_3762a0;
        case 0x3762a4u: goto label_3762a4;
        case 0x3762a8u: goto label_3762a8;
        case 0x3762acu: goto label_3762ac;
        case 0x3762b0u: goto label_3762b0;
        case 0x3762b4u: goto label_3762b4;
        case 0x3762b8u: goto label_3762b8;
        case 0x3762bcu: goto label_3762bc;
        case 0x3762c0u: goto label_3762c0;
        case 0x3762c4u: goto label_3762c4;
        case 0x3762c8u: goto label_3762c8;
        case 0x3762ccu: goto label_3762cc;
        case 0x3762d0u: goto label_3762d0;
        case 0x3762d4u: goto label_3762d4;
        case 0x3762d8u: goto label_3762d8;
        case 0x3762dcu: goto label_3762dc;
        case 0x3762e0u: goto label_3762e0;
        case 0x3762e4u: goto label_3762e4;
        case 0x3762e8u: goto label_3762e8;
        case 0x3762ecu: goto label_3762ec;
        case 0x3762f0u: goto label_3762f0;
        case 0x3762f4u: goto label_3762f4;
        case 0x3762f8u: goto label_3762f8;
        case 0x3762fcu: goto label_3762fc;
        case 0x376300u: goto label_376300;
        case 0x376304u: goto label_376304;
        case 0x376308u: goto label_376308;
        case 0x37630cu: goto label_37630c;
        case 0x376310u: goto label_376310;
        case 0x376314u: goto label_376314;
        case 0x376318u: goto label_376318;
        case 0x37631cu: goto label_37631c;
        case 0x376320u: goto label_376320;
        case 0x376324u: goto label_376324;
        case 0x376328u: goto label_376328;
        case 0x37632cu: goto label_37632c;
        case 0x376330u: goto label_376330;
        case 0x376334u: goto label_376334;
        case 0x376338u: goto label_376338;
        case 0x37633cu: goto label_37633c;
        case 0x376340u: goto label_376340;
        case 0x376344u: goto label_376344;
        case 0x376348u: goto label_376348;
        case 0x37634cu: goto label_37634c;
        case 0x376350u: goto label_376350;
        case 0x376354u: goto label_376354;
        case 0x376358u: goto label_376358;
        case 0x37635cu: goto label_37635c;
        case 0x376360u: goto label_376360;
        case 0x376364u: goto label_376364;
        case 0x376368u: goto label_376368;
        case 0x37636cu: goto label_37636c;
        case 0x376370u: goto label_376370;
        case 0x376374u: goto label_376374;
        case 0x376378u: goto label_376378;
        case 0x37637cu: goto label_37637c;
        case 0x376380u: goto label_376380;
        case 0x376384u: goto label_376384;
        case 0x376388u: goto label_376388;
        case 0x37638cu: goto label_37638c;
        case 0x376390u: goto label_376390;
        case 0x376394u: goto label_376394;
        case 0x376398u: goto label_376398;
        case 0x37639cu: goto label_37639c;
        case 0x3763a0u: goto label_3763a0;
        case 0x3763a4u: goto label_3763a4;
        case 0x3763a8u: goto label_3763a8;
        case 0x3763acu: goto label_3763ac;
        case 0x3763b0u: goto label_3763b0;
        case 0x3763b4u: goto label_3763b4;
        case 0x3763b8u: goto label_3763b8;
        case 0x3763bcu: goto label_3763bc;
        case 0x3763c0u: goto label_3763c0;
        case 0x3763c4u: goto label_3763c4;
        case 0x3763c8u: goto label_3763c8;
        case 0x3763ccu: goto label_3763cc;
        case 0x3763d0u: goto label_3763d0;
        case 0x3763d4u: goto label_3763d4;
        case 0x3763d8u: goto label_3763d8;
        case 0x3763dcu: goto label_3763dc;
        case 0x3763e0u: goto label_3763e0;
        case 0x3763e4u: goto label_3763e4;
        case 0x3763e8u: goto label_3763e8;
        case 0x3763ecu: goto label_3763ec;
        case 0x3763f0u: goto label_3763f0;
        case 0x3763f4u: goto label_3763f4;
        case 0x3763f8u: goto label_3763f8;
        case 0x3763fcu: goto label_3763fc;
        case 0x376400u: goto label_376400;
        case 0x376404u: goto label_376404;
        case 0x376408u: goto label_376408;
        case 0x37640cu: goto label_37640c;
        case 0x376410u: goto label_376410;
        case 0x376414u: goto label_376414;
        case 0x376418u: goto label_376418;
        case 0x37641cu: goto label_37641c;
        case 0x376420u: goto label_376420;
        case 0x376424u: goto label_376424;
        case 0x376428u: goto label_376428;
        case 0x37642cu: goto label_37642c;
        case 0x376430u: goto label_376430;
        case 0x376434u: goto label_376434;
        case 0x376438u: goto label_376438;
        case 0x37643cu: goto label_37643c;
        case 0x376440u: goto label_376440;
        case 0x376444u: goto label_376444;
        case 0x376448u: goto label_376448;
        case 0x37644cu: goto label_37644c;
        case 0x376450u: goto label_376450;
        case 0x376454u: goto label_376454;
        case 0x376458u: goto label_376458;
        case 0x37645cu: goto label_37645c;
        case 0x376460u: goto label_376460;
        case 0x376464u: goto label_376464;
        case 0x376468u: goto label_376468;
        case 0x37646cu: goto label_37646c;
        case 0x376470u: goto label_376470;
        case 0x376474u: goto label_376474;
        case 0x376478u: goto label_376478;
        case 0x37647cu: goto label_37647c;
        case 0x376480u: goto label_376480;
        case 0x376484u: goto label_376484;
        case 0x376488u: goto label_376488;
        case 0x37648cu: goto label_37648c;
        case 0x376490u: goto label_376490;
        case 0x376494u: goto label_376494;
        case 0x376498u: goto label_376498;
        case 0x37649cu: goto label_37649c;
        case 0x3764a0u: goto label_3764a0;
        case 0x3764a4u: goto label_3764a4;
        case 0x3764a8u: goto label_3764a8;
        case 0x3764acu: goto label_3764ac;
        case 0x3764b0u: goto label_3764b0;
        case 0x3764b4u: goto label_3764b4;
        case 0x3764b8u: goto label_3764b8;
        case 0x3764bcu: goto label_3764bc;
        case 0x3764c0u: goto label_3764c0;
        case 0x3764c4u: goto label_3764c4;
        case 0x3764c8u: goto label_3764c8;
        case 0x3764ccu: goto label_3764cc;
        case 0x3764d0u: goto label_3764d0;
        case 0x3764d4u: goto label_3764d4;
        case 0x3764d8u: goto label_3764d8;
        case 0x3764dcu: goto label_3764dc;
        case 0x3764e0u: goto label_3764e0;
        case 0x3764e4u: goto label_3764e4;
        case 0x3764e8u: goto label_3764e8;
        case 0x3764ecu: goto label_3764ec;
        case 0x3764f0u: goto label_3764f0;
        case 0x3764f4u: goto label_3764f4;
        case 0x3764f8u: goto label_3764f8;
        case 0x3764fcu: goto label_3764fc;
        case 0x376500u: goto label_376500;
        case 0x376504u: goto label_376504;
        case 0x376508u: goto label_376508;
        case 0x37650cu: goto label_37650c;
        case 0x376510u: goto label_376510;
        case 0x376514u: goto label_376514;
        case 0x376518u: goto label_376518;
        case 0x37651cu: goto label_37651c;
        case 0x376520u: goto label_376520;
        case 0x376524u: goto label_376524;
        case 0x376528u: goto label_376528;
        case 0x37652cu: goto label_37652c;
        case 0x376530u: goto label_376530;
        case 0x376534u: goto label_376534;
        case 0x376538u: goto label_376538;
        case 0x37653cu: goto label_37653c;
        case 0x376540u: goto label_376540;
        case 0x376544u: goto label_376544;
        case 0x376548u: goto label_376548;
        case 0x37654cu: goto label_37654c;
        case 0x376550u: goto label_376550;
        case 0x376554u: goto label_376554;
        case 0x376558u: goto label_376558;
        case 0x37655cu: goto label_37655c;
        case 0x376560u: goto label_376560;
        case 0x376564u: goto label_376564;
        case 0x376568u: goto label_376568;
        case 0x37656cu: goto label_37656c;
        case 0x376570u: goto label_376570;
        case 0x376574u: goto label_376574;
        case 0x376578u: goto label_376578;
        case 0x37657cu: goto label_37657c;
        case 0x376580u: goto label_376580;
        case 0x376584u: goto label_376584;
        case 0x376588u: goto label_376588;
        case 0x37658cu: goto label_37658c;
        case 0x376590u: goto label_376590;
        case 0x376594u: goto label_376594;
        case 0x376598u: goto label_376598;
        case 0x37659cu: goto label_37659c;
        case 0x3765a0u: goto label_3765a0;
        case 0x3765a4u: goto label_3765a4;
        case 0x3765a8u: goto label_3765a8;
        case 0x3765acu: goto label_3765ac;
        case 0x3765b0u: goto label_3765b0;
        case 0x3765b4u: goto label_3765b4;
        case 0x3765b8u: goto label_3765b8;
        case 0x3765bcu: goto label_3765bc;
        case 0x3765c0u: goto label_3765c0;
        case 0x3765c4u: goto label_3765c4;
        case 0x3765c8u: goto label_3765c8;
        case 0x3765ccu: goto label_3765cc;
        case 0x3765d0u: goto label_3765d0;
        case 0x3765d4u: goto label_3765d4;
        case 0x3765d8u: goto label_3765d8;
        case 0x3765dcu: goto label_3765dc;
        case 0x3765e0u: goto label_3765e0;
        case 0x3765e4u: goto label_3765e4;
        case 0x3765e8u: goto label_3765e8;
        case 0x3765ecu: goto label_3765ec;
        case 0x3765f0u: goto label_3765f0;
        case 0x3765f4u: goto label_3765f4;
        case 0x3765f8u: goto label_3765f8;
        case 0x3765fcu: goto label_3765fc;
        case 0x376600u: goto label_376600;
        case 0x376604u: goto label_376604;
        case 0x376608u: goto label_376608;
        case 0x37660cu: goto label_37660c;
        case 0x376610u: goto label_376610;
        case 0x376614u: goto label_376614;
        case 0x376618u: goto label_376618;
        case 0x37661cu: goto label_37661c;
        case 0x376620u: goto label_376620;
        case 0x376624u: goto label_376624;
        case 0x376628u: goto label_376628;
        case 0x37662cu: goto label_37662c;
        case 0x376630u: goto label_376630;
        case 0x376634u: goto label_376634;
        case 0x376638u: goto label_376638;
        case 0x37663cu: goto label_37663c;
        case 0x376640u: goto label_376640;
        case 0x376644u: goto label_376644;
        case 0x376648u: goto label_376648;
        case 0x37664cu: goto label_37664c;
        case 0x376650u: goto label_376650;
        case 0x376654u: goto label_376654;
        case 0x376658u: goto label_376658;
        case 0x37665cu: goto label_37665c;
        case 0x376660u: goto label_376660;
        case 0x376664u: goto label_376664;
        case 0x376668u: goto label_376668;
        case 0x37666cu: goto label_37666c;
        case 0x376670u: goto label_376670;
        case 0x376674u: goto label_376674;
        case 0x376678u: goto label_376678;
        case 0x37667cu: goto label_37667c;
        case 0x376680u: goto label_376680;
        case 0x376684u: goto label_376684;
        case 0x376688u: goto label_376688;
        case 0x37668cu: goto label_37668c;
        case 0x376690u: goto label_376690;
        case 0x376694u: goto label_376694;
        case 0x376698u: goto label_376698;
        case 0x37669cu: goto label_37669c;
        case 0x3766a0u: goto label_3766a0;
        case 0x3766a4u: goto label_3766a4;
        case 0x3766a8u: goto label_3766a8;
        case 0x3766acu: goto label_3766ac;
        case 0x3766b0u: goto label_3766b0;
        case 0x3766b4u: goto label_3766b4;
        case 0x3766b8u: goto label_3766b8;
        case 0x3766bcu: goto label_3766bc;
        case 0x3766c0u: goto label_3766c0;
        case 0x3766c4u: goto label_3766c4;
        case 0x3766c8u: goto label_3766c8;
        case 0x3766ccu: goto label_3766cc;
        case 0x3766d0u: goto label_3766d0;
        case 0x3766d4u: goto label_3766d4;
        case 0x3766d8u: goto label_3766d8;
        case 0x3766dcu: goto label_3766dc;
        case 0x3766e0u: goto label_3766e0;
        case 0x3766e4u: goto label_3766e4;
        case 0x3766e8u: goto label_3766e8;
        case 0x3766ecu: goto label_3766ec;
        case 0x3766f0u: goto label_3766f0;
        case 0x3766f4u: goto label_3766f4;
        case 0x3766f8u: goto label_3766f8;
        case 0x3766fcu: goto label_3766fc;
        case 0x376700u: goto label_376700;
        case 0x376704u: goto label_376704;
        case 0x376708u: goto label_376708;
        case 0x37670cu: goto label_37670c;
        case 0x376710u: goto label_376710;
        case 0x376714u: goto label_376714;
        case 0x376718u: goto label_376718;
        case 0x37671cu: goto label_37671c;
        case 0x376720u: goto label_376720;
        case 0x376724u: goto label_376724;
        case 0x376728u: goto label_376728;
        case 0x37672cu: goto label_37672c;
        case 0x376730u: goto label_376730;
        case 0x376734u: goto label_376734;
        case 0x376738u: goto label_376738;
        case 0x37673cu: goto label_37673c;
        case 0x376740u: goto label_376740;
        case 0x376744u: goto label_376744;
        case 0x376748u: goto label_376748;
        case 0x37674cu: goto label_37674c;
        case 0x376750u: goto label_376750;
        case 0x376754u: goto label_376754;
        case 0x376758u: goto label_376758;
        case 0x37675cu: goto label_37675c;
        case 0x376760u: goto label_376760;
        case 0x376764u: goto label_376764;
        case 0x376768u: goto label_376768;
        case 0x37676cu: goto label_37676c;
        case 0x376770u: goto label_376770;
        case 0x376774u: goto label_376774;
        case 0x376778u: goto label_376778;
        case 0x37677cu: goto label_37677c;
        case 0x376780u: goto label_376780;
        case 0x376784u: goto label_376784;
        case 0x376788u: goto label_376788;
        case 0x37678cu: goto label_37678c;
        case 0x376790u: goto label_376790;
        case 0x376794u: goto label_376794;
        case 0x376798u: goto label_376798;
        case 0x37679cu: goto label_37679c;
        case 0x3767a0u: goto label_3767a0;
        case 0x3767a4u: goto label_3767a4;
        case 0x3767a8u: goto label_3767a8;
        case 0x3767acu: goto label_3767ac;
        case 0x3767b0u: goto label_3767b0;
        case 0x3767b4u: goto label_3767b4;
        case 0x3767b8u: goto label_3767b8;
        case 0x3767bcu: goto label_3767bc;
        case 0x3767c0u: goto label_3767c0;
        case 0x3767c4u: goto label_3767c4;
        case 0x3767c8u: goto label_3767c8;
        case 0x3767ccu: goto label_3767cc;
        case 0x3767d0u: goto label_3767d0;
        case 0x3767d4u: goto label_3767d4;
        case 0x3767d8u: goto label_3767d8;
        case 0x3767dcu: goto label_3767dc;
        case 0x3767e0u: goto label_3767e0;
        case 0x3767e4u: goto label_3767e4;
        case 0x3767e8u: goto label_3767e8;
        case 0x3767ecu: goto label_3767ec;
        case 0x3767f0u: goto label_3767f0;
        case 0x3767f4u: goto label_3767f4;
        case 0x3767f8u: goto label_3767f8;
        case 0x3767fcu: goto label_3767fc;
        case 0x376800u: goto label_376800;
        case 0x376804u: goto label_376804;
        case 0x376808u: goto label_376808;
        case 0x37680cu: goto label_37680c;
        case 0x376810u: goto label_376810;
        case 0x376814u: goto label_376814;
        case 0x376818u: goto label_376818;
        case 0x37681cu: goto label_37681c;
        case 0x376820u: goto label_376820;
        case 0x376824u: goto label_376824;
        case 0x376828u: goto label_376828;
        case 0x37682cu: goto label_37682c;
        case 0x376830u: goto label_376830;
        case 0x376834u: goto label_376834;
        case 0x376838u: goto label_376838;
        case 0x37683cu: goto label_37683c;
        case 0x376840u: goto label_376840;
        case 0x376844u: goto label_376844;
        case 0x376848u: goto label_376848;
        case 0x37684cu: goto label_37684c;
        case 0x376850u: goto label_376850;
        case 0x376854u: goto label_376854;
        case 0x376858u: goto label_376858;
        case 0x37685cu: goto label_37685c;
        case 0x376860u: goto label_376860;
        case 0x376864u: goto label_376864;
        case 0x376868u: goto label_376868;
        case 0x37686cu: goto label_37686c;
        case 0x376870u: goto label_376870;
        case 0x376874u: goto label_376874;
        case 0x376878u: goto label_376878;
        case 0x37687cu: goto label_37687c;
        case 0x376880u: goto label_376880;
        case 0x376884u: goto label_376884;
        case 0x376888u: goto label_376888;
        case 0x37688cu: goto label_37688c;
        case 0x376890u: goto label_376890;
        case 0x376894u: goto label_376894;
        case 0x376898u: goto label_376898;
        case 0x37689cu: goto label_37689c;
        case 0x3768a0u: goto label_3768a0;
        case 0x3768a4u: goto label_3768a4;
        case 0x3768a8u: goto label_3768a8;
        case 0x3768acu: goto label_3768ac;
        case 0x3768b0u: goto label_3768b0;
        case 0x3768b4u: goto label_3768b4;
        case 0x3768b8u: goto label_3768b8;
        case 0x3768bcu: goto label_3768bc;
        case 0x3768c0u: goto label_3768c0;
        case 0x3768c4u: goto label_3768c4;
        case 0x3768c8u: goto label_3768c8;
        case 0x3768ccu: goto label_3768cc;
        case 0x3768d0u: goto label_3768d0;
        case 0x3768d4u: goto label_3768d4;
        case 0x3768d8u: goto label_3768d8;
        case 0x3768dcu: goto label_3768dc;
        case 0x3768e0u: goto label_3768e0;
        case 0x3768e4u: goto label_3768e4;
        case 0x3768e8u: goto label_3768e8;
        case 0x3768ecu: goto label_3768ec;
        case 0x3768f0u: goto label_3768f0;
        case 0x3768f4u: goto label_3768f4;
        case 0x3768f8u: goto label_3768f8;
        case 0x3768fcu: goto label_3768fc;
        case 0x376900u: goto label_376900;
        case 0x376904u: goto label_376904;
        case 0x376908u: goto label_376908;
        case 0x37690cu: goto label_37690c;
        case 0x376910u: goto label_376910;
        case 0x376914u: goto label_376914;
        case 0x376918u: goto label_376918;
        case 0x37691cu: goto label_37691c;
        case 0x376920u: goto label_376920;
        case 0x376924u: goto label_376924;
        case 0x376928u: goto label_376928;
        case 0x37692cu: goto label_37692c;
        case 0x376930u: goto label_376930;
        case 0x376934u: goto label_376934;
        case 0x376938u: goto label_376938;
        case 0x37693cu: goto label_37693c;
        case 0x376940u: goto label_376940;
        case 0x376944u: goto label_376944;
        case 0x376948u: goto label_376948;
        case 0x37694cu: goto label_37694c;
        case 0x376950u: goto label_376950;
        case 0x376954u: goto label_376954;
        case 0x376958u: goto label_376958;
        case 0x37695cu: goto label_37695c;
        case 0x376960u: goto label_376960;
        case 0x376964u: goto label_376964;
        case 0x376968u: goto label_376968;
        case 0x37696cu: goto label_37696c;
        case 0x376970u: goto label_376970;
        case 0x376974u: goto label_376974;
        case 0x376978u: goto label_376978;
        case 0x37697cu: goto label_37697c;
        case 0x376980u: goto label_376980;
        case 0x376984u: goto label_376984;
        case 0x376988u: goto label_376988;
        case 0x37698cu: goto label_37698c;
        case 0x376990u: goto label_376990;
        case 0x376994u: goto label_376994;
        case 0x376998u: goto label_376998;
        case 0x37699cu: goto label_37699c;
        case 0x3769a0u: goto label_3769a0;
        case 0x3769a4u: goto label_3769a4;
        case 0x3769a8u: goto label_3769a8;
        case 0x3769acu: goto label_3769ac;
        case 0x3769b0u: goto label_3769b0;
        case 0x3769b4u: goto label_3769b4;
        case 0x3769b8u: goto label_3769b8;
        case 0x3769bcu: goto label_3769bc;
        case 0x3769c0u: goto label_3769c0;
        case 0x3769c4u: goto label_3769c4;
        case 0x3769c8u: goto label_3769c8;
        case 0x3769ccu: goto label_3769cc;
        case 0x3769d0u: goto label_3769d0;
        case 0x3769d4u: goto label_3769d4;
        case 0x3769d8u: goto label_3769d8;
        case 0x3769dcu: goto label_3769dc;
        case 0x3769e0u: goto label_3769e0;
        case 0x3769e4u: goto label_3769e4;
        case 0x3769e8u: goto label_3769e8;
        case 0x3769ecu: goto label_3769ec;
        case 0x3769f0u: goto label_3769f0;
        case 0x3769f4u: goto label_3769f4;
        case 0x3769f8u: goto label_3769f8;
        case 0x3769fcu: goto label_3769fc;
        case 0x376a00u: goto label_376a00;
        case 0x376a04u: goto label_376a04;
        case 0x376a08u: goto label_376a08;
        case 0x376a0cu: goto label_376a0c;
        case 0x376a10u: goto label_376a10;
        case 0x376a14u: goto label_376a14;
        case 0x376a18u: goto label_376a18;
        case 0x376a1cu: goto label_376a1c;
        case 0x376a20u: goto label_376a20;
        case 0x376a24u: goto label_376a24;
        case 0x376a28u: goto label_376a28;
        case 0x376a2cu: goto label_376a2c;
        case 0x376a30u: goto label_376a30;
        case 0x376a34u: goto label_376a34;
        case 0x376a38u: goto label_376a38;
        case 0x376a3cu: goto label_376a3c;
        case 0x376a40u: goto label_376a40;
        case 0x376a44u: goto label_376a44;
        case 0x376a48u: goto label_376a48;
        case 0x376a4cu: goto label_376a4c;
        case 0x376a50u: goto label_376a50;
        case 0x376a54u: goto label_376a54;
        case 0x376a58u: goto label_376a58;
        case 0x376a5cu: goto label_376a5c;
        case 0x376a60u: goto label_376a60;
        case 0x376a64u: goto label_376a64;
        case 0x376a68u: goto label_376a68;
        case 0x376a6cu: goto label_376a6c;
        case 0x376a70u: goto label_376a70;
        case 0x376a74u: goto label_376a74;
        case 0x376a78u: goto label_376a78;
        case 0x376a7cu: goto label_376a7c;
        case 0x376a80u: goto label_376a80;
        case 0x376a84u: goto label_376a84;
        case 0x376a88u: goto label_376a88;
        case 0x376a8cu: goto label_376a8c;
        case 0x376a90u: goto label_376a90;
        case 0x376a94u: goto label_376a94;
        case 0x376a98u: goto label_376a98;
        case 0x376a9cu: goto label_376a9c;
        case 0x376aa0u: goto label_376aa0;
        case 0x376aa4u: goto label_376aa4;
        case 0x376aa8u: goto label_376aa8;
        case 0x376aacu: goto label_376aac;
        case 0x376ab0u: goto label_376ab0;
        case 0x376ab4u: goto label_376ab4;
        case 0x376ab8u: goto label_376ab8;
        case 0x376abcu: goto label_376abc;
        default: break;
    }

    ctx->pc = 0x3746e0u;

label_3746e0:
    // 0x3746e0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3746e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3746e4:
    // 0x3746e4: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x3746e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_3746e8:
    // 0x3746e8: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x3746e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3746ec:
    // 0x3746ec: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x3746ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3746f0:
    // 0x3746f0: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x3746f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3746f4:
    // 0x3746f4: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x3746f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3746f8:
    // 0x3746f8: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x3746f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3746fc:
    // 0x3746fc: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x3746fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_374700:
    // 0x374700: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x374700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_374704:
    // 0x374704: 0xc4ca0000  lwc1        $f10, 0x0($a2)
    ctx->pc = 0x374704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_374708:
    // 0x374708: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x374708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
label_37470c:
    // 0x37470c: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x37470cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_374710:
    // 0x374710: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x374710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_374714:
    // 0x374714: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x374714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_374718:
    // 0x374718: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x374718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37471c:
    // 0x37471c: 0x46045182  mul.s       $f6, $f10, $f4
    ctx->pc = 0x37471cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
label_374720:
    // 0x374720: 0xc4e50004  lwc1        $f5, 0x4($a3)
    ctx->pc = 0x374720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_374724:
    // 0x374724: 0xc4c90004  lwc1        $f9, 0x4($a2)
    ctx->pc = 0x374724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_374728:
    // 0x374728: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x374728u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_37472c:
    // 0x37472c: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x37472cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_374730:
    // 0x374730: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x374730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374734:
    // 0x374734: 0x46024a02  mul.s       $f8, $f9, $f2
    ctx->pc = 0x374734u;
    ctx->f[8] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
label_374738:
    // 0x374738: 0xc4e30008  lwc1        $f3, 0x8($a3)
    ctx->pc = 0x374738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37473c:
    // 0x37473c: 0xc4c70008  lwc1        $f7, 0x8($a2)
    ctx->pc = 0x37473cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_374740:
    // 0x374740: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x374740u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_374744:
    // 0x374744: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x374744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_374748:
    // 0x374748: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x374748u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_37474c:
    // 0x37474c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x37474cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_374750:
    // 0x374750: 0x46083180  add.s       $f6, $f6, $f8
    ctx->pc = 0x374750u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[8]);
label_374754:
    // 0x374754: 0x444824  and         $t1, $v0, $a0
    ctx->pc = 0x374754u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_374758:
    // 0x374758: 0x46003942  mul.s       $f5, $f7, $f0
    ctx->pc = 0x374758u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_37475c:
    // 0x37475c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x37475cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_374760:
    // 0x374760: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x374760u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_374764:
    // 0x374764: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x374764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_374768:
    // 0x374768: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x374768u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_37476c:
    // 0x37476c: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x37476cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_374770:
    // 0x374770: 0x46053180  add.s       $f6, $f6, $f5
    ctx->pc = 0x374770u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
label_374774:
    // 0x374774: 0x46060b81  sub.s       $f14, $f1, $f6
    ctx->pc = 0x374774u;
    ctx->f[14] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
label_374778:
    // 0x374778: 0x460e2102  mul.s       $f4, $f4, $f14
    ctx->pc = 0x374778u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[14]);
label_37477c:
    // 0x37477c: 0x460e1082  mul.s       $f2, $f2, $f14
    ctx->pc = 0x37477cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[14]);
label_374780:
    // 0x374780: 0x460e0002  mul.s       $f0, $f0, $f14
    ctx->pc = 0x374780u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
label_374784:
    // 0x374784: 0x460a2300  add.s       $f12, $f4, $f10
    ctx->pc = 0x374784u;
    ctx->f[12] = FPU_ADD_S(ctx->f[4], ctx->f[10]);
label_374788:
    // 0x374788: 0x460912c0  add.s       $f11, $f2, $f9
    ctx->pc = 0x374788u;
    ctx->f[11] = FPU_ADD_S(ctx->f[2], ctx->f[9]);
label_37478c:
    // 0x37478c: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x37478cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_374790:
    // 0x374790: 0x460701c0  add.s       $f7, $f0, $f7
    ctx->pc = 0x374790u;
    ctx->f[7] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
label_374794:
    // 0x374794: 0xe7ab0014  swc1        $f11, 0x14($sp)
    ctx->pc = 0x374794u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_374798:
    // 0x374798: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x374798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_37479c:
    // 0x37479c: 0x10400319  beqz        $v0, . + 4 + (0x319 << 2)
label_3747a0:
    if (ctx->pc == 0x3747A0u) {
        ctx->pc = 0x3747A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37479Cu;
        // 0x3747a0: 0xe7a70018  swc1        $f7, 0x18($sp) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3747A4u;
        goto label_3747a4;
    }
    ctx->pc = 0x37479Cu;
    {
        const bool branch_taken_0x37479c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3747A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37479Cu;
        // 0x3747a0: 0xe7a70018  swc1        $f7, 0x18($sp) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37479c) {
            ctx->pc = 0x375404u;
            goto label_375404;
        }
    }
    ctx->pc = 0x3747A4u;
label_3747a4:
    // 0x3747a4: 0x124102a  slt         $v0, $t1, $a0
    ctx->pc = 0x3747a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3747a8:
    // 0x3747a8: 0x1040018c  beqz        $v0, . + 4 + (0x18C << 2)
label_3747ac:
    if (ctx->pc == 0x3747ACu) {
        ctx->pc = 0x3747ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3747A8u;
        // 0x3747ac: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3747B0u;
        goto label_3747b0;
    }
    ctx->pc = 0x3747A8u;
    {
        const bool branch_taken_0x3747a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3747ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3747A8u;
        // 0x3747ac: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3747a8) {
            ctx->pc = 0x374DDCu;
            goto label_374ddc;
        }
    }
    ctx->pc = 0x3747B0u;
label_3747b0:
    // 0x3747b0: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x3747b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_3747b4:
    // 0x3747b4: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x3747b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_3747b8:
    // 0x3747b8: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x3747b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3747bc:
    // 0x3747bc: 0xc4860000  lwc1        $f6, 0x0($a0)
    ctx->pc = 0x3747bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3747c0:
    // 0x3747c0: 0xc4e50004  lwc1        $f5, 0x4($a3)
    ctx->pc = 0x3747c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3747c4:
    // 0x3747c4: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x3747c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3747c8:
    // 0x3747c8: 0x46033041  sub.s       $f1, $f6, $f3
    ctx->pc = 0x3747c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
label_3747cc:
    // 0x3747cc: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x3747ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3747d0:
    // 0x3747d0: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x3747d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3747d4:
    // 0x3747d4: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x3747d4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
label_3747d8:
    // 0x3747d8: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x3747d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_3747dc:
    // 0x3747dc: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x3747dcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_3747e0:
    // 0x3747e0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3747e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3747e4:
    // 0x3747e4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3747e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_3747e8:
    // 0x3747e8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3747e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3747ec:
    // 0x3747ec: 0xe7a101a4  swc1        $f1, 0x1A4($sp)
    ctx->pc = 0x3747ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_3747f0:
    // 0x3747f0: 0x46062281  sub.s       $f10, $f4, $f6
    ctx->pc = 0x3747f0u;
    ctx->f[10] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
label_3747f4:
    // 0x3747f4: 0xe7aa0020  swc1        $f10, 0x20($sp)
    ctx->pc = 0x3747f4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3747f8:
    // 0x3747f8: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x3747f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3747fc:
    // 0x3747fc: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x3747fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374800:
    // 0x374800: 0x46000a41  sub.s       $f9, $f1, $f0
    ctx->pc = 0x374800u;
    ctx->f[9] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_374804:
    // 0x374804: 0xe7a90024  swc1        $f9, 0x24($sp)
    ctx->pc = 0x374804u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_374808:
    // 0x374808: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x374808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37480c:
    // 0x37480c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x37480cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_374810:
    // 0x374810: 0x46005801  sub.s       $f0, $f11, $f0
    ctx->pc = 0x374810u;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[0]);
label_374814:
    // 0x374814: 0x46016041  sub.s       $f1, $f12, $f1
    ctx->pc = 0x374814u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
label_374818:
    // 0x374818: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x374818u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
label_37481c:
    // 0x37481c: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x37481cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
label_374820:
    // 0x374820: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x374820u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_374824:
    // 0x374824: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x374824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_374828:
    // 0x374828: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x374828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_37482c:
    // 0x37482c: 0x8fa201a4  lw          $v0, 0x1A4($sp)
    ctx->pc = 0x37482cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
label_374830:
    // 0x374830: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x374830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_374834:
    // 0x374834: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x374834u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_374838:
    // 0x374838: 0x10600061  beqz        $v1, . + 4 + (0x61 << 2)
label_37483c:
    if (ctx->pc == 0x37483Cu) {
        ctx->pc = 0x37483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374838u;
        // 0x37483c: 0x46005106  mov.s       $f4, $f10 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[10]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x374840u;
        goto label_374840;
    }
    ctx->pc = 0x374838u;
    {
        const bool branch_taken_0x374838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374838u;
        // 0x37483c: 0x46005106  mov.s       $f4, $f10 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x374838) {
            ctx->pc = 0x3749C0u;
            goto label_3749c0;
        }
    }
    ctx->pc = 0x374840u;
label_374840:
    // 0x374840: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x374840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_374844:
    // 0x374844: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x374844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374848:
    // 0x374848: 0x46004946  mov.s       $f5, $f9
    ctx->pc = 0x374848u;
    ctx->f[5] = FPU_MOV_S(ctx->f[9]);
label_37484c:
    // 0x37484c: 0x460460c2  mul.s       $f3, $f12, $f4
    ctx->pc = 0x37484cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
label_374850:
    // 0x374850: 0x46001201  sub.s       $f8, $f2, $f0
    ctx->pc = 0x374850u;
    ctx->f[8] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_374854:
    // 0x374854: 0x46055842  mul.s       $f1, $f11, $f5
    ctx->pc = 0x374854u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
label_374858:
    // 0x374858: 0xe7a80028  swc1        $f8, 0x28($sp)
    ctx->pc = 0x374858u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_37485c:
    // 0x37485c: 0x46083982  mul.s       $f6, $f7, $f8
    ctx->pc = 0x37485cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
label_374860:
    // 0x374860: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x374860u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_374864:
    // 0x374864: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x374864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374868:
    // 0x374868: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x374868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37486c:
    // 0x37486c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x37486cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_374870:
    // 0x374870: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x374870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_374874:
    // 0x374874: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x374874u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_374878:
    // 0x374878: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x374878u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
label_37487c:
    // 0x37487c: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x37487cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
label_374880:
    // 0x374880: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x374880u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_374884:
    // 0x374884: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x374884u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_374888:
    // 0x374888: 0x46001901  sub.s       $f4, $f3, $f0
    ctx->pc = 0x374888u;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_37488c:
    // 0x37488c: 0x460d2036  c.le.s      $f4, $f13
    ctx->pc = 0x37488cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_374890:
    // 0x374890: 0x0  nop
    ctx->pc = 0x374890u;
    // NOP
label_374894:
    // 0x374894: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_374898:
    if (ctx->pc == 0x374898u) {
        ctx->pc = 0x374898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374894u;
        // 0x374898: 0x460a5002  mul.s       $f0, $f10, $f10 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37489Cu;
        goto label_37489c;
    }
    ctx->pc = 0x374894u;
    {
        const bool branch_taken_0x374894 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x374894) {
            ctx->pc = 0x374898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374894u;
            // 0x374898: 0x460a5002  mul.s       $f0, $f10, $f10 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3748C0u;
            goto label_3748c0;
        }
    }
    ctx->pc = 0x37489Cu;
label_37489c:
    // 0x37489c: 0x688a0007  ldl         $t2, 0x7($a0)
    ctx->pc = 0x37489cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_3748a0:
    // 0x3748a0: 0x6c8a0000  ldr         $t2, 0x0($a0)
    ctx->pc = 0x3748a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_3748a4:
    // 0x3748a4: 0x8c8b0008  lw          $t3, 0x8($a0)
    ctx->pc = 0x3748a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3748a8:
    // 0x3748a8: 0xb3aa0037  sdl         $t2, 0x37($sp)
    ctx->pc = 0x3748a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3748ac:
    // 0x3748ac: 0xb7aa0030  sdr         $t2, 0x30($sp)
    ctx->pc = 0x3748acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3748b0:
    // 0x3748b0: 0xafab0038  sw          $t3, 0x38($sp)
    ctx->pc = 0x3748b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 11));
label_3748b4:
    // 0x3748b4: 0x1000002c  b           . + 4 + (0x2C << 2)
label_3748b8:
    if (ctx->pc == 0x3748B8u) {
        ctx->pc = 0x3748B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3748B4u;
        // 0x3748b8: 0xc7a30030  lwc1        $f3, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3748BCu;
        goto label_3748bc;
    }
    ctx->pc = 0x3748B4u;
    {
        const bool branch_taken_0x3748b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3748B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3748B4u;
        // 0x3748b8: 0xc7a30030  lwc1        $f3, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3748b4) {
            ctx->pc = 0x374968u;
            goto label_374968;
        }
    }
    ctx->pc = 0x3748BCu;
label_3748bc:
    // 0x3748bc: 0x0  nop
    ctx->pc = 0x3748bcu;
    // NOP
label_3748c0:
    // 0x3748c0: 0x46094842  mul.s       $f1, $f9, $f9
    ctx->pc = 0x3748c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
label_3748c4:
    // 0x3748c4: 0x46084082  mul.s       $f2, $f8, $f8
    ctx->pc = 0x3748c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
label_3748c8:
    // 0x3748c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3748c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3748cc:
    // 0x3748cc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3748ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3748d0:
    // 0x3748d0: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x3748d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3748d4:
    // 0x3748d4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_3748d8:
    if (ctx->pc == 0x3748D8u) {
        ctx->pc = 0x3748DCu;
        goto label_3748dc;
    }
    ctx->pc = 0x3748D4u;
    {
        const bool branch_taken_0x3748d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3748d4) {
            ctx->pc = 0x3748ECu;
            goto label_3748ec;
        }
    }
    ctx->pc = 0x3748DCu;
label_3748dc:
    // 0x3748dc: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x3748dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3748e0:
    // 0x3748e0: 0x0  nop
    ctx->pc = 0x3748e0u;
    // NOP
label_3748e4:
    // 0x3748e4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_3748e8:
    if (ctx->pc == 0x3748E8u) {
        ctx->pc = 0x3748E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3748E4u;
        // 0x3748e8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3748ECu;
        goto label_3748ec;
    }
    ctx->pc = 0x3748E4u;
    {
        const bool branch_taken_0x3748e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3748e4) {
            ctx->pc = 0x3748E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3748E4u;
            // 0x3748e8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3748ECu;
            goto label_3748ec;
        }
    }
    ctx->pc = 0x3748ECu;
label_3748ec:
    // 0x3748ec: 0x11200016  beqz        $t1, . + 4 + (0x16 << 2)
label_3748f0:
    if (ctx->pc == 0x3748F0u) {
        ctx->pc = 0x3748F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3748ECu;
        // 0x3748f0: 0xc7a10020  lwc1        $f1, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3748F4u;
        goto label_3748f4;
    }
    ctx->pc = 0x3748ECu;
    {
        const bool branch_taken_0x3748ec = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3748F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3748ECu;
        // 0x3748f0: 0xc7a10020  lwc1        $f1, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3748ec) {
            ctx->pc = 0x374948u;
            goto label_374948;
        }
    }
    ctx->pc = 0x3748F4u;
label_3748f4:
    // 0x3748f4: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x3748f4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
label_3748f8:
    // 0x3748f8: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x3748f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3748fc:
    // 0x3748fc: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3748fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_374900:
    // 0x374900: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x374900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_374904:
    // 0x374904: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x374904u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_374908:
    // 0x374908: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x374908u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_37490c:
    // 0x37490c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x37490cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_374910:
    // 0x374910: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x374910u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_374914:
    // 0x374914: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x374914u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_374918:
    // 0x374918: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x374918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_37491c:
    // 0x37491c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x37491cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374920:
    // 0x374920: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x374920u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_374924:
    // 0x374924: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x374924u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_374928:
    // 0x374928: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x374928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37492c:
    // 0x37492c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x37492cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_374930:
    // 0x374930: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x374930u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_374934:
    // 0x374934: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x374934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374938:
    // 0x374938: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x374938u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_37493c:
    // 0x37493c: 0x10000009  b           . + 4 + (0x9 << 2)
label_374940:
    if (ctx->pc == 0x374940u) {
        ctx->pc = 0x374940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37493Cu;
        // 0x374940: 0xe7a30038  swc1        $f3, 0x38($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x374944u;
        goto label_374944;
    }
    ctx->pc = 0x37493Cu;
    {
        const bool branch_taken_0x37493c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37493Cu;
        // 0x374940: 0xe7a30038  swc1        $f3, 0x38($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37493c) {
            ctx->pc = 0x374964u;
            goto label_374964;
        }
    }
    ctx->pc = 0x374944u;
label_374944:
    // 0x374944: 0x0  nop
    ctx->pc = 0x374944u;
    // NOP
label_374948:
    // 0x374948: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x374948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_37494c:
    // 0x37494c: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x37494cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_374950:
    // 0x374950: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x374950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_374954:
    // 0x374954: 0x8c4a0008  lw          $t2, 0x8($v0)
    ctx->pc = 0x374954u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_374958:
    // 0x374958: 0xb3a70037  sdl         $a3, 0x37($sp)
    ctx->pc = 0x374958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_37495c:
    // 0x37495c: 0xb7a70030  sdr         $a3, 0x30($sp)
    ctx->pc = 0x37495cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_374960:
    // 0x374960: 0xafaa0038  sw          $t2, 0x38($sp)
    ctx->pc = 0x374960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 10));
label_374964:
    // 0x374964: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x374964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_374968:
    // 0x374968: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x374968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37496c:
    // 0x37496c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x37496cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_374970:
    // 0x374970: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x374970u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_374974:
    // 0x374974: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x374974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_374978:
    // 0x374978: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x374978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37497c:
    // 0x37497c: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x37497cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_374980:
    // 0x374980: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x374980u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_374984:
    // 0x374984: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x374984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_374988:
    // 0x374988: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x374988u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_37498c:
    // 0x37498c: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x37498cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_374990:
    // 0x374990: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x374990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_374994:
    // 0x374994: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x374994u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_374998:
    // 0x374998: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x374998u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_37499c:
    // 0x37499c: 0x6ba50037  ldl         $a1, 0x37($sp)
    ctx->pc = 0x37499cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_3749a0:
    // 0x3749a0: 0x6fa50030  ldr         $a1, 0x30($sp)
    ctx->pc = 0x3749a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_3749a4:
    // 0x3749a4: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x3749a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3749a8:
    // 0x3749a8: 0xb0c50007  sdl         $a1, 0x7($a2)
    ctx->pc = 0x3749a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3749ac:
    // 0x3749ac: 0xb4c50000  sdr         $a1, 0x0($a2)
    ctx->pc = 0x3749acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3749b0:
    // 0x3749b0: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x3749b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
label_3749b4:
    // 0x3749b4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3749b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_3749b8:
    // 0x3749b8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3749b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3749bc:
    // 0x3749bc: 0x46000b40  add.s       $f13, $f1, $f0
    ctx->pc = 0x3749bcu;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3749c0:
    // 0x3749c0: 0x152005a8  bnez        $t1, . + 4 + (0x5A8 << 2)
label_3749c4:
    if (ctx->pc == 0x3749C4u) {
        ctx->pc = 0x3749C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3749C0u;
        // 0x3749c4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3749C8u;
        goto label_3749c8;
    }
    ctx->pc = 0x3749C0u;
    {
        const bool branch_taken_0x3749c0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3749C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3749C0u;
        // 0x3749c4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3749c0) {
            ctx->pc = 0x376064u;
            goto label_376064;
        }
    }
    ctx->pc = 0x3749C8u;
label_3749c8:
    // 0x3749c8: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x3749c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3749cc:
    // 0x3749cc: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x3749ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_3749d0:
    // 0x3749d0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x3749d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3749d4:
    // 0x3749d4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3749d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3749d8:
    // 0x3749d8: 0x46000a41  sub.s       $f9, $f1, $f0
    ctx->pc = 0x3749d8u;
    ctx->f[9] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3749dc:
    // 0x3749dc: 0xe7a90040  swc1        $f9, 0x40($sp)
    ctx->pc = 0x3749dcu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3749e0:
    // 0x3749e0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x3749e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3749e4:
    // 0x3749e4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x3749e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3749e8:
    // 0x3749e8: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x3749e8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3749ec:
    // 0x3749ec: 0xe7a80044  swc1        $f8, 0x44($sp)
    ctx->pc = 0x3749ecu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3749f0:
    // 0x3749f0: 0xc7aa0014  lwc1        $f10, 0x14($sp)
    ctx->pc = 0x3749f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_3749f4:
    // 0x3749f4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x3749f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3749f8:
    // 0x3749f8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x3749f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3749fc:
    // 0x3749fc: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x3749fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_374a00:
    // 0x374a00: 0x46005001  sub.s       $f0, $f10, $f0
    ctx->pc = 0x374a00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
label_374a04:
    // 0x374a04: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x374a04u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_374a08:
    // 0x374a08: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x374a08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
label_374a0c:
    // 0x374a0c: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x374a0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
label_374a10:
    // 0x374a10: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x374a10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_374a14:
    // 0x374a14: 0xe7a001a8  swc1        $f0, 0x1A8($sp)
    ctx->pc = 0x374a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_374a18:
    // 0x374a18: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x374a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_374a1c:
    // 0x374a1c: 0x8fa201a4  lw          $v0, 0x1A4($sp)
    ctx->pc = 0x374a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
label_374a20:
    // 0x374a20: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x374a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_374a24:
    // 0x374a24: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x374a24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_374a28:
    // 0x374a28: 0x10600068  beqz        $v1, . + 4 + (0x68 << 2)
label_374a2c:
    if (ctx->pc == 0x374A2Cu) {
        ctx->pc = 0x374A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374A28u;
        // 0x374a2c: 0x46004946  mov.s       $f5, $f9 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[9]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x374A30u;
        goto label_374a30;
    }
    ctx->pc = 0x374A28u;
    {
        const bool branch_taken_0x374a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x374A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374A28u;
        // 0x374a2c: 0x46004946  mov.s       $f5, $f9 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x374a28) {
            ctx->pc = 0x374BCCu;
            goto label_374bcc;
        }
    }
    ctx->pc = 0x374A30u;
label_374a30:
    // 0x374a30: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x374a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_374a34:
    // 0x374a34: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x374a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374a38:
    // 0x374a38: 0x46004186  mov.s       $f6, $f8
    ctx->pc = 0x374a38u;
    ctx->f[6] = FPU_MOV_S(ctx->f[8]);
label_374a3c:
    // 0x374a3c: 0x46065042  mul.s       $f1, $f10, $f6
    ctx->pc = 0x374a3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
label_374a40:
    // 0x374a40: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x374a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_374a44:
    // 0x374a44: 0x460011c1  sub.s       $f7, $f2, $f0
    ctx->pc = 0x374a44u;
    ctx->f[7] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_374a48:
    // 0x374a48: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x374a48u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_374a4c:
    // 0x374a4c: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x374a4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_374a50:
    // 0x374a50: 0xe7a70048  swc1        $f7, 0x48($sp)
    ctx->pc = 0x374a50u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_374a54:
    // 0x374a54: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x374a54u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
label_374a58:
    // 0x374a58: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x374a58u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_374a5c:
    // 0x374a5c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x374a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374a60:
    // 0x374a60: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x374a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_374a64:
    // 0x374a64: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x374a64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_374a68:
    // 0x374a68: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x374a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_374a6c:
    // 0x374a6c: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x374a6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_374a70:
    // 0x374a70: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x374a70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
label_374a74:
    // 0x374a74: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x374a74u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_374a78:
    // 0x374a78: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x374a78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_374a7c:
    // 0x374a7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x374a7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_374a80:
    // 0x374a80: 0x46001901  sub.s       $f4, $f3, $f0
    ctx->pc = 0x374a80u;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_374a84:
    // 0x374a84: 0x460a2036  c.le.s      $f4, $f10
    ctx->pc = 0x374a84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_374a88:
    // 0x374a88: 0x0  nop
    ctx->pc = 0x374a88u;
    // NOP
label_374a8c:
    // 0x374a8c: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_374a90:
    if (ctx->pc == 0x374A90u) {
        ctx->pc = 0x374A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374A8Cu;
        // 0x374a90: 0x46094802  mul.s       $f0, $f9, $f9 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x374A94u;
        goto label_374a94;
    }
    ctx->pc = 0x374A8Cu;
    {
        const bool branch_taken_0x374a8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x374a8c) {
            ctx->pc = 0x374A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374A8Cu;
            // 0x374a90: 0x46094802  mul.s       $f0, $f9, $f9 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x374AB8u;
            goto label_374ab8;
        }
    }
    ctx->pc = 0x374A94u;
label_374a94:
    // 0x374a94: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x374a94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_374a98:
    // 0x374a98: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x374a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_374a9c:
    // 0x374a9c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x374a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_374aa0:
    // 0x374aa0: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x374aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_374aa4:
    // 0x374aa4: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x374aa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_374aa8:
    // 0x374aa8: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x374aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
label_374aac:
    // 0x374aac: 0x1000002c  b           . + 4 + (0x2C << 2)
label_374ab0:
    if (ctx->pc == 0x374AB0u) {
        ctx->pc = 0x374AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374AACu;
        // 0x374ab0: 0xc7a30050  lwc1        $f3, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x374AB4u;
        goto label_374ab4;
    }
    ctx->pc = 0x374AACu;
    {
        const bool branch_taken_0x374aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374AACu;
        // 0x374ab0: 0xc7a30050  lwc1        $f3, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x374aac) {
            ctx->pc = 0x374B60u;
            goto label_374b60;
        }
    }
    ctx->pc = 0x374AB4u;
label_374ab4:
    // 0x374ab4: 0x0  nop
    ctx->pc = 0x374ab4u;
    // NOP
label_374ab8:
    // 0x374ab8: 0x46084042  mul.s       $f1, $f8, $f8
    ctx->pc = 0x374ab8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
label_374abc:
    // 0x374abc: 0x46073882  mul.s       $f2, $f7, $f7
    ctx->pc = 0x374abcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
label_374ac0:
    // 0x374ac0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x374ac0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_374ac4:
    // 0x374ac4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x374ac4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_374ac8:
    // 0x374ac8: 0x46005034  c.lt.s      $f10, $f0
    ctx->pc = 0x374ac8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_374acc:
    // 0x374acc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_374ad0:
    if (ctx->pc == 0x374AD0u) {
        ctx->pc = 0x374AD4u;
        goto label_374ad4;
    }
    ctx->pc = 0x374ACCu;
    {
        const bool branch_taken_0x374acc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x374acc) {
            ctx->pc = 0x374AE4u;
            goto label_374ae4;
        }
    }
    ctx->pc = 0x374AD4u;
label_374ad4:
    // 0x374ad4: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x374ad4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_374ad8:
    // 0x374ad8: 0x0  nop
    ctx->pc = 0x374ad8u;
    // NOP
label_374adc:
    // 0x374adc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_374ae0:
    if (ctx->pc == 0x374AE0u) {
        ctx->pc = 0x374AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374ADCu;
        // 0x374ae0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374AE4u;
        goto label_374ae4;
    }
    ctx->pc = 0x374ADCu;
    {
        const bool branch_taken_0x374adc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x374adc) {
            ctx->pc = 0x374AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374ADCu;
            // 0x374ae0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x374AE4u;
            goto label_374ae4;
        }
    }
    ctx->pc = 0x374AE4u;
label_374ae4:
    // 0x374ae4: 0x11200016  beqz        $t1, . + 4 + (0x16 << 2)
label_374ae8:
    if (ctx->pc == 0x374AE8u) {
        ctx->pc = 0x374AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374AE4u;
        // 0x374ae8: 0xc7a10040  lwc1        $f1, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x374AECu;
        goto label_374aec;
    }
    ctx->pc = 0x374AE4u;
    {
        const bool branch_taken_0x374ae4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x374AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374AE4u;
        // 0x374ae8: 0xc7a10040  lwc1        $f1, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x374ae4) {
            ctx->pc = 0x374B40u;
            goto label_374b40;
        }
    }
    ctx->pc = 0x374AECu;
label_374aec:
    // 0x374aec: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x374aecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
label_374af0:
    // 0x374af0: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x374af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_374af4:
    // 0x374af4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x374af4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_374af8:
    // 0x374af8: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x374af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_374afc:
    // 0x374afc: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x374afcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_374b00:
    // 0x374b00: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x374b00u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_374b04:
    // 0x374b04: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x374b04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_374b08:
    // 0x374b08: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x374b08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_374b0c:
    // 0x374b0c: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x374b0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_374b10:
    // 0x374b10: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x374b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_374b14:
    // 0x374b14: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x374b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374b18:
    // 0x374b18: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x374b18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_374b1c:
    // 0x374b1c: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x374b1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_374b20:
    // 0x374b20: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x374b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374b24:
    // 0x374b24: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x374b24u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_374b28:
    // 0x374b28: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x374b28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_374b2c:
    // 0x374b2c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x374b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374b30:
    // 0x374b30: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x374b30u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_374b34:
    // 0x374b34: 0x10000009  b           . + 4 + (0x9 << 2)
label_374b38:
    if (ctx->pc == 0x374B38u) {
        ctx->pc = 0x374B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374B34u;
        // 0x374b38: 0xe7a30058  swc1        $f3, 0x58($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x374B3Cu;
        goto label_374b3c;
    }
    ctx->pc = 0x374B34u;
    {
        const bool branch_taken_0x374b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374B34u;
        // 0x374b38: 0xe7a30058  swc1        $f3, 0x58($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x374b34) {
            ctx->pc = 0x374B5Cu;
            goto label_374b5c;
        }
    }
    ctx->pc = 0x374B3Cu;
label_374b3c:
    // 0x374b3c: 0x0  nop
    ctx->pc = 0x374b3cu;
    // NOP
label_374b40:
    // 0x374b40: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x374b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_374b44:
    // 0x374b44: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x374b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_374b48:
    // 0x374b48: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x374b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_374b4c:
    // 0x374b4c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x374b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_374b50:
    // 0x374b50: 0xb3a40057  sdl         $a0, 0x57($sp)
    ctx->pc = 0x374b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_374b54:
    // 0x374b54: 0xb7a40050  sdr         $a0, 0x50($sp)
    ctx->pc = 0x374b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_374b58:
    // 0x374b58: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x374b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
label_374b5c:
    // 0x374b5c: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x374b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_374b60:
    // 0x374b60: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x374b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_374b64:
    // 0x374b64: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x374b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_374b68:
    // 0x374b68: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x374b68u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_374b6c:
    // 0x374b6c: 0xc7a40054  lwc1        $f4, 0x54($sp)
    ctx->pc = 0x374b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_374b70:
    // 0x374b70: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x374b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374b74:
    // 0x374b74: 0xc7a30058  lwc1        $f3, 0x58($sp)
    ctx->pc = 0x374b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_374b78:
    // 0x374b78: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x374b78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_374b7c:
    // 0x374b7c: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x374b7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_374b80:
    // 0x374b80: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x374b80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_374b84:
    // 0x374b84: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x374b84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_374b88:
    // 0x374b88: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x374b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_374b8c:
    // 0x374b8c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x374b8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_374b90:
    // 0x374b90: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x374b90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_374b94:
    // 0x374b94: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x374b94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_374b98:
    // 0x374b98: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x374b98u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_374b9c:
    // 0x374b9c: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
label_374ba0:
    if (ctx->pc == 0x374BA0u) {
        ctx->pc = 0x374BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374B9Cu;
        // 0x374ba0: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x374BA4u;
        goto label_374ba4;
    }
    ctx->pc = 0x374B9Cu;
    {
        const bool branch_taken_0x374b9c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x374BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374B9Cu;
        // 0x374ba0: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x374b9c) {
            ctx->pc = 0x374BB0u;
            goto label_374bb0;
        }
    }
    ctx->pc = 0x374BA4u;
label_374ba4:
    // 0x374ba4: 0x460d1034  c.lt.s      $f2, $f13
    ctx->pc = 0x374ba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_374ba8:
    // 0x374ba8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_374bac:
    if (ctx->pc == 0x374BACu) {
        ctx->pc = 0x374BB0u;
        goto label_374bb0;
    }
    ctx->pc = 0x374BA8u;
    {
        const bool branch_taken_0x374ba8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x374ba8) {
            ctx->pc = 0x374BCCu;
            goto label_374bcc;
        }
    }
    ctx->pc = 0x374BB0u;
label_374bb0:
    // 0x374bb0: 0x6ba20057  ldl         $v0, 0x57($sp)
    ctx->pc = 0x374bb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_374bb4:
    // 0x374bb4: 0x6fa20050  ldr         $v0, 0x50($sp)
    ctx->pc = 0x374bb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_374bb8:
    // 0x374bb8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x374bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_374bbc:
    // 0x374bbc: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x374bbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_374bc0:
    // 0x374bc0: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x374bc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_374bc4:
    // 0x374bc4: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x374bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_374bc8:
    // 0x374bc8: 0x46001346  mov.s       $f13, $f2
    ctx->pc = 0x374bc8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[2]);
label_374bcc:
    // 0x374bcc: 0x15200525  bnez        $t1, . + 4 + (0x525 << 2)
label_374bd0:
    if (ctx->pc == 0x374BD0u) {
        ctx->pc = 0x374BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374BCCu;
        // 0x374bd0: 0xe33825  or          $a3, $a3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374BD4u;
        goto label_374bd4;
    }
    ctx->pc = 0x374BCCu;
    {
        const bool branch_taken_0x374bcc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x374BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374BCCu;
        // 0x374bd0: 0xe33825  or          $a3, $a3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374bcc) {
            ctx->pc = 0x376064u;
            goto label_376064;
        }
    }
    ctx->pc = 0x374BD4u;
label_374bd4:
    // 0x374bd4: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x374bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_374bd8:
    // 0x374bd8: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x374bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_374bdc:
    // 0x374bdc: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x374bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_374be0:
    // 0x374be0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x374be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374be4:
    // 0x374be4: 0x46000a41  sub.s       $f9, $f1, $f0
    ctx->pc = 0x374be4u;
    ctx->f[9] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_374be8:
    // 0x374be8: 0xe7a90060  swc1        $f9, 0x60($sp)
    ctx->pc = 0x374be8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_374bec:
    // 0x374bec: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x374becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_374bf0:
    // 0x374bf0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x374bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374bf4:
    // 0x374bf4: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x374bf4u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_374bf8:
    // 0x374bf8: 0xe7a80064  swc1        $f8, 0x64($sp)
    ctx->pc = 0x374bf8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_374bfc:
    // 0x374bfc: 0xc7aa0014  lwc1        $f10, 0x14($sp)
    ctx->pc = 0x374bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_374c00:
    // 0x374c00: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x374c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374c04:
    // 0x374c04: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x374c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_374c08:
    // 0x374c08: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x374c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_374c0c:
    // 0x374c0c: 0x46005001  sub.s       $f0, $f10, $f0
    ctx->pc = 0x374c0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
label_374c10:
    // 0x374c10: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x374c10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_374c14:
    // 0x374c14: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x374c14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
label_374c18:
    // 0x374c18: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x374c18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
label_374c1c:
    // 0x374c1c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x374c1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_374c20:
    // 0x374c20: 0xe7a001ac  swc1        $f0, 0x1AC($sp)
    ctx->pc = 0x374c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
label_374c24:
    // 0x374c24: 0x8fa301ac  lw          $v1, 0x1AC($sp)
    ctx->pc = 0x374c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_374c28:
    // 0x374c28: 0x8fa201a4  lw          $v0, 0x1A4($sp)
    ctx->pc = 0x374c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
label_374c2c:
    // 0x374c2c: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x374c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_374c30:
    // 0x374c30: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x374c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_374c34:
    // 0x374c34: 0x1060050a  beqz        $v1, . + 4 + (0x50A << 2)
label_374c38:
    if (ctx->pc == 0x374C38u) {
        ctx->pc = 0x374C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374C34u;
        // 0x374c38: 0x46004946  mov.s       $f5, $f9 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[9]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x374C3Cu;
        goto label_374c3c;
    }
    ctx->pc = 0x374C34u;
    {
        const bool branch_taken_0x374c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x374C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374C34u;
        // 0x374c38: 0x46004946  mov.s       $f5, $f9 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x374c34) {
            ctx->pc = 0x376060u;
            goto label_376060;
        }
    }
    ctx->pc = 0x374C3Cu;
label_374c3c:
    // 0x374c3c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x374c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_374c40:
    // 0x374c40: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x374c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374c44:
    // 0x374c44: 0x46004186  mov.s       $f6, $f8
    ctx->pc = 0x374c44u;
    ctx->f[6] = FPU_MOV_S(ctx->f[8]);
label_374c48:
    // 0x374c48: 0x46065042  mul.s       $f1, $f10, $f6
    ctx->pc = 0x374c48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
label_374c4c:
    // 0x374c4c: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x374c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_374c50:
    // 0x374c50: 0x460011c1  sub.s       $f7, $f2, $f0
    ctx->pc = 0x374c50u;
    ctx->f[7] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_374c54:
    // 0x374c54: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x374c54u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_374c58:
    // 0x374c58: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x374c58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_374c5c:
    // 0x374c5c: 0xe7a70068  swc1        $f7, 0x68($sp)
    ctx->pc = 0x374c5cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_374c60:
    // 0x374c60: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x374c60u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
label_374c64:
    // 0x374c64: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x374c64u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_374c68:
    // 0x374c68: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x374c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374c6c:
    // 0x374c6c: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x374c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_374c70:
    // 0x374c70: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x374c70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_374c74:
    // 0x374c74: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x374c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_374c78:
    // 0x374c78: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x374c78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_374c7c:
    // 0x374c7c: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x374c7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
label_374c80:
    // 0x374c80: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x374c80u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_374c84:
    // 0x374c84: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x374c84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_374c88:
    // 0x374c88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x374c88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_374c8c:
    // 0x374c8c: 0x46001901  sub.s       $f4, $f3, $f0
    ctx->pc = 0x374c8cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_374c90:
    // 0x374c90: 0x460a2036  c.le.s      $f4, $f10
    ctx->pc = 0x374c90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_374c94:
    // 0x374c94: 0x0  nop
    ctx->pc = 0x374c94u;
    // NOP
label_374c98:
    // 0x374c98: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_374c9c:
    if (ctx->pc == 0x374C9Cu) {
        ctx->pc = 0x374C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374C98u;
        // 0x374c9c: 0x46094802  mul.s       $f0, $f9, $f9 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x374CA0u;
        goto label_374ca0;
    }
    ctx->pc = 0x374C98u;
    {
        const bool branch_taken_0x374c98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x374c98) {
            ctx->pc = 0x374C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374C98u;
            // 0x374c9c: 0x46094802  mul.s       $f0, $f9, $f9 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x374CC0u;
            goto label_374cc0;
        }
    }
    ctx->pc = 0x374CA0u;
label_374ca0:
    // 0x374ca0: 0x688b0007  ldl         $t3, 0x7($a0)
    ctx->pc = 0x374ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_374ca4:
    // 0x374ca4: 0x6c8b0000  ldr         $t3, 0x0($a0)
    ctx->pc = 0x374ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_374ca8:
    // 0x374ca8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x374ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_374cac:
    // 0x374cac: 0xb3ab0077  sdl         $t3, 0x77($sp)
    ctx->pc = 0x374cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_374cb0:
    // 0x374cb0: 0xb7ab0070  sdr         $t3, 0x70($sp)
    ctx->pc = 0x374cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_374cb4:
    // 0x374cb4: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x374cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_374cb8:
    // 0x374cb8: 0x1000002b  b           . + 4 + (0x2B << 2)
label_374cbc:
    if (ctx->pc == 0x374CBCu) {
        ctx->pc = 0x374CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374CB8u;
        // 0x374cbc: 0xc7a30070  lwc1        $f3, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x374CC0u;
        goto label_374cc0;
    }
    ctx->pc = 0x374CB8u;
    {
        const bool branch_taken_0x374cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374CB8u;
        // 0x374cbc: 0xc7a30070  lwc1        $f3, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x374cb8) {
            ctx->pc = 0x374D68u;
            goto label_374d68;
        }
    }
    ctx->pc = 0x374CC0u;
label_374cc0:
    // 0x374cc0: 0x46084042  mul.s       $f1, $f8, $f8
    ctx->pc = 0x374cc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
label_374cc4:
    // 0x374cc4: 0x46073882  mul.s       $f2, $f7, $f7
    ctx->pc = 0x374cc4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
label_374cc8:
    // 0x374cc8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x374cc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_374ccc:
    // 0x374ccc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x374cccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_374cd0:
    // 0x374cd0: 0x46005034  c.lt.s      $f10, $f0
    ctx->pc = 0x374cd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_374cd4:
    // 0x374cd4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_374cd8:
    if (ctx->pc == 0x374CD8u) {
        ctx->pc = 0x374CDCu;
        goto label_374cdc;
    }
    ctx->pc = 0x374CD4u;
    {
        const bool branch_taken_0x374cd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x374cd4) {
            ctx->pc = 0x374CECu;
            goto label_374cec;
        }
    }
    ctx->pc = 0x374CDCu;
label_374cdc:
    // 0x374cdc: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x374cdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_374ce0:
    // 0x374ce0: 0x0  nop
    ctx->pc = 0x374ce0u;
    // NOP
label_374ce4:
    // 0x374ce4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_374ce8:
    if (ctx->pc == 0x374CE8u) {
        ctx->pc = 0x374CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374CE4u;
        // 0x374ce8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374CECu;
        goto label_374cec;
    }
    ctx->pc = 0x374CE4u;
    {
        const bool branch_taken_0x374ce4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x374ce4) {
            ctx->pc = 0x374CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374CE4u;
            // 0x374ce8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x374CECu;
            goto label_374cec;
        }
    }
    ctx->pc = 0x374CECu;
label_374cec:
    // 0x374cec: 0x11200016  beqz        $t1, . + 4 + (0x16 << 2)
label_374cf0:
    if (ctx->pc == 0x374CF0u) {
        ctx->pc = 0x374CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374CECu;
        // 0x374cf0: 0xc7a10060  lwc1        $f1, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x374CF4u;
        goto label_374cf4;
    }
    ctx->pc = 0x374CECu;
    {
        const bool branch_taken_0x374cec = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x374CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374CECu;
        // 0x374cf0: 0xc7a10060  lwc1        $f1, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x374cec) {
            ctx->pc = 0x374D48u;
            goto label_374d48;
        }
    }
    ctx->pc = 0x374CF4u;
label_374cf4:
    // 0x374cf4: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x374cf4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
label_374cf8:
    // 0x374cf8: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x374cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_374cfc:
    // 0x374cfc: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x374cfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_374d00:
    // 0x374d00: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x374d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_374d04:
    // 0x374d04: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x374d04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_374d08:
    // 0x374d08: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x374d08u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_374d0c:
    // 0x374d0c: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x374d0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_374d10:
    // 0x374d10: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x374d10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_374d14:
    // 0x374d14: 0xe7a30078  swc1        $f3, 0x78($sp)
    ctx->pc = 0x374d14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_374d18:
    // 0x374d18: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x374d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_374d1c:
    // 0x374d1c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x374d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374d20:
    // 0x374d20: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x374d20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_374d24:
    // 0x374d24: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x374d24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_374d28:
    // 0x374d28: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x374d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374d2c:
    // 0x374d2c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x374d2cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_374d30:
    // 0x374d30: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x374d30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_374d34:
    // 0x374d34: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x374d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374d38:
    // 0x374d38: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x374d38u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_374d3c:
    // 0x374d3c: 0x10000009  b           . + 4 + (0x9 << 2)
label_374d40:
    if (ctx->pc == 0x374D40u) {
        ctx->pc = 0x374D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374D3Cu;
        // 0x374d40: 0xe7a30078  swc1        $f3, 0x78($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x374D44u;
        goto label_374d44;
    }
    ctx->pc = 0x374D3Cu;
    {
        const bool branch_taken_0x374d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374D3Cu;
        // 0x374d40: 0xe7a30078  swc1        $f3, 0x78($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x374d3c) {
            ctx->pc = 0x374D64u;
            goto label_374d64;
        }
    }
    ctx->pc = 0x374D44u;
label_374d44:
    // 0x374d44: 0x0  nop
    ctx->pc = 0x374d44u;
    // NOP
label_374d48:
    // 0x374d48: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x374d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_374d4c:
    // 0x374d4c: 0x68490007  ldl         $t1, 0x7($v0)
    ctx->pc = 0x374d4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_374d50:
    // 0x374d50: 0x6c490000  ldr         $t1, 0x0($v0)
    ctx->pc = 0x374d50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_374d54:
    // 0x374d54: 0x8c4a0008  lw          $t2, 0x8($v0)
    ctx->pc = 0x374d54u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_374d58:
    // 0x374d58: 0xb3a90077  sdl         $t1, 0x77($sp)
    ctx->pc = 0x374d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_374d5c:
    // 0x374d5c: 0xb7a90070  sdr         $t1, 0x70($sp)
    ctx->pc = 0x374d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_374d60:
    // 0x374d60: 0xafaa0078  sw          $t2, 0x78($sp)
    ctx->pc = 0x374d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 10));
label_374d64:
    // 0x374d64: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x374d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_374d68:
    // 0x374d68: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x374d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_374d6c:
    // 0x374d6c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x374d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_374d70:
    // 0x374d70: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x374d70u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_374d74:
    // 0x374d74: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x374d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_374d78:
    // 0x374d78: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x374d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374d7c:
    // 0x374d7c: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x374d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_374d80:
    // 0x374d80: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x374d80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_374d84:
    // 0x374d84: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x374d84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_374d88:
    // 0x374d88: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x374d88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_374d8c:
    // 0x374d8c: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x374d8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_374d90:
    // 0x374d90: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x374d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_374d94:
    // 0x374d94: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x374d94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_374d98:
    // 0x374d98: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x374d98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_374d9c:
    // 0x374d9c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x374d9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_374da0:
    // 0x374da0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x374da0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_374da4:
    // 0x374da4: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
label_374da8:
    if (ctx->pc == 0x374DA8u) {
        ctx->pc = 0x374DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374DA4u;
        // 0x374da8: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x374DACu;
        goto label_374dac;
    }
    ctx->pc = 0x374DA4u;
    {
        const bool branch_taken_0x374da4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x374DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374DA4u;
        // 0x374da8: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x374da4) {
            ctx->pc = 0x374DBCu;
            goto label_374dbc;
        }
    }
    ctx->pc = 0x374DACu;
label_374dac:
    // 0x374dac: 0x460d1034  c.lt.s      $f2, $f13
    ctx->pc = 0x374dacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_374db0:
    // 0x374db0: 0x0  nop
    ctx->pc = 0x374db0u;
    // NOP
label_374db4:
    // 0x374db4: 0x450204ab  bc1fl       . + 4 + (0x4AB << 2)
label_374db8:
    if (ctx->pc == 0x374DB8u) {
        ctx->pc = 0x374DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374DB4u;
        // 0x374db8: 0xe33825  or          $a3, $a3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374DBCu;
        goto label_374dbc;
    }
    ctx->pc = 0x374DB4u;
    {
        const bool branch_taken_0x374db4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x374db4) {
            ctx->pc = 0x374DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374DB4u;
            // 0x374db8: 0xe33825  or          $a3, $a3, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x376064u;
            goto label_376064;
        }
    }
    ctx->pc = 0x374DBCu;
label_374dbc:
    // 0x374dbc: 0x6ba50077  ldl         $a1, 0x77($sp)
    ctx->pc = 0x374dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_374dc0:
    // 0x374dc0: 0x6fa50070  ldr         $a1, 0x70($sp)
    ctx->pc = 0x374dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_374dc4:
    // 0x374dc4: 0x8fa80078  lw          $t0, 0x78($sp)
    ctx->pc = 0x374dc4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_374dc8:
    // 0x374dc8: 0xb0c50007  sdl         $a1, 0x7($a2)
    ctx->pc = 0x374dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_374dcc:
    // 0x374dcc: 0xb4c50000  sdr         $a1, 0x0($a2)
    ctx->pc = 0x374dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_374dd0:
    // 0x374dd0: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x374dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
label_374dd4:
    // 0x374dd4: 0x100004a2  b           . + 4 + (0x4A2 << 2)
label_374dd8:
    if (ctx->pc == 0x374DD8u) {
        ctx->pc = 0x374DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374DD4u;
        // 0x374dd8: 0x46001346  mov.s       $f13, $f2 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x374DDCu;
        goto label_374ddc;
    }
    ctx->pc = 0x374DD4u;
    {
        const bool branch_taken_0x374dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374DD4u;
        // 0x374dd8: 0x46001346  mov.s       $f13, $f2 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x374dd4) {
            ctx->pc = 0x376060u;
            goto label_376060;
        }
    }
    ctx->pc = 0x374DDCu;
label_374ddc:
    // 0x374ddc: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x374ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_374de0:
    // 0x374de0: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x374de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_374de4:
    // 0x374de4: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x374de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_374de8:
    // 0x374de8: 0xc4860004  lwc1        $f6, 0x4($a0)
    ctx->pc = 0x374de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_374dec:
    // 0x374dec: 0xc4e50008  lwc1        $f5, 0x8($a3)
    ctx->pc = 0x374decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_374df0:
    // 0x374df0: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x374df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_374df4:
    // 0x374df4: 0x46033041  sub.s       $f1, $f6, $f3
    ctx->pc = 0x374df4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
label_374df8:
    // 0x374df8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x374df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374dfc:
    // 0x374dfc: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x374dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_374e00:
    // 0x374e00: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x374e00u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
label_374e04:
    // 0x374e04: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x374e04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_374e08:
    // 0x374e08: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x374e08u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_374e0c:
    // 0x374e0c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x374e0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_374e10:
    // 0x374e10: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x374e10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_374e14:
    // 0x374e14: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x374e14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_374e18:
    // 0x374e18: 0xe7a101b4  swc1        $f1, 0x1B4($sp)
    ctx->pc = 0x374e18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_374e1c:
    // 0x374e1c: 0x46062281  sub.s       $f10, $f4, $f6
    ctx->pc = 0x374e1cu;
    ctx->f[10] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
label_374e20:
    // 0x374e20: 0xe7aa0084  swc1        $f10, 0x84($sp)
    ctx->pc = 0x374e20u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_374e24:
    // 0x374e24: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x374e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_374e28:
    // 0x374e28: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x374e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374e2c:
    // 0x374e2c: 0x46000a41  sub.s       $f9, $f1, $f0
    ctx->pc = 0x374e2cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_374e30:
    // 0x374e30: 0xe7a90088  swc1        $f9, 0x88($sp)
    ctx->pc = 0x374e30u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_374e34:
    // 0x374e34: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x374e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374e38:
    // 0x374e38: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x374e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_374e3c:
    // 0x374e3c: 0x46003801  sub.s       $f0, $f7, $f0
    ctx->pc = 0x374e3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_374e40:
    // 0x374e40: 0x46015841  sub.s       $f1, $f11, $f1
    ctx->pc = 0x374e40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[11], ctx->f[1]);
label_374e44:
    // 0x374e44: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x374e44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
label_374e48:
    // 0x374e48: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x374e48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
label_374e4c:
    // 0x374e4c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x374e4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_374e50:
    // 0x374e50: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x374e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_374e54:
    // 0x374e54: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x374e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_374e58:
    // 0x374e58: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x374e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
label_374e5c:
    // 0x374e5c: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x374e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_374e60:
    // 0x374e60: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x374e60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_374e64:
    // 0x374e64: 0x10600060  beqz        $v1, . + 4 + (0x60 << 2)
label_374e68:
    if (ctx->pc == 0x374E68u) {
        ctx->pc = 0x374E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374E64u;
        // 0x374e68: 0x46005186  mov.s       $f6, $f10 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[10]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x374E6Cu;
        goto label_374e6c;
    }
    ctx->pc = 0x374E64u;
    {
        const bool branch_taken_0x374e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x374E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374E64u;
        // 0x374e68: 0x46005186  mov.s       $f6, $f10 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x374e64) {
            ctx->pc = 0x374FE8u;
            goto label_374fe8;
        }
    }
    ctx->pc = 0x374E6Cu;
label_374e6c:
    // 0x374e6c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x374e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_374e70:
    // 0x374e70: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x374e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374e74:
    // 0x374e74: 0x46065942  mul.s       $f5, $f11, $f6
    ctx->pc = 0x374e74u;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
label_374e78:
    // 0x374e78: 0x46004906  mov.s       $f4, $f9
    ctx->pc = 0x374e78u;
    ctx->f[4] = FPU_MOV_S(ctx->f[9]);
label_374e7c:
    // 0x374e7c: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x374e7cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_374e80:
    // 0x374e80: 0x460439c2  mul.s       $f7, $f7, $f4
    ctx->pc = 0x374e80u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_374e84:
    // 0x374e84: 0xe7a80080  swc1        $f8, 0x80($sp)
    ctx->pc = 0x374e84u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_374e88:
    // 0x374e88: 0x460860c2  mul.s       $f3, $f12, $f8
    ctx->pc = 0x374e88u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[8]);
label_374e8c:
    // 0x374e8c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x374e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374e90:
    // 0x374e90: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x374e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_374e94:
    // 0x374e94: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x374e94u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
label_374e98:
    // 0x374e98: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x374e98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
label_374e9c:
    // 0x374e9c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x374e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_374ea0:
    // 0x374ea0: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x374ea0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_374ea4:
    // 0x374ea4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x374ea4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_374ea8:
    // 0x374ea8: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x374ea8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
label_374eac:
    // 0x374eac: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x374eacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_374eb0:
    // 0x374eb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x374eb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_374eb4:
    // 0x374eb4: 0x46001901  sub.s       $f4, $f3, $f0
    ctx->pc = 0x374eb4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_374eb8:
    // 0x374eb8: 0x460d2036  c.le.s      $f4, $f13
    ctx->pc = 0x374eb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_374ebc:
    // 0x374ebc: 0x0  nop
    ctx->pc = 0x374ebcu;
    // NOP
label_374ec0:
    // 0x374ec0: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_374ec4:
    if (ctx->pc == 0x374EC4u) {
        ctx->pc = 0x374EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374EC0u;
        // 0x374ec4: 0x46084002  mul.s       $f0, $f8, $f8 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x374EC8u;
        goto label_374ec8;
    }
    ctx->pc = 0x374EC0u;
    {
        const bool branch_taken_0x374ec0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x374ec0) {
            ctx->pc = 0x374EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374EC0u;
            // 0x374ec4: 0x46084002  mul.s       $f0, $f8, $f8 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x374EE8u;
            goto label_374ee8;
        }
    }
    ctx->pc = 0x374EC8u;
label_374ec8:
    // 0x374ec8: 0x688b0007  ldl         $t3, 0x7($a0)
    ctx->pc = 0x374ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_374ecc:
    // 0x374ecc: 0x6c8b0000  ldr         $t3, 0x0($a0)
    ctx->pc = 0x374eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_374ed0:
    // 0x374ed0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x374ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_374ed4:
    // 0x374ed4: 0xb3ab0097  sdl         $t3, 0x97($sp)
    ctx->pc = 0x374ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_374ed8:
    // 0x374ed8: 0xb7ab0090  sdr         $t3, 0x90($sp)
    ctx->pc = 0x374ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_374edc:
    // 0x374edc: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x374edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
label_374ee0:
    // 0x374ee0: 0x1000002b  b           . + 4 + (0x2B << 2)
label_374ee4:
    if (ctx->pc == 0x374EE4u) {
        ctx->pc = 0x374EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374EE0u;
        // 0x374ee4: 0xc7a30090  lwc1        $f3, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x374EE8u;
        goto label_374ee8;
    }
    ctx->pc = 0x374EE0u;
    {
        const bool branch_taken_0x374ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374EE0u;
        // 0x374ee4: 0xc7a30090  lwc1        $f3, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x374ee0) {
            ctx->pc = 0x374F90u;
            goto label_374f90;
        }
    }
    ctx->pc = 0x374EE8u;
label_374ee8:
    // 0x374ee8: 0x460a5042  mul.s       $f1, $f10, $f10
    ctx->pc = 0x374ee8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
label_374eec:
    // 0x374eec: 0x46094882  mul.s       $f2, $f9, $f9
    ctx->pc = 0x374eecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
label_374ef0:
    // 0x374ef0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x374ef0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_374ef4:
    // 0x374ef4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x374ef4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_374ef8:
    // 0x374ef8: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x374ef8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_374efc:
    // 0x374efc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_374f00:
    if (ctx->pc == 0x374F00u) {
        ctx->pc = 0x374F04u;
        goto label_374f04;
    }
    ctx->pc = 0x374EFCu;
    {
        const bool branch_taken_0x374efc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x374efc) {
            ctx->pc = 0x374F14u;
            goto label_374f14;
        }
    }
    ctx->pc = 0x374F04u;
label_374f04:
    // 0x374f04: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x374f04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_374f08:
    // 0x374f08: 0x0  nop
    ctx->pc = 0x374f08u;
    // NOP
label_374f0c:
    // 0x374f0c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_374f10:
    if (ctx->pc == 0x374F10u) {
        ctx->pc = 0x374F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374F0Cu;
        // 0x374f10: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374F14u;
        goto label_374f14;
    }
    ctx->pc = 0x374F0Cu;
    {
        const bool branch_taken_0x374f0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x374f0c) {
            ctx->pc = 0x374F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374F0Cu;
            // 0x374f10: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x374F14u;
            goto label_374f14;
        }
    }
    ctx->pc = 0x374F14u;
label_374f14:
    // 0x374f14: 0x11200016  beqz        $t1, . + 4 + (0x16 << 2)
label_374f18:
    if (ctx->pc == 0x374F18u) {
        ctx->pc = 0x374F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374F14u;
        // 0x374f18: 0xc7a10080  lwc1        $f1, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x374F1Cu;
        goto label_374f1c;
    }
    ctx->pc = 0x374F14u;
    {
        const bool branch_taken_0x374f14 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x374F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374F14u;
        // 0x374f18: 0xc7a10080  lwc1        $f1, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x374f14) {
            ctx->pc = 0x374F70u;
            goto label_374f70;
        }
    }
    ctx->pc = 0x374F1Cu;
label_374f1c:
    // 0x374f1c: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x374f1cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
label_374f20:
    // 0x374f20: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x374f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_374f24:
    // 0x374f24: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x374f24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_374f28:
    // 0x374f28: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x374f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_374f2c:
    // 0x374f2c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x374f2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_374f30:
    // 0x374f30: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x374f30u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_374f34:
    // 0x374f34: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x374f34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_374f38:
    // 0x374f38: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x374f38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_374f3c:
    // 0x374f3c: 0xe7a30098  swc1        $f3, 0x98($sp)
    ctx->pc = 0x374f3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_374f40:
    // 0x374f40: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x374f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_374f44:
    // 0x374f44: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x374f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374f48:
    // 0x374f48: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x374f48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_374f4c:
    // 0x374f4c: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x374f4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_374f50:
    // 0x374f50: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x374f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374f54:
    // 0x374f54: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x374f54u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_374f58:
    // 0x374f58: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x374f58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_374f5c:
    // 0x374f5c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x374f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374f60:
    // 0x374f60: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x374f60u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_374f64:
    // 0x374f64: 0x10000009  b           . + 4 + (0x9 << 2)
label_374f68:
    if (ctx->pc == 0x374F68u) {
        ctx->pc = 0x374F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374F64u;
        // 0x374f68: 0xe7a30098  swc1        $f3, 0x98($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x374F6Cu;
        goto label_374f6c;
    }
    ctx->pc = 0x374F64u;
    {
        const bool branch_taken_0x374f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374F64u;
        // 0x374f68: 0xe7a30098  swc1        $f3, 0x98($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x374f64) {
            ctx->pc = 0x374F8Cu;
            goto label_374f8c;
        }
    }
    ctx->pc = 0x374F6Cu;
label_374f6c:
    // 0x374f6c: 0x0  nop
    ctx->pc = 0x374f6cu;
    // NOP
label_374f70:
    // 0x374f70: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x374f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_374f74:
    // 0x374f74: 0x684a0007  ldl         $t2, 0x7($v0)
    ctx->pc = 0x374f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_374f78:
    // 0x374f78: 0x6c4a0000  ldr         $t2, 0x0($v0)
    ctx->pc = 0x374f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_374f7c:
    // 0x374f7c: 0x8c4b0008  lw          $t3, 0x8($v0)
    ctx->pc = 0x374f7cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_374f80:
    // 0x374f80: 0xb3aa0097  sdl         $t2, 0x97($sp)
    ctx->pc = 0x374f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_374f84:
    // 0x374f84: 0xb7aa0090  sdr         $t2, 0x90($sp)
    ctx->pc = 0x374f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_374f88:
    // 0x374f88: 0xafab0098  sw          $t3, 0x98($sp)
    ctx->pc = 0x374f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 11));
label_374f8c:
    // 0x374f8c: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x374f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_374f90:
    // 0x374f90: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x374f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_374f94:
    // 0x374f94: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x374f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_374f98:
    // 0x374f98: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x374f98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_374f9c:
    // 0x374f9c: 0xc7a40094  lwc1        $f4, 0x94($sp)
    ctx->pc = 0x374f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_374fa0:
    // 0x374fa0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x374fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374fa4:
    // 0x374fa4: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x374fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_374fa8:
    // 0x374fa8: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x374fa8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_374fac:
    // 0x374fac: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x374facu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_374fb0:
    // 0x374fb0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x374fb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_374fb4:
    // 0x374fb4: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x374fb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_374fb8:
    // 0x374fb8: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x374fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_374fbc:
    // 0x374fbc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x374fbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_374fc0:
    // 0x374fc0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x374fc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_374fc4:
    // 0x374fc4: 0x6ba70097  ldl         $a3, 0x97($sp)
    ctx->pc = 0x374fc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_374fc8:
    // 0x374fc8: 0x6fa70090  ldr         $a3, 0x90($sp)
    ctx->pc = 0x374fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_374fcc:
    // 0x374fcc: 0x8faa0098  lw          $t2, 0x98($sp)
    ctx->pc = 0x374fccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_374fd0:
    // 0x374fd0: 0xb0c70007  sdl         $a3, 0x7($a2)
    ctx->pc = 0x374fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_374fd4:
    // 0x374fd4: 0xb4c70000  sdr         $a3, 0x0($a2)
    ctx->pc = 0x374fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_374fd8:
    // 0x374fd8: 0xacca0008  sw          $t2, 0x8($a2)
    ctx->pc = 0x374fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 10));
label_374fdc:
    // 0x374fdc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x374fdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_374fe0:
    // 0x374fe0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x374fe0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_374fe4:
    // 0x374fe4: 0x46000b40  add.s       $f13, $f1, $f0
    ctx->pc = 0x374fe4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_374fe8:
    // 0x374fe8: 0x1520041e  bnez        $t1, . + 4 + (0x41E << 2)
label_374fec:
    if (ctx->pc == 0x374FECu) {
        ctx->pc = 0x374FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374FE8u;
        // 0x374fec: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374FF0u;
        goto label_374ff0;
    }
    ctx->pc = 0x374FE8u;
    {
        const bool branch_taken_0x374fe8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x374FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374FE8u;
        // 0x374fec: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374fe8) {
            ctx->pc = 0x376064u;
            goto label_376064;
        }
    }
    ctx->pc = 0x374FF0u;
label_374ff0:
    // 0x374ff0: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x374ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_374ff4:
    // 0x374ff4: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x374ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_374ff8:
    // 0x374ff8: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x374ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_374ffc:
    // 0x374ffc: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x374ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375000:
    // 0x375000: 0x46000a81  sub.s       $f10, $f1, $f0
    ctx->pc = 0x375000u;
    ctx->f[10] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_375004:
    // 0x375004: 0xe7aa00a4  swc1        $f10, 0xA4($sp)
    ctx->pc = 0x375004u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_375008:
    // 0x375008: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x375008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37500c:
    // 0x37500c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x37500cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375010:
    // 0x375010: 0x46000a41  sub.s       $f9, $f1, $f0
    ctx->pc = 0x375010u;
    ctx->f[9] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_375014:
    // 0x375014: 0xe7a900a8  swc1        $f9, 0xA8($sp)
    ctx->pc = 0x375014u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_375018:
    // 0x375018: 0xc7a70018  lwc1        $f7, 0x18($sp)
    ctx->pc = 0x375018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_37501c:
    // 0x37501c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x37501cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375020:
    // 0x375020: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x375020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375024:
    // 0x375024: 0xc7a60014  lwc1        $f6, 0x14($sp)
    ctx->pc = 0x375024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_375028:
    // 0x375028: 0x46003801  sub.s       $f0, $f7, $f0
    ctx->pc = 0x375028u;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_37502c:
    // 0x37502c: 0x46013041  sub.s       $f1, $f6, $f1
    ctx->pc = 0x37502cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
label_375030:
    // 0x375030: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x375030u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
label_375034:
    // 0x375034: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x375034u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
label_375038:
    // 0x375038: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x375038u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_37503c:
    // 0x37503c: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x37503cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_375040:
    // 0x375040: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x375040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
label_375044:
    // 0x375044: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x375044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
label_375048:
    // 0x375048: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x375048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_37504c:
    // 0x37504c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x37504cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_375050:
    // 0x375050: 0x10600068  beqz        $v1, . + 4 + (0x68 << 2)
label_375054:
    if (ctx->pc == 0x375054u) {
        ctx->pc = 0x375054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375050u;
        // 0x375054: 0x46005146  mov.s       $f5, $f10 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[10]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x375058u;
        goto label_375058;
    }
    ctx->pc = 0x375050u;
    {
        const bool branch_taken_0x375050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x375054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375050u;
        // 0x375054: 0x46005146  mov.s       $f5, $f10 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x375050) {
            ctx->pc = 0x3751F4u;
            goto label_3751f4;
        }
    }
    ctx->pc = 0x375058u;
label_375058:
    // 0x375058: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x375058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37505c:
    // 0x37505c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x37505cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375060:
    // 0x375060: 0x46053182  mul.s       $f6, $f6, $f5
    ctx->pc = 0x375060u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
label_375064:
    // 0x375064: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x375064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_375068:
    // 0x375068: 0x46004906  mov.s       $f4, $f9
    ctx->pc = 0x375068u;
    ctx->f[4] = FPU_MOV_S(ctx->f[9]);
label_37506c:
    // 0x37506c: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x37506cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_375070:
    // 0x375070: 0x460439c2  mul.s       $f7, $f7, $f4
    ctx->pc = 0x375070u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_375074:
    // 0x375074: 0x44805800  mtc1        $zero, $f11
    ctx->pc = 0x375074u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_375078:
    // 0x375078: 0xe7a800a0  swc1        $f8, 0xA0($sp)
    ctx->pc = 0x375078u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_37507c:
    // 0x37507c: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x37507cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
label_375080:
    // 0x375080: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x375080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375084:
    // 0x375084: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x375084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_375088:
    // 0x375088: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x375088u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
label_37508c:
    // 0x37508c: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x37508cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
label_375090:
    // 0x375090: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x375090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375094:
    // 0x375094: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x375094u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_375098:
    // 0x375098: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x375098u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_37509c:
    // 0x37509c: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x37509cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
label_3750a0:
    // 0x3750a0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3750a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_3750a4:
    // 0x3750a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3750a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3750a8:
    // 0x3750a8: 0x46001181  sub.s       $f6, $f2, $f0
    ctx->pc = 0x3750a8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3750ac:
    // 0x3750ac: 0x460b3036  c.le.s      $f6, $f11
    ctx->pc = 0x3750acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3750b0:
    // 0x3750b0: 0x0  nop
    ctx->pc = 0x3750b0u;
    // NOP
label_3750b4:
    // 0x3750b4: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_3750b8:
    if (ctx->pc == 0x3750B8u) {
        ctx->pc = 0x3750B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3750B4u;
        // 0x3750b8: 0x46084002  mul.s       $f0, $f8, $f8 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3750BCu;
        goto label_3750bc;
    }
    ctx->pc = 0x3750B4u;
    {
        const bool branch_taken_0x3750b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3750b4) {
            ctx->pc = 0x3750B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3750B4u;
            // 0x3750b8: 0x46084002  mul.s       $f0, $f8, $f8 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3750E0u;
            goto label_3750e0;
        }
    }
    ctx->pc = 0x3750BCu;
label_3750bc:
    // 0x3750bc: 0x68850007  ldl         $a1, 0x7($a0)
    ctx->pc = 0x3750bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_3750c0:
    // 0x3750c0: 0x6c850000  ldr         $a1, 0x0($a0)
    ctx->pc = 0x3750c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_3750c4:
    // 0x3750c4: 0x8c8a0008  lw          $t2, 0x8($a0)
    ctx->pc = 0x3750c4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3750c8:
    // 0x3750c8: 0xb3a500b7  sdl         $a1, 0xB7($sp)
    ctx->pc = 0x3750c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3750cc:
    // 0x3750cc: 0xb7a500b0  sdr         $a1, 0xB0($sp)
    ctx->pc = 0x3750ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3750d0:
    // 0x3750d0: 0xafaa00b8  sw          $t2, 0xB8($sp)
    ctx->pc = 0x3750d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 10));
label_3750d4:
    // 0x3750d4: 0x1000002c  b           . + 4 + (0x2C << 2)
label_3750d8:
    if (ctx->pc == 0x3750D8u) {
        ctx->pc = 0x3750D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3750D4u;
        // 0x3750d8: 0xc7a300b0  lwc1        $f3, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3750DCu;
        goto label_3750dc;
    }
    ctx->pc = 0x3750D4u;
    {
        const bool branch_taken_0x3750d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3750D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3750D4u;
        // 0x3750d8: 0xc7a300b0  lwc1        $f3, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3750d4) {
            ctx->pc = 0x375188u;
            goto label_375188;
        }
    }
    ctx->pc = 0x3750DCu;
label_3750dc:
    // 0x3750dc: 0x0  nop
    ctx->pc = 0x3750dcu;
    // NOP
label_3750e0:
    // 0x3750e0: 0x460a5042  mul.s       $f1, $f10, $f10
    ctx->pc = 0x3750e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
label_3750e4:
    // 0x3750e4: 0x46094882  mul.s       $f2, $f9, $f9
    ctx->pc = 0x3750e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
label_3750e8:
    // 0x3750e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3750e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3750ec:
    // 0x3750ec: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3750ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3750f0:
    // 0x3750f0: 0x46005834  c.lt.s      $f11, $f0
    ctx->pc = 0x3750f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3750f4:
    // 0x3750f4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_3750f8:
    if (ctx->pc == 0x3750F8u) {
        ctx->pc = 0x3750FCu;
        goto label_3750fc;
    }
    ctx->pc = 0x3750F4u;
    {
        const bool branch_taken_0x3750f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3750f4) {
            ctx->pc = 0x37510Cu;
            goto label_37510c;
        }
    }
    ctx->pc = 0x3750FCu;
label_3750fc:
    // 0x3750fc: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x3750fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_375100:
    // 0x375100: 0x0  nop
    ctx->pc = 0x375100u;
    // NOP
label_375104:
    // 0x375104: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_375108:
    if (ctx->pc == 0x375108u) {
        ctx->pc = 0x375108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375104u;
        // 0x375108: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37510Cu;
        goto label_37510c;
    }
    ctx->pc = 0x375104u;
    {
        const bool branch_taken_0x375104 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x375104) {
            ctx->pc = 0x375108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x375104u;
            // 0x375108: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37510Cu;
            goto label_37510c;
        }
    }
    ctx->pc = 0x37510Cu;
label_37510c:
    // 0x37510c: 0x11200016  beqz        $t1, . + 4 + (0x16 << 2)
label_375110:
    if (ctx->pc == 0x375110u) {
        ctx->pc = 0x375110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37510Cu;
        // 0x375110: 0xc7a100a0  lwc1        $f1, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x375114u;
        goto label_375114;
    }
    ctx->pc = 0x37510Cu;
    {
        const bool branch_taken_0x37510c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x375110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37510Cu;
        // 0x375110: 0xc7a100a0  lwc1        $f1, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37510c) {
            ctx->pc = 0x375168u;
            goto label_375168;
        }
    }
    ctx->pc = 0x375114u;
label_375114:
    // 0x375114: 0x46003183  div.s       $f6, $f6, $f0
    ctx->pc = 0x375114u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[6], ctx->f[0]); }
label_375118:
    // 0x375118: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x375118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37511c:
    // 0x37511c: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x37511cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_375120:
    // 0x375120: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x375120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_375124:
    // 0x375124: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x375124u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_375128:
    // 0x375128: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x375128u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
label_37512c:
    // 0x37512c: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x37512cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_375130:
    // 0x375130: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x375130u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_375134:
    // 0x375134: 0xe7a300b8  swc1        $f3, 0xB8($sp)
    ctx->pc = 0x375134u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_375138:
    // 0x375138: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x375138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_37513c:
    // 0x37513c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x37513cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375140:
    // 0x375140: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x375140u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_375144:
    // 0x375144: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x375144u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_375148:
    // 0x375148: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x375148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37514c:
    // 0x37514c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x37514cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_375150:
    // 0x375150: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x375150u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_375154:
    // 0x375154: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x375154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375158:
    // 0x375158: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x375158u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_37515c:
    // 0x37515c: 0x10000009  b           . + 4 + (0x9 << 2)
label_375160:
    if (ctx->pc == 0x375160u) {
        ctx->pc = 0x375160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37515Cu;
        // 0x375160: 0xe7a300b8  swc1        $f3, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x375164u;
        goto label_375164;
    }
    ctx->pc = 0x37515Cu;
    {
        const bool branch_taken_0x37515c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37515Cu;
        // 0x375160: 0xe7a300b8  swc1        $f3, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37515c) {
            ctx->pc = 0x375184u;
            goto label_375184;
        }
    }
    ctx->pc = 0x375164u;
label_375164:
    // 0x375164: 0x0  nop
    ctx->pc = 0x375164u;
    // NOP
label_375168:
    // 0x375168: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x375168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_37516c:
    // 0x37516c: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x37516cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_375170:
    // 0x375170: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x375170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_375174:
    // 0x375174: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x375174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_375178:
    // 0x375178: 0xb3a400b7  sdl         $a0, 0xB7($sp)
    ctx->pc = 0x375178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_37517c:
    // 0x37517c: 0xb7a400b0  sdr         $a0, 0xB0($sp)
    ctx->pc = 0x37517cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_375180:
    // 0x375180: 0xafa500b8  sw          $a1, 0xB8($sp)
    ctx->pc = 0x375180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 5));
label_375184:
    // 0x375184: 0xc7a300b0  lwc1        $f3, 0xB0($sp)
    ctx->pc = 0x375184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_375188:
    // 0x375188: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x375188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37518c:
    // 0x37518c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x37518cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375190:
    // 0x375190: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x375190u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_375194:
    // 0x375194: 0xc7a400b4  lwc1        $f4, 0xB4($sp)
    ctx->pc = 0x375194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_375198:
    // 0x375198: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x375198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37519c:
    // 0x37519c: 0xc7a300b8  lwc1        $f3, 0xB8($sp)
    ctx->pc = 0x37519cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3751a0:
    // 0x3751a0: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x3751a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_3751a4:
    // 0x3751a4: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x3751a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3751a8:
    // 0x3751a8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3751a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_3751ac:
    // 0x3751ac: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x3751acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_3751b0:
    // 0x3751b0: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x3751b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_3751b4:
    // 0x3751b4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x3751b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_3751b8:
    // 0x3751b8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3751b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_3751bc:
    // 0x3751bc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3751bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_3751c0:
    // 0x3751c0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x3751c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_3751c4:
    // 0x3751c4: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
label_3751c8:
    if (ctx->pc == 0x3751C8u) {
        ctx->pc = 0x3751C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3751C4u;
        // 0x3751c8: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3751CCu;
        goto label_3751cc;
    }
    ctx->pc = 0x3751C4u;
    {
        const bool branch_taken_0x3751c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3751C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3751C4u;
        // 0x3751c8: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3751c4) {
            ctx->pc = 0x3751D8u;
            goto label_3751d8;
        }
    }
    ctx->pc = 0x3751CCu;
label_3751cc:
    // 0x3751cc: 0x460d1034  c.lt.s      $f2, $f13
    ctx->pc = 0x3751ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3751d0:
    // 0x3751d0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_3751d4:
    if (ctx->pc == 0x3751D4u) {
        ctx->pc = 0x3751D8u;
        goto label_3751d8;
    }
    ctx->pc = 0x3751D0u;
    {
        const bool branch_taken_0x3751d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3751d0) {
            ctx->pc = 0x3751F4u;
            goto label_3751f4;
        }
    }
    ctx->pc = 0x3751D8u;
label_3751d8:
    // 0x3751d8: 0x6ba200b7  ldl         $v0, 0xB7($sp)
    ctx->pc = 0x3751d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3751dc:
    // 0x3751dc: 0x6fa200b0  ldr         $v0, 0xB0($sp)
    ctx->pc = 0x3751dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3751e0:
    // 0x3751e0: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x3751e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_3751e4:
    // 0x3751e4: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x3751e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3751e8:
    // 0x3751e8: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x3751e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3751ec:
    // 0x3751ec: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x3751ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_3751f0:
    // 0x3751f0: 0x46001346  mov.s       $f13, $f2
    ctx->pc = 0x3751f0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[2]);
label_3751f4:
    // 0x3751f4: 0x1520039b  bnez        $t1, . + 4 + (0x39B << 2)
label_3751f8:
    if (ctx->pc == 0x3751F8u) {
        ctx->pc = 0x3751F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3751F4u;
        // 0x3751f8: 0xe33825  or          $a3, $a3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3751FCu;
        goto label_3751fc;
    }
    ctx->pc = 0x3751F4u;
    {
        const bool branch_taken_0x3751f4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3751F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3751F4u;
        // 0x3751f8: 0xe33825  or          $a3, $a3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3751f4) {
            ctx->pc = 0x376064u;
            goto label_376064;
        }
    }
    ctx->pc = 0x3751FCu;
label_3751fc:
    // 0x3751fc: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x3751fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_375200:
    // 0x375200: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x375200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_375204:
    // 0x375204: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x375204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375208:
    // 0x375208: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x375208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37520c:
    // 0x37520c: 0x46000a81  sub.s       $f10, $f1, $f0
    ctx->pc = 0x37520cu;
    ctx->f[10] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_375210:
    // 0x375210: 0xe7aa00c4  swc1        $f10, 0xC4($sp)
    ctx->pc = 0x375210u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_375214:
    // 0x375214: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x375214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375218:
    // 0x375218: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x375218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37521c:
    // 0x37521c: 0x46000a41  sub.s       $f9, $f1, $f0
    ctx->pc = 0x37521cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_375220:
    // 0x375220: 0xe7a900c8  swc1        $f9, 0xC8($sp)
    ctx->pc = 0x375220u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_375224:
    // 0x375224: 0xc7a70018  lwc1        $f7, 0x18($sp)
    ctx->pc = 0x375224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_375228:
    // 0x375228: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x375228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37522c:
    // 0x37522c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x37522cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375230:
    // 0x375230: 0xc7a60014  lwc1        $f6, 0x14($sp)
    ctx->pc = 0x375230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_375234:
    // 0x375234: 0x46003801  sub.s       $f0, $f7, $f0
    ctx->pc = 0x375234u;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_375238:
    // 0x375238: 0x46013041  sub.s       $f1, $f6, $f1
    ctx->pc = 0x375238u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
label_37523c:
    // 0x37523c: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x37523cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
label_375240:
    // 0x375240: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x375240u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
label_375244:
    // 0x375244: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x375244u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_375248:
    // 0x375248: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x375248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
label_37524c:
    // 0x37524c: 0x8fa301bc  lw          $v1, 0x1BC($sp)
    ctx->pc = 0x37524cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_375250:
    // 0x375250: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x375250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
label_375254:
    // 0x375254: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x375254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_375258:
    // 0x375258: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x375258u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_37525c:
    // 0x37525c: 0x10600380  beqz        $v1, . + 4 + (0x380 << 2)
label_375260:
    if (ctx->pc == 0x375260u) {
        ctx->pc = 0x375260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37525Cu;
        // 0x375260: 0x46005146  mov.s       $f5, $f10 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[10]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x375264u;
        goto label_375264;
    }
    ctx->pc = 0x37525Cu;
    {
        const bool branch_taken_0x37525c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x375260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37525Cu;
        // 0x375260: 0x46005146  mov.s       $f5, $f10 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37525c) {
            ctx->pc = 0x376060u;
            goto label_376060;
        }
    }
    ctx->pc = 0x375264u;
label_375264:
    // 0x375264: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x375264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375268:
    // 0x375268: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x375268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37526c:
    // 0x37526c: 0x46053182  mul.s       $f6, $f6, $f5
    ctx->pc = 0x37526cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
label_375270:
    // 0x375270: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x375270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_375274:
    // 0x375274: 0x46004906  mov.s       $f4, $f9
    ctx->pc = 0x375274u;
    ctx->f[4] = FPU_MOV_S(ctx->f[9]);
label_375278:
    // 0x375278: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x375278u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37527c:
    // 0x37527c: 0x460439c2  mul.s       $f7, $f7, $f4
    ctx->pc = 0x37527cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_375280:
    // 0x375280: 0x44805800  mtc1        $zero, $f11
    ctx->pc = 0x375280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_375284:
    // 0x375284: 0xe7a800c0  swc1        $f8, 0xC0($sp)
    ctx->pc = 0x375284u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_375288:
    // 0x375288: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x375288u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
label_37528c:
    // 0x37528c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x37528cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375290:
    // 0x375290: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x375290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_375294:
    // 0x375294: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x375294u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
label_375298:
    // 0x375298: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x375298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
label_37529c:
    // 0x37529c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x37529cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3752a0:
    // 0x3752a0: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x3752a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_3752a4:
    // 0x3752a4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3752a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_3752a8:
    // 0x3752a8: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x3752a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
label_3752ac:
    // 0x3752ac: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3752acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_3752b0:
    // 0x3752b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3752b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3752b4:
    // 0x3752b4: 0x46001181  sub.s       $f6, $f2, $f0
    ctx->pc = 0x3752b4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3752b8:
    // 0x3752b8: 0x460b3036  c.le.s      $f6, $f11
    ctx->pc = 0x3752b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3752bc:
    // 0x3752bc: 0x0  nop
    ctx->pc = 0x3752bcu;
    // NOP
label_3752c0:
    // 0x3752c0: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_3752c4:
    if (ctx->pc == 0x3752C4u) {
        ctx->pc = 0x3752C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3752C0u;
        // 0x3752c4: 0x46084002  mul.s       $f0, $f8, $f8 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3752C8u;
        goto label_3752c8;
    }
    ctx->pc = 0x3752C0u;
    {
        const bool branch_taken_0x3752c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3752c0) {
            ctx->pc = 0x3752C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3752C0u;
            // 0x3752c4: 0x46084002  mul.s       $f0, $f8, $f8 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3752E8u;
            goto label_3752e8;
        }
    }
    ctx->pc = 0x3752C8u;
label_3752c8:
    // 0x3752c8: 0x688b0007  ldl         $t3, 0x7($a0)
    ctx->pc = 0x3752c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_3752cc:
    // 0x3752cc: 0x6c8b0000  ldr         $t3, 0x0($a0)
    ctx->pc = 0x3752ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_3752d0:
    // 0x3752d0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3752d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3752d4:
    // 0x3752d4: 0xb3ab00d7  sdl         $t3, 0xD7($sp)
    ctx->pc = 0x3752d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3752d8:
    // 0x3752d8: 0xb7ab00d0  sdr         $t3, 0xD0($sp)
    ctx->pc = 0x3752d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3752dc:
    // 0x3752dc: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x3752dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
label_3752e0:
    // 0x3752e0: 0x1000002b  b           . + 4 + (0x2B << 2)
label_3752e4:
    if (ctx->pc == 0x3752E4u) {
        ctx->pc = 0x3752E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3752E0u;
        // 0x3752e4: 0xc7a300d0  lwc1        $f3, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3752E8u;
        goto label_3752e8;
    }
    ctx->pc = 0x3752E0u;
    {
        const bool branch_taken_0x3752e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3752E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3752E0u;
        // 0x3752e4: 0xc7a300d0  lwc1        $f3, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3752e0) {
            ctx->pc = 0x375390u;
            goto label_375390;
        }
    }
    ctx->pc = 0x3752E8u;
label_3752e8:
    // 0x3752e8: 0x460a5042  mul.s       $f1, $f10, $f10
    ctx->pc = 0x3752e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
label_3752ec:
    // 0x3752ec: 0x46094882  mul.s       $f2, $f9, $f9
    ctx->pc = 0x3752ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
label_3752f0:
    // 0x3752f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3752f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3752f4:
    // 0x3752f4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3752f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3752f8:
    // 0x3752f8: 0x46005834  c.lt.s      $f11, $f0
    ctx->pc = 0x3752f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3752fc:
    // 0x3752fc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_375300:
    if (ctx->pc == 0x375300u) {
        ctx->pc = 0x375304u;
        goto label_375304;
    }
    ctx->pc = 0x3752FCu;
    {
        const bool branch_taken_0x3752fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3752fc) {
            ctx->pc = 0x375314u;
            goto label_375314;
        }
    }
    ctx->pc = 0x375304u;
label_375304:
    // 0x375304: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x375304u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_375308:
    // 0x375308: 0x0  nop
    ctx->pc = 0x375308u;
    // NOP
label_37530c:
    // 0x37530c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_375310:
    if (ctx->pc == 0x375310u) {
        ctx->pc = 0x375310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37530Cu;
        // 0x375310: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375314u;
        goto label_375314;
    }
    ctx->pc = 0x37530Cu;
    {
        const bool branch_taken_0x37530c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37530c) {
            ctx->pc = 0x375310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37530Cu;
            // 0x375310: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x375314u;
            goto label_375314;
        }
    }
    ctx->pc = 0x375314u;
label_375314:
    // 0x375314: 0x11200016  beqz        $t1, . + 4 + (0x16 << 2)
label_375318:
    if (ctx->pc == 0x375318u) {
        ctx->pc = 0x375318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375314u;
        // 0x375318: 0xc7a100c0  lwc1        $f1, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x37531Cu;
        goto label_37531c;
    }
    ctx->pc = 0x375314u;
    {
        const bool branch_taken_0x375314 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x375318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375314u;
        // 0x375318: 0xc7a100c0  lwc1        $f1, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x375314) {
            ctx->pc = 0x375370u;
            goto label_375370;
        }
    }
    ctx->pc = 0x37531Cu;
label_37531c:
    // 0x37531c: 0x46003183  div.s       $f6, $f6, $f0
    ctx->pc = 0x37531cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[6], ctx->f[0]); }
label_375320:
    // 0x375320: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x375320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_375324:
    // 0x375324: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x375324u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_375328:
    // 0x375328: 0xc7a300c8  lwc1        $f3, 0xC8($sp)
    ctx->pc = 0x375328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37532c:
    // 0x37532c: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x37532cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_375330:
    // 0x375330: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x375330u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
label_375334:
    // 0x375334: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x375334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_375338:
    // 0x375338: 0xe7a200d4  swc1        $f2, 0xD4($sp)
    ctx->pc = 0x375338u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_37533c:
    // 0x37533c: 0xe7a300d8  swc1        $f3, 0xD8($sp)
    ctx->pc = 0x37533cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_375340:
    // 0x375340: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x375340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_375344:
    // 0x375344: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x375344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375348:
    // 0x375348: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x375348u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_37534c:
    // 0x37534c: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x37534cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_375350:
    // 0x375350: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x375350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375354:
    // 0x375354: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x375354u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_375358:
    // 0x375358: 0xe7a200d4  swc1        $f2, 0xD4($sp)
    ctx->pc = 0x375358u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_37535c:
    // 0x37535c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x37535cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375360:
    // 0x375360: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x375360u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_375364:
    // 0x375364: 0x10000009  b           . + 4 + (0x9 << 2)
label_375368:
    if (ctx->pc == 0x375368u) {
        ctx->pc = 0x375368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375364u;
        // 0x375368: 0xe7a300d8  swc1        $f3, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x37536Cu;
        goto label_37536c;
    }
    ctx->pc = 0x375364u;
    {
        const bool branch_taken_0x375364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375364u;
        // 0x375368: 0xe7a300d8  swc1        $f3, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x375364) {
            ctx->pc = 0x37538Cu;
            goto label_37538c;
        }
    }
    ctx->pc = 0x37536Cu;
label_37536c:
    // 0x37536c: 0x0  nop
    ctx->pc = 0x37536cu;
    // NOP
label_375370:
    // 0x375370: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x375370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_375374:
    // 0x375374: 0x68490007  ldl         $t1, 0x7($v0)
    ctx->pc = 0x375374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_375378:
    // 0x375378: 0x6c490000  ldr         $t1, 0x0($v0)
    ctx->pc = 0x375378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_37537c:
    // 0x37537c: 0x8c4a0008  lw          $t2, 0x8($v0)
    ctx->pc = 0x37537cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_375380:
    // 0x375380: 0xb3a900d7  sdl         $t1, 0xD7($sp)
    ctx->pc = 0x375380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_375384:
    // 0x375384: 0xb7a900d0  sdr         $t1, 0xD0($sp)
    ctx->pc = 0x375384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_375388:
    // 0x375388: 0xafaa00d8  sw          $t2, 0xD8($sp)
    ctx->pc = 0x375388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 10));
label_37538c:
    // 0x37538c: 0xc7a300d0  lwc1        $f3, 0xD0($sp)
    ctx->pc = 0x37538cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_375390:
    // 0x375390: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x375390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_375394:
    // 0x375394: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x375394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375398:
    // 0x375398: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x375398u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_37539c:
    // 0x37539c: 0xc7a400d4  lwc1        $f4, 0xD4($sp)
    ctx->pc = 0x37539cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3753a0:
    // 0x3753a0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x3753a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3753a4:
    // 0x3753a4: 0xc7a300d8  lwc1        $f3, 0xD8($sp)
    ctx->pc = 0x3753a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3753a8:
    // 0x3753a8: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x3753a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_3753ac:
    // 0x3753ac: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x3753acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_3753b0:
    // 0x3753b0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3753b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_3753b4:
    // 0x3753b4: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x3753b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_3753b8:
    // 0x3753b8: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x3753b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_3753bc:
    // 0x3753bc: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x3753bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_3753c0:
    // 0x3753c0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3753c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_3753c4:
    // 0x3753c4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3753c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_3753c8:
    // 0x3753c8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x3753c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_3753cc:
    // 0x3753cc: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
label_3753d0:
    if (ctx->pc == 0x3753D0u) {
        ctx->pc = 0x3753D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3753CCu;
        // 0x3753d0: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3753D4u;
        goto label_3753d4;
    }
    ctx->pc = 0x3753CCu;
    {
        const bool branch_taken_0x3753cc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3753D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3753CCu;
        // 0x3753d0: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3753cc) {
            ctx->pc = 0x3753E4u;
            goto label_3753e4;
        }
    }
    ctx->pc = 0x3753D4u;
label_3753d4:
    // 0x3753d4: 0x460d1034  c.lt.s      $f2, $f13
    ctx->pc = 0x3753d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3753d8:
    // 0x3753d8: 0x0  nop
    ctx->pc = 0x3753d8u;
    // NOP
label_3753dc:
    // 0x3753dc: 0x45020321  bc1fl       . + 4 + (0x321 << 2)
label_3753e0:
    if (ctx->pc == 0x3753E0u) {
        ctx->pc = 0x3753E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3753DCu;
        // 0x3753e0: 0xe33825  or          $a3, $a3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3753E4u;
        goto label_3753e4;
    }
    ctx->pc = 0x3753DCu;
    {
        const bool branch_taken_0x3753dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3753dc) {
            ctx->pc = 0x3753E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3753DCu;
            // 0x3753e0: 0xe33825  or          $a3, $a3, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x376064u;
            goto label_376064;
        }
    }
    ctx->pc = 0x3753E4u;
label_3753e4:
    // 0x3753e4: 0x6ba500d7  ldl         $a1, 0xD7($sp)
    ctx->pc = 0x3753e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_3753e8:
    // 0x3753e8: 0x6fa500d0  ldr         $a1, 0xD0($sp)
    ctx->pc = 0x3753e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_3753ec:
    // 0x3753ec: 0x8fa800d8  lw          $t0, 0xD8($sp)
    ctx->pc = 0x3753ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_3753f0:
    // 0x3753f0: 0xb0c50007  sdl         $a1, 0x7($a2)
    ctx->pc = 0x3753f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3753f4:
    // 0x3753f4: 0xb4c50000  sdr         $a1, 0x0($a2)
    ctx->pc = 0x3753f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3753f8:
    // 0x3753f8: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x3753f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
label_3753fc:
    // 0x3753fc: 0x10000318  b           . + 4 + (0x318 << 2)
label_375400:
    if (ctx->pc == 0x375400u) {
        ctx->pc = 0x375400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3753FCu;
        // 0x375400: 0x46001346  mov.s       $f13, $f2 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x375404u;
        goto label_375404;
    }
    ctx->pc = 0x3753FCu;
    {
        const bool branch_taken_0x3753fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3753FCu;
        // 0x375400: 0x46001346  mov.s       $f13, $f2 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3753fc) {
            ctx->pc = 0x376060u;
            goto label_376060;
        }
    }
    ctx->pc = 0x375404u;
label_375404:
    // 0x375404: 0x123102a  slt         $v0, $t1, $v1
    ctx->pc = 0x375404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_375408:
    // 0x375408: 0x1040018c  beqz        $v0, . + 4 + (0x18C << 2)
label_37540c:
    if (ctx->pc == 0x37540Cu) {
        ctx->pc = 0x37540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375408u;
        // 0x37540c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375410u;
        goto label_375410;
    }
    ctx->pc = 0x375408u;
    {
        const bool branch_taken_0x375408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375408u;
        // 0x37540c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375408) {
            ctx->pc = 0x375A3Cu;
            goto label_375a3c;
        }
    }
    ctx->pc = 0x375410u;
label_375410:
    // 0x375410: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x375410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_375414:
    // 0x375414: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x375414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_375418:
    // 0x375418: 0xc4e30008  lwc1        $f3, 0x8($a3)
    ctx->pc = 0x375418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37541c:
    // 0x37541c: 0xc4860008  lwc1        $f6, 0x8($a0)
    ctx->pc = 0x37541cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_375420:
    // 0x375420: 0xc4e50000  lwc1        $f5, 0x0($a3)
    ctx->pc = 0x375420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_375424:
    // 0x375424: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x375424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_375428:
    // 0x375428: 0x46033041  sub.s       $f1, $f6, $f3
    ctx->pc = 0x375428u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
label_37542c:
    // 0x37542c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x37542cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375430:
    // 0x375430: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x375430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_375434:
    // 0x375434: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x375434u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
label_375438:
    // 0x375438: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x375438u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_37543c:
    // 0x37543c: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x37543cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_375440:
    // 0x375440: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x375440u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_375444:
    // 0x375444: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x375444u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_375448:
    // 0x375448: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x375448u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37544c:
    // 0x37544c: 0xe7a101c4  swc1        $f1, 0x1C4($sp)
    ctx->pc = 0x37544cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_375450:
    // 0x375450: 0x46062281  sub.s       $f10, $f4, $f6
    ctx->pc = 0x375450u;
    ctx->f[10] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
label_375454:
    // 0x375454: 0xe7aa00e8  swc1        $f10, 0xE8($sp)
    ctx->pc = 0x375454u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_375458:
    // 0x375458: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x375458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37545c:
    // 0x37545c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x37545cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375460:
    // 0x375460: 0x46000a41  sub.s       $f9, $f1, $f0
    ctx->pc = 0x375460u;
    ctx->f[9] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_375464:
    // 0x375464: 0xe7a900e0  swc1        $f9, 0xE0($sp)
    ctx->pc = 0x375464u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_375468:
    // 0x375468: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x375468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37546c:
    // 0x37546c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x37546cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375470:
    // 0x375470: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x375470u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_375474:
    // 0x375474: 0x46013841  sub.s       $f1, $f7, $f1
    ctx->pc = 0x375474u;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
label_375478:
    // 0x375478: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x375478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
label_37547c:
    // 0x37547c: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x37547cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
label_375480:
    // 0x375480: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x375480u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_375484:
    // 0x375484: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x375484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_375488:
    // 0x375488: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x375488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_37548c:
    // 0x37548c: 0x8fa201c4  lw          $v0, 0x1C4($sp)
    ctx->pc = 0x37548cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
label_375490:
    // 0x375490: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x375490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_375494:
    // 0x375494: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x375494u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_375498:
    // 0x375498: 0x10600061  beqz        $v1, . + 4 + (0x61 << 2)
label_37549c:
    if (ctx->pc == 0x37549Cu) {
        ctx->pc = 0x37549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375498u;
        // 0x37549c: 0x46004906  mov.s       $f4, $f9 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[9]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3754A0u;
        goto label_3754a0;
    }
    ctx->pc = 0x375498u;
    {
        const bool branch_taken_0x375498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375498u;
        // 0x37549c: 0x46004906  mov.s       $f4, $f9 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x375498) {
            ctx->pc = 0x375620u;
            goto label_375620;
        }
    }
    ctx->pc = 0x3754A0u;
label_3754a0:
    // 0x3754a0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x3754a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3754a4:
    // 0x3754a4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x3754a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3754a8:
    // 0x3754a8: 0x460460c2  mul.s       $f3, $f12, $f4
    ctx->pc = 0x3754a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
label_3754ac:
    // 0x3754ac: 0x46005146  mov.s       $f5, $f10
    ctx->pc = 0x3754acu;
    ctx->f[5] = FPU_MOV_S(ctx->f[10]);
label_3754b0:
    // 0x3754b0: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x3754b0u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3754b4:
    // 0x3754b4: 0x46053982  mul.s       $f6, $f7, $f5
    ctx->pc = 0x3754b4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
label_3754b8:
    // 0x3754b8: 0xe7a800e4  swc1        $f8, 0xE4($sp)
    ctx->pc = 0x3754b8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_3754bc:
    // 0x3754bc: 0x46085842  mul.s       $f1, $f11, $f8
    ctx->pc = 0x3754bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[8]);
label_3754c0:
    // 0x3754c0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3754c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3754c4:
    // 0x3754c4: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3754c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3754c8:
    // 0x3754c8: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x3754c8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_3754cc:
    // 0x3754cc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3754ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_3754d0:
    // 0x3754d0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3754d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3754d4:
    // 0x3754d4: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x3754d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
label_3754d8:
    // 0x3754d8: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x3754d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_3754dc:
    // 0x3754dc: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x3754dcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
label_3754e0:
    // 0x3754e0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3754e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3754e4:
    // 0x3754e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3754e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3754e8:
    // 0x3754e8: 0x46001901  sub.s       $f4, $f3, $f0
    ctx->pc = 0x3754e8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_3754ec:
    // 0x3754ec: 0x460d2036  c.le.s      $f4, $f13
    ctx->pc = 0x3754ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3754f0:
    // 0x3754f0: 0x0  nop
    ctx->pc = 0x3754f0u;
    // NOP
label_3754f4:
    // 0x3754f4: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_3754f8:
    if (ctx->pc == 0x3754F8u) {
        ctx->pc = 0x3754F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3754F4u;
        // 0x3754f8: 0x46094802  mul.s       $f0, $f9, $f9 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3754FCu;
        goto label_3754fc;
    }
    ctx->pc = 0x3754F4u;
    {
        const bool branch_taken_0x3754f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3754f4) {
            ctx->pc = 0x3754F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3754F4u;
            // 0x3754f8: 0x46094802  mul.s       $f0, $f9, $f9 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x375520u;
            goto label_375520;
        }
    }
    ctx->pc = 0x3754FCu;
label_3754fc:
    // 0x3754fc: 0x688b0007  ldl         $t3, 0x7($a0)
    ctx->pc = 0x3754fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_375500:
    // 0x375500: 0x6c8b0000  ldr         $t3, 0x0($a0)
    ctx->pc = 0x375500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_375504:
    // 0x375504: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x375504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_375508:
    // 0x375508: 0xb3ab00f7  sdl         $t3, 0xF7($sp)
    ctx->pc = 0x375508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_37550c:
    // 0x37550c: 0xb7ab00f0  sdr         $t3, 0xF0($sp)
    ctx->pc = 0x37550cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_375510:
    // 0x375510: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x375510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
label_375514:
    // 0x375514: 0x1000002c  b           . + 4 + (0x2C << 2)
label_375518:
    if (ctx->pc == 0x375518u) {
        ctx->pc = 0x375518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375514u;
        // 0x375518: 0xc7a300f0  lwc1        $f3, 0xF0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x37551Cu;
        goto label_37551c;
    }
    ctx->pc = 0x375514u;
    {
        const bool branch_taken_0x375514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375514u;
        // 0x375518: 0xc7a300f0  lwc1        $f3, 0xF0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x375514) {
            ctx->pc = 0x3755C8u;
            goto label_3755c8;
        }
    }
    ctx->pc = 0x37551Cu;
label_37551c:
    // 0x37551c: 0x0  nop
    ctx->pc = 0x37551cu;
    // NOP
label_375520:
    // 0x375520: 0x46084042  mul.s       $f1, $f8, $f8
    ctx->pc = 0x375520u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
label_375524:
    // 0x375524: 0x460a5082  mul.s       $f2, $f10, $f10
    ctx->pc = 0x375524u;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
label_375528:
    // 0x375528: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x375528u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_37552c:
    // 0x37552c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x37552cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_375530:
    // 0x375530: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x375530u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_375534:
    // 0x375534: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_375538:
    if (ctx->pc == 0x375538u) {
        ctx->pc = 0x37553Cu;
        goto label_37553c;
    }
    ctx->pc = 0x375534u;
    {
        const bool branch_taken_0x375534 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x375534) {
            ctx->pc = 0x37554Cu;
            goto label_37554c;
        }
    }
    ctx->pc = 0x37553Cu;
label_37553c:
    // 0x37553c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x37553cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_375540:
    // 0x375540: 0x0  nop
    ctx->pc = 0x375540u;
    // NOP
label_375544:
    // 0x375544: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_375548:
    if (ctx->pc == 0x375548u) {
        ctx->pc = 0x375548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375544u;
        // 0x375548: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37554Cu;
        goto label_37554c;
    }
    ctx->pc = 0x375544u;
    {
        const bool branch_taken_0x375544 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x375544) {
            ctx->pc = 0x375548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x375544u;
            // 0x375548: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37554Cu;
            goto label_37554c;
        }
    }
    ctx->pc = 0x37554Cu;
label_37554c:
    // 0x37554c: 0x11200016  beqz        $t1, . + 4 + (0x16 << 2)
label_375550:
    if (ctx->pc == 0x375550u) {
        ctx->pc = 0x375550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37554Cu;
        // 0x375550: 0xc7a100e0  lwc1        $f1, 0xE0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x375554u;
        goto label_375554;
    }
    ctx->pc = 0x37554Cu;
    {
        const bool branch_taken_0x37554c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x375550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37554Cu;
        // 0x375550: 0xc7a100e0  lwc1        $f1, 0xE0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37554c) {
            ctx->pc = 0x3755A8u;
            goto label_3755a8;
        }
    }
    ctx->pc = 0x375554u;
label_375554:
    // 0x375554: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x375554u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
label_375558:
    // 0x375558: 0xc7a200e4  lwc1        $f2, 0xE4($sp)
    ctx->pc = 0x375558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37555c:
    // 0x37555c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x37555cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_375560:
    // 0x375560: 0xc7a300e8  lwc1        $f3, 0xE8($sp)
    ctx->pc = 0x375560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_375564:
    // 0x375564: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x375564u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_375568:
    // 0x375568: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x375568u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_37556c:
    // 0x37556c: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x37556cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_375570:
    // 0x375570: 0xe7a200f4  swc1        $f2, 0xF4($sp)
    ctx->pc = 0x375570u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_375574:
    // 0x375574: 0xe7a300f8  swc1        $f3, 0xF8($sp)
    ctx->pc = 0x375574u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_375578:
    // 0x375578: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x375578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_37557c:
    // 0x37557c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x37557cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375580:
    // 0x375580: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x375580u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_375584:
    // 0x375584: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x375584u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_375588:
    // 0x375588: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x375588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37558c:
    // 0x37558c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x37558cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_375590:
    // 0x375590: 0xe7a200f4  swc1        $f2, 0xF4($sp)
    ctx->pc = 0x375590u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_375594:
    // 0x375594: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x375594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375598:
    // 0x375598: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x375598u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_37559c:
    // 0x37559c: 0x10000009  b           . + 4 + (0x9 << 2)
label_3755a0:
    if (ctx->pc == 0x3755A0u) {
        ctx->pc = 0x3755A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37559Cu;
        // 0x3755a0: 0xe7a300f8  swc1        $f3, 0xF8($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3755A4u;
        goto label_3755a4;
    }
    ctx->pc = 0x37559Cu;
    {
        const bool branch_taken_0x37559c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3755A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37559Cu;
        // 0x3755a0: 0xe7a300f8  swc1        $f3, 0xF8($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37559c) {
            ctx->pc = 0x3755C4u;
            goto label_3755c4;
        }
    }
    ctx->pc = 0x3755A4u;
label_3755a4:
    // 0x3755a4: 0x0  nop
    ctx->pc = 0x3755a4u;
    // NOP
label_3755a8:
    // 0x3755a8: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x3755a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_3755ac:
    // 0x3755ac: 0x684a0007  ldl         $t2, 0x7($v0)
    ctx->pc = 0x3755acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_3755b0:
    // 0x3755b0: 0x6c4a0000  ldr         $t2, 0x0($v0)
    ctx->pc = 0x3755b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_3755b4:
    // 0x3755b4: 0x8c4b0008  lw          $t3, 0x8($v0)
    ctx->pc = 0x3755b4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3755b8:
    // 0x3755b8: 0xb3aa00f7  sdl         $t2, 0xF7($sp)
    ctx->pc = 0x3755b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3755bc:
    // 0x3755bc: 0xb7aa00f0  sdr         $t2, 0xF0($sp)
    ctx->pc = 0x3755bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3755c0:
    // 0x3755c0: 0xafab00f8  sw          $t3, 0xF8($sp)
    ctx->pc = 0x3755c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 11));
label_3755c4:
    // 0x3755c4: 0xc7a300f0  lwc1        $f3, 0xF0($sp)
    ctx->pc = 0x3755c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3755c8:
    // 0x3755c8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x3755c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3755cc:
    // 0x3755cc: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x3755ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3755d0:
    // 0x3755d0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x3755d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_3755d4:
    // 0x3755d4: 0xc7a400f4  lwc1        $f4, 0xF4($sp)
    ctx->pc = 0x3755d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3755d8:
    // 0x3755d8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x3755d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3755dc:
    // 0x3755dc: 0xc7a300f8  lwc1        $f3, 0xF8($sp)
    ctx->pc = 0x3755dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3755e0:
    // 0x3755e0: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x3755e0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_3755e4:
    // 0x3755e4: 0xe7a100e0  swc1        $f1, 0xE0($sp)
    ctx->pc = 0x3755e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_3755e8:
    // 0x3755e8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3755e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_3755ec:
    // 0x3755ec: 0xe7a200e4  swc1        $f2, 0xE4($sp)
    ctx->pc = 0x3755ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_3755f0:
    // 0x3755f0: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x3755f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_3755f4:
    // 0x3755f4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3755f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_3755f8:
    // 0x3755f8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x3755f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_3755fc:
    // 0x3755fc: 0x6ba700f7  ldl         $a3, 0xF7($sp)
    ctx->pc = 0x3755fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_375600:
    // 0x375600: 0x6fa700f0  ldr         $a3, 0xF0($sp)
    ctx->pc = 0x375600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_375604:
    // 0x375604: 0x8faa00f8  lw          $t2, 0xF8($sp)
    ctx->pc = 0x375604u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_375608:
    // 0x375608: 0xb0c70007  sdl         $a3, 0x7($a2)
    ctx->pc = 0x375608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_37560c:
    // 0x37560c: 0xb4c70000  sdr         $a3, 0x0($a2)
    ctx->pc = 0x37560cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_375610:
    // 0x375610: 0xacca0008  sw          $t2, 0x8($a2)
    ctx->pc = 0x375610u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 10));
label_375614:
    // 0x375614: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x375614u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_375618:
    // 0x375618: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x375618u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_37561c:
    // 0x37561c: 0x46000b40  add.s       $f13, $f1, $f0
    ctx->pc = 0x37561cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_375620:
    // 0x375620: 0x15200290  bnez        $t1, . + 4 + (0x290 << 2)
label_375624:
    if (ctx->pc == 0x375624u) {
        ctx->pc = 0x375624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375620u;
        // 0x375624: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375628u;
        goto label_375628;
    }
    ctx->pc = 0x375620u;
    {
        const bool branch_taken_0x375620 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x375624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375620u;
        // 0x375624: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375620) {
            ctx->pc = 0x376064u;
            goto label_376064;
        }
    }
    ctx->pc = 0x375628u;
label_375628:
    // 0x375628: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x375628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_37562c:
    // 0x37562c: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x37562cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_375630:
    // 0x375630: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x375630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375634:
    // 0x375634: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x375634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375638:
    // 0x375638: 0x46000a41  sub.s       $f9, $f1, $f0
    ctx->pc = 0x375638u;
    ctx->f[9] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37563c:
    // 0x37563c: 0xe7a90108  swc1        $f9, 0x108($sp)
    ctx->pc = 0x37563cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_375640:
    // 0x375640: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x375640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375644:
    // 0x375644: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x375644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375648:
    // 0x375648: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x375648u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37564c:
    // 0x37564c: 0xe7a80100  swc1        $f8, 0x100($sp)
    ctx->pc = 0x37564cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_375650:
    // 0x375650: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x375650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_375654:
    // 0x375654: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x375654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375658:
    // 0x375658: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x375658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37565c:
    // 0x37565c: 0xc7a60018  lwc1        $f6, 0x18($sp)
    ctx->pc = 0x37565cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_375660:
    // 0x375660: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x375660u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_375664:
    // 0x375664: 0x46013041  sub.s       $f1, $f6, $f1
    ctx->pc = 0x375664u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
label_375668:
    // 0x375668: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x375668u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
label_37566c:
    // 0x37566c: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x37566cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
label_375670:
    // 0x375670: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x375670u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_375674:
    // 0x375674: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x375674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_375678:
    // 0x375678: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x375678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_37567c:
    // 0x37567c: 0x8fa201c4  lw          $v0, 0x1C4($sp)
    ctx->pc = 0x37567cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
label_375680:
    // 0x375680: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x375680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_375684:
    // 0x375684: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x375684u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_375688:
    // 0x375688: 0x10600068  beqz        $v1, . + 4 + (0x68 << 2)
label_37568c:
    if (ctx->pc == 0x37568Cu) {
        ctx->pc = 0x37568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375688u;
        // 0x37568c: 0x46004146  mov.s       $f5, $f8 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[8]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x375690u;
        goto label_375690;
    }
    ctx->pc = 0x375688u;
    {
        const bool branch_taken_0x375688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375688u;
        // 0x37568c: 0x46004146  mov.s       $f5, $f8 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x375688) {
            ctx->pc = 0x37582Cu;
            goto label_37582c;
        }
    }
    ctx->pc = 0x375690u;
label_375690:
    // 0x375690: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x375690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_375694:
    // 0x375694: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x375694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375698:
    // 0x375698: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x375698u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_37569c:
    // 0x37569c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x37569cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3756a0:
    // 0x3756a0: 0x46004906  mov.s       $f4, $f9
    ctx->pc = 0x3756a0u;
    ctx->f[4] = FPU_MOV_S(ctx->f[9]);
label_3756a4:
    // 0x3756a4: 0x460011c1  sub.s       $f7, $f2, $f0
    ctx->pc = 0x3756a4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3756a8:
    // 0x3756a8: 0x46043182  mul.s       $f6, $f6, $f4
    ctx->pc = 0x3756a8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
label_3756ac:
    // 0x3756ac: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x3756acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_3756b0:
    // 0x3756b0: 0xe7a70104  swc1        $f7, 0x104($sp)
    ctx->pc = 0x3756b0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_3756b4:
    // 0x3756b4: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x3756b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
label_3756b8:
    // 0x3756b8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3756b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3756bc:
    // 0x3756bc: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3756bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3756c0:
    // 0x3756c0: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x3756c0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_3756c4:
    // 0x3756c4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x3756c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_3756c8:
    // 0x3756c8: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3756c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3756cc:
    // 0x3756cc: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x3756ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_3756d0:
    // 0x3756d0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3756d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_3756d4:
    // 0x3756d4: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x3756d4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
label_3756d8:
    // 0x3756d8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3756d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3756dc:
    // 0x3756dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3756dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3756e0:
    // 0x3756e0: 0x46001981  sub.s       $f6, $f3, $f0
    ctx->pc = 0x3756e0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_3756e4:
    // 0x3756e4: 0x460a3036  c.le.s      $f6, $f10
    ctx->pc = 0x3756e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3756e8:
    // 0x3756e8: 0x0  nop
    ctx->pc = 0x3756e8u;
    // NOP
label_3756ec:
    // 0x3756ec: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_3756f0:
    if (ctx->pc == 0x3756F0u) {
        ctx->pc = 0x3756F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3756ECu;
        // 0x3756f0: 0x46084002  mul.s       $f0, $f8, $f8 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3756F4u;
        goto label_3756f4;
    }
    ctx->pc = 0x3756ECu;
    {
        const bool branch_taken_0x3756ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3756ec) {
            ctx->pc = 0x3756F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3756ECu;
            // 0x3756f0: 0x46084002  mul.s       $f0, $f8, $f8 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x375718u;
            goto label_375718;
        }
    }
    ctx->pc = 0x3756F4u;
label_3756f4:
    // 0x3756f4: 0x68850007  ldl         $a1, 0x7($a0)
    ctx->pc = 0x3756f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_3756f8:
    // 0x3756f8: 0x6c850000  ldr         $a1, 0x0($a0)
    ctx->pc = 0x3756f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_3756fc:
    // 0x3756fc: 0x8c8a0008  lw          $t2, 0x8($a0)
    ctx->pc = 0x3756fcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_375700:
    // 0x375700: 0xb3a50117  sdl         $a1, 0x117($sp)
    ctx->pc = 0x375700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_375704:
    // 0x375704: 0xb7a50110  sdr         $a1, 0x110($sp)
    ctx->pc = 0x375704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_375708:
    // 0x375708: 0xafaa0118  sw          $t2, 0x118($sp)
    ctx->pc = 0x375708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 10));
label_37570c:
    // 0x37570c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_375710:
    if (ctx->pc == 0x375710u) {
        ctx->pc = 0x375710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37570Cu;
        // 0x375710: 0xc7a30110  lwc1        $f3, 0x110($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x375714u;
        goto label_375714;
    }
    ctx->pc = 0x37570Cu;
    {
        const bool branch_taken_0x37570c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37570Cu;
        // 0x375710: 0xc7a30110  lwc1        $f3, 0x110($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37570c) {
            ctx->pc = 0x3757C0u;
            goto label_3757c0;
        }
    }
    ctx->pc = 0x375714u;
label_375714:
    // 0x375714: 0x0  nop
    ctx->pc = 0x375714u;
    // NOP
label_375718:
    // 0x375718: 0x46073842  mul.s       $f1, $f7, $f7
    ctx->pc = 0x375718u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
label_37571c:
    // 0x37571c: 0x46094882  mul.s       $f2, $f9, $f9
    ctx->pc = 0x37571cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
label_375720:
    // 0x375720: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x375720u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_375724:
    // 0x375724: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x375724u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_375728:
    // 0x375728: 0x46005034  c.lt.s      $f10, $f0
    ctx->pc = 0x375728u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37572c:
    // 0x37572c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_375730:
    if (ctx->pc == 0x375730u) {
        ctx->pc = 0x375734u;
        goto label_375734;
    }
    ctx->pc = 0x37572Cu;
    {
        const bool branch_taken_0x37572c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37572c) {
            ctx->pc = 0x375744u;
            goto label_375744;
        }
    }
    ctx->pc = 0x375734u;
label_375734:
    // 0x375734: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x375734u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_375738:
    // 0x375738: 0x0  nop
    ctx->pc = 0x375738u;
    // NOP
label_37573c:
    // 0x37573c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_375740:
    if (ctx->pc == 0x375740u) {
        ctx->pc = 0x375740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37573Cu;
        // 0x375740: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375744u;
        goto label_375744;
    }
    ctx->pc = 0x37573Cu;
    {
        const bool branch_taken_0x37573c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37573c) {
            ctx->pc = 0x375740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37573Cu;
            // 0x375740: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x375744u;
            goto label_375744;
        }
    }
    ctx->pc = 0x375744u;
label_375744:
    // 0x375744: 0x11200016  beqz        $t1, . + 4 + (0x16 << 2)
label_375748:
    if (ctx->pc == 0x375748u) {
        ctx->pc = 0x375748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375744u;
        // 0x375748: 0xc7a10100  lwc1        $f1, 0x100($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x37574Cu;
        goto label_37574c;
    }
    ctx->pc = 0x375744u;
    {
        const bool branch_taken_0x375744 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x375748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375744u;
        // 0x375748: 0xc7a10100  lwc1        $f1, 0x100($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x375744) {
            ctx->pc = 0x3757A0u;
            goto label_3757a0;
        }
    }
    ctx->pc = 0x37574Cu;
label_37574c:
    // 0x37574c: 0x46003183  div.s       $f6, $f6, $f0
    ctx->pc = 0x37574cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[6], ctx->f[0]); }
label_375750:
    // 0x375750: 0xc7a20104  lwc1        $f2, 0x104($sp)
    ctx->pc = 0x375750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_375754:
    // 0x375754: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x375754u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_375758:
    // 0x375758: 0xc7a30108  lwc1        $f3, 0x108($sp)
    ctx->pc = 0x375758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37575c:
    // 0x37575c: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x37575cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_375760:
    // 0x375760: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x375760u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
label_375764:
    // 0x375764: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x375764u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_375768:
    // 0x375768: 0xe7a20114  swc1        $f2, 0x114($sp)
    ctx->pc = 0x375768u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_37576c:
    // 0x37576c: 0xe7a30118  swc1        $f3, 0x118($sp)
    ctx->pc = 0x37576cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_375770:
    // 0x375770: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x375770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_375774:
    // 0x375774: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x375774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375778:
    // 0x375778: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x375778u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_37577c:
    // 0x37577c: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x37577cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_375780:
    // 0x375780: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x375780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375784:
    // 0x375784: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x375784u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_375788:
    // 0x375788: 0xe7a20114  swc1        $f2, 0x114($sp)
    ctx->pc = 0x375788u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_37578c:
    // 0x37578c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x37578cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375790:
    // 0x375790: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x375790u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_375794:
    // 0x375794: 0x10000009  b           . + 4 + (0x9 << 2)
label_375798:
    if (ctx->pc == 0x375798u) {
        ctx->pc = 0x375798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375794u;
        // 0x375798: 0xe7a30118  swc1        $f3, 0x118($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x37579Cu;
        goto label_37579c;
    }
    ctx->pc = 0x375794u;
    {
        const bool branch_taken_0x375794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375794u;
        // 0x375798: 0xe7a30118  swc1        $f3, 0x118($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x375794) {
            ctx->pc = 0x3757BCu;
            goto label_3757bc;
        }
    }
    ctx->pc = 0x37579Cu;
label_37579c:
    // 0x37579c: 0x0  nop
    ctx->pc = 0x37579cu;
    // NOP
label_3757a0:
    // 0x3757a0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3757a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3757a4:
    // 0x3757a4: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x3757a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3757a8:
    // 0x3757a8: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x3757a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3757ac:
    // 0x3757ac: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3757acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3757b0:
    // 0x3757b0: 0xb3a40117  sdl         $a0, 0x117($sp)
    ctx->pc = 0x3757b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3757b4:
    // 0x3757b4: 0xb7a40110  sdr         $a0, 0x110($sp)
    ctx->pc = 0x3757b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3757b8:
    // 0x3757b8: 0xafa50118  sw          $a1, 0x118($sp)
    ctx->pc = 0x3757b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 5));
label_3757bc:
    // 0x3757bc: 0xc7a30110  lwc1        $f3, 0x110($sp)
    ctx->pc = 0x3757bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3757c0:
    // 0x3757c0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x3757c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3757c4:
    // 0x3757c4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x3757c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3757c8:
    // 0x3757c8: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x3757c8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_3757cc:
    // 0x3757cc: 0xc7a40114  lwc1        $f4, 0x114($sp)
    ctx->pc = 0x3757ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3757d0:
    // 0x3757d0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x3757d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3757d4:
    // 0x3757d4: 0xc7a30118  lwc1        $f3, 0x118($sp)
    ctx->pc = 0x3757d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3757d8:
    // 0x3757d8: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x3757d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_3757dc:
    // 0x3757dc: 0xe7a20100  swc1        $f2, 0x100($sp)
    ctx->pc = 0x3757dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_3757e0:
    // 0x3757e0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3757e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_3757e4:
    // 0x3757e4: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x3757e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_3757e8:
    // 0x3757e8: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x3757e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_3757ec:
    // 0x3757ec: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x3757ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_3757f0:
    // 0x3757f0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3757f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_3757f4:
    // 0x3757f4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3757f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_3757f8:
    // 0x3757f8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x3757f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_3757fc:
    // 0x3757fc: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
label_375800:
    if (ctx->pc == 0x375800u) {
        ctx->pc = 0x375800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3757FCu;
        // 0x375800: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x375804u;
        goto label_375804;
    }
    ctx->pc = 0x3757FCu;
    {
        const bool branch_taken_0x3757fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x375800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3757FCu;
        // 0x375800: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3757fc) {
            ctx->pc = 0x375810u;
            goto label_375810;
        }
    }
    ctx->pc = 0x375804u;
label_375804:
    // 0x375804: 0x460d1034  c.lt.s      $f2, $f13
    ctx->pc = 0x375804u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_375808:
    // 0x375808: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_37580c:
    if (ctx->pc == 0x37580Cu) {
        ctx->pc = 0x375810u;
        goto label_375810;
    }
    ctx->pc = 0x375808u;
    {
        const bool branch_taken_0x375808 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x375808) {
            ctx->pc = 0x37582Cu;
            goto label_37582c;
        }
    }
    ctx->pc = 0x375810u;
label_375810:
    // 0x375810: 0x6ba20117  ldl         $v0, 0x117($sp)
    ctx->pc = 0x375810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_375814:
    // 0x375814: 0x6fa20110  ldr         $v0, 0x110($sp)
    ctx->pc = 0x375814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_375818:
    // 0x375818: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x375818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_37581c:
    // 0x37581c: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x37581cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_375820:
    // 0x375820: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x375820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_375824:
    // 0x375824: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x375824u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_375828:
    // 0x375828: 0x46001346  mov.s       $f13, $f2
    ctx->pc = 0x375828u;
    ctx->f[13] = FPU_MOV_S(ctx->f[2]);
label_37582c:
    // 0x37582c: 0x1520020d  bnez        $t1, . + 4 + (0x20D << 2)
label_375830:
    if (ctx->pc == 0x375830u) {
        ctx->pc = 0x375830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37582Cu;
        // 0x375830: 0xe33825  or          $a3, $a3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375834u;
        goto label_375834;
    }
    ctx->pc = 0x37582Cu;
    {
        const bool branch_taken_0x37582c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x375830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37582Cu;
        // 0x375830: 0xe33825  or          $a3, $a3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37582c) {
            ctx->pc = 0x376064u;
            goto label_376064;
        }
    }
    ctx->pc = 0x375834u;
label_375834:
    // 0x375834: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x375834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_375838:
    // 0x375838: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x375838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_37583c:
    // 0x37583c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x37583cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375840:
    // 0x375840: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x375840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375844:
    // 0x375844: 0x46000a41  sub.s       $f9, $f1, $f0
    ctx->pc = 0x375844u;
    ctx->f[9] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_375848:
    // 0x375848: 0xe7a90128  swc1        $f9, 0x128($sp)
    ctx->pc = 0x375848u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_37584c:
    // 0x37584c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x37584cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375850:
    // 0x375850: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x375850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375854:
    // 0x375854: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x375854u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_375858:
    // 0x375858: 0xe7a80120  swc1        $f8, 0x120($sp)
    ctx->pc = 0x375858u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_37585c:
    // 0x37585c: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x37585cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_375860:
    // 0x375860: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x375860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375864:
    // 0x375864: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x375864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375868:
    // 0x375868: 0xc7a60018  lwc1        $f6, 0x18($sp)
    ctx->pc = 0x375868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_37586c:
    // 0x37586c: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x37586cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_375870:
    // 0x375870: 0x46013041  sub.s       $f1, $f6, $f1
    ctx->pc = 0x375870u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
label_375874:
    // 0x375874: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x375874u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
label_375878:
    // 0x375878: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x375878u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
label_37587c:
    // 0x37587c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x37587cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_375880:
    // 0x375880: 0xe7a001cc  swc1        $f0, 0x1CC($sp)
    ctx->pc = 0x375880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
label_375884:
    // 0x375884: 0x8fa301cc  lw          $v1, 0x1CC($sp)
    ctx->pc = 0x375884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
label_375888:
    // 0x375888: 0x8fa201c4  lw          $v0, 0x1C4($sp)
    ctx->pc = 0x375888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
label_37588c:
    // 0x37588c: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x37588cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_375890:
    // 0x375890: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x375890u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_375894:
    // 0x375894: 0x106001f2  beqz        $v1, . + 4 + (0x1F2 << 2)
label_375898:
    if (ctx->pc == 0x375898u) {
        ctx->pc = 0x375898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375894u;
        // 0x375898: 0x46004146  mov.s       $f5, $f8 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[8]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37589Cu;
        goto label_37589c;
    }
    ctx->pc = 0x375894u;
    {
        const bool branch_taken_0x375894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x375898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375894u;
        // 0x375898: 0x46004146  mov.s       $f5, $f8 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x375894) {
            ctx->pc = 0x376060u;
            goto label_376060;
        }
    }
    ctx->pc = 0x37589Cu;
label_37589c:
    // 0x37589c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x37589cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3758a0:
    // 0x3758a0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x3758a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3758a4:
    // 0x3758a4: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x3758a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_3758a8:
    // 0x3758a8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x3758a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3758ac:
    // 0x3758ac: 0x46004906  mov.s       $f4, $f9
    ctx->pc = 0x3758acu;
    ctx->f[4] = FPU_MOV_S(ctx->f[9]);
label_3758b0:
    // 0x3758b0: 0x460011c1  sub.s       $f7, $f2, $f0
    ctx->pc = 0x3758b0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3758b4:
    // 0x3758b4: 0x46043182  mul.s       $f6, $f6, $f4
    ctx->pc = 0x3758b4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
label_3758b8:
    // 0x3758b8: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x3758b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_3758bc:
    // 0x3758bc: 0xe7a70124  swc1        $f7, 0x124($sp)
    ctx->pc = 0x3758bcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_3758c0:
    // 0x3758c0: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x3758c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
label_3758c4:
    // 0x3758c4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3758c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3758c8:
    // 0x3758c8: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3758c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3758cc:
    // 0x3758cc: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x3758ccu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_3758d0:
    // 0x3758d0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x3758d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_3758d4:
    // 0x3758d4: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3758d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3758d8:
    // 0x3758d8: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x3758d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_3758dc:
    // 0x3758dc: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3758dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_3758e0:
    // 0x3758e0: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x3758e0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
label_3758e4:
    // 0x3758e4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3758e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3758e8:
    // 0x3758e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3758e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3758ec:
    // 0x3758ec: 0x46001981  sub.s       $f6, $f3, $f0
    ctx->pc = 0x3758ecu;
    ctx->f[6] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_3758f0:
    // 0x3758f0: 0x460a3036  c.le.s      $f6, $f10
    ctx->pc = 0x3758f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3758f4:
    // 0x3758f4: 0x0  nop
    ctx->pc = 0x3758f4u;
    // NOP
label_3758f8:
    // 0x3758f8: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_3758fc:
    if (ctx->pc == 0x3758FCu) {
        ctx->pc = 0x3758FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3758F8u;
        // 0x3758fc: 0x46084002  mul.s       $f0, $f8, $f8 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x375900u;
        goto label_375900;
    }
    ctx->pc = 0x3758F8u;
    {
        const bool branch_taken_0x3758f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3758f8) {
            ctx->pc = 0x3758FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3758F8u;
            // 0x3758fc: 0x46084002  mul.s       $f0, $f8, $f8 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x375920u;
            goto label_375920;
        }
    }
    ctx->pc = 0x375900u;
label_375900:
    // 0x375900: 0x688b0007  ldl         $t3, 0x7($a0)
    ctx->pc = 0x375900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_375904:
    // 0x375904: 0x6c8b0000  ldr         $t3, 0x0($a0)
    ctx->pc = 0x375904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_375908:
    // 0x375908: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x375908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_37590c:
    // 0x37590c: 0xb3ab0137  sdl         $t3, 0x137($sp)
    ctx->pc = 0x37590cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_375910:
    // 0x375910: 0xb7ab0130  sdr         $t3, 0x130($sp)
    ctx->pc = 0x375910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_375914:
    // 0x375914: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x375914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
label_375918:
    // 0x375918: 0x1000002b  b           . + 4 + (0x2B << 2)
label_37591c:
    if (ctx->pc == 0x37591Cu) {
        ctx->pc = 0x37591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375918u;
        // 0x37591c: 0xc7a30130  lwc1        $f3, 0x130($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x375920u;
        goto label_375920;
    }
    ctx->pc = 0x375918u;
    {
        const bool branch_taken_0x375918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375918u;
        // 0x37591c: 0xc7a30130  lwc1        $f3, 0x130($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x375918) {
            ctx->pc = 0x3759C8u;
            goto label_3759c8;
        }
    }
    ctx->pc = 0x375920u;
label_375920:
    // 0x375920: 0x46073842  mul.s       $f1, $f7, $f7
    ctx->pc = 0x375920u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
label_375924:
    // 0x375924: 0x46094882  mul.s       $f2, $f9, $f9
    ctx->pc = 0x375924u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
label_375928:
    // 0x375928: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x375928u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_37592c:
    // 0x37592c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x37592cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_375930:
    // 0x375930: 0x46005034  c.lt.s      $f10, $f0
    ctx->pc = 0x375930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_375934:
    // 0x375934: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_375938:
    if (ctx->pc == 0x375938u) {
        ctx->pc = 0x37593Cu;
        goto label_37593c;
    }
    ctx->pc = 0x375934u;
    {
        const bool branch_taken_0x375934 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x375934) {
            ctx->pc = 0x37594Cu;
            goto label_37594c;
        }
    }
    ctx->pc = 0x37593Cu;
label_37593c:
    // 0x37593c: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x37593cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_375940:
    // 0x375940: 0x0  nop
    ctx->pc = 0x375940u;
    // NOP
label_375944:
    // 0x375944: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_375948:
    if (ctx->pc == 0x375948u) {
        ctx->pc = 0x375948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375944u;
        // 0x375948: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37594Cu;
        goto label_37594c;
    }
    ctx->pc = 0x375944u;
    {
        const bool branch_taken_0x375944 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x375944) {
            ctx->pc = 0x375948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x375944u;
            // 0x375948: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37594Cu;
            goto label_37594c;
        }
    }
    ctx->pc = 0x37594Cu;
label_37594c:
    // 0x37594c: 0x11200016  beqz        $t1, . + 4 + (0x16 << 2)
label_375950:
    if (ctx->pc == 0x375950u) {
        ctx->pc = 0x375950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37594Cu;
        // 0x375950: 0xc7a10120  lwc1        $f1, 0x120($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x375954u;
        goto label_375954;
    }
    ctx->pc = 0x37594Cu;
    {
        const bool branch_taken_0x37594c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x375950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37594Cu;
        // 0x375950: 0xc7a10120  lwc1        $f1, 0x120($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37594c) {
            ctx->pc = 0x3759A8u;
            goto label_3759a8;
        }
    }
    ctx->pc = 0x375954u;
label_375954:
    // 0x375954: 0x46003183  div.s       $f6, $f6, $f0
    ctx->pc = 0x375954u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[6], ctx->f[0]); }
label_375958:
    // 0x375958: 0xc7a20124  lwc1        $f2, 0x124($sp)
    ctx->pc = 0x375958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37595c:
    // 0x37595c: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x37595cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_375960:
    // 0x375960: 0xc7a30128  lwc1        $f3, 0x128($sp)
    ctx->pc = 0x375960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_375964:
    // 0x375964: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x375964u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_375968:
    // 0x375968: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x375968u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
label_37596c:
    // 0x37596c: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x37596cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_375970:
    // 0x375970: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x375970u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_375974:
    // 0x375974: 0xe7a30138  swc1        $f3, 0x138($sp)
    ctx->pc = 0x375974u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_375978:
    // 0x375978: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x375978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_37597c:
    // 0x37597c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x37597cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375980:
    // 0x375980: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x375980u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_375984:
    // 0x375984: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x375984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_375988:
    // 0x375988: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x375988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37598c:
    // 0x37598c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x37598cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_375990:
    // 0x375990: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x375990u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_375994:
    // 0x375994: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x375994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375998:
    // 0x375998: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x375998u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_37599c:
    // 0x37599c: 0x10000009  b           . + 4 + (0x9 << 2)
label_3759a0:
    if (ctx->pc == 0x3759A0u) {
        ctx->pc = 0x3759A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37599Cu;
        // 0x3759a0: 0xe7a30138  swc1        $f3, 0x138($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3759A4u;
        goto label_3759a4;
    }
    ctx->pc = 0x37599Cu;
    {
        const bool branch_taken_0x37599c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3759A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37599Cu;
        // 0x3759a0: 0xe7a30138  swc1        $f3, 0x138($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37599c) {
            ctx->pc = 0x3759C4u;
            goto label_3759c4;
        }
    }
    ctx->pc = 0x3759A4u;
label_3759a4:
    // 0x3759a4: 0x0  nop
    ctx->pc = 0x3759a4u;
    // NOP
label_3759a8:
    // 0x3759a8: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x3759a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_3759ac:
    // 0x3759ac: 0x68490007  ldl         $t1, 0x7($v0)
    ctx->pc = 0x3759acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_3759b0:
    // 0x3759b0: 0x6c490000  ldr         $t1, 0x0($v0)
    ctx->pc = 0x3759b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_3759b4:
    // 0x3759b4: 0x8c4a0008  lw          $t2, 0x8($v0)
    ctx->pc = 0x3759b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3759b8:
    // 0x3759b8: 0xb3a90137  sdl         $t1, 0x137($sp)
    ctx->pc = 0x3759b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3759bc:
    // 0x3759bc: 0xb7a90130  sdr         $t1, 0x130($sp)
    ctx->pc = 0x3759bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3759c0:
    // 0x3759c0: 0xafaa0138  sw          $t2, 0x138($sp)
    ctx->pc = 0x3759c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 10));
label_3759c4:
    // 0x3759c4: 0xc7a30130  lwc1        $f3, 0x130($sp)
    ctx->pc = 0x3759c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3759c8:
    // 0x3759c8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x3759c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3759cc:
    // 0x3759cc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x3759ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3759d0:
    // 0x3759d0: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x3759d0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_3759d4:
    // 0x3759d4: 0xc7a40134  lwc1        $f4, 0x134($sp)
    ctx->pc = 0x3759d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3759d8:
    // 0x3759d8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x3759d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3759dc:
    // 0x3759dc: 0xc7a30138  lwc1        $f3, 0x138($sp)
    ctx->pc = 0x3759dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3759e0:
    // 0x3759e0: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x3759e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_3759e4:
    // 0x3759e4: 0xe7a20120  swc1        $f2, 0x120($sp)
    ctx->pc = 0x3759e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_3759e8:
    // 0x3759e8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3759e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_3759ec:
    // 0x3759ec: 0xe7a10124  swc1        $f1, 0x124($sp)
    ctx->pc = 0x3759ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_3759f0:
    // 0x3759f0: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x3759f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_3759f4:
    // 0x3759f4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x3759f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_3759f8:
    // 0x3759f8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3759f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_3759fc:
    // 0x3759fc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3759fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_375a00:
    // 0x375a00: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x375a00u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_375a04:
    // 0x375a04: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
label_375a08:
    if (ctx->pc == 0x375A08u) {
        ctx->pc = 0x375A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375A04u;
        // 0x375a08: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x375A0Cu;
        goto label_375a0c;
    }
    ctx->pc = 0x375A04u;
    {
        const bool branch_taken_0x375a04 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x375A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375A04u;
        // 0x375a08: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x375a04) {
            ctx->pc = 0x375A1Cu;
            goto label_375a1c;
        }
    }
    ctx->pc = 0x375A0Cu;
label_375a0c:
    // 0x375a0c: 0x460d1034  c.lt.s      $f2, $f13
    ctx->pc = 0x375a0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_375a10:
    // 0x375a10: 0x0  nop
    ctx->pc = 0x375a10u;
    // NOP
label_375a14:
    // 0x375a14: 0x45020193  bc1fl       . + 4 + (0x193 << 2)
label_375a18:
    if (ctx->pc == 0x375A18u) {
        ctx->pc = 0x375A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375A14u;
        // 0x375a18: 0xe33825  or          $a3, $a3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375A1Cu;
        goto label_375a1c;
    }
    ctx->pc = 0x375A14u;
    {
        const bool branch_taken_0x375a14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x375a14) {
            ctx->pc = 0x375A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x375A14u;
            // 0x375a18: 0xe33825  or          $a3, $a3, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x376064u;
            goto label_376064;
        }
    }
    ctx->pc = 0x375A1Cu;
label_375a1c:
    // 0x375a1c: 0x6ba50137  ldl         $a1, 0x137($sp)
    ctx->pc = 0x375a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_375a20:
    // 0x375a20: 0x6fa50130  ldr         $a1, 0x130($sp)
    ctx->pc = 0x375a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_375a24:
    // 0x375a24: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x375a24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_375a28:
    // 0x375a28: 0xb0c50007  sdl         $a1, 0x7($a2)
    ctx->pc = 0x375a28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_375a2c:
    // 0x375a2c: 0xb4c50000  sdr         $a1, 0x0($a2)
    ctx->pc = 0x375a2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_375a30:
    // 0x375a30: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x375a30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
label_375a34:
    // 0x375a34: 0x1000018a  b           . + 4 + (0x18A << 2)
label_375a38:
    if (ctx->pc == 0x375A38u) {
        ctx->pc = 0x375A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375A34u;
        // 0x375a38: 0x46001346  mov.s       $f13, $f2 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x375A3Cu;
        goto label_375a3c;
    }
    ctx->pc = 0x375A34u;
    {
        const bool branch_taken_0x375a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375A34u;
        // 0x375a38: 0x46001346  mov.s       $f13, $f2 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x375a34) {
            ctx->pc = 0x376060u;
            goto label_376060;
        }
    }
    ctx->pc = 0x375A3Cu;
label_375a3c:
    // 0x375a3c: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x375a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_375a40:
    // 0x375a40: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x375a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_375a44:
    // 0x375a44: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x375a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_375a48:
    // 0x375a48: 0xc4860004  lwc1        $f6, 0x4($a0)
    ctx->pc = 0x375a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_375a4c:
    // 0x375a4c: 0xc4e50008  lwc1        $f5, 0x8($a3)
    ctx->pc = 0x375a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_375a50:
    // 0x375a50: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x375a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_375a54:
    // 0x375a54: 0x46033041  sub.s       $f1, $f6, $f3
    ctx->pc = 0x375a54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
label_375a58:
    // 0x375a58: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x375a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375a5c:
    // 0x375a5c: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x375a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_375a60:
    // 0x375a60: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x375a60u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
label_375a64:
    // 0x375a64: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x375a64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_375a68:
    // 0x375a68: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x375a68u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_375a6c:
    // 0x375a6c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x375a6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_375a70:
    // 0x375a70: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x375a70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_375a74:
    // 0x375a74: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x375a74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_375a78:
    // 0x375a78: 0xe7a101d4  swc1        $f1, 0x1D4($sp)
    ctx->pc = 0x375a78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
label_375a7c:
    // 0x375a7c: 0x46062281  sub.s       $f10, $f4, $f6
    ctx->pc = 0x375a7cu;
    ctx->f[10] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
label_375a80:
    // 0x375a80: 0xe7aa0144  swc1        $f10, 0x144($sp)
    ctx->pc = 0x375a80u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_375a84:
    // 0x375a84: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x375a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375a88:
    // 0x375a88: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x375a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375a8c:
    // 0x375a8c: 0x46000a41  sub.s       $f9, $f1, $f0
    ctx->pc = 0x375a8cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_375a90:
    // 0x375a90: 0xe7a90148  swc1        $f9, 0x148($sp)
    ctx->pc = 0x375a90u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_375a94:
    // 0x375a94: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x375a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375a98:
    // 0x375a98: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x375a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375a9c:
    // 0x375a9c: 0x46003801  sub.s       $f0, $f7, $f0
    ctx->pc = 0x375a9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_375aa0:
    // 0x375aa0: 0x46015841  sub.s       $f1, $f11, $f1
    ctx->pc = 0x375aa0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[11], ctx->f[1]);
label_375aa4:
    // 0x375aa4: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x375aa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
label_375aa8:
    // 0x375aa8: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x375aa8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
label_375aac:
    // 0x375aac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x375aacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_375ab0:
    // 0x375ab0: 0xe7a001d0  swc1        $f0, 0x1D0($sp)
    ctx->pc = 0x375ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_375ab4:
    // 0x375ab4: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x375ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_375ab8:
    // 0x375ab8: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x375ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_375abc:
    // 0x375abc: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x375abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_375ac0:
    // 0x375ac0: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x375ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_375ac4:
    // 0x375ac4: 0x10600060  beqz        $v1, . + 4 + (0x60 << 2)
label_375ac8:
    if (ctx->pc == 0x375AC8u) {
        ctx->pc = 0x375AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375AC4u;
        // 0x375ac8: 0x46005186  mov.s       $f6, $f10 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[10]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x375ACCu;
        goto label_375acc;
    }
    ctx->pc = 0x375AC4u;
    {
        const bool branch_taken_0x375ac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x375AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375AC4u;
        // 0x375ac8: 0x46005186  mov.s       $f6, $f10 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x375ac4) {
            ctx->pc = 0x375C48u;
            goto label_375c48;
        }
    }
    ctx->pc = 0x375ACCu;
label_375acc:
    // 0x375acc: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x375accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375ad0:
    // 0x375ad0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x375ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375ad4:
    // 0x375ad4: 0x46065942  mul.s       $f5, $f11, $f6
    ctx->pc = 0x375ad4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
label_375ad8:
    // 0x375ad8: 0x46004906  mov.s       $f4, $f9
    ctx->pc = 0x375ad8u;
    ctx->f[4] = FPU_MOV_S(ctx->f[9]);
label_375adc:
    // 0x375adc: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x375adcu;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_375ae0:
    // 0x375ae0: 0x460439c2  mul.s       $f7, $f7, $f4
    ctx->pc = 0x375ae0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_375ae4:
    // 0x375ae4: 0xe7a80140  swc1        $f8, 0x140($sp)
    ctx->pc = 0x375ae4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_375ae8:
    // 0x375ae8: 0x460860c2  mul.s       $f3, $f12, $f8
    ctx->pc = 0x375ae8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[8]);
label_375aec:
    // 0x375aec: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x375aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375af0:
    // 0x375af0: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x375af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_375af4:
    // 0x375af4: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x375af4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
label_375af8:
    // 0x375af8: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x375af8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
label_375afc:
    // 0x375afc: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x375afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375b00:
    // 0x375b00: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x375b00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_375b04:
    // 0x375b04: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x375b04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_375b08:
    // 0x375b08: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x375b08u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
label_375b0c:
    // 0x375b0c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x375b0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_375b10:
    // 0x375b10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x375b10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_375b14:
    // 0x375b14: 0x46001901  sub.s       $f4, $f3, $f0
    ctx->pc = 0x375b14u;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_375b18:
    // 0x375b18: 0x460d2036  c.le.s      $f4, $f13
    ctx->pc = 0x375b18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_375b1c:
    // 0x375b1c: 0x0  nop
    ctx->pc = 0x375b1cu;
    // NOP
label_375b20:
    // 0x375b20: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_375b24:
    if (ctx->pc == 0x375B24u) {
        ctx->pc = 0x375B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375B20u;
        // 0x375b24: 0x46084002  mul.s       $f0, $f8, $f8 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x375B28u;
        goto label_375b28;
    }
    ctx->pc = 0x375B20u;
    {
        const bool branch_taken_0x375b20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x375b20) {
            ctx->pc = 0x375B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x375B20u;
            // 0x375b24: 0x46084002  mul.s       $f0, $f8, $f8 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x375B48u;
            goto label_375b48;
        }
    }
    ctx->pc = 0x375B28u;
label_375b28:
    // 0x375b28: 0x688b0007  ldl         $t3, 0x7($a0)
    ctx->pc = 0x375b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_375b2c:
    // 0x375b2c: 0x6c8b0000  ldr         $t3, 0x0($a0)
    ctx->pc = 0x375b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_375b30:
    // 0x375b30: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x375b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_375b34:
    // 0x375b34: 0xb3ab0157  sdl         $t3, 0x157($sp)
    ctx->pc = 0x375b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 343); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_375b38:
    // 0x375b38: 0xb7ab0150  sdr         $t3, 0x150($sp)
    ctx->pc = 0x375b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 336); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_375b3c:
    // 0x375b3c: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x375b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
label_375b40:
    // 0x375b40: 0x1000002b  b           . + 4 + (0x2B << 2)
label_375b44:
    if (ctx->pc == 0x375B44u) {
        ctx->pc = 0x375B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375B40u;
        // 0x375b44: 0xc7a30150  lwc1        $f3, 0x150($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x375B48u;
        goto label_375b48;
    }
    ctx->pc = 0x375B40u;
    {
        const bool branch_taken_0x375b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375B40u;
        // 0x375b44: 0xc7a30150  lwc1        $f3, 0x150($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x375b40) {
            ctx->pc = 0x375BF0u;
            goto label_375bf0;
        }
    }
    ctx->pc = 0x375B48u;
label_375b48:
    // 0x375b48: 0x460a5042  mul.s       $f1, $f10, $f10
    ctx->pc = 0x375b48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
label_375b4c:
    // 0x375b4c: 0x46094882  mul.s       $f2, $f9, $f9
    ctx->pc = 0x375b4cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
label_375b50:
    // 0x375b50: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x375b50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_375b54:
    // 0x375b54: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x375b54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_375b58:
    // 0x375b58: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x375b58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_375b5c:
    // 0x375b5c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_375b60:
    if (ctx->pc == 0x375B60u) {
        ctx->pc = 0x375B64u;
        goto label_375b64;
    }
    ctx->pc = 0x375B5Cu;
    {
        const bool branch_taken_0x375b5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x375b5c) {
            ctx->pc = 0x375B74u;
            goto label_375b74;
        }
    }
    ctx->pc = 0x375B64u;
label_375b64:
    // 0x375b64: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x375b64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_375b68:
    // 0x375b68: 0x0  nop
    ctx->pc = 0x375b68u;
    // NOP
label_375b6c:
    // 0x375b6c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_375b70:
    if (ctx->pc == 0x375B70u) {
        ctx->pc = 0x375B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375B6Cu;
        // 0x375b70: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375B74u;
        goto label_375b74;
    }
    ctx->pc = 0x375B6Cu;
    {
        const bool branch_taken_0x375b6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x375b6c) {
            ctx->pc = 0x375B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x375B6Cu;
            // 0x375b70: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x375B74u;
            goto label_375b74;
        }
    }
    ctx->pc = 0x375B74u;
label_375b74:
    // 0x375b74: 0x11200016  beqz        $t1, . + 4 + (0x16 << 2)
label_375b78:
    if (ctx->pc == 0x375B78u) {
        ctx->pc = 0x375B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375B74u;
        // 0x375b78: 0xc7a10140  lwc1        $f1, 0x140($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x375B7Cu;
        goto label_375b7c;
    }
    ctx->pc = 0x375B74u;
    {
        const bool branch_taken_0x375b74 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x375B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375B74u;
        // 0x375b78: 0xc7a10140  lwc1        $f1, 0x140($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x375b74) {
            ctx->pc = 0x375BD0u;
            goto label_375bd0;
        }
    }
    ctx->pc = 0x375B7Cu;
label_375b7c:
    // 0x375b7c: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x375b7cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
label_375b80:
    // 0x375b80: 0xc7a20144  lwc1        $f2, 0x144($sp)
    ctx->pc = 0x375b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_375b84:
    // 0x375b84: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x375b84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_375b88:
    // 0x375b88: 0xc7a30148  lwc1        $f3, 0x148($sp)
    ctx->pc = 0x375b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_375b8c:
    // 0x375b8c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x375b8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_375b90:
    // 0x375b90: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x375b90u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_375b94:
    // 0x375b94: 0xe7a10150  swc1        $f1, 0x150($sp)
    ctx->pc = 0x375b94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_375b98:
    // 0x375b98: 0xe7a20154  swc1        $f2, 0x154($sp)
    ctx->pc = 0x375b98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_375b9c:
    // 0x375b9c: 0xe7a30158  swc1        $f3, 0x158($sp)
    ctx->pc = 0x375b9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_375ba0:
    // 0x375ba0: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x375ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_375ba4:
    // 0x375ba4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x375ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375ba8:
    // 0x375ba8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x375ba8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_375bac:
    // 0x375bac: 0xe7a10150  swc1        $f1, 0x150($sp)
    ctx->pc = 0x375bacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_375bb0:
    // 0x375bb0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x375bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375bb4:
    // 0x375bb4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x375bb4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_375bb8:
    // 0x375bb8: 0xe7a20154  swc1        $f2, 0x154($sp)
    ctx->pc = 0x375bb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_375bbc:
    // 0x375bbc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x375bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375bc0:
    // 0x375bc0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x375bc0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_375bc4:
    // 0x375bc4: 0x10000009  b           . + 4 + (0x9 << 2)
label_375bc8:
    if (ctx->pc == 0x375BC8u) {
        ctx->pc = 0x375BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375BC4u;
        // 0x375bc8: 0xe7a30158  swc1        $f3, 0x158($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x375BCCu;
        goto label_375bcc;
    }
    ctx->pc = 0x375BC4u;
    {
        const bool branch_taken_0x375bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375BC4u;
        // 0x375bc8: 0xe7a30158  swc1        $f3, 0x158($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x375bc4) {
            ctx->pc = 0x375BECu;
            goto label_375bec;
        }
    }
    ctx->pc = 0x375BCCu;
label_375bcc:
    // 0x375bcc: 0x0  nop
    ctx->pc = 0x375bccu;
    // NOP
label_375bd0:
    // 0x375bd0: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x375bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_375bd4:
    // 0x375bd4: 0x684a0007  ldl         $t2, 0x7($v0)
    ctx->pc = 0x375bd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_375bd8:
    // 0x375bd8: 0x6c4a0000  ldr         $t2, 0x0($v0)
    ctx->pc = 0x375bd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_375bdc:
    // 0x375bdc: 0x8c4b0008  lw          $t3, 0x8($v0)
    ctx->pc = 0x375bdcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_375be0:
    // 0x375be0: 0xb3aa0157  sdl         $t2, 0x157($sp)
    ctx->pc = 0x375be0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 343); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_375be4:
    // 0x375be4: 0xb7aa0150  sdr         $t2, 0x150($sp)
    ctx->pc = 0x375be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 336); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_375be8:
    // 0x375be8: 0xafab0158  sw          $t3, 0x158($sp)
    ctx->pc = 0x375be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 11));
label_375bec:
    // 0x375bec: 0xc7a30150  lwc1        $f3, 0x150($sp)
    ctx->pc = 0x375becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_375bf0:
    // 0x375bf0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x375bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375bf4:
    // 0x375bf4: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x375bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_375bf8:
    // 0x375bf8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x375bf8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_375bfc:
    // 0x375bfc: 0xc7a40154  lwc1        $f4, 0x154($sp)
    ctx->pc = 0x375bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_375c00:
    // 0x375c00: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x375c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375c04:
    // 0x375c04: 0xc7a30158  lwc1        $f3, 0x158($sp)
    ctx->pc = 0x375c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_375c08:
    // 0x375c08: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x375c08u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_375c0c:
    // 0x375c0c: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x375c0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_375c10:
    // 0x375c10: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x375c10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_375c14:
    // 0x375c14: 0xe7a20144  swc1        $f2, 0x144($sp)
    ctx->pc = 0x375c14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_375c18:
    // 0x375c18: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x375c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_375c1c:
    // 0x375c1c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x375c1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_375c20:
    // 0x375c20: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x375c20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_375c24:
    // 0x375c24: 0x6ba70157  ldl         $a3, 0x157($sp)
    ctx->pc = 0x375c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 343); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_375c28:
    // 0x375c28: 0x6fa70150  ldr         $a3, 0x150($sp)
    ctx->pc = 0x375c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 336); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_375c2c:
    // 0x375c2c: 0x8faa0158  lw          $t2, 0x158($sp)
    ctx->pc = 0x375c2cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_375c30:
    // 0x375c30: 0xb0c70007  sdl         $a3, 0x7($a2)
    ctx->pc = 0x375c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_375c34:
    // 0x375c34: 0xb4c70000  sdr         $a3, 0x0($a2)
    ctx->pc = 0x375c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_375c38:
    // 0x375c38: 0xacca0008  sw          $t2, 0x8($a2)
    ctx->pc = 0x375c38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 10));
label_375c3c:
    // 0x375c3c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x375c3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_375c40:
    // 0x375c40: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x375c40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_375c44:
    // 0x375c44: 0x46000b40  add.s       $f13, $f1, $f0
    ctx->pc = 0x375c44u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_375c48:
    // 0x375c48: 0x15200106  bnez        $t1, . + 4 + (0x106 << 2)
label_375c4c:
    if (ctx->pc == 0x375C4Cu) {
        ctx->pc = 0x375C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375C48u;
        // 0x375c4c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375C50u;
        goto label_375c50;
    }
    ctx->pc = 0x375C48u;
    {
        const bool branch_taken_0x375c48 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x375C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375C48u;
        // 0x375c4c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375c48) {
            ctx->pc = 0x376064u;
            goto label_376064;
        }
    }
    ctx->pc = 0x375C50u;
label_375c50:
    // 0x375c50: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x375c50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_375c54:
    // 0x375c54: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x375c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_375c58:
    // 0x375c58: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x375c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375c5c:
    // 0x375c5c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x375c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375c60:
    // 0x375c60: 0x46000a81  sub.s       $f10, $f1, $f0
    ctx->pc = 0x375c60u;
    ctx->f[10] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_375c64:
    // 0x375c64: 0xe7aa0164  swc1        $f10, 0x164($sp)
    ctx->pc = 0x375c64u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_375c68:
    // 0x375c68: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x375c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375c6c:
    // 0x375c6c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x375c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375c70:
    // 0x375c70: 0x46000a41  sub.s       $f9, $f1, $f0
    ctx->pc = 0x375c70u;
    ctx->f[9] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_375c74:
    // 0x375c74: 0xe7a90168  swc1        $f9, 0x168($sp)
    ctx->pc = 0x375c74u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_375c78:
    // 0x375c78: 0xc7a70018  lwc1        $f7, 0x18($sp)
    ctx->pc = 0x375c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_375c7c:
    // 0x375c7c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x375c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375c80:
    // 0x375c80: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x375c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375c84:
    // 0x375c84: 0xc7a60014  lwc1        $f6, 0x14($sp)
    ctx->pc = 0x375c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_375c88:
    // 0x375c88: 0x46003801  sub.s       $f0, $f7, $f0
    ctx->pc = 0x375c88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_375c8c:
    // 0x375c8c: 0x46013041  sub.s       $f1, $f6, $f1
    ctx->pc = 0x375c8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
label_375c90:
    // 0x375c90: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x375c90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
label_375c94:
    // 0x375c94: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x375c94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
label_375c98:
    // 0x375c98: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x375c98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_375c9c:
    // 0x375c9c: 0xe7a001d8  swc1        $f0, 0x1D8($sp)
    ctx->pc = 0x375c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_375ca0:
    // 0x375ca0: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x375ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_375ca4:
    // 0x375ca4: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x375ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_375ca8:
    // 0x375ca8: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x375ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_375cac:
    // 0x375cac: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x375cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_375cb0:
    // 0x375cb0: 0x10600068  beqz        $v1, . + 4 + (0x68 << 2)
label_375cb4:
    if (ctx->pc == 0x375CB4u) {
        ctx->pc = 0x375CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375CB0u;
        // 0x375cb4: 0x46005146  mov.s       $f5, $f10 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[10]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x375CB8u;
        goto label_375cb8;
    }
    ctx->pc = 0x375CB0u;
    {
        const bool branch_taken_0x375cb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x375CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375CB0u;
        // 0x375cb4: 0x46005146  mov.s       $f5, $f10 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x375cb0) {
            ctx->pc = 0x375E54u;
            goto label_375e54;
        }
    }
    ctx->pc = 0x375CB8u;
label_375cb8:
    // 0x375cb8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x375cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375cbc:
    // 0x375cbc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x375cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375cc0:
    // 0x375cc0: 0x46053182  mul.s       $f6, $f6, $f5
    ctx->pc = 0x375cc0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
label_375cc4:
    // 0x375cc4: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x375cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_375cc8:
    // 0x375cc8: 0x46004906  mov.s       $f4, $f9
    ctx->pc = 0x375cc8u;
    ctx->f[4] = FPU_MOV_S(ctx->f[9]);
label_375ccc:
    // 0x375ccc: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x375cccu;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_375cd0:
    // 0x375cd0: 0x460439c2  mul.s       $f7, $f7, $f4
    ctx->pc = 0x375cd0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_375cd4:
    // 0x375cd4: 0x44805800  mtc1        $zero, $f11
    ctx->pc = 0x375cd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_375cd8:
    // 0x375cd8: 0xe7a80160  swc1        $f8, 0x160($sp)
    ctx->pc = 0x375cd8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_375cdc:
    // 0x375cdc: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x375cdcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
label_375ce0:
    // 0x375ce0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x375ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375ce4:
    // 0x375ce4: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x375ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_375ce8:
    // 0x375ce8: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x375ce8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
label_375cec:
    // 0x375cec: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x375cecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
label_375cf0:
    // 0x375cf0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x375cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375cf4:
    // 0x375cf4: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x375cf4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_375cf8:
    // 0x375cf8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x375cf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_375cfc:
    // 0x375cfc: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x375cfcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
label_375d00:
    // 0x375d00: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x375d00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_375d04:
    // 0x375d04: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x375d04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_375d08:
    // 0x375d08: 0x46001181  sub.s       $f6, $f2, $f0
    ctx->pc = 0x375d08u;
    ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_375d0c:
    // 0x375d0c: 0x460b3036  c.le.s      $f6, $f11
    ctx->pc = 0x375d0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_375d10:
    // 0x375d10: 0x0  nop
    ctx->pc = 0x375d10u;
    // NOP
label_375d14:
    // 0x375d14: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_375d18:
    if (ctx->pc == 0x375D18u) {
        ctx->pc = 0x375D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375D14u;
        // 0x375d18: 0x46084002  mul.s       $f0, $f8, $f8 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x375D1Cu;
        goto label_375d1c;
    }
    ctx->pc = 0x375D14u;
    {
        const bool branch_taken_0x375d14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x375d14) {
            ctx->pc = 0x375D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x375D14u;
            // 0x375d18: 0x46084002  mul.s       $f0, $f8, $f8 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x375D40u;
            goto label_375d40;
        }
    }
    ctx->pc = 0x375D1Cu;
label_375d1c:
    // 0x375d1c: 0x68850007  ldl         $a1, 0x7($a0)
    ctx->pc = 0x375d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_375d20:
    // 0x375d20: 0x6c850000  ldr         $a1, 0x0($a0)
    ctx->pc = 0x375d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_375d24:
    // 0x375d24: 0x8c8a0008  lw          $t2, 0x8($a0)
    ctx->pc = 0x375d24u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_375d28:
    // 0x375d28: 0xb3a50177  sdl         $a1, 0x177($sp)
    ctx->pc = 0x375d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 375); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_375d2c:
    // 0x375d2c: 0xb7a50170  sdr         $a1, 0x170($sp)
    ctx->pc = 0x375d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 368); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_375d30:
    // 0x375d30: 0xafaa0178  sw          $t2, 0x178($sp)
    ctx->pc = 0x375d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 10));
label_375d34:
    // 0x375d34: 0x1000002c  b           . + 4 + (0x2C << 2)
label_375d38:
    if (ctx->pc == 0x375D38u) {
        ctx->pc = 0x375D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375D34u;
        // 0x375d38: 0xc7a30170  lwc1        $f3, 0x170($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x375D3Cu;
        goto label_375d3c;
    }
    ctx->pc = 0x375D34u;
    {
        const bool branch_taken_0x375d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375D34u;
        // 0x375d38: 0xc7a30170  lwc1        $f3, 0x170($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x375d34) {
            ctx->pc = 0x375DE8u;
            goto label_375de8;
        }
    }
    ctx->pc = 0x375D3Cu;
label_375d3c:
    // 0x375d3c: 0x0  nop
    ctx->pc = 0x375d3cu;
    // NOP
label_375d40:
    // 0x375d40: 0x460a5042  mul.s       $f1, $f10, $f10
    ctx->pc = 0x375d40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
label_375d44:
    // 0x375d44: 0x46094882  mul.s       $f2, $f9, $f9
    ctx->pc = 0x375d44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
label_375d48:
    // 0x375d48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x375d48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_375d4c:
    // 0x375d4c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x375d4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_375d50:
    // 0x375d50: 0x46005834  c.lt.s      $f11, $f0
    ctx->pc = 0x375d50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_375d54:
    // 0x375d54: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_375d58:
    if (ctx->pc == 0x375D58u) {
        ctx->pc = 0x375D5Cu;
        goto label_375d5c;
    }
    ctx->pc = 0x375D54u;
    {
        const bool branch_taken_0x375d54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x375d54) {
            ctx->pc = 0x375D6Cu;
            goto label_375d6c;
        }
    }
    ctx->pc = 0x375D5Cu;
label_375d5c:
    // 0x375d5c: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x375d5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_375d60:
    // 0x375d60: 0x0  nop
    ctx->pc = 0x375d60u;
    // NOP
label_375d64:
    // 0x375d64: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_375d68:
    if (ctx->pc == 0x375D68u) {
        ctx->pc = 0x375D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375D64u;
        // 0x375d68: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375D6Cu;
        goto label_375d6c;
    }
    ctx->pc = 0x375D64u;
    {
        const bool branch_taken_0x375d64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x375d64) {
            ctx->pc = 0x375D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x375D64u;
            // 0x375d68: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x375D6Cu;
            goto label_375d6c;
        }
    }
    ctx->pc = 0x375D6Cu;
label_375d6c:
    // 0x375d6c: 0x11200016  beqz        $t1, . + 4 + (0x16 << 2)
label_375d70:
    if (ctx->pc == 0x375D70u) {
        ctx->pc = 0x375D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375D6Cu;
        // 0x375d70: 0xc7a10160  lwc1        $f1, 0x160($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x375D74u;
        goto label_375d74;
    }
    ctx->pc = 0x375D6Cu;
    {
        const bool branch_taken_0x375d6c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x375D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375D6Cu;
        // 0x375d70: 0xc7a10160  lwc1        $f1, 0x160($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x375d6c) {
            ctx->pc = 0x375DC8u;
            goto label_375dc8;
        }
    }
    ctx->pc = 0x375D74u;
label_375d74:
    // 0x375d74: 0x46003183  div.s       $f6, $f6, $f0
    ctx->pc = 0x375d74u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[6], ctx->f[0]); }
label_375d78:
    // 0x375d78: 0xc7a20164  lwc1        $f2, 0x164($sp)
    ctx->pc = 0x375d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_375d7c:
    // 0x375d7c: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x375d7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_375d80:
    // 0x375d80: 0xc7a30168  lwc1        $f3, 0x168($sp)
    ctx->pc = 0x375d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_375d84:
    // 0x375d84: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x375d84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_375d88:
    // 0x375d88: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x375d88u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
label_375d8c:
    // 0x375d8c: 0xe7a10170  swc1        $f1, 0x170($sp)
    ctx->pc = 0x375d8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_375d90:
    // 0x375d90: 0xe7a20174  swc1        $f2, 0x174($sp)
    ctx->pc = 0x375d90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_375d94:
    // 0x375d94: 0xe7a30178  swc1        $f3, 0x178($sp)
    ctx->pc = 0x375d94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_375d98:
    // 0x375d98: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x375d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_375d9c:
    // 0x375d9c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x375d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375da0:
    // 0x375da0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x375da0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_375da4:
    // 0x375da4: 0xe7a10170  swc1        $f1, 0x170($sp)
    ctx->pc = 0x375da4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_375da8:
    // 0x375da8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x375da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375dac:
    // 0x375dac: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x375dacu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_375db0:
    // 0x375db0: 0xe7a20174  swc1        $f2, 0x174($sp)
    ctx->pc = 0x375db0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_375db4:
    // 0x375db4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x375db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375db8:
    // 0x375db8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x375db8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_375dbc:
    // 0x375dbc: 0x10000009  b           . + 4 + (0x9 << 2)
label_375dc0:
    if (ctx->pc == 0x375DC0u) {
        ctx->pc = 0x375DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375DBCu;
        // 0x375dc0: 0xe7a30178  swc1        $f3, 0x178($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x375DC4u;
        goto label_375dc4;
    }
    ctx->pc = 0x375DBCu;
    {
        const bool branch_taken_0x375dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375DBCu;
        // 0x375dc0: 0xe7a30178  swc1        $f3, 0x178($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x375dbc) {
            ctx->pc = 0x375DE4u;
            goto label_375de4;
        }
    }
    ctx->pc = 0x375DC4u;
label_375dc4:
    // 0x375dc4: 0x0  nop
    ctx->pc = 0x375dc4u;
    // NOP
label_375dc8:
    // 0x375dc8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x375dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_375dcc:
    // 0x375dcc: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x375dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_375dd0:
    // 0x375dd0: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x375dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_375dd4:
    // 0x375dd4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x375dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_375dd8:
    // 0x375dd8: 0xb3a40177  sdl         $a0, 0x177($sp)
    ctx->pc = 0x375dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 375); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_375ddc:
    // 0x375ddc: 0xb7a40170  sdr         $a0, 0x170($sp)
    ctx->pc = 0x375ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 368); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_375de0:
    // 0x375de0: 0xafa50178  sw          $a1, 0x178($sp)
    ctx->pc = 0x375de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 5));
label_375de4:
    // 0x375de4: 0xc7a30170  lwc1        $f3, 0x170($sp)
    ctx->pc = 0x375de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_375de8:
    // 0x375de8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x375de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_375dec:
    // 0x375dec: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x375decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375df0:
    // 0x375df0: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x375df0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_375df4:
    // 0x375df4: 0xc7a40174  lwc1        $f4, 0x174($sp)
    ctx->pc = 0x375df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_375df8:
    // 0x375df8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x375df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375dfc:
    // 0x375dfc: 0xc7a30178  lwc1        $f3, 0x178($sp)
    ctx->pc = 0x375dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_375e00:
    // 0x375e00: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x375e00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_375e04:
    // 0x375e04: 0xe7a20160  swc1        $f2, 0x160($sp)
    ctx->pc = 0x375e04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_375e08:
    // 0x375e08: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x375e08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_375e0c:
    // 0x375e0c: 0xe7a10164  swc1        $f1, 0x164($sp)
    ctx->pc = 0x375e0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_375e10:
    // 0x375e10: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x375e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_375e14:
    // 0x375e14: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x375e14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_375e18:
    // 0x375e18: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x375e18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_375e1c:
    // 0x375e1c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x375e1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_375e20:
    // 0x375e20: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x375e20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_375e24:
    // 0x375e24: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
label_375e28:
    if (ctx->pc == 0x375E28u) {
        ctx->pc = 0x375E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375E24u;
        // 0x375e28: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x375E2Cu;
        goto label_375e2c;
    }
    ctx->pc = 0x375E24u;
    {
        const bool branch_taken_0x375e24 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x375E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375E24u;
        // 0x375e28: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x375e24) {
            ctx->pc = 0x375E38u;
            goto label_375e38;
        }
    }
    ctx->pc = 0x375E2Cu;
label_375e2c:
    // 0x375e2c: 0x460d1034  c.lt.s      $f2, $f13
    ctx->pc = 0x375e2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_375e30:
    // 0x375e30: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_375e34:
    if (ctx->pc == 0x375E34u) {
        ctx->pc = 0x375E38u;
        goto label_375e38;
    }
    ctx->pc = 0x375E30u;
    {
        const bool branch_taken_0x375e30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x375e30) {
            ctx->pc = 0x375E54u;
            goto label_375e54;
        }
    }
    ctx->pc = 0x375E38u;
label_375e38:
    // 0x375e38: 0x6ba20177  ldl         $v0, 0x177($sp)
    ctx->pc = 0x375e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 375); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_375e3c:
    // 0x375e3c: 0x6fa20170  ldr         $v0, 0x170($sp)
    ctx->pc = 0x375e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 368); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_375e40:
    // 0x375e40: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x375e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_375e44:
    // 0x375e44: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x375e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_375e48:
    // 0x375e48: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x375e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_375e4c:
    // 0x375e4c: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x375e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_375e50:
    // 0x375e50: 0x46001346  mov.s       $f13, $f2
    ctx->pc = 0x375e50u;
    ctx->f[13] = FPU_MOV_S(ctx->f[2]);
label_375e54:
    // 0x375e54: 0x15200083  bnez        $t1, . + 4 + (0x83 << 2)
label_375e58:
    if (ctx->pc == 0x375E58u) {
        ctx->pc = 0x375E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375E54u;
        // 0x375e58: 0xe33825  or          $a3, $a3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375E5Cu;
        goto label_375e5c;
    }
    ctx->pc = 0x375E54u;
    {
        const bool branch_taken_0x375e54 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x375E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375E54u;
        // 0x375e58: 0xe33825  or          $a3, $a3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375e54) {
            ctx->pc = 0x376064u;
            goto label_376064;
        }
    }
    ctx->pc = 0x375E5Cu;
label_375e5c:
    // 0x375e5c: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x375e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_375e60:
    // 0x375e60: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x375e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_375e64:
    // 0x375e64: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x375e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375e68:
    // 0x375e68: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x375e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375e6c:
    // 0x375e6c: 0x46000a81  sub.s       $f10, $f1, $f0
    ctx->pc = 0x375e6cu;
    ctx->f[10] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_375e70:
    // 0x375e70: 0xe7aa0184  swc1        $f10, 0x184($sp)
    ctx->pc = 0x375e70u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_375e74:
    // 0x375e74: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x375e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375e78:
    // 0x375e78: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x375e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375e7c:
    // 0x375e7c: 0x46000a41  sub.s       $f9, $f1, $f0
    ctx->pc = 0x375e7cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_375e80:
    // 0x375e80: 0xe7a90188  swc1        $f9, 0x188($sp)
    ctx->pc = 0x375e80u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_375e84:
    // 0x375e84: 0xc7a70018  lwc1        $f7, 0x18($sp)
    ctx->pc = 0x375e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_375e88:
    // 0x375e88: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x375e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375e8c:
    // 0x375e8c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x375e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375e90:
    // 0x375e90: 0xc7a60014  lwc1        $f6, 0x14($sp)
    ctx->pc = 0x375e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_375e94:
    // 0x375e94: 0x46003801  sub.s       $f0, $f7, $f0
    ctx->pc = 0x375e94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_375e98:
    // 0x375e98: 0x46013041  sub.s       $f1, $f6, $f1
    ctx->pc = 0x375e98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
label_375e9c:
    // 0x375e9c: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x375e9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
label_375ea0:
    // 0x375ea0: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x375ea0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
label_375ea4:
    // 0x375ea4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x375ea4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_375ea8:
    // 0x375ea8: 0xe7a001dc  swc1        $f0, 0x1DC($sp)
    ctx->pc = 0x375ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
label_375eac:
    // 0x375eac: 0x8fa301dc  lw          $v1, 0x1DC($sp)
    ctx->pc = 0x375eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_375eb0:
    // 0x375eb0: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x375eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_375eb4:
    // 0x375eb4: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x375eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_375eb8:
    // 0x375eb8: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x375eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_375ebc:
    // 0x375ebc: 0x10600068  beqz        $v1, . + 4 + (0x68 << 2)
label_375ec0:
    if (ctx->pc == 0x375EC0u) {
        ctx->pc = 0x375EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375EBCu;
        // 0x375ec0: 0x46005146  mov.s       $f5, $f10 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[10]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x375EC4u;
        goto label_375ec4;
    }
    ctx->pc = 0x375EBCu;
    {
        const bool branch_taken_0x375ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x375EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375EBCu;
        // 0x375ec0: 0x46005146  mov.s       $f5, $f10 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x375ebc) {
            ctx->pc = 0x376060u;
            goto label_376060;
        }
    }
    ctx->pc = 0x375EC4u;
label_375ec4:
    // 0x375ec4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x375ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375ec8:
    // 0x375ec8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x375ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375ecc:
    // 0x375ecc: 0x46053182  mul.s       $f6, $f6, $f5
    ctx->pc = 0x375eccu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
label_375ed0:
    // 0x375ed0: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x375ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_375ed4:
    // 0x375ed4: 0x46004906  mov.s       $f4, $f9
    ctx->pc = 0x375ed4u;
    ctx->f[4] = FPU_MOV_S(ctx->f[9]);
label_375ed8:
    // 0x375ed8: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x375ed8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_375edc:
    // 0x375edc: 0x460439c2  mul.s       $f7, $f7, $f4
    ctx->pc = 0x375edcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_375ee0:
    // 0x375ee0: 0x44805800  mtc1        $zero, $f11
    ctx->pc = 0x375ee0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_375ee4:
    // 0x375ee4: 0xe7a80180  swc1        $f8, 0x180($sp)
    ctx->pc = 0x375ee4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_375ee8:
    // 0x375ee8: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x375ee8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
label_375eec:
    // 0x375eec: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x375eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375ef0:
    // 0x375ef0: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x375ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_375ef4:
    // 0x375ef4: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x375ef4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
label_375ef8:
    // 0x375ef8: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x375ef8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
label_375efc:
    // 0x375efc: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x375efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375f00:
    // 0x375f00: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x375f00u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_375f04:
    // 0x375f04: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x375f04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_375f08:
    // 0x375f08: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x375f08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
label_375f0c:
    // 0x375f0c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x375f0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_375f10:
    // 0x375f10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x375f10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_375f14:
    // 0x375f14: 0x46001181  sub.s       $f6, $f2, $f0
    ctx->pc = 0x375f14u;
    ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_375f18:
    // 0x375f18: 0x460b3036  c.le.s      $f6, $f11
    ctx->pc = 0x375f18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_375f1c:
    // 0x375f1c: 0x0  nop
    ctx->pc = 0x375f1cu;
    // NOP
label_375f20:
    // 0x375f20: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_375f24:
    if (ctx->pc == 0x375F24u) {
        ctx->pc = 0x375F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375F20u;
        // 0x375f24: 0x46084002  mul.s       $f0, $f8, $f8 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x375F28u;
        goto label_375f28;
    }
    ctx->pc = 0x375F20u;
    {
        const bool branch_taken_0x375f20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x375f20) {
            ctx->pc = 0x375F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x375F20u;
            // 0x375f24: 0x46084002  mul.s       $f0, $f8, $f8 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x375F48u;
            goto label_375f48;
        }
    }
    ctx->pc = 0x375F28u;
label_375f28:
    // 0x375f28: 0x688b0007  ldl         $t3, 0x7($a0)
    ctx->pc = 0x375f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_375f2c:
    // 0x375f2c: 0x6c8b0000  ldr         $t3, 0x0($a0)
    ctx->pc = 0x375f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_375f30:
    // 0x375f30: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x375f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_375f34:
    // 0x375f34: 0xb3ab0197  sdl         $t3, 0x197($sp)
    ctx->pc = 0x375f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_375f38:
    // 0x375f38: 0xb7ab0190  sdr         $t3, 0x190($sp)
    ctx->pc = 0x375f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_375f3c:
    // 0x375f3c: 0xafa20198  sw          $v0, 0x198($sp)
    ctx->pc = 0x375f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
label_375f40:
    // 0x375f40: 0x1000002b  b           . + 4 + (0x2B << 2)
label_375f44:
    if (ctx->pc == 0x375F44u) {
        ctx->pc = 0x375F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375F40u;
        // 0x375f44: 0xc7a30190  lwc1        $f3, 0x190($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x375F48u;
        goto label_375f48;
    }
    ctx->pc = 0x375F40u;
    {
        const bool branch_taken_0x375f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375F40u;
        // 0x375f44: 0xc7a30190  lwc1        $f3, 0x190($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x375f40) {
            ctx->pc = 0x375FF0u;
            goto label_375ff0;
        }
    }
    ctx->pc = 0x375F48u;
label_375f48:
    // 0x375f48: 0x460a5042  mul.s       $f1, $f10, $f10
    ctx->pc = 0x375f48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
label_375f4c:
    // 0x375f4c: 0x46094882  mul.s       $f2, $f9, $f9
    ctx->pc = 0x375f4cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
label_375f50:
    // 0x375f50: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x375f50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_375f54:
    // 0x375f54: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x375f54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_375f58:
    // 0x375f58: 0x46005834  c.lt.s      $f11, $f0
    ctx->pc = 0x375f58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_375f5c:
    // 0x375f5c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_375f60:
    if (ctx->pc == 0x375F60u) {
        ctx->pc = 0x375F64u;
        goto label_375f64;
    }
    ctx->pc = 0x375F5Cu;
    {
        const bool branch_taken_0x375f5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x375f5c) {
            ctx->pc = 0x375F74u;
            goto label_375f74;
        }
    }
    ctx->pc = 0x375F64u;
label_375f64:
    // 0x375f64: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x375f64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_375f68:
    // 0x375f68: 0x0  nop
    ctx->pc = 0x375f68u;
    // NOP
label_375f6c:
    // 0x375f6c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_375f70:
    if (ctx->pc == 0x375F70u) {
        ctx->pc = 0x375F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375F6Cu;
        // 0x375f70: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375F74u;
        goto label_375f74;
    }
    ctx->pc = 0x375F6Cu;
    {
        const bool branch_taken_0x375f6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x375f6c) {
            ctx->pc = 0x375F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x375F6Cu;
            // 0x375f70: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x375F74u;
            goto label_375f74;
        }
    }
    ctx->pc = 0x375F74u;
label_375f74:
    // 0x375f74: 0x11200016  beqz        $t1, . + 4 + (0x16 << 2)
label_375f78:
    if (ctx->pc == 0x375F78u) {
        ctx->pc = 0x375F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375F74u;
        // 0x375f78: 0xc7a10180  lwc1        $f1, 0x180($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x375F7Cu;
        goto label_375f7c;
    }
    ctx->pc = 0x375F74u;
    {
        const bool branch_taken_0x375f74 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x375F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375F74u;
        // 0x375f78: 0xc7a10180  lwc1        $f1, 0x180($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x375f74) {
            ctx->pc = 0x375FD0u;
            goto label_375fd0;
        }
    }
    ctx->pc = 0x375F7Cu;
label_375f7c:
    // 0x375f7c: 0x46003183  div.s       $f6, $f6, $f0
    ctx->pc = 0x375f7cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[6], ctx->f[0]); }
label_375f80:
    // 0x375f80: 0xc7a20184  lwc1        $f2, 0x184($sp)
    ctx->pc = 0x375f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_375f84:
    // 0x375f84: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x375f84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_375f88:
    // 0x375f88: 0xc7a30188  lwc1        $f3, 0x188($sp)
    ctx->pc = 0x375f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_375f8c:
    // 0x375f8c: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x375f8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_375f90:
    // 0x375f90: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x375f90u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
label_375f94:
    // 0x375f94: 0xe7a10190  swc1        $f1, 0x190($sp)
    ctx->pc = 0x375f94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_375f98:
    // 0x375f98: 0xe7a20194  swc1        $f2, 0x194($sp)
    ctx->pc = 0x375f98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_375f9c:
    // 0x375f9c: 0xe7a30198  swc1        $f3, 0x198($sp)
    ctx->pc = 0x375f9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_375fa0:
    // 0x375fa0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x375fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_375fa4:
    // 0x375fa4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x375fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375fa8:
    // 0x375fa8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x375fa8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_375fac:
    // 0x375fac: 0xe7a10190  swc1        $f1, 0x190($sp)
    ctx->pc = 0x375facu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_375fb0:
    // 0x375fb0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x375fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375fb4:
    // 0x375fb4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x375fb4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_375fb8:
    // 0x375fb8: 0xe7a20194  swc1        $f2, 0x194($sp)
    ctx->pc = 0x375fb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_375fbc:
    // 0x375fbc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x375fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375fc0:
    // 0x375fc0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x375fc0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_375fc4:
    // 0x375fc4: 0x10000009  b           . + 4 + (0x9 << 2)
label_375fc8:
    if (ctx->pc == 0x375FC8u) {
        ctx->pc = 0x375FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375FC4u;
        // 0x375fc8: 0xe7a30198  swc1        $f3, 0x198($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x375FCCu;
        goto label_375fcc;
    }
    ctx->pc = 0x375FC4u;
    {
        const bool branch_taken_0x375fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375FC4u;
        // 0x375fc8: 0xe7a30198  swc1        $f3, 0x198($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x375fc4) {
            ctx->pc = 0x375FECu;
            goto label_375fec;
        }
    }
    ctx->pc = 0x375FCCu;
label_375fcc:
    // 0x375fcc: 0x0  nop
    ctx->pc = 0x375fccu;
    // NOP
label_375fd0:
    // 0x375fd0: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x375fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_375fd4:
    // 0x375fd4: 0x68490007  ldl         $t1, 0x7($v0)
    ctx->pc = 0x375fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_375fd8:
    // 0x375fd8: 0x6c490000  ldr         $t1, 0x0($v0)
    ctx->pc = 0x375fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_375fdc:
    // 0x375fdc: 0x8c4a0008  lw          $t2, 0x8($v0)
    ctx->pc = 0x375fdcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_375fe0:
    // 0x375fe0: 0xb3a90197  sdl         $t1, 0x197($sp)
    ctx->pc = 0x375fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_375fe4:
    // 0x375fe4: 0xb7a90190  sdr         $t1, 0x190($sp)
    ctx->pc = 0x375fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_375fe8:
    // 0x375fe8: 0xafaa0198  sw          $t2, 0x198($sp)
    ctx->pc = 0x375fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 10));
label_375fec:
    // 0x375fec: 0xc7a30190  lwc1        $f3, 0x190($sp)
    ctx->pc = 0x375fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_375ff0:
    // 0x375ff0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x375ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_375ff4:
    // 0x375ff4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x375ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375ff8:
    // 0x375ff8: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x375ff8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_375ffc:
    // 0x375ffc: 0xc7a40194  lwc1        $f4, 0x194($sp)
    ctx->pc = 0x375ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_376000:
    // 0x376000: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x376000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_376004:
    // 0x376004: 0xc7a30198  lwc1        $f3, 0x198($sp)
    ctx->pc = 0x376004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_376008:
    // 0x376008: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x376008u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_37600c:
    // 0x37600c: 0xe7a20180  swc1        $f2, 0x180($sp)
    ctx->pc = 0x37600cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_376010:
    // 0x376010: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x376010u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_376014:
    // 0x376014: 0xe7a10184  swc1        $f1, 0x184($sp)
    ctx->pc = 0x376014u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_376018:
    // 0x376018: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x376018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_37601c:
    // 0x37601c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x37601cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_376020:
    // 0x376020: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x376020u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_376024:
    // 0x376024: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x376024u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_376028:
    // 0x376028: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x376028u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_37602c:
    // 0x37602c: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
label_376030:
    if (ctx->pc == 0x376030u) {
        ctx->pc = 0x376030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37602Cu;
        // 0x376030: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x376034u;
        goto label_376034;
    }
    ctx->pc = 0x37602Cu;
    {
        const bool branch_taken_0x37602c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x376030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37602Cu;
        // 0x376030: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37602c) {
            ctx->pc = 0x376044u;
            goto label_376044;
        }
    }
    ctx->pc = 0x376034u;
label_376034:
    // 0x376034: 0x460d1034  c.lt.s      $f2, $f13
    ctx->pc = 0x376034u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_376038:
    // 0x376038: 0x0  nop
    ctx->pc = 0x376038u;
    // NOP
label_37603c:
    // 0x37603c: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_376040:
    if (ctx->pc == 0x376040u) {
        ctx->pc = 0x376040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37603Cu;
        // 0x376040: 0xe33825  or          $a3, $a3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376044u;
        goto label_376044;
    }
    ctx->pc = 0x37603Cu;
    {
        const bool branch_taken_0x37603c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37603c) {
            ctx->pc = 0x376040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37603Cu;
            // 0x376040: 0xe33825  or          $a3, $a3, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x376064u;
            goto label_376064;
        }
    }
    ctx->pc = 0x376044u;
label_376044:
    // 0x376044: 0x6ba50197  ldl         $a1, 0x197($sp)
    ctx->pc = 0x376044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_376048:
    // 0x376048: 0x6fa50190  ldr         $a1, 0x190($sp)
    ctx->pc = 0x376048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_37604c:
    // 0x37604c: 0x8fa80198  lw          $t0, 0x198($sp)
    ctx->pc = 0x37604cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_376050:
    // 0x376050: 0xb0c50007  sdl         $a1, 0x7($a2)
    ctx->pc = 0x376050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_376054:
    // 0x376054: 0xb4c50000  sdr         $a1, 0x0($a2)
    ctx->pc = 0x376054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_376058:
    // 0x376058: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x376058u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
label_37605c:
    // 0x37605c: 0x46001346  mov.s       $f13, $f2
    ctx->pc = 0x37605cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[2]);
label_376060:
    // 0x376060: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x376060u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_376064:
    // 0x376064: 0x14e00009  bnez        $a3, . + 4 + (0x9 << 2)
label_376068:
    if (ctx->pc == 0x376068u) {
        ctx->pc = 0x376068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376064u;
        // 0x376068: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37606Cu;
        goto label_37606c;
    }
    ctx->pc = 0x376064u;
    {
        const bool branch_taken_0x376064 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x376068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376064u;
        // 0x376068: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x376064) {
            ctx->pc = 0x37608Cu;
            goto label_37608c;
        }
    }
    ctx->pc = 0x37606Cu;
label_37606c:
    // 0x37606c: 0x460e7342  mul.s       $f13, $f14, $f14
    ctx->pc = 0x37606cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
label_376070:
    // 0x376070: 0x6bab0017  ldl         $t3, 0x17($sp)
    ctx->pc = 0x376070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_376074:
    // 0x376074: 0x6fab0010  ldr         $t3, 0x10($sp)
    ctx->pc = 0x376074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_376078:
    // 0x376078: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x376078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_37607c:
    // 0x37607c: 0xb0cb0007  sdl         $t3, 0x7($a2)
    ctx->pc = 0x37607cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_376080:
    // 0x376080: 0xb4cb0000  sdr         $t3, 0x0($a2)
    ctx->pc = 0x376080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_376084:
    // 0x376084: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x376084u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_376088:
    // 0x376088: 0x46006806  mov.s       $f0, $f13
    ctx->pc = 0x376088u;
    ctx->f[0] = FPU_MOV_S(ctx->f[13]);
label_37608c:
    // 0x37608c: 0x3e00008  jr          $ra
label_376090:
    if (ctx->pc == 0x376090u) {
        ctx->pc = 0x376090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37608Cu;
        // 0x376090: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376094u;
        goto label_376094;
    }
    ctx->pc = 0x37608Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37608Cu;
        // 0x376090: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37608Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376094u;
label_376094:
    // 0x376094: 0x0  nop
    ctx->pc = 0x376094u;
    // NOP
label_376098:
    // 0x376098: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x376098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_37609c:
    // 0x37609c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x37609cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3760a0:
    // 0x3760a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3760a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3760a4:
    // 0x3760a4: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x3760a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_3760a8:
    // 0x3760a8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3760a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3760ac:
    // 0x3760ac: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x3760acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_3760b0:
    // 0x3760b0: 0x2443c430  addiu       $v1, $v0, -0x3BD0
    ctx->pc = 0x3760b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951984));
label_3760b4:
    // 0x3760b4: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x3760b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_3760b8:
    // 0x3760b8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3760b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3760bc:
    // 0x3760bc: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x3760bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_3760c0:
    // 0x3760c0: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x3760c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3760c4:
    // 0x3760c4: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3760c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_3760c8:
    // 0x3760c8: 0xe7b70138  swc1        $f23, 0x138($sp)
    ctx->pc = 0x3760c8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_3760cc:
    // 0x3760cc: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x3760ccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3760d0:
    // 0x3760d0: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x3760d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_3760d4:
    // 0x3760d4: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x3760d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_3760d8:
    // 0x3760d8: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x3760d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_3760dc:
    // 0x3760dc: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x3760dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_3760e0:
    // 0x3760e0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3760e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3760e4:
    // 0x3760e4: 0xe7bc0160  swc1        $f28, 0x160($sp)
    ctx->pc = 0x3760e4u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_3760e8:
    // 0x3760e8: 0xe7bb0158  swc1        $f27, 0x158($sp)
    ctx->pc = 0x3760e8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_3760ec:
    // 0x3760ec: 0xe7ba0150  swc1        $f26, 0x150($sp)
    ctx->pc = 0x3760ecu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_3760f0:
    // 0x3760f0: 0xe7b90148  swc1        $f25, 0x148($sp)
    ctx->pc = 0x3760f0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_3760f4:
    // 0x3760f4: 0xe7b80140  swc1        $f24, 0x140($sp)
    ctx->pc = 0x3760f4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_3760f8:
    // 0x3760f8: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x3760f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_3760fc:
    // 0x3760fc: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x3760fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_376100:
    // 0x376100: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x376100u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_376104:
    // 0x376104: 0xc7818110  lwc1        $f1, -0x7EF0($gp)
    ctx->pc = 0x376104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_376108:
    // 0x376108: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x376108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37610c:
    // 0x37610c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x37610cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_376110:
    // 0x376110: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x376110u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_376114:
    // 0x376114: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x376114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_376118:
    // 0x376118: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x376118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_37611c:
    // 0x37611c: 0x8c43c430  lw          $v1, -0x3BD0($v0)
    ctx->pc = 0x37611cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951984)));
label_376120:
    // 0x376120: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x376120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_376124:
    // 0x376124: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x376124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_376128:
    // 0x376128: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x376128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_37612c:
    // 0x37612c: 0x66b821  addu        $s7, $v1, $a2
    ctx->pc = 0x37612cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_376130:
    // 0x376130: 0xa49021  addu        $s2, $a1, $a0
    ctx->pc = 0x376130u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_376134:
    // 0x376134: 0xc7978128  lwc1        $f23, -0x7ED8($gp)
    ctx->pc = 0x376134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_376138:
    // 0x376138: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x376138u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_37613c:
    // 0x37613c: 0x94a50084  lhu         $a1, 0x84($a1)
    ctx->pc = 0x37613cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 132)));
label_376140:
    // 0x376140: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x376140u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_376144:
    // 0x376144: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x376144u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_376148:
    // 0x376148: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x376148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_37614c:
    // 0x37614c: 0x421818  mult        $v1, $v0, $v0
    ctx->pc = 0x37614cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_376150:
    // 0x376150: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
label_376154:
    if (ctx->pc == 0x376154u) {
        ctx->pc = 0x376154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376150u;
        // 0x376154: 0x62b018  mult        $s6, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x376158u;
        goto label_376158;
    }
    ctx->pc = 0x376150u;
    {
        const bool branch_taken_0x376150 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x376154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376150u;
        // 0x376154: 0x62b018  mult        $s6, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x376150) {
            ctx->pc = 0x376164u;
            goto label_376164;
        }
    }
    ctx->pc = 0x376158u;
label_376158:
    // 0x376158: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x376158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_37615c:
    // 0x37615c: 0x24090007  addiu       $t1, $zero, 0x7
    ctx->pc = 0x37615cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_376160:
    // 0x376160: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x376160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_376164:
    // 0x376164: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x376164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_376168:
    // 0x376168: 0x8fa80064  lw          $t0, 0x64($sp)
    ctx->pc = 0x376168u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_37616c:
    // 0x37616c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x37616cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_376170:
    // 0x376170: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x376170u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_376174:
    // 0x376174: 0x24e30002  addiu       $v1, $a3, 0x2
    ctx->pc = 0x376174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_376178:
    // 0x376178: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x376178u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_37617c:
    // 0x37617c: 0x123202a  slt         $a0, $t1, $v1
    ctx->pc = 0x37617cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_376180:
    // 0x376180: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x376180u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_376184:
    // 0x376184: 0x124180b  movn        $v1, $t1, $a0
    ctx->pc = 0x376184u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 9));
label_376188:
    // 0x376188: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x376188u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_37618c:
    // 0x37618c: 0x103202a  slt         $a0, $t0, $v1
    ctx->pc = 0x37618cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_376190:
    // 0x376190: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x376190u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_376194:
    // 0x376194: 0x64400b  movn        $t0, $v1, $a0
    ctx->pc = 0x376194u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
label_376198:
    // 0x376198: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x376198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_37619c:
    // 0x37619c: 0xafa80064  sw          $t0, 0x64($sp)
    ctx->pc = 0x37619cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 8));
label_3761a0:
    // 0x3761a0: 0xafa60058  sw          $a2, 0x58($sp)
    ctx->pc = 0x3761a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 6));
label_3761a4:
    // 0x3761a4: 0x24f50001  addiu       $s5, $a3, 0x1
    ctx->pc = 0x3761a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3761a8:
    // 0x3761a8: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x3761a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
label_3761ac:
    // 0x3761ac: 0x1ac000ea  blez        $s6, . + 4 + (0xEA << 2)
label_3761b0:
    if (ctx->pc == 0x3761B0u) {
        ctx->pc = 0x3761B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3761ACu;
        // 0x3761b0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3761B4u;
        goto label_3761b4;
    }
    ctx->pc = 0x3761ACu;
    {
        const bool branch_taken_0x3761ac = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x3761B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3761ACu;
        // 0x3761b0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3761ac) {
            ctx->pc = 0x376558u;
            goto label_376558;
        }
    }
    ctx->pc = 0x3761B4u;
label_3761b4:
    // 0x3761b4: 0x115102a  slt         $v0, $t0, $s5
    ctx->pc = 0x3761b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_3761b8:
    // 0x3761b8: 0x144000e8  bnez        $v0, . + 4 + (0xE8 << 2)
label_3761bc:
    if (ctx->pc == 0x3761BCu) {
        ctx->pc = 0x3761BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3761B8u;
        // 0x3761bc: 0x3c060062  lui         $a2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3761C0u;
        goto label_3761c0;
    }
    ctx->pc = 0x3761B8u;
    {
        const bool branch_taken_0x3761b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3761BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3761B8u;
        // 0x3761bc: 0x3c060062  lui         $a2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3761b8) {
            ctx->pc = 0x37655Cu;
            goto label_37655c;
        }
    }
    ctx->pc = 0x3761C0u;
label_3761c0:
    // 0x3761c0: 0x46001706  mov.s       $f28, $f2
    ctx->pc = 0x3761c0u;
    ctx->f[28] = FPU_MOV_S(ctx->f[2]);
label_3761c4:
    // 0x3761c4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3761c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3761c8:
    // 0x3761c8: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x3761c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_3761cc:
    // 0x3761cc: 0x0  nop
    ctx->pc = 0x3761ccu;
    // NOP
label_3761d0:
    // 0x3761d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3761d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3761d4:
    // 0x3761d4: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x3761d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_3761d8:
    // 0x3761d8: 0x8e430064  lw          $v1, 0x64($s2)
    ctx->pc = 0x3761d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_3761dc:
    // 0x3761dc: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x3761dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_3761e0:
    // 0x3761e0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x3761e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_3761e4:
    // 0x3761e4: 0x124382a  slt         $a3, $t1, $a0
    ctx->pc = 0x3761e4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3761e8:
    // 0x3761e8: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x3761e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_3761ec:
    // 0x3761ec: 0x122282a  slt         $a1, $t1, $v0
    ctx->pc = 0x3761ecu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3761f0:
    // 0x3761f0: 0x123302a  slt         $a2, $t1, $v1
    ctx->pc = 0x3761f0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3761f4:
    // 0x3761f4: 0x105100a  movz        $v0, $t0, $a1
    ctx->pc = 0x3761f4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 8));
label_3761f8:
    // 0x3761f8: 0x107200a  movz        $a0, $t0, $a3
    ctx->pc = 0x3761f8u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 8));
label_3761fc:
    // 0x3761fc: 0x106180a  movz        $v1, $t0, $a2
    ctx->pc = 0x3761fcu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 8));
label_376200:
    // 0x376200: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x376200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_376204:
    // 0x376204: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x376204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_376208:
    // 0x376208: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x376208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_37620c:
    // 0x37620c: 0x882004  sllv        $a0, $t0, $a0
    ctx->pc = 0x37620cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
label_376210:
    // 0x376210: 0x481004  sllv        $v0, $t0, $v0
    ctx->pc = 0x376210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
label_376214:
    // 0x376214: 0x681804  sllv        $v1, $t0, $v1
    ctx->pc = 0x376214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 3) & 0x1F));
label_376218:
    // 0x376218: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x376218u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37621c:
    // 0x37621c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37621cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_376220:
    // 0x376220: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x376220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_376224:
    // 0x376224: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x376224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_376228:
    // 0x376228: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x376228u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_37622c:
    // 0x37622c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x37622cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_376230:
    // 0x376230: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x376230u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_376234:
    // 0x376234: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x376234u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_376238:
    // 0x376238: 0xa4202a  slt         $a0, $a1, $a0
    ctx->pc = 0x376238u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_37623c:
    // 0x37623c: 0x4600e003  div.s       $f0, $f28, $f0
    ctx->pc = 0x37623cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[28], ctx->f[0]); }
label_376240:
    // 0x376240: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x376240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_376244:
    // 0x376244: 0x4602e083  div.s       $f2, $f28, $f2
    ctx->pc = 0x376244u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[28], ctx->f[2]); }
label_376248:
    // 0x376248: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x376248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
label_37624c:
    // 0x37624c: 0x4601e043  div.s       $f1, $f28, $f1
    ctx->pc = 0x37624cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[28], ctx->f[1]); }
label_376250:
    // 0x376250: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x376250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_376254:
    // 0x376254: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x376254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_376258:
    // 0x376258: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x376258u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_37625c:
    // 0x37625c: 0x108000a9  beqz        $a0, . + 4 + (0xA9 << 2)
label_376260:
    if (ctx->pc == 0x376260u) {
        ctx->pc = 0x376260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37625Cu;
        // 0x376260: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x376264u;
        goto label_376264;
    }
    ctx->pc = 0x37625Cu;
    {
        const bool branch_taken_0x37625c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x376260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37625Cu;
        // 0x376260: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37625c) {
            ctx->pc = 0x376504u;
            goto label_376504;
        }
    }
    ctx->pc = 0x376264u;
label_376264:
    // 0x376264: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x376264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_376268:
    // 0x376268: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x376268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
label_37626c:
    // 0x37626c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x37626cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_376270:
    // 0x376270: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x376270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_376274:
    // 0x376274: 0x0  nop
    ctx->pc = 0x376274u;
    // NOP
label_376278:
    // 0x376278: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x376278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37627c:
    // 0x37627c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x37627cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_376280:
    // 0x376280: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x376280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_376284:
    // 0x376284: 0xc6640000  lwc1        $f4, 0x0($s3)
    ctx->pc = 0x376284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_376288:
    // 0x376288: 0x461b0802  mul.s       $f0, $f1, $f27
    ctx->pc = 0x376288u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[27]);
label_37628c:
    // 0x37628c: 0xc6430050  lwc1        $f3, 0x50($s2)
    ctx->pc = 0x37628cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_376290:
    // 0x376290: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x376290u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_376294:
    // 0x376294: 0xc665000c  lwc1        $f5, 0xC($s3)
    ctx->pc = 0x376294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_376298:
    // 0x376298: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x376298u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_37629c:
    // 0x37629c: 0x4600d041  sub.s       $f1, $f26, $f0
    ctx->pc = 0x37629cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[26], ctx->f[0]);
label_3762a0:
    // 0x3762a0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3762a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3762a4:
    // 0x3762a4: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x3762a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_3762a8:
    // 0x3762a8: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x3762a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_3762ac:
    // 0x3762ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3762acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3762b0:
    // 0x3762b0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3762b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_3762b4:
    // 0x3762b4: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x3762b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3762b8:
    // 0x3762b8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3762b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_3762bc:
    // 0x3762bc: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x3762bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3762c0:
    // 0x3762c0: 0x0  nop
    ctx->pc = 0x3762c0u;
    // NOP
label_3762c4:
    // 0x3762c4: 0x45010089  bc1t        . + 4 + (0x89 << 2)
label_3762c8:
    if (ctx->pc == 0x3762C8u) {
        ctx->pc = 0x3762C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3762C4u;
        // 0x3762c8: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3762CCu;
        goto label_3762cc;
    }
    ctx->pc = 0x3762C4u;
    {
        const bool branch_taken_0x3762c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3762C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3762C4u;
        // 0x3762c8: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3762c4) {
            ctx->pc = 0x3764ECu;
            goto label_3764ec;
        }
    }
    ctx->pc = 0x3762CCu;
label_3762cc:
    // 0x3762cc: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x3762ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3762d0:
    // 0x3762d0: 0x0  nop
    ctx->pc = 0x3762d0u;
    // NOP
label_3762d4:
    // 0x3762d4: 0x45010086  bc1t        . + 4 + (0x86 << 2)
label_3762d8:
    if (ctx->pc == 0x3762D8u) {
        ctx->pc = 0x3762D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3762D4u;
        // 0x3762d8: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3762DCu;
        goto label_3762dc;
    }
    ctx->pc = 0x3762D4u;
    {
        const bool branch_taken_0x3762d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3762D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3762D4u;
        // 0x3762d8: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3762d4) {
            ctx->pc = 0x3764F0u;
            goto label_3764f0;
        }
    }
    ctx->pc = 0x3762DCu;
label_3762dc:
    // 0x3762dc: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x3762dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_3762e0:
    // 0x3762e0: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x3762e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_3762e4:
    // 0x3762e4: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x3762e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_3762e8:
    // 0x3762e8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3762e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3762ec:
    // 0x3762ec: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
label_3762f0:
    if (ctx->pc == 0x3762F0u) {
        ctx->pc = 0x3762F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3762ECu;
        // 0x3762f0: 0x3d6102a  slt         $v0, $fp, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3762F4u;
        goto label_3762f4;
    }
    ctx->pc = 0x3762ECu;
    {
        const bool branch_taken_0x3762ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3762F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3762ECu;
        // 0x3762f0: 0x3d6102a  slt         $v0, $fp, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3762ec) {
            ctx->pc = 0x3764E4u;
            goto label_3764e4;
        }
    }
    ctx->pc = 0x3762F4u;
label_3762f4:
    // 0x3762f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3762f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3762f8:
    // 0x3762f8: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x3762f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3762fc:
    // 0x3762fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3762fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_376300:
    // 0x376300: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x376300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_376304:
    // 0x376304: 0x0  nop
    ctx->pc = 0x376304u;
    // NOP
label_376308:
    // 0x376308: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x376308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37630c:
    // 0x37630c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x37630cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_376310:
    // 0x376310: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x376310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_376314:
    // 0x376314: 0xc6640004  lwc1        $f4, 0x4($s3)
    ctx->pc = 0x376314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_376318:
    // 0x376318: 0x46190802  mul.s       $f0, $f1, $f25
    ctx->pc = 0x376318u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[25]);
label_37631c:
    // 0x37631c: 0xc6430054  lwc1        $f3, 0x54($s2)
    ctx->pc = 0x37631cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_376320:
    // 0x376320: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x376320u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_376324:
    // 0x376324: 0xc6650010  lwc1        $f5, 0x10($s3)
    ctx->pc = 0x376324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_376328:
    // 0x376328: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x376328u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_37632c:
    // 0x37632c: 0x4600c041  sub.s       $f1, $f24, $f0
    ctx->pc = 0x37632cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
label_376330:
    // 0x376330: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x376330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_376334:
    // 0x376334: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x376334u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_376338:
    // 0x376338: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x376338u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_37633c:
    // 0x37633c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x37633cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_376340:
    // 0x376340: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x376340u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_376344:
    // 0x376344: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x376344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_376348:
    // 0x376348: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x376348u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_37634c:
    // 0x37634c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x37634cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_376350:
    // 0x376350: 0x0  nop
    ctx->pc = 0x376350u;
    // NOP
label_376354:
    // 0x376354: 0x4501005c  bc1t        . + 4 + (0x5C << 2)
label_376358:
    if (ctx->pc == 0x376358u) {
        ctx->pc = 0x376358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376354u;
        // 0x376358: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x37635Cu;
        goto label_37635c;
    }
    ctx->pc = 0x376354u;
    {
        const bool branch_taken_0x376354 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x376358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376354u;
        // 0x376358: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x376354) {
            ctx->pc = 0x3764C8u;
            goto label_3764c8;
        }
    }
    ctx->pc = 0x37635Cu;
label_37635c:
    // 0x37635c: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x37635cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_376360:
    // 0x376360: 0x0  nop
    ctx->pc = 0x376360u;
    // NOP
label_376364:
    // 0x376364: 0x45010059  bc1t        . + 4 + (0x59 << 2)
label_376368:
    if (ctx->pc == 0x376368u) {
        ctx->pc = 0x376368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376364u;
        // 0x376368: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37636Cu;
        goto label_37636c;
    }
    ctx->pc = 0x376364u;
    {
        const bool branch_taken_0x376364 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x376368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376364u;
        // 0x376368: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376364) {
            ctx->pc = 0x3764CCu;
            goto label_3764cc;
        }
    }
    ctx->pc = 0x37636Cu;
label_37636c:
    // 0x37636c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x37636cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_376370:
    // 0x376370: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x376370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_376374:
    // 0x376374: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x376374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_376378:
    // 0x376378: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x376378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_37637c:
    // 0x37637c: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
label_376380:
    if (ctx->pc == 0x376380u) {
        ctx->pc = 0x376380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37637Cu;
        // 0x376380: 0x3d6102a  slt         $v0, $fp, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x376384u;
        goto label_376384;
    }
    ctx->pc = 0x37637Cu;
    {
        const bool branch_taken_0x37637c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37637Cu;
        // 0x376380: 0x3d6102a  slt         $v0, $fp, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37637c) {
            ctx->pc = 0x3764C0u;
            goto label_3764c0;
        }
    }
    ctx->pc = 0x376384u;
label_376384:
    // 0x376384: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x376384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_376388:
    // 0x376388: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x376388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_37638c:
    // 0x37638c: 0x3c140062  lui         $s4, 0x62
    ctx->pc = 0x37638cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)98 << 16));
label_376390:
    // 0x376390: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x376390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_376394:
    // 0x376394: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x376394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_376398:
    // 0x376398: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x376398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_37639c:
    // 0x37639c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x37639cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3763a0:
    // 0x3763a0: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x3763a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3763a4:
    // 0x3763a4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3763a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3763a8:
    // 0x3763a8: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x3763a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3763ac:
    // 0x3763ac: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x3763acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3763b0:
    // 0x3763b0: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x3763b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3763b4:
    // 0x3763b4: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x3763b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3763b8:
    // 0x3763b8: 0xc6430058  lwc1        $f3, 0x58($s2)
    ctx->pc = 0x3763b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3763bc:
    // 0x3763bc: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x3763bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_3763c0:
    // 0x3763c0: 0xc6650014  lwc1        $f5, 0x14($s3)
    ctx->pc = 0x3763c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3763c4:
    // 0x3763c4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3763c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3763c8:
    // 0x3763c8: 0x4600a841  sub.s       $f1, $f21, $f0
    ctx->pc = 0x3763c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_3763cc:
    // 0x3763cc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3763ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3763d0:
    // 0x3763d0: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x3763d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_3763d4:
    // 0x3763d4: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x3763d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_3763d8:
    // 0x3763d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3763d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3763dc:
    // 0x3763dc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3763dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_3763e0:
    // 0x3763e0: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x3763e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3763e4:
    // 0x3763e4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3763e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_3763e8:
    // 0x3763e8: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x3763e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3763ec:
    // 0x3763ec: 0x0  nop
    ctx->pc = 0x3763ecu;
    // NOP
label_3763f0:
    // 0x3763f0: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
label_3763f4:
    if (ctx->pc == 0x3763F4u) {
        ctx->pc = 0x3763F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3763F0u;
        // 0x3763f4: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3763F8u;
        goto label_3763f8;
    }
    ctx->pc = 0x3763F0u;
    {
        const bool branch_taken_0x3763f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3763F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3763F0u;
        // 0x3763f4: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3763f0) {
            ctx->pc = 0x3764A4u;
            goto label_3764a4;
        }
    }
    ctx->pc = 0x3763F8u;
label_3763f8:
    // 0x3763f8: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x3763f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3763fc:
    // 0x3763fc: 0x0  nop
    ctx->pc = 0x3763fcu;
    // NOP
label_376400:
    // 0x376400: 0x45010029  bc1t        . + 4 + (0x29 << 2)
label_376404:
    if (ctx->pc == 0x376404u) {
        ctx->pc = 0x376404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376400u;
        // 0x376404: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376408u;
        goto label_376408;
    }
    ctx->pc = 0x376400u;
    {
        const bool branch_taken_0x376400 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x376404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376400u;
        // 0x376404: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376400) {
            ctx->pc = 0x3764A8u;
            goto label_3764a8;
        }
    }
    ctx->pc = 0x376408u;
label_376408:
    // 0x376408: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x376408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_37640c:
    // 0x37640c: 0x8e84c430  lw          $a0, -0x3BD0($s4)
    ctx->pc = 0x37640cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951984)));
label_376410:
    // 0x376410: 0x7fa80070  sq          $t0, 0x70($sp)
    ctx->pc = 0x376410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
label_376414:
    // 0x376414: 0xc0ddbe8  jal         func_376FA0
label_376418:
    if (ctx->pc == 0x376418u) {
        ctx->pc = 0x376418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376414u;
        // 0x376418: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37641Cu;
        goto label_37641c;
    }
    ctx->pc = 0x376414u;
    SET_GPR_U32(ctx, 31, 0x37641Cu);
    ctx->pc = 0x376418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376414u;
    // 0x376418: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376FA0u, 0x376414u, 0x37641Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37641Cu;
label_37641c:
    // 0x37641c: 0x2691c430  addiu       $s1, $s4, -0x3BD0
    ctx->pc = 0x37641cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951984));
label_376420:
    // 0x376420: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x376420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_376424:
    // 0x376424: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x376424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_376428:
    // 0x376428: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
label_37642c:
    if (ctx->pc == 0x37642Cu) {
        ctx->pc = 0x37642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376428u;
        // 0x37642c: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376430u;
        goto label_376430;
    }
    ctx->pc = 0x376428u;
    {
        const bool branch_taken_0x376428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x37642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376428u;
        // 0x37642c: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376428) {
            ctx->pc = 0x376498u;
            goto label_376498;
        }
    }
    ctx->pc = 0x376430u;
label_376430:
    // 0x376430: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x376430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_376434:
    // 0x376434: 0xc0ddab0  jal         func_376AC0
label_376438:
    if (ctx->pc == 0x376438u) {
        ctx->pc = 0x376438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376434u;
        // 0x376438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37643Cu;
        goto label_37643c;
    }
    ctx->pc = 0x376434u;
    SET_GPR_U32(ctx, 31, 0x37643Cu);
    ctx->pc = 0x376438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376434u;
    // 0x376438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376AC0u, 0x376434u, 0x37643Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37643Cu;
label_37643c:
    // 0x37643c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_376440:
    if (ctx->pc == 0x376440u) {
        ctx->pc = 0x376440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37643Cu;
        // 0x376440: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376444u;
        goto label_376444;
    }
    ctx->pc = 0x37643Cu;
    {
        const bool branch_taken_0x37643c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37643Cu;
        // 0x376440: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37643c) {
            ctx->pc = 0x376498u;
            goto label_376498;
        }
    }
    ctx->pc = 0x376444u;
label_376444:
    // 0x376444: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x376444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_376448:
    // 0x376448: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x376448u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_37644c:
    // 0x37644c: 0x8ee50020  lw          $a1, 0x20($s7)
    ctx->pc = 0x37644cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
label_376450:
    // 0x376450: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x376450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_376454:
    // 0x376454: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_376458:
    if (ctx->pc == 0x376458u) {
        ctx->pc = 0x376458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376454u;
        // 0x376458: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37645Cu;
        goto label_37645c;
    }
    ctx->pc = 0x376454u;
    {
        const bool branch_taken_0x376454 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x376458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376454u;
        // 0x376458: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376454) {
            ctx->pc = 0x376498u;
            goto label_376498;
        }
    }
    ctx->pc = 0x37645Cu;
label_37645c:
    // 0x37645c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x37645cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_376460:
    // 0x376460: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x376460u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_376464:
    // 0x376464: 0x8ee2001c  lw          $v0, 0x1C($s7)
    ctx->pc = 0x376464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 28)));
label_376468:
    // 0x376468: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x376468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_37646c:
    // 0x37646c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x37646cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_376470:
    // 0x376470: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x376470u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_376474:
    // 0x376474: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x376474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_376478:
    // 0x376478: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x376478u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_37647c:
    // 0x37647c: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x37647cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
label_376480:
    // 0x376480: 0xa0f809  jalr        $a1
label_376484:
    if (ctx->pc == 0x376484u) {
        ctx->pc = 0x376484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376480u;
        // 0x376484: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x376488u;
        goto label_376488;
    }
    ctx->pc = 0x376480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x376488u);
        ctx->pc = 0x376484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376480u;
        // 0x376484: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376480u, 0x376488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x376488u;
label_376488:
    // 0x376488: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_37648c:
    if (ctx->pc == 0x37648Cu) {
        ctx->pc = 0x37648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376488u;
        // 0x37648c: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376490u;
        goto label_376490;
    }
    ctx->pc = 0x376488u;
    {
        const bool branch_taken_0x376488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376488u;
        // 0x37648c: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376488) {
            ctx->pc = 0x376498u;
            goto label_376498;
        }
    }
    ctx->pc = 0x376490u;
label_376490:
    // 0x376490: 0x10000038  b           . + 4 + (0x38 << 2)
label_376494:
    if (ctx->pc == 0x376494u) {
        ctx->pc = 0x376494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376490u;
        // 0x376494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376498u;
        goto label_376498;
    }
    ctx->pc = 0x376490u;
    {
        const bool branch_taken_0x376490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x376494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376490u;
        // 0x376494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376490) {
            ctx->pc = 0x376574u;
            goto label_376574;
        }
    }
    ctx->pc = 0x376498u;
label_376498:
    // 0x376498: 0x3d6102a  slt         $v0, $fp, $s6
    ctx->pc = 0x376498u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_37649c:
    // 0x37649c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_3764a0:
    if (ctx->pc == 0x3764A0u) {
        ctx->pc = 0x3764A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37649Cu;
        // 0x3764a0: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3764A4u;
        goto label_3764a4;
    }
    ctx->pc = 0x37649Cu;
    {
        const bool branch_taken_0x37649c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3764A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37649Cu;
        // 0x3764a0: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37649c) {
            ctx->pc = 0x376508u;
            goto label_376508;
        }
    }
    ctx->pc = 0x3764A4u;
label_3764a4:
    // 0x3764a4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3764a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3764a8:
    // 0x3764a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3764a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3764ac:
    // 0x3764ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3764acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3764b0:
    // 0x3764b0: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x3764b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3764b4:
    // 0x3764b4: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
label_3764b8:
    if (ctx->pc == 0x3764B8u) {
        ctx->pc = 0x3764B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3764B4u;
        // 0x3764b8: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3764BCu;
        goto label_3764bc;
    }
    ctx->pc = 0x3764B4u;
    {
        const bool branch_taken_0x3764b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3764B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3764B4u;
        // 0x3764b8: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3764b4) {
            ctx->pc = 0x3763A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3763a0;
        }
    }
    ctx->pc = 0x3764BCu;
label_3764bc:
    // 0x3764bc: 0x3d6102a  slt         $v0, $fp, $s6
    ctx->pc = 0x3764bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_3764c0:
    // 0x3764c0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_3764c4:
    if (ctx->pc == 0x3764C4u) {
        ctx->pc = 0x3764C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3764C0u;
        // 0x3764c4: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3764C8u;
        goto label_3764c8;
    }
    ctx->pc = 0x3764C0u;
    {
        const bool branch_taken_0x3764c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3764C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3764C0u;
        // 0x3764c4: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3764c0) {
            ctx->pc = 0x376508u;
            goto label_376508;
        }
    }
    ctx->pc = 0x3764C8u;
label_3764c8:
    // 0x3764c8: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x3764c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3764cc:
    // 0x3764cc: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x3764ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_3764d0:
    // 0x3764d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3764d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3764d4:
    // 0x3764d4: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x3764d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3764d8:
    // 0x3764d8: 0x1460ff8b  bnez        $v1, . + 4 + (-0x75 << 2)
label_3764dc:
    if (ctx->pc == 0x3764DCu) {
        ctx->pc = 0x3764DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3764D8u;
        // 0x3764dc: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3764E0u;
        goto label_3764e0;
    }
    ctx->pc = 0x3764D8u;
    {
        const bool branch_taken_0x3764d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3764DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3764D8u;
        // 0x3764dc: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3764d8) {
            ctx->pc = 0x376308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376308;
        }
    }
    ctx->pc = 0x3764E0u;
label_3764e0:
    // 0x3764e0: 0x3d6102a  slt         $v0, $fp, $s6
    ctx->pc = 0x3764e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_3764e4:
    // 0x3764e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3764e8:
    if (ctx->pc == 0x3764E8u) {
        ctx->pc = 0x3764E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3764E4u;
        // 0x3764e8: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3764ECu;
        goto label_3764ec;
    }
    ctx->pc = 0x3764E4u;
    {
        const bool branch_taken_0x3764e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3764E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3764E4u;
        // 0x3764e8: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3764e4) {
            ctx->pc = 0x376508u;
            goto label_376508;
        }
    }
    ctx->pc = 0x3764ECu;
label_3764ec:
    // 0x3764ec: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x3764ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_3764f0:
    // 0x3764f0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x3764f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3764f4:
    // 0x3764f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3764f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3764f8:
    // 0x3764f8: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x3764f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3764fc:
    // 0x3764fc: 0x1460ff5e  bnez        $v1, . + 4 + (-0xA2 << 2)
label_376500:
    if (ctx->pc == 0x376500u) {
        ctx->pc = 0x376500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3764FCu;
        // 0x376500: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376504u;
        goto label_376504;
    }
    ctx->pc = 0x3764FCu;
    {
        const bool branch_taken_0x3764fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x376500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3764FCu;
        // 0x376500: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3764fc) {
            ctx->pc = 0x376278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376278;
        }
    }
    ctx->pc = 0x376504u;
label_376504:
    // 0x376504: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x376504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_376508:
    // 0x376508: 0x3d6282a  slt         $a1, $fp, $s6
    ctx->pc = 0x376508u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_37650c:
    // 0x37650c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x37650cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_376510:
    // 0x376510: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x376510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_376514:
    // 0x376514: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x376514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_376518:
    // 0x376518: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x376518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37651c:
    // 0x37651c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x37651cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_376520:
    // 0x376520: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x376520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_376524:
    // 0x376524: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x376524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_376528:
    // 0x376528: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x376528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_37652c:
    // 0x37652c: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x37652cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_376530:
    // 0x376530: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x376530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_376534:
    // 0x376534: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x376534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_376538:
    // 0x376538: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x376538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_37653c:
    // 0x37653c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x37653cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_376540:
    // 0x376540: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_376544:
    if (ctx->pc == 0x376544u) {
        ctx->pc = 0x376544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376540u;
        // 0x376544: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376548u;
        goto label_376548;
    }
    ctx->pc = 0x376540u;
    {
        const bool branch_taken_0x376540 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x376544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376540u;
        // 0x376544: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376540) {
            ctx->pc = 0x376558u;
            goto label_376558;
        }
    }
    ctx->pc = 0x376548u;
label_376548:
    // 0x376548: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x376548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_37654c:
    // 0x37654c: 0x75102a  slt         $v0, $v1, $s5
    ctx->pc = 0x37654cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_376550:
    // 0x376550: 0x5040ff1f  beql        $v0, $zero, . + 4 + (-0xE1 << 2)
label_376554:
    if (ctx->pc == 0x376554u) {
        ctx->pc = 0x376554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376550u;
        // 0x376554: 0x8e44005c  lw          $a0, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376558u;
        goto label_376558;
    }
    ctx->pc = 0x376550u;
    {
        const bool branch_taken_0x376550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x376550) {
            ctx->pc = 0x376554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376550u;
            // 0x376554: 0x8e44005c  lw          $a0, 0x5C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3761D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3761d0;
        }
    }
    ctx->pc = 0x376558u;
label_376558:
    // 0x376558: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x376558u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_37655c:
    // 0x37655c: 0x2de2023  subu        $a0, $s6, $fp
    ctx->pc = 0x37655cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
label_376560:
    // 0x376560: 0x24c5c430  addiu       $a1, $a2, -0x3BD0
    ctx->pc = 0x376560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951984));
label_376564:
    // 0x376564: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x376564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_376568:
    // 0x376568: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x376568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_37656c:
    // 0x37656c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x37656cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_376570:
    // 0x376570: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x376570u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_376574:
    // 0x376574: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x376574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_376578:
    // 0x376578: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x376578u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_37657c:
    // 0x37657c: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x37657cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_376580:
    // 0x376580: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x376580u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_376584:
    // 0x376584: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x376584u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_376588:
    // 0x376588: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x376588u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_37658c:
    // 0x37658c: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x37658cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_376590:
    // 0x376590: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x376590u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_376594:
    // 0x376594: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x376594u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_376598:
    // 0x376598: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x376598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_37659c:
    // 0x37659c: 0xc7bc0160  lwc1        $f28, 0x160($sp)
    ctx->pc = 0x37659cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_3765a0:
    // 0x3765a0: 0xc7bb0158  lwc1        $f27, 0x158($sp)
    ctx->pc = 0x3765a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_3765a4:
    // 0x3765a4: 0xc7ba0150  lwc1        $f26, 0x150($sp)
    ctx->pc = 0x3765a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_3765a8:
    // 0x3765a8: 0xc7b90148  lwc1        $f25, 0x148($sp)
    ctx->pc = 0x3765a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3765ac:
    // 0x3765ac: 0xc7b80140  lwc1        $f24, 0x140($sp)
    ctx->pc = 0x3765acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3765b0:
    // 0x3765b0: 0xc7b70138  lwc1        $f23, 0x138($sp)
    ctx->pc = 0x3765b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3765b4:
    // 0x3765b4: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x3765b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3765b8:
    // 0x3765b8: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x3765b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3765bc:
    // 0x3765bc: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x3765bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3765c0:
    // 0x3765c0: 0x3e00008  jr          $ra
label_3765c4:
    if (ctx->pc == 0x3765C4u) {
        ctx->pc = 0x3765C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3765C0u;
        // 0x3765c4: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3765C8u;
        goto label_3765c8;
    }
    ctx->pc = 0x3765C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3765C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3765C0u;
        // 0x3765c4: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3765C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3765C8u;
label_3765c8:
    // 0x3765c8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3765c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3765cc:
    // 0x3765cc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3765ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3765d0:
    // 0x3765d0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3765d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_3765d4:
    // 0x3765d4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3765d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_3765d8:
    // 0x3765d8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3765d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_3765dc:
    // 0x3765dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3765dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3765e0:
    // 0x3765e0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3765e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_3765e4:
    // 0x3765e4: 0x2453c430  addiu       $s3, $v0, -0x3BD0
    ctx->pc = 0x3765e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951984));
label_3765e8:
    // 0x3765e8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3765e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3765ec:
    // 0x3765ec: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3765ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3765f0:
    // 0x3765f0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3765f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_3765f4:
    // 0x3765f4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3765f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3765f8:
    // 0x3765f8: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x3765f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_3765fc:
    // 0x3765fc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3765fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_376600:
    // 0x376600: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x376600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_376604:
    // 0x376604: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x376604u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_376608:
    // 0x376608: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x376608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_37660c:
    // 0x37660c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x37660cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_376610:
    // 0x376610: 0xac52c430  sw          $s2, -0x3BD0($v0)
    ctx->pc = 0x376610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294951984), GPR_U32(ctx, 18));
label_376614:
    // 0x376614: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x376614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_376618:
    // 0x376618: 0x2438821  addu        $s1, $s2, $v1
    ctx->pc = 0x376618u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_37661c:
    // 0x37661c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x37661cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_376620:
    // 0x376620: 0xae640020  sw          $a0, 0x20($s3)
    ctx->pc = 0x376620u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 4));
label_376624:
    // 0x376624: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x376624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_376628:
    // 0x376628: 0xafb50004  sw          $s5, 0x4($sp)
    ctx->pc = 0x376628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 21));
label_37662c:
    // 0x37662c: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_376630:
    if (ctx->pc == 0x376630u) {
        ctx->pc = 0x376630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37662Cu;
        // 0x376630: 0xae600014  sw          $zero, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376634u;
        goto label_376634;
    }
    ctx->pc = 0x37662Cu;
    {
        const bool branch_taken_0x37662c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x376630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37662Cu;
        // 0x376630: 0xae600014  sw          $zero, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37662c) {
            ctx->pc = 0x37663Cu;
            goto label_37663c;
        }
    }
    ctx->pc = 0x376634u;
label_376634:
    // 0x376634: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x376634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_376638:
    // 0x376638: 0xe660001c  swc1        $f0, 0x1C($s3)
    ctx->pc = 0x376638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
label_37663c:
    // 0x37663c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x37663cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_376640:
    // 0x376640: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x376640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_376644:
    // 0x376644: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x376644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_376648:
    // 0x376648: 0xc7828110  lwc1        $f2, -0x7EF0($gp)
    ctx->pc = 0x376648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37664c:
    // 0x37664c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x37664cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_376650:
    // 0x376650: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x376650u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_376654:
    // 0x376654: 0x8ed0c430  lw          $s0, -0x3BD0($s6)
    ctx->pc = 0x376654u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294951984)));
label_376658:
    // 0x376658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x376658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37665c:
    // 0x37665c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x37665cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_376660:
    // 0x376660: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x376660u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_376664:
    // 0x376664: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x376664u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_376668:
    // 0x376668: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x376668u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_37666c:
    // 0x37666c: 0x421818  mult        $v1, $v0, $v0
    ctx->pc = 0x37666cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_376670:
    // 0x376670: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x376670u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_376674:
    // 0x376674: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x376674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
label_376678:
    // 0x376678: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x376678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_37667c:
    // 0x37667c: 0xc0de0a2  jal         func_378288
label_376680:
    if (ctx->pc == 0x376680u) {
        ctx->pc = 0x376680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37667Cu;
        // 0x376680: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376684u;
        goto label_376684;
    }
    ctx->pc = 0x37667Cu;
    SET_GPR_U32(ctx, 31, 0x376684u);
    ctx->pc = 0x376680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37667Cu;
    // 0x376680: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378288u, 0x37667Cu, 0x376684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376684u;
label_376684:
    // 0x376684: 0x8ec3c430  lw          $v1, -0x3BD0($s6)
    ctx->pc = 0x376684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294951984)));
label_376688:
    // 0x376688: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x376688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_37668c:
    // 0x37668c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x37668cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_376690:
    // 0x376690: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x376690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_376694:
    // 0x376694: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x376694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_376698:
    // 0x376698: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x376698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37669c:
    // 0x37669c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x37669cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3766a0:
    // 0x3766a0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3766a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3766a4:
    // 0x3766a4: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x3766a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3766a8:
    // 0x3766a8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3766a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3766ac:
    // 0x3766ac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3766acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3766b0:
    // 0x3766b0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x3766b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_3766b4:
    // 0x3766b4: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x3766b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3766b8:
    // 0x3766b8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3766b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3766bc:
    // 0x3766bc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3766bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_3766c0:
    // 0x3766c0: 0xc104d24  jal         func_413490
label_3766c4:
    if (ctx->pc == 0x3766C4u) {
        ctx->pc = 0x3766C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3766C0u;
        // 0x3766c4: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3766C8u;
        goto label_3766c8;
    }
    ctx->pc = 0x3766C0u;
    SET_GPR_U32(ctx, 31, 0x3766C8u);
    ctx->pc = 0x3766C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3766C0u;
    // 0x3766c4: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x3766C0u, 0x3766C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3766C8u;
label_3766c8:
    // 0x3766c8: 0x8ec5c430  lw          $a1, -0x3BD0($s6)
    ctx->pc = 0x3766c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294951984)));
label_3766cc:
    // 0x3766cc: 0xe6600018  swc1        $f0, 0x18($s3)
    ctx->pc = 0x3766ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
label_3766d0:
    // 0x3766d0: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x3766d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_3766d4:
    // 0x3766d4: 0xc0dceb6  jal         func_373AD8
label_3766d8:
    if (ctx->pc == 0x3766D8u) {
        ctx->pc = 0x3766D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3766D4u;
        // 0x3766d8: 0x24a50050  addiu       $a1, $a1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3766DCu;
        goto label_3766dc;
    }
    ctx->pc = 0x3766D4u;
    SET_GPR_U32(ctx, 31, 0x3766DCu);
    ctx->pc = 0x3766D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3766D4u;
    // 0x3766d8: 0x24a50050  addiu       $a1, $a1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373AD8u, 0x3766D4u, 0x3766DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3766DCu;
label_3766dc:
    // 0x3766dc: 0x8ec4c430  lw          $a0, -0x3BD0($s6)
    ctx->pc = 0x3766dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294951984)));
label_3766e0:
    // 0x3766e0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x3766e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_3766e4:
    // 0x3766e4: 0x24a53c58  addiu       $a1, $a1, 0x3C58
    ctx->pc = 0x3766e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15448));
label_3766e8:
    // 0x3766e8: 0xc0e6984  jal         func_39A610
label_3766ec:
    if (ctx->pc == 0x3766ECu) {
        ctx->pc = 0x3766ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3766E8u;
        // 0x3766ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3766F0u;
        goto label_3766f0;
    }
    ctx->pc = 0x3766E8u;
    SET_GPR_U32(ctx, 31, 0x3766F0u);
    ctx->pc = 0x3766ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3766E8u;
    // 0x3766ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A610u, 0x3766E8u, 0x3766F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3766F0u;
label_3766f0:
    // 0x3766f0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x3766f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_3766f4:
    // 0x3766f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3766f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3766f8:
    // 0x3766f8: 0x24a577e8  addiu       $a1, $a1, 0x77E8
    ctx->pc = 0x3766f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30696));
label_3766fc:
    // 0x3766fc: 0xc0e6984  jal         func_39A610
label_376700:
    if (ctx->pc == 0x376700u) {
        ctx->pc = 0x376700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3766FCu;
        // 0x376700: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376704u;
        goto label_376704;
    }
    ctx->pc = 0x3766FCu;
    SET_GPR_U32(ctx, 31, 0x376704u);
    ctx->pc = 0x376700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3766FCu;
    // 0x376700: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A610u, 0x3766FCu, 0x376704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376704u;
label_376704:
    // 0x376704: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x376704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_376708:
    // 0x376708: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
label_37670c:
    if (ctx->pc == 0x37670Cu) {
        ctx->pc = 0x37670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376708u;
        // 0x37670c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376710u;
        goto label_376710;
    }
    ctx->pc = 0x376708u;
    {
        const bool branch_taken_0x376708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x376708) {
            ctx->pc = 0x37670Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376708u;
            // 0x37670c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37673Cu;
            goto label_37673c;
        }
    }
    ctx->pc = 0x376710u;
label_376710:
    // 0x376710: 0x5280000a  beql        $s4, $zero, . + 4 + (0xA << 2)
label_376714:
    if (ctx->pc == 0x376714u) {
        ctx->pc = 0x376714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376710u;
        // 0x376714: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376718u;
        goto label_376718;
    }
    ctx->pc = 0x376710u;
    {
        const bool branch_taken_0x376710 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x376710) {
            ctx->pc = 0x376714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376710u;
            // 0x376714: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37673Cu;
            goto label_37673c;
        }
    }
    ctx->pc = 0x376718u;
label_376718:
    // 0x376718: 0xc0c524c  jal         func_314930
label_37671c:
    if (ctx->pc == 0x37671Cu) {
        ctx->pc = 0x37671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376718u;
        // 0x37671c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376720u;
        goto label_376720;
    }
    ctx->pc = 0x376718u;
    SET_GPR_U32(ctx, 31, 0x376720u);
    ctx->pc = 0x37671Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376718u;
    // 0x37671c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314930u, 0x376718u, 0x376720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376720u;
label_376720:
    // 0x376720: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x376720u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_376724:
    // 0x376724: 0x56e00005  bnel        $s7, $zero, . + 4 + (0x5 << 2)
label_376728:
    if (ctx->pc == 0x376728u) {
        ctx->pc = 0x376728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376724u;
        // 0x376728: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37672Cu;
        goto label_37672c;
    }
    ctx->pc = 0x376724u;
    {
        const bool branch_taken_0x376724 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x376724) {
            ctx->pc = 0x376728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376724u;
            // 0x376728: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37673Cu;
            goto label_37673c;
        }
    }
    ctx->pc = 0x37672Cu;
label_37672c:
    // 0x37672c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37672cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_376730:
    // 0x376730: 0xc0c5508  jal         func_315420
label_376734:
    if (ctx->pc == 0x376734u) {
        ctx->pc = 0x376734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376730u;
        // 0x376734: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376738u;
        goto label_376738;
    }
    ctx->pc = 0x376730u;
    SET_GPR_U32(ctx, 31, 0x376738u);
    ctx->pc = 0x376734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376730u;
    // 0x376734: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315420u, 0x376730u, 0x376738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376738u;
label_376738:
    // 0x376738: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x376738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_37673c:
    // 0x37673c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_376740:
    if (ctx->pc == 0x376740u) {
        ctx->pc = 0x376744u;
        goto label_376744;
    }
    ctx->pc = 0x37673Cu;
    {
        const bool branch_taken_0x37673c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37673c) {
            ctx->pc = 0x376778u;
            goto label_376778;
        }
    }
    ctx->pc = 0x376744u;
label_376744:
    // 0x376744: 0x12800021  beqz        $s4, . + 4 + (0x21 << 2)
label_376748:
    if (ctx->pc == 0x376748u) {
        ctx->pc = 0x376748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376744u;
        // 0x376748: 0x8ed0c430  lw          $s0, -0x3BD0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294951984)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37674Cu;
        goto label_37674c;
    }
    ctx->pc = 0x376744u;
    {
        const bool branch_taken_0x376744 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x376748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376744u;
        // 0x376748: 0x8ed0c430  lw          $s0, -0x3BD0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294951984)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376744) {
            ctx->pc = 0x3767CCu;
            goto label_3767cc;
        }
    }
    ctx->pc = 0x37674Cu;
label_37674c:
    // 0x37674c: 0x26c2c430  addiu       $v0, $s6, -0x3BD0
    ctx->pc = 0x37674cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294951984));
label_376750:
    // 0x376750: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x376750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_376754:
    // 0x376754: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x376754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_376758:
    // 0x376758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x376758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37675c:
    // 0x37675c: 0x24a52ea8  addiu       $a1, $a1, 0x2EA8
    ctx->pc = 0x37675cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11944));
label_376760:
    // 0x376760: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x376760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_376764:
    // 0x376764: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x376764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_376768:
    // 0x376768: 0xc0e6984  jal         func_39A610
label_37676c:
    if (ctx->pc == 0x37676Cu) {
        ctx->pc = 0x37676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376768u;
        // 0x37676c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376770u;
        goto label_376770;
    }
    ctx->pc = 0x376768u;
    SET_GPR_U32(ctx, 31, 0x376770u);
    ctx->pc = 0x37676Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376768u;
    // 0x37676c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A610u, 0x376768u, 0x376770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376770u;
label_376770:
    // 0x376770: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x376770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_376774:
    // 0x376774: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x376774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_376778:
    // 0x376778: 0x12800015  beqz        $s4, . + 4 + (0x15 << 2)
label_37677c:
    if (ctx->pc == 0x37677Cu) {
        ctx->pc = 0x37677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376778u;
        // 0x37677c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376780u;
        goto label_376780;
    }
    ctx->pc = 0x376778u;
    {
        const bool branch_taken_0x376778 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x37677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376778u;
        // 0x37677c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376778) {
            ctx->pc = 0x3767D0u;
            goto label_3767d0;
        }
    }
    ctx->pc = 0x376780u;
label_376780:
    // 0x376780: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x376780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_376784:
    // 0x376784: 0xafb50004  sw          $s5, 0x4($sp)
    ctx->pc = 0x376784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 21));
label_376788:
    // 0x376788: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_37678c:
    if (ctx->pc == 0x37678Cu) {
        ctx->pc = 0x37678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376788u;
        // 0x37678c: 0xafb40000  sw          $s4, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376790u;
        goto label_376790;
    }
    ctx->pc = 0x376788u;
    {
        const bool branch_taken_0x376788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376788u;
        // 0x37678c: 0xafb40000  sw          $s4, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376788) {
            ctx->pc = 0x37679Cu;
            goto label_37679c;
        }
    }
    ctx->pc = 0x376790u;
label_376790:
    // 0x376790: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x376790u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_376794:
    // 0x376794: 0x40f809  jalr        $v0
label_376798:
    if (ctx->pc == 0x376798u) {
        ctx->pc = 0x376798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376794u;
        // 0x376798: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37679Cu;
        goto label_37679c;
    }
    ctx->pc = 0x376794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37679Cu);
        ctx->pc = 0x376798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376794u;
        // 0x376798: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376794u, 0x37679Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37679Cu;
label_37679c:
    // 0x37679c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x37679cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_3767a0:
    // 0x3767a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3767a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3767a4:
    // 0x3767a4: 0x24a57890  addiu       $a1, $a1, 0x7890
    ctx->pc = 0x3767a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30864));
label_3767a8:
    // 0x3767a8: 0xc0e6984  jal         func_39A610
label_3767ac:
    if (ctx->pc == 0x3767ACu) {
        ctx->pc = 0x3767ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3767A8u;
        // 0x3767ac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3767B0u;
        goto label_3767b0;
    }
    ctx->pc = 0x3767A8u;
    SET_GPR_U32(ctx, 31, 0x3767B0u);
    ctx->pc = 0x3767ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3767A8u;
    // 0x3767ac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A610u, 0x3767A8u, 0x3767B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3767B0u;
label_3767b0:
    // 0x3767b0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x3767b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3767b4:
    // 0x3767b4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3767b8:
    if (ctx->pc == 0x3767B8u) {
        ctx->pc = 0x3767B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3767B4u;
        // 0x3767b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3767BCu;
        goto label_3767bc;
    }
    ctx->pc = 0x3767B4u;
    {
        const bool branch_taken_0x3767b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3767b4) {
            ctx->pc = 0x3767B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3767B4u;
            // 0x3767b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3767D0u;
            goto label_3767d0;
        }
    }
    ctx->pc = 0x3767BCu;
label_3767bc:
    // 0x3767bc: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x3767bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_3767c0:
    // 0x3767c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3767c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3767c4:
    // 0x3767c4: 0x40f809  jalr        $v0
label_3767c8:
    if (ctx->pc == 0x3767C8u) {
        ctx->pc = 0x3767C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3767C4u;
        // 0x3767c8: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3767CCu;
        goto label_3767cc;
    }
    ctx->pc = 0x3767C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3767CCu);
        ctx->pc = 0x3767C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3767C4u;
        // 0x3767c8: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3767C4u, 0x3767CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3767CCu;
label_3767cc:
    // 0x3767cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3767ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3767d0:
    // 0x3767d0: 0x26c4c430  addiu       $a0, $s6, -0x3BD0
    ctx->pc = 0x3767d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294951984));
label_3767d4:
    // 0x3767d4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3767d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3767d8:
    // 0x3767d8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3767d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_3767dc:
    // 0x3767dc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_3767e0:
    if (ctx->pc == 0x3767E0u) {
        ctx->pc = 0x3767E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3767DCu;
        // 0x3767e0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3767E4u;
        goto label_3767e4;
    }
    ctx->pc = 0x3767DCu;
    {
        const bool branch_taken_0x3767dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3767E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3767DCu;
        // 0x3767e0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3767dc) {
            ctx->pc = 0x376800u;
            goto label_376800;
        }
    }
    ctx->pc = 0x3767E4u;
label_3767e4:
    // 0x3767e4: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_3767e8:
    if (ctx->pc == 0x3767E8u) {
        ctx->pc = 0x3767E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3767E4u;
        // 0x3767e8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3767ECu;
        goto label_3767ec;
    }
    ctx->pc = 0x3767E4u;
    {
        const bool branch_taken_0x3767e4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3767E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3767E4u;
        // 0x3767e8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3767e4) {
            ctx->pc = 0x376804u;
            goto label_376804;
        }
    }
    ctx->pc = 0x3767ECu;
label_3767ec:
    // 0x3767ec: 0x16e00005  bnez        $s7, . + 4 + (0x5 << 2)
label_3767f0:
    if (ctx->pc == 0x3767F0u) {
        ctx->pc = 0x3767F4u;
        goto label_3767f4;
    }
    ctx->pc = 0x3767ECu;
    {
        const bool branch_taken_0x3767ec = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x3767ec) {
            ctx->pc = 0x376804u;
            goto label_376804;
        }
    }
    ctx->pc = 0x3767F4u;
label_3767f4:
    // 0x3767f4: 0xc0c5258  jal         func_314960
label_3767f8:
    if (ctx->pc == 0x3767F8u) {
        ctx->pc = 0x3767F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3767F4u;
        // 0x3767f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3767FCu;
        goto label_3767fc;
    }
    ctx->pc = 0x3767F4u;
    SET_GPR_U32(ctx, 31, 0x3767FCu);
    ctx->pc = 0x3767F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3767F4u;
    // 0x3767f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314960u, 0x3767F4u, 0x3767FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3767FCu;
label_3767fc:
    // 0x3767fc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3767fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_376800:
    // 0x376800: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x376800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_376804:
    // 0x376804: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x376804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_376808:
    // 0x376808: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x376808u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_37680c:
    // 0x37680c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x37680cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_376810:
    // 0x376810: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x376810u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_376814:
    // 0x376814: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x376814u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_376818:
    // 0x376818: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x376818u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_37681c:
    // 0x37681c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x37681cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_376820:
    // 0x376820: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x376820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_376824:
    // 0x376824: 0x3e00008  jr          $ra
label_376828:
    if (ctx->pc == 0x376828u) {
        ctx->pc = 0x376828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376824u;
        // 0x376828: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37682Cu;
        goto label_37682c;
    }
    ctx->pc = 0x376824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376824u;
        // 0x376828: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37682Cu;
label_37682c:
    // 0x37682c: 0x0  nop
    ctx->pc = 0x37682cu;
    // NOP
label_376830:
    // 0x376830: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x376830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_376834:
    // 0x376834: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x376834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_376838:
    // 0x376838: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x376838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_37683c:
    // 0x37683c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x37683cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_376840:
    // 0x376840: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x376840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_376844:
    // 0x376844: 0x2452c430  addiu       $s2, $v0, -0x3BD0
    ctx->pc = 0x376844u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951984));
label_376848:
    // 0x376848: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x376848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_37684c:
    // 0x37684c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x37684cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_376850:
    // 0x376850: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x376850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_376854:
    // 0x376854: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x376854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_376858:
    // 0x376858: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x376858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_37685c:
    // 0x37685c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x37685cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_376860:
    // 0x376860: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x376860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_376864:
    // 0x376864: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x376864u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_376868:
    // 0x376868: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x376868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_37686c:
    // 0x37686c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x37686cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_376870:
    // 0x376870: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x376870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_376874:
    // 0x376874: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x376874u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_376878:
    // 0x376878: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x376878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_37687c:
    // 0x37687c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x37687cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_376880:
    // 0x376880: 0xac53c430  sw          $s3, -0x3BD0($v0)
    ctx->pc = 0x376880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294951984), GPR_U32(ctx, 19));
label_376884:
    // 0x376884: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x376884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_376888:
    // 0x376888: 0x2638821  addu        $s1, $s3, $v1
    ctx->pc = 0x376888u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_37688c:
    // 0x37688c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x37688cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_376890:
    // 0x376890: 0xae440020  sw          $a0, 0x20($s2)
    ctx->pc = 0x376890u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 4));
label_376894:
    // 0x376894: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x376894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
label_376898:
    // 0x376898: 0xafb60004  sw          $s6, 0x4($sp)
    ctx->pc = 0x376898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 22));
label_37689c:
    // 0x37689c: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
label_3768a0:
    if (ctx->pc == 0x3768A0u) {
        ctx->pc = 0x3768A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37689Cu;
        // 0x3768a0: 0xae400014  sw          $zero, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3768A4u;
        goto label_3768a4;
    }
    ctx->pc = 0x37689Cu;
    {
        const bool branch_taken_0x37689c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3768A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37689Cu;
        // 0x3768a0: 0xae400014  sw          $zero, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37689c) {
            ctx->pc = 0x3768ACu;
            goto label_3768ac;
        }
    }
    ctx->pc = 0x3768A4u;
label_3768a4:
    // 0x3768a4: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x3768a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3768a8:
    // 0x3768a8: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x3768a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_3768ac:
    // 0x3768ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3768acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3768b0:
    // 0x3768b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3768b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3768b4:
    // 0x3768b4: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x3768b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3768b8:
    // 0x3768b8: 0xc7828110  lwc1        $f2, -0x7EF0($gp)
    ctx->pc = 0x3768b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3768bc:
    // 0x3768bc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3768bcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_3768c0:
    // 0x3768c0: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x3768c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_3768c4:
    // 0x3768c4: 0x8e90c430  lw          $s0, -0x3BD0($s4)
    ctx->pc = 0x3768c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951984)));
label_3768c8:
    // 0x3768c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3768c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3768cc:
    // 0x3768cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3768ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3768d0:
    // 0x3768d0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3768d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3768d4:
    // 0x3768d4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3768d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3768d8:
    // 0x3768d8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3768d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3768dc:
    // 0x3768dc: 0x421818  mult        $v1, $v0, $v0
    ctx->pc = 0x3768dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3768e0:
    // 0x3768e0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x3768e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3768e4:
    // 0x3768e4: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x3768e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
label_3768e8:
    // 0x3768e8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3768e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3768ec:
    // 0x3768ec: 0xc0de0a2  jal         func_378288
label_3768f0:
    if (ctx->pc == 0x3768F0u) {
        ctx->pc = 0x3768F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3768ECu;
        // 0x3768f0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3768F4u;
        goto label_3768f4;
    }
    ctx->pc = 0x3768ECu;
    SET_GPR_U32(ctx, 31, 0x3768F4u);
    ctx->pc = 0x3768F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3768ECu;
    // 0x3768f0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378288u, 0x3768ECu, 0x3768F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3768F4u;
label_3768f4:
    // 0x3768f4: 0x8e83c430  lw          $v1, -0x3BD0($s4)
    ctx->pc = 0x3768f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951984)));
label_3768f8:
    // 0x3768f8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3768f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3768fc:
    // 0x3768fc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3768fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_376900:
    // 0x376900: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x376900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_376904:
    // 0x376904: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x376904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_376908:
    // 0x376908: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x376908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37690c:
    // 0x37690c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x37690cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_376910:
    // 0x376910: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x376910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_376914:
    // 0x376914: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x376914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_376918:
    // 0x376918: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x376918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37691c:
    // 0x37691c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37691cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_376920:
    // 0x376920: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x376920u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_376924:
    // 0x376924: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x376924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_376928:
    // 0x376928: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x376928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37692c:
    // 0x37692c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x37692cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_376930:
    // 0x376930: 0xc104d24  jal         func_413490
label_376934:
    if (ctx->pc == 0x376934u) {
        ctx->pc = 0x376934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376930u;
        // 0x376934: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x376938u;
        goto label_376938;
    }
    ctx->pc = 0x376930u;
    SET_GPR_U32(ctx, 31, 0x376938u);
    ctx->pc = 0x376934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376930u;
    // 0x376934: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x376930u, 0x376938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376938u;
label_376938:
    // 0x376938: 0x8e85c430  lw          $a1, -0x3BD0($s4)
    ctx->pc = 0x376938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951984)));
label_37693c:
    // 0x37693c: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x37693cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_376940:
    // 0x376940: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x376940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_376944:
    // 0x376944: 0xc0dceb6  jal         func_373AD8
label_376948:
    if (ctx->pc == 0x376948u) {
        ctx->pc = 0x376948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376944u;
        // 0x376948: 0x24a50050  addiu       $a1, $a1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37694Cu;
        goto label_37694c;
    }
    ctx->pc = 0x376944u;
    SET_GPR_U32(ctx, 31, 0x37694Cu);
    ctx->pc = 0x376948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376944u;
    // 0x376948: 0x24a50050  addiu       $a1, $a1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373AD8u, 0x376944u, 0x37694Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37694Cu;
label_37694c:
    // 0x37694c: 0x8e84c430  lw          $a0, -0x3BD0($s4)
    ctx->pc = 0x37694cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951984)));
label_376950:
    // 0x376950: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x376950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_376954:
    // 0x376954: 0x24a53c58  addiu       $a1, $a1, 0x3C58
    ctx->pc = 0x376954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15448));
label_376958:
    // 0x376958: 0xc0e6984  jal         func_39A610
label_37695c:
    if (ctx->pc == 0x37695Cu) {
        ctx->pc = 0x37695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376958u;
        // 0x37695c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376960u;
        goto label_376960;
    }
    ctx->pc = 0x376958u;
    SET_GPR_U32(ctx, 31, 0x376960u);
    ctx->pc = 0x37695Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376958u;
    // 0x37695c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A610u, 0x376958u, 0x376960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376960u;
label_376960:
    // 0x376960: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x376960u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_376964:
    // 0x376964: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x376964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_376968:
    // 0x376968: 0x24a577e8  addiu       $a1, $a1, 0x77E8
    ctx->pc = 0x376968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30696));
label_37696c:
    // 0x37696c: 0xc0e6984  jal         func_39A610
label_376970:
    if (ctx->pc == 0x376970u) {
        ctx->pc = 0x376970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37696Cu;
        // 0x376970: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376974u;
        goto label_376974;
    }
    ctx->pc = 0x37696Cu;
    SET_GPR_U32(ctx, 31, 0x376974u);
    ctx->pc = 0x376970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37696Cu;
    // 0x376970: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A610u, 0x37696Cu, 0x376974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376974u;
label_376974:
    // 0x376974: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x376974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_376978:
    // 0x376978: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
label_37697c:
    if (ctx->pc == 0x37697Cu) {
        ctx->pc = 0x37697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376978u;
        // 0x37697c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376980u;
        goto label_376980;
    }
    ctx->pc = 0x376978u;
    {
        const bool branch_taken_0x376978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x376978) {
            ctx->pc = 0x37697Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376978u;
            // 0x37697c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3769ACu;
            goto label_3769ac;
        }
    }
    ctx->pc = 0x376980u;
label_376980:
    // 0x376980: 0x52a0000a  beql        $s5, $zero, . + 4 + (0xA << 2)
label_376984:
    if (ctx->pc == 0x376984u) {
        ctx->pc = 0x376984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376980u;
        // 0x376984: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376988u;
        goto label_376988;
    }
    ctx->pc = 0x376980u;
    {
        const bool branch_taken_0x376980 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x376980) {
            ctx->pc = 0x376984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376980u;
            // 0x376984: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3769ACu;
            goto label_3769ac;
        }
    }
    ctx->pc = 0x376988u;
label_376988:
    // 0x376988: 0xc0c524c  jal         func_314930
label_37698c:
    if (ctx->pc == 0x37698Cu) {
        ctx->pc = 0x37698Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376988u;
        // 0x37698c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376990u;
        goto label_376990;
    }
    ctx->pc = 0x376988u;
    SET_GPR_U32(ctx, 31, 0x376990u);
    ctx->pc = 0x37698Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376988u;
    // 0x37698c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314930u, 0x376988u, 0x376990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376990u;
label_376990:
    // 0x376990: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x376990u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_376994:
    // 0x376994: 0x57c00005  bnel        $fp, $zero, . + 4 + (0x5 << 2)
label_376998:
    if (ctx->pc == 0x376998u) {
        ctx->pc = 0x376998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376994u;
        // 0x376998: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37699Cu;
        goto label_37699c;
    }
    ctx->pc = 0x376994u;
    {
        const bool branch_taken_0x376994 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x376994) {
            ctx->pc = 0x376998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376994u;
            // 0x376998: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3769ACu;
            goto label_3769ac;
        }
    }
    ctx->pc = 0x37699Cu;
label_37699c:
    // 0x37699c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x37699cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3769a0:
    // 0x3769a0: 0xc0c5508  jal         func_315420
label_3769a4:
    if (ctx->pc == 0x3769A4u) {
        ctx->pc = 0x3769A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3769A0u;
        // 0x3769a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3769A8u;
        goto label_3769a8;
    }
    ctx->pc = 0x3769A0u;
    SET_GPR_U32(ctx, 31, 0x3769A8u);
    ctx->pc = 0x3769A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3769A0u;
    // 0x3769a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315420u, 0x3769A0u, 0x3769A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3769A8u;
label_3769a8:
    // 0x3769a8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3769a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3769ac:
    // 0x3769ac: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_3769b0:
    if (ctx->pc == 0x3769B0u) {
        ctx->pc = 0x3769B4u;
        goto label_3769b4;
    }
    ctx->pc = 0x3769ACu;
    {
        const bool branch_taken_0x3769ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3769ac) {
            ctx->pc = 0x3769E8u;
            goto label_3769e8;
        }
    }
    ctx->pc = 0x3769B4u;
label_3769b4:
    // 0x3769b4: 0x12a00029  beqz        $s5, . + 4 + (0x29 << 2)
label_3769b8:
    if (ctx->pc == 0x3769B8u) {
        ctx->pc = 0x3769B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3769B4u;
        // 0x3769b8: 0x2682c430  addiu       $v0, $s4, -0x3BD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3769BCu;
        goto label_3769bc;
    }
    ctx->pc = 0x3769B4u;
    {
        const bool branch_taken_0x3769b4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3769B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3769B4u;
        // 0x3769b8: 0x2682c430  addiu       $v0, $s4, -0x3BD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3769b4) {
            ctx->pc = 0x376A5Cu;
            goto label_376a5c;
        }
    }
    ctx->pc = 0x3769BCu;
label_3769bc:
    // 0x3769bc: 0x8e90c430  lw          $s0, -0x3BD0($s4)
    ctx->pc = 0x3769bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951984)));
label_3769c0:
    // 0x3769c0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3769c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3769c4:
    // 0x3769c4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x3769c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_3769c8:
    // 0x3769c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3769c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3769cc:
    // 0x3769cc: 0x24a52ea8  addiu       $a1, $a1, 0x2EA8
    ctx->pc = 0x3769ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11944));
label_3769d0:
    // 0x3769d0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x3769d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_3769d4:
    // 0x3769d4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3769d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_3769d8:
    // 0x3769d8: 0xc0e6984  jal         func_39A610
label_3769dc:
    if (ctx->pc == 0x3769DCu) {
        ctx->pc = 0x3769DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3769D8u;
        // 0x3769dc: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3769E0u;
        goto label_3769e0;
    }
    ctx->pc = 0x3769D8u;
    SET_GPR_U32(ctx, 31, 0x3769E0u);
    ctx->pc = 0x3769DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3769D8u;
    // 0x3769dc: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A610u, 0x3769D8u, 0x3769E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3769E0u;
label_3769e0:
    // 0x3769e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3769e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3769e4:
    // 0x3769e4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3769e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_3769e8:
    // 0x3769e8: 0x12a0001d  beqz        $s5, . + 4 + (0x1D << 2)
label_3769ec:
    if (ctx->pc == 0x3769ECu) {
        ctx->pc = 0x3769ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3769E8u;
        // 0x3769ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3769F0u;
        goto label_3769f0;
    }
    ctx->pc = 0x3769E8u;
    {
        const bool branch_taken_0x3769e8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3769ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3769E8u;
        // 0x3769ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3769e8) {
            ctx->pc = 0x376A60u;
            goto label_376a60;
        }
    }
    ctx->pc = 0x3769F0u;
label_3769f0:
    // 0x3769f0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x3769f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3769f4:
    // 0x3769f4: 0xafb60004  sw          $s6, 0x4($sp)
    ctx->pc = 0x3769f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 22));
label_3769f8:
    // 0x3769f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3769fc:
    if (ctx->pc == 0x3769FCu) {
        ctx->pc = 0x3769FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3769F8u;
        // 0x3769fc: 0xafb50000  sw          $s5, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376A00u;
        goto label_376a00;
    }
    ctx->pc = 0x3769F8u;
    {
        const bool branch_taken_0x3769f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3769FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3769F8u;
        // 0x3769fc: 0xafb50000  sw          $s5, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3769f8) {
            ctx->pc = 0x376A0Cu;
            goto label_376a0c;
        }
    }
    ctx->pc = 0x376A00u;
label_376a00:
    // 0x376a00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x376a00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_376a04:
    // 0x376a04: 0x40f809  jalr        $v0
label_376a08:
    if (ctx->pc == 0x376A08u) {
        ctx->pc = 0x376A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376A04u;
        // 0x376a08: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376A0Cu;
        goto label_376a0c;
    }
    ctx->pc = 0x376A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x376A0Cu);
        ctx->pc = 0x376A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376A04u;
        // 0x376a08: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376A04u, 0x376A0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x376A0Cu;
label_376a0c:
    // 0x376a0c: 0x2683c430  addiu       $v1, $s4, -0x3BD0
    ctx->pc = 0x376a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951984));
label_376a10:
    // 0x376a10: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x376a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_376a14:
    // 0x376a14: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x376a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_376a18:
    // 0x376a18: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x376a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_376a1c:
    // 0x376a1c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x376a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_376a20:
    // 0x376a20: 0x2e52821  addu        $a1, $s7, $a1
    ctx->pc = 0x376a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
label_376a24:
    // 0x376a24: 0x8e90c430  lw          $s0, -0x3BD0($s4)
    ctx->pc = 0x376a24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951984)));
label_376a28:
    // 0x376a28: 0x40f809  jalr        $v0
label_376a2c:
    if (ctx->pc == 0x376A2Cu) {
        ctx->pc = 0x376A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376A28u;
        // 0x376a2c: 0x24a5001c  addiu       $a1, $a1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376A30u;
        goto label_376a30;
    }
    ctx->pc = 0x376A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x376A30u);
        ctx->pc = 0x376A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376A28u;
        // 0x376a2c: 0x24a5001c  addiu       $a1, $a1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376A28u, 0x376A30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x376A30u;
label_376a30:
    // 0x376a30: 0x50570004  beql        $v0, $s7, . + 4 + (0x4 << 2)
label_376a34:
    if (ctx->pc == 0x376A34u) {
        ctx->pc = 0x376A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376A30u;
        // 0x376a34: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376A38u;
        goto label_376a38;
    }
    ctx->pc = 0x376A30u;
    {
        const bool branch_taken_0x376a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x376a30) {
            ctx->pc = 0x376A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376A30u;
            // 0x376a34: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x376A44u;
            goto label_376a44;
        }
    }
    ctx->pc = 0x376A38u;
label_376a38:
    // 0x376a38: 0xc0ddc3e  jal         func_3770F8
label_376a3c:
    if (ctx->pc == 0x376A3Cu) {
        ctx->pc = 0x376A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376A38u;
        // 0x376a3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376A40u;
        goto label_376a40;
    }
    ctx->pc = 0x376A38u;
    SET_GPR_U32(ctx, 31, 0x376A40u);
    ctx->pc = 0x376A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376A38u;
    // 0x376a3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3770F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3770F8u, 0x376A38u, 0x376A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376A40u;
label_376a40:
    // 0x376a40: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x376a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_376a44:
    // 0x376a44: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_376a48:
    if (ctx->pc == 0x376A48u) {
        ctx->pc = 0x376A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376A44u;
        // 0x376a48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376A4Cu;
        goto label_376a4c;
    }
    ctx->pc = 0x376A44u;
    {
        const bool branch_taken_0x376a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x376a44) {
            ctx->pc = 0x376A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376A44u;
            // 0x376a48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x376A60u;
            goto label_376a60;
        }
    }
    ctx->pc = 0x376A4Cu;
label_376a4c:
    // 0x376a4c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x376a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_376a50:
    // 0x376a50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x376a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_376a54:
    // 0x376a54: 0x40f809  jalr        $v0
label_376a58:
    if (ctx->pc == 0x376A58u) {
        ctx->pc = 0x376A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376A54u;
        // 0x376a58: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376A5Cu;
        goto label_376a5c;
    }
    ctx->pc = 0x376A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x376A5Cu);
        ctx->pc = 0x376A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376A54u;
        // 0x376a58: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376A54u, 0x376A5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x376A5Cu;
label_376a5c:
    // 0x376a5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x376a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_376a60:
    // 0x376a60: 0x2684c430  addiu       $a0, $s4, -0x3BD0
    ctx->pc = 0x376a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951984));
label_376a64:
    // 0x376a64: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x376a64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_376a68:
    // 0x376a68: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x376a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_376a6c:
    // 0x376a6c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_376a70:
    if (ctx->pc == 0x376A70u) {
        ctx->pc = 0x376A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376A6Cu;
        // 0x376a70: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376A74u;
        goto label_376a74;
    }
    ctx->pc = 0x376A6Cu;
    {
        const bool branch_taken_0x376a6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x376A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376A6Cu;
        // 0x376a70: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376a6c) {
            ctx->pc = 0x376A90u;
            goto label_376a90;
        }
    }
    ctx->pc = 0x376A74u;
label_376a74:
    // 0x376a74: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
label_376a78:
    if (ctx->pc == 0x376A78u) {
        ctx->pc = 0x376A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376A74u;
        // 0x376a78: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376A7Cu;
        goto label_376a7c;
    }
    ctx->pc = 0x376A74u;
    {
        const bool branch_taken_0x376a74 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x376A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376A74u;
        // 0x376a78: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376a74) {
            ctx->pc = 0x376A94u;
            goto label_376a94;
        }
    }
    ctx->pc = 0x376A7Cu;
label_376a7c:
    // 0x376a7c: 0x17c00005  bnez        $fp, . + 4 + (0x5 << 2)
label_376a80:
    if (ctx->pc == 0x376A80u) {
        ctx->pc = 0x376A84u;
        goto label_376a84;
    }
    ctx->pc = 0x376A7Cu;
    {
        const bool branch_taken_0x376a7c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x376a7c) {
            ctx->pc = 0x376A94u;
            goto label_376a94;
        }
    }
    ctx->pc = 0x376A84u;
label_376a84:
    // 0x376a84: 0xc0c5258  jal         func_314960
label_376a88:
    if (ctx->pc == 0x376A88u) {
        ctx->pc = 0x376A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376A84u;
        // 0x376a88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376A8Cu;
        goto label_376a8c;
    }
    ctx->pc = 0x376A84u;
    SET_GPR_U32(ctx, 31, 0x376A8Cu);
    ctx->pc = 0x376A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376A84u;
    // 0x376a88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314960u, 0x376A84u, 0x376A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376A8Cu;
label_376a8c:
    // 0x376a8c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x376a8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_376a90:
    // 0x376a90: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x376a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_376a94:
    // 0x376a94: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x376a94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_376a98:
    // 0x376a98: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x376a98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_376a9c:
    // 0x376a9c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x376a9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_376aa0:
    // 0x376aa0: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x376aa0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_376aa4:
    // 0x376aa4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x376aa4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_376aa8:
    // 0x376aa8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x376aa8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_376aac:
    // 0x376aac: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x376aacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_376ab0:
    // 0x376ab0: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x376ab0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_376ab4:
    // 0x376ab4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x376ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_376ab8:
    // 0x376ab8: 0x3e00008  jr          $ra
label_376abc:
    if (ctx->pc == 0x376ABCu) {
        ctx->pc = 0x376ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376AB8u;
        // 0x376abc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376AC0u;
        goto label_fallthrough_0x376ab8;
    }
    ctx->pc = 0x376AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376AB8u;
        // 0x376abc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x376ab8:
    ctx->pc = 0x376AC0u;
}
