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

// Function: sub_002668A0
// Address: 0x2668a0 - 0x266df0
void sub_002668A0_0x2668a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002668A0_0x2668a0");
#endif

    switch (ctx->pc) {
        case 0x2668a0u: goto label_2668a0;
        case 0x2668a4u: goto label_2668a4;
        case 0x2668a8u: goto label_2668a8;
        case 0x2668acu: goto label_2668ac;
        case 0x2668b0u: goto label_2668b0;
        case 0x2668b4u: goto label_2668b4;
        case 0x2668b8u: goto label_2668b8;
        case 0x2668bcu: goto label_2668bc;
        case 0x2668c0u: goto label_2668c0;
        case 0x2668c4u: goto label_2668c4;
        case 0x2668c8u: goto label_2668c8;
        case 0x2668ccu: goto label_2668cc;
        case 0x2668d0u: goto label_2668d0;
        case 0x2668d4u: goto label_2668d4;
        case 0x2668d8u: goto label_2668d8;
        case 0x2668dcu: goto label_2668dc;
        case 0x2668e0u: goto label_2668e0;
        case 0x2668e4u: goto label_2668e4;
        case 0x2668e8u: goto label_2668e8;
        case 0x2668ecu: goto label_2668ec;
        case 0x2668f0u: goto label_2668f0;
        case 0x2668f4u: goto label_2668f4;
        case 0x2668f8u: goto label_2668f8;
        case 0x2668fcu: goto label_2668fc;
        case 0x266900u: goto label_266900;
        case 0x266904u: goto label_266904;
        case 0x266908u: goto label_266908;
        case 0x26690cu: goto label_26690c;
        case 0x266910u: goto label_266910;
        case 0x266914u: goto label_266914;
        case 0x266918u: goto label_266918;
        case 0x26691cu: goto label_26691c;
        case 0x266920u: goto label_266920;
        case 0x266924u: goto label_266924;
        case 0x266928u: goto label_266928;
        case 0x26692cu: goto label_26692c;
        case 0x266930u: goto label_266930;
        case 0x266934u: goto label_266934;
        case 0x266938u: goto label_266938;
        case 0x26693cu: goto label_26693c;
        case 0x266940u: goto label_266940;
        case 0x266944u: goto label_266944;
        case 0x266948u: goto label_266948;
        case 0x26694cu: goto label_26694c;
        case 0x266950u: goto label_266950;
        case 0x266954u: goto label_266954;
        case 0x266958u: goto label_266958;
        case 0x26695cu: goto label_26695c;
        case 0x266960u: goto label_266960;
        case 0x266964u: goto label_266964;
        case 0x266968u: goto label_266968;
        case 0x26696cu: goto label_26696c;
        case 0x266970u: goto label_266970;
        case 0x266974u: goto label_266974;
        case 0x266978u: goto label_266978;
        case 0x26697cu: goto label_26697c;
        case 0x266980u: goto label_266980;
        case 0x266984u: goto label_266984;
        case 0x266988u: goto label_266988;
        case 0x26698cu: goto label_26698c;
        case 0x266990u: goto label_266990;
        case 0x266994u: goto label_266994;
        case 0x266998u: goto label_266998;
        case 0x26699cu: goto label_26699c;
        case 0x2669a0u: goto label_2669a0;
        case 0x2669a4u: goto label_2669a4;
        case 0x2669a8u: goto label_2669a8;
        case 0x2669acu: goto label_2669ac;
        case 0x2669b0u: goto label_2669b0;
        case 0x2669b4u: goto label_2669b4;
        case 0x2669b8u: goto label_2669b8;
        case 0x2669bcu: goto label_2669bc;
        case 0x2669c0u: goto label_2669c0;
        case 0x2669c4u: goto label_2669c4;
        case 0x2669c8u: goto label_2669c8;
        case 0x2669ccu: goto label_2669cc;
        case 0x2669d0u: goto label_2669d0;
        case 0x2669d4u: goto label_2669d4;
        case 0x2669d8u: goto label_2669d8;
        case 0x2669dcu: goto label_2669dc;
        case 0x2669e0u: goto label_2669e0;
        case 0x2669e4u: goto label_2669e4;
        case 0x2669e8u: goto label_2669e8;
        case 0x2669ecu: goto label_2669ec;
        case 0x2669f0u: goto label_2669f0;
        case 0x2669f4u: goto label_2669f4;
        case 0x2669f8u: goto label_2669f8;
        case 0x2669fcu: goto label_2669fc;
        case 0x266a00u: goto label_266a00;
        case 0x266a04u: goto label_266a04;
        case 0x266a08u: goto label_266a08;
        case 0x266a0cu: goto label_266a0c;
        case 0x266a10u: goto label_266a10;
        case 0x266a14u: goto label_266a14;
        case 0x266a18u: goto label_266a18;
        case 0x266a1cu: goto label_266a1c;
        case 0x266a20u: goto label_266a20;
        case 0x266a24u: goto label_266a24;
        case 0x266a28u: goto label_266a28;
        case 0x266a2cu: goto label_266a2c;
        case 0x266a30u: goto label_266a30;
        case 0x266a34u: goto label_266a34;
        case 0x266a38u: goto label_266a38;
        case 0x266a3cu: goto label_266a3c;
        case 0x266a40u: goto label_266a40;
        case 0x266a44u: goto label_266a44;
        case 0x266a48u: goto label_266a48;
        case 0x266a4cu: goto label_266a4c;
        case 0x266a50u: goto label_266a50;
        case 0x266a54u: goto label_266a54;
        case 0x266a58u: goto label_266a58;
        case 0x266a5cu: goto label_266a5c;
        case 0x266a60u: goto label_266a60;
        case 0x266a64u: goto label_266a64;
        case 0x266a68u: goto label_266a68;
        case 0x266a6cu: goto label_266a6c;
        case 0x266a70u: goto label_266a70;
        case 0x266a74u: goto label_266a74;
        case 0x266a78u: goto label_266a78;
        case 0x266a7cu: goto label_266a7c;
        case 0x266a80u: goto label_266a80;
        case 0x266a84u: goto label_266a84;
        case 0x266a88u: goto label_266a88;
        case 0x266a8cu: goto label_266a8c;
        case 0x266a90u: goto label_266a90;
        case 0x266a94u: goto label_266a94;
        case 0x266a98u: goto label_266a98;
        case 0x266a9cu: goto label_266a9c;
        case 0x266aa0u: goto label_266aa0;
        case 0x266aa4u: goto label_266aa4;
        case 0x266aa8u: goto label_266aa8;
        case 0x266aacu: goto label_266aac;
        case 0x266ab0u: goto label_266ab0;
        case 0x266ab4u: goto label_266ab4;
        case 0x266ab8u: goto label_266ab8;
        case 0x266abcu: goto label_266abc;
        case 0x266ac0u: goto label_266ac0;
        case 0x266ac4u: goto label_266ac4;
        case 0x266ac8u: goto label_266ac8;
        case 0x266accu: goto label_266acc;
        case 0x266ad0u: goto label_266ad0;
        case 0x266ad4u: goto label_266ad4;
        case 0x266ad8u: goto label_266ad8;
        case 0x266adcu: goto label_266adc;
        case 0x266ae0u: goto label_266ae0;
        case 0x266ae4u: goto label_266ae4;
        case 0x266ae8u: goto label_266ae8;
        case 0x266aecu: goto label_266aec;
        case 0x266af0u: goto label_266af0;
        case 0x266af4u: goto label_266af4;
        case 0x266af8u: goto label_266af8;
        case 0x266afcu: goto label_266afc;
        case 0x266b00u: goto label_266b00;
        case 0x266b04u: goto label_266b04;
        case 0x266b08u: goto label_266b08;
        case 0x266b0cu: goto label_266b0c;
        case 0x266b10u: goto label_266b10;
        case 0x266b14u: goto label_266b14;
        case 0x266b18u: goto label_266b18;
        case 0x266b1cu: goto label_266b1c;
        case 0x266b20u: goto label_266b20;
        case 0x266b24u: goto label_266b24;
        case 0x266b28u: goto label_266b28;
        case 0x266b2cu: goto label_266b2c;
        case 0x266b30u: goto label_266b30;
        case 0x266b34u: goto label_266b34;
        case 0x266b38u: goto label_266b38;
        case 0x266b3cu: goto label_266b3c;
        case 0x266b40u: goto label_266b40;
        case 0x266b44u: goto label_266b44;
        case 0x266b48u: goto label_266b48;
        case 0x266b4cu: goto label_266b4c;
        case 0x266b50u: goto label_266b50;
        case 0x266b54u: goto label_266b54;
        case 0x266b58u: goto label_266b58;
        case 0x266b5cu: goto label_266b5c;
        case 0x266b60u: goto label_266b60;
        case 0x266b64u: goto label_266b64;
        case 0x266b68u: goto label_266b68;
        case 0x266b6cu: goto label_266b6c;
        case 0x266b70u: goto label_266b70;
        case 0x266b74u: goto label_266b74;
        case 0x266b78u: goto label_266b78;
        case 0x266b7cu: goto label_266b7c;
        case 0x266b80u: goto label_266b80;
        case 0x266b84u: goto label_266b84;
        case 0x266b88u: goto label_266b88;
        case 0x266b8cu: goto label_266b8c;
        case 0x266b90u: goto label_266b90;
        case 0x266b94u: goto label_266b94;
        case 0x266b98u: goto label_266b98;
        case 0x266b9cu: goto label_266b9c;
        case 0x266ba0u: goto label_266ba0;
        case 0x266ba4u: goto label_266ba4;
        case 0x266ba8u: goto label_266ba8;
        case 0x266bacu: goto label_266bac;
        case 0x266bb0u: goto label_266bb0;
        case 0x266bb4u: goto label_266bb4;
        case 0x266bb8u: goto label_266bb8;
        case 0x266bbcu: goto label_266bbc;
        case 0x266bc0u: goto label_266bc0;
        case 0x266bc4u: goto label_266bc4;
        case 0x266bc8u: goto label_266bc8;
        case 0x266bccu: goto label_266bcc;
        case 0x266bd0u: goto label_266bd0;
        case 0x266bd4u: goto label_266bd4;
        case 0x266bd8u: goto label_266bd8;
        case 0x266bdcu: goto label_266bdc;
        case 0x266be0u: goto label_266be0;
        case 0x266be4u: goto label_266be4;
        case 0x266be8u: goto label_266be8;
        case 0x266becu: goto label_266bec;
        case 0x266bf0u: goto label_266bf0;
        case 0x266bf4u: goto label_266bf4;
        case 0x266bf8u: goto label_266bf8;
        case 0x266bfcu: goto label_266bfc;
        case 0x266c00u: goto label_266c00;
        case 0x266c04u: goto label_266c04;
        case 0x266c08u: goto label_266c08;
        case 0x266c0cu: goto label_266c0c;
        case 0x266c10u: goto label_266c10;
        case 0x266c14u: goto label_266c14;
        case 0x266c18u: goto label_266c18;
        case 0x266c1cu: goto label_266c1c;
        case 0x266c20u: goto label_266c20;
        case 0x266c24u: goto label_266c24;
        case 0x266c28u: goto label_266c28;
        case 0x266c2cu: goto label_266c2c;
        case 0x266c30u: goto label_266c30;
        case 0x266c34u: goto label_266c34;
        case 0x266c38u: goto label_266c38;
        case 0x266c3cu: goto label_266c3c;
        case 0x266c40u: goto label_266c40;
        case 0x266c44u: goto label_266c44;
        case 0x266c48u: goto label_266c48;
        case 0x266c4cu: goto label_266c4c;
        case 0x266c50u: goto label_266c50;
        case 0x266c54u: goto label_266c54;
        case 0x266c58u: goto label_266c58;
        case 0x266c5cu: goto label_266c5c;
        case 0x266c60u: goto label_266c60;
        case 0x266c64u: goto label_266c64;
        case 0x266c68u: goto label_266c68;
        case 0x266c6cu: goto label_266c6c;
        case 0x266c70u: goto label_266c70;
        case 0x266c74u: goto label_266c74;
        case 0x266c78u: goto label_266c78;
        case 0x266c7cu: goto label_266c7c;
        case 0x266c80u: goto label_266c80;
        case 0x266c84u: goto label_266c84;
        case 0x266c88u: goto label_266c88;
        case 0x266c8cu: goto label_266c8c;
        case 0x266c90u: goto label_266c90;
        case 0x266c94u: goto label_266c94;
        case 0x266c98u: goto label_266c98;
        case 0x266c9cu: goto label_266c9c;
        case 0x266ca0u: goto label_266ca0;
        case 0x266ca4u: goto label_266ca4;
        case 0x266ca8u: goto label_266ca8;
        case 0x266cacu: goto label_266cac;
        case 0x266cb0u: goto label_266cb0;
        case 0x266cb4u: goto label_266cb4;
        case 0x266cb8u: goto label_266cb8;
        case 0x266cbcu: goto label_266cbc;
        case 0x266cc0u: goto label_266cc0;
        case 0x266cc4u: goto label_266cc4;
        case 0x266cc8u: goto label_266cc8;
        case 0x266cccu: goto label_266ccc;
        case 0x266cd0u: goto label_266cd0;
        case 0x266cd4u: goto label_266cd4;
        case 0x266cd8u: goto label_266cd8;
        case 0x266cdcu: goto label_266cdc;
        case 0x266ce0u: goto label_266ce0;
        case 0x266ce4u: goto label_266ce4;
        case 0x266ce8u: goto label_266ce8;
        case 0x266cecu: goto label_266cec;
        case 0x266cf0u: goto label_266cf0;
        case 0x266cf4u: goto label_266cf4;
        case 0x266cf8u: goto label_266cf8;
        case 0x266cfcu: goto label_266cfc;
        case 0x266d00u: goto label_266d00;
        case 0x266d04u: goto label_266d04;
        case 0x266d08u: goto label_266d08;
        case 0x266d0cu: goto label_266d0c;
        case 0x266d10u: goto label_266d10;
        case 0x266d14u: goto label_266d14;
        case 0x266d18u: goto label_266d18;
        case 0x266d1cu: goto label_266d1c;
        case 0x266d20u: goto label_266d20;
        case 0x266d24u: goto label_266d24;
        case 0x266d28u: goto label_266d28;
        case 0x266d2cu: goto label_266d2c;
        case 0x266d30u: goto label_266d30;
        case 0x266d34u: goto label_266d34;
        case 0x266d38u: goto label_266d38;
        case 0x266d3cu: goto label_266d3c;
        case 0x266d40u: goto label_266d40;
        case 0x266d44u: goto label_266d44;
        case 0x266d48u: goto label_266d48;
        case 0x266d4cu: goto label_266d4c;
        case 0x266d50u: goto label_266d50;
        case 0x266d54u: goto label_266d54;
        case 0x266d58u: goto label_266d58;
        case 0x266d5cu: goto label_266d5c;
        case 0x266d60u: goto label_266d60;
        case 0x266d64u: goto label_266d64;
        case 0x266d68u: goto label_266d68;
        case 0x266d6cu: goto label_266d6c;
        case 0x266d70u: goto label_266d70;
        case 0x266d74u: goto label_266d74;
        case 0x266d78u: goto label_266d78;
        case 0x266d7cu: goto label_266d7c;
        case 0x266d80u: goto label_266d80;
        case 0x266d84u: goto label_266d84;
        case 0x266d88u: goto label_266d88;
        case 0x266d8cu: goto label_266d8c;
        case 0x266d90u: goto label_266d90;
        case 0x266d94u: goto label_266d94;
        case 0x266d98u: goto label_266d98;
        case 0x266d9cu: goto label_266d9c;
        case 0x266da0u: goto label_266da0;
        case 0x266da4u: goto label_266da4;
        case 0x266da8u: goto label_266da8;
        case 0x266dacu: goto label_266dac;
        case 0x266db0u: goto label_266db0;
        case 0x266db4u: goto label_266db4;
        case 0x266db8u: goto label_266db8;
        case 0x266dbcu: goto label_266dbc;
        case 0x266dc0u: goto label_266dc0;
        case 0x266dc4u: goto label_266dc4;
        case 0x266dc8u: goto label_266dc8;
        case 0x266dccu: goto label_266dcc;
        case 0x266dd0u: goto label_266dd0;
        case 0x266dd4u: goto label_266dd4;
        case 0x266dd8u: goto label_266dd8;
        case 0x266ddcu: goto label_266ddc;
        case 0x266de0u: goto label_266de0;
        case 0x266de4u: goto label_266de4;
        case 0x266de8u: goto label_266de8;
        case 0x266decu: goto label_266dec;
        default: break;
    }

    ctx->pc = 0x2668a0u;

label_2668a0:
    // 0x2668a0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2668a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2668a4:
    // 0x2668a4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2668a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2668a8:
    // 0x2668a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2668a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2668ac:
    // 0x2668ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2668acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2668b0:
    // 0x2668b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2668b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2668b4:
    // 0x2668b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2668b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2668b8:
    // 0x2668b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2668b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2668bc:
    // 0x2668bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2668bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2668c0:
    // 0x2668c0: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x2668c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
label_2668c4:
    // 0x2668c4: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x2668c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
label_2668c8:
    // 0x2668c8: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2668c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2668cc:
    // 0x2668cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2668ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2668d0:
    // 0x2668d0: 0xc08ec98  jal         func_23B260
label_2668d4:
    if (ctx->pc == 0x2668D4u) {
        ctx->pc = 0x2668D8u;
        goto label_2668d8;
    }
    ctx->pc = 0x2668D0u;
    SET_GPR_U32(ctx, 31, 0x2668D8u);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x2668D0u, 0x2668D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2668D8u;
label_2668d8:
    // 0x2668d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2668d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2668dc:
    // 0x2668dc: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x2668dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_2668e0:
    // 0x2668e0: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2668e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2668e4:
    // 0x2668e4: 0x27a500ac  addiu       $a1, $sp, 0xAC
    ctx->pc = 0x2668e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2668e8:
    // 0x2668e8: 0xc0422a8  jal         func_108AA0
label_2668ec:
    if (ctx->pc == 0x2668ECu) {
        ctx->pc = 0x2668F0u;
        goto label_2668f0;
    }
    ctx->pc = 0x2668E8u;
    SET_GPR_U32(ctx, 31, 0x2668F0u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x2668E8u, 0x2668F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2668F0u;
label_2668f0:
    // 0x2668f0: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x2668f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2668f4:
    // 0x2668f4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2668f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2668f8:
    // 0x2668f8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2668fc:
    if (ctx->pc == 0x2668FCu) {
        ctx->pc = 0x266900u;
        goto label_266900;
    }
    ctx->pc = 0x2668F8u;
    {
        const bool branch_taken_0x2668f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2668f8) {
            ctx->pc = 0x26691Cu;
            goto label_26691c;
        }
    }
    ctx->pc = 0x266900u;
label_266900:
    // 0x266900: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x266900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_266904:
    // 0x266904: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x266904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
label_266908:
    // 0x266908: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x266908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_26690c:
    // 0x26690c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x26690cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_266910:
    // 0x266910: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x266910u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_266914:
    // 0x266914: 0x320f809  jalr        $t9
label_266918:
    if (ctx->pc == 0x266918u) {
        ctx->pc = 0x26691Cu;
        goto label_26691c;
    }
    ctx->pc = 0x266914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26691Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266914u, 0x26691Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26691Cu;
label_26691c:
    // 0x26691c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x26691cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_266920:
    // 0x266920: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x266920u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_266924:
    // 0x266924: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x266924u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_266928:
    // 0x266928: 0x320f809  jalr        $t9
label_26692c:
    if (ctx->pc == 0x26692Cu) {
        ctx->pc = 0x266930u;
        goto label_266930;
    }
    ctx->pc = 0x266928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x266930u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266928u, 0x266930u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x266930u;
label_266930:
    // 0x266930: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x266930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_266934:
    // 0x266934: 0x14430072  bne         $v0, $v1, . + 4 + (0x72 << 2)
label_266938:
    if (ctx->pc == 0x266938u) {
        ctx->pc = 0x26693Cu;
        goto label_26693c;
    }
    ctx->pc = 0x266934u;
    {
        const bool branch_taken_0x266934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x266934) {
            ctx->pc = 0x266B00u;
            goto label_266b00;
        }
    }
    ctx->pc = 0x26693Cu;
label_26693c:
    // 0x26693c: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x26693cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_266940:
    // 0x266940: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x266940u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_266944:
    // 0x266944: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_266948:
    if (ctx->pc == 0x266948u) {
        ctx->pc = 0x26694Cu;
        goto label_26694c;
    }
    ctx->pc = 0x266944u;
    {
        const bool branch_taken_0x266944 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x266944) {
            ctx->pc = 0x266978u;
            goto label_266978;
        }
    }
    ctx->pc = 0x26694Cu;
label_26694c:
    // 0x26694c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x26694cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_266950:
    // 0x266950: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x266950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_266954:
    // 0x266954: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x266954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_266958:
    // 0x266958: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x266958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_26695c:
    // 0x26695c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26695cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266960:
    // 0x266960: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x266960u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_266964:
    // 0x266964: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x266964u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_266968:
    // 0x266968: 0x320f809  jalr        $t9
label_26696c:
    if (ctx->pc == 0x26696Cu) {
        ctx->pc = 0x266970u;
        goto label_266970;
    }
    ctx->pc = 0x266968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x266970u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266968u, 0x266970u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x266970u;
label_266970:
    // 0x266970: 0x1000000a  b           . + 4 + (0xA << 2)
label_266974:
    if (ctx->pc == 0x266974u) {
        ctx->pc = 0x266978u;
        goto label_266978;
    }
    ctx->pc = 0x266970u;
    {
        const bool branch_taken_0x266970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266970) {
            ctx->pc = 0x26699Cu;
            goto label_26699c;
        }
    }
    ctx->pc = 0x266978u;
label_266978:
    // 0x266978: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x266978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_26697c:
    // 0x26697c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x26697cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_266980:
    // 0x266980: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x266980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_266984:
    // 0x266984: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x266984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_266988:
    // 0x266988: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x266988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26698c:
    // 0x26698c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x26698cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_266990:
    // 0x266990: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x266990u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_266994:
    // 0x266994: 0x320f809  jalr        $t9
label_266998:
    if (ctx->pc == 0x266998u) {
        ctx->pc = 0x26699Cu;
        goto label_26699c;
    }
    ctx->pc = 0x266994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26699Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266994u, 0x26699Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26699Cu;
label_26699c:
    // 0x26699c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x26699cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2669a0:
    // 0x2669a0: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x2669a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_2669a4:
    // 0x2669a4: 0xc048bb4  jal         func_122ED0
label_2669a8:
    if (ctx->pc == 0x2669A8u) {
        ctx->pc = 0x2669ACu;
        goto label_2669ac;
    }
    ctx->pc = 0x2669A4u;
    SET_GPR_U32(ctx, 31, 0x2669ACu);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x2669A4u, 0x2669ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2669ACu;
label_2669ac:
    // 0x2669ac: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x2669acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_2669b0:
    // 0x2669b0: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2669b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2669b4:
    // 0x2669b4: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x2669b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_2669b8:
    // 0x2669b8: 0xc0422a8  jal         func_108AA0
label_2669bc:
    if (ctx->pc == 0x2669BCu) {
        ctx->pc = 0x2669C0u;
        goto label_2669c0;
    }
    ctx->pc = 0x2669B8u;
    SET_GPR_U32(ctx, 31, 0x2669C0u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x2669B8u, 0x2669C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2669C0u;
label_2669c0:
    // 0x2669c0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2669c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2669c4:
    // 0x2669c4: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x2669c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_2669c8:
    // 0x2669c8: 0xc041a60  jal         func_106980
label_2669cc:
    if (ctx->pc == 0x2669CCu) {
        ctx->pc = 0x2669D0u;
        goto label_2669d0;
    }
    ctx->pc = 0x2669C8u;
    SET_GPR_U32(ctx, 31, 0x2669D0u);
    ctx->pc = 0x106980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106980u, 0x2669C8u, 0x2669D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2669D0u;
label_2669d0:
    // 0x2669d0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2669d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2669d4:
    // 0x2669d4: 0x10000008  b           . + 4 + (0x8 << 2)
label_2669d8:
    if (ctx->pc == 0x2669D8u) {
        ctx->pc = 0x2669DCu;
        goto label_2669dc;
    }
    ctx->pc = 0x2669D4u;
    {
        const bool branch_taken_0x2669d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2669d4) {
            ctx->pc = 0x2669F8u;
            goto label_2669f8;
        }
    }
    ctx->pc = 0x2669DCu;
label_2669dc:
    // 0x2669dc: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2669dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2669e0:
    // 0x2669e0: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x2669e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2669e4:
    // 0x2669e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2669e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2669e8:
    // 0x2669e8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2669e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2669ec:
    // 0x2669ec: 0x320f809  jalr        $t9
label_2669f0:
    if (ctx->pc == 0x2669F0u) {
        ctx->pc = 0x2669F4u;
        goto label_2669f4;
    }
    ctx->pc = 0x2669ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2669F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2669ECu, 0x2669F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2669F4u;
label_2669f4:
    // 0x2669f4: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x2669f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_2669f8:
    // 0x2669f8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2669f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2669fc:
    // 0x2669fc: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x2669fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_266a00:
    // 0x266a00: 0xc041a14  jal         func_106850
label_266a04:
    if (ctx->pc == 0x266A04u) {
        ctx->pc = 0x266A08u;
        goto label_266a08;
    }
    ctx->pc = 0x266A00u;
    SET_GPR_U32(ctx, 31, 0x266A08u);
    ctx->pc = 0x106850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106850u, 0x266A00u, 0x266A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266A08u;
label_266a08:
    // 0x266a08: 0x16a2fff4  bne         $s5, $v0, . + 4 + (-0xC << 2)
label_266a0c:
    if (ctx->pc == 0x266A0Cu) {
        ctx->pc = 0x266A10u;
        goto label_266a10;
    }
    ctx->pc = 0x266A08u;
    {
        const bool branch_taken_0x266a08 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x266a08) {
            ctx->pc = 0x2669DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2669dc;
        }
    }
    ctx->pc = 0x266A10u;
label_266a10:
    // 0x266a10: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x266a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_266a14:
    // 0x266a14: 0x24440048  addiu       $a0, $v0, 0x48
    ctx->pc = 0x266a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_266a18:
    // 0x266a18: 0xc048bb4  jal         func_122ED0
label_266a1c:
    if (ctx->pc == 0x266A1Cu) {
        ctx->pc = 0x266A20u;
        goto label_266a20;
    }
    ctx->pc = 0x266A18u;
    SET_GPR_U32(ctx, 31, 0x266A20u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x266A18u, 0x266A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266A20u;
label_266a20:
    // 0x266a20: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x266a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_266a24:
    // 0x266a24: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x266a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_266a28:
    // 0x266a28: 0x27a500a4  addiu       $a1, $sp, 0xA4
    ctx->pc = 0x266a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_266a2c:
    // 0x266a2c: 0xc0422a8  jal         func_108AA0
label_266a30:
    if (ctx->pc == 0x266A30u) {
        ctx->pc = 0x266A34u;
        goto label_266a34;
    }
    ctx->pc = 0x266A2Cu;
    SET_GPR_U32(ctx, 31, 0x266A34u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x266A2Cu, 0x266A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266A34u;
label_266a34:
    // 0x266a34: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x266a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_266a38:
    // 0x266a38: 0x24440048  addiu       $a0, $v0, 0x48
    ctx->pc = 0x266a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_266a3c:
    // 0x266a3c: 0xc041a60  jal         func_106980
label_266a40:
    if (ctx->pc == 0x266A40u) {
        ctx->pc = 0x266A44u;
        goto label_266a44;
    }
    ctx->pc = 0x266A3Cu;
    SET_GPR_U32(ctx, 31, 0x266A44u);
    ctx->pc = 0x106980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106980u, 0x266A3Cu, 0x266A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266A44u;
label_266a44:
    // 0x266a44: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x266a44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266a48:
    // 0x266a48: 0x10000008  b           . + 4 + (0x8 << 2)
label_266a4c:
    if (ctx->pc == 0x266A4Cu) {
        ctx->pc = 0x266A50u;
        goto label_266a50;
    }
    ctx->pc = 0x266A48u;
    {
        const bool branch_taken_0x266a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266a48) {
            ctx->pc = 0x266A6Cu;
            goto label_266a6c;
        }
    }
    ctx->pc = 0x266A50u;
label_266a50:
    // 0x266a50: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x266a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_266a54:
    // 0x266a54: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x266a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_266a58:
    // 0x266a58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x266a58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_266a5c:
    // 0x266a5c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x266a5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_266a60:
    // 0x266a60: 0x320f809  jalr        $t9
label_266a64:
    if (ctx->pc == 0x266A64u) {
        ctx->pc = 0x266A68u;
        goto label_266a68;
    }
    ctx->pc = 0x266A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x266A68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266A60u, 0x266A68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x266A68u;
label_266a68:
    // 0x266a68: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x266a68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_266a6c:
    // 0x266a6c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x266a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_266a70:
    // 0x266a70: 0x24440048  addiu       $a0, $v0, 0x48
    ctx->pc = 0x266a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_266a74:
    // 0x266a74: 0xc041a14  jal         func_106850
label_266a78:
    if (ctx->pc == 0x266A78u) {
        ctx->pc = 0x266A7Cu;
        goto label_266a7c;
    }
    ctx->pc = 0x266A74u;
    SET_GPR_U32(ctx, 31, 0x266A7Cu);
    ctx->pc = 0x106850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106850u, 0x266A74u, 0x266A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266A7Cu;
label_266a7c:
    // 0x266a7c: 0x1682fff4  bne         $s4, $v0, . + 4 + (-0xC << 2)
label_266a80:
    if (ctx->pc == 0x266A80u) {
        ctx->pc = 0x266A84u;
        goto label_266a84;
    }
    ctx->pc = 0x266A7Cu;
    {
        const bool branch_taken_0x266a7c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x266a7c) {
            ctx->pc = 0x266A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266a50;
        }
    }
    ctx->pc = 0x266A84u;
label_266a84:
    // 0x266a84: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x266a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_266a88:
    // 0x266a88: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x266a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_266a8c:
    // 0x266a8c: 0xc099d1c  jal         func_267470
label_266a90:
    if (ctx->pc == 0x266A90u) {
        ctx->pc = 0x266A94u;
        goto label_266a94;
    }
    ctx->pc = 0x266A8Cu;
    SET_GPR_U32(ctx, 31, 0x266A94u);
    ctx->pc = 0x267470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267470u, 0x266A8Cu, 0x266A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266A94u;
label_266a94:
    // 0x266a94: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x266a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_266a98:
    // 0x266a98: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x266a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_266a9c:
    // 0x266a9c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x266a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_266aa0:
    // 0x266aa0: 0xc0422a8  jal         func_108AA0
label_266aa4:
    if (ctx->pc == 0x266AA4u) {
        ctx->pc = 0x266AA8u;
        goto label_266aa8;
    }
    ctx->pc = 0x266AA0u;
    SET_GPR_U32(ctx, 31, 0x266AA8u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x266AA0u, 0x266AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266AA8u;
label_266aa8:
    // 0x266aa8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x266aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_266aac:
    // 0x266aac: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x266aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_266ab0:
    // 0x266ab0: 0xc0998dc  jal         func_266370
label_266ab4:
    if (ctx->pc == 0x266AB4u) {
        ctx->pc = 0x266AB8u;
        goto label_266ab8;
    }
    ctx->pc = 0x266AB0u;
    SET_GPR_U32(ctx, 31, 0x266AB8u);
    ctx->pc = 0x266370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266370u, 0x266AB0u, 0x266AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266AB8u;
label_266ab8:
    // 0x266ab8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x266ab8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266abc:
    // 0x266abc: 0x10000008  b           . + 4 + (0x8 << 2)
label_266ac0:
    if (ctx->pc == 0x266AC0u) {
        ctx->pc = 0x266AC4u;
        goto label_266ac4;
    }
    ctx->pc = 0x266ABCu;
    {
        const bool branch_taken_0x266abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266abc) {
            ctx->pc = 0x266AE0u;
            goto label_266ae0;
        }
    }
    ctx->pc = 0x266AC4u;
label_266ac4:
    // 0x266ac4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x266ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_266ac8:
    // 0x266ac8: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x266ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_266acc:
    // 0x266acc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x266accu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_266ad0:
    // 0x266ad0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x266ad0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_266ad4:
    // 0x266ad4: 0x320f809  jalr        $t9
label_266ad8:
    if (ctx->pc == 0x266AD8u) {
        ctx->pc = 0x266ADCu;
        goto label_266adc;
    }
    ctx->pc = 0x266AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x266ADCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266AD4u, 0x266ADCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x266ADCu;
label_266adc:
    // 0x266adc: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x266adcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_266ae0:
    // 0x266ae0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x266ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_266ae4:
    // 0x266ae4: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x266ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_266ae8:
    // 0x266ae8: 0xc0998c4  jal         func_266310
label_266aec:
    if (ctx->pc == 0x266AECu) {
        ctx->pc = 0x266AF0u;
        goto label_266af0;
    }
    ctx->pc = 0x266AE8u;
    SET_GPR_U32(ctx, 31, 0x266AF0u);
    ctx->pc = 0x266310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266310u, 0x266AE8u, 0x266AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266AF0u;
label_266af0:
    // 0x266af0: 0x1662fff4  bne         $s3, $v0, . + 4 + (-0xC << 2)
label_266af4:
    if (ctx->pc == 0x266AF4u) {
        ctx->pc = 0x266AF8u;
        goto label_266af8;
    }
    ctx->pc = 0x266AF0u;
    {
        const bool branch_taken_0x266af0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x266af0) {
            ctx->pc = 0x266AC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266ac4;
        }
    }
    ctx->pc = 0x266AF8u;
label_266af8:
    // 0x266af8: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_266afc:
    if (ctx->pc == 0x266AFCu) {
        ctx->pc = 0x266B00u;
        goto label_266b00;
    }
    ctx->pc = 0x266AF8u;
    {
        const bool branch_taken_0x266af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266af8) {
            ctx->pc = 0x266D80u;
            goto label_266d80;
        }
    }
    ctx->pc = 0x266B00u;
label_266b00:
    // 0x266b00: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x266b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_266b04:
    // 0x266b04: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x266b04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_266b08:
    // 0x266b08: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_266b0c:
    if (ctx->pc == 0x266B0Cu) {
        ctx->pc = 0x266B10u;
        goto label_266b10;
    }
    ctx->pc = 0x266B08u;
    {
        const bool branch_taken_0x266b08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x266b08) {
            ctx->pc = 0x266B3Cu;
            goto label_266b3c;
        }
    }
    ctx->pc = 0x266B10u;
label_266b10:
    // 0x266b10: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x266b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_266b14:
    // 0x266b14: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x266b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_266b18:
    // 0x266b18: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x266b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_266b1c:
    // 0x266b1c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x266b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_266b20:
    // 0x266b20: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x266b20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266b24:
    // 0x266b24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x266b24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_266b28:
    // 0x266b28: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x266b28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_266b2c:
    // 0x266b2c: 0x320f809  jalr        $t9
label_266b30:
    if (ctx->pc == 0x266B30u) {
        ctx->pc = 0x266B34u;
        goto label_266b34;
    }
    ctx->pc = 0x266B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x266B34u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266B2Cu, 0x266B34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x266B34u;
label_266b34:
    // 0x266b34: 0x1000000a  b           . + 4 + (0xA << 2)
label_266b38:
    if (ctx->pc == 0x266B38u) {
        ctx->pc = 0x266B3Cu;
        goto label_266b3c;
    }
    ctx->pc = 0x266B34u;
    {
        const bool branch_taken_0x266b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266b34) {
            ctx->pc = 0x266B60u;
            goto label_266b60;
        }
    }
    ctx->pc = 0x266B3Cu;
label_266b3c:
    // 0x266b3c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x266b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_266b40:
    // 0x266b40: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x266b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_266b44:
    // 0x266b44: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x266b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_266b48:
    // 0x266b48: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x266b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_266b4c:
    // 0x266b4c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x266b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266b50:
    // 0x266b50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x266b50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_266b54:
    // 0x266b54: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x266b54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_266b58:
    // 0x266b58: 0x320f809  jalr        $t9
label_266b5c:
    if (ctx->pc == 0x266B5Cu) {
        ctx->pc = 0x266B60u;
        goto label_266b60;
    }
    ctx->pc = 0x266B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x266B60u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266B58u, 0x266B60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x266B60u;
label_266b60:
    // 0x266b60: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x266b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_266b64:
    // 0x266b64: 0xa0400023  sb          $zero, 0x23($v0)
    ctx->pc = 0x266b64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 35), (uint8_t)GPR_U32(ctx, 0));
label_266b68:
    // 0x266b68: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x266b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_266b6c:
    // 0x266b6c: 0xc041b48  jal         func_106D20
label_266b70:
    if (ctx->pc == 0x266B70u) {
        ctx->pc = 0x266B74u;
        goto label_266b74;
    }
    ctx->pc = 0x266B6Cu;
    SET_GPR_U32(ctx, 31, 0x266B74u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x266B6Cu, 0x266B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266B74u;
label_266b74:
    // 0x266b74: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x266b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_266b78:
    // 0x266b78: 0x27a5009c  addiu       $a1, $sp, 0x9C
    ctx->pc = 0x266b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_266b7c:
    // 0x266b7c: 0xc0422a8  jal         func_108AA0
label_266b80:
    if (ctx->pc == 0x266B80u) {
        ctx->pc = 0x266B84u;
        goto label_266b84;
    }
    ctx->pc = 0x266B7Cu;
    SET_GPR_U32(ctx, 31, 0x266B84u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x266B7Cu, 0x266B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266B84u;
label_266b84:
    // 0x266b84: 0x10000022  b           . + 4 + (0x22 << 2)
label_266b88:
    if (ctx->pc == 0x266B88u) {
        ctx->pc = 0x266B8Cu;
        goto label_266b8c;
    }
    ctx->pc = 0x266B84u;
    {
        const bool branch_taken_0x266b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266b84) {
            ctx->pc = 0x266C10u;
            goto label_266c10;
        }
    }
    ctx->pc = 0x266B8Cu;
label_266b8c:
    // 0x266b8c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x266b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_266b90:
    // 0x266b90: 0xc119b68  jal         func_466DA0
label_266b94:
    if (ctx->pc == 0x266B94u) {
        ctx->pc = 0x266B98u;
        goto label_266b98;
    }
    ctx->pc = 0x266B90u;
    SET_GPR_U32(ctx, 31, 0x266B98u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x266B90u, 0x266B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266B98u;
label_266b98:
    // 0x266b98: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x266b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_266b9c:
    // 0x266b9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x266b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266ba0:
    // 0x266ba0: 0xc0400e0  jal         func_100380
label_266ba4:
    if (ctx->pc == 0x266BA4u) {
        ctx->pc = 0x266BA8u;
        goto label_266ba8;
    }
    ctx->pc = 0x266BA0u;
    SET_GPR_U32(ctx, 31, 0x266BA8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x266BA0u, 0x266BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266BA8u;
label_266ba8:
    // 0x266ba8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x266ba8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266bac:
    // 0x266bac: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_266bb0:
    if (ctx->pc == 0x266BB0u) {
        ctx->pc = 0x266BB4u;
        goto label_266bb4;
    }
    ctx->pc = 0x266BACu;
    {
        const bool branch_taken_0x266bac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x266bac) {
            ctx->pc = 0x266BC4u;
            goto label_266bc4;
        }
    }
    ctx->pc = 0x266BB4u;
label_266bb4:
    // 0x266bb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x266bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_266bb8:
    // 0x266bb8: 0xc09d084  jal         func_274210
label_266bbc:
    if (ctx->pc == 0x266BBCu) {
        ctx->pc = 0x266BC0u;
        goto label_266bc0;
    }
    ctx->pc = 0x266BB8u;
    SET_GPR_U32(ctx, 31, 0x266BC0u);
    ctx->pc = 0x274210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274210u, 0x266BB8u, 0x266BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266BC0u;
label_266bc0:
    // 0x266bc0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x266bc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266bc4:
    // 0x266bc4: 0xafb20098  sw          $s2, 0x98($sp)
    ctx->pc = 0x266bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 18));
label_266bc8:
    // 0x266bc8: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x266bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_266bcc:
    // 0x266bcc: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x266bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_266bd0:
    // 0x266bd0: 0xc045a48  jal         func_116920
label_266bd4:
    if (ctx->pc == 0x266BD4u) {
        ctx->pc = 0x266BD8u;
        goto label_266bd8;
    }
    ctx->pc = 0x266BD0u;
    SET_GPR_U32(ctx, 31, 0x266BD8u);
    ctx->pc = 0x116920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116920u, 0x266BD0u, 0x266BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266BD8u;
label_266bd8:
    // 0x266bd8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x266bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_266bdc:
    // 0x266bdc: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x266bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_266be0:
    // 0x266be0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x266be0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_266be4:
    // 0x266be4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x266be4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_266be8:
    // 0x266be8: 0x320f809  jalr        $t9
label_266bec:
    if (ctx->pc == 0x266BECu) {
        ctx->pc = 0x266BF0u;
        goto label_266bf0;
    }
    ctx->pc = 0x266BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x266BF0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266BE8u, 0x266BF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x266BF0u;
label_266bf0:
    // 0x266bf0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x266bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_266bf4:
    // 0x266bf4: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x266bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_266bf8:
    // 0x266bf8: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x266bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_266bfc:
    // 0x266bfc: 0xc099c4c  jal         func_267130
label_266c00:
    if (ctx->pc == 0x266C00u) {
        ctx->pc = 0x266C04u;
        goto label_266c04;
    }
    ctx->pc = 0x266BFCu;
    SET_GPR_U32(ctx, 31, 0x266C04u);
    ctx->pc = 0x267130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267130u, 0x266BFCu, 0x266C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266C04u;
label_266c04:
    // 0x266c04: 0x8fa2009c  lw          $v0, 0x9C($sp)
    ctx->pc = 0x266c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_266c08:
    // 0x266c08: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x266c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_266c0c:
    // 0x266c0c: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x266c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_266c10:
    // 0x266c10: 0x8fa2009c  lw          $v0, 0x9C($sp)
    ctx->pc = 0x266c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_266c14:
    // 0x266c14: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_266c18:
    if (ctx->pc == 0x266C18u) {
        ctx->pc = 0x266C1Cu;
        goto label_266c1c;
    }
    ctx->pc = 0x266C14u;
    {
        const bool branch_taken_0x266c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266c14) {
            ctx->pc = 0x266B8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266b8c;
        }
    }
    ctx->pc = 0x266C1Cu;
label_266c1c:
    // 0x266c1c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x266c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_266c20:
    // 0x266c20: 0x27a50094  addiu       $a1, $sp, 0x94
    ctx->pc = 0x266c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_266c24:
    // 0x266c24: 0xc0422a8  jal         func_108AA0
label_266c28:
    if (ctx->pc == 0x266C28u) {
        ctx->pc = 0x266C2Cu;
        goto label_266c2c;
    }
    ctx->pc = 0x266C24u;
    SET_GPR_U32(ctx, 31, 0x266C2Cu);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x266C24u, 0x266C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266C2Cu;
label_266c2c:
    // 0x266c2c: 0x10000022  b           . + 4 + (0x22 << 2)
label_266c30:
    if (ctx->pc == 0x266C30u) {
        ctx->pc = 0x266C34u;
        goto label_266c34;
    }
    ctx->pc = 0x266C2Cu;
    {
        const bool branch_taken_0x266c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266c2c) {
            ctx->pc = 0x266CB8u;
            goto label_266cb8;
        }
    }
    ctx->pc = 0x266C34u;
label_266c34:
    // 0x266c34: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x266c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_266c38:
    // 0x266c38: 0xc119b68  jal         func_466DA0
label_266c3c:
    if (ctx->pc == 0x266C3Cu) {
        ctx->pc = 0x266C40u;
        goto label_266c40;
    }
    ctx->pc = 0x266C38u;
    SET_GPR_U32(ctx, 31, 0x266C40u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x266C38u, 0x266C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266C40u;
label_266c40:
    // 0x266c40: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x266c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_266c44:
    // 0x266c44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x266c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266c48:
    // 0x266c48: 0xc0400e0  jal         func_100380
label_266c4c:
    if (ctx->pc == 0x266C4Cu) {
        ctx->pc = 0x266C50u;
        goto label_266c50;
    }
    ctx->pc = 0x266C48u;
    SET_GPR_U32(ctx, 31, 0x266C50u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x266C48u, 0x266C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266C50u;
label_266c50:
    // 0x266c50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x266c50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266c54:
    // 0x266c54: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_266c58:
    if (ctx->pc == 0x266C58u) {
        ctx->pc = 0x266C5Cu;
        goto label_266c5c;
    }
    ctx->pc = 0x266C54u;
    {
        const bool branch_taken_0x266c54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x266c54) {
            ctx->pc = 0x266C6Cu;
            goto label_266c6c;
        }
    }
    ctx->pc = 0x266C5Cu;
label_266c5c:
    // 0x266c5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_266c60:
    // 0x266c60: 0xc09d084  jal         func_274210
label_266c64:
    if (ctx->pc == 0x266C64u) {
        ctx->pc = 0x266C68u;
        goto label_266c68;
    }
    ctx->pc = 0x266C60u;
    SET_GPR_U32(ctx, 31, 0x266C68u);
    ctx->pc = 0x274210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274210u, 0x266C60u, 0x266C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266C68u;
label_266c68:
    // 0x266c68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x266c68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266c6c:
    // 0x266c6c: 0xafb10090  sw          $s1, 0x90($sp)
    ctx->pc = 0x266c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 17));
label_266c70:
    // 0x266c70: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x266c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_266c74:
    // 0x266c74: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x266c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_266c78:
    // 0x266c78: 0xc045a48  jal         func_116920
label_266c7c:
    if (ctx->pc == 0x266C7Cu) {
        ctx->pc = 0x266C80u;
        goto label_266c80;
    }
    ctx->pc = 0x266C78u;
    SET_GPR_U32(ctx, 31, 0x266C80u);
    ctx->pc = 0x116920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116920u, 0x266C78u, 0x266C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266C80u;
label_266c80:
    // 0x266c80: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x266c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_266c84:
    // 0x266c84: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x266c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_266c88:
    // 0x266c88: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x266c88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_266c8c:
    // 0x266c8c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x266c8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_266c90:
    // 0x266c90: 0x320f809  jalr        $t9
label_266c94:
    if (ctx->pc == 0x266C94u) {
        ctx->pc = 0x266C98u;
        goto label_266c98;
    }
    ctx->pc = 0x266C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x266C98u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266C90u, 0x266C98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x266C98u;
label_266c98:
    // 0x266c98: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x266c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_266c9c:
    // 0x266c9c: 0x24440048  addiu       $a0, $v0, 0x48
    ctx->pc = 0x266c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_266ca0:
    // 0x266ca0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x266ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_266ca4:
    // 0x266ca4: 0xc099c4c  jal         func_267130
label_266ca8:
    if (ctx->pc == 0x266CA8u) {
        ctx->pc = 0x266CACu;
        goto label_266cac;
    }
    ctx->pc = 0x266CA4u;
    SET_GPR_U32(ctx, 31, 0x266CACu);
    ctx->pc = 0x267130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267130u, 0x266CA4u, 0x266CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266CACu;
label_266cac:
    // 0x266cac: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x266cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_266cb0:
    // 0x266cb0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x266cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_266cb4:
    // 0x266cb4: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x266cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_266cb8:
    // 0x266cb8: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x266cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_266cbc:
    // 0x266cbc: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_266cc0:
    if (ctx->pc == 0x266CC0u) {
        ctx->pc = 0x266CC4u;
        goto label_266cc4;
    }
    ctx->pc = 0x266CBCu;
    {
        const bool branch_taken_0x266cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266cbc) {
            ctx->pc = 0x266C34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266c34;
        }
    }
    ctx->pc = 0x266CC4u;
label_266cc4:
    // 0x266cc4: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x266cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_266cc8:
    // 0x266cc8: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x266cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_266ccc:
    // 0x266ccc: 0xc0422a8  jal         func_108AA0
label_266cd0:
    if (ctx->pc == 0x266CD0u) {
        ctx->pc = 0x266CD4u;
        goto label_266cd4;
    }
    ctx->pc = 0x266CCCu;
    SET_GPR_U32(ctx, 31, 0x266CD4u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x266CCCu, 0x266CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266CD4u;
label_266cd4:
    // 0x266cd4: 0x10000023  b           . + 4 + (0x23 << 2)
label_266cd8:
    if (ctx->pc == 0x266CD8u) {
        ctx->pc = 0x266CDCu;
        goto label_266cdc;
    }
    ctx->pc = 0x266CD4u;
    {
        const bool branch_taken_0x266cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266cd4) {
            ctx->pc = 0x266D64u;
            goto label_266d64;
        }
    }
    ctx->pc = 0x266CDCu;
label_266cdc:
    // 0x266cdc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x266cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_266ce0:
    // 0x266ce0: 0xc119b68  jal         func_466DA0
label_266ce4:
    if (ctx->pc == 0x266CE4u) {
        ctx->pc = 0x266CE8u;
        goto label_266ce8;
    }
    ctx->pc = 0x266CE0u;
    SET_GPR_U32(ctx, 31, 0x266CE8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x266CE0u, 0x266CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266CE8u;
label_266ce8:
    // 0x266ce8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x266ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_266cec:
    // 0x266cec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x266cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266cf0:
    // 0x266cf0: 0xc0400e0  jal         func_100380
label_266cf4:
    if (ctx->pc == 0x266CF4u) {
        ctx->pc = 0x266CF8u;
        goto label_266cf8;
    }
    ctx->pc = 0x266CF0u;
    SET_GPR_U32(ctx, 31, 0x266CF8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x266CF0u, 0x266CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266CF8u;
label_266cf8:
    // 0x266cf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x266cf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266cfc:
    // 0x266cfc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_266d00:
    if (ctx->pc == 0x266D00u) {
        ctx->pc = 0x266D04u;
        goto label_266d04;
    }
    ctx->pc = 0x266CFCu;
    {
        const bool branch_taken_0x266cfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x266cfc) {
            ctx->pc = 0x266D18u;
            goto label_266d18;
        }
    }
    ctx->pc = 0x266D04u;
label_266d04:
    // 0x266d04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x266d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_266d08:
    // 0x266d08: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x266d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_266d0c:
    // 0x266d0c: 0xc09c6cc  jal         func_271B30
label_266d10:
    if (ctx->pc == 0x266D10u) {
        ctx->pc = 0x266D14u;
        goto label_266d14;
    }
    ctx->pc = 0x266D0Cu;
    SET_GPR_U32(ctx, 31, 0x266D14u);
    ctx->pc = 0x271B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271B30u, 0x266D0Cu, 0x266D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266D14u;
label_266d14:
    // 0x266d14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x266d14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266d18:
    // 0x266d18: 0xafb00088  sw          $s0, 0x88($sp)
    ctx->pc = 0x266d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 16));
label_266d1c:
    // 0x266d1c: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x266d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_266d20:
    // 0x266d20: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x266d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_266d24:
    // 0x266d24: 0xc045a48  jal         func_116920
label_266d28:
    if (ctx->pc == 0x266D28u) {
        ctx->pc = 0x266D2Cu;
        goto label_266d2c;
    }
    ctx->pc = 0x266D24u;
    SET_GPR_U32(ctx, 31, 0x266D2Cu);
    ctx->pc = 0x116920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116920u, 0x266D24u, 0x266D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266D2Cu;
label_266d2c:
    // 0x266d2c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x266d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_266d30:
    // 0x266d30: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x266d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_266d34:
    // 0x266d34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x266d34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_266d38:
    // 0x266d38: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x266d38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_266d3c:
    // 0x266d3c: 0x320f809  jalr        $t9
label_266d40:
    if (ctx->pc == 0x266D40u) {
        ctx->pc = 0x266D44u;
        goto label_266d44;
    }
    ctx->pc = 0x266D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x266D44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266D3Cu, 0x266D44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x266D44u;
label_266d44:
    // 0x266d44: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x266d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_266d48:
    // 0x266d48: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x266d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_266d4c:
    // 0x266d4c: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x266d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_266d50:
    // 0x266d50: 0xc099b7c  jal         func_266DF0
label_266d54:
    if (ctx->pc == 0x266D54u) {
        ctx->pc = 0x266D58u;
        goto label_266d58;
    }
    ctx->pc = 0x266D50u;
    SET_GPR_U32(ctx, 31, 0x266D58u);
    ctx->pc = 0x266DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266DF0u, 0x266D50u, 0x266D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266D58u;
label_266d58:
    // 0x266d58: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x266d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_266d5c:
    // 0x266d5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x266d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_266d60:
    // 0x266d60: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x266d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_266d64:
    // 0x266d64: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x266d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_266d68:
    // 0x266d68: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_266d6c:
    if (ctx->pc == 0x266D6Cu) {
        ctx->pc = 0x266D70u;
        goto label_266d70;
    }
    ctx->pc = 0x266D68u;
    {
        const bool branch_taken_0x266d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266d68) {
            ctx->pc = 0x266CDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266cdc;
        }
    }
    ctx->pc = 0x266D70u;
label_266d70:
    // 0x266d70: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x266d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_266d74:
    // 0x266d74: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x266d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_266d78:
    // 0x266d78: 0xc0402d4  jal         func_100B50
label_266d7c:
    if (ctx->pc == 0x266D7Cu) {
        ctx->pc = 0x266D80u;
        goto label_266d80;
    }
    ctx->pc = 0x266D78u;
    SET_GPR_U32(ctx, 31, 0x266D80u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x266D78u, 0x266D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266D80u;
label_266d80:
    // 0x266d80: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x266d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_266d84:
    // 0x266d84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x266d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266d88:
    // 0x266d88: 0xc08ec98  jal         func_23B260
label_266d8c:
    if (ctx->pc == 0x266D8Cu) {
        ctx->pc = 0x266D90u;
        goto label_266d90;
    }
    ctx->pc = 0x266D88u;
    SET_GPR_U32(ctx, 31, 0x266D90u);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x266D88u, 0x266D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266D90u;
label_266d90:
    // 0x266d90: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x266d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_266d94:
    // 0x266d94: 0xc048094  jal         func_120250
label_266d98:
    if (ctx->pc == 0x266D98u) {
        ctx->pc = 0x266D9Cu;
        goto label_266d9c;
    }
    ctx->pc = 0x266D94u;
    SET_GPR_U32(ctx, 31, 0x266D9Cu);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x266D94u, 0x266D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266D9Cu;
label_266d9c:
    // 0x266d9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x266d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266da0:
    // 0x266da0: 0x2405047a  addiu       $a1, $zero, 0x47A
    ctx->pc = 0x266da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1146));
label_266da4:
    // 0x266da4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x266da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_266da8:
    // 0x266da8: 0xc04146c  jal         func_1051B0
label_266dac:
    if (ctx->pc == 0x266DACu) {
        ctx->pc = 0x266DB0u;
        goto label_266db0;
    }
    ctx->pc = 0x266DA8u;
    SET_GPR_U32(ctx, 31, 0x266DB0u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x266DA8u, 0x266DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266DB0u;
label_266db0:
    // 0x266db0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x266db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_266db4:
    // 0x266db4: 0xa0620038  sb          $v0, 0x38($v1)
    ctx->pc = 0x266db4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 2));
label_266db8:
    // 0x266db8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x266db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266dbc:
    // 0x266dbc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x266dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_266dc0:
    // 0x266dc0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x266dc0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_266dc4:
    // 0x266dc4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x266dc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_266dc8:
    // 0x266dc8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x266dc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_266dcc:
    // 0x266dcc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x266dccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_266dd0:
    // 0x266dd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x266dd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_266dd4:
    // 0x266dd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x266dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_266dd8:
    // 0x266dd8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x266dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_266ddc:
    // 0x266ddc: 0x3e00008  jr          $ra
label_266de0:
    if (ctx->pc == 0x266DE0u) {
        ctx->pc = 0x266DE4u;
        goto label_266de4;
    }
    ctx->pc = 0x266DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266DE4u;
label_266de4:
    // 0x266de4: 0x0  nop
    ctx->pc = 0x266de4u;
    // NOP
label_266de8:
    // 0x266de8: 0x0  nop
    ctx->pc = 0x266de8u;
    // NOP
label_266dec:
    // 0x266dec: 0x0  nop
    ctx->pc = 0x266decu;
    // NOP
    ctx->pc = 0x266df0u;
}
