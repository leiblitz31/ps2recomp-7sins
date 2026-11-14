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

// Function: sub_002399A0
// Address: 0x2399a0 - 0x239e70
void sub_002399A0_0x2399a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002399A0_0x2399a0");
#endif

    switch (ctx->pc) {
        case 0x2399a0u: goto label_2399a0;
        case 0x2399a4u: goto label_2399a4;
        case 0x2399a8u: goto label_2399a8;
        case 0x2399acu: goto label_2399ac;
        case 0x2399b0u: goto label_2399b0;
        case 0x2399b4u: goto label_2399b4;
        case 0x2399b8u: goto label_2399b8;
        case 0x2399bcu: goto label_2399bc;
        case 0x2399c0u: goto label_2399c0;
        case 0x2399c4u: goto label_2399c4;
        case 0x2399c8u: goto label_2399c8;
        case 0x2399ccu: goto label_2399cc;
        case 0x2399d0u: goto label_2399d0;
        case 0x2399d4u: goto label_2399d4;
        case 0x2399d8u: goto label_2399d8;
        case 0x2399dcu: goto label_2399dc;
        case 0x2399e0u: goto label_2399e0;
        case 0x2399e4u: goto label_2399e4;
        case 0x2399e8u: goto label_2399e8;
        case 0x2399ecu: goto label_2399ec;
        case 0x2399f0u: goto label_2399f0;
        case 0x2399f4u: goto label_2399f4;
        case 0x2399f8u: goto label_2399f8;
        case 0x2399fcu: goto label_2399fc;
        case 0x239a00u: goto label_239a00;
        case 0x239a04u: goto label_239a04;
        case 0x239a08u: goto label_239a08;
        case 0x239a0cu: goto label_239a0c;
        case 0x239a10u: goto label_239a10;
        case 0x239a14u: goto label_239a14;
        case 0x239a18u: goto label_239a18;
        case 0x239a1cu: goto label_239a1c;
        case 0x239a20u: goto label_239a20;
        case 0x239a24u: goto label_239a24;
        case 0x239a28u: goto label_239a28;
        case 0x239a2cu: goto label_239a2c;
        case 0x239a30u: goto label_239a30;
        case 0x239a34u: goto label_239a34;
        case 0x239a38u: goto label_239a38;
        case 0x239a3cu: goto label_239a3c;
        case 0x239a40u: goto label_239a40;
        case 0x239a44u: goto label_239a44;
        case 0x239a48u: goto label_239a48;
        case 0x239a4cu: goto label_239a4c;
        case 0x239a50u: goto label_239a50;
        case 0x239a54u: goto label_239a54;
        case 0x239a58u: goto label_239a58;
        case 0x239a5cu: goto label_239a5c;
        case 0x239a60u: goto label_239a60;
        case 0x239a64u: goto label_239a64;
        case 0x239a68u: goto label_239a68;
        case 0x239a6cu: goto label_239a6c;
        case 0x239a70u: goto label_239a70;
        case 0x239a74u: goto label_239a74;
        case 0x239a78u: goto label_239a78;
        case 0x239a7cu: goto label_239a7c;
        case 0x239a80u: goto label_239a80;
        case 0x239a84u: goto label_239a84;
        case 0x239a88u: goto label_239a88;
        case 0x239a8cu: goto label_239a8c;
        case 0x239a90u: goto label_239a90;
        case 0x239a94u: goto label_239a94;
        case 0x239a98u: goto label_239a98;
        case 0x239a9cu: goto label_239a9c;
        case 0x239aa0u: goto label_239aa0;
        case 0x239aa4u: goto label_239aa4;
        case 0x239aa8u: goto label_239aa8;
        case 0x239aacu: goto label_239aac;
        case 0x239ab0u: goto label_239ab0;
        case 0x239ab4u: goto label_239ab4;
        case 0x239ab8u: goto label_239ab8;
        case 0x239abcu: goto label_239abc;
        case 0x239ac0u: goto label_239ac0;
        case 0x239ac4u: goto label_239ac4;
        case 0x239ac8u: goto label_239ac8;
        case 0x239accu: goto label_239acc;
        case 0x239ad0u: goto label_239ad0;
        case 0x239ad4u: goto label_239ad4;
        case 0x239ad8u: goto label_239ad8;
        case 0x239adcu: goto label_239adc;
        case 0x239ae0u: goto label_239ae0;
        case 0x239ae4u: goto label_239ae4;
        case 0x239ae8u: goto label_239ae8;
        case 0x239aecu: goto label_239aec;
        case 0x239af0u: goto label_239af0;
        case 0x239af4u: goto label_239af4;
        case 0x239af8u: goto label_239af8;
        case 0x239afcu: goto label_239afc;
        case 0x239b00u: goto label_239b00;
        case 0x239b04u: goto label_239b04;
        case 0x239b08u: goto label_239b08;
        case 0x239b0cu: goto label_239b0c;
        case 0x239b10u: goto label_239b10;
        case 0x239b14u: goto label_239b14;
        case 0x239b18u: goto label_239b18;
        case 0x239b1cu: goto label_239b1c;
        case 0x239b20u: goto label_239b20;
        case 0x239b24u: goto label_239b24;
        case 0x239b28u: goto label_239b28;
        case 0x239b2cu: goto label_239b2c;
        case 0x239b30u: goto label_239b30;
        case 0x239b34u: goto label_239b34;
        case 0x239b38u: goto label_239b38;
        case 0x239b3cu: goto label_239b3c;
        case 0x239b40u: goto label_239b40;
        case 0x239b44u: goto label_239b44;
        case 0x239b48u: goto label_239b48;
        case 0x239b4cu: goto label_239b4c;
        case 0x239b50u: goto label_239b50;
        case 0x239b54u: goto label_239b54;
        case 0x239b58u: goto label_239b58;
        case 0x239b5cu: goto label_239b5c;
        case 0x239b60u: goto label_239b60;
        case 0x239b64u: goto label_239b64;
        case 0x239b68u: goto label_239b68;
        case 0x239b6cu: goto label_239b6c;
        case 0x239b70u: goto label_239b70;
        case 0x239b74u: goto label_239b74;
        case 0x239b78u: goto label_239b78;
        case 0x239b7cu: goto label_239b7c;
        case 0x239b80u: goto label_239b80;
        case 0x239b84u: goto label_239b84;
        case 0x239b88u: goto label_239b88;
        case 0x239b8cu: goto label_239b8c;
        case 0x239b90u: goto label_239b90;
        case 0x239b94u: goto label_239b94;
        case 0x239b98u: goto label_239b98;
        case 0x239b9cu: goto label_239b9c;
        case 0x239ba0u: goto label_239ba0;
        case 0x239ba4u: goto label_239ba4;
        case 0x239ba8u: goto label_239ba8;
        case 0x239bacu: goto label_239bac;
        case 0x239bb0u: goto label_239bb0;
        case 0x239bb4u: goto label_239bb4;
        case 0x239bb8u: goto label_239bb8;
        case 0x239bbcu: goto label_239bbc;
        case 0x239bc0u: goto label_239bc0;
        case 0x239bc4u: goto label_239bc4;
        case 0x239bc8u: goto label_239bc8;
        case 0x239bccu: goto label_239bcc;
        case 0x239bd0u: goto label_239bd0;
        case 0x239bd4u: goto label_239bd4;
        case 0x239bd8u: goto label_239bd8;
        case 0x239bdcu: goto label_239bdc;
        case 0x239be0u: goto label_239be0;
        case 0x239be4u: goto label_239be4;
        case 0x239be8u: goto label_239be8;
        case 0x239becu: goto label_239bec;
        case 0x239bf0u: goto label_239bf0;
        case 0x239bf4u: goto label_239bf4;
        case 0x239bf8u: goto label_239bf8;
        case 0x239bfcu: goto label_239bfc;
        case 0x239c00u: goto label_239c00;
        case 0x239c04u: goto label_239c04;
        case 0x239c08u: goto label_239c08;
        case 0x239c0cu: goto label_239c0c;
        case 0x239c10u: goto label_239c10;
        case 0x239c14u: goto label_239c14;
        case 0x239c18u: goto label_239c18;
        case 0x239c1cu: goto label_239c1c;
        case 0x239c20u: goto label_239c20;
        case 0x239c24u: goto label_239c24;
        case 0x239c28u: goto label_239c28;
        case 0x239c2cu: goto label_239c2c;
        case 0x239c30u: goto label_239c30;
        case 0x239c34u: goto label_239c34;
        case 0x239c38u: goto label_239c38;
        case 0x239c3cu: goto label_239c3c;
        case 0x239c40u: goto label_239c40;
        case 0x239c44u: goto label_239c44;
        case 0x239c48u: goto label_239c48;
        case 0x239c4cu: goto label_239c4c;
        case 0x239c50u: goto label_239c50;
        case 0x239c54u: goto label_239c54;
        case 0x239c58u: goto label_239c58;
        case 0x239c5cu: goto label_239c5c;
        case 0x239c60u: goto label_239c60;
        case 0x239c64u: goto label_239c64;
        case 0x239c68u: goto label_239c68;
        case 0x239c6cu: goto label_239c6c;
        case 0x239c70u: goto label_239c70;
        case 0x239c74u: goto label_239c74;
        case 0x239c78u: goto label_239c78;
        case 0x239c7cu: goto label_239c7c;
        case 0x239c80u: goto label_239c80;
        case 0x239c84u: goto label_239c84;
        case 0x239c88u: goto label_239c88;
        case 0x239c8cu: goto label_239c8c;
        case 0x239c90u: goto label_239c90;
        case 0x239c94u: goto label_239c94;
        case 0x239c98u: goto label_239c98;
        case 0x239c9cu: goto label_239c9c;
        case 0x239ca0u: goto label_239ca0;
        case 0x239ca4u: goto label_239ca4;
        case 0x239ca8u: goto label_239ca8;
        case 0x239cacu: goto label_239cac;
        case 0x239cb0u: goto label_239cb0;
        case 0x239cb4u: goto label_239cb4;
        case 0x239cb8u: goto label_239cb8;
        case 0x239cbcu: goto label_239cbc;
        case 0x239cc0u: goto label_239cc0;
        case 0x239cc4u: goto label_239cc4;
        case 0x239cc8u: goto label_239cc8;
        case 0x239cccu: goto label_239ccc;
        case 0x239cd0u: goto label_239cd0;
        case 0x239cd4u: goto label_239cd4;
        case 0x239cd8u: goto label_239cd8;
        case 0x239cdcu: goto label_239cdc;
        case 0x239ce0u: goto label_239ce0;
        case 0x239ce4u: goto label_239ce4;
        case 0x239ce8u: goto label_239ce8;
        case 0x239cecu: goto label_239cec;
        case 0x239cf0u: goto label_239cf0;
        case 0x239cf4u: goto label_239cf4;
        case 0x239cf8u: goto label_239cf8;
        case 0x239cfcu: goto label_239cfc;
        case 0x239d00u: goto label_239d00;
        case 0x239d04u: goto label_239d04;
        case 0x239d08u: goto label_239d08;
        case 0x239d0cu: goto label_239d0c;
        case 0x239d10u: goto label_239d10;
        case 0x239d14u: goto label_239d14;
        case 0x239d18u: goto label_239d18;
        case 0x239d1cu: goto label_239d1c;
        case 0x239d20u: goto label_239d20;
        case 0x239d24u: goto label_239d24;
        case 0x239d28u: goto label_239d28;
        case 0x239d2cu: goto label_239d2c;
        case 0x239d30u: goto label_239d30;
        case 0x239d34u: goto label_239d34;
        case 0x239d38u: goto label_239d38;
        case 0x239d3cu: goto label_239d3c;
        case 0x239d40u: goto label_239d40;
        case 0x239d44u: goto label_239d44;
        case 0x239d48u: goto label_239d48;
        case 0x239d4cu: goto label_239d4c;
        case 0x239d50u: goto label_239d50;
        case 0x239d54u: goto label_239d54;
        case 0x239d58u: goto label_239d58;
        case 0x239d5cu: goto label_239d5c;
        case 0x239d60u: goto label_239d60;
        case 0x239d64u: goto label_239d64;
        case 0x239d68u: goto label_239d68;
        case 0x239d6cu: goto label_239d6c;
        case 0x239d70u: goto label_239d70;
        case 0x239d74u: goto label_239d74;
        case 0x239d78u: goto label_239d78;
        case 0x239d7cu: goto label_239d7c;
        case 0x239d80u: goto label_239d80;
        case 0x239d84u: goto label_239d84;
        case 0x239d88u: goto label_239d88;
        case 0x239d8cu: goto label_239d8c;
        case 0x239d90u: goto label_239d90;
        case 0x239d94u: goto label_239d94;
        case 0x239d98u: goto label_239d98;
        case 0x239d9cu: goto label_239d9c;
        case 0x239da0u: goto label_239da0;
        case 0x239da4u: goto label_239da4;
        case 0x239da8u: goto label_239da8;
        case 0x239dacu: goto label_239dac;
        case 0x239db0u: goto label_239db0;
        case 0x239db4u: goto label_239db4;
        case 0x239db8u: goto label_239db8;
        case 0x239dbcu: goto label_239dbc;
        case 0x239dc0u: goto label_239dc0;
        case 0x239dc4u: goto label_239dc4;
        case 0x239dc8u: goto label_239dc8;
        case 0x239dccu: goto label_239dcc;
        case 0x239dd0u: goto label_239dd0;
        case 0x239dd4u: goto label_239dd4;
        case 0x239dd8u: goto label_239dd8;
        case 0x239ddcu: goto label_239ddc;
        case 0x239de0u: goto label_239de0;
        case 0x239de4u: goto label_239de4;
        case 0x239de8u: goto label_239de8;
        case 0x239decu: goto label_239dec;
        case 0x239df0u: goto label_239df0;
        case 0x239df4u: goto label_239df4;
        case 0x239df8u: goto label_239df8;
        case 0x239dfcu: goto label_239dfc;
        case 0x239e00u: goto label_239e00;
        case 0x239e04u: goto label_239e04;
        case 0x239e08u: goto label_239e08;
        case 0x239e0cu: goto label_239e0c;
        case 0x239e10u: goto label_239e10;
        case 0x239e14u: goto label_239e14;
        case 0x239e18u: goto label_239e18;
        case 0x239e1cu: goto label_239e1c;
        case 0x239e20u: goto label_239e20;
        case 0x239e24u: goto label_239e24;
        case 0x239e28u: goto label_239e28;
        case 0x239e2cu: goto label_239e2c;
        case 0x239e30u: goto label_239e30;
        case 0x239e34u: goto label_239e34;
        case 0x239e38u: goto label_239e38;
        case 0x239e3cu: goto label_239e3c;
        case 0x239e40u: goto label_239e40;
        case 0x239e44u: goto label_239e44;
        case 0x239e48u: goto label_239e48;
        case 0x239e4cu: goto label_239e4c;
        case 0x239e50u: goto label_239e50;
        case 0x239e54u: goto label_239e54;
        case 0x239e58u: goto label_239e58;
        case 0x239e5cu: goto label_239e5c;
        case 0x239e60u: goto label_239e60;
        case 0x239e64u: goto label_239e64;
        case 0x239e68u: goto label_239e68;
        case 0x239e6cu: goto label_239e6c;
        default: break;
    }

    ctx->pc = 0x2399a0u;

label_2399a0:
    // 0x2399a0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x2399a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_2399a4:
    // 0x2399a4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2399a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2399a8:
    // 0x2399a8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2399a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2399ac:
    // 0x2399ac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2399acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2399b0:
    // 0x2399b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2399b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2399b4:
    // 0x2399b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2399b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2399b8:
    // 0x2399b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2399b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2399bc:
    // 0x2399bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2399bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2399c0:
    // 0x2399c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2399c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2399c4:
    // 0x2399c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2399c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2399c8:
    // 0x2399c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2399c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2399cc:
    // 0x2399cc: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x2399ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
label_2399d0:
    // 0x2399d0: 0xafa50160  sw          $a1, 0x160($sp)
    ctx->pc = 0x2399d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 5));
label_2399d4:
    // 0x2399d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2399d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2399d8:
    // 0x2399d8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2399d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2399dc:
    // 0x2399dc: 0xc0514a8  jal         func_1452A0
label_2399e0:
    if (ctx->pc == 0x2399E0u) {
        ctx->pc = 0x2399E4u;
        goto label_2399e4;
    }
    ctx->pc = 0x2399DCu;
    SET_GPR_U32(ctx, 31, 0x2399E4u);
    ctx->pc = 0x1452A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452A0u, 0x2399DCu, 0x2399E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2399E4u;
label_2399e4:
    // 0x2399e4: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x2399e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_2399e8:
    // 0x2399e8: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x2399e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_2399ec:
    // 0x2399ec: 0xc11bd48  jal         func_46F520
label_2399f0:
    if (ctx->pc == 0x2399F0u) {
        ctx->pc = 0x2399F4u;
        goto label_2399f4;
    }
    ctx->pc = 0x2399ECu;
    SET_GPR_U32(ctx, 31, 0x2399F4u);
    ctx->pc = 0x46F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F520u, 0x2399ECu, 0x2399F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2399F4u;
label_2399f4:
    // 0x2399f4: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x2399f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
label_2399f8:
    // 0x2399f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2399f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2399fc:
    // 0x2399fc: 0x1000001a  b           . + 4 + (0x1A << 2)
label_239a00:
    if (ctx->pc == 0x239A00u) {
        ctx->pc = 0x239A04u;
        goto label_239a04;
    }
    ctx->pc = 0x2399FCu;
    {
        const bool branch_taken_0x2399fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2399fc) {
            ctx->pc = 0x239A68u;
            goto label_239a68;
        }
    }
    ctx->pc = 0x239A04u;
label_239a04:
    // 0x239a04: 0x27a40128  addiu       $a0, $sp, 0x128
    ctx->pc = 0x239a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_239a08:
    // 0x239a08: 0xc041b48  jal         func_106D20
label_239a0c:
    if (ctx->pc == 0x239A0Cu) {
        ctx->pc = 0x239A10u;
        goto label_239a10;
    }
    ctx->pc = 0x239A08u;
    SET_GPR_U32(ctx, 31, 0x239A10u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x239A08u, 0x239A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239A10u;
label_239a10:
    // 0x239a10: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x239a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_239a14:
    // 0x239a14: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x239a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_239a18:
    // 0x239a18: 0x27a50128  addiu       $a1, $sp, 0x128
    ctx->pc = 0x239a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_239a1c:
    // 0x239a1c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x239a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_239a20:
    // 0x239a20: 0xc11bd54  jal         func_46F550
label_239a24:
    if (ctx->pc == 0x239A24u) {
        ctx->pc = 0x239A28u;
        goto label_239a28;
    }
    ctx->pc = 0x239A20u;
    SET_GPR_U32(ctx, 31, 0x239A28u);
    ctx->pc = 0x46F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F550u, 0x239A20u, 0x239A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239A28u;
label_239a28:
    // 0x239a28: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_239a2c:
    if (ctx->pc == 0x239A2Cu) {
        ctx->pc = 0x239A30u;
        goto label_239a30;
    }
    ctx->pc = 0x239A28u;
    {
        const bool branch_taken_0x239a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239a28) {
            ctx->pc = 0x239A54u;
            goto label_239a54;
        }
    }
    ctx->pc = 0x239A30u;
label_239a30:
    // 0x239a30: 0x27a40128  addiu       $a0, $sp, 0x128
    ctx->pc = 0x239a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_239a34:
    // 0x239a34: 0xc08e3a8  jal         func_238EA0
label_239a38:
    if (ctx->pc == 0x239A38u) {
        ctx->pc = 0x239A3Cu;
        goto label_239a3c;
    }
    ctx->pc = 0x239A34u;
    SET_GPR_U32(ctx, 31, 0x239A3Cu);
    ctx->pc = 0x238EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238EA0u, 0x239A34u, 0x239A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239A3Cu;
label_239a3c:
    // 0x239a3c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_239a40:
    if (ctx->pc == 0x239A40u) {
        ctx->pc = 0x239A44u;
        goto label_239a44;
    }
    ctx->pc = 0x239A3Cu;
    {
        const bool branch_taken_0x239a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239a3c) {
            ctx->pc = 0x239A54u;
            goto label_239a54;
        }
    }
    ctx->pc = 0x239A44u;
label_239a44:
    // 0x239a44: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x239a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_239a48:
    // 0x239a48: 0x27a50128  addiu       $a1, $sp, 0x128
    ctx->pc = 0x239a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_239a4c:
    // 0x239a4c: 0xc08e79c  jal         func_239E70
label_239a50:
    if (ctx->pc == 0x239A50u) {
        ctx->pc = 0x239A54u;
        goto label_239a54;
    }
    ctx->pc = 0x239A4Cu;
    SET_GPR_U32(ctx, 31, 0x239A54u);
    ctx->pc = 0x239E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E70u, 0x239A4Cu, 0x239A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239A54u;
label_239a54:
    // 0x239a54: 0x27a40128  addiu       $a0, $sp, 0x128
    ctx->pc = 0x239a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_239a58:
    // 0x239a58: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x239a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_239a5c:
    // 0x239a5c: 0xc0402d4  jal         func_100B50
label_239a60:
    if (ctx->pc == 0x239A60u) {
        ctx->pc = 0x239A64u;
        goto label_239a64;
    }
    ctx->pc = 0x239A5Cu;
    SET_GPR_U32(ctx, 31, 0x239A64u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x239A5Cu, 0x239A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239A64u;
label_239a64:
    // 0x239a64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x239a64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_239a68:
    // 0x239a68: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x239a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_239a6c:
    // 0x239a6c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x239a6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_239a70:
    // 0x239a70: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_239a74:
    if (ctx->pc == 0x239A74u) {
        ctx->pc = 0x239A78u;
        goto label_239a78;
    }
    ctx->pc = 0x239A70u;
    {
        const bool branch_taken_0x239a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239a70) {
            ctx->pc = 0x239A04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239a04;
        }
    }
    ctx->pc = 0x239A78u;
label_239a78:
    // 0x239a78: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x239a78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239a7c:
    // 0x239a7c: 0x1000000b  b           . + 4 + (0xB << 2)
label_239a80:
    if (ctx->pc == 0x239A80u) {
        ctx->pc = 0x239A84u;
        goto label_239a84;
    }
    ctx->pc = 0x239A7Cu;
    {
        const bool branch_taken_0x239a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239a7c) {
            ctx->pc = 0x239AACu;
            goto label_239aac;
        }
    }
    ctx->pc = 0x239A84u;
label_239a84:
    // 0x239a84: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x239a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_239a88:
    // 0x239a88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x239a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_239a8c:
    // 0x239a8c: 0xc042ff0  jal         func_10BFC0
label_239a90:
    if (ctx->pc == 0x239A90u) {
        ctx->pc = 0x239A94u;
        goto label_239a94;
    }
    ctx->pc = 0x239A8Cu;
    SET_GPR_U32(ctx, 31, 0x239A94u);
    ctx->pc = 0x10BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BFC0u, 0x239A8Cu, 0x239A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239A94u;
label_239a94:
    // 0x239a94: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x239a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_239a98:
    // 0x239a98: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x239a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_239a9c:
    // 0x239a9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x239a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239aa0:
    // 0x239aa0: 0xc11bd34  jal         func_46F4D0
label_239aa4:
    if (ctx->pc == 0x239AA4u) {
        ctx->pc = 0x239AA8u;
        goto label_239aa8;
    }
    ctx->pc = 0x239AA0u;
    SET_GPR_U32(ctx, 31, 0x239AA8u);
    ctx->pc = 0x46F4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F4D0u, 0x239AA0u, 0x239AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239AA8u;
label_239aa8:
    // 0x239aa8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x239aa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_239aac:
    // 0x239aac: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x239aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_239ab0:
    // 0x239ab0: 0xc043104  jal         func_10C410
label_239ab4:
    if (ctx->pc == 0x239AB4u) {
        ctx->pc = 0x239AB8u;
        goto label_239ab8;
    }
    ctx->pc = 0x239AB0u;
    SET_GPR_U32(ctx, 31, 0x239AB8u);
    ctx->pc = 0x10C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C410u, 0x239AB0u, 0x239AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239AB8u;
label_239ab8:
    // 0x239ab8: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x239ab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_239abc:
    // 0x239abc: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_239ac0:
    if (ctx->pc == 0x239AC0u) {
        ctx->pc = 0x239AC4u;
        goto label_239ac4;
    }
    ctx->pc = 0x239ABCu;
    {
        const bool branch_taken_0x239abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239abc) {
            ctx->pc = 0x239A84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239a84;
        }
    }
    ctx->pc = 0x239AC4u;
label_239ac4:
    // 0x239ac4: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x239ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_239ac8:
    // 0x239ac8: 0x14020007  bne         $zero, $v0, . + 4 + (0x7 << 2)
label_239acc:
    if (ctx->pc == 0x239ACCu) {
        ctx->pc = 0x239AD0u;
        goto label_239ad0;
    }
    ctx->pc = 0x239AC8u;
    {
        const bool branch_taken_0x239ac8 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x239ac8) {
            ctx->pc = 0x239AE8u;
            goto label_239ae8;
        }
    }
    ctx->pc = 0x239AD0u;
label_239ad0:
    // 0x239ad0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x239ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_239ad4:
    // 0x239ad4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x239ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_239ad8:
    // 0x239ad8: 0xc051428  jal         func_1450A0
label_239adc:
    if (ctx->pc == 0x239ADCu) {
        ctx->pc = 0x239AE0u;
        goto label_239ae0;
    }
    ctx->pc = 0x239AD8u;
    SET_GPR_U32(ctx, 31, 0x239AE0u);
    ctx->pc = 0x1450A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1450A0u, 0x239AD8u, 0x239AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239AE0u;
label_239ae0:
    // 0x239ae0: 0x100000d5  b           . + 4 + (0xD5 << 2)
label_239ae4:
    if (ctx->pc == 0x239AE4u) {
        ctx->pc = 0x239AE8u;
        goto label_239ae8;
    }
    ctx->pc = 0x239AE0u;
    {
        const bool branch_taken_0x239ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239ae0) {
            ctx->pc = 0x239E38u;
            goto label_239e38;
        }
    }
    ctx->pc = 0x239AE8u;
label_239ae8:
    // 0x239ae8: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x239ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_239aec:
    // 0x239aec: 0xc041b48  jal         func_106D20
label_239af0:
    if (ctx->pc == 0x239AF0u) {
        ctx->pc = 0x239AF4u;
        goto label_239af4;
    }
    ctx->pc = 0x239AECu;
    SET_GPR_U32(ctx, 31, 0x239AF4u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x239AECu, 0x239AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239AF4u;
label_239af4:
    // 0x239af4: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x239af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_239af8:
    // 0x239af8: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x239af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_239afc:
    // 0x239afc: 0xc040304  jal         func_100C10
label_239b00:
    if (ctx->pc == 0x239B00u) {
        ctx->pc = 0x239B04u;
        goto label_239b04;
    }
    ctx->pc = 0x239AFCu;
    SET_GPR_U32(ctx, 31, 0x239B04u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x239AFCu, 0x239B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239B04u;
label_239b04:
    // 0x239b04: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x239b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_239b08:
    // 0x239b08: 0x27a500e8  addiu       $a1, $sp, 0xE8
    ctx->pc = 0x239b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_239b0c:
    // 0x239b0c: 0xc1190f4  jal         func_4643D0
label_239b10:
    if (ctx->pc == 0x239B10u) {
        ctx->pc = 0x239B14u;
        goto label_239b14;
    }
    ctx->pc = 0x239B0Cu;
    SET_GPR_U32(ctx, 31, 0x239B14u);
    ctx->pc = 0x4643D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4643D0u, 0x239B0Cu, 0x239B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239B14u;
label_239b14:
    // 0x239b14: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x239b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_239b18:
    // 0x239b18: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x239b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_239b1c:
    // 0x239b1c: 0xc0402d4  jal         func_100B50
label_239b20:
    if (ctx->pc == 0x239B20u) {
        ctx->pc = 0x239B24u;
        goto label_239b24;
    }
    ctx->pc = 0x239B1Cu;
    SET_GPR_U32(ctx, 31, 0x239B24u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x239B1Cu, 0x239B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239B24u;
label_239b24:
    // 0x239b24: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x239b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_239b28:
    // 0x239b28: 0x27859d84  addiu       $a1, $gp, -0x627C
    ctx->pc = 0x239b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942084));
label_239b2c:
    // 0x239b2c: 0xc040304  jal         func_100C10
label_239b30:
    if (ctx->pc == 0x239B30u) {
        ctx->pc = 0x239B34u;
        goto label_239b34;
    }
    ctx->pc = 0x239B2Cu;
    SET_GPR_U32(ctx, 31, 0x239B34u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x239B2Cu, 0x239B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239B34u;
label_239b34:
    // 0x239b34: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x239b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_239b38:
    // 0x239b38: 0x27a50118  addiu       $a1, $sp, 0x118
    ctx->pc = 0x239b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_239b3c:
    // 0x239b3c: 0xc048c50  jal         func_123140
label_239b40:
    if (ctx->pc == 0x239B40u) {
        ctx->pc = 0x239B44u;
        goto label_239b44;
    }
    ctx->pc = 0x239B3Cu;
    SET_GPR_U32(ctx, 31, 0x239B44u);
    ctx->pc = 0x123140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123140u, 0x239B3Cu, 0x239B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239B44u;
label_239b44:
    // 0x239b44: 0xafa00144  sw          $zero, 0x144($sp)
    ctx->pc = 0x239b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 0));
label_239b48:
    // 0x239b48: 0xc090864  jal         func_242190
label_239b4c:
    if (ctx->pc == 0x239B4Cu) {
        ctx->pc = 0x239B50u;
        goto label_239b50;
    }
    ctx->pc = 0x239B48u;
    SET_GPR_U32(ctx, 31, 0x239B50u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x239B48u, 0x239B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239B50u;
label_239b50:
    // 0x239b50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x239b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239b54:
    // 0x239b54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x239b54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_239b58:
    // 0x239b58: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x239b58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_239b5c:
    // 0x239b5c: 0x320f809  jalr        $t9
label_239b60:
    if (ctx->pc == 0x239B60u) {
        ctx->pc = 0x239B64u;
        goto label_239b64;
    }
    ctx->pc = 0x239B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x239B64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239B5Cu, 0x239B64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x239B64u;
label_239b64:
    // 0x239b64: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x239b64u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239b68:
    // 0x239b68: 0x13c00006  beqz        $fp, . + 4 + (0x6 << 2)
label_239b6c:
    if (ctx->pc == 0x239B6Cu) {
        ctx->pc = 0x239B70u;
        goto label_239b70;
    }
    ctx->pc = 0x239B68u;
    {
        const bool branch_taken_0x239b68 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x239b68) {
            ctx->pc = 0x239B84u;
            goto label_239b84;
        }
    }
    ctx->pc = 0x239B70u;
label_239b70:
    // 0x239b70: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x239b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_239b74:
    // 0x239b74: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x239b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_239b78:
    // 0x239b78: 0xc085538  jal         func_2154E0
label_239b7c:
    if (ctx->pc == 0x239B7Cu) {
        ctx->pc = 0x239B80u;
        goto label_239b80;
    }
    ctx->pc = 0x239B78u;
    SET_GPR_U32(ctx, 31, 0x239B80u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x239B78u, 0x239B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239B80u;
label_239b80:
    // 0x239b80: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x239b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
label_239b84:
    // 0x239b84: 0xc0434e0  jal         func_10D380
label_239b88:
    if (ctx->pc == 0x239B88u) {
        ctx->pc = 0x239B8Cu;
        goto label_239b8c;
    }
    ctx->pc = 0x239B84u;
    SET_GPR_U32(ctx, 31, 0x239B8Cu);
    ctx->pc = 0x10D380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D380u, 0x239B84u, 0x239B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239B8Cu;
label_239b8c:
    // 0x239b8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x239b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239b90:
    // 0x239b90: 0xc0434d8  jal         func_10D360
label_239b94:
    if (ctx->pc == 0x239B94u) {
        ctx->pc = 0x239B98u;
        goto label_239b98;
    }
    ctx->pc = 0x239B90u;
    SET_GPR_U32(ctx, 31, 0x239B98u);
    ctx->pc = 0x10D360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D360u, 0x239B90u, 0x239B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239B98u;
label_239b98:
    // 0x239b98: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x239b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_239b9c:
    // 0x239b9c: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x239b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_239ba0:
    // 0x239ba0: 0xc041b38  jal         func_106CE0
label_239ba4:
    if (ctx->pc == 0x239BA4u) {
        ctx->pc = 0x239BA8u;
        goto label_239ba8;
    }
    ctx->pc = 0x239BA0u;
    SET_GPR_U32(ctx, 31, 0x239BA8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x239BA0u, 0x239BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239BA8u;
label_239ba8:
    // 0x239ba8: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x239ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_239bac:
    // 0x239bac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x239bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239bb0:
    // 0x239bb0: 0xc044edc  jal         func_113B70
label_239bb4:
    if (ctx->pc == 0x239BB4u) {
        ctx->pc = 0x239BB8u;
        goto label_239bb8;
    }
    ctx->pc = 0x239BB0u;
    SET_GPR_U32(ctx, 31, 0x239BB8u);
    ctx->pc = 0x113B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B70u, 0x239BB0u, 0x239BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239BB8u;
label_239bb8:
    // 0x239bb8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x239bb8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239bbc:
    // 0x239bbc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x239bbcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239bc0:
    // 0x239bc0: 0x10170091  beq         $zero, $s7, . + 4 + (0x91 << 2)
label_239bc4:
    if (ctx->pc == 0x239BC4u) {
        ctx->pc = 0x239BC8u;
        goto label_239bc8;
    }
    ctx->pc = 0x239BC0u;
    {
        const bool branch_taken_0x239bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 23));
        if (branch_taken_0x239bc0) {
            ctx->pc = 0x239E08u;
            goto label_239e08;
        }
    }
    ctx->pc = 0x239BC8u;
label_239bc8:
    // 0x239bc8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x239bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_239bcc:
    // 0x239bcc: 0xc0457e8  jal         func_115FA0
label_239bd0:
    if (ctx->pc == 0x239BD0u) {
        ctx->pc = 0x239BD4u;
        goto label_239bd4;
    }
    ctx->pc = 0x239BCCu;
    SET_GPR_U32(ctx, 31, 0x239BD4u);
    ctx->pc = 0x115FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FA0u, 0x239BCCu, 0x239BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239BD4u;
label_239bd4:
    // 0x239bd4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x239bd4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239bd8:
    // 0x239bd8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x239bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_239bdc:
    // 0x239bdc: 0x24050416  addiu       $a1, $zero, 0x416
    ctx->pc = 0x239bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1046));
label_239be0:
    // 0x239be0: 0x27869d88  addiu       $a2, $gp, -0x6278
    ctx->pc = 0x239be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942088));
label_239be4:
    // 0x239be4: 0xc041a50  jal         func_106940
label_239be8:
    if (ctx->pc == 0x239BE8u) {
        ctx->pc = 0x239BECu;
        goto label_239bec;
    }
    ctx->pc = 0x239BE4u;
    SET_GPR_U32(ctx, 31, 0x239BECu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x239BE4u, 0x239BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239BECu;
label_239bec:
    // 0x239bec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x239becu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239bf0:
    // 0x239bf0: 0x12600085  beqz        $s3, . + 4 + (0x85 << 2)
label_239bf4:
    if (ctx->pc == 0x239BF4u) {
        ctx->pc = 0x239BF8u;
        goto label_239bf8;
    }
    ctx->pc = 0x239BF0u;
    {
        const bool branch_taken_0x239bf0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x239bf0) {
            ctx->pc = 0x239E08u;
            goto label_239e08;
        }
    }
    ctx->pc = 0x239BF8u;
label_239bf8:
    // 0x239bf8: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x239bf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_239bfc:
    // 0x239bfc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x239bfcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239c00:
    // 0x239c00: 0x10000009  b           . + 4 + (0x9 << 2)
label_239c04:
    if (ctx->pc == 0x239C04u) {
        ctx->pc = 0x239C08u;
        goto label_239c08;
    }
    ctx->pc = 0x239C00u;
    {
        const bool branch_taken_0x239c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239c00) {
            ctx->pc = 0x239C28u;
            goto label_239c28;
        }
    }
    ctx->pc = 0x239C08u;
label_239c08:
    // 0x239c08: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x239c08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_239c0c:
    // 0x239c0c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x239c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_239c10:
    // 0x239c10: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x239c10u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_239c14:
    // 0x239c14: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x239c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_239c18:
    // 0x239c18: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_239c1c:
    if (ctx->pc == 0x239C1Cu) {
        ctx->pc = 0x239C20u;
        goto label_239c20;
    }
    ctx->pc = 0x239C18u;
    {
        const bool branch_taken_0x239c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x239c18) {
            ctx->pc = 0x239C24u;
            goto label_239c24;
        }
    }
    ctx->pc = 0x239C20u;
label_239c20:
    // 0x239c20: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x239c20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_239c24:
    // 0x239c24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x239c24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_239c28:
    // 0x239c28: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x239c28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_239c2c:
    // 0x239c2c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x239c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_239c30:
    // 0x239c30: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x239c30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_239c34:
    // 0x239c34: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_239c38:
    if (ctx->pc == 0x239C38u) {
        ctx->pc = 0x239C3Cu;
        goto label_239c3c;
    }
    ctx->pc = 0x239C34u;
    {
        const bool branch_taken_0x239c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239c34) {
            ctx->pc = 0x239C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239c08;
        }
    }
    ctx->pc = 0x239C3Cu;
label_239c3c:
    // 0x239c3c: 0xafa0013c  sw          $zero, 0x13C($sp)
    ctx->pc = 0x239c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
label_239c40:
    // 0x239c40: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x239c40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239c44:
    // 0x239c44: 0x10000069  b           . + 4 + (0x69 << 2)
label_239c48:
    if (ctx->pc == 0x239C48u) {
        ctx->pc = 0x239C4Cu;
        goto label_239c4c;
    }
    ctx->pc = 0x239C44u;
    {
        const bool branch_taken_0x239c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239c44) {
            ctx->pc = 0x239DECu;
            goto label_239dec;
        }
    }
    ctx->pc = 0x239C4Cu;
label_239c4c:
    // 0x239c4c: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x239c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_239c50:
    // 0x239c50: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x239c50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_239c54:
    // 0x239c54: 0x24a5bc08  addiu       $a1, $a1, -0x43F8
    ctx->pc = 0x239c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949896));
label_239c58:
    // 0x239c58: 0xc040304  jal         func_100C10
label_239c5c:
    if (ctx->pc == 0x239C5Cu) {
        ctx->pc = 0x239C60u;
        goto label_239c60;
    }
    ctx->pc = 0x239C58u;
    SET_GPR_U32(ctx, 31, 0x239C60u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x239C58u, 0x239C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239C60u;
label_239c60:
    // 0x239c60: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x239c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_239c64:
    // 0x239c64: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x239c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_239c68:
    // 0x239c68: 0xc0424e8  jal         func_1093A0
label_239c6c:
    if (ctx->pc == 0x239C6Cu) {
        ctx->pc = 0x239C70u;
        goto label_239c70;
    }
    ctx->pc = 0x239C68u;
    SET_GPR_U32(ctx, 31, 0x239C70u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x239C68u, 0x239C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239C70u;
label_239c70:
    // 0x239c70: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x239c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_239c74:
    // 0x239c74: 0x27859d8c  addiu       $a1, $gp, -0x6274
    ctx->pc = 0x239c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942092));
label_239c78:
    // 0x239c78: 0xc0424e8  jal         func_1093A0
label_239c7c:
    if (ctx->pc == 0x239C7Cu) {
        ctx->pc = 0x239C80u;
        goto label_239c80;
    }
    ctx->pc = 0x239C78u;
    SET_GPR_U32(ctx, 31, 0x239C80u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x239C78u, 0x239C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239C80u;
label_239c80:
    // 0x239c80: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x239c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_239c84:
    // 0x239c84: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x239c84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_239c88:
    // 0x239c88: 0x24a5bb50  addiu       $a1, $a1, -0x44B0
    ctx->pc = 0x239c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949712));
label_239c8c:
    // 0x239c8c: 0xc0424e8  jal         func_1093A0
label_239c90:
    if (ctx->pc == 0x239C90u) {
        ctx->pc = 0x239C94u;
        goto label_239c94;
    }
    ctx->pc = 0x239C8Cu;
    SET_GPR_U32(ctx, 31, 0x239C94u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x239C8Cu, 0x239C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239C94u;
label_239c94:
    // 0x239c94: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x239c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_239c98:
    // 0x239c98: 0xc041b38  jal         func_106CE0
label_239c9c:
    if (ctx->pc == 0x239C9Cu) {
        ctx->pc = 0x239CA0u;
        goto label_239ca0;
    }
    ctx->pc = 0x239C98u;
    SET_GPR_U32(ctx, 31, 0x239CA0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x239C98u, 0x239CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239CA0u;
label_239ca0:
    // 0x239ca0: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x239ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_239ca4:
    // 0x239ca4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x239ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239ca8:
    // 0x239ca8: 0xc040304  jal         func_100C10
label_239cac:
    if (ctx->pc == 0x239CACu) {
        ctx->pc = 0x239CB0u;
        goto label_239cb0;
    }
    ctx->pc = 0x239CA8u;
    SET_GPR_U32(ctx, 31, 0x239CB0u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x239CA8u, 0x239CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239CB0u;
label_239cb0:
    // 0x239cb0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x239cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_239cb4:
    // 0x239cb4: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x239cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_239cb8:
    // 0x239cb8: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x239cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_239cbc:
    // 0x239cbc: 0xc11bcf4  jal         func_46F3D0
label_239cc0:
    if (ctx->pc == 0x239CC0u) {
        ctx->pc = 0x239CC4u;
        goto label_239cc4;
    }
    ctx->pc = 0x239CBCu;
    SET_GPR_U32(ctx, 31, 0x239CC4u);
    ctx->pc = 0x46F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F3D0u, 0x239CBCu, 0x239CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239CC4u;
label_239cc4:
    // 0x239cc4: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x239cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_239cc8:
    // 0x239cc8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x239cc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_239ccc:
    // 0x239ccc: 0xa3a2014f  sb          $v0, 0x14F($sp)
    ctx->pc = 0x239cccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 335), (uint8_t)GPR_U32(ctx, 2));
label_239cd0:
    // 0x239cd0: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x239cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_239cd4:
    // 0x239cd4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x239cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_239cd8:
    // 0x239cd8: 0xc0402d4  jal         func_100B50
label_239cdc:
    if (ctx->pc == 0x239CDCu) {
        ctx->pc = 0x239CE0u;
        goto label_239ce0;
    }
    ctx->pc = 0x239CD8u;
    SET_GPR_U32(ctx, 31, 0x239CE0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x239CD8u, 0x239CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239CE0u;
label_239ce0:
    // 0x239ce0: 0x93a2014f  lbu         $v0, 0x14F($sp)
    ctx->pc = 0x239ce0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 335)));
label_239ce4:
    // 0x239ce4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x239ce4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_239ce8:
    // 0x239ce8: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x239ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_239cec:
    // 0x239cec: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_239cf0:
    if (ctx->pc == 0x239CF0u) {
        ctx->pc = 0x239CF4u;
        goto label_239cf4;
    }
    ctx->pc = 0x239CECu;
    {
        const bool branch_taken_0x239cec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x239cec) {
            ctx->pc = 0x239D08u;
            goto label_239d08;
        }
    }
    ctx->pc = 0x239CF4u;
label_239cf4:
    // 0x239cf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_239cf8:
    // 0x239cf8: 0x0  nop
    ctx->pc = 0x239cf8u;
    // NOP
label_239cfc:
    // 0x239cfc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x239cfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_239d00:
    // 0x239d00: 0x10000008  b           . + 4 + (0x8 << 2)
label_239d04:
    if (ctx->pc == 0x239D04u) {
        ctx->pc = 0x239D08u;
        goto label_239d08;
    }
    ctx->pc = 0x239D00u;
    {
        const bool branch_taken_0x239d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239d00) {
            ctx->pc = 0x239D24u;
            goto label_239d24;
        }
    }
    ctx->pc = 0x239D08u;
label_239d08:
    // 0x239d08: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x239d08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_239d0c:
    // 0x239d0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x239d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_239d10:
    // 0x239d10: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x239d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_239d14:
    // 0x239d14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x239d14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_239d18:
    // 0x239d18: 0x0  nop
    ctx->pc = 0x239d18u;
    // NOP
label_239d1c:
    // 0x239d1c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x239d1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_239d20:
    // 0x239d20: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x239d20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_239d24:
    // 0x239d24: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x239d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
label_239d28:
    // 0x239d28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_239d2c:
    // 0x239d2c: 0x0  nop
    ctx->pc = 0x239d2cu;
    // NOP
label_239d30:
    // 0x239d30: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x239d30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_239d34:
    // 0x239d34: 0x6a00006  bltz        $s5, . + 4 + (0x6 << 2)
label_239d38:
    if (ctx->pc == 0x239D38u) {
        ctx->pc = 0x239D3Cu;
        goto label_239d3c;
    }
    ctx->pc = 0x239D34u;
    {
        const bool branch_taken_0x239d34 = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x239d34) {
            ctx->pc = 0x239D50u;
            goto label_239d50;
        }
    }
    ctx->pc = 0x239D3Cu;
label_239d3c:
    // 0x239d3c: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x239d3cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_239d40:
    // 0x239d40: 0x0  nop
    ctx->pc = 0x239d40u;
    // NOP
label_239d44:
    // 0x239d44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x239d44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_239d48:
    // 0x239d48: 0x10000008  b           . + 4 + (0x8 << 2)
label_239d4c:
    if (ctx->pc == 0x239D4Cu) {
        ctx->pc = 0x239D50u;
        goto label_239d50;
    }
    ctx->pc = 0x239D48u;
    {
        const bool branch_taken_0x239d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239d48) {
            ctx->pc = 0x239D6Cu;
            goto label_239d6c;
        }
    }
    ctx->pc = 0x239D50u;
label_239d50:
    // 0x239d50: 0x151842  srl         $v1, $s5, 1
    ctx->pc = 0x239d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
label_239d54:
    // 0x239d54: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x239d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_239d58:
    // 0x239d58: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x239d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_239d5c:
    // 0x239d5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x239d5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_239d60:
    // 0x239d60: 0x0  nop
    ctx->pc = 0x239d60u;
    // NOP
label_239d64:
    // 0x239d64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x239d64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_239d68:
    // 0x239d68: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x239d68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_239d6c:
    // 0x239d6c: 0x0  nop
    ctx->pc = 0x239d6cu;
    // NOP
label_239d70:
    // 0x239d70: 0x0  nop
    ctx->pc = 0x239d70u;
    // NOP
label_239d74:
    // 0x239d74: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x239d74u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_239d78:
    // 0x239d78: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x239d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
label_239d7c:
    // 0x239d7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_239d80:
    // 0x239d80: 0x0  nop
    ctx->pc = 0x239d80u;
    // NOP
label_239d84:
    // 0x239d84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x239d84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_239d88:
    // 0x239d88: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x239d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_239d8c:
    // 0x239d8c: 0xc7a10138  lwc1        $f1, 0x138($sp)
    ctx->pc = 0x239d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_239d90:
    // 0x239d90: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x239d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_239d94:
    // 0x239d94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_239d98:
    // 0x239d98: 0x0  nop
    ctx->pc = 0x239d98u;
    // NOP
label_239d9c:
    // 0x239d9c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x239d9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_239da0:
    // 0x239da0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_239da4:
    if (ctx->pc == 0x239DA4u) {
        ctx->pc = 0x239DA8u;
        goto label_239da8;
    }
    ctx->pc = 0x239DA0u;
    {
        const bool branch_taken_0x239da0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x239da0) {
            ctx->pc = 0x239DB8u;
            goto label_239db8;
        }
    }
    ctx->pc = 0x239DA8u;
label_239da8:
    // 0x239da8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x239da8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_239dac:
    // 0x239dac: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x239dacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_239db0:
    // 0x239db0: 0x10000006  b           . + 4 + (0x6 << 2)
label_239db4:
    if (ctx->pc == 0x239DB4u) {
        ctx->pc = 0x239DB8u;
        goto label_239db8;
    }
    ctx->pc = 0x239DB0u;
    {
        const bool branch_taken_0x239db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239db0) {
            ctx->pc = 0x239DCCu;
            goto label_239dcc;
        }
    }
    ctx->pc = 0x239DB8u;
label_239db8:
    // 0x239db8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x239db8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_239dbc:
    // 0x239dbc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x239dbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_239dc0:
    // 0x239dc0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x239dc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_239dc4:
    // 0x239dc4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x239dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_239dc8:
    // 0x239dc8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x239dc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_239dcc:
    // 0x239dcc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x239dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_239dd0:
    // 0x239dd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x239dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239dd4:
    // 0x239dd4: 0xc08d48c  jal         func_235230
label_239dd8:
    if (ctx->pc == 0x239DD8u) {
        ctx->pc = 0x239DDCu;
        goto label_239ddc;
    }
    ctx->pc = 0x239DD4u;
    SET_GPR_U32(ctx, 31, 0x239DDCu);
    ctx->pc = 0x235230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235230u, 0x239DD4u, 0x239DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239DDCu;
label_239ddc:
    // 0x239ddc: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x239ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_239de0:
    // 0x239de0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x239de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_239de4:
    // 0x239de4: 0xc0402d4  jal         func_100B50
label_239de8:
    if (ctx->pc == 0x239DE8u) {
        ctx->pc = 0x239DECu;
        goto label_239dec;
    }
    ctx->pc = 0x239DE4u;
    SET_GPR_U32(ctx, 31, 0x239DECu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x239DE4u, 0x239DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239DECu;
label_239dec:
    // 0x239dec: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x239decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_239df0:
    // 0x239df0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x239df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_239df4:
    // 0x239df4: 0x27a6013c  addiu       $a2, $sp, 0x13C
    ctx->pc = 0x239df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_239df8:
    // 0x239df8: 0xc0b9624  jal         func_2E5890
label_239dfc:
    if (ctx->pc == 0x239DFCu) {
        ctx->pc = 0x239E00u;
        goto label_239e00;
    }
    ctx->pc = 0x239DF8u;
    SET_GPR_U32(ctx, 31, 0x239E00u);
    ctx->pc = 0x2E5890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5890u, 0x239DF8u, 0x239E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239E00u;
label_239e00:
    // 0x239e00: 0x1440ff92  bnez        $v0, . + 4 + (-0x6E << 2)
label_239e04:
    if (ctx->pc == 0x239E04u) {
        ctx->pc = 0x239E08u;
        goto label_239e08;
    }
    ctx->pc = 0x239E00u;
    {
        const bool branch_taken_0x239e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239e00) {
            ctx->pc = 0x239C4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239c4c;
        }
    }
    ctx->pc = 0x239E08u;
label_239e08:
    // 0x239e08: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x239e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_239e0c:
    // 0x239e0c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x239e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_239e10:
    // 0x239e10: 0xc0402d4  jal         func_100B50
label_239e14:
    if (ctx->pc == 0x239E14u) {
        ctx->pc = 0x239E18u;
        goto label_239e18;
    }
    ctx->pc = 0x239E10u;
    SET_GPR_U32(ctx, 31, 0x239E18u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x239E10u, 0x239E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239E18u;
label_239e18:
    // 0x239e18: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x239e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_239e1c:
    // 0x239e1c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x239e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_239e20:
    // 0x239e20: 0xc0402d4  jal         func_100B50
label_239e24:
    if (ctx->pc == 0x239E24u) {
        ctx->pc = 0x239E28u;
        goto label_239e28;
    }
    ctx->pc = 0x239E20u;
    SET_GPR_U32(ctx, 31, 0x239E28u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x239E20u, 0x239E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239E28u;
label_239e28:
    // 0x239e28: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x239e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_239e2c:
    // 0x239e2c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x239e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_239e30:
    // 0x239e30: 0xc051428  jal         func_1450A0
label_239e34:
    if (ctx->pc == 0x239E34u) {
        ctx->pc = 0x239E38u;
        goto label_239e38;
    }
    ctx->pc = 0x239E30u;
    SET_GPR_U32(ctx, 31, 0x239E38u);
    ctx->pc = 0x1450A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1450A0u, 0x239E30u, 0x239E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239E38u;
label_239e38:
    // 0x239e38: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x239e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_239e3c:
    // 0x239e3c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x239e3cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_239e40:
    // 0x239e40: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x239e40u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_239e44:
    // 0x239e44: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x239e44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_239e48:
    // 0x239e48: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x239e48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_239e4c:
    // 0x239e4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x239e4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_239e50:
    // 0x239e50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x239e50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_239e54:
    // 0x239e54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x239e54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_239e58:
    // 0x239e58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x239e58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_239e5c:
    // 0x239e5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x239e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_239e60:
    // 0x239e60: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x239e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_239e64:
    // 0x239e64: 0x3e00008  jr          $ra
label_239e68:
    if (ctx->pc == 0x239E68u) {
        ctx->pc = 0x239E6Cu;
        goto label_239e6c;
    }
    ctx->pc = 0x239E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239E6Cu;
label_239e6c:
    // 0x239e6c: 0x0  nop
    ctx->pc = 0x239e6cu;
    // NOP
    ctx->pc = 0x239e70u;
}
