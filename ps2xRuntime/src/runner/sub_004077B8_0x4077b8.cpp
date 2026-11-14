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

// Function: sub_004077B8
// Address: 0x4077b8 - 0x407db8
void sub_004077B8_0x4077b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004077B8_0x4077b8");
#endif

    switch (ctx->pc) {
        case 0x4077b8u: goto label_4077b8;
        case 0x4077bcu: goto label_4077bc;
        case 0x4077c0u: goto label_4077c0;
        case 0x4077c4u: goto label_4077c4;
        case 0x4077c8u: goto label_4077c8;
        case 0x4077ccu: goto label_4077cc;
        case 0x4077d0u: goto label_4077d0;
        case 0x4077d4u: goto label_4077d4;
        case 0x4077d8u: goto label_4077d8;
        case 0x4077dcu: goto label_4077dc;
        case 0x4077e0u: goto label_4077e0;
        case 0x4077e4u: goto label_4077e4;
        case 0x4077e8u: goto label_4077e8;
        case 0x4077ecu: goto label_4077ec;
        case 0x4077f0u: goto label_4077f0;
        case 0x4077f4u: goto label_4077f4;
        case 0x4077f8u: goto label_4077f8;
        case 0x4077fcu: goto label_4077fc;
        case 0x407800u: goto label_407800;
        case 0x407804u: goto label_407804;
        case 0x407808u: goto label_407808;
        case 0x40780cu: goto label_40780c;
        case 0x407810u: goto label_407810;
        case 0x407814u: goto label_407814;
        case 0x407818u: goto label_407818;
        case 0x40781cu: goto label_40781c;
        case 0x407820u: goto label_407820;
        case 0x407824u: goto label_407824;
        case 0x407828u: goto label_407828;
        case 0x40782cu: goto label_40782c;
        case 0x407830u: goto label_407830;
        case 0x407834u: goto label_407834;
        case 0x407838u: goto label_407838;
        case 0x40783cu: goto label_40783c;
        case 0x407840u: goto label_407840;
        case 0x407844u: goto label_407844;
        case 0x407848u: goto label_407848;
        case 0x40784cu: goto label_40784c;
        case 0x407850u: goto label_407850;
        case 0x407854u: goto label_407854;
        case 0x407858u: goto label_407858;
        case 0x40785cu: goto label_40785c;
        case 0x407860u: goto label_407860;
        case 0x407864u: goto label_407864;
        case 0x407868u: goto label_407868;
        case 0x40786cu: goto label_40786c;
        case 0x407870u: goto label_407870;
        case 0x407874u: goto label_407874;
        case 0x407878u: goto label_407878;
        case 0x40787cu: goto label_40787c;
        case 0x407880u: goto label_407880;
        case 0x407884u: goto label_407884;
        case 0x407888u: goto label_407888;
        case 0x40788cu: goto label_40788c;
        case 0x407890u: goto label_407890;
        case 0x407894u: goto label_407894;
        case 0x407898u: goto label_407898;
        case 0x40789cu: goto label_40789c;
        case 0x4078a0u: goto label_4078a0;
        case 0x4078a4u: goto label_4078a4;
        case 0x4078a8u: goto label_4078a8;
        case 0x4078acu: goto label_4078ac;
        case 0x4078b0u: goto label_4078b0;
        case 0x4078b4u: goto label_4078b4;
        case 0x4078b8u: goto label_4078b8;
        case 0x4078bcu: goto label_4078bc;
        case 0x4078c0u: goto label_4078c0;
        case 0x4078c4u: goto label_4078c4;
        case 0x4078c8u: goto label_4078c8;
        case 0x4078ccu: goto label_4078cc;
        case 0x4078d0u: goto label_4078d0;
        case 0x4078d4u: goto label_4078d4;
        case 0x4078d8u: goto label_4078d8;
        case 0x4078dcu: goto label_4078dc;
        case 0x4078e0u: goto label_4078e0;
        case 0x4078e4u: goto label_4078e4;
        case 0x4078e8u: goto label_4078e8;
        case 0x4078ecu: goto label_4078ec;
        case 0x4078f0u: goto label_4078f0;
        case 0x4078f4u: goto label_4078f4;
        case 0x4078f8u: goto label_4078f8;
        case 0x4078fcu: goto label_4078fc;
        case 0x407900u: goto label_407900;
        case 0x407904u: goto label_407904;
        case 0x407908u: goto label_407908;
        case 0x40790cu: goto label_40790c;
        case 0x407910u: goto label_407910;
        case 0x407914u: goto label_407914;
        case 0x407918u: goto label_407918;
        case 0x40791cu: goto label_40791c;
        case 0x407920u: goto label_407920;
        case 0x407924u: goto label_407924;
        case 0x407928u: goto label_407928;
        case 0x40792cu: goto label_40792c;
        case 0x407930u: goto label_407930;
        case 0x407934u: goto label_407934;
        case 0x407938u: goto label_407938;
        case 0x40793cu: goto label_40793c;
        case 0x407940u: goto label_407940;
        case 0x407944u: goto label_407944;
        case 0x407948u: goto label_407948;
        case 0x40794cu: goto label_40794c;
        case 0x407950u: goto label_407950;
        case 0x407954u: goto label_407954;
        case 0x407958u: goto label_407958;
        case 0x40795cu: goto label_40795c;
        case 0x407960u: goto label_407960;
        case 0x407964u: goto label_407964;
        case 0x407968u: goto label_407968;
        case 0x40796cu: goto label_40796c;
        case 0x407970u: goto label_407970;
        case 0x407974u: goto label_407974;
        case 0x407978u: goto label_407978;
        case 0x40797cu: goto label_40797c;
        case 0x407980u: goto label_407980;
        case 0x407984u: goto label_407984;
        case 0x407988u: goto label_407988;
        case 0x40798cu: goto label_40798c;
        case 0x407990u: goto label_407990;
        case 0x407994u: goto label_407994;
        case 0x407998u: goto label_407998;
        case 0x40799cu: goto label_40799c;
        case 0x4079a0u: goto label_4079a0;
        case 0x4079a4u: goto label_4079a4;
        case 0x4079a8u: goto label_4079a8;
        case 0x4079acu: goto label_4079ac;
        case 0x4079b0u: goto label_4079b0;
        case 0x4079b4u: goto label_4079b4;
        case 0x4079b8u: goto label_4079b8;
        case 0x4079bcu: goto label_4079bc;
        case 0x4079c0u: goto label_4079c0;
        case 0x4079c4u: goto label_4079c4;
        case 0x4079c8u: goto label_4079c8;
        case 0x4079ccu: goto label_4079cc;
        case 0x4079d0u: goto label_4079d0;
        case 0x4079d4u: goto label_4079d4;
        case 0x4079d8u: goto label_4079d8;
        case 0x4079dcu: goto label_4079dc;
        case 0x4079e0u: goto label_4079e0;
        case 0x4079e4u: goto label_4079e4;
        case 0x4079e8u: goto label_4079e8;
        case 0x4079ecu: goto label_4079ec;
        case 0x4079f0u: goto label_4079f0;
        case 0x4079f4u: goto label_4079f4;
        case 0x4079f8u: goto label_4079f8;
        case 0x4079fcu: goto label_4079fc;
        case 0x407a00u: goto label_407a00;
        case 0x407a04u: goto label_407a04;
        case 0x407a08u: goto label_407a08;
        case 0x407a0cu: goto label_407a0c;
        case 0x407a10u: goto label_407a10;
        case 0x407a14u: goto label_407a14;
        case 0x407a18u: goto label_407a18;
        case 0x407a1cu: goto label_407a1c;
        case 0x407a20u: goto label_407a20;
        case 0x407a24u: goto label_407a24;
        case 0x407a28u: goto label_407a28;
        case 0x407a2cu: goto label_407a2c;
        case 0x407a30u: goto label_407a30;
        case 0x407a34u: goto label_407a34;
        case 0x407a38u: goto label_407a38;
        case 0x407a3cu: goto label_407a3c;
        case 0x407a40u: goto label_407a40;
        case 0x407a44u: goto label_407a44;
        case 0x407a48u: goto label_407a48;
        case 0x407a4cu: goto label_407a4c;
        case 0x407a50u: goto label_407a50;
        case 0x407a54u: goto label_407a54;
        case 0x407a58u: goto label_407a58;
        case 0x407a5cu: goto label_407a5c;
        case 0x407a60u: goto label_407a60;
        case 0x407a64u: goto label_407a64;
        case 0x407a68u: goto label_407a68;
        case 0x407a6cu: goto label_407a6c;
        case 0x407a70u: goto label_407a70;
        case 0x407a74u: goto label_407a74;
        case 0x407a78u: goto label_407a78;
        case 0x407a7cu: goto label_407a7c;
        case 0x407a80u: goto label_407a80;
        case 0x407a84u: goto label_407a84;
        case 0x407a88u: goto label_407a88;
        case 0x407a8cu: goto label_407a8c;
        case 0x407a90u: goto label_407a90;
        case 0x407a94u: goto label_407a94;
        case 0x407a98u: goto label_407a98;
        case 0x407a9cu: goto label_407a9c;
        case 0x407aa0u: goto label_407aa0;
        case 0x407aa4u: goto label_407aa4;
        case 0x407aa8u: goto label_407aa8;
        case 0x407aacu: goto label_407aac;
        case 0x407ab0u: goto label_407ab0;
        case 0x407ab4u: goto label_407ab4;
        case 0x407ab8u: goto label_407ab8;
        case 0x407abcu: goto label_407abc;
        case 0x407ac0u: goto label_407ac0;
        case 0x407ac4u: goto label_407ac4;
        case 0x407ac8u: goto label_407ac8;
        case 0x407accu: goto label_407acc;
        case 0x407ad0u: goto label_407ad0;
        case 0x407ad4u: goto label_407ad4;
        case 0x407ad8u: goto label_407ad8;
        case 0x407adcu: goto label_407adc;
        case 0x407ae0u: goto label_407ae0;
        case 0x407ae4u: goto label_407ae4;
        case 0x407ae8u: goto label_407ae8;
        case 0x407aecu: goto label_407aec;
        case 0x407af0u: goto label_407af0;
        case 0x407af4u: goto label_407af4;
        case 0x407af8u: goto label_407af8;
        case 0x407afcu: goto label_407afc;
        case 0x407b00u: goto label_407b00;
        case 0x407b04u: goto label_407b04;
        case 0x407b08u: goto label_407b08;
        case 0x407b0cu: goto label_407b0c;
        case 0x407b10u: goto label_407b10;
        case 0x407b14u: goto label_407b14;
        case 0x407b18u: goto label_407b18;
        case 0x407b1cu: goto label_407b1c;
        case 0x407b20u: goto label_407b20;
        case 0x407b24u: goto label_407b24;
        case 0x407b28u: goto label_407b28;
        case 0x407b2cu: goto label_407b2c;
        case 0x407b30u: goto label_407b30;
        case 0x407b34u: goto label_407b34;
        case 0x407b38u: goto label_407b38;
        case 0x407b3cu: goto label_407b3c;
        case 0x407b40u: goto label_407b40;
        case 0x407b44u: goto label_407b44;
        case 0x407b48u: goto label_407b48;
        case 0x407b4cu: goto label_407b4c;
        case 0x407b50u: goto label_407b50;
        case 0x407b54u: goto label_407b54;
        case 0x407b58u: goto label_407b58;
        case 0x407b5cu: goto label_407b5c;
        case 0x407b60u: goto label_407b60;
        case 0x407b64u: goto label_407b64;
        case 0x407b68u: goto label_407b68;
        case 0x407b6cu: goto label_407b6c;
        case 0x407b70u: goto label_407b70;
        case 0x407b74u: goto label_407b74;
        case 0x407b78u: goto label_407b78;
        case 0x407b7cu: goto label_407b7c;
        case 0x407b80u: goto label_407b80;
        case 0x407b84u: goto label_407b84;
        case 0x407b88u: goto label_407b88;
        case 0x407b8cu: goto label_407b8c;
        case 0x407b90u: goto label_407b90;
        case 0x407b94u: goto label_407b94;
        case 0x407b98u: goto label_407b98;
        case 0x407b9cu: goto label_407b9c;
        case 0x407ba0u: goto label_407ba0;
        case 0x407ba4u: goto label_407ba4;
        case 0x407ba8u: goto label_407ba8;
        case 0x407bacu: goto label_407bac;
        case 0x407bb0u: goto label_407bb0;
        case 0x407bb4u: goto label_407bb4;
        case 0x407bb8u: goto label_407bb8;
        case 0x407bbcu: goto label_407bbc;
        case 0x407bc0u: goto label_407bc0;
        case 0x407bc4u: goto label_407bc4;
        case 0x407bc8u: goto label_407bc8;
        case 0x407bccu: goto label_407bcc;
        case 0x407bd0u: goto label_407bd0;
        case 0x407bd4u: goto label_407bd4;
        case 0x407bd8u: goto label_407bd8;
        case 0x407bdcu: goto label_407bdc;
        case 0x407be0u: goto label_407be0;
        case 0x407be4u: goto label_407be4;
        case 0x407be8u: goto label_407be8;
        case 0x407becu: goto label_407bec;
        case 0x407bf0u: goto label_407bf0;
        case 0x407bf4u: goto label_407bf4;
        case 0x407bf8u: goto label_407bf8;
        case 0x407bfcu: goto label_407bfc;
        case 0x407c00u: goto label_407c00;
        case 0x407c04u: goto label_407c04;
        case 0x407c08u: goto label_407c08;
        case 0x407c0cu: goto label_407c0c;
        case 0x407c10u: goto label_407c10;
        case 0x407c14u: goto label_407c14;
        case 0x407c18u: goto label_407c18;
        case 0x407c1cu: goto label_407c1c;
        case 0x407c20u: goto label_407c20;
        case 0x407c24u: goto label_407c24;
        case 0x407c28u: goto label_407c28;
        case 0x407c2cu: goto label_407c2c;
        case 0x407c30u: goto label_407c30;
        case 0x407c34u: goto label_407c34;
        case 0x407c38u: goto label_407c38;
        case 0x407c3cu: goto label_407c3c;
        case 0x407c40u: goto label_407c40;
        case 0x407c44u: goto label_407c44;
        case 0x407c48u: goto label_407c48;
        case 0x407c4cu: goto label_407c4c;
        case 0x407c50u: goto label_407c50;
        case 0x407c54u: goto label_407c54;
        case 0x407c58u: goto label_407c58;
        case 0x407c5cu: goto label_407c5c;
        case 0x407c60u: goto label_407c60;
        case 0x407c64u: goto label_407c64;
        case 0x407c68u: goto label_407c68;
        case 0x407c6cu: goto label_407c6c;
        case 0x407c70u: goto label_407c70;
        case 0x407c74u: goto label_407c74;
        case 0x407c78u: goto label_407c78;
        case 0x407c7cu: goto label_407c7c;
        case 0x407c80u: goto label_407c80;
        case 0x407c84u: goto label_407c84;
        case 0x407c88u: goto label_407c88;
        case 0x407c8cu: goto label_407c8c;
        case 0x407c90u: goto label_407c90;
        case 0x407c94u: goto label_407c94;
        case 0x407c98u: goto label_407c98;
        case 0x407c9cu: goto label_407c9c;
        case 0x407ca0u: goto label_407ca0;
        case 0x407ca4u: goto label_407ca4;
        case 0x407ca8u: goto label_407ca8;
        case 0x407cacu: goto label_407cac;
        case 0x407cb0u: goto label_407cb0;
        case 0x407cb4u: goto label_407cb4;
        case 0x407cb8u: goto label_407cb8;
        case 0x407cbcu: goto label_407cbc;
        case 0x407cc0u: goto label_407cc0;
        case 0x407cc4u: goto label_407cc4;
        case 0x407cc8u: goto label_407cc8;
        case 0x407cccu: goto label_407ccc;
        case 0x407cd0u: goto label_407cd0;
        case 0x407cd4u: goto label_407cd4;
        case 0x407cd8u: goto label_407cd8;
        case 0x407cdcu: goto label_407cdc;
        case 0x407ce0u: goto label_407ce0;
        case 0x407ce4u: goto label_407ce4;
        case 0x407ce8u: goto label_407ce8;
        case 0x407cecu: goto label_407cec;
        case 0x407cf0u: goto label_407cf0;
        case 0x407cf4u: goto label_407cf4;
        case 0x407cf8u: goto label_407cf8;
        case 0x407cfcu: goto label_407cfc;
        case 0x407d00u: goto label_407d00;
        case 0x407d04u: goto label_407d04;
        case 0x407d08u: goto label_407d08;
        case 0x407d0cu: goto label_407d0c;
        case 0x407d10u: goto label_407d10;
        case 0x407d14u: goto label_407d14;
        case 0x407d18u: goto label_407d18;
        case 0x407d1cu: goto label_407d1c;
        case 0x407d20u: goto label_407d20;
        case 0x407d24u: goto label_407d24;
        case 0x407d28u: goto label_407d28;
        case 0x407d2cu: goto label_407d2c;
        case 0x407d30u: goto label_407d30;
        case 0x407d34u: goto label_407d34;
        case 0x407d38u: goto label_407d38;
        case 0x407d3cu: goto label_407d3c;
        case 0x407d40u: goto label_407d40;
        case 0x407d44u: goto label_407d44;
        case 0x407d48u: goto label_407d48;
        case 0x407d4cu: goto label_407d4c;
        case 0x407d50u: goto label_407d50;
        case 0x407d54u: goto label_407d54;
        case 0x407d58u: goto label_407d58;
        case 0x407d5cu: goto label_407d5c;
        case 0x407d60u: goto label_407d60;
        case 0x407d64u: goto label_407d64;
        case 0x407d68u: goto label_407d68;
        case 0x407d6cu: goto label_407d6c;
        case 0x407d70u: goto label_407d70;
        case 0x407d74u: goto label_407d74;
        case 0x407d78u: goto label_407d78;
        case 0x407d7cu: goto label_407d7c;
        case 0x407d80u: goto label_407d80;
        case 0x407d84u: goto label_407d84;
        case 0x407d88u: goto label_407d88;
        case 0x407d8cu: goto label_407d8c;
        case 0x407d90u: goto label_407d90;
        case 0x407d94u: goto label_407d94;
        case 0x407d98u: goto label_407d98;
        case 0x407d9cu: goto label_407d9c;
        case 0x407da0u: goto label_407da0;
        case 0x407da4u: goto label_407da4;
        case 0x407da8u: goto label_407da8;
        case 0x407dacu: goto label_407dac;
        case 0x407db0u: goto label_407db0;
        case 0x407db4u: goto label_407db4;
        default: break;
    }

    ctx->pc = 0x4077b8u;

label_4077b8:
    // 0x4077b8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4077b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4077bc:
    // 0x4077bc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4077bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4077c0:
    // 0x4077c0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4077c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4077c4:
    // 0x4077c4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4077c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4077c8:
    // 0x4077c8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4077c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4077cc:
    // 0x4077cc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4077ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4077d0:
    // 0x4077d0: 0x10a00170  beqz        $a1, . + 4 + (0x170 << 2)
label_4077d4:
    if (ctx->pc == 0x4077D4u) {
        ctx->pc = 0x4077D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4077D0u;
        // 0x4077d4: 0xafa40038  sw          $a0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4077D8u;
        goto label_4077d8;
    }
    ctx->pc = 0x4077D0u;
    {
        const bool branch_taken_0x4077d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4077D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4077D0u;
        // 0x4077d4: 0xafa40038  sw          $a0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4077d0) {
            ctx->pc = 0x407D94u;
            goto label_407d94;
        }
    }
    ctx->pc = 0x4077D8u;
label_4077d8:
    // 0x4077d8: 0x1080016e  beqz        $a0, . + 4 + (0x16E << 2)
label_4077dc:
    if (ctx->pc == 0x4077DCu) {
        ctx->pc = 0x4077DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4077D8u;
        // 0x4077dc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4077E0u;
        goto label_4077e0;
    }
    ctx->pc = 0x4077D8u;
    {
        const bool branch_taken_0x4077d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4077DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4077D8u;
        // 0x4077dc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4077d8) {
            ctx->pc = 0x407D94u;
            goto label_407d94;
        }
    }
    ctx->pc = 0x4077E0u;
label_4077e0:
    // 0x4077e0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4077e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4077e4:
    // 0x4077e4: 0xc10493e  jal         func_4124F8
label_4077e8:
    if (ctx->pc == 0x4077E8u) {
        ctx->pc = 0x4077E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4077E4u;
        // 0x4077e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4077ECu;
        goto label_4077ec;
    }
    ctx->pc = 0x4077E4u;
    SET_GPR_U32(ctx, 31, 0x4077ECu);
    ctx->pc = 0x4077E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4077E4u;
    // 0x4077e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4124F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4124F8u, 0x4077E4u, 0x4077ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4077ECu;
label_4077ec:
    // 0x4077ec: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_4077f0:
    if (ctx->pc == 0x4077F0u) {
        ctx->pc = 0x4077F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4077ECu;
        // 0x4077f0: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4077F4u;
        goto label_4077f4;
    }
    ctx->pc = 0x4077ECu;
    {
        const bool branch_taken_0x4077ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4077F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4077ECu;
        // 0x4077f0: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4077ec) {
            ctx->pc = 0x407894u;
            goto label_407894;
        }
    }
    ctx->pc = 0x4077F4u;
label_4077f4:
    // 0x4077f4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x4077f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_4077f8:
    // 0x4077f8: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x4077f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_4077fc:
    // 0x4077fc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x4077fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_407800:
    // 0x407800: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x407800u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
label_407804:
    // 0x407804: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x407804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_407808:
    // 0x407808: 0x3c0a0041  lui         $t2, 0x41
    ctx->pc = 0x407808u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65 << 16));
label_40780c:
    // 0x40780c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x40780cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_407810:
    // 0x407810: 0x24849c88  addiu       $a0, $a0, -0x6378
    ctx->pc = 0x407810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941832));
label_407814:
    // 0x407814: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x407814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_407818:
    // 0x407818: 0x25298418  addiu       $t1, $t1, -0x7BE8
    ctx->pc = 0x407818u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294935576));
label_40781c:
    // 0x40781c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x40781cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_407820:
    // 0x407820: 0x254a8448  addiu       $t2, $t2, -0x7BB8
    ctx->pc = 0x407820u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294935624));
label_407824:
    // 0x407824: 0xffa00028  sd          $zero, 0x28($sp)
    ctx->pc = 0x407824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 0));
label_407828:
    // 0x407828: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x407828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40782c:
    // 0x40782c: 0xffa00030  sd          $zero, 0x30($sp)
    ctx->pc = 0x40782cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 0));
label_407830:
    // 0x407830: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x407830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_407834:
    // 0x407834: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x407834u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_407838:
    // 0x407838: 0xc0ff6dc  jal         func_3FDB70
label_40783c:
    if (ctx->pc == 0x40783Cu) {
        ctx->pc = 0x40783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407838u;
        // 0x40783c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407840u;
        goto label_407840;
    }
    ctx->pc = 0x407838u;
    SET_GPR_U32(ctx, 31, 0x407840u);
    ctx->pc = 0x40783Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407838u;
    // 0x40783c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FDB70u, 0x407838u, 0x407840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407840u;
label_407840:
    // 0x407840: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x407840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_407844:
    // 0x407844: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x407844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_407848:
    // 0x407848: 0x1040011c  beqz        $v0, . + 4 + (0x11C << 2)
label_40784c:
    if (ctx->pc == 0x40784Cu) {
        ctx->pc = 0x40784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407848u;
        // 0x40784c: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407850u;
        goto label_407850;
    }
    ctx->pc = 0x407848u;
    {
        const bool branch_taken_0x407848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407848u;
        // 0x40784c: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407848) {
            ctx->pc = 0x407CBCu;
            goto label_407cbc;
        }
    }
    ctx->pc = 0x407850u;
label_407850:
    // 0x407850: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x407850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_407854:
    // 0x407854: 0xc0f8514  jal         func_3E1450
label_407858:
    if (ctx->pc == 0x407858u) {
        ctx->pc = 0x40785Cu;
        goto label_40785c;
    }
    ctx->pc = 0x407854u;
    SET_GPR_U32(ctx, 31, 0x40785Cu);
    ctx->pc = 0x3E1450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1450u, 0x407854u, 0x40785Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40785Cu;
label_40785c:
    // 0x40785c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x40785cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_407860:
    // 0x407860: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x407860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_407864:
    // 0x407864: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_407868:
    if (ctx->pc == 0x407868u) {
        ctx->pc = 0x407868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407864u;
        // 0x407868: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40786Cu;
        goto label_40786c;
    }
    ctx->pc = 0x407864u;
    {
        const bool branch_taken_0x407864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x407868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407864u;
        // 0x407868: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407864) {
            ctx->pc = 0x407880u;
            goto label_407880;
        }
    }
    ctx->pc = 0x40786Cu;
label_40786c:
    // 0x40786c: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x40786cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_407870:
    // 0x407870: 0xc0bc204  jal         func_2F0810
label_407874:
    if (ctx->pc == 0x407874u) {
        ctx->pc = 0x407878u;
        goto label_407878;
    }
    ctx->pc = 0x407870u;
    SET_GPR_U32(ctx, 31, 0x407878u);
    ctx->pc = 0x2F0810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0810u, 0x407870u, 0x407878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407878u;
label_407878:
    // 0x407878: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_40787c:
    if (ctx->pc == 0x40787Cu) {
        ctx->pc = 0x40787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407878u;
        // 0x40787c: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407880u;
        goto label_407880;
    }
    ctx->pc = 0x407878u;
    {
        const bool branch_taken_0x407878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407878u;
        // 0x40787c: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407878) {
            ctx->pc = 0x40789Cu;
            goto label_40789c;
        }
    }
    ctx->pc = 0x407880u;
label_407880:
    // 0x407880: 0xc10496a  jal         func_4125A8
label_407884:
    if (ctx->pc == 0x407884u) {
        ctx->pc = 0x407884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407880u;
        // 0x407884: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407888u;
        goto label_407888;
    }
    ctx->pc = 0x407880u;
    SET_GPR_U32(ctx, 31, 0x407888u);
    ctx->pc = 0x407884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407880u;
    // 0x407884: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4125A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125A8u, 0x407880u, 0x407888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407888u;
label_407888:
    // 0x407888: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x407888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_40788c:
    // 0x40788c: 0xc0ffa5a  jal         func_3FE968
label_407890:
    if (ctx->pc == 0x407890u) {
        ctx->pc = 0x407890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40788Cu;
        // 0x407890: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407894u;
        goto label_407894;
    }
    ctx->pc = 0x40788Cu;
    SET_GPR_U32(ctx, 31, 0x407894u);
    ctx->pc = 0x407890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40788Cu;
    // 0x407890: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FE968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FE968u, 0x40788Cu, 0x407894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407894u;
label_407894:
    // 0x407894: 0x10000140  b           . + 4 + (0x140 << 2)
label_407898:
    if (ctx->pc == 0x407898u) {
        ctx->pc = 0x407898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407894u;
        // 0x407898: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40789Cu;
        goto label_40789c;
    }
    ctx->pc = 0x407894u;
    {
        const bool branch_taken_0x407894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x407898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407894u;
        // 0x407898: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407894) {
            ctx->pc = 0x407D98u;
            goto label_407d98;
        }
    }
    ctx->pc = 0x40789Cu;
label_40789c:
    // 0x40789c: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x40789cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_4078a0:
    // 0x4078a0: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x4078a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
label_4078a4:
    // 0x4078a4: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x4078a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_4078a8:
    // 0x4078a8: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x4078a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
label_4078ac:
    // 0x4078ac: 0x24c684b0  addiu       $a2, $a2, -0x7B50
    ctx->pc = 0x4078acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935728));
label_4078b0:
    // 0x4078b0: 0xc0ff4a2  jal         func_3FD288
label_4078b4:
    if (ctx->pc == 0x4078B4u) {
        ctx->pc = 0x4078B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4078B0u;
        // 0x4078b4: 0x24e784f0  addiu       $a3, $a3, -0x7B10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4078B8u;
        goto label_4078b8;
    }
    ctx->pc = 0x4078B0u;
    SET_GPR_U32(ctx, 31, 0x4078B8u);
    ctx->pc = 0x4078B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4078B0u;
    // 0x4078b4: 0x24e784f0  addiu       $a3, $a3, -0x7B10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD288u, 0x4078B0u, 0x4078B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4078B8u;
label_4078b8:
    // 0x4078b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x4078b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_4078bc:
    // 0x4078bc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x4078bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4078c0:
    // 0x4078c0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x4078c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_4078c4:
    // 0x4078c4: 0x8c51000c  lw          $s1, 0xC($v0)
    ctx->pc = 0x4078c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4078c8:
    // 0x4078c8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4078c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4078cc:
    // 0x4078cc: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4078ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4078d0:
    // 0x4078d0: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x4078d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
label_4078d4:
    // 0x4078d4: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x4078d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
label_4078d8:
    // 0x4078d8: 0x12240010  beq         $s1, $a0, . + 4 + (0x10 << 2)
label_4078dc:
    if (ctx->pc == 0x4078DCu) {
        ctx->pc = 0x4078DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4078D8u;
        // 0x4078dc: 0x2a220009  slti        $v0, $s1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4078E0u;
        goto label_4078e0;
    }
    ctx->pc = 0x4078D8u;
    {
        const bool branch_taken_0x4078d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        ctx->pc = 0x4078DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4078D8u;
        // 0x4078dc: 0x2a220009  slti        $v0, $s1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4078d8) {
            ctx->pc = 0x40791Cu;
            goto label_40791c;
        }
    }
    ctx->pc = 0x4078E0u;
label_4078e0:
    // 0x4078e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4078e4:
    if (ctx->pc == 0x4078E4u) {
        ctx->pc = 0x4078E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4078E0u;
        // 0x4078e4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4078E8u;
        goto label_4078e8;
    }
    ctx->pc = 0x4078E0u;
    {
        const bool branch_taken_0x4078e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4078E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4078E0u;
        // 0x4078e4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4078e0) {
            ctx->pc = 0x4078F8u;
            goto label_4078f8;
        }
    }
    ctx->pc = 0x4078E8u;
label_4078e8:
    // 0x4078e8: 0x12220011  beq         $s1, $v0, . + 4 + (0x11 << 2)
label_4078ec:
    if (ctx->pc == 0x4078ECu) {
        ctx->pc = 0x4078F0u;
        goto label_4078f0;
    }
    ctx->pc = 0x4078E8u;
    {
        const bool branch_taken_0x4078e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x4078e8) {
            ctx->pc = 0x407930u;
            goto label_407930;
        }
    }
    ctx->pc = 0x4078F0u;
label_4078f0:
    // 0x4078f0: 0x10000015  b           . + 4 + (0x15 << 2)
label_4078f4:
    if (ctx->pc == 0x4078F4u) {
        ctx->pc = 0x4078F8u;
        goto label_4078f8;
    }
    ctx->pc = 0x4078F0u;
    {
        const bool branch_taken_0x4078f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4078f0) {
            ctx->pc = 0x407948u;
            goto label_407948;
        }
    }
    ctx->pc = 0x4078F8u;
label_4078f8:
    // 0x4078f8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x4078f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4078fc:
    // 0x4078fc: 0x16220012  bne         $s1, $v0, . + 4 + (0x12 << 2)
label_407900:
    if (ctx->pc == 0x407900u) {
        ctx->pc = 0x407904u;
        goto label_407904;
    }
    ctx->pc = 0x4078FCu;
    {
        const bool branch_taken_0x4078fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x4078fc) {
            ctx->pc = 0x407948u;
            goto label_407948;
        }
    }
    ctx->pc = 0x407904u;
label_407904:
    // 0x407904: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x407904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_407908:
    // 0x407908: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x407908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_40790c:
    // 0x40790c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x40790cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_407910:
    // 0x407910: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x407910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_407914:
    // 0x407914: 0x1000000c  b           . + 4 + (0xC << 2)
label_407918:
    if (ctx->pc == 0x407918u) {
        ctx->pc = 0x40791Cu;
        goto label_40791c;
    }
    ctx->pc = 0x407914u;
    {
        const bool branch_taken_0x407914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x407914) {
            ctx->pc = 0x407948u;
            goto label_407948;
        }
    }
    ctx->pc = 0x40791Cu;
label_40791c:
    // 0x40791c: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x40791cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
label_407920:
    // 0x407920: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x407920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_407924:
    // 0x407924: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x407924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_407928:
    // 0x407928: 0x10000005  b           . + 4 + (0x5 << 2)
label_40792c:
    if (ctx->pc == 0x40792Cu) {
        ctx->pc = 0x40792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407928u;
        // 0x40792c: 0x8c830018  lw          $v1, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407930u;
        goto label_407930;
    }
    ctx->pc = 0x407928u;
    {
        const bool branch_taken_0x407928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407928u;
        // 0x40792c: 0x8c830018  lw          $v1, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407928) {
            ctx->pc = 0x407940u;
            goto label_407940;
        }
    }
    ctx->pc = 0x407930u;
label_407930:
    // 0x407930: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x407930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
label_407934:
    // 0x407934: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x407934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_407938:
    // 0x407938: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x407938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_40793c:
    // 0x40793c: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x40793cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_407940:
    // 0x407940: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x407940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_407944:
    // 0x407944: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x407944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_407948:
    // 0x407948: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x407948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_40794c:
    // 0x40794c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x40794cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_407950:
    // 0x407950: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x407950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_407954:
    // 0x407954: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x407954u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_407958:
    // 0x407958: 0xdfa60028  ld          $a2, 0x28($sp)
    ctx->pc = 0x407958u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_40795c:
    // 0x40795c: 0xdfa70030  ld          $a3, 0x30($sp)
    ctx->pc = 0x40795cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_407960:
    // 0x407960: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x407960u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_407964:
    // 0x407964: 0x8fa90014  lw          $t1, 0x14($sp)
    ctx->pc = 0x407964u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_407968:
    // 0x407968: 0xc0fe8c0  jal         func_3FA300
label_40796c:
    if (ctx->pc == 0x40796Cu) {
        ctx->pc = 0x40796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407968u;
        // 0x40796c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407970u;
        goto label_407970;
    }
    ctx->pc = 0x407968u;
    SET_GPR_U32(ctx, 31, 0x407970u);
    ctx->pc = 0x40796Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407968u;
    // 0x40796c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FA300u, 0x407968u, 0x407970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407970u;
label_407970:
    // 0x407970: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x407970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_407974:
    // 0x407974: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x407974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_407978:
    // 0x407978: 0x148200b6  bne         $a0, $v0, . + 4 + (0xB6 << 2)
label_40797c:
    if (ctx->pc == 0x40797Cu) {
        ctx->pc = 0x40797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407978u;
        // 0x40797c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407980u;
        goto label_407980;
    }
    ctx->pc = 0x407978u;
    {
        const bool branch_taken_0x407978 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x40797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407978u;
        // 0x40797c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407978) {
            ctx->pc = 0x407C54u;
            goto label_407c54;
        }
    }
    ctx->pc = 0x407980u;
label_407980:
    // 0x407980: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x407980u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_407984:
    // 0x407984: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x407984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_407988:
    // 0x407988: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x407988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_40798c:
    // 0x40798c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x40798cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_407990:
    // 0x407990: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x407990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_407994:
    // 0x407994: 0x2242004  sllv        $a0, $a0, $s1
    ctx->pc = 0x407994u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 17) & 0x1F));
label_407998:
    // 0x407998: 0x40f809  jalr        $v0
label_40799c:
    if (ctx->pc == 0x40799Cu) {
        ctx->pc = 0x40799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407998u;
        // 0x40799c: 0x34a5010d  ori         $a1, $a1, 0x10D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)269);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4079A0u;
        goto label_4079a0;
    }
    ctx->pc = 0x407998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4079A0u);
        ctx->pc = 0x40799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407998u;
        // 0x40799c: 0x34a5010d  ori         $a1, $a1, 0x10D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)269);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x407998u, 0x4079A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4079A0u;
label_4079a0:
    // 0x4079a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4079a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4079a4:
    // 0x4079a4: 0x8e060108  lw          $a2, 0x108($s0)
    ctx->pc = 0x4079a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_4079a8:
    // 0x4079a8: 0x2238004  sllv        $s0, $v1, $s1
    ctx->pc = 0x4079a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
label_4079ac:
    // 0x4079ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4079acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4079b0:
    // 0x4079b0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4079b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4079b4:
    // 0x4079b4: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x4079b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_4079b8:
    // 0x4079b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4079b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4079bc:
    // 0x4079bc: 0xc0f809  jalr        $a2
label_4079c0:
    if (ctx->pc == 0x4079C0u) {
        ctx->pc = 0x4079C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4079BCu;
        // 0x4079c0: 0x34a5010d  ori         $a1, $a1, 0x10D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)269);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4079C4u;
        goto label_4079c4;
    }
    ctx->pc = 0x4079BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x4079C4u);
        ctx->pc = 0x4079C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4079BCu;
        // 0x4079c0: 0x34a5010d  ori         $a1, $a1, 0x10D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)269);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4079BCu, 0x4079C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4079C4u;
label_4079c4:
    // 0x4079c4: 0x1a000094  blez        $s0, . + 4 + (0x94 << 2)
label_4079c8:
    if (ctx->pc == 0x4079C8u) {
        ctx->pc = 0x4079C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4079C4u;
        // 0x4079c8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4079CCu;
        goto label_4079cc;
    }
    ctx->pc = 0x4079C4u;
    {
        const bool branch_taken_0x4079c4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x4079C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4079C4u;
        // 0x4079c8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4079c4) {
            ctx->pc = 0x407C18u;
            goto label_407c18;
        }
    }
    ctx->pc = 0x4079CCu;
label_4079cc:
    // 0x4079cc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x4079ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4079d0:
    // 0x4079d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4079d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4079d4:
    // 0x4079d4: 0x81023  negu        $v0, $t0
    ctx->pc = 0x4079d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
label_4079d8:
    // 0x4079d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4079d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4079dc:
    // 0x4079dc: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x4079dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_4079e0:
    // 0x4079e0: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
label_4079e4:
    if (ctx->pc == 0x4079E4u) {
        ctx->pc = 0x4079E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4079E0u;
        // 0x4079e4: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4079E8u;
        goto label_4079e8;
    }
    ctx->pc = 0x4079E0u;
    {
        const bool branch_taken_0x4079e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4079E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4079E0u;
        // 0x4079e4: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4079e0) {
            ctx->pc = 0x407AE0u;
            goto label_407ae0;
        }
    }
    ctx->pc = 0x4079E8u;
label_4079e8:
    // 0x4079e8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x4079e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_4079ec:
    // 0x4079ec: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_4079f0:
    if (ctx->pc == 0x4079F0u) {
        ctx->pc = 0x4079F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4079ECu;
        // 0x4079f0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4079F4u;
        goto label_4079f4;
    }
    ctx->pc = 0x4079ECu;
    {
        const bool branch_taken_0x4079ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4079F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4079ECu;
        // 0x4079f0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4079ec) {
            ctx->pc = 0x407A8Cu;
            goto label_407a8c;
        }
    }
    ctx->pc = 0x4079F4u;
label_4079f4:
    // 0x4079f4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_4079f8:
    if (ctx->pc == 0x4079F8u) {
        ctx->pc = 0x4079FCu;
        goto label_4079fc;
    }
    ctx->pc = 0x4079F4u;
    {
        const bool branch_taken_0x4079f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4079f4) {
            ctx->pc = 0x407A3Cu;
            goto label_407a3c;
        }
    }
    ctx->pc = 0x4079FCu;
label_4079fc:
    // 0x4079fc: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x4079fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407a00:
    // 0x407a00: 0x26690001  addiu       $t1, $s3, 0x1
    ctx->pc = 0x407a00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_407a04:
    // 0x407a04: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x407a04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_407a08:
    // 0x407a08: 0x26440003  addiu       $a0, $s2, 0x3
    ctx->pc = 0x407a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
label_407a0c:
    // 0x407a0c: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x407a0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_407a10:
    // 0x407a10: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x407a10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_407a14:
    // 0x407a14: 0xa2450000  sb          $a1, 0x0($s2)
    ctx->pc = 0x407a14u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 5));
label_407a18:
    // 0x407a18: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x407a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407a1c:
    // 0x407a1c: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x407a1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_407a20:
    // 0x407a20: 0xa2450001  sb          $a1, 0x1($s2)
    ctx->pc = 0x407a20u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 5));
label_407a24:
    // 0x407a24: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x407a24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407a28:
    // 0x407a28: 0x90a50002  lbu         $a1, 0x2($a1)
    ctx->pc = 0x407a28u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_407a2c:
    // 0x407a2c: 0xa2450002  sb          $a1, 0x2($s2)
    ctx->pc = 0x407a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 5));
label_407a30:
    // 0x407a30: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x407a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407a34:
    // 0x407a34: 0x90a50003  lbu         $a1, 0x3($a1)
    ctx->pc = 0x407a34u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_407a38:
    // 0x407a38: 0xa2650000  sb          $a1, 0x0($s3)
    ctx->pc = 0x407a38u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 5));
label_407a3c:
    // 0x407a3c: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x407a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407a40:
    // 0x407a40: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x407a40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_407a44:
    // 0x407a44: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x407a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_407a48:
    // 0x407a48: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x407a48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_407a4c:
    // 0x407a4c: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x407a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
label_407a50:
    // 0x407a50: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x407a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407a54:
    // 0x407a54: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x407a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_407a58:
    // 0x407a58: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x407a58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_407a5c:
    // 0x407a5c: 0xa0850001  sb          $a1, 0x1($a0)
    ctx->pc = 0x407a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
label_407a60:
    // 0x407a60: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x407a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407a64:
    // 0x407a64: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x407a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_407a68:
    // 0x407a68: 0x90a50002  lbu         $a1, 0x2($a1)
    ctx->pc = 0x407a68u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_407a6c:
    // 0x407a6c: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x407a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
label_407a70:
    // 0x407a70: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x407a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_407a74:
    // 0x407a74: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x407a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407a78:
    // 0x407a78: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x407a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_407a7c:
    // 0x407a7c: 0x90a50003  lbu         $a1, 0x3($a1)
    ctx->pc = 0x407a7cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_407a80:
    // 0x407a80: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x407a80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_407a84:
    // 0x407a84: 0xa1250000  sb          $a1, 0x0($t1)
    ctx->pc = 0x407a84u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 5));
label_407a88:
    // 0x407a88: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x407a88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_407a8c:
    // 0x407a8c: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x407a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407a90:
    // 0x407a90: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x407a90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_407a94:
    // 0x407a94: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x407a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_407a98:
    // 0x407a98: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x407a98u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_407a9c:
    // 0x407a9c: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x407a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
label_407aa0:
    // 0x407aa0: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x407aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407aa4:
    // 0x407aa4: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x407aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_407aa8:
    // 0x407aa8: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x407aa8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_407aac:
    // 0x407aac: 0xa0850001  sb          $a1, 0x1($a0)
    ctx->pc = 0x407aacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
label_407ab0:
    // 0x407ab0: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x407ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407ab4:
    // 0x407ab4: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x407ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_407ab8:
    // 0x407ab8: 0x90a50002  lbu         $a1, 0x2($a1)
    ctx->pc = 0x407ab8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_407abc:
    // 0x407abc: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x407abcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
label_407ac0:
    // 0x407ac0: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x407ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_407ac4:
    // 0x407ac4: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x407ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407ac8:
    // 0x407ac8: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x407ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_407acc:
    // 0x407acc: 0x90a50003  lbu         $a1, 0x3($a1)
    ctx->pc = 0x407accu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_407ad0:
    // 0x407ad0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x407ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_407ad4:
    // 0x407ad4: 0xa1250000  sb          $a1, 0x0($t1)
    ctx->pc = 0x407ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 5));
label_407ad8:
    // 0x407ad8: 0x1100004f  beqz        $t0, . + 4 + (0x4F << 2)
label_407adc:
    if (ctx->pc == 0x407ADCu) {
        ctx->pc = 0x407ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407AD8u;
        // 0x407adc: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407AE0u;
        goto label_407ae0;
    }
    ctx->pc = 0x407AD8u;
    {
        const bool branch_taken_0x407ad8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x407ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407AD8u;
        // 0x407adc: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407ad8) {
            ctx->pc = 0x407C18u;
            goto label_407c18;
        }
    }
    ctx->pc = 0x407AE0u;
label_407ae0:
    // 0x407ae0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x407ae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_407ae4:
    // 0x407ae4: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x407ae4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_407ae8:
    // 0x407ae8: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x407ae8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_407aec:
    // 0x407aec: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x407aecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_407af0:
    // 0x407af0: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x407af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407af4:
    // 0x407af4: 0x24e20004  addiu       $v0, $a3, 0x4
    ctx->pc = 0x407af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_407af8:
    // 0x407af8: 0x24e30008  addiu       $v1, $a3, 0x8
    ctx->pc = 0x407af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_407afc:
    // 0x407afc: 0x24e4000c  addiu       $a0, $a3, 0xC
    ctx->pc = 0x407afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_407b00:
    // 0x407b00: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x407b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_407b04:
    // 0x407b04: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x407b04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
label_407b08:
    // 0x407b08: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x407b08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_407b0c:
    // 0x407b0c: 0xa1250000  sb          $a1, 0x0($t1)
    ctx->pc = 0x407b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 5));
label_407b10:
    // 0x407b10: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x407b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407b14:
    // 0x407b14: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x407b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_407b18:
    // 0x407b18: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x407b18u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_407b1c:
    // 0x407b1c: 0xa1450001  sb          $a1, 0x1($t2)
    ctx->pc = 0x407b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 5));
label_407b20:
    // 0x407b20: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x407b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407b24:
    // 0x407b24: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x407b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_407b28:
    // 0x407b28: 0x90a50002  lbu         $a1, 0x2($a1)
    ctx->pc = 0x407b28u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_407b2c:
    // 0x407b2c: 0xa0c50002  sb          $a1, 0x2($a2)
    ctx->pc = 0x407b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 5));
label_407b30:
    // 0x407b30: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x407b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407b34:
    // 0x407b34: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x407b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_407b38:
    // 0x407b38: 0x90a50003  lbu         $a1, 0x3($a1)
    ctx->pc = 0x407b38u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_407b3c:
    // 0x407b3c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x407b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_407b40:
    // 0x407b40: 0xa1650000  sb          $a1, 0x0($t3)
    ctx->pc = 0x407b40u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 5));
label_407b44:
    // 0x407b44: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x407b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407b48:
    // 0x407b48: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x407b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_407b4c:
    // 0x407b4c: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x407b4cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_407b50:
    // 0x407b50: 0xa1250003  sb          $a1, 0x3($t1)
    ctx->pc = 0x407b50u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 5));
label_407b54:
    // 0x407b54: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x407b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407b58:
    // 0x407b58: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x407b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_407b5c:
    // 0x407b5c: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x407b5cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_407b60:
    // 0x407b60: 0xa1450004  sb          $a1, 0x4($t2)
    ctx->pc = 0x407b60u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 4), (uint8_t)GPR_U32(ctx, 5));
label_407b64:
    // 0x407b64: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x407b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407b68:
    // 0x407b68: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x407b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_407b6c:
    // 0x407b6c: 0x90a50002  lbu         $a1, 0x2($a1)
    ctx->pc = 0x407b6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_407b70:
    // 0x407b70: 0xa0c50005  sb          $a1, 0x5($a2)
    ctx->pc = 0x407b70u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 5));
label_407b74:
    // 0x407b74: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x407b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407b78:
    // 0x407b78: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x407b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_407b7c:
    // 0x407b7c: 0x90a50003  lbu         $a1, 0x3($a1)
    ctx->pc = 0x407b7cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_407b80:
    // 0x407b80: 0xa1650001  sb          $a1, 0x1($t3)
    ctx->pc = 0x407b80u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 5));
label_407b84:
    // 0x407b84: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x407b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407b88:
    // 0x407b88: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x407b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_407b8c:
    // 0x407b8c: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x407b8cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_407b90:
    // 0x407b90: 0xa1250006  sb          $a1, 0x6($t1)
    ctx->pc = 0x407b90u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 6), (uint8_t)GPR_U32(ctx, 5));
label_407b94:
    // 0x407b94: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x407b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407b98:
    // 0x407b98: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x407b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_407b9c:
    // 0x407b9c: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x407b9cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_407ba0:
    // 0x407ba0: 0xa1450007  sb          $a1, 0x7($t2)
    ctx->pc = 0x407ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 7), (uint8_t)GPR_U32(ctx, 5));
label_407ba4:
    // 0x407ba4: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x407ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407ba8:
    // 0x407ba8: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x407ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_407bac:
    // 0x407bac: 0x90a50002  lbu         $a1, 0x2($a1)
    ctx->pc = 0x407bacu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_407bb0:
    // 0x407bb0: 0xa0c50008  sb          $a1, 0x8($a2)
    ctx->pc = 0x407bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 5));
label_407bb4:
    // 0x407bb4: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x407bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407bb8:
    // 0x407bb8: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x407bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_407bbc:
    // 0x407bbc: 0x90a50003  lbu         $a1, 0x3($a1)
    ctx->pc = 0x407bbcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_407bc0:
    // 0x407bc0: 0xa1650002  sb          $a1, 0x2($t3)
    ctx->pc = 0x407bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 5));
label_407bc4:
    // 0x407bc4: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x407bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407bc8:
    // 0x407bc8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x407bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_407bcc:
    // 0x407bcc: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x407bccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_407bd0:
    // 0x407bd0: 0xa1250009  sb          $a1, 0x9($t1)
    ctx->pc = 0x407bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 9), (uint8_t)GPR_U32(ctx, 5));
label_407bd4:
    // 0x407bd4: 0x2529000c  addiu       $t1, $t1, 0xC
    ctx->pc = 0x407bd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
label_407bd8:
    // 0x407bd8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x407bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407bdc:
    // 0x407bdc: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x407bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_407be0:
    // 0x407be0: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x407be0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_407be4:
    // 0x407be4: 0xa145000a  sb          $a1, 0xA($t2)
    ctx->pc = 0x407be4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 10), (uint8_t)GPR_U32(ctx, 5));
label_407be8:
    // 0x407be8: 0x254a000c  addiu       $t2, $t2, 0xC
    ctx->pc = 0x407be8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
label_407bec:
    // 0x407bec: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x407becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407bf0:
    // 0x407bf0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x407bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_407bf4:
    // 0x407bf4: 0x90a50002  lbu         $a1, 0x2($a1)
    ctx->pc = 0x407bf4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_407bf8:
    // 0x407bf8: 0xa0c5000b  sb          $a1, 0xB($a2)
    ctx->pc = 0x407bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 11), (uint8_t)GPR_U32(ctx, 5));
label_407bfc:
    // 0x407bfc: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x407bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_407c00:
    // 0x407c00: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x407c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407c04:
    // 0x407c04: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x407c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_407c08:
    // 0x407c08: 0x90a50003  lbu         $a1, 0x3($a1)
    ctx->pc = 0x407c08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_407c0c:
    // 0x407c0c: 0xa1650003  sb          $a1, 0x3($t3)
    ctx->pc = 0x407c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3), (uint8_t)GPR_U32(ctx, 5));
label_407c10:
    // 0x407c10: 0x1500ffb7  bnez        $t0, . + 4 + (-0x49 << 2)
label_407c14:
    if (ctx->pc == 0x407C14u) {
        ctx->pc = 0x407C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407C10u;
        // 0x407c14: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407C18u;
        goto label_407c18;
    }
    ctx->pc = 0x407C10u;
    {
        const bool branch_taken_0x407c10 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x407C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407C10u;
        // 0x407c14: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407c10) {
            ctx->pc = 0x407AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_407af0;
        }
    }
    ctx->pc = 0x407C18u;
label_407c18:
    // 0x407c18: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x407c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_407c1c:
    // 0x407c1c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x407c1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_407c20:
    // 0x407c20: 0x2308004  sllv        $s0, $s0, $s1
    ctx->pc = 0x407c20u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 17) & 0x1F));
label_407c24:
    // 0x407c24: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x407c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_407c28:
    // 0x407c28: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x407c28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_407c2c:
    // 0x407c2c: 0xc0fedb0  jal         func_3FB6C0
label_407c30:
    if (ctx->pc == 0x407C30u) {
        ctx->pc = 0x407C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407C2Cu;
        // 0x407c30: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407C34u;
        goto label_407c34;
    }
    ctx->pc = 0x407C2Cu;
    SET_GPR_U32(ctx, 31, 0x407C34u);
    ctx->pc = 0x407C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407C2Cu;
    // 0x407c30: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FB6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FB6C0u, 0x407C2Cu, 0x407C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407C34u;
label_407c34:
    // 0x407c34: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x407c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_407c38:
    // 0x407c38: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x407c38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_407c3c:
    // 0x407c3c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x407c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_407c40:
    // 0x407c40: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x407c40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_407c44:
    // 0x407c44: 0xc0fee4e  jal         func_3FB938
label_407c48:
    if (ctx->pc == 0x407C48u) {
        ctx->pc = 0x407C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407C44u;
        // 0x407c48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407C4Cu;
        goto label_407c4c;
    }
    ctx->pc = 0x407C44u;
    SET_GPR_U32(ctx, 31, 0x407C4Cu);
    ctx->pc = 0x407C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407C44u;
    // 0x407c48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FB938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FB938u, 0x407C44u, 0x407C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407C4Cu;
label_407c4c:
    // 0x407c4c: 0x10000002  b           . + 4 + (0x2 << 2)
label_407c50:
    if (ctx->pc == 0x407C50u) {
        ctx->pc = 0x407C54u;
        goto label_407c54;
    }
    ctx->pc = 0x407C4Cu;
    {
        const bool branch_taken_0x407c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x407c4c) {
            ctx->pc = 0x407C58u;
            goto label_407c58;
        }
    }
    ctx->pc = 0x407C54u;
label_407c54:
    // 0x407c54: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x407c54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_407c58:
    // 0x407c58: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x407c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_407c5c:
    // 0x407c5c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x407c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_407c60:
    // 0x407c60: 0xc0ff572  jal         func_3FD5C8
label_407c64:
    if (ctx->pc == 0x407C64u) {
        ctx->pc = 0x407C68u;
        goto label_407c68;
    }
    ctx->pc = 0x407C60u;
    SET_GPR_U32(ctx, 31, 0x407C68u);
    ctx->pc = 0x3FD5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD5C8u, 0x407C60u, 0x407C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407C68u;
label_407c68:
    // 0x407c68: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x407c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_407c6c:
    // 0x407c6c: 0xc0ff39c  jal         func_3FCE70
label_407c70:
    if (ctx->pc == 0x407C70u) {
        ctx->pc = 0x407C74u;
        goto label_407c74;
    }
    ctx->pc = 0x407C6Cu;
    SET_GPR_U32(ctx, 31, 0x407C74u);
    ctx->pc = 0x3FCE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FCE70u, 0x407C6Cu, 0x407C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407C74u;
label_407c74:
    // 0x407c74: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x407c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_407c78:
    // 0x407c78: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x407c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_407c7c:
    // 0x407c7c: 0xdfa40030  ld          $a0, 0x30($sp)
    ctx->pc = 0x407c7cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_407c80:
    // 0x407c80: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x407c80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_407c84:
    // 0x407c84: 0x8c510014  lw          $s1, 0x14($v0)
    ctx->pc = 0x407c84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_407c88:
    // 0x407c88: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x407c88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_407c8c:
    // 0x407c8c: 0x420bc  dsll32      $a0, $a0, 2
    ctx->pc = 0x407c8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 2));
label_407c90:
    // 0x407c90: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x407c90u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_407c94:
    // 0x407c94: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x407c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_407c98:
    // 0x407c98: 0x40f809  jalr        $v0
label_407c9c:
    if (ctx->pc == 0x407C9Cu) {
        ctx->pc = 0x407C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407C98u;
        // 0x407c9c: 0x34a5010d  ori         $a1, $a1, 0x10D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)269);
        ctx->in_delay_slot = false;
        ctx->pc = 0x407CA0u;
        goto label_407ca0;
    }
    ctx->pc = 0x407C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x407CA0u);
        ctx->pc = 0x407C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407C98u;
        // 0x407c9c: 0x34a5010d  ori         $a1, $a1, 0x10D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)269);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x407C98u, 0x407CA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x407CA0u;
label_407ca0:
    // 0x407ca0: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x407ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_407ca4:
    // 0x407ca4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x407ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_407ca8:
    // 0x407ca8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_407cac:
    if (ctx->pc == 0x407CACu) {
        ctx->pc = 0x407CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407CA8u;
        // 0x407cac: 0x27a40024  addiu       $a0, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407CB0u;
        goto label_407cb0;
    }
    ctx->pc = 0x407CA8u;
    {
        const bool branch_taken_0x407ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x407CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407CA8u;
        // 0x407cac: 0x27a40024  addiu       $a0, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407ca8) {
            ctx->pc = 0x407CCCu;
            goto label_407ccc;
        }
    }
    ctx->pc = 0x407CB0u;
label_407cb0:
    // 0x407cb0: 0xc0ffa5a  jal         func_3FE968
label_407cb4:
    if (ctx->pc == 0x407CB4u) {
        ctx->pc = 0x407CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407CB0u;
        // 0x407cb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407CB8u;
        goto label_407cb8;
    }
    ctx->pc = 0x407CB0u;
    SET_GPR_U32(ctx, 31, 0x407CB8u);
    ctx->pc = 0x407CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407CB0u;
    // 0x407cb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FE968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FE968u, 0x407CB0u, 0x407CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407CB8u;
label_407cb8:
    // 0x407cb8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x407cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_407cbc:
    // 0x407cbc: 0xc10496a  jal         func_4125A8
label_407cc0:
    if (ctx->pc == 0x407CC0u) {
        ctx->pc = 0x407CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407CBCu;
        // 0x407cc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407CC4u;
        goto label_407cc4;
    }
    ctx->pc = 0x407CBCu;
    SET_GPR_U32(ctx, 31, 0x407CC4u);
    ctx->pc = 0x407CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407CBCu;
    // 0x407cc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4125A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125A8u, 0x407CBCu, 0x407CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407CC4u;
label_407cc4:
    // 0x407cc4: 0x10000034  b           . + 4 + (0x34 << 2)
label_407cc8:
    if (ctx->pc == 0x407CC8u) {
        ctx->pc = 0x407CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407CC4u;
        // 0x407cc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407CCCu;
        goto label_407ccc;
    }
    ctx->pc = 0x407CC4u;
    {
        const bool branch_taken_0x407cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x407CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407CC4u;
        // 0x407cc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407cc4) {
            ctx->pc = 0x407D98u;
            goto label_407d98;
        }
    }
    ctx->pc = 0x407CCCu;
label_407ccc:
    // 0x407ccc: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x407cccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_407cd0:
    // 0x407cd0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x407cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_407cd4:
    // 0x407cd4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x407cd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_407cd8:
    // 0x407cd8: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
label_407cdc:
    if (ctx->pc == 0x407CDCu) {
        ctx->pc = 0x407CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407CD8u;
        // 0x407cdc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407CE0u;
        goto label_407ce0;
    }
    ctx->pc = 0x407CD8u;
    {
        const bool branch_taken_0x407cd8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x407CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407CD8u;
        // 0x407cdc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407cd8) {
            ctx->pc = 0x407D14u;
            goto label_407d14;
        }
    }
    ctx->pc = 0x407CE0u;
label_407ce0:
    // 0x407ce0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x407ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_407ce4:
    // 0x407ce4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x407ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_407ce8:
    // 0x407ce8: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x407ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_407cec:
    // 0x407cec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x407cecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_407cf0:
    // 0x407cf0: 0xdfa30030  ld          $v1, 0x30($sp)
    ctx->pc = 0x407cf0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_407cf4:
    // 0x407cf4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x407cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_407cf8:
    // 0x407cf8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x407cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_407cfc:
    // 0x407cfc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x407cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_407d00:
    // 0x407d00: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x407d00u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_407d04:
    // 0x407d04: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x407d04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_407d08:
    // 0x407d08: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x407d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_407d0c:
    // 0x407d0c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_407d10:
    if (ctx->pc == 0x407D10u) {
        ctx->pc = 0x407D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407D0Cu;
        // 0x407d10: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407D14u;
        goto label_407d14;
    }
    ctx->pc = 0x407D0Cu;
    {
        const bool branch_taken_0x407d0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x407D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407D0Cu;
        // 0x407d10: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407d0c) {
            ctx->pc = 0x407CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_407ce8;
        }
    }
    ctx->pc = 0x407D14u;
label_407d14:
    // 0x407d14: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x407d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_407d18:
    // 0x407d18: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x407d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_407d1c:
    // 0x407d1c: 0xc0ffa2e  jal         func_3FE8B8
label_407d20:
    if (ctx->pc == 0x407D20u) {
        ctx->pc = 0x407D24u;
        goto label_407d24;
    }
    ctx->pc = 0x407D1Cu;
    SET_GPR_U32(ctx, 31, 0x407D24u);
    ctx->pc = 0x3FE8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FE8B8u, 0x407D1Cu, 0x407D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407D24u;
label_407d24:
    // 0x407d24: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x407d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_407d28:
    // 0x407d28: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x407d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_407d2c:
    // 0x407d2c: 0xc0ff65c  jal         func_3FD970
label_407d30:
    if (ctx->pc == 0x407D30u) {
        ctx->pc = 0x407D34u;
        goto label_407d34;
    }
    ctx->pc = 0x407D2Cu;
    SET_GPR_U32(ctx, 31, 0x407D34u);
    ctx->pc = 0x3FD970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD970u, 0x407D2Cu, 0x407D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407D34u;
label_407d34:
    // 0x407d34: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_407d38:
    if (ctx->pc == 0x407D38u) {
        ctx->pc = 0x407D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407D34u;
        // 0x407d38: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407D3Cu;
        goto label_407d3c;
    }
    ctx->pc = 0x407D34u;
    {
        const bool branch_taken_0x407d34 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x407D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407D34u;
        // 0x407d38: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407d34) {
            ctx->pc = 0x407D68u;
            goto label_407d68;
        }
    }
    ctx->pc = 0x407D3Cu;
label_407d3c:
    // 0x407d3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x407d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_407d40:
    // 0x407d40: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x407d40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_407d44:
    // 0x407d44: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x407d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_407d48:
    // 0x407d48: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x407d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_407d4c:
    // 0x407d4c: 0x40f809  jalr        $v0
label_407d50:
    if (ctx->pc == 0x407D50u) {
        ctx->pc = 0x407D54u;
        goto label_407d54;
    }
    ctx->pc = 0x407D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x407D54u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x407D4Cu, 0x407D54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x407D54u;
label_407d54:
    // 0x407d54: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x407d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_407d58:
    // 0x407d58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x407d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_407d5c:
    // 0x407d5c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x407d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_407d60:
    // 0x407d60: 0x60f809  jalr        $v1
label_407d64:
    if (ctx->pc == 0x407D64u) {
        ctx->pc = 0x407D68u;
        goto label_407d68;
    }
    ctx->pc = 0x407D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x407D68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x407D60u, 0x407D68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x407D68u;
label_407d68:
    // 0x407d68: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x407d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_407d6c:
    // 0x407d6c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x407d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_407d70:
    // 0x407d70: 0x8c43e98c  lw          $v1, -0x1674($v0)
    ctx->pc = 0x407d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961548)));
label_407d74:
    // 0x407d74: 0x60f809  jalr        $v1
label_407d78:
    if (ctx->pc == 0x407D78u) {
        ctx->pc = 0x407D7Cu;
        goto label_407d7c;
    }
    ctx->pc = 0x407D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x407D7Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x407D74u, 0x407D7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x407D7Cu;
label_407d7c:
    // 0x407d7c: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x407d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_407d80:
    // 0x407d80: 0xc0ffa5a  jal         func_3FE968
label_407d84:
    if (ctx->pc == 0x407D84u) {
        ctx->pc = 0x407D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407D80u;
        // 0x407d84: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407D88u;
        goto label_407d88;
    }
    ctx->pc = 0x407D80u;
    SET_GPR_U32(ctx, 31, 0x407D88u);
    ctx->pc = 0x407D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407D80u;
    // 0x407d84: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FE968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FE968u, 0x407D80u, 0x407D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407D88u;
label_407d88:
    // 0x407d88: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x407d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_407d8c:
    // 0x407d8c: 0xc10496a  jal         func_4125A8
label_407d90:
    if (ctx->pc == 0x407D90u) {
        ctx->pc = 0x407D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407D8Cu;
        // 0x407d90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407D94u;
        goto label_407d94;
    }
    ctx->pc = 0x407D8Cu;
    SET_GPR_U32(ctx, 31, 0x407D94u);
    ctx->pc = 0x407D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407D8Cu;
    // 0x407d90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4125A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125A8u, 0x407D8Cu, 0x407D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407D94u;
label_407d94:
    // 0x407d94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x407d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_407d98:
    // 0x407d98: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x407d98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_407d9c:
    // 0x407d9c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x407d9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_407da0:
    // 0x407da0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x407da0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_407da4:
    // 0x407da4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x407da4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_407da8:
    // 0x407da8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x407da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_407dac:
    // 0x407dac: 0x3e00008  jr          $ra
label_407db0:
    if (ctx->pc == 0x407DB0u) {
        ctx->pc = 0x407DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407DACu;
        // 0x407db0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407DB4u;
        goto label_407db4;
    }
    ctx->pc = 0x407DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x407DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407DACu;
        // 0x407db0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x407DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x407DB4u;
label_407db4:
    // 0x407db4: 0x0  nop
    ctx->pc = 0x407db4u;
    // NOP
    ctx->pc = 0x407db8u;
}
