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

// Function: sub_00484A40
// Address: 0x484a40 - 0x484d30
void sub_00484A40_0x484a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00484A40_0x484a40");
#endif

    switch (ctx->pc) {
        case 0x484a40u: goto label_484a40;
        case 0x484a44u: goto label_484a44;
        case 0x484a48u: goto label_484a48;
        case 0x484a4cu: goto label_484a4c;
        case 0x484a50u: goto label_484a50;
        case 0x484a54u: goto label_484a54;
        case 0x484a58u: goto label_484a58;
        case 0x484a5cu: goto label_484a5c;
        case 0x484a60u: goto label_484a60;
        case 0x484a64u: goto label_484a64;
        case 0x484a68u: goto label_484a68;
        case 0x484a6cu: goto label_484a6c;
        case 0x484a70u: goto label_484a70;
        case 0x484a74u: goto label_484a74;
        case 0x484a78u: goto label_484a78;
        case 0x484a7cu: goto label_484a7c;
        case 0x484a80u: goto label_484a80;
        case 0x484a84u: goto label_484a84;
        case 0x484a88u: goto label_484a88;
        case 0x484a8cu: goto label_484a8c;
        case 0x484a90u: goto label_484a90;
        case 0x484a94u: goto label_484a94;
        case 0x484a98u: goto label_484a98;
        case 0x484a9cu: goto label_484a9c;
        case 0x484aa0u: goto label_484aa0;
        case 0x484aa4u: goto label_484aa4;
        case 0x484aa8u: goto label_484aa8;
        case 0x484aacu: goto label_484aac;
        case 0x484ab0u: goto label_484ab0;
        case 0x484ab4u: goto label_484ab4;
        case 0x484ab8u: goto label_484ab8;
        case 0x484abcu: goto label_484abc;
        case 0x484ac0u: goto label_484ac0;
        case 0x484ac4u: goto label_484ac4;
        case 0x484ac8u: goto label_484ac8;
        case 0x484accu: goto label_484acc;
        case 0x484ad0u: goto label_484ad0;
        case 0x484ad4u: goto label_484ad4;
        case 0x484ad8u: goto label_484ad8;
        case 0x484adcu: goto label_484adc;
        case 0x484ae0u: goto label_484ae0;
        case 0x484ae4u: goto label_484ae4;
        case 0x484ae8u: goto label_484ae8;
        case 0x484aecu: goto label_484aec;
        case 0x484af0u: goto label_484af0;
        case 0x484af4u: goto label_484af4;
        case 0x484af8u: goto label_484af8;
        case 0x484afcu: goto label_484afc;
        case 0x484b00u: goto label_484b00;
        case 0x484b04u: goto label_484b04;
        case 0x484b08u: goto label_484b08;
        case 0x484b0cu: goto label_484b0c;
        case 0x484b10u: goto label_484b10;
        case 0x484b14u: goto label_484b14;
        case 0x484b18u: goto label_484b18;
        case 0x484b1cu: goto label_484b1c;
        case 0x484b20u: goto label_484b20;
        case 0x484b24u: goto label_484b24;
        case 0x484b28u: goto label_484b28;
        case 0x484b2cu: goto label_484b2c;
        case 0x484b30u: goto label_484b30;
        case 0x484b34u: goto label_484b34;
        case 0x484b38u: goto label_484b38;
        case 0x484b3cu: goto label_484b3c;
        case 0x484b40u: goto label_484b40;
        case 0x484b44u: goto label_484b44;
        case 0x484b48u: goto label_484b48;
        case 0x484b4cu: goto label_484b4c;
        case 0x484b50u: goto label_484b50;
        case 0x484b54u: goto label_484b54;
        case 0x484b58u: goto label_484b58;
        case 0x484b5cu: goto label_484b5c;
        case 0x484b60u: goto label_484b60;
        case 0x484b64u: goto label_484b64;
        case 0x484b68u: goto label_484b68;
        case 0x484b6cu: goto label_484b6c;
        case 0x484b70u: goto label_484b70;
        case 0x484b74u: goto label_484b74;
        case 0x484b78u: goto label_484b78;
        case 0x484b7cu: goto label_484b7c;
        case 0x484b80u: goto label_484b80;
        case 0x484b84u: goto label_484b84;
        case 0x484b88u: goto label_484b88;
        case 0x484b8cu: goto label_484b8c;
        case 0x484b90u: goto label_484b90;
        case 0x484b94u: goto label_484b94;
        case 0x484b98u: goto label_484b98;
        case 0x484b9cu: goto label_484b9c;
        case 0x484ba0u: goto label_484ba0;
        case 0x484ba4u: goto label_484ba4;
        case 0x484ba8u: goto label_484ba8;
        case 0x484bacu: goto label_484bac;
        case 0x484bb0u: goto label_484bb0;
        case 0x484bb4u: goto label_484bb4;
        case 0x484bb8u: goto label_484bb8;
        case 0x484bbcu: goto label_484bbc;
        case 0x484bc0u: goto label_484bc0;
        case 0x484bc4u: goto label_484bc4;
        case 0x484bc8u: goto label_484bc8;
        case 0x484bccu: goto label_484bcc;
        case 0x484bd0u: goto label_484bd0;
        case 0x484bd4u: goto label_484bd4;
        case 0x484bd8u: goto label_484bd8;
        case 0x484bdcu: goto label_484bdc;
        case 0x484be0u: goto label_484be0;
        case 0x484be4u: goto label_484be4;
        case 0x484be8u: goto label_484be8;
        case 0x484becu: goto label_484bec;
        case 0x484bf0u: goto label_484bf0;
        case 0x484bf4u: goto label_484bf4;
        case 0x484bf8u: goto label_484bf8;
        case 0x484bfcu: goto label_484bfc;
        case 0x484c00u: goto label_484c00;
        case 0x484c04u: goto label_484c04;
        case 0x484c08u: goto label_484c08;
        case 0x484c0cu: goto label_484c0c;
        case 0x484c10u: goto label_484c10;
        case 0x484c14u: goto label_484c14;
        case 0x484c18u: goto label_484c18;
        case 0x484c1cu: goto label_484c1c;
        case 0x484c20u: goto label_484c20;
        case 0x484c24u: goto label_484c24;
        case 0x484c28u: goto label_484c28;
        case 0x484c2cu: goto label_484c2c;
        case 0x484c30u: goto label_484c30;
        case 0x484c34u: goto label_484c34;
        case 0x484c38u: goto label_484c38;
        case 0x484c3cu: goto label_484c3c;
        case 0x484c40u: goto label_484c40;
        case 0x484c44u: goto label_484c44;
        case 0x484c48u: goto label_484c48;
        case 0x484c4cu: goto label_484c4c;
        case 0x484c50u: goto label_484c50;
        case 0x484c54u: goto label_484c54;
        case 0x484c58u: goto label_484c58;
        case 0x484c5cu: goto label_484c5c;
        case 0x484c60u: goto label_484c60;
        case 0x484c64u: goto label_484c64;
        case 0x484c68u: goto label_484c68;
        case 0x484c6cu: goto label_484c6c;
        case 0x484c70u: goto label_484c70;
        case 0x484c74u: goto label_484c74;
        case 0x484c78u: goto label_484c78;
        case 0x484c7cu: goto label_484c7c;
        case 0x484c80u: goto label_484c80;
        case 0x484c84u: goto label_484c84;
        case 0x484c88u: goto label_484c88;
        case 0x484c8cu: goto label_484c8c;
        case 0x484c90u: goto label_484c90;
        case 0x484c94u: goto label_484c94;
        case 0x484c98u: goto label_484c98;
        case 0x484c9cu: goto label_484c9c;
        case 0x484ca0u: goto label_484ca0;
        case 0x484ca4u: goto label_484ca4;
        case 0x484ca8u: goto label_484ca8;
        case 0x484cacu: goto label_484cac;
        case 0x484cb0u: goto label_484cb0;
        case 0x484cb4u: goto label_484cb4;
        case 0x484cb8u: goto label_484cb8;
        case 0x484cbcu: goto label_484cbc;
        case 0x484cc0u: goto label_484cc0;
        case 0x484cc4u: goto label_484cc4;
        case 0x484cc8u: goto label_484cc8;
        case 0x484cccu: goto label_484ccc;
        case 0x484cd0u: goto label_484cd0;
        case 0x484cd4u: goto label_484cd4;
        case 0x484cd8u: goto label_484cd8;
        case 0x484cdcu: goto label_484cdc;
        case 0x484ce0u: goto label_484ce0;
        case 0x484ce4u: goto label_484ce4;
        case 0x484ce8u: goto label_484ce8;
        case 0x484cecu: goto label_484cec;
        case 0x484cf0u: goto label_484cf0;
        case 0x484cf4u: goto label_484cf4;
        case 0x484cf8u: goto label_484cf8;
        case 0x484cfcu: goto label_484cfc;
        case 0x484d00u: goto label_484d00;
        case 0x484d04u: goto label_484d04;
        case 0x484d08u: goto label_484d08;
        case 0x484d0cu: goto label_484d0c;
        case 0x484d10u: goto label_484d10;
        case 0x484d14u: goto label_484d14;
        case 0x484d18u: goto label_484d18;
        case 0x484d1cu: goto label_484d1c;
        case 0x484d20u: goto label_484d20;
        case 0x484d24u: goto label_484d24;
        case 0x484d28u: goto label_484d28;
        case 0x484d2cu: goto label_484d2c;
        default: break;
    }

    ctx->pc = 0x484a40u;

label_484a40:
    // 0x484a40: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x484a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
label_484a44:
    // 0x484a44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x484a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_484a48:
    // 0x484a48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x484a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_484a4c:
    // 0x484a4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x484a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_484a50:
    // 0x484a50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x484a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_484a54:
    // 0x484a54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x484a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_484a58:
    // 0x484a58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x484a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_484a5c:
    // 0x484a5c: 0xafa401a0  sw          $a0, 0x1A0($sp)
    ctx->pc = 0x484a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 4));
label_484a60:
    // 0x484a60: 0xafa501b0  sw          $a1, 0x1B0($sp)
    ctx->pc = 0x484a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 5));
label_484a64:
    // 0x484a64: 0xafa701d0  sw          $a3, 0x1D0($sp)
    ctx->pc = 0x484a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 7));
label_484a68:
    // 0x484a68: 0xafa801e0  sw          $t0, 0x1E0($sp)
    ctx->pc = 0x484a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 8));
label_484a6c:
    // 0x484a6c: 0x27a40198  addiu       $a0, $sp, 0x198
    ctx->pc = 0x484a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_484a70:
    // 0x484a70: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x484a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_484a74:
    // 0x484a74: 0x8fa601b0  lw          $a2, 0x1B0($sp)
    ctx->pc = 0x484a74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_484a78:
    // 0x484a78: 0xc1213b4  jal         func_484ED0
label_484a7c:
    if (ctx->pc == 0x484A7Cu) {
        ctx->pc = 0x484A80u;
        goto label_484a80;
    }
    ctx->pc = 0x484A78u;
    SET_GPR_U32(ctx, 31, 0x484A80u);
    ctx->pc = 0x484ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484ED0u, 0x484A78u, 0x484A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484A80u;
label_484a80:
    // 0x484a80: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x484a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_484a84:
    // 0x484a84: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x484a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_484a88:
    // 0x484a88: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x484a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_484a8c:
    // 0x484a8c: 0xc0a0284  jal         func_280A10
label_484a90:
    if (ctx->pc == 0x484A90u) {
        ctx->pc = 0x484A94u;
        goto label_484a94;
    }
    ctx->pc = 0x484A8Cu;
    SET_GPR_U32(ctx, 31, 0x484A94u);
    ctx->pc = 0x280A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280A10u, 0x484A8Cu, 0x484A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484A94u;
label_484a94:
    // 0x484a94: 0x27a40198  addiu       $a0, $sp, 0x198
    ctx->pc = 0x484a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_484a98:
    // 0x484a98: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x484a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_484a9c:
    // 0x484a9c: 0xc120e54  jal         func_483950
label_484aa0:
    if (ctx->pc == 0x484AA0u) {
        ctx->pc = 0x484AA4u;
        goto label_484aa4;
    }
    ctx->pc = 0x484A9Cu;
    SET_GPR_U32(ctx, 31, 0x484AA4u);
    ctx->pc = 0x483950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483950u, 0x484A9Cu, 0x484AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484AA4u;
label_484aa4:
    // 0x484aa4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_484aa8:
    if (ctx->pc == 0x484AA8u) {
        ctx->pc = 0x484AACu;
        goto label_484aac;
    }
    ctx->pc = 0x484AA4u;
    {
        const bool branch_taken_0x484aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x484aa4) {
            ctx->pc = 0x484B44u;
            goto label_484b44;
        }
    }
    ctx->pc = 0x484AACu;
label_484aac:
    // 0x484aac: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x484aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_484ab0:
    // 0x484ab0: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x484ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_484ab4:
    // 0x484ab4: 0x27a60188  addiu       $a2, $sp, 0x188
    ctx->pc = 0x484ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_484ab8:
    // 0x484ab8: 0xc115ee8  jal         func_457BA0
label_484abc:
    if (ctx->pc == 0x484ABCu) {
        ctx->pc = 0x484AC0u;
        goto label_484ac0;
    }
    ctx->pc = 0x484AB8u;
    SET_GPR_U32(ctx, 31, 0x484AC0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x484AB8u, 0x484AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484AC0u;
label_484ac0:
    // 0x484ac0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_484ac4:
    if (ctx->pc == 0x484AC4u) {
        ctx->pc = 0x484AC8u;
        goto label_484ac8;
    }
    ctx->pc = 0x484AC0u;
    {
        const bool branch_taken_0x484ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x484ac0) {
            ctx->pc = 0x484B44u;
            goto label_484b44;
        }
    }
    ctx->pc = 0x484AC8u;
label_484ac8:
    // 0x484ac8: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x484ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_484acc:
    // 0x484acc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_484ad0:
    if (ctx->pc == 0x484AD0u) {
        ctx->pc = 0x484AD4u;
        goto label_484ad4;
    }
    ctx->pc = 0x484ACCu;
    {
        const bool branch_taken_0x484acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x484acc) {
            ctx->pc = 0x484B44u;
            goto label_484b44;
        }
    }
    ctx->pc = 0x484AD4u;
label_484ad4:
    // 0x484ad4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x484ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_484ad8:
    // 0x484ad8: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x484ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_484adc:
    // 0x484adc: 0x8fa6018c  lw          $a2, 0x18C($sp)
    ctx->pc = 0x484adcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_484ae0:
    // 0x484ae0: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x484ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_484ae4:
    // 0x484ae4: 0x24e73b10  addiu       $a3, $a3, 0x3B10
    ctx->pc = 0x484ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15120));
label_484ae8:
    // 0x484ae8: 0x24080218  addiu       $t0, $zero, 0x218
    ctx->pc = 0x484ae8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
label_484aec:
    // 0x484aec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x484aecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_484af0:
    // 0x484af0: 0xc113940  jal         func_44E500
label_484af4:
    if (ctx->pc == 0x484AF4u) {
        ctx->pc = 0x484AF8u;
        goto label_484af8;
    }
    ctx->pc = 0x484AF0u;
    SET_GPR_U32(ctx, 31, 0x484AF8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x484AF0u, 0x484AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484AF8u;
label_484af8:
    // 0x484af8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x484af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_484afc:
    // 0x484afc: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x484afcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_484b00:
    // 0x484b00: 0x24a53c80  addiu       $a1, $a1, 0x3C80
    ctx->pc = 0x484b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15488));
label_484b04:
    // 0x484b04: 0x8fa601b0  lw          $a2, 0x1B0($sp)
    ctx->pc = 0x484b04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_484b08:
    // 0x484b08: 0xc115c24  jal         func_457090
label_484b0c:
    if (ctx->pc == 0x484B0Cu) {
        ctx->pc = 0x484B10u;
        goto label_484b10;
    }
    ctx->pc = 0x484B08u;
    SET_GPR_U32(ctx, 31, 0x484B10u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x484B08u, 0x484B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484B10u;
label_484b10:
    // 0x484b10: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x484b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_484b14:
    // 0x484b14: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x484b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_484b18:
    // 0x484b18: 0x40f809  jalr        $v0
label_484b1c:
    if (ctx->pc == 0x484B1Cu) {
        ctx->pc = 0x484B20u;
        goto label_484b20;
    }
    ctx->pc = 0x484B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x484B20u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484B18u, 0x484B20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x484B20u;
label_484b20:
    // 0x484b20: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x484b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_484b24:
    // 0x484b24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_484b28:
    if (ctx->pc == 0x484B28u) {
        ctx->pc = 0x484B2Cu;
        goto label_484b2c;
    }
    ctx->pc = 0x484B24u;
    {
        const bool branch_taken_0x484b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x484b24) {
            ctx->pc = 0x484B34u;
            goto label_484b34;
        }
    }
    ctx->pc = 0x484B2Cu;
label_484b2c:
    // 0x484b2c: 0xd  break       0
    ctx->pc = 0x484b2cu;
    runtime->handleBreak(rdram, ctx);
label_484b30:
    // 0x484b30: 0x0  nop
    ctx->pc = 0x484b30u;
    // NOP
label_484b34:
    // 0x484b34: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x484b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_484b38:
    // 0x484b38: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x484b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_484b3c:
    // 0x484b3c: 0xc11392c  jal         func_44E4B0
label_484b40:
    if (ctx->pc == 0x484B40u) {
        ctx->pc = 0x484B44u;
        goto label_484b44;
    }
    ctx->pc = 0x484B3Cu;
    SET_GPR_U32(ctx, 31, 0x484B44u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x484B3Cu, 0x484B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484B44u;
label_484b44:
    // 0x484b44: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x484b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_484b48:
    // 0x484b48: 0x27a40178  addiu       $a0, $sp, 0x178
    ctx->pc = 0x484b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_484b4c:
    // 0x484b4c: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x484b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_484b50:
    // 0x484b50: 0xc0a0284  jal         func_280A10
label_484b54:
    if (ctx->pc == 0x484B54u) {
        ctx->pc = 0x484B58u;
        goto label_484b58;
    }
    ctx->pc = 0x484B50u;
    SET_GPR_U32(ctx, 31, 0x484B58u);
    ctx->pc = 0x280A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280A10u, 0x484B50u, 0x484B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484B58u;
label_484b58:
    // 0x484b58: 0x27a40198  addiu       $a0, $sp, 0x198
    ctx->pc = 0x484b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_484b5c:
    // 0x484b5c: 0x27a50178  addiu       $a1, $sp, 0x178
    ctx->pc = 0x484b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_484b60:
    // 0x484b60: 0xc0a0278  jal         func_2809E0
label_484b64:
    if (ctx->pc == 0x484B64u) {
        ctx->pc = 0x484B68u;
        goto label_484b68;
    }
    ctx->pc = 0x484B60u;
    SET_GPR_U32(ctx, 31, 0x484B68u);
    ctx->pc = 0x2809E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2809E0u, 0x484B60u, 0x484B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484B68u;
label_484b68:
    // 0x484b68: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
label_484b6c:
    if (ctx->pc == 0x484B6Cu) {
        ctx->pc = 0x484B70u;
        goto label_484b70;
    }
    ctx->pc = 0x484B68u;
    {
        const bool branch_taken_0x484b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x484b68) {
            ctx->pc = 0x484D08u;
            goto label_484d08;
        }
    }
    ctx->pc = 0x484B70u;
label_484b70:
    // 0x484b70: 0x27a40198  addiu       $a0, $sp, 0x198
    ctx->pc = 0x484b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_484b74:
    // 0x484b74: 0xc0a041c  jal         func_281070
label_484b78:
    if (ctx->pc == 0x484B78u) {
        ctx->pc = 0x484B7Cu;
        goto label_484b7c;
    }
    ctx->pc = 0x484B74u;
    SET_GPR_U32(ctx, 31, 0x484B7Cu);
    ctx->pc = 0x281070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281070u, 0x484B74u, 0x484B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484B7Cu;
label_484b7c:
    // 0x484b7c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x484b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_484b80:
    // 0x484b80: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x484b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_484b84:
    // 0x484b84: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x484b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_484b88:
    // 0x484b88: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_484b8c:
    if (ctx->pc == 0x484B8Cu) {
        ctx->pc = 0x484B90u;
        goto label_484b90;
    }
    ctx->pc = 0x484B88u;
    {
        const bool branch_taken_0x484b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x484b88) {
            ctx->pc = 0x484BA0u;
            goto label_484ba0;
        }
    }
    ctx->pc = 0x484B90u;
label_484b90:
    // 0x484b90: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x484b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_484b94:
    // 0x484b94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x484b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_484b98:
    // 0x484b98: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
label_484b9c:
    if (ctx->pc == 0x484B9Cu) {
        ctx->pc = 0x484BA0u;
        goto label_484ba0;
    }
    ctx->pc = 0x484B98u;
    {
        const bool branch_taken_0x484b98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x484b98) {
            ctx->pc = 0x484C34u;
            goto label_484c34;
        }
    }
    ctx->pc = 0x484BA0u;
label_484ba0:
    // 0x484ba0: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x484ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_484ba4:
    // 0x484ba4: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x484ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_484ba8:
    // 0x484ba8: 0xc120a80  jal         func_482A00
label_484bac:
    if (ctx->pc == 0x484BACu) {
        ctx->pc = 0x484BB0u;
        goto label_484bb0;
    }
    ctx->pc = 0x484BA8u;
    SET_GPR_U32(ctx, 31, 0x484BB0u);
    ctx->pc = 0x482A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482A00u, 0x484BA8u, 0x484BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484BB0u;
label_484bb0:
    // 0x484bb0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x484bb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_484bb4:
    // 0x484bb4: 0x1000000e  b           . + 4 + (0xE << 2)
label_484bb8:
    if (ctx->pc == 0x484BB8u) {
        ctx->pc = 0x484BBCu;
        goto label_484bbc;
    }
    ctx->pc = 0x484BB4u;
    {
        const bool branch_taken_0x484bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x484bb4) {
            ctx->pc = 0x484BF0u;
            goto label_484bf0;
        }
    }
    ctx->pc = 0x484BBCu;
label_484bbc:
    // 0x484bbc: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x484bbcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_484bc0:
    // 0x484bc0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x484bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_484bc4:
    // 0x484bc4: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x484bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_484bc8:
    // 0x484bc8: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_484bcc:
    if (ctx->pc == 0x484BCCu) {
        ctx->pc = 0x484BD0u;
        goto label_484bd0;
    }
    ctx->pc = 0x484BC8u;
    {
        const bool branch_taken_0x484bc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x484bc8) {
            ctx->pc = 0x484BECu;
            goto label_484bec;
        }
    }
    ctx->pc = 0x484BD0u;
label_484bd0:
    // 0x484bd0: 0x8e43005c  lw          $v1, 0x5C($s2)
    ctx->pc = 0x484bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_484bd4:
    // 0x484bd4: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x484bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_484bd8:
    // 0x484bd8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_484bdc:
    if (ctx->pc == 0x484BDCu) {
        ctx->pc = 0x484BE0u;
        goto label_484be0;
    }
    ctx->pc = 0x484BD8u;
    {
        const bool branch_taken_0x484bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x484bd8) {
            ctx->pc = 0x484BECu;
            goto label_484bec;
        }
    }
    ctx->pc = 0x484BE0u;
label_484be0:
    // 0x484be0: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x484be0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_484be4:
    // 0x484be4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x484be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_484be8:
    // 0x484be8: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x484be8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
label_484bec:
    // 0x484bec: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x484becu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_484bf0:
    // 0x484bf0: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x484bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_484bf4:
    // 0x484bf4: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x484bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_484bf8:
    // 0x484bf8: 0xc120a78  jal         func_4829E0
label_484bfc:
    if (ctx->pc == 0x484BFCu) {
        ctx->pc = 0x484C00u;
        goto label_484c00;
    }
    ctx->pc = 0x484BF8u;
    SET_GPR_U32(ctx, 31, 0x484C00u);
    ctx->pc = 0x4829E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4829E0u, 0x484BF8u, 0x484C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484C00u;
label_484c00:
    // 0x484c00: 0x1682ffee  bne         $s4, $v0, . + 4 + (-0x12 << 2)
label_484c04:
    if (ctx->pc == 0x484C04u) {
        ctx->pc = 0x484C08u;
        goto label_484c08;
    }
    ctx->pc = 0x484C00u;
    {
        const bool branch_taken_0x484c00 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x484c00) {
            ctx->pc = 0x484BBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_484bbc;
        }
    }
    ctx->pc = 0x484C08u;
label_484c08:
    // 0x484c08: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x484c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_484c0c:
    // 0x484c0c: 0x1003003e  beq         $zero, $v1, . + 4 + (0x3E << 2)
label_484c10:
    if (ctx->pc == 0x484C10u) {
        ctx->pc = 0x484C14u;
        goto label_484c14;
    }
    ctx->pc = 0x484C0Cu;
    {
        const bool branch_taken_0x484c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x484c0c) {
            ctx->pc = 0x484D08u;
            goto label_484d08;
        }
    }
    ctx->pc = 0x484C14u;
label_484c14:
    // 0x484c14: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x484c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_484c18:
    // 0x484c18: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x484c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_484c1c:
    // 0x484c1c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x484c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_484c20:
    // 0x484c20: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x484c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_484c24:
    // 0x484c24: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x484c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_484c28:
    // 0x484c28: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x484c28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_484c2c:
    // 0x484c2c: 0x10000036  b           . + 4 + (0x36 << 2)
label_484c30:
    if (ctx->pc == 0x484C30u) {
        ctx->pc = 0x484C34u;
        goto label_484c34;
    }
    ctx->pc = 0x484C2Cu;
    {
        const bool branch_taken_0x484c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x484c2c) {
            ctx->pc = 0x484D08u;
            goto label_484d08;
        }
    }
    ctx->pc = 0x484C34u;
label_484c34:
    // 0x484c34: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x484c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_484c38:
    // 0x484c38: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x484c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_484c3c:
    // 0x484c3c: 0xc120a80  jal         func_482A00
label_484c40:
    if (ctx->pc == 0x484C40u) {
        ctx->pc = 0x484C44u;
        goto label_484c44;
    }
    ctx->pc = 0x484C3Cu;
    SET_GPR_U32(ctx, 31, 0x484C44u);
    ctx->pc = 0x482A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482A00u, 0x484C3Cu, 0x484C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484C44u;
label_484c44:
    // 0x484c44: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x484c44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_484c48:
    // 0x484c48: 0x10000029  b           . + 4 + (0x29 << 2)
label_484c4c:
    if (ctx->pc == 0x484C4Cu) {
        ctx->pc = 0x484C50u;
        goto label_484c50;
    }
    ctx->pc = 0x484C48u;
    {
        const bool branch_taken_0x484c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x484c48) {
            ctx->pc = 0x484CF0u;
            goto label_484cf0;
        }
    }
    ctx->pc = 0x484C50u;
label_484c50:
    // 0x484c50: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x484c50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_484c54:
    // 0x484c54: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x484c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_484c58:
    // 0x484c58: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x484c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_484c5c:
    // 0x484c5c: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
label_484c60:
    if (ctx->pc == 0x484C60u) {
        ctx->pc = 0x484C64u;
        goto label_484c64;
    }
    ctx->pc = 0x484C5Cu;
    {
        const bool branch_taken_0x484c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x484c5c) {
            ctx->pc = 0x484CECu;
            goto label_484cec;
        }
    }
    ctx->pc = 0x484C64u;
label_484c64:
    // 0x484c64: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x484c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_484c68:
    // 0x484c68: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x484c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_484c6c:
    // 0x484c6c: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
label_484c70:
    if (ctx->pc == 0x484C70u) {
        ctx->pc = 0x484C74u;
        goto label_484c74;
    }
    ctx->pc = 0x484C6Cu;
    {
        const bool branch_taken_0x484c6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x484c6c) {
            ctx->pc = 0x484CECu;
            goto label_484cec;
        }
    }
    ctx->pc = 0x484C74u;
label_484c74:
    // 0x484c74: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x484c74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_484c78:
    // 0x484c78: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x484c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_484c7c:
    // 0x484c7c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_484c80:
    if (ctx->pc == 0x484C80u) {
        ctx->pc = 0x484C84u;
        goto label_484c84;
    }
    ctx->pc = 0x484C7Cu;
    {
        const bool branch_taken_0x484c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x484c7c) {
            ctx->pc = 0x484CACu;
            goto label_484cac;
        }
    }
    ctx->pc = 0x484C84u;
label_484c84:
    // 0x484c84: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x484c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_484c88:
    // 0x484c88: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x484c88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
label_484c8c:
    // 0x484c8c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x484c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_484c90:
    // 0x484c90: 0x10020016  beq         $zero, $v0, . + 4 + (0x16 << 2)
label_484c94:
    if (ctx->pc == 0x484C94u) {
        ctx->pc = 0x484C98u;
        goto label_484c98;
    }
    ctx->pc = 0x484C90u;
    {
        const bool branch_taken_0x484c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x484c90) {
            ctx->pc = 0x484CECu;
            goto label_484cec;
        }
    }
    ctx->pc = 0x484C98u;
label_484c98:
    // 0x484c98: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x484c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_484c9c:
    // 0x484c9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x484c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_484ca0:
    // 0x484ca0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x484ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_484ca4:
    // 0x484ca4: 0x10000011  b           . + 4 + (0x11 << 2)
label_484ca8:
    if (ctx->pc == 0x484CA8u) {
        ctx->pc = 0x484CACu;
        goto label_484cac;
    }
    ctx->pc = 0x484CA4u;
    {
        const bool branch_taken_0x484ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x484ca4) {
            ctx->pc = 0x484CECu;
            goto label_484cec;
        }
    }
    ctx->pc = 0x484CACu;
label_484cac:
    // 0x484cac: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x484cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_484cb0:
    // 0x484cb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x484cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_484cb4:
    // 0x484cb4: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_484cb8:
    if (ctx->pc == 0x484CB8u) {
        ctx->pc = 0x484CBCu;
        goto label_484cbc;
    }
    ctx->pc = 0x484CB4u;
    {
        const bool branch_taken_0x484cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x484cb4) {
            ctx->pc = 0x484CE4u;
            goto label_484ce4;
        }
    }
    ctx->pc = 0x484CBCu;
label_484cbc:
    // 0x484cbc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x484cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_484cc0:
    // 0x484cc0: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x484cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
label_484cc4:
    // 0x484cc4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x484cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_484cc8:
    // 0x484cc8: 0x10020008  beq         $zero, $v0, . + 4 + (0x8 << 2)
label_484ccc:
    if (ctx->pc == 0x484CCCu) {
        ctx->pc = 0x484CD0u;
        goto label_484cd0;
    }
    ctx->pc = 0x484CC8u;
    {
        const bool branch_taken_0x484cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x484cc8) {
            ctx->pc = 0x484CECu;
            goto label_484cec;
        }
    }
    ctx->pc = 0x484CD0u;
label_484cd0:
    // 0x484cd0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x484cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_484cd4:
    // 0x484cd4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x484cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_484cd8:
    // 0x484cd8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x484cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_484cdc:
    // 0x484cdc: 0x10000003  b           . + 4 + (0x3 << 2)
label_484ce0:
    if (ctx->pc == 0x484CE0u) {
        ctx->pc = 0x484CE4u;
        goto label_484ce4;
    }
    ctx->pc = 0x484CDCu;
    {
        const bool branch_taken_0x484cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x484cdc) {
            ctx->pc = 0x484CECu;
            goto label_484cec;
        }
    }
    ctx->pc = 0x484CE4u;
label_484ce4:
    // 0x484ce4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x484ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_484ce8:
    // 0x484ce8: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x484ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
label_484cec:
    // 0x484cec: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x484cecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_484cf0:
    // 0x484cf0: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x484cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_484cf4:
    // 0x484cf4: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x484cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_484cf8:
    // 0x484cf8: 0xc120a78  jal         func_4829E0
label_484cfc:
    if (ctx->pc == 0x484CFCu) {
        ctx->pc = 0x484D00u;
        goto label_484d00;
    }
    ctx->pc = 0x484CF8u;
    SET_GPR_U32(ctx, 31, 0x484D00u);
    ctx->pc = 0x4829E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4829E0u, 0x484CF8u, 0x484D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484D00u;
label_484d00:
    // 0x484d00: 0x1662ffd3  bne         $s3, $v0, . + 4 + (-0x2D << 2)
label_484d04:
    if (ctx->pc == 0x484D04u) {
        ctx->pc = 0x484D08u;
        goto label_484d08;
    }
    ctx->pc = 0x484D00u;
    {
        const bool branch_taken_0x484d00 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x484d00) {
            ctx->pc = 0x484C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_484c50;
        }
    }
    ctx->pc = 0x484D08u;
label_484d08:
    // 0x484d08: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x484d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_484d0c:
    // 0x484d0c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x484d0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_484d10:
    // 0x484d10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x484d10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_484d14:
    // 0x484d14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x484d14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_484d18:
    // 0x484d18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x484d18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_484d1c:
    // 0x484d1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x484d1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_484d20:
    // 0x484d20: 0x27bd01f0  addiu       $sp, $sp, 0x1F0
    ctx->pc = 0x484d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_484d24:
    // 0x484d24: 0x3e00008  jr          $ra
label_484d28:
    if (ctx->pc == 0x484D28u) {
        ctx->pc = 0x484D2Cu;
        goto label_484d2c;
    }
    ctx->pc = 0x484D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x484D2Cu;
label_484d2c:
    // 0x484d2c: 0x0  nop
    ctx->pc = 0x484d2cu;
    // NOP
    ctx->pc = 0x484d30u;
}
