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

// Function: sub_003166A8
// Address: 0x3166a8 - 0x317120
void sub_003166A8_0x3166a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003166A8_0x3166a8");
#endif

    switch (ctx->pc) {
        case 0x3166a8u: goto label_3166a8;
        case 0x3166acu: goto label_3166ac;
        case 0x3166b0u: goto label_3166b0;
        case 0x3166b4u: goto label_3166b4;
        case 0x3166b8u: goto label_3166b8;
        case 0x3166bcu: goto label_3166bc;
        case 0x3166c0u: goto label_3166c0;
        case 0x3166c4u: goto label_3166c4;
        case 0x3166c8u: goto label_3166c8;
        case 0x3166ccu: goto label_3166cc;
        case 0x3166d0u: goto label_3166d0;
        case 0x3166d4u: goto label_3166d4;
        case 0x3166d8u: goto label_3166d8;
        case 0x3166dcu: goto label_3166dc;
        case 0x3166e0u: goto label_3166e0;
        case 0x3166e4u: goto label_3166e4;
        case 0x3166e8u: goto label_3166e8;
        case 0x3166ecu: goto label_3166ec;
        case 0x3166f0u: goto label_3166f0;
        case 0x3166f4u: goto label_3166f4;
        case 0x3166f8u: goto label_3166f8;
        case 0x3166fcu: goto label_3166fc;
        case 0x316700u: goto label_316700;
        case 0x316704u: goto label_316704;
        case 0x316708u: goto label_316708;
        case 0x31670cu: goto label_31670c;
        case 0x316710u: goto label_316710;
        case 0x316714u: goto label_316714;
        case 0x316718u: goto label_316718;
        case 0x31671cu: goto label_31671c;
        case 0x316720u: goto label_316720;
        case 0x316724u: goto label_316724;
        case 0x316728u: goto label_316728;
        case 0x31672cu: goto label_31672c;
        case 0x316730u: goto label_316730;
        case 0x316734u: goto label_316734;
        case 0x316738u: goto label_316738;
        case 0x31673cu: goto label_31673c;
        case 0x316740u: goto label_316740;
        case 0x316744u: goto label_316744;
        case 0x316748u: goto label_316748;
        case 0x31674cu: goto label_31674c;
        case 0x316750u: goto label_316750;
        case 0x316754u: goto label_316754;
        case 0x316758u: goto label_316758;
        case 0x31675cu: goto label_31675c;
        case 0x316760u: goto label_316760;
        case 0x316764u: goto label_316764;
        case 0x316768u: goto label_316768;
        case 0x31676cu: goto label_31676c;
        case 0x316770u: goto label_316770;
        case 0x316774u: goto label_316774;
        case 0x316778u: goto label_316778;
        case 0x31677cu: goto label_31677c;
        case 0x316780u: goto label_316780;
        case 0x316784u: goto label_316784;
        case 0x316788u: goto label_316788;
        case 0x31678cu: goto label_31678c;
        case 0x316790u: goto label_316790;
        case 0x316794u: goto label_316794;
        case 0x316798u: goto label_316798;
        case 0x31679cu: goto label_31679c;
        case 0x3167a0u: goto label_3167a0;
        case 0x3167a4u: goto label_3167a4;
        case 0x3167a8u: goto label_3167a8;
        case 0x3167acu: goto label_3167ac;
        case 0x3167b0u: goto label_3167b0;
        case 0x3167b4u: goto label_3167b4;
        case 0x3167b8u: goto label_3167b8;
        case 0x3167bcu: goto label_3167bc;
        case 0x3167c0u: goto label_3167c0;
        case 0x3167c4u: goto label_3167c4;
        case 0x3167c8u: goto label_3167c8;
        case 0x3167ccu: goto label_3167cc;
        case 0x3167d0u: goto label_3167d0;
        case 0x3167d4u: goto label_3167d4;
        case 0x3167d8u: goto label_3167d8;
        case 0x3167dcu: goto label_3167dc;
        case 0x3167e0u: goto label_3167e0;
        case 0x3167e4u: goto label_3167e4;
        case 0x3167e8u: goto label_3167e8;
        case 0x3167ecu: goto label_3167ec;
        case 0x3167f0u: goto label_3167f0;
        case 0x3167f4u: goto label_3167f4;
        case 0x3167f8u: goto label_3167f8;
        case 0x3167fcu: goto label_3167fc;
        case 0x316800u: goto label_316800;
        case 0x316804u: goto label_316804;
        case 0x316808u: goto label_316808;
        case 0x31680cu: goto label_31680c;
        case 0x316810u: goto label_316810;
        case 0x316814u: goto label_316814;
        case 0x316818u: goto label_316818;
        case 0x31681cu: goto label_31681c;
        case 0x316820u: goto label_316820;
        case 0x316824u: goto label_316824;
        case 0x316828u: goto label_316828;
        case 0x31682cu: goto label_31682c;
        case 0x316830u: goto label_316830;
        case 0x316834u: goto label_316834;
        case 0x316838u: goto label_316838;
        case 0x31683cu: goto label_31683c;
        case 0x316840u: goto label_316840;
        case 0x316844u: goto label_316844;
        case 0x316848u: goto label_316848;
        case 0x31684cu: goto label_31684c;
        case 0x316850u: goto label_316850;
        case 0x316854u: goto label_316854;
        case 0x316858u: goto label_316858;
        case 0x31685cu: goto label_31685c;
        case 0x316860u: goto label_316860;
        case 0x316864u: goto label_316864;
        case 0x316868u: goto label_316868;
        case 0x31686cu: goto label_31686c;
        case 0x316870u: goto label_316870;
        case 0x316874u: goto label_316874;
        case 0x316878u: goto label_316878;
        case 0x31687cu: goto label_31687c;
        case 0x316880u: goto label_316880;
        case 0x316884u: goto label_316884;
        case 0x316888u: goto label_316888;
        case 0x31688cu: goto label_31688c;
        case 0x316890u: goto label_316890;
        case 0x316894u: goto label_316894;
        case 0x316898u: goto label_316898;
        case 0x31689cu: goto label_31689c;
        case 0x3168a0u: goto label_3168a0;
        case 0x3168a4u: goto label_3168a4;
        case 0x3168a8u: goto label_3168a8;
        case 0x3168acu: goto label_3168ac;
        case 0x3168b0u: goto label_3168b0;
        case 0x3168b4u: goto label_3168b4;
        case 0x3168b8u: goto label_3168b8;
        case 0x3168bcu: goto label_3168bc;
        case 0x3168c0u: goto label_3168c0;
        case 0x3168c4u: goto label_3168c4;
        case 0x3168c8u: goto label_3168c8;
        case 0x3168ccu: goto label_3168cc;
        case 0x3168d0u: goto label_3168d0;
        case 0x3168d4u: goto label_3168d4;
        case 0x3168d8u: goto label_3168d8;
        case 0x3168dcu: goto label_3168dc;
        case 0x3168e0u: goto label_3168e0;
        case 0x3168e4u: goto label_3168e4;
        case 0x3168e8u: goto label_3168e8;
        case 0x3168ecu: goto label_3168ec;
        case 0x3168f0u: goto label_3168f0;
        case 0x3168f4u: goto label_3168f4;
        case 0x3168f8u: goto label_3168f8;
        case 0x3168fcu: goto label_3168fc;
        case 0x316900u: goto label_316900;
        case 0x316904u: goto label_316904;
        case 0x316908u: goto label_316908;
        case 0x31690cu: goto label_31690c;
        case 0x316910u: goto label_316910;
        case 0x316914u: goto label_316914;
        case 0x316918u: goto label_316918;
        case 0x31691cu: goto label_31691c;
        case 0x316920u: goto label_316920;
        case 0x316924u: goto label_316924;
        case 0x316928u: goto label_316928;
        case 0x31692cu: goto label_31692c;
        case 0x316930u: goto label_316930;
        case 0x316934u: goto label_316934;
        case 0x316938u: goto label_316938;
        case 0x31693cu: goto label_31693c;
        case 0x316940u: goto label_316940;
        case 0x316944u: goto label_316944;
        case 0x316948u: goto label_316948;
        case 0x31694cu: goto label_31694c;
        case 0x316950u: goto label_316950;
        case 0x316954u: goto label_316954;
        case 0x316958u: goto label_316958;
        case 0x31695cu: goto label_31695c;
        case 0x316960u: goto label_316960;
        case 0x316964u: goto label_316964;
        case 0x316968u: goto label_316968;
        case 0x31696cu: goto label_31696c;
        case 0x316970u: goto label_316970;
        case 0x316974u: goto label_316974;
        case 0x316978u: goto label_316978;
        case 0x31697cu: goto label_31697c;
        case 0x316980u: goto label_316980;
        case 0x316984u: goto label_316984;
        case 0x316988u: goto label_316988;
        case 0x31698cu: goto label_31698c;
        case 0x316990u: goto label_316990;
        case 0x316994u: goto label_316994;
        case 0x316998u: goto label_316998;
        case 0x31699cu: goto label_31699c;
        case 0x3169a0u: goto label_3169a0;
        case 0x3169a4u: goto label_3169a4;
        case 0x3169a8u: goto label_3169a8;
        case 0x3169acu: goto label_3169ac;
        case 0x3169b0u: goto label_3169b0;
        case 0x3169b4u: goto label_3169b4;
        case 0x3169b8u: goto label_3169b8;
        case 0x3169bcu: goto label_3169bc;
        case 0x3169c0u: goto label_3169c0;
        case 0x3169c4u: goto label_3169c4;
        case 0x3169c8u: goto label_3169c8;
        case 0x3169ccu: goto label_3169cc;
        case 0x3169d0u: goto label_3169d0;
        case 0x3169d4u: goto label_3169d4;
        case 0x3169d8u: goto label_3169d8;
        case 0x3169dcu: goto label_3169dc;
        case 0x3169e0u: goto label_3169e0;
        case 0x3169e4u: goto label_3169e4;
        case 0x3169e8u: goto label_3169e8;
        case 0x3169ecu: goto label_3169ec;
        case 0x3169f0u: goto label_3169f0;
        case 0x3169f4u: goto label_3169f4;
        case 0x3169f8u: goto label_3169f8;
        case 0x3169fcu: goto label_3169fc;
        case 0x316a00u: goto label_316a00;
        case 0x316a04u: goto label_316a04;
        case 0x316a08u: goto label_316a08;
        case 0x316a0cu: goto label_316a0c;
        case 0x316a10u: goto label_316a10;
        case 0x316a14u: goto label_316a14;
        case 0x316a18u: goto label_316a18;
        case 0x316a1cu: goto label_316a1c;
        case 0x316a20u: goto label_316a20;
        case 0x316a24u: goto label_316a24;
        case 0x316a28u: goto label_316a28;
        case 0x316a2cu: goto label_316a2c;
        case 0x316a30u: goto label_316a30;
        case 0x316a34u: goto label_316a34;
        case 0x316a38u: goto label_316a38;
        case 0x316a3cu: goto label_316a3c;
        case 0x316a40u: goto label_316a40;
        case 0x316a44u: goto label_316a44;
        case 0x316a48u: goto label_316a48;
        case 0x316a4cu: goto label_316a4c;
        case 0x316a50u: goto label_316a50;
        case 0x316a54u: goto label_316a54;
        case 0x316a58u: goto label_316a58;
        case 0x316a5cu: goto label_316a5c;
        case 0x316a60u: goto label_316a60;
        case 0x316a64u: goto label_316a64;
        case 0x316a68u: goto label_316a68;
        case 0x316a6cu: goto label_316a6c;
        case 0x316a70u: goto label_316a70;
        case 0x316a74u: goto label_316a74;
        case 0x316a78u: goto label_316a78;
        case 0x316a7cu: goto label_316a7c;
        case 0x316a80u: goto label_316a80;
        case 0x316a84u: goto label_316a84;
        case 0x316a88u: goto label_316a88;
        case 0x316a8cu: goto label_316a8c;
        case 0x316a90u: goto label_316a90;
        case 0x316a94u: goto label_316a94;
        case 0x316a98u: goto label_316a98;
        case 0x316a9cu: goto label_316a9c;
        case 0x316aa0u: goto label_316aa0;
        case 0x316aa4u: goto label_316aa4;
        case 0x316aa8u: goto label_316aa8;
        case 0x316aacu: goto label_316aac;
        case 0x316ab0u: goto label_316ab0;
        case 0x316ab4u: goto label_316ab4;
        case 0x316ab8u: goto label_316ab8;
        case 0x316abcu: goto label_316abc;
        case 0x316ac0u: goto label_316ac0;
        case 0x316ac4u: goto label_316ac4;
        case 0x316ac8u: goto label_316ac8;
        case 0x316accu: goto label_316acc;
        case 0x316ad0u: goto label_316ad0;
        case 0x316ad4u: goto label_316ad4;
        case 0x316ad8u: goto label_316ad8;
        case 0x316adcu: goto label_316adc;
        case 0x316ae0u: goto label_316ae0;
        case 0x316ae4u: goto label_316ae4;
        case 0x316ae8u: goto label_316ae8;
        case 0x316aecu: goto label_316aec;
        case 0x316af0u: goto label_316af0;
        case 0x316af4u: goto label_316af4;
        case 0x316af8u: goto label_316af8;
        case 0x316afcu: goto label_316afc;
        case 0x316b00u: goto label_316b00;
        case 0x316b04u: goto label_316b04;
        case 0x316b08u: goto label_316b08;
        case 0x316b0cu: goto label_316b0c;
        case 0x316b10u: goto label_316b10;
        case 0x316b14u: goto label_316b14;
        case 0x316b18u: goto label_316b18;
        case 0x316b1cu: goto label_316b1c;
        case 0x316b20u: goto label_316b20;
        case 0x316b24u: goto label_316b24;
        case 0x316b28u: goto label_316b28;
        case 0x316b2cu: goto label_316b2c;
        case 0x316b30u: goto label_316b30;
        case 0x316b34u: goto label_316b34;
        case 0x316b38u: goto label_316b38;
        case 0x316b3cu: goto label_316b3c;
        case 0x316b40u: goto label_316b40;
        case 0x316b44u: goto label_316b44;
        case 0x316b48u: goto label_316b48;
        case 0x316b4cu: goto label_316b4c;
        case 0x316b50u: goto label_316b50;
        case 0x316b54u: goto label_316b54;
        case 0x316b58u: goto label_316b58;
        case 0x316b5cu: goto label_316b5c;
        case 0x316b60u: goto label_316b60;
        case 0x316b64u: goto label_316b64;
        case 0x316b68u: goto label_316b68;
        case 0x316b6cu: goto label_316b6c;
        case 0x316b70u: goto label_316b70;
        case 0x316b74u: goto label_316b74;
        case 0x316b78u: goto label_316b78;
        case 0x316b7cu: goto label_316b7c;
        case 0x316b80u: goto label_316b80;
        case 0x316b84u: goto label_316b84;
        case 0x316b88u: goto label_316b88;
        case 0x316b8cu: goto label_316b8c;
        case 0x316b90u: goto label_316b90;
        case 0x316b94u: goto label_316b94;
        case 0x316b98u: goto label_316b98;
        case 0x316b9cu: goto label_316b9c;
        case 0x316ba0u: goto label_316ba0;
        case 0x316ba4u: goto label_316ba4;
        case 0x316ba8u: goto label_316ba8;
        case 0x316bacu: goto label_316bac;
        case 0x316bb0u: goto label_316bb0;
        case 0x316bb4u: goto label_316bb4;
        case 0x316bb8u: goto label_316bb8;
        case 0x316bbcu: goto label_316bbc;
        case 0x316bc0u: goto label_316bc0;
        case 0x316bc4u: goto label_316bc4;
        case 0x316bc8u: goto label_316bc8;
        case 0x316bccu: goto label_316bcc;
        case 0x316bd0u: goto label_316bd0;
        case 0x316bd4u: goto label_316bd4;
        case 0x316bd8u: goto label_316bd8;
        case 0x316bdcu: goto label_316bdc;
        case 0x316be0u: goto label_316be0;
        case 0x316be4u: goto label_316be4;
        case 0x316be8u: goto label_316be8;
        case 0x316becu: goto label_316bec;
        case 0x316bf0u: goto label_316bf0;
        case 0x316bf4u: goto label_316bf4;
        case 0x316bf8u: goto label_316bf8;
        case 0x316bfcu: goto label_316bfc;
        case 0x316c00u: goto label_316c00;
        case 0x316c04u: goto label_316c04;
        case 0x316c08u: goto label_316c08;
        case 0x316c0cu: goto label_316c0c;
        case 0x316c10u: goto label_316c10;
        case 0x316c14u: goto label_316c14;
        case 0x316c18u: goto label_316c18;
        case 0x316c1cu: goto label_316c1c;
        case 0x316c20u: goto label_316c20;
        case 0x316c24u: goto label_316c24;
        case 0x316c28u: goto label_316c28;
        case 0x316c2cu: goto label_316c2c;
        case 0x316c30u: goto label_316c30;
        case 0x316c34u: goto label_316c34;
        case 0x316c38u: goto label_316c38;
        case 0x316c3cu: goto label_316c3c;
        case 0x316c40u: goto label_316c40;
        case 0x316c44u: goto label_316c44;
        case 0x316c48u: goto label_316c48;
        case 0x316c4cu: goto label_316c4c;
        case 0x316c50u: goto label_316c50;
        case 0x316c54u: goto label_316c54;
        case 0x316c58u: goto label_316c58;
        case 0x316c5cu: goto label_316c5c;
        case 0x316c60u: goto label_316c60;
        case 0x316c64u: goto label_316c64;
        case 0x316c68u: goto label_316c68;
        case 0x316c6cu: goto label_316c6c;
        case 0x316c70u: goto label_316c70;
        case 0x316c74u: goto label_316c74;
        case 0x316c78u: goto label_316c78;
        case 0x316c7cu: goto label_316c7c;
        case 0x316c80u: goto label_316c80;
        case 0x316c84u: goto label_316c84;
        case 0x316c88u: goto label_316c88;
        case 0x316c8cu: goto label_316c8c;
        case 0x316c90u: goto label_316c90;
        case 0x316c94u: goto label_316c94;
        case 0x316c98u: goto label_316c98;
        case 0x316c9cu: goto label_316c9c;
        case 0x316ca0u: goto label_316ca0;
        case 0x316ca4u: goto label_316ca4;
        case 0x316ca8u: goto label_316ca8;
        case 0x316cacu: goto label_316cac;
        case 0x316cb0u: goto label_316cb0;
        case 0x316cb4u: goto label_316cb4;
        case 0x316cb8u: goto label_316cb8;
        case 0x316cbcu: goto label_316cbc;
        case 0x316cc0u: goto label_316cc0;
        case 0x316cc4u: goto label_316cc4;
        case 0x316cc8u: goto label_316cc8;
        case 0x316cccu: goto label_316ccc;
        case 0x316cd0u: goto label_316cd0;
        case 0x316cd4u: goto label_316cd4;
        case 0x316cd8u: goto label_316cd8;
        case 0x316cdcu: goto label_316cdc;
        case 0x316ce0u: goto label_316ce0;
        case 0x316ce4u: goto label_316ce4;
        case 0x316ce8u: goto label_316ce8;
        case 0x316cecu: goto label_316cec;
        case 0x316cf0u: goto label_316cf0;
        case 0x316cf4u: goto label_316cf4;
        case 0x316cf8u: goto label_316cf8;
        case 0x316cfcu: goto label_316cfc;
        case 0x316d00u: goto label_316d00;
        case 0x316d04u: goto label_316d04;
        case 0x316d08u: goto label_316d08;
        case 0x316d0cu: goto label_316d0c;
        case 0x316d10u: goto label_316d10;
        case 0x316d14u: goto label_316d14;
        case 0x316d18u: goto label_316d18;
        case 0x316d1cu: goto label_316d1c;
        case 0x316d20u: goto label_316d20;
        case 0x316d24u: goto label_316d24;
        case 0x316d28u: goto label_316d28;
        case 0x316d2cu: goto label_316d2c;
        case 0x316d30u: goto label_316d30;
        case 0x316d34u: goto label_316d34;
        case 0x316d38u: goto label_316d38;
        case 0x316d3cu: goto label_316d3c;
        case 0x316d40u: goto label_316d40;
        case 0x316d44u: goto label_316d44;
        case 0x316d48u: goto label_316d48;
        case 0x316d4cu: goto label_316d4c;
        case 0x316d50u: goto label_316d50;
        case 0x316d54u: goto label_316d54;
        case 0x316d58u: goto label_316d58;
        case 0x316d5cu: goto label_316d5c;
        case 0x316d60u: goto label_316d60;
        case 0x316d64u: goto label_316d64;
        case 0x316d68u: goto label_316d68;
        case 0x316d6cu: goto label_316d6c;
        case 0x316d70u: goto label_316d70;
        case 0x316d74u: goto label_316d74;
        case 0x316d78u: goto label_316d78;
        case 0x316d7cu: goto label_316d7c;
        case 0x316d80u: goto label_316d80;
        case 0x316d84u: goto label_316d84;
        case 0x316d88u: goto label_316d88;
        case 0x316d8cu: goto label_316d8c;
        case 0x316d90u: goto label_316d90;
        case 0x316d94u: goto label_316d94;
        case 0x316d98u: goto label_316d98;
        case 0x316d9cu: goto label_316d9c;
        case 0x316da0u: goto label_316da0;
        case 0x316da4u: goto label_316da4;
        case 0x316da8u: goto label_316da8;
        case 0x316dacu: goto label_316dac;
        case 0x316db0u: goto label_316db0;
        case 0x316db4u: goto label_316db4;
        case 0x316db8u: goto label_316db8;
        case 0x316dbcu: goto label_316dbc;
        case 0x316dc0u: goto label_316dc0;
        case 0x316dc4u: goto label_316dc4;
        case 0x316dc8u: goto label_316dc8;
        case 0x316dccu: goto label_316dcc;
        case 0x316dd0u: goto label_316dd0;
        case 0x316dd4u: goto label_316dd4;
        case 0x316dd8u: goto label_316dd8;
        case 0x316ddcu: goto label_316ddc;
        case 0x316de0u: goto label_316de0;
        case 0x316de4u: goto label_316de4;
        case 0x316de8u: goto label_316de8;
        case 0x316decu: goto label_316dec;
        case 0x316df0u: goto label_316df0;
        case 0x316df4u: goto label_316df4;
        case 0x316df8u: goto label_316df8;
        case 0x316dfcu: goto label_316dfc;
        case 0x316e00u: goto label_316e00;
        case 0x316e04u: goto label_316e04;
        case 0x316e08u: goto label_316e08;
        case 0x316e0cu: goto label_316e0c;
        case 0x316e10u: goto label_316e10;
        case 0x316e14u: goto label_316e14;
        case 0x316e18u: goto label_316e18;
        case 0x316e1cu: goto label_316e1c;
        case 0x316e20u: goto label_316e20;
        case 0x316e24u: goto label_316e24;
        case 0x316e28u: goto label_316e28;
        case 0x316e2cu: goto label_316e2c;
        case 0x316e30u: goto label_316e30;
        case 0x316e34u: goto label_316e34;
        case 0x316e38u: goto label_316e38;
        case 0x316e3cu: goto label_316e3c;
        case 0x316e40u: goto label_316e40;
        case 0x316e44u: goto label_316e44;
        case 0x316e48u: goto label_316e48;
        case 0x316e4cu: goto label_316e4c;
        case 0x316e50u: goto label_316e50;
        case 0x316e54u: goto label_316e54;
        case 0x316e58u: goto label_316e58;
        case 0x316e5cu: goto label_316e5c;
        case 0x316e60u: goto label_316e60;
        case 0x316e64u: goto label_316e64;
        case 0x316e68u: goto label_316e68;
        case 0x316e6cu: goto label_316e6c;
        case 0x316e70u: goto label_316e70;
        case 0x316e74u: goto label_316e74;
        case 0x316e78u: goto label_316e78;
        case 0x316e7cu: goto label_316e7c;
        case 0x316e80u: goto label_316e80;
        case 0x316e84u: goto label_316e84;
        case 0x316e88u: goto label_316e88;
        case 0x316e8cu: goto label_316e8c;
        case 0x316e90u: goto label_316e90;
        case 0x316e94u: goto label_316e94;
        case 0x316e98u: goto label_316e98;
        case 0x316e9cu: goto label_316e9c;
        case 0x316ea0u: goto label_316ea0;
        case 0x316ea4u: goto label_316ea4;
        case 0x316ea8u: goto label_316ea8;
        case 0x316eacu: goto label_316eac;
        case 0x316eb0u: goto label_316eb0;
        case 0x316eb4u: goto label_316eb4;
        case 0x316eb8u: goto label_316eb8;
        case 0x316ebcu: goto label_316ebc;
        case 0x316ec0u: goto label_316ec0;
        case 0x316ec4u: goto label_316ec4;
        case 0x316ec8u: goto label_316ec8;
        case 0x316eccu: goto label_316ecc;
        case 0x316ed0u: goto label_316ed0;
        case 0x316ed4u: goto label_316ed4;
        case 0x316ed8u: goto label_316ed8;
        case 0x316edcu: goto label_316edc;
        case 0x316ee0u: goto label_316ee0;
        case 0x316ee4u: goto label_316ee4;
        case 0x316ee8u: goto label_316ee8;
        case 0x316eecu: goto label_316eec;
        case 0x316ef0u: goto label_316ef0;
        case 0x316ef4u: goto label_316ef4;
        case 0x316ef8u: goto label_316ef8;
        case 0x316efcu: goto label_316efc;
        case 0x316f00u: goto label_316f00;
        case 0x316f04u: goto label_316f04;
        case 0x316f08u: goto label_316f08;
        case 0x316f0cu: goto label_316f0c;
        case 0x316f10u: goto label_316f10;
        case 0x316f14u: goto label_316f14;
        case 0x316f18u: goto label_316f18;
        case 0x316f1cu: goto label_316f1c;
        case 0x316f20u: goto label_316f20;
        case 0x316f24u: goto label_316f24;
        case 0x316f28u: goto label_316f28;
        case 0x316f2cu: goto label_316f2c;
        case 0x316f30u: goto label_316f30;
        case 0x316f34u: goto label_316f34;
        case 0x316f38u: goto label_316f38;
        case 0x316f3cu: goto label_316f3c;
        case 0x316f40u: goto label_316f40;
        case 0x316f44u: goto label_316f44;
        case 0x316f48u: goto label_316f48;
        case 0x316f4cu: goto label_316f4c;
        case 0x316f50u: goto label_316f50;
        case 0x316f54u: goto label_316f54;
        case 0x316f58u: goto label_316f58;
        case 0x316f5cu: goto label_316f5c;
        case 0x316f60u: goto label_316f60;
        case 0x316f64u: goto label_316f64;
        case 0x316f68u: goto label_316f68;
        case 0x316f6cu: goto label_316f6c;
        case 0x316f70u: goto label_316f70;
        case 0x316f74u: goto label_316f74;
        case 0x316f78u: goto label_316f78;
        case 0x316f7cu: goto label_316f7c;
        case 0x316f80u: goto label_316f80;
        case 0x316f84u: goto label_316f84;
        case 0x316f88u: goto label_316f88;
        case 0x316f8cu: goto label_316f8c;
        case 0x316f90u: goto label_316f90;
        case 0x316f94u: goto label_316f94;
        case 0x316f98u: goto label_316f98;
        case 0x316f9cu: goto label_316f9c;
        case 0x316fa0u: goto label_316fa0;
        case 0x316fa4u: goto label_316fa4;
        case 0x316fa8u: goto label_316fa8;
        case 0x316facu: goto label_316fac;
        case 0x316fb0u: goto label_316fb0;
        case 0x316fb4u: goto label_316fb4;
        case 0x316fb8u: goto label_316fb8;
        case 0x316fbcu: goto label_316fbc;
        case 0x316fc0u: goto label_316fc0;
        case 0x316fc4u: goto label_316fc4;
        case 0x316fc8u: goto label_316fc8;
        case 0x316fccu: goto label_316fcc;
        case 0x316fd0u: goto label_316fd0;
        case 0x316fd4u: goto label_316fd4;
        case 0x316fd8u: goto label_316fd8;
        case 0x316fdcu: goto label_316fdc;
        case 0x316fe0u: goto label_316fe0;
        case 0x316fe4u: goto label_316fe4;
        case 0x316fe8u: goto label_316fe8;
        case 0x316fecu: goto label_316fec;
        case 0x316ff0u: goto label_316ff0;
        case 0x316ff4u: goto label_316ff4;
        case 0x316ff8u: goto label_316ff8;
        case 0x316ffcu: goto label_316ffc;
        case 0x317000u: goto label_317000;
        case 0x317004u: goto label_317004;
        case 0x317008u: goto label_317008;
        case 0x31700cu: goto label_31700c;
        case 0x317010u: goto label_317010;
        case 0x317014u: goto label_317014;
        case 0x317018u: goto label_317018;
        case 0x31701cu: goto label_31701c;
        case 0x317020u: goto label_317020;
        case 0x317024u: goto label_317024;
        case 0x317028u: goto label_317028;
        case 0x31702cu: goto label_31702c;
        case 0x317030u: goto label_317030;
        case 0x317034u: goto label_317034;
        case 0x317038u: goto label_317038;
        case 0x31703cu: goto label_31703c;
        case 0x317040u: goto label_317040;
        case 0x317044u: goto label_317044;
        case 0x317048u: goto label_317048;
        case 0x31704cu: goto label_31704c;
        case 0x317050u: goto label_317050;
        case 0x317054u: goto label_317054;
        case 0x317058u: goto label_317058;
        case 0x31705cu: goto label_31705c;
        case 0x317060u: goto label_317060;
        case 0x317064u: goto label_317064;
        case 0x317068u: goto label_317068;
        case 0x31706cu: goto label_31706c;
        case 0x317070u: goto label_317070;
        case 0x317074u: goto label_317074;
        case 0x317078u: goto label_317078;
        case 0x31707cu: goto label_31707c;
        case 0x317080u: goto label_317080;
        case 0x317084u: goto label_317084;
        case 0x317088u: goto label_317088;
        case 0x31708cu: goto label_31708c;
        case 0x317090u: goto label_317090;
        case 0x317094u: goto label_317094;
        case 0x317098u: goto label_317098;
        case 0x31709cu: goto label_31709c;
        case 0x3170a0u: goto label_3170a0;
        case 0x3170a4u: goto label_3170a4;
        case 0x3170a8u: goto label_3170a8;
        case 0x3170acu: goto label_3170ac;
        case 0x3170b0u: goto label_3170b0;
        case 0x3170b4u: goto label_3170b4;
        case 0x3170b8u: goto label_3170b8;
        case 0x3170bcu: goto label_3170bc;
        case 0x3170c0u: goto label_3170c0;
        case 0x3170c4u: goto label_3170c4;
        case 0x3170c8u: goto label_3170c8;
        case 0x3170ccu: goto label_3170cc;
        case 0x3170d0u: goto label_3170d0;
        case 0x3170d4u: goto label_3170d4;
        case 0x3170d8u: goto label_3170d8;
        case 0x3170dcu: goto label_3170dc;
        case 0x3170e0u: goto label_3170e0;
        case 0x3170e4u: goto label_3170e4;
        case 0x3170e8u: goto label_3170e8;
        case 0x3170ecu: goto label_3170ec;
        case 0x3170f0u: goto label_3170f0;
        case 0x3170f4u: goto label_3170f4;
        case 0x3170f8u: goto label_3170f8;
        case 0x3170fcu: goto label_3170fc;
        case 0x317100u: goto label_317100;
        case 0x317104u: goto label_317104;
        case 0x317108u: goto label_317108;
        case 0x31710cu: goto label_31710c;
        case 0x317110u: goto label_317110;
        case 0x317114u: goto label_317114;
        case 0x317118u: goto label_317118;
        case 0x31711cu: goto label_31711c;
        default: break;
    }

    ctx->pc = 0x3166a8u;

label_3166a8:
    // 0x3166a8: 0x27bdf940  addiu       $sp, $sp, -0x6C0
    ctx->pc = 0x3166a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965568));
label_3166ac:
    // 0x3166ac: 0xc0782d  daddu       $t7, $a2, $zero
    ctx->pc = 0x3166acu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3166b0:
    // 0x3166b0: 0x7fb10680  sq          $s1, 0x680($sp)
    ctx->pc = 0x3166b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1664), GPR_VEC(ctx, 17));
label_3166b4:
    // 0x3166b4: 0x7fb00690  sq          $s0, 0x690($sp)
    ctx->pc = 0x3166b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1680), GPR_VEC(ctx, 16));
label_3166b8:
    // 0x3166b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3166b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3166bc:
    // 0x3166bc: 0x7fb20670  sq          $s2, 0x670($sp)
    ctx->pc = 0x3166bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1648), GPR_VEC(ctx, 18));
label_3166c0:
    // 0x3166c0: 0x7fb30660  sq          $s3, 0x660($sp)
    ctx->pc = 0x3166c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1632), GPR_VEC(ctx, 19));
label_3166c4:
    // 0x3166c4: 0x7fb40650  sq          $s4, 0x650($sp)
    ctx->pc = 0x3166c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1616), GPR_VEC(ctx, 20));
label_3166c8:
    // 0x3166c8: 0x7fb50640  sq          $s5, 0x640($sp)
    ctx->pc = 0x3166c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1600), GPR_VEC(ctx, 21));
label_3166cc:
    // 0x3166cc: 0x7fb60630  sq          $s6, 0x630($sp)
    ctx->pc = 0x3166ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1584), GPR_VEC(ctx, 22));
label_3166d0:
    // 0x3166d0: 0x7fb70620  sq          $s7, 0x620($sp)
    ctx->pc = 0x3166d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1568), GPR_VEC(ctx, 23));
label_3166d4:
    // 0x3166d4: 0x7fbe0610  sq          $fp, 0x610($sp)
    ctx->pc = 0x3166d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1552), GPR_VEC(ctx, 30));
label_3166d8:
    // 0x3166d8: 0xffbf0600  sd          $ra, 0x600($sp)
    ctx->pc = 0x3166d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1536), GPR_U64(ctx, 31));
label_3166dc:
    // 0x3166dc: 0xe7b706b8  swc1        $f23, 0x6B8($sp)
    ctx->pc = 0x3166dcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1720), bits); }
label_3166e0:
    // 0x3166e0: 0xe7b606b0  swc1        $f22, 0x6B0($sp)
    ctx->pc = 0x3166e0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1712), bits); }
label_3166e4:
    // 0x3166e4: 0xe7b506a8  swc1        $f21, 0x6A8($sp)
    ctx->pc = 0x3166e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1704), bits); }
label_3166e8:
    // 0x3166e8: 0xe7b406a0  swc1        $f20, 0x6A0($sp)
    ctx->pc = 0x3166e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1696), bits); }
label_3166ec:
    // 0x3166ec: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x3166ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3166f0:
    // 0x3166f0: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x3166f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3166f4:
    // 0x3166f4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3166f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3166f8:
    // 0x3166f8: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x3166f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3166fc:
    // 0x3166fc: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x3166fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_316700:
    // 0x316700: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x316700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_316704:
    // 0x316704: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x316704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_316708:
    // 0x316708: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x316708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31670c:
    // 0x31670c: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x31670cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_316710:
    // 0x316710: 0x46001101  sub.s       $f4, $f2, $f0
    ctx->pc = 0x316710u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_316714:
    // 0x316714: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x316714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_316718:
    // 0x316718: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x316718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31671c:
    // 0x31671c: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x31671cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_316720:
    // 0x316720: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x316720u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_316724:
    // 0x316724: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x316724u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_316728:
    // 0x316728: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x316728u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_31672c:
    // 0x31672c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x31672cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_316730:
    // 0x316730: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x316730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_316734:
    // 0x316734: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316734u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316738:
    // 0x316738: 0x46002032  c.eq.s      $f4, $f0
    ctx->pc = 0x316738u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31673c:
    // 0x31673c: 0x0  nop
    ctx->pc = 0x31673cu;
    // NOP
label_316740:
    // 0x316740: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_316744:
    if (ctx->pc == 0x316744u) {
        ctx->pc = 0x316744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316740u;
        // 0x316744: 0xe0c82d  daddu       $t9, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316748u;
        goto label_316748;
    }
    ctx->pc = 0x316740u;
    {
        const bool branch_taken_0x316740 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x316744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316740u;
        // 0x316744: 0xe0c82d  daddu       $t9, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316740) {
            ctx->pc = 0x316758u;
            goto label_316758;
        }
    }
    ctx->pc = 0x316748u;
label_316748:
    // 0x316748: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x316748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_31674c:
    // 0x31674c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31674cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316750:
    // 0x316750: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x316750u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
label_316754:
    // 0x316754: 0x0  nop
    ctx->pc = 0x316754u;
    // NOP
label_316758:
    // 0x316758: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x316758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31675c:
    // 0x31675c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x31675cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_316760:
    // 0x316760: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x316760u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316764:
    // 0x316764: 0x0  nop
    ctx->pc = 0x316764u;
    // NOP
label_316768:
    // 0x316768: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_31676c:
    if (ctx->pc == 0x31676Cu) {
        ctx->pc = 0x31676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316768u;
        // 0x31676c: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x316770u;
        goto label_316770;
    }
    ctx->pc = 0x316768u;
    {
        const bool branch_taken_0x316768 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316768u;
        // 0x31676c: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x316768) {
            ctx->pc = 0x316784u;
            goto label_316784;
        }
    }
    ctx->pc = 0x316770u;
label_316770:
    // 0x316770: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x316770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_316774:
    // 0x316774: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x316774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316778:
    // 0x316778: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x316778u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_31677c:
    // 0x31677c: 0x10000004  b           . + 4 + (0x4 << 2)
label_316780:
    if (ctx->pc == 0x316780u) {
        ctx->pc = 0x316780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31677Cu;
        // 0x316780: 0xc7a10014  lwc1        $f1, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x316784u;
        goto label_316784;
    }
    ctx->pc = 0x31677Cu;
    {
        const bool branch_taken_0x31677c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31677Cu;
        // 0x316780: 0xc7a10014  lwc1        $f1, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31677c) {
            ctx->pc = 0x316790u;
            goto label_316790;
        }
    }
    ctx->pc = 0x316784u;
label_316784:
    // 0x316784: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x316784u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_316788:
    // 0x316788: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x316788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31678c:
    // 0x31678c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x31678cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_316790:
    // 0x316790: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x316790u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316794:
    // 0x316794: 0x0  nop
    ctx->pc = 0x316794u;
    // NOP
label_316798:
    // 0x316798: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_31679c:
    if (ctx->pc == 0x31679Cu) {
        ctx->pc = 0x31679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316798u;
        // 0x31679c: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3167A0u;
        goto label_3167a0;
    }
    ctx->pc = 0x316798u;
    {
        const bool branch_taken_0x316798 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316798u;
        // 0x31679c: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x316798) {
            ctx->pc = 0x3167B4u;
            goto label_3167b4;
        }
    }
    ctx->pc = 0x3167A0u;
label_3167a0:
    // 0x3167a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3167a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3167a4:
    // 0x3167a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3167a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3167a8:
    // 0x3167a8: 0x46010183  div.s       $f6, $f0, $f1
    ctx->pc = 0x3167a8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_3167ac:
    // 0x3167ac: 0x10000003  b           . + 4 + (0x3 << 2)
label_3167b0:
    if (ctx->pc == 0x3167B0u) {
        ctx->pc = 0x3167B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3167ACu;
        // 0x3167b0: 0xc620000c  lwc1        $f0, 0xC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3167B4u;
        goto label_3167b4;
    }
    ctx->pc = 0x3167ACu;
    {
        const bool branch_taken_0x3167ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3167B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3167ACu;
        // 0x3167b0: 0xc620000c  lwc1        $f0, 0xC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3167ac) {
            ctx->pc = 0x3167BCu;
            goto label_3167bc;
        }
    }
    ctx->pc = 0x3167B4u;
label_3167b4:
    // 0x3167b4: 0x46001186  mov.s       $f6, $f2
    ctx->pc = 0x3167b4u;
    ctx->f[6] = FPU_MOV_S(ctx->f[2]);
label_3167b8:
    // 0x3167b8: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x3167b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3167bc:
    // 0x3167bc: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x3167bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3167c0:
    // 0x3167c0: 0xc6250010  lwc1        $f5, 0x10($s1)
    ctx->pc = 0x3167c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3167c4:
    // 0x3167c4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x3167c4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_3167c8:
    // 0x3167c8: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x3167c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3167cc:
    // 0x3167cc: 0x460018c5  abs.s       $f3, $f3
    ctx->pc = 0x3167ccu;
    ctx->f[3] = FPU_ABS_S(ctx->f[3]);
label_3167d0:
    // 0x3167d0: 0xc6240014  lwc1        $f4, 0x14($s1)
    ctx->pc = 0x3167d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3167d4:
    // 0x3167d4: 0x46002945  abs.s       $f5, $f5
    ctx->pc = 0x3167d4u;
    ctx->f[5] = FPU_ABS_S(ctx->f[5]);
label_3167d8:
    // 0x3167d8: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x3167d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3167dc:
    // 0x3167dc: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x3167dcu;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
label_3167e0:
    // 0x3167e0: 0x46002105  abs.s       $f4, $f4
    ctx->pc = 0x3167e0u;
    ctx->f[4] = FPU_ABS_S(ctx->f[4]);
label_3167e4:
    // 0x3167e4: 0x460018e8  max.s       $f3, $f3, $f0
    ctx->pc = 0x3167e4u;
    ctx->f[3] = std::max(ctx->f[3], ctx->f[0]);
label_3167e8:
    // 0x3167e8: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x3167e8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_3167ec:
    // 0x3167ec: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x3167ecu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3167f0:
    // 0x3167f0: 0x460510a8  max.s       $f2, $f2, $f5
    ctx->pc = 0x3167f0u;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[5]);
label_3167f4:
    // 0x3167f4: 0x46040868  max.s       $f1, $f1, $f4
    ctx->pc = 0x3167f4u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[4]);
label_3167f8:
    // 0x3167f8: 0xc7808110  lwc1        $f0, -0x7EF0($gp)
    ctx->pc = 0x3167f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3167fc:
    // 0x3167fc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3167fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_316800:
    // 0x316800: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x316800u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_316804:
    // 0x316804: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x316804u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_316808:
    // 0x316808: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x316808u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_31680c:
    // 0x31680c: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x31680cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_316810:
    // 0x316810: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x316810u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_316814:
    // 0x316814: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x316814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_316818:
    // 0x316818: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x316818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_31681c:
    // 0x31681c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31681cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316820:
    // 0x316820: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x316820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_316824:
    // 0x316824: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x316824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_316828:
    // 0x316828: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x316828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_31682c:
    // 0x31682c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x31682cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_316830:
    // 0x316830: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x316830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_316834:
    // 0x316834: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x316834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_316838:
    // 0x316838: 0x10400228  beqz        $v0, . + 4 + (0x228 << 2)
label_31683c:
    if (ctx->pc == 0x31683Cu) {
        ctx->pc = 0x31683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316838u;
        // 0x31683c: 0xafa3033c  sw          $v1, 0x33C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316840u;
        goto label_316840;
    }
    ctx->pc = 0x316838u;
    {
        const bool branch_taken_0x316838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316838u;
        // 0x31683c: 0xafa3033c  sw          $v1, 0x33C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316838) {
            ctx->pc = 0x3170DCu;
            goto label_3170dc;
        }
    }
    ctx->pc = 0x316840u;
label_316840:
    // 0x316840: 0x27a8037c  addiu       $t0, $sp, 0x37C
    ctx->pc = 0x316840u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 892));
label_316844:
    // 0x316844: 0x27ae0374  addiu       $t6, $sp, 0x374
    ctx->pc = 0x316844u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 884));
label_316848:
    // 0x316848: 0xafa805c0  sw          $t0, 0x5C0($sp)
    ctx->pc = 0x316848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1472), GPR_U32(ctx, 8));
label_31684c:
    // 0x31684c: 0x27b70388  addiu       $s7, $sp, 0x388
    ctx->pc = 0x31684cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 904));
label_316850:
    // 0x316850: 0x8c62fff4  lw          $v0, -0xC($v1)
    ctx->pc = 0x316850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
label_316854:
    // 0x316854: 0x0  nop
    ctx->pc = 0x316854u;
    // NOP
label_316858:
    // 0x316858: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x316858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_31685c:
    // 0x31685c: 0xafa3033c  sw          $v1, 0x33C($sp)
    ctx->pc = 0x31685cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 3));
label_316860:
    // 0x316860: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x316860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_316864:
    // 0x316864: 0x4800060  bltz        $a0, . + 4 + (0x60 << 2)
label_316868:
    if (ctx->pc == 0x316868u) {
        ctx->pc = 0x316868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316864u;
        // 0x316868: 0x8fa2033c  lw          $v0, 0x33C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31686Cu;
        goto label_31686c;
    }
    ctx->pc = 0x316864u;
    {
        const bool branch_taken_0x316864 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x316868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316864u;
        // 0x316868: 0x8fa2033c  lw          $v0, 0x33C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316864) {
            ctx->pc = 0x3169E8u;
            goto label_3169e8;
        }
    }
    ctx->pc = 0x31686Cu;
label_31686c:
    // 0x31686c: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x31686cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_316870:
    // 0x316870: 0x8fa4033c  lw          $a0, 0x33C($sp)
    ctx->pc = 0x316870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_316874:
    // 0x316874: 0x0  nop
    ctx->pc = 0x316874u;
    // NOP
label_316878:
    // 0x316878: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x316878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31687c:
    // 0x31687c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x31687cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_316880:
    // 0x316880: 0x5d3021  addu        $a2, $v0, $sp
    ctx->pc = 0x316880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_316884:
    // 0x316884: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x316884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_316888:
    // 0x316888: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x316888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31688c:
    // 0x31688c: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x31688cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_316890:
    // 0x316890: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x316890u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_316894:
    // 0x316894: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x316894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_316898:
    // 0x316898: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x316898u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_31689c:
    // 0x31689c: 0xc4c30024  lwc1        $f3, 0x24($a2)
    ctx->pc = 0x31689cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3168a0:
    // 0x3168a0: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x3168a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3168a4:
    // 0x3168a4: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x3168a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3168a8:
    // 0x3168a8: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x3168a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3168ac:
    // 0x3168ac: 0x46022880  add.s       $f2, $f5, $f2
    ctx->pc = 0x3168acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_3168b0:
    // 0x3168b0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x3168b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_3168b4:
    // 0x3168b4: 0x460300c0  add.s       $f3, $f0, $f3
    ctx->pc = 0x3168b4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_3168b8:
    // 0x3168b8: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_3168bc:
    if (ctx->pc == 0x3168BCu) {
        ctx->pc = 0x3168BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3168B8u;
        // 0x3168bc: 0x46042940  add.s       $f5, $f5, $f4 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3168C0u;
        goto label_3168c0;
    }
    ctx->pc = 0x3168B8u;
    {
        const bool branch_taken_0x3168b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3168BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3168B8u;
        // 0x3168bc: 0x46042940  add.s       $f5, $f5, $f4 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3168b8) {
            ctx->pc = 0x31693Cu;
            goto label_31693c;
        }
    }
    ctx->pc = 0x3168C0u;
label_3168c0:
    // 0x3168c0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3168c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3168c4:
    // 0x3168c4: 0x0  nop
    ctx->pc = 0x3168c4u;
    // NOP
label_3168c8:
    // 0x3168c8: 0x45030027  bc1tl       . + 4 + (0x27 << 2)
label_3168cc:
    if (ctx->pc == 0x3168CCu) {
        ctx->pc = 0x3168CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3168C8u;
        // 0x3168cc: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3168D0u;
        goto label_3168d0;
    }
    ctx->pc = 0x3168C8u;
    {
        const bool branch_taken_0x3168c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3168c8) {
            ctx->pc = 0x3168CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3168C8u;
            // 0x3168cc: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x316968u;
            goto label_316968;
        }
    }
    ctx->pc = 0x3168D0u;
label_3168d0:
    // 0x3168d0: 0x46051834  c.lt.s      $f3, $f5
    ctx->pc = 0x3168d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3168d4:
    // 0x3168d4: 0x0  nop
    ctx->pc = 0x3168d4u;
    // NOP
label_3168d8:
    // 0x3168d8: 0x4503001c  bc1tl       . + 4 + (0x1C << 2)
label_3168dc:
    if (ctx->pc == 0x3168DCu) {
        ctx->pc = 0x3168DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3168D8u;
        // 0x3168dc: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3168E0u;
        goto label_3168e0;
    }
    ctx->pc = 0x3168D8u;
    {
        const bool branch_taken_0x3168d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3168d8) {
            ctx->pc = 0x3168DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3168D8u;
            // 0x3168dc: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31694Cu;
            goto label_31694c;
        }
    }
    ctx->pc = 0x3168E0u;
label_3168e0:
    // 0x3168e0: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x3168e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_3168e4:
    // 0x3168e4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3168e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3168e8:
    // 0x3168e8: 0xc460fff8  lwc1        $f0, -0x8($v1)
    ctx->pc = 0x3168e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3168ec:
    // 0x3168ec: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x3168ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3168f0:
    // 0x3168f0: 0xc4c60018  lwc1        $f6, 0x18($a2)
    ctx->pc = 0x3168f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3168f4:
    // 0x3168f4: 0xc464fffc  lwc1        $f4, -0x4($v1)
    ctx->pc = 0x3168f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3168f8:
    // 0x3168f8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3168f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_3168fc:
    // 0x3168fc: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3168fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_316900:
    // 0x316900: 0xafa3033c  sw          $v1, 0x33C($sp)
    ctx->pc = 0x316900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 3));
label_316904:
    // 0x316904: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_316908:
    if (ctx->pc == 0x316908u) {
        ctx->pc = 0x316908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316904u;
        // 0x316908: 0xe4640008  swc1        $f4, 0x8($v1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31690Cu;
        goto label_31690c;
    }
    ctx->pc = 0x316904u;
    {
        const bool branch_taken_0x316904 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x316908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316904u;
        // 0x316908: 0xe4640008  swc1        $f4, 0x8($v1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x316904) {
            ctx->pc = 0x316920u;
            goto label_316920;
        }
    }
    ctx->pc = 0x31690Cu;
label_31690c:
    // 0x31690c: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x31690cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_316910:
    // 0x316910: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x316910u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_316914:
    // 0x316914: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x316914u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_316918:
    // 0x316918: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x316918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_31691c:
    // 0x31691c: 0x0  nop
    ctx->pc = 0x31691cu;
    // NOP
label_316920:
    // 0x316920: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x316920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_316924:
    // 0x316924: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x316924u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316928:
    // 0x316928: 0x8fa3033c  lw          $v1, 0x33C($sp)
    ctx->pc = 0x316928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_31692c:
    // 0x31692c: 0x45000028  bc1f        . + 4 + (0x28 << 2)
label_316930:
    if (ctx->pc == 0x316930u) {
        ctx->pc = 0x316930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31692Cu;
        // 0x316930: 0xac62fff4  sw          $v0, -0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316934u;
        goto label_316934;
    }
    ctx->pc = 0x31692Cu;
    {
        const bool branch_taken_0x31692c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x316930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31692Cu;
        // 0x316930: 0xac62fff4  sw          $v0, -0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31692c) {
            ctx->pc = 0x3169D0u;
            goto label_3169d0;
        }
    }
    ctx->pc = 0x316934u;
label_316934:
    // 0x316934: 0x10000022  b           . + 4 + (0x22 << 2)
label_316938:
    if (ctx->pc == 0x316938u) {
        ctx->pc = 0x316938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316934u;
        // 0x316938: 0x46050801  sub.s       $f0, $f1, $f5 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31693Cu;
        goto label_31693c;
    }
    ctx->pc = 0x316934u;
    {
        const bool branch_taken_0x316934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316934u;
        // 0x316938: 0x46050801  sub.s       $f0, $f1, $f5 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x316934) {
            ctx->pc = 0x3169C0u;
            goto label_3169c0;
        }
    }
    ctx->pc = 0x31693Cu;
label_31693c:
    // 0x31693c: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x31693cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316940:
    // 0x316940: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_316944:
    if (ctx->pc == 0x316944u) {
        ctx->pc = 0x316948u;
        goto label_316948;
    }
    ctx->pc = 0x316940u;
    {
        const bool branch_taken_0x316940 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x316940) {
            ctx->pc = 0x316954u;
            goto label_316954;
        }
    }
    ctx->pc = 0x316948u;
label_316948:
    // 0x316948: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x316948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_31694c:
    // 0x31694c: 0x10000020  b           . + 4 + (0x20 << 2)
label_316950:
    if (ctx->pc == 0x316950u) {
        ctx->pc = 0x316950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31694Cu;
        // 0x316950: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316954u;
        goto label_316954;
    }
    ctx->pc = 0x31694Cu;
    {
        const bool branch_taken_0x31694c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31694Cu;
        // 0x316950: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31694c) {
            ctx->pc = 0x3169D0u;
            goto label_3169d0;
        }
    }
    ctx->pc = 0x316954u;
label_316954:
    // 0x316954: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x316954u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316958:
    // 0x316958: 0x0  nop
    ctx->pc = 0x316958u;
    // NOP
label_31695c:
    // 0x31695c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_316960:
    if (ctx->pc == 0x316960u) {
        ctx->pc = 0x316960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31695Cu;
        // 0x316960: 0x2483000c  addiu       $v1, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316964u;
        goto label_316964;
    }
    ctx->pc = 0x31695Cu;
    {
        const bool branch_taken_0x31695c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x316960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31695Cu;
        // 0x316960: 0x2483000c  addiu       $v1, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31695c) {
            ctx->pc = 0x316970u;
            goto label_316970;
        }
    }
    ctx->pc = 0x316964u;
label_316964:
    // 0x316964: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x316964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_316968:
    // 0x316968: 0x10000019  b           . + 4 + (0x19 << 2)
label_31696c:
    if (ctx->pc == 0x31696Cu) {
        ctx->pc = 0x31696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316968u;
        // 0x31696c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316970u;
        goto label_316970;
    }
    ctx->pc = 0x316968u;
    {
        const bool branch_taken_0x316968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316968u;
        // 0x31696c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316968) {
            ctx->pc = 0x3169D0u;
            goto label_3169d0;
        }
    }
    ctx->pc = 0x316970u;
label_316970:
    // 0x316970: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x316970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_316974:
    // 0x316974: 0xc460fff8  lwc1        $f0, -0x8($v1)
    ctx->pc = 0x316974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316978:
    // 0x316978: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x316978u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31697c:
    // 0x31697c: 0xc4c60018  lwc1        $f6, 0x18($a2)
    ctx->pc = 0x31697cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_316980:
    // 0x316980: 0xc464fffc  lwc1        $f4, -0x4($v1)
    ctx->pc = 0x316980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_316984:
    // 0x316984: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x316984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_316988:
    // 0x316988: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x316988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_31698c:
    // 0x31698c: 0xafa3033c  sw          $v1, 0x33C($sp)
    ctx->pc = 0x31698cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 3));
label_316990:
    // 0x316990: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_316994:
    if (ctx->pc == 0x316994u) {
        ctx->pc = 0x316994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316990u;
        // 0x316994: 0xe4640008  swc1        $f4, 0x8($v1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x316998u;
        goto label_316998;
    }
    ctx->pc = 0x316990u;
    {
        const bool branch_taken_0x316990 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x316994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316990u;
        // 0x316994: 0xe4640008  swc1        $f4, 0x8($v1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x316990) {
            ctx->pc = 0x3169A8u;
            goto label_3169a8;
        }
    }
    ctx->pc = 0x316998u;
label_316998:
    // 0x316998: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x316998u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_31699c:
    // 0x31699c: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x31699cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_3169a0:
    // 0x3169a0: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x3169a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_3169a4:
    // 0x3169a4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3169a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3169a8:
    // 0x3169a8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3169a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3169ac:
    // 0x3169ac: 0x46051834  c.lt.s      $f3, $f5
    ctx->pc = 0x3169acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3169b0:
    // 0x3169b0: 0x8fa3033c  lw          $v1, 0x33C($sp)
    ctx->pc = 0x3169b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_3169b4:
    // 0x3169b4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_3169b8:
    if (ctx->pc == 0x3169B8u) {
        ctx->pc = 0x3169B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3169B4u;
        // 0x3169b8: 0xac62fff4  sw          $v0, -0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3169BCu;
        goto label_3169bc;
    }
    ctx->pc = 0x3169B4u;
    {
        const bool branch_taken_0x3169b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3169B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3169B4u;
        // 0x3169b8: 0xac62fff4  sw          $v0, -0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3169b4) {
            ctx->pc = 0x3169D0u;
            goto label_3169d0;
        }
    }
    ctx->pc = 0x3169BCu;
label_3169bc:
    // 0x3169bc: 0x46051801  sub.s       $f0, $f3, $f5
    ctx->pc = 0x3169bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
label_3169c0:
    // 0x3169c0: 0xc461fff8  lwc1        $f1, -0x8($v1)
    ctx->pc = 0x3169c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3169c4:
    // 0x3169c4: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x3169c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_3169c8:
    // 0x3169c8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3169c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3169cc:
    // 0x3169cc: 0xe461fff8  swc1        $f1, -0x8($v1)
    ctx->pc = 0x3169ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967288), bits); }
label_3169d0:
    // 0x3169d0: 0x8fa2033c  lw          $v0, 0x33C($sp)
    ctx->pc = 0x3169d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_3169d4:
    // 0x3169d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3169d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3169d8:
    // 0x3169d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3169d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3169dc:
    // 0x3169dc: 0x481ffa6  bgez        $a0, . + 4 + (-0x5A << 2)
label_3169e0:
    if (ctx->pc == 0x3169E0u) {
        ctx->pc = 0x3169E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3169DCu;
        // 0x3169e0: 0x8fa4033c  lw          $a0, 0x33C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3169E4u;
        goto label_3169e4;
    }
    ctx->pc = 0x3169DCu;
    {
        const bool branch_taken_0x3169dc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x3169E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3169DCu;
        // 0x3169e0: 0x8fa4033c  lw          $a0, 0x33C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3169dc) {
            ctx->pc = 0x316878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_316878;
        }
    }
    ctx->pc = 0x3169E4u;
label_3169e4:
    // 0x3169e4: 0x8fa2033c  lw          $v0, 0x33C($sp)
    ctx->pc = 0x3169e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_3169e8:
    // 0x3169e8: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x3169e8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3169ec:
    // 0x3169ec: 0x8f83a5b4  lw          $v1, -0x5A4C($gp)
    ctx->pc = 0x3169ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944180)));
label_3169f0:
    // 0x3169f0: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x3169f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_3169f4:
    // 0x3169f4: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x3169f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3169f8:
    // 0x3169f8: 0x124001b3  beqz        $s2, . + 4 + (0x1B3 << 2)
label_3169fc:
    if (ctx->pc == 0x3169FCu) {
        ctx->pc = 0x3169FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3169F8u;
        // 0x3169fc: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316A00u;
        goto label_316a00;
    }
    ctx->pc = 0x3169F8u;
    {
        const bool branch_taken_0x3169f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3169FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3169F8u;
        // 0x3169fc: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3169f8) {
            ctx->pc = 0x3170C8u;
            goto label_3170c8;
        }
    }
    ctx->pc = 0x316A00u;
label_316a00:
    // 0x316a00: 0x8e960004  lw          $s6, 0x4($s4)
    ctx->pc = 0x316a00u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_316a04:
    // 0x316a04: 0x8e930008  lw          $s3, 0x8($s4)
    ctx->pc = 0x316a04u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_316a08:
    // 0x316a08: 0xafb20340  sw          $s2, 0x340($sp)
    ctx->pc = 0x316a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 832), GPR_U32(ctx, 18));
label_316a0c:
    // 0x316a0c: 0xa7a00376  sh          $zero, 0x376($sp)
    ctx->pc = 0x316a0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 886), (uint16_t)GPR_U32(ctx, 0));
label_316a10:
    // 0x316a10: 0xa3a90375  sb          $t1, 0x375($sp)
    ctx->pc = 0x316a10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 885), (uint8_t)GPR_U32(ctx, 9));
label_316a14:
    // 0x316a14: 0x9642001e  lhu         $v0, 0x1E($s2)
    ctx->pc = 0x316a14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
label_316a18:
    // 0x316a18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_316a1c:
    if (ctx->pc == 0x316A1Cu) {
        ctx->pc = 0x316A20u;
        goto label_316a20;
    }
    ctx->pc = 0x316A18u;
    {
        const bool branch_taken_0x316a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x316a18) {
            ctx->pc = 0x316A28u;
            goto label_316a28;
        }
    }
    ctx->pc = 0x316A20u;
label_316a20:
    // 0x316a20: 0x9242001c  lbu         $v0, 0x1C($s2)
    ctx->pc = 0x316a20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 28)));
label_316a24:
    // 0x316a24: 0xa3a20375  sb          $v0, 0x375($sp)
    ctx->pc = 0x316a24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 885), (uint8_t)GPR_U32(ctx, 2));
label_316a28:
    // 0x316a28: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x316a28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_316a2c:
    // 0x316a2c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x316a2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_316a30:
    // 0x316a30: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x316a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_316a34:
    // 0x316a34: 0xb3a2034b  sdl         $v0, 0x34B($sp)
    ctx->pc = 0x316a34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 843); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_316a38:
    // 0x316a38: 0xb7a20344  sdr         $v0, 0x344($sp)
    ctx->pc = 0x316a38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 836); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_316a3c:
    // 0x316a3c: 0xafa3034c  sw          $v1, 0x34C($sp)
    ctx->pc = 0x316a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 844), GPR_U32(ctx, 3));
label_316a40:
    // 0x316a40: 0x6ba60013  ldl         $a2, 0x13($sp)
    ctx->pc = 0x316a40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_316a44:
    // 0x316a44: 0x6fa6000c  ldr         $a2, 0xC($sp)
    ctx->pc = 0x316a44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_316a48:
    // 0x316a48: 0x8fa80014  lw          $t0, 0x14($sp)
    ctx->pc = 0x316a48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_316a4c:
    // 0x316a4c: 0xb3a60357  sdl         $a2, 0x357($sp)
    ctx->pc = 0x316a4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 855); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_316a50:
    // 0x316a50: 0xb7a60350  sdr         $a2, 0x350($sp)
    ctx->pc = 0x316a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 848); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_316a54:
    // 0x316a54: 0xafa80358  sw          $t0, 0x358($sp)
    ctx->pc = 0x316a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 856), GPR_U32(ctx, 8));
label_316a58:
    // 0x316a58: 0x6ba3001f  ldl         $v1, 0x1F($sp)
    ctx->pc = 0x316a58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_316a5c:
    // 0x316a5c: 0x6fa30018  ldr         $v1, 0x18($sp)
    ctx->pc = 0x316a5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_316a60:
    // 0x316a60: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x316a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_316a64:
    // 0x316a64: 0xb3a30363  sdl         $v1, 0x363($sp)
    ctx->pc = 0x316a64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 867); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_316a68:
    // 0x316a68: 0xb7a3035c  sdr         $v1, 0x35C($sp)
    ctx->pc = 0x316a68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 860); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_316a6c:
    // 0x316a6c: 0xafa40364  sw          $a0, 0x364($sp)
    ctx->pc = 0x316a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 868), GPR_U32(ctx, 4));
label_316a70:
    // 0x316a70: 0x6ba8002b  ldl         $t0, 0x2B($sp)
    ctx->pc = 0x316a70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_316a74:
    // 0x316a74: 0x6fa80024  ldr         $t0, 0x24($sp)
    ctx->pc = 0x316a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_316a78:
    // 0x316a78: 0x8fa9002c  lw          $t1, 0x2C($sp)
    ctx->pc = 0x316a78u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_316a7c:
    // 0x316a7c: 0xb3a8036f  sdl         $t0, 0x36F($sp)
    ctx->pc = 0x316a7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 879); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_316a80:
    // 0x316a80: 0xb7a80368  sdr         $t0, 0x368($sp)
    ctx->pc = 0x316a80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 872); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_316a84:
    // 0x316a84: 0xafa90370  sw          $t1, 0x370($sp)
    ctx->pc = 0x316a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 880), GPR_U32(ctx, 9));
label_316a88:
    // 0x316a88: 0xafae037c  sw          $t6, 0x37C($sp)
    ctx->pc = 0x316a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 892), GPR_U32(ctx, 14));
label_316a8c:
    // 0x316a8c: 0x8fa2033c  lw          $v0, 0x33C($sp)
    ctx->pc = 0x316a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_316a90:
    // 0x316a90: 0xafb70508  sw          $s7, 0x508($sp)
    ctx->pc = 0x316a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1288), GPR_U32(ctx, 23));
label_316a94:
    // 0x316a94: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x316a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316a98:
    // 0x316a98: 0xe7a00380  swc1        $f0, 0x380($sp)
    ctx->pc = 0x316a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 896), bits); }
label_316a9c:
    // 0x316a9c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x316a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_316aa0:
    // 0x316aa0: 0xe7a10384  swc1        $f1, 0x384($sp)
    ctx->pc = 0x316aa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 900), bits); }
label_316aa4:
    // 0x316aa4: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x316aa4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_316aa8:
    // 0x316aa8: 0x8fa405c0  lw          $a0, 0x5C0($sp)
    ctx->pc = 0x316aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1472)));
label_316aac:
    // 0x316aac: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x316aacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_316ab0:
    // 0x316ab0: 0x10400185  beqz        $v0, . + 4 + (0x185 << 2)
label_316ab4:
    if (ctx->pc == 0x316AB4u) {
        ctx->pc = 0x316AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316AB0u;
        // 0x316ab4: 0x27be037c  addiu       $fp, $sp, 0x37C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 892));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316AB8u;
        goto label_316ab8;
    }
    ctx->pc = 0x316AB0u;
    {
        const bool branch_taken_0x316ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x316AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316AB0u;
        // 0x316ab4: 0x27be037c  addiu       $fp, $sp, 0x37C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 892));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ab0) {
            ctx->pc = 0x3170C8u;
            goto label_3170c8;
        }
    }
    ctx->pc = 0x316AB8u;
label_316ab8:
    // 0x316ab8: 0x2462fff4  addiu       $v0, $v1, -0xC
    ctx->pc = 0x316ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_316abc:
    // 0x316abc: 0x0  nop
    ctx->pc = 0x316abcu;
    // NOP
label_316ac0:
    // 0x316ac0: 0x8c64fff4  lw          $a0, -0xC($v1)
    ctx->pc = 0x316ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
label_316ac4:
    // 0x316ac4: 0xafa20508  sw          $v0, 0x508($sp)
    ctx->pc = 0x316ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1288), GPR_U32(ctx, 2));
label_316ac8:
    // 0x316ac8: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x316ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_316acc:
    // 0x316acc: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x316accu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_316ad0:
    // 0x316ad0: 0x14650071  bne         $v1, $a1, . + 4 + (0x71 << 2)
label_316ad4:
    if (ctx->pc == 0x316AD4u) {
        ctx->pc = 0x316AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316AD0u;
        // 0x316ad4: 0x8fa20508  lw          $v0, 0x508($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316AD8u;
        goto label_316ad8;
    }
    ctx->pc = 0x316AD0u;
    {
        const bool branch_taken_0x316ad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x316AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316AD0u;
        // 0x316ad4: 0x8fa20508  lw          $v0, 0x508($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ad0) {
            ctx->pc = 0x316C98u;
            goto label_316c98;
        }
    }
    ctx->pc = 0x316AD8u;
label_316ad8:
    // 0x316ad8: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x316ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
label_316adc:
    // 0x316adc: 0x27ab0350  addiu       $t3, $sp, 0x350
    ctx->pc = 0x316adcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
label_316ae0:
    // 0x316ae0: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x316ae0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_316ae4:
    // 0x316ae4: 0x27aa0344  addiu       $t2, $sp, 0x344
    ctx->pc = 0x316ae4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 836));
label_316ae8:
    // 0x316ae8: 0x8c4c0020  lw          $t4, 0x20($v0)
    ctx->pc = 0x316ae8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_316aec:
    // 0x316aec: 0x27a90368  addiu       $t1, $sp, 0x368
    ctx->pc = 0x316aecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 872));
label_316af0:
    // 0x316af0: 0x27a8035c  addiu       $t0, $sp, 0x35C
    ctx->pc = 0x316af0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 860));
label_316af4:
    // 0x316af4: 0x240d00ff  addiu       $t5, $zero, 0xFF
    ctx->pc = 0x316af4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_316af8:
    // 0x316af8: 0x8fa50508  lw          $a1, 0x508($sp)
    ctx->pc = 0x316af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
label_316afc:
    // 0x316afc: 0x0  nop
    ctx->pc = 0x316afcu;
    // NOP
label_316b00:
    // 0x316b00: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x316b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_316b04:
    // 0x316b04: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x316b04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_316b08:
    // 0x316b08: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x316b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_316b0c:
    // 0x316b0c: 0x1823021  addu        $a2, $t4, $v0
    ctx->pc = 0x316b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_316b10:
    // 0x316b10: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x316b10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_316b14:
    // 0x316b14: 0x3067000c  andi        $a3, $v1, 0xC
    ctx->pc = 0x316b14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
label_316b18:
    // 0x316b18: 0x1671021  addu        $v0, $t3, $a3
    ctx->pc = 0x316b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
label_316b1c:
    // 0x316b1c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x316b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316b20:
    // 0x316b20: 0x1471821  addu        $v1, $t2, $a3
    ctx->pc = 0x316b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_316b24:
    // 0x316b24: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x316b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_316b28:
    // 0x316b28: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x316b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_316b2c:
    // 0x316b2c: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x316b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_316b30:
    // 0x316b30: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x316b30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316b34:
    // 0x316b34: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x316b34u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_316b38:
    // 0x316b38: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x316b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_316b3c:
    // 0x316b3c: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x316b3cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_316b40:
    // 0x316b40: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x316b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_316b44:
    // 0x316b44: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x316b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_316b48:
    // 0x316b48: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x316b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316b4c:
    // 0x316b4c: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x316b4cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
label_316b50:
    // 0x316b50: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x316b50u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_316b54:
    // 0x316b54: 0x46010180  add.s       $f6, $f0, $f1
    ctx->pc = 0x316b54u;
    ctx->f[6] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_316b58:
    // 0x316b58: 0x45000024  bc1f        . + 4 + (0x24 << 2)
label_316b5c:
    if (ctx->pc == 0x316B5Cu) {
        ctx->pc = 0x316B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316B58u;
        // 0x316b5c: 0x46042940  add.s       $f5, $f5, $f4 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x316B60u;
        goto label_316b60;
    }
    ctx->pc = 0x316B58u;
    {
        const bool branch_taken_0x316b58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x316B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316B58u;
        // 0x316b5c: 0x46042940  add.s       $f5, $f5, $f4 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x316b58) {
            ctx->pc = 0x316BECu;
            goto label_316bec;
        }
    }
    ctx->pc = 0x316B60u;
label_316b60:
    // 0x316b60: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x316b60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316b64:
    // 0x316b64: 0x0  nop
    ctx->pc = 0x316b64u;
    // NOP
label_316b68:
    // 0x316b68: 0x45030045  bc1tl       . + 4 + (0x45 << 2)
label_316b6c:
    if (ctx->pc == 0x316B6Cu) {
        ctx->pc = 0x316B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316B68u;
        // 0x316b6c: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316B70u;
        goto label_316b70;
    }
    ctx->pc = 0x316B68u;
    {
        const bool branch_taken_0x316b68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x316b68) {
            ctx->pc = 0x316B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316B68u;
            // 0x316b6c: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x316C80u;
            goto label_316c80;
        }
    }
    ctx->pc = 0x316B70u;
label_316b70:
    // 0x316b70: 0x46053034  c.lt.s      $f6, $f5
    ctx->pc = 0x316b70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316b74:
    // 0x316b74: 0x0  nop
    ctx->pc = 0x316b74u;
    // NOP
label_316b78:
    // 0x316b78: 0x45010020  bc1t        . + 4 + (0x20 << 2)
label_316b7c:
    if (ctx->pc == 0x316B7Cu) {
        ctx->pc = 0x316B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316B78u;
        // 0x316b7c: 0x24c20008  addiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316B80u;
        goto label_316b80;
    }
    ctx->pc = 0x316B78u;
    {
        const bool branch_taken_0x316b78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x316B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316B78u;
        // 0x316b7c: 0x24c20008  addiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316b78) {
            ctx->pc = 0x316BFCu;
            goto label_316bfc;
        }
    }
    ctx->pc = 0x316B80u;
label_316b80:
    // 0x316b80: 0x24a4000c  addiu       $a0, $a1, 0xC
    ctx->pc = 0x316b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_316b84:
    // 0x316b84: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x316b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_316b88:
    // 0x316b88: 0xc480fff8  lwc1        $f0, -0x8($a0)
    ctx->pc = 0x316b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316b8c:
    // 0x316b8c: 0x46033034  c.lt.s      $f6, $f3
    ctx->pc = 0x316b8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316b90:
    // 0x316b90: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x316b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_316b94:
    // 0x316b94: 0xc481fffc  lwc1        $f1, -0x4($a0)
    ctx->pc = 0x316b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_316b98:
    // 0x316b98: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x316b98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
label_316b9c:
    // 0x316b9c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x316b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_316ba0:
    // 0x316ba0: 0xafa40508  sw          $a0, 0x508($sp)
    ctx->pc = 0x316ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1288), GPR_U32(ctx, 4));
label_316ba4:
    // 0x316ba4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_316ba8:
    if (ctx->pc == 0x316BA8u) {
        ctx->pc = 0x316BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316BA4u;
        // 0x316ba8: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x316BACu;
        goto label_316bac;
    }
    ctx->pc = 0x316BA4u;
    {
        const bool branch_taken_0x316ba4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x316BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316BA4u;
        // 0x316ba8: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ba4) {
            ctx->pc = 0x316BC0u;
            goto label_316bc0;
        }
    }
    ctx->pc = 0x316BACu;
label_316bac:
    // 0x316bac: 0x46033001  sub.s       $f0, $f6, $f3
    ctx->pc = 0x316bacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
label_316bb0:
    // 0x316bb0: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x316bb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_316bb4:
    // 0x316bb4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x316bb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_316bb8:
    // 0x316bb8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x316bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_316bbc:
    // 0x316bbc: 0x0  nop
    ctx->pc = 0x316bbcu;
    // NOP
label_316bc0:
    // 0x316bc0: 0x8fa30508  lw          $v1, 0x508($sp)
    ctx->pc = 0x316bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
label_316bc4:
    // 0x316bc4: 0x46022834  c.lt.s      $f5, $f2
    ctx->pc = 0x316bc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316bc8:
    // 0x316bc8: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x316bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_316bcc:
    // 0x316bcc: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
label_316bd0:
    if (ctx->pc == 0x316BD0u) {
        ctx->pc = 0x316BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316BCCu;
        // 0x316bd0: 0xac62fff4  sw          $v0, -0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316BD4u;
        goto label_316bd4;
    }
    ctx->pc = 0x316BCCu;
    {
        const bool branch_taken_0x316bcc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x316BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316BCCu;
        // 0x316bd0: 0xac62fff4  sw          $v0, -0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316bcc) {
            ctx->pc = 0x316C80u;
            goto label_316c80;
        }
    }
    ctx->pc = 0x316BD4u;
label_316bd4:
    // 0x316bd4: 0x46051001  sub.s       $f0, $f2, $f5
    ctx->pc = 0x316bd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
label_316bd8:
    // 0x316bd8: 0xc461fff8  lwc1        $f1, -0x8($v1)
    ctx->pc = 0x316bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_316bdc:
    // 0x316bdc: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x316bdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_316be0:
    // 0x316be0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x316be0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_316be4:
    // 0x316be4: 0x10000026  b           . + 4 + (0x26 << 2)
label_316be8:
    if (ctx->pc == 0x316BE8u) {
        ctx->pc = 0x316BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316BE4u;
        // 0x316be8: 0xe461fff8  swc1        $f1, -0x8($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967288), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x316BECu;
        goto label_316bec;
    }
    ctx->pc = 0x316BE4u;
    {
        const bool branch_taken_0x316be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316BE4u;
        // 0x316be8: 0xe461fff8  swc1        $f1, -0x8($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x316be4) {
            ctx->pc = 0x316C80u;
            goto label_316c80;
        }
    }
    ctx->pc = 0x316BECu;
label_316bec:
    // 0x316bec: 0x46033034  c.lt.s      $f6, $f3
    ctx->pc = 0x316becu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316bf0:
    // 0x316bf0: 0x0  nop
    ctx->pc = 0x316bf0u;
    // NOP
label_316bf4:
    // 0x316bf4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_316bf8:
    if (ctx->pc == 0x316BF8u) {
        ctx->pc = 0x316BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316BF4u;
        // 0x316bf8: 0x24c20008  addiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316BFCu;
        goto label_316bfc;
    }
    ctx->pc = 0x316BF4u;
    {
        const bool branch_taken_0x316bf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x316BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316BF4u;
        // 0x316bf8: 0x24c20008  addiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316bf4) {
            ctx->pc = 0x316C04u;
            goto label_316c04;
        }
    }
    ctx->pc = 0x316BFCu;
label_316bfc:
    // 0x316bfc: 0x10000020  b           . + 4 + (0x20 << 2)
label_316c00:
    if (ctx->pc == 0x316C00u) {
        ctx->pc = 0x316C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316BFCu;
        // 0x316c00: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316C04u;
        goto label_316c04;
    }
    ctx->pc = 0x316BFCu;
    {
        const bool branch_taken_0x316bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316BFCu;
        // 0x316c00: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316bfc) {
            ctx->pc = 0x316C80u;
            goto label_316c80;
        }
    }
    ctx->pc = 0x316C04u;
label_316c04:
    // 0x316c04: 0x46022834  c.lt.s      $f5, $f2
    ctx->pc = 0x316c04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316c08:
    // 0x316c08: 0x0  nop
    ctx->pc = 0x316c08u;
    // NOP
label_316c0c:
    // 0x316c0c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_316c10:
    if (ctx->pc == 0x316C10u) {
        ctx->pc = 0x316C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C0Cu;
        // 0x316c10: 0x24a4000c  addiu       $a0, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316C14u;
        goto label_316c14;
    }
    ctx->pc = 0x316C0Cu;
    {
        const bool branch_taken_0x316c0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x316C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C0Cu;
        // 0x316c10: 0x24a4000c  addiu       $a0, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316c0c) {
            ctx->pc = 0x316C1Cu;
            goto label_316c1c;
        }
    }
    ctx->pc = 0x316C14u;
label_316c14:
    // 0x316c14: 0x1000001a  b           . + 4 + (0x1A << 2)
label_316c18:
    if (ctx->pc == 0x316C18u) {
        ctx->pc = 0x316C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C14u;
        // 0x316c18: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316C1Cu;
        goto label_316c1c;
    }
    ctx->pc = 0x316C14u;
    {
        const bool branch_taken_0x316c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C14u;
        // 0x316c18: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316c14) {
            ctx->pc = 0x316C80u;
            goto label_316c80;
        }
    }
    ctx->pc = 0x316C1Cu;
label_316c1c:
    // 0x316c1c: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x316c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_316c20:
    // 0x316c20: 0xc480fff8  lwc1        $f0, -0x8($a0)
    ctx->pc = 0x316c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316c24:
    // 0x316c24: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x316c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_316c28:
    // 0x316c28: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x316c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_316c2c:
    // 0x316c2c: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x316c2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316c30:
    // 0x316c30: 0xc481fffc  lwc1        $f1, -0x4($a0)
    ctx->pc = 0x316c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_316c34:
    // 0x316c34: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x316c34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_316c38:
    // 0x316c38: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x316c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_316c3c:
    // 0x316c3c: 0xafa40508  sw          $a0, 0x508($sp)
    ctx->pc = 0x316c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1288), GPR_U32(ctx, 4));
label_316c40:
    // 0x316c40: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_316c44:
    if (ctx->pc == 0x316C44u) {
        ctx->pc = 0x316C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C40u;
        // 0x316c44: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x316C48u;
        goto label_316c48;
    }
    ctx->pc = 0x316C40u;
    {
        const bool branch_taken_0x316c40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x316C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C40u;
        // 0x316c44: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x316c40) {
            ctx->pc = 0x316C58u;
            goto label_316c58;
        }
    }
    ctx->pc = 0x316C48u;
label_316c48:
    // 0x316c48: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x316c48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_316c4c:
    // 0x316c4c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x316c4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_316c50:
    // 0x316c50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x316c50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_316c54:
    // 0x316c54: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x316c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_316c58:
    // 0x316c58: 0x8fa20508  lw          $v0, 0x508($sp)
    ctx->pc = 0x316c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
label_316c5c:
    // 0x316c5c: 0x46053034  c.lt.s      $f6, $f5
    ctx->pc = 0x316c5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316c60:
    // 0x316c60: 0x0  nop
    ctx->pc = 0x316c60u;
    // NOP
label_316c64:
    // 0x316c64: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_316c68:
    if (ctx->pc == 0x316C68u) {
        ctx->pc = 0x316C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C64u;
        // 0x316c68: 0xac46fff4  sw          $a2, -0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316C6Cu;
        goto label_316c6c;
    }
    ctx->pc = 0x316C64u;
    {
        const bool branch_taken_0x316c64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x316C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C64u;
        // 0x316c68: 0xac46fff4  sw          $a2, -0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316c64) {
            ctx->pc = 0x316C80u;
            goto label_316c80;
        }
    }
    ctx->pc = 0x316C6Cu;
label_316c6c:
    // 0x316c6c: 0x46053001  sub.s       $f0, $f6, $f5
    ctx->pc = 0x316c6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
label_316c70:
    // 0x316c70: 0xc441fff8  lwc1        $f1, -0x8($v0)
    ctx->pc = 0x316c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_316c74:
    // 0x316c74: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x316c74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_316c78:
    // 0x316c78: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x316c78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_316c7c:
    // 0x316c7c: 0xe441fff8  swc1        $f1, -0x8($v0)
    ctx->pc = 0x316c7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
label_316c80:
    // 0x316c80: 0x8fa20508  lw          $v0, 0x508($sp)
    ctx->pc = 0x316c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
label_316c84:
    // 0x316c84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x316c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_316c88:
    // 0x316c88: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x316c88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_316c8c:
    // 0x316c8c: 0x108dff9c  beq         $a0, $t5, . + 4 + (-0x64 << 2)
label_316c90:
    if (ctx->pc == 0x316C90u) {
        ctx->pc = 0x316C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C8Cu;
        // 0x316c90: 0x8fa50508  lw          $a1, 0x508($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316C94u;
        goto label_316c94;
    }
    ctx->pc = 0x316C8Cu;
    {
        const bool branch_taken_0x316c8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 13));
        ctx->pc = 0x316C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C8Cu;
        // 0x316c90: 0x8fa50508  lw          $a1, 0x508($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316c8c) {
            ctx->pc = 0x316B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_316b00;
        }
    }
    ctx->pc = 0x316C94u;
label_316c94:
    // 0x316c94: 0x8fa20508  lw          $v0, 0x508($sp)
    ctx->pc = 0x316c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
label_316c98:
    // 0x316c98: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x316c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_316c9c:
    // 0x316c9c: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x316c9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_316ca0:
    // 0x316ca0: 0xa7a30510  sh          $v1, 0x510($sp)
    ctx->pc = 0x316ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 1296), (uint16_t)GPR_U32(ctx, 3));
label_316ca4:
    // 0x316ca4: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x316ca4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_316ca8:
    // 0x316ca8: 0xa7a20512  sh          $v0, 0x512($sp)
    ctx->pc = 0x316ca8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 1298), (uint16_t)GPR_U32(ctx, 2));
label_316cac:
    // 0x316cac: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x316cacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_316cb0:
    // 0x316cb0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x316cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_316cb4:
    // 0x316cb4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x316cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_316cb8:
    // 0x316cb8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x316cb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_316cbc:
    // 0x316cbc: 0x104000ff  beqz        $v0, . + 4 + (0xFF << 2)
label_316cc0:
    if (ctx->pc == 0x316CC0u) {
        ctx->pc = 0x316CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316CBCu;
        // 0x316cc0: 0x8fa30508  lw          $v1, 0x508($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316CC4u;
        goto label_316cc4;
    }
    ctx->pc = 0x316CBCu;
    {
        const bool branch_taken_0x316cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x316CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316CBCu;
        // 0x316cc0: 0x8fa30508  lw          $v1, 0x508($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316cbc) {
            ctx->pc = 0x3170BCu;
            goto label_3170bc;
        }
    }
    ctx->pc = 0x316CC4u;
label_316cc4:
    // 0x316cc4: 0xc797812c  lwc1        $f23, -0x7ED4($gp)
    ctx->pc = 0x316cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_316cc8:
    // 0x316cc8: 0x2415000c  addiu       $s5, $zero, 0xC
    ctx->pc = 0x316cc8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_316ccc:
    // 0x316ccc: 0xc7968130  lwc1        $f22, -0x7ED0($gp)
    ctx->pc = 0x316cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_316cd0:
    // 0x316cd0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x316cd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_316cd4:
    // 0x316cd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x316cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_316cd8:
    // 0x316cd8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x316cd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_316cdc:
    // 0x316cdc: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x316cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_316ce0:
    // 0x316ce0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_316ce4:
    if (ctx->pc == 0x316CE4u) {
        ctx->pc = 0x316CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316CE0u;
        // 0x316ce4: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316CE8u;
        goto label_316ce8;
    }
    ctx->pc = 0x316CE0u;
    {
        const bool branch_taken_0x316ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x316CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316CE0u;
        // 0x316ce4: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ce0) {
            ctx->pc = 0x316CF4u;
            goto label_316cf4;
        }
    }
    ctx->pc = 0x316CE8u;
label_316ce8:
    // 0x316ce8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x316ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_316cec:
    // 0x316cec: 0x10000002  b           . + 4 + (0x2 << 2)
label_316cf0:
    if (ctx->pc == 0x316CF0u) {
        ctx->pc = 0x316CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316CECu;
        // 0x316cf0: 0x94470000  lhu         $a3, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316CF4u;
        goto label_316cf4;
    }
    ctx->pc = 0x316CECu;
    {
        const bool branch_taken_0x316cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316CECu;
        // 0x316cf0: 0x94470000  lhu         $a3, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316cec) {
            ctx->pc = 0x316CF8u;
            goto label_316cf8;
        }
    }
    ctx->pc = 0x316CF4u;
label_316cf4:
    // 0x316cf4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x316cf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_316cf8:
    // 0x316cf8: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x316cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_316cfc:
    // 0x316cfc: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x316cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_316d00:
    // 0x316d00: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x316d00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_316d04:
    // 0x316d04: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x316d04u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_316d08:
    // 0x316d08: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x316d08u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_316d0c:
    // 0x316d0c: 0x751018  mult        $v0, $v1, $s5
    ctx->pc = 0x316d0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_316d10:
    // 0x316d10: 0x951818  mult        $v1, $a0, $s5
    ctx->pc = 0x316d10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_316d14:
    // 0x316d14: 0x533021  addu        $a2, $v0, $s3
    ctx->pc = 0x316d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_316d18:
    // 0x316d18: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x316d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_316d1c:
    // 0x316d1c: 0xb51818  mult        $v1, $a1, $s5
    ctx->pc = 0x316d1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_316d20:
    // 0x316d20: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x316d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_316d24:
    // 0x316d24: 0xc4870000  lwc1        $f7, 0x0($a0)
    ctx->pc = 0x316d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_316d28:
    // 0x316d28: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x316d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316d2c:
    // 0x316d2c: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x316d2cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_316d30:
    // 0x316d30: 0xe7a70550  swc1        $f7, 0x550($sp)
    ctx->pc = 0x316d30u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1360), bits); }
label_316d34:
    // 0x316d34: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x316d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316d38:
    // 0x316d38: 0xc48a0004  lwc1        $f10, 0x4($a0)
    ctx->pc = 0x316d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_316d3c:
    // 0x316d3c: 0x46005281  sub.s       $f10, $f10, $f0
    ctx->pc = 0x316d3cu;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
label_316d40:
    // 0x316d40: 0xe7aa0554  swc1        $f10, 0x554($sp)
    ctx->pc = 0x316d40u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1364), bits); }
label_316d44:
    // 0x316d44: 0xc4880008  lwc1        $f8, 0x8($a0)
    ctx->pc = 0x316d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_316d48:
    // 0x316d48: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x316d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316d4c:
    // 0x316d4c: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x316d4cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
label_316d50:
    // 0x316d50: 0xe7a80558  swc1        $f8, 0x558($sp)
    ctx->pc = 0x316d50u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1368), bits); }
label_316d54:
    // 0x316d54: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x316d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_316d58:
    // 0x316d58: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x316d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316d5c:
    // 0x316d5c: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x316d5cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_316d60:
    // 0x316d60: 0xe7a50560  swc1        $f5, 0x560($sp)
    ctx->pc = 0x316d60u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1376), bits); }
label_316d64:
    // 0x316d64: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x316d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316d68:
    // 0x316d68: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x316d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_316d6c:
    // 0x316d6c: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x316d6cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_316d70:
    // 0x316d70: 0xe7a40564  swc1        $f4, 0x564($sp)
    ctx->pc = 0x316d70u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1380), bits); }
label_316d74:
    // 0x316d74: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x316d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_316d78:
    // 0x316d78: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x316d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316d7c:
    // 0x316d7c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x316d7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_316d80:
    // 0x316d80: 0xe7a10568  swc1        $f1, 0x568($sp)
    ctx->pc = 0x316d80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1384), bits); }
label_316d84:
    // 0x316d84: 0xc7a60010  lwc1        $f6, 0x10($sp)
    ctx->pc = 0x316d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_316d88:
    // 0x316d88: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x316d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_316d8c:
    // 0x316d8c: 0x46053242  mul.s       $f9, $f6, $f5
    ctx->pc = 0x316d8cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
label_316d90:
    // 0x316d90: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x316d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316d94:
    // 0x316d94: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x316d94u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_316d98:
    // 0x316d98: 0x46051142  mul.s       $f5, $f2, $f5
    ctx->pc = 0x316d98u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_316d9c:
    // 0x316d9c: 0x460400c2  mul.s       $f3, $f0, $f4
    ctx->pc = 0x316d9cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_316da0:
    // 0x316da0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x316da0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_316da4:
    // 0x316da4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x316da4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_316da8:
    // 0x316da8: 0x46091901  sub.s       $f4, $f3, $f9
    ctx->pc = 0x316da8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[9]);
label_316dac:
    // 0x316dac: 0x46023181  sub.s       $f6, $f6, $f2
    ctx->pc = 0x316dacu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
label_316db0:
    // 0x316db0: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x316db0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_316db4:
    // 0x316db4: 0xe7a40588  swc1        $f4, 0x588($sp)
    ctx->pc = 0x316db4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1416), bits); }
label_316db8:
    // 0x316db8: 0xe7a60580  swc1        $f6, 0x580($sp)
    ctx->pc = 0x316db8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1408), bits); }
label_316dbc:
    // 0x316dbc: 0xe7a50584  swc1        $f5, 0x584($sp)
    ctx->pc = 0x316dbcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1412), bits); }
label_316dc0:
    // 0x316dc0: 0x460639c2  mul.s       $f7, $f7, $f6
    ctx->pc = 0x316dc0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
label_316dc4:
    // 0x316dc4: 0x46055282  mul.s       $f10, $f10, $f5
    ctx->pc = 0x316dc4u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
label_316dc8:
    // 0x316dc8: 0x46044202  mul.s       $f8, $f8, $f4
    ctx->pc = 0x316dc8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
label_316dcc:
    // 0x316dcc: 0x460a39c0  add.s       $f7, $f7, $f10
    ctx->pc = 0x316dccu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[10]);
label_316dd0:
    // 0x316dd0: 0x46083a80  add.s       $f10, $f7, $f8
    ctx->pc = 0x316dd0u;
    ctx->f[10] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
label_316dd4:
    // 0x316dd4: 0x460ab834  c.lt.s      $f23, $f10
    ctx->pc = 0x316dd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316dd8:
    // 0x316dd8: 0x0  nop
    ctx->pc = 0x316dd8u;
    // NOP
label_316ddc:
    // 0x316ddc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_316de0:
    if (ctx->pc == 0x316DE0u) {
        ctx->pc = 0x316DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316DDCu;
        // 0x316de0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316DE4u;
        goto label_316de4;
    }
    ctx->pc = 0x316DDCu;
    {
        const bool branch_taken_0x316ddc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x316DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316DDCu;
        // 0x316de0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ddc) {
            ctx->pc = 0x316DE8u;
            goto label_316de8;
        }
    }
    ctx->pc = 0x316DE4u;
label_316de4:
    // 0x316de4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x316de4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_316de8:
    // 0x316de8: 0x106000ab  beqz        $v1, . + 4 + (0xAB << 2)
label_316dec:
    if (ctx->pc == 0x316DECu) {
        ctx->pc = 0x316DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316DE8u;
        // 0x316dec: 0xc7a20000  lwc1        $f2, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x316DF0u;
        goto label_316df0;
    }
    ctx->pc = 0x316DE8u;
    {
        const bool branch_taken_0x316de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x316DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316DE8u;
        // 0x316dec: 0xc7a20000  lwc1        $f2, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x316de8) {
            ctx->pc = 0x317098u;
            goto label_317098;
        }
    }
    ctx->pc = 0x316DF0u;
label_316df0:
    // 0x316df0: 0x46005007  neg.s       $f0, $f10
    ctx->pc = 0x316df0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[10]);
label_316df4:
    // 0x316df4: 0x46160242  mul.s       $f9, $f0, $f22
    ctx->pc = 0x316df4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_316df8:
    // 0x316df8: 0x460952c1  sub.s       $f11, $f10, $f9
    ctx->pc = 0x316df8u;
    ctx->f[11] = FPU_SUB_S(ctx->f[10], ctx->f[9]);
label_316dfc:
    // 0x316dfc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x316dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316e00:
    // 0x316e00: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x316e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_316e04:
    // 0x316e04: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x316e04u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_316e08:
    // 0x316e08: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x316e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_316e0c:
    // 0x316e0c: 0xe7a20570  swc1        $f2, 0x570($sp)
    ctx->pc = 0x316e0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1392), bits); }
label_316e10:
    // 0x316e10: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x316e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316e14:
    // 0x316e14: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x316e14u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_316e18:
    // 0x316e18: 0xe7a30574  swc1        $f3, 0x574($sp)
    ctx->pc = 0x316e18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1396), bits); }
label_316e1c:
    // 0x316e1c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x316e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316e20:
    // 0x316e20: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x316e20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_316e24:
    // 0x316e24: 0xe7a10578  swc1        $f1, 0x578($sp)
    ctx->pc = 0x316e24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1400), bits); }
label_316e28:
    // 0x316e28: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x316e28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_316e2c:
    // 0x316e2c: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x316e2cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_316e30:
    // 0x316e30: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x316e30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_316e34:
    // 0x316e34: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x316e34u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_316e38:
    // 0x316e38: 0x46011200  add.s       $f8, $f2, $f1
    ctx->pc = 0x316e38u;
    ctx->f[8] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_316e3c:
    // 0x316e3c: 0x46084836  c.le.s      $f9, $f8
    ctx->pc = 0x316e3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316e40:
    // 0x316e40: 0x0  nop
    ctx->pc = 0x316e40u;
    // NOP
label_316e44:
    // 0x316e44: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_316e48:
    if (ctx->pc == 0x316E48u) {
        ctx->pc = 0x316E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316E44u;
        // 0x316e48: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316E4Cu;
        goto label_316e4c;
    }
    ctx->pc = 0x316E44u;
    {
        const bool branch_taken_0x316e44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x316E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316E44u;
        // 0x316e48: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316e44) {
            ctx->pc = 0x316E60u;
            goto label_316e60;
        }
    }
    ctx->pc = 0x316E4Cu;
label_316e4c:
    // 0x316e4c: 0x460b4036  c.le.s      $f8, $f11
    ctx->pc = 0x316e4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316e50:
    // 0x316e50: 0x0  nop
    ctx->pc = 0x316e50u;
    // NOP
label_316e54:
    // 0x316e54: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
label_316e58:
    if (ctx->pc == 0x316E58u) {
        ctx->pc = 0x316E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316E54u;
        // 0x316e58: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316E5Cu;
        goto label_316e5c;
    }
    ctx->pc = 0x316E54u;
    {
        const bool branch_taken_0x316e54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x316e54) {
            ctx->pc = 0x316E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316E54u;
            // 0x316e58: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x316E60u;
            goto label_316e60;
        }
    }
    ctx->pc = 0x316E5Cu;
label_316e5c:
    // 0x316e5c: 0x0  nop
    ctx->pc = 0x316e5cu;
    // NOP
label_316e60:
    // 0x316e60: 0x1060008d  beqz        $v1, . + 4 + (0x8D << 2)
label_316e64:
    if (ctx->pc == 0x316E64u) {
        ctx->pc = 0x316E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316E60u;
        // 0x316e64: 0xc7a30578  lwc1        $f3, 0x578($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x316E68u;
        goto label_316e68;
    }
    ctx->pc = 0x316E60u;
    {
        const bool branch_taken_0x316e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x316E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316E60u;
        // 0x316e64: 0xc7a30578  lwc1        $f3, 0x578($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x316e60) {
            ctx->pc = 0x317098u;
            goto label_317098;
        }
    }
    ctx->pc = 0x316E68u;
label_316e68:
    // 0x316e68: 0xc7a40554  lwc1        $f4, 0x554($sp)
    ctx->pc = 0x316e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_316e6c:
    // 0x316e6c: 0xc7a20574  lwc1        $f2, 0x574($sp)
    ctx->pc = 0x316e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_316e70:
    // 0x316e70: 0xc7a50558  lwc1        $f5, 0x558($sp)
    ctx->pc = 0x316e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_316e74:
    // 0x316e74: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x316e74u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_316e78:
    // 0x316e78: 0xc7a00570  lwc1        $f0, 0x570($sp)
    ctx->pc = 0x316e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316e7c:
    // 0x316e7c: 0xc7a10550  lwc1        $f1, 0x550($sp)
    ctx->pc = 0x316e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_316e80:
    // 0x316e80: 0x460511c2  mul.s       $f7, $f2, $f5
    ctx->pc = 0x316e80u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_316e84:
    // 0x316e84: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x316e84u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_316e88:
    // 0x316e88: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x316e88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_316e8c:
    // 0x316e8c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x316e8cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_316e90:
    // 0x316e90: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x316e90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_316e94:
    // 0x316e94: 0x460639c1  sub.s       $f7, $f7, $f6
    ctx->pc = 0x316e94u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
label_316e98:
    // 0x316e98: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x316e98u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_316e9c:
    // 0x316e9c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x316e9cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_316ea0:
    // 0x316ea0: 0xe7a70590  swc1        $f7, 0x590($sp)
    ctx->pc = 0x316ea0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1424), bits); }
label_316ea4:
    // 0x316ea4: 0xe7a40598  swc1        $f4, 0x598($sp)
    ctx->pc = 0x316ea4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1432), bits); }
label_316ea8:
    // 0x316ea8: 0xe7a30594  swc1        $f3, 0x594($sp)
    ctx->pc = 0x316ea8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1428), bits); }
label_316eac:
    // 0x316eac: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x316eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_316eb0:
    // 0x316eb0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x316eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_316eb4:
    // 0x316eb4: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x316eb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_316eb8:
    // 0x316eb8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x316eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316ebc:
    // 0x316ebc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x316ebcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_316ec0:
    // 0x316ec0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x316ec0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_316ec4:
    // 0x316ec4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x316ec4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_316ec8:
    // 0x316ec8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x316ec8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_316ecc:
    // 0x316ecc: 0x46004836  c.le.s      $f9, $f0
    ctx->pc = 0x316eccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316ed0:
    // 0x316ed0: 0x0  nop
    ctx->pc = 0x316ed0u;
    // NOP
label_316ed4:
    // 0x316ed4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_316ed8:
    if (ctx->pc == 0x316ED8u) {
        ctx->pc = 0x316ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316ED4u;
        // 0x316ed8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316EDCu;
        goto label_316edc;
    }
    ctx->pc = 0x316ED4u;
    {
        const bool branch_taken_0x316ed4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x316ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316ED4u;
        // 0x316ed8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ed4) {
            ctx->pc = 0x316EF0u;
            goto label_316ef0;
        }
    }
    ctx->pc = 0x316EDCu;
label_316edc:
    // 0x316edc: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x316edcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
label_316ee0:
    // 0x316ee0: 0x460b0036  c.le.s      $f0, $f11
    ctx->pc = 0x316ee0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316ee4:
    // 0x316ee4: 0x0  nop
    ctx->pc = 0x316ee4u;
    // NOP
label_316ee8:
    // 0x316ee8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_316eec:
    if (ctx->pc == 0x316EECu) {
        ctx->pc = 0x316EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316EE8u;
        // 0x316eec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316EF0u;
        goto label_316ef0;
    }
    ctx->pc = 0x316EE8u;
    {
        const bool branch_taken_0x316ee8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x316ee8) {
            ctx->pc = 0x316EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316EE8u;
            // 0x316eec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x316EF0u;
            goto label_316ef0;
        }
    }
    ctx->pc = 0x316EF0u;
label_316ef0:
    // 0x316ef0: 0x10600069  beqz        $v1, . + 4 + (0x69 << 2)
label_316ef4:
    if (ctx->pc == 0x316EF4u) {
        ctx->pc = 0x316EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316EF0u;
        // 0x316ef4: 0xc7a00590  lwc1        $f0, 0x590($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x316EF8u;
        goto label_316ef8;
    }
    ctx->pc = 0x316EF0u;
    {
        const bool branch_taken_0x316ef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x316EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316EF0u;
        // 0x316ef4: 0xc7a00590  lwc1        $f0, 0x590($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ef0) {
            ctx->pc = 0x317098u;
            goto label_317098;
        }
    }
    ctx->pc = 0x316EF8u;
label_316ef8:
    // 0x316ef8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x316ef8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_316efc:
    // 0x316efc: 0xc7a30560  lwc1        $f3, 0x560($sp)
    ctx->pc = 0x316efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_316f00:
    // 0x316f00: 0xc7a20564  lwc1        $f2, 0x564($sp)
    ctx->pc = 0x316f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_316f04:
    // 0x316f04: 0xc7a40594  lwc1        $f4, 0x594($sp)
    ctx->pc = 0x316f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_316f08:
    // 0x316f08: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x316f08u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_316f0c:
    // 0x316f0c: 0xc7a10568  lwc1        $f1, 0x568($sp)
    ctx->pc = 0x316f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_316f10:
    // 0x316f10: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x316f10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_316f14:
    // 0x316f14: 0xc7a00598  lwc1        $f0, 0x598($sp)
    ctx->pc = 0x316f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316f18:
    // 0x316f18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x316f18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_316f1c:
    // 0x316f1c: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x316f1cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_316f20:
    // 0x316f20: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x316f20u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_316f24:
    // 0x316f24: 0x46034836  c.le.s      $f9, $f3
    ctx->pc = 0x316f24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316f28:
    // 0x316f28: 0x0  nop
    ctx->pc = 0x316f28u;
    // NOP
label_316f2c:
    // 0x316f2c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_316f30:
    if (ctx->pc == 0x316F30u) {
        ctx->pc = 0x316F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316F2Cu;
        // 0x316f30: 0x46001b06  mov.s       $f12, $f3 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x316F34u;
        goto label_316f34;
    }
    ctx->pc = 0x316F2Cu;
    {
        const bool branch_taken_0x316f2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x316F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316F2Cu;
        // 0x316f30: 0x46001b06  mov.s       $f12, $f3 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x316f2c) {
            ctx->pc = 0x316F44u;
            goto label_316f44;
        }
    }
    ctx->pc = 0x316F34u;
label_316f34:
    // 0x316f34: 0x460b1836  c.le.s      $f3, $f11
    ctx->pc = 0x316f34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316f38:
    // 0x316f38: 0x0  nop
    ctx->pc = 0x316f38u;
    // NOP
label_316f3c:
    // 0x316f3c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_316f40:
    if (ctx->pc == 0x316F40u) {
        ctx->pc = 0x316F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316F3Cu;
        // 0x316f40: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316F44u;
        goto label_316f44;
    }
    ctx->pc = 0x316F3Cu;
    {
        const bool branch_taken_0x316f3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x316f3c) {
            ctx->pc = 0x316F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316F3Cu;
            // 0x316f40: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x316F44u;
            goto label_316f44;
        }
    }
    ctx->pc = 0x316F44u;
label_316f44:
    // 0x316f44: 0x50600055  beql        $v1, $zero, . + 4 + (0x55 << 2)
label_316f48:
    if (ctx->pc == 0x316F48u) {
        ctx->pc = 0x316F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316F44u;
        // 0x316f48: 0x97a20510  lhu         $v0, 0x510($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 1296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316F4Cu;
        goto label_316f4c;
    }
    ctx->pc = 0x316F44u;
    {
        const bool branch_taken_0x316f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x316f44) {
            ctx->pc = 0x316F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316F44u;
            // 0x316f48: 0x97a20510  lhu         $v0, 0x510($sp) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 1296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31709Cu;
            goto label_31709c;
        }
    }
    ctx->pc = 0x316F4Cu;
label_316f4c:
    // 0x316f4c: 0x460a6303  div.s       $f12, $f12, $f10
    ctx->pc = 0x316f4cu;
    { if (ctx->f[10] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[10]); }
label_316f50:
    // 0x316f50: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x316f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_316f54:
    // 0x316f54: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x316f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_316f58:
    // 0x316f58: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x316f58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_316f5c:
    // 0x316f5c: 0xb3a50533  sdl         $a1, 0x533($sp)
    ctx->pc = 0x316f5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1331); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_316f60:
    // 0x316f60: 0xb7a5052c  sdr         $a1, 0x52C($sp)
    ctx->pc = 0x316f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1324); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_316f64:
    // 0x316f64: 0xafa80534  sw          $t0, 0x534($sp)
    ctx->pc = 0x316f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1332), GPR_U32(ctx, 8));
label_316f68:
    // 0x316f68: 0xafa70538  sw          $a3, 0x538($sp)
    ctx->pc = 0x316f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1336), GPR_U32(ctx, 7));
label_316f6c:
    // 0x316f6c: 0xafa2053c  sw          $v0, 0x53C($sp)
    ctx->pc = 0x316f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1340), GPR_U32(ctx, 2));
label_316f70:
    // 0x316f70: 0xafa40540  sw          $a0, 0x540($sp)
    ctx->pc = 0x316f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 4));
label_316f74:
    // 0x316f74: 0xafa60544  sw          $a2, 0x544($sp)
    ctx->pc = 0x316f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1348), GPR_U32(ctx, 6));
label_316f78:
    // 0x316f78: 0xc4870000  lwc1        $f7, 0x0($a0)
    ctx->pc = 0x316f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_316f7c:
    // 0x316f7c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x316f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316f80:
    // 0x316f80: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x316f80u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_316f84:
    // 0x316f84: 0xe7a705a0  swc1        $f7, 0x5A0($sp)
    ctx->pc = 0x316f84u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1440), bits); }
label_316f88:
    // 0x316f88: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x316f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316f8c:
    // 0x316f8c: 0xc4860004  lwc1        $f6, 0x4($a0)
    ctx->pc = 0x316f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_316f90:
    // 0x316f90: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x316f90u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_316f94:
    // 0x316f94: 0xe7a605a4  swc1        $f6, 0x5A4($sp)
    ctx->pc = 0x316f94u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1444), bits); }
label_316f98:
    // 0x316f98: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x316f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_316f9c:
    // 0x316f9c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x316f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316fa0:
    // 0x316fa0: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x316fa0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_316fa4:
    // 0x316fa4: 0xe7a505a8  swc1        $f5, 0x5A8($sp)
    ctx->pc = 0x316fa4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1448), bits); }
label_316fa8:
    // 0x316fa8: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x316fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_316fac:
    // 0x316fac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x316facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316fb0:
    // 0x316fb0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x316fb0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_316fb4:
    // 0x316fb4: 0xe7a205b0  swc1        $f2, 0x5B0($sp)
    ctx->pc = 0x316fb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1456), bits); }
label_316fb8:
    // 0x316fb8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x316fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316fbc:
    // 0x316fbc: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x316fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_316fc0:
    // 0x316fc0: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x316fc0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_316fc4:
    // 0x316fc4: 0xe7a405b4  swc1        $f4, 0x5B4($sp)
    ctx->pc = 0x316fc4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1460), bits); }
label_316fc8:
    // 0x316fc8: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x316fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_316fcc:
    // 0x316fcc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x316fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316fd0:
    // 0x316fd0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x316fd0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_316fd4:
    // 0x316fd4: 0xe7a105b8  swc1        $f1, 0x5B8($sp)
    ctx->pc = 0x316fd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1464), bits); }
label_316fd8:
    // 0x316fd8: 0x46013002  mul.s       $f0, $f6, $f1
    ctx->pc = 0x316fd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_316fdc:
    // 0x316fdc: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x316fdcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_316fe0:
    // 0x316fe0: 0x460438c2  mul.s       $f3, $f7, $f4
    ctx->pc = 0x316fe0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_316fe4:
    // 0x316fe4: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x316fe4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_316fe8:
    // 0x316fe8: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x316fe8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_316fec:
    // 0x316fec: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x316fecu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_316ff0:
    // 0x316ff0: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x316ff0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
label_316ff4:
    // 0x316ff4: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x316ff4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_316ff8:
    // 0x316ff8: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x316ff8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_316ffc:
    // 0x316ffc: 0xe7a30528  swc1        $f3, 0x528($sp)
    ctx->pc = 0x316ffcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1320), bits); }
label_317000:
    // 0x317000: 0xe7a20524  swc1        $f2, 0x524($sp)
    ctx->pc = 0x317000u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1316), bits); }
label_317004:
    // 0x317004: 0xe7a00520  swc1        $f0, 0x520($sp)
    ctx->pc = 0x317004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1312), bits); }
label_317008:
    // 0x317008: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x317008u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_31700c:
    // 0x31700c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x31700cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_317010:
    // 0x317010: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x317010u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_317014:
    // 0x317014: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x317014u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_317018:
    // 0x317018: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x317018u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_31701c:
    // 0x31701c: 0x46000004  c1          0x4
    ctx->pc = 0x31701cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_317020:
    // 0x317020: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x317020u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317024:
    // 0x317024: 0x0  nop
    ctx->pc = 0x317024u;
    // NOP
label_317028:
    // 0x317028: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_31702c:
    if (ctx->pc == 0x31702Cu) {
        ctx->pc = 0x31702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317028u;
        // 0x31702c: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x317030u;
        goto label_317030;
    }
    ctx->pc = 0x317028u;
    {
        const bool branch_taken_0x317028 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317028u;
        // 0x31702c: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x317028) {
            ctx->pc = 0x317040u;
            goto label_317040;
        }
    }
    ctx->pc = 0x317030u;
label_317030:
    // 0x317030: 0x4600a143  div.s       $f5, $f20, $f0
    ctx->pc = 0x317030u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_317034:
    // 0x317034: 0x10000004  b           . + 4 + (0x4 << 2)
label_317038:
    if (ctx->pc == 0x317038u) {
        ctx->pc = 0x317038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317034u;
        // 0x317038: 0xc7a00520  lwc1        $f0, 0x520($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31703Cu;
        goto label_31703c;
    }
    ctx->pc = 0x317034u;
    {
        const bool branch_taken_0x317034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317034u;
        // 0x317038: 0xc7a00520  lwc1        $f0, 0x520($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x317034) {
            ctx->pc = 0x317048u;
            goto label_317048;
        }
    }
    ctx->pc = 0x31703Cu;
label_31703c:
    // 0x31703c: 0x0  nop
    ctx->pc = 0x31703cu;
    // NOP
label_317040:
    // 0x317040: 0xc7a00520  lwc1        $f0, 0x520($sp)
    ctx->pc = 0x317040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317044:
    // 0x317044: 0x0  nop
    ctx->pc = 0x317044u;
    // NOP
label_317048:
    // 0x317048: 0xc7a10524  lwc1        $f1, 0x524($sp)
    ctx->pc = 0x317048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31704c:
    // 0x31704c: 0xc7a20528  lwc1        $f2, 0x528($sp)
    ctx->pc = 0x31704cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_317050:
    // 0x317050: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x317050u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_317054:
    // 0x317054: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x317054u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_317058:
    // 0x317058: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x317058u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_31705c:
    // 0x31705c: 0xe7a00520  swc1        $f0, 0x520($sp)
    ctx->pc = 0x31705cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1312), bits); }
label_317060:
    // 0x317060: 0xe7a10524  swc1        $f1, 0x524($sp)
    ctx->pc = 0x317060u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1316), bits); }
label_317064:
    // 0x317064: 0xe7a20528  swc1        $f2, 0x528($sp)
    ctx->pc = 0x317064u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1320), bits); }
label_317068:
    // 0x317068: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x317068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31706c:
    // 0x31706c: 0x320382d  daddu       $a3, $t9, $zero
    ctx->pc = 0x31706cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_317070:
    // 0x317070: 0x7fae05d0  sq          $t6, 0x5D0($sp)
    ctx->pc = 0x317070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1488), GPR_VEC(ctx, 14));
label_317074:
    // 0x317074: 0x7faf05e0  sq          $t7, 0x5E0($sp)
    ctx->pc = 0x317074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1504), GPR_VEC(ctx, 15));
label_317078:
    // 0x317078: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x317078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31707c:
    // 0x31707c: 0x7fb905f0  sq          $t9, 0x5F0($sp)
    ctx->pc = 0x31707cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1520), GPR_VEC(ctx, 25));
label_317080:
    // 0x317080: 0x1e0f809  jalr        $t7
label_317084:
    if (ctx->pc == 0x317084u) {
        ctx->pc = 0x317084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317080u;
        // 0x317084: 0x27a60520  addiu       $a2, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317088u;
        goto label_317088;
    }
    ctx->pc = 0x317080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 15);
        SET_GPR_U32(ctx, 31, 0x317088u);
        ctx->pc = 0x317084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317080u;
        // 0x317084: 0x27a60520  addiu       $a2, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317080u, 0x317088u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x317088u;
label_317088:
    // 0x317088: 0x7bae05d0  lq          $t6, 0x5D0($sp)
    ctx->pc = 0x317088u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 1488)));
label_31708c:
    // 0x31708c: 0x7baf05e0  lq          $t7, 0x5E0($sp)
    ctx->pc = 0x31708cu;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 1504)));
label_317090:
    // 0x317090: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_317094:
    if (ctx->pc == 0x317094u) {
        ctx->pc = 0x317094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317090u;
        // 0x317094: 0x7bb905f0  lq          $t9, 0x5F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 1520)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317098u;
        goto label_317098;
    }
    ctx->pc = 0x317090u;
    {
        const bool branch_taken_0x317090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317090u;
        // 0x317094: 0x7bb905f0  lq          $t9, 0x5F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 1520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317090) {
            ctx->pc = 0x3170DCu;
            goto label_3170dc;
        }
    }
    ctx->pc = 0x317098u;
label_317098:
    // 0x317098: 0x97a20510  lhu         $v0, 0x510($sp)
    ctx->pc = 0x317098u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 1296)));
label_31709c:
    // 0x31709c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x31709cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3170a0:
    // 0x3170a0: 0x97a40512  lhu         $a0, 0x512($sp)
    ctx->pc = 0x3170a0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 1298)));
label_3170a4:
    // 0x3170a4: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x3170a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_3170a8:
    // 0x3170a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3170a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3170ac:
    // 0x3170ac: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3170acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3170b0:
    // 0x3170b0: 0x5440ff0b  bnel        $v0, $zero, . + 4 + (-0xF5 << 2)
label_3170b4:
    if (ctx->pc == 0x3170B4u) {
        ctx->pc = 0x3170B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3170B0u;
        // 0x3170b4: 0x8e430024  lw          $v1, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3170B8u;
        goto label_3170b8;
    }
    ctx->pc = 0x3170B0u;
    {
        const bool branch_taken_0x3170b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3170b0) {
            ctx->pc = 0x3170B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3170B0u;
            // 0x3170b4: 0x8e430024  lw          $v1, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x316CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_316ce0;
        }
    }
    ctx->pc = 0x3170B8u;
label_3170b8:
    // 0x3170b8: 0x8fa30508  lw          $v1, 0x508($sp)
    ctx->pc = 0x3170b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
label_3170bc:
    // 0x3170bc: 0x3c3102b  sltu        $v0, $fp, $v1
    ctx->pc = 0x3170bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3170c0:
    // 0x3170c0: 0x1440fe7f  bnez        $v0, . + 4 + (-0x181 << 2)
label_3170c4:
    if (ctx->pc == 0x3170C4u) {
        ctx->pc = 0x3170C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3170C0u;
        // 0x3170c4: 0x2462fff4  addiu       $v0, $v1, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3170C8u;
        goto label_3170c8;
    }
    ctx->pc = 0x3170C0u;
    {
        const bool branch_taken_0x3170c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3170C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3170C0u;
        // 0x3170c4: 0x2462fff4  addiu       $v0, $v1, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3170c0) {
            ctx->pc = 0x316AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_316ac0;
        }
    }
    ctx->pc = 0x3170C8u;
label_3170c8:
    // 0x3170c8: 0x8fa3033c  lw          $v1, 0x33C($sp)
    ctx->pc = 0x3170c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_3170cc:
    // 0x3170cc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3170ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3170d0:
    // 0x3170d0: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x3170d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3170d4:
    // 0x3170d4: 0x5440fde0  bnel        $v0, $zero, . + 4 + (-0x220 << 2)
label_3170d8:
    if (ctx->pc == 0x3170D8u) {
        ctx->pc = 0x3170D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3170D4u;
        // 0x3170d8: 0x8c62fff4  lw          $v0, -0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3170DCu;
        goto label_3170dc;
    }
    ctx->pc = 0x3170D4u;
    {
        const bool branch_taken_0x3170d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3170d4) {
            ctx->pc = 0x3170D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3170D4u;
            // 0x3170d8: 0x8c62fff4  lw          $v0, -0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x316858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_316858;
        }
    }
    ctx->pc = 0x3170DCu;
label_3170dc:
    // 0x3170dc: 0x7bb00690  lq          $s0, 0x690($sp)
    ctx->pc = 0x3170dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1680)));
label_3170e0:
    // 0x3170e0: 0x7bb10680  lq          $s1, 0x680($sp)
    ctx->pc = 0x3170e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1664)));
label_3170e4:
    // 0x3170e4: 0x7bb20670  lq          $s2, 0x670($sp)
    ctx->pc = 0x3170e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1648)));
label_3170e8:
    // 0x3170e8: 0x7bb30660  lq          $s3, 0x660($sp)
    ctx->pc = 0x3170e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1632)));
label_3170ec:
    // 0x3170ec: 0x7bb40650  lq          $s4, 0x650($sp)
    ctx->pc = 0x3170ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1616)));
label_3170f0:
    // 0x3170f0: 0x7bb50640  lq          $s5, 0x640($sp)
    ctx->pc = 0x3170f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1600)));
label_3170f4:
    // 0x3170f4: 0x7bb60630  lq          $s6, 0x630($sp)
    ctx->pc = 0x3170f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1584)));
label_3170f8:
    // 0x3170f8: 0x7bb70620  lq          $s7, 0x620($sp)
    ctx->pc = 0x3170f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1568)));
label_3170fc:
    // 0x3170fc: 0x7bbe0610  lq          $fp, 0x610($sp)
    ctx->pc = 0x3170fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1552)));
label_317100:
    // 0x317100: 0xdfbf0600  ld          $ra, 0x600($sp)
    ctx->pc = 0x317100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1536)));
label_317104:
    // 0x317104: 0xc7b706b8  lwc1        $f23, 0x6B8($sp)
    ctx->pc = 0x317104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_317108:
    // 0x317108: 0xc7b606b0  lwc1        $f22, 0x6B0($sp)
    ctx->pc = 0x317108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_31710c:
    // 0x31710c: 0xc7b506a8  lwc1        $f21, 0x6A8($sp)
    ctx->pc = 0x31710cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_317110:
    // 0x317110: 0xc7b406a0  lwc1        $f20, 0x6A0($sp)
    ctx->pc = 0x317110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_317114:
    // 0x317114: 0x3e00008  jr          $ra
label_317118:
    if (ctx->pc == 0x317118u) {
        ctx->pc = 0x317118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317114u;
        // 0x317118: 0x27bd06c0  addiu       $sp, $sp, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31711Cu;
        goto label_31711c;
    }
    ctx->pc = 0x317114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317114u;
        // 0x317118: 0x27bd06c0  addiu       $sp, $sp, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1728));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31711Cu;
label_31711c:
    // 0x31711c: 0x0  nop
    ctx->pc = 0x31711cu;
    // NOP
    ctx->pc = 0x317120u;
}
