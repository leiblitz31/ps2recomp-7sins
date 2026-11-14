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

// Function: sub_00244B60
// Address: 0x244b60 - 0x244e30
void sub_00244B60_0x244b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244B60_0x244b60");
#endif

    switch (ctx->pc) {
        case 0x244b60u: goto label_244b60;
        case 0x244b64u: goto label_244b64;
        case 0x244b68u: goto label_244b68;
        case 0x244b6cu: goto label_244b6c;
        case 0x244b70u: goto label_244b70;
        case 0x244b74u: goto label_244b74;
        case 0x244b78u: goto label_244b78;
        case 0x244b7cu: goto label_244b7c;
        case 0x244b80u: goto label_244b80;
        case 0x244b84u: goto label_244b84;
        case 0x244b88u: goto label_244b88;
        case 0x244b8cu: goto label_244b8c;
        case 0x244b90u: goto label_244b90;
        case 0x244b94u: goto label_244b94;
        case 0x244b98u: goto label_244b98;
        case 0x244b9cu: goto label_244b9c;
        case 0x244ba0u: goto label_244ba0;
        case 0x244ba4u: goto label_244ba4;
        case 0x244ba8u: goto label_244ba8;
        case 0x244bacu: goto label_244bac;
        case 0x244bb0u: goto label_244bb0;
        case 0x244bb4u: goto label_244bb4;
        case 0x244bb8u: goto label_244bb8;
        case 0x244bbcu: goto label_244bbc;
        case 0x244bc0u: goto label_244bc0;
        case 0x244bc4u: goto label_244bc4;
        case 0x244bc8u: goto label_244bc8;
        case 0x244bccu: goto label_244bcc;
        case 0x244bd0u: goto label_244bd0;
        case 0x244bd4u: goto label_244bd4;
        case 0x244bd8u: goto label_244bd8;
        case 0x244bdcu: goto label_244bdc;
        case 0x244be0u: goto label_244be0;
        case 0x244be4u: goto label_244be4;
        case 0x244be8u: goto label_244be8;
        case 0x244becu: goto label_244bec;
        case 0x244bf0u: goto label_244bf0;
        case 0x244bf4u: goto label_244bf4;
        case 0x244bf8u: goto label_244bf8;
        case 0x244bfcu: goto label_244bfc;
        case 0x244c00u: goto label_244c00;
        case 0x244c04u: goto label_244c04;
        case 0x244c08u: goto label_244c08;
        case 0x244c0cu: goto label_244c0c;
        case 0x244c10u: goto label_244c10;
        case 0x244c14u: goto label_244c14;
        case 0x244c18u: goto label_244c18;
        case 0x244c1cu: goto label_244c1c;
        case 0x244c20u: goto label_244c20;
        case 0x244c24u: goto label_244c24;
        case 0x244c28u: goto label_244c28;
        case 0x244c2cu: goto label_244c2c;
        case 0x244c30u: goto label_244c30;
        case 0x244c34u: goto label_244c34;
        case 0x244c38u: goto label_244c38;
        case 0x244c3cu: goto label_244c3c;
        case 0x244c40u: goto label_244c40;
        case 0x244c44u: goto label_244c44;
        case 0x244c48u: goto label_244c48;
        case 0x244c4cu: goto label_244c4c;
        case 0x244c50u: goto label_244c50;
        case 0x244c54u: goto label_244c54;
        case 0x244c58u: goto label_244c58;
        case 0x244c5cu: goto label_244c5c;
        case 0x244c60u: goto label_244c60;
        case 0x244c64u: goto label_244c64;
        case 0x244c68u: goto label_244c68;
        case 0x244c6cu: goto label_244c6c;
        case 0x244c70u: goto label_244c70;
        case 0x244c74u: goto label_244c74;
        case 0x244c78u: goto label_244c78;
        case 0x244c7cu: goto label_244c7c;
        case 0x244c80u: goto label_244c80;
        case 0x244c84u: goto label_244c84;
        case 0x244c88u: goto label_244c88;
        case 0x244c8cu: goto label_244c8c;
        case 0x244c90u: goto label_244c90;
        case 0x244c94u: goto label_244c94;
        case 0x244c98u: goto label_244c98;
        case 0x244c9cu: goto label_244c9c;
        case 0x244ca0u: goto label_244ca0;
        case 0x244ca4u: goto label_244ca4;
        case 0x244ca8u: goto label_244ca8;
        case 0x244cacu: goto label_244cac;
        case 0x244cb0u: goto label_244cb0;
        case 0x244cb4u: goto label_244cb4;
        case 0x244cb8u: goto label_244cb8;
        case 0x244cbcu: goto label_244cbc;
        case 0x244cc0u: goto label_244cc0;
        case 0x244cc4u: goto label_244cc4;
        case 0x244cc8u: goto label_244cc8;
        case 0x244cccu: goto label_244ccc;
        case 0x244cd0u: goto label_244cd0;
        case 0x244cd4u: goto label_244cd4;
        case 0x244cd8u: goto label_244cd8;
        case 0x244cdcu: goto label_244cdc;
        case 0x244ce0u: goto label_244ce0;
        case 0x244ce4u: goto label_244ce4;
        case 0x244ce8u: goto label_244ce8;
        case 0x244cecu: goto label_244cec;
        case 0x244cf0u: goto label_244cf0;
        case 0x244cf4u: goto label_244cf4;
        case 0x244cf8u: goto label_244cf8;
        case 0x244cfcu: goto label_244cfc;
        case 0x244d00u: goto label_244d00;
        case 0x244d04u: goto label_244d04;
        case 0x244d08u: goto label_244d08;
        case 0x244d0cu: goto label_244d0c;
        case 0x244d10u: goto label_244d10;
        case 0x244d14u: goto label_244d14;
        case 0x244d18u: goto label_244d18;
        case 0x244d1cu: goto label_244d1c;
        case 0x244d20u: goto label_244d20;
        case 0x244d24u: goto label_244d24;
        case 0x244d28u: goto label_244d28;
        case 0x244d2cu: goto label_244d2c;
        case 0x244d30u: goto label_244d30;
        case 0x244d34u: goto label_244d34;
        case 0x244d38u: goto label_244d38;
        case 0x244d3cu: goto label_244d3c;
        case 0x244d40u: goto label_244d40;
        case 0x244d44u: goto label_244d44;
        case 0x244d48u: goto label_244d48;
        case 0x244d4cu: goto label_244d4c;
        case 0x244d50u: goto label_244d50;
        case 0x244d54u: goto label_244d54;
        case 0x244d58u: goto label_244d58;
        case 0x244d5cu: goto label_244d5c;
        case 0x244d60u: goto label_244d60;
        case 0x244d64u: goto label_244d64;
        case 0x244d68u: goto label_244d68;
        case 0x244d6cu: goto label_244d6c;
        case 0x244d70u: goto label_244d70;
        case 0x244d74u: goto label_244d74;
        case 0x244d78u: goto label_244d78;
        case 0x244d7cu: goto label_244d7c;
        case 0x244d80u: goto label_244d80;
        case 0x244d84u: goto label_244d84;
        case 0x244d88u: goto label_244d88;
        case 0x244d8cu: goto label_244d8c;
        case 0x244d90u: goto label_244d90;
        case 0x244d94u: goto label_244d94;
        case 0x244d98u: goto label_244d98;
        case 0x244d9cu: goto label_244d9c;
        case 0x244da0u: goto label_244da0;
        case 0x244da4u: goto label_244da4;
        case 0x244da8u: goto label_244da8;
        case 0x244dacu: goto label_244dac;
        case 0x244db0u: goto label_244db0;
        case 0x244db4u: goto label_244db4;
        case 0x244db8u: goto label_244db8;
        case 0x244dbcu: goto label_244dbc;
        case 0x244dc0u: goto label_244dc0;
        case 0x244dc4u: goto label_244dc4;
        case 0x244dc8u: goto label_244dc8;
        case 0x244dccu: goto label_244dcc;
        case 0x244dd0u: goto label_244dd0;
        case 0x244dd4u: goto label_244dd4;
        case 0x244dd8u: goto label_244dd8;
        case 0x244ddcu: goto label_244ddc;
        case 0x244de0u: goto label_244de0;
        case 0x244de4u: goto label_244de4;
        case 0x244de8u: goto label_244de8;
        case 0x244decu: goto label_244dec;
        case 0x244df0u: goto label_244df0;
        case 0x244df4u: goto label_244df4;
        case 0x244df8u: goto label_244df8;
        case 0x244dfcu: goto label_244dfc;
        case 0x244e00u: goto label_244e00;
        case 0x244e04u: goto label_244e04;
        case 0x244e08u: goto label_244e08;
        case 0x244e0cu: goto label_244e0c;
        case 0x244e10u: goto label_244e10;
        case 0x244e14u: goto label_244e14;
        case 0x244e18u: goto label_244e18;
        case 0x244e1cu: goto label_244e1c;
        case 0x244e20u: goto label_244e20;
        case 0x244e24u: goto label_244e24;
        case 0x244e28u: goto label_244e28;
        case 0x244e2cu: goto label_244e2c;
        default: break;
    }

    ctx->pc = 0x244b60u;

label_244b60:
    // 0x244b60: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x244b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_244b64:
    // 0x244b64: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x244b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_244b68:
    // 0x244b68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x244b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_244b6c:
    // 0x244b6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x244b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_244b70:
    // 0x244b70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x244b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_244b74:
    // 0x244b74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x244b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_244b78:
    // 0x244b78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x244b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_244b7c:
    // 0x244b7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x244b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_244b80:
    // 0x244b80: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x244b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_244b84:
    // 0x244b84: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x244b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
label_244b88:
    // 0x244b88: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x244b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_244b8c:
    // 0x244b8c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x244b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_244b90:
    // 0x244b90: 0xc085504  jal         func_215410
label_244b94:
    if (ctx->pc == 0x244B94u) {
        ctx->pc = 0x244B98u;
        goto label_244b98;
    }
    ctx->pc = 0x244B90u;
    SET_GPR_U32(ctx, 31, 0x244B98u);
    ctx->pc = 0x215410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215410u, 0x244B90u, 0x244B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244B98u;
label_244b98:
    // 0x244b98: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x244b98u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_244b9c:
    // 0x244b9c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x244b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_244ba0:
    // 0x244ba0: 0xc0422b8  jal         func_108AE0
label_244ba4:
    if (ctx->pc == 0x244BA4u) {
        ctx->pc = 0x244BA8u;
        goto label_244ba8;
    }
    ctx->pc = 0x244BA0u;
    SET_GPR_U32(ctx, 31, 0x244BA8u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x244BA0u, 0x244BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244BA8u;
label_244ba8:
    // 0x244ba8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x244ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244bac:
    // 0x244bac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x244bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244bb0:
    // 0x244bb0: 0xc08ec98  jal         func_23B260
label_244bb4:
    if (ctx->pc == 0x244BB4u) {
        ctx->pc = 0x244BB8u;
        goto label_244bb8;
    }
    ctx->pc = 0x244BB0u;
    SET_GPR_U32(ctx, 31, 0x244BB8u);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x244BB0u, 0x244BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244BB8u;
label_244bb8:
    // 0x244bb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x244bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_244bbc:
    // 0x244bbc: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x244bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_244bc0:
    // 0x244bc0: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x244bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_244bc4:
    // 0x244bc4: 0xc0422b8  jal         func_108AE0
label_244bc8:
    if (ctx->pc == 0x244BC8u) {
        ctx->pc = 0x244BCCu;
        goto label_244bcc;
    }
    ctx->pc = 0x244BC4u;
    SET_GPR_U32(ctx, 31, 0x244BCCu);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x244BC4u, 0x244BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244BCCu;
label_244bcc:
    // 0x244bcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x244bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244bd0:
    // 0x244bd0: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x244bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_244bd4:
    // 0x244bd4: 0xc0422a8  jal         func_108AA0
label_244bd8:
    if (ctx->pc == 0x244BD8u) {
        ctx->pc = 0x244BDCu;
        goto label_244bdc;
    }
    ctx->pc = 0x244BD4u;
    SET_GPR_U32(ctx, 31, 0x244BDCu);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x244BD4u, 0x244BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244BDCu;
label_244bdc:
    // 0x244bdc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x244bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_244be0:
    // 0x244be0: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x244be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_244be4:
    // 0x244be4: 0xc085644  jal         func_215910
label_244be8:
    if (ctx->pc == 0x244BE8u) {
        ctx->pc = 0x244BECu;
        goto label_244bec;
    }
    ctx->pc = 0x244BE4u;
    SET_GPR_U32(ctx, 31, 0x244BECu);
    ctx->pc = 0x215910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215910u, 0x244BE4u, 0x244BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244BECu;
label_244bec:
    // 0x244bec: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x244becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_244bf0:
    // 0x244bf0: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x244bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_244bf4:
    // 0x244bf4: 0xc0422b8  jal         func_108AE0
label_244bf8:
    if (ctx->pc == 0x244BF8u) {
        ctx->pc = 0x244BFCu;
        goto label_244bfc;
    }
    ctx->pc = 0x244BF4u;
    SET_GPR_U32(ctx, 31, 0x244BFCu);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x244BF4u, 0x244BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244BFCu;
label_244bfc:
    // 0x244bfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x244bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244c00:
    // 0x244c00: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x244c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_244c04:
    // 0x244c04: 0xc0422a8  jal         func_108AA0
label_244c08:
    if (ctx->pc == 0x244C08u) {
        ctx->pc = 0x244C0Cu;
        goto label_244c0c;
    }
    ctx->pc = 0x244C04u;
    SET_GPR_U32(ctx, 31, 0x244C0Cu);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x244C04u, 0x244C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244C0Cu;
label_244c0c:
    // 0x244c0c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x244c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_244c10:
    // 0x244c10: 0xc0422b8  jal         func_108AE0
label_244c14:
    if (ctx->pc == 0x244C14u) {
        ctx->pc = 0x244C18u;
        goto label_244c18;
    }
    ctx->pc = 0x244C10u;
    SET_GPR_U32(ctx, 31, 0x244C18u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x244C10u, 0x244C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244C18u;
label_244c18:
    // 0x244c18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x244c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244c1c:
    // 0x244c1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x244c1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_244c20:
    // 0x244c20: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x244c20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_244c24:
    // 0x244c24: 0x320f809  jalr        $t9
label_244c28:
    if (ctx->pc == 0x244C28u) {
        ctx->pc = 0x244C2Cu;
        goto label_244c2c;
    }
    ctx->pc = 0x244C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x244C2Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244C24u, 0x244C2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244C2Cu;
label_244c2c:
    // 0x244c2c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x244c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_244c30:
    // 0x244c30: 0x14430067  bne         $v0, $v1, . + 4 + (0x67 << 2)
label_244c34:
    if (ctx->pc == 0x244C34u) {
        ctx->pc = 0x244C38u;
        goto label_244c38;
    }
    ctx->pc = 0x244C30u;
    {
        const bool branch_taken_0x244c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x244c30) {
            ctx->pc = 0x244DD0u;
            goto label_244dd0;
        }
    }
    ctx->pc = 0x244C38u;
label_244c38:
    // 0x244c38: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x244c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_244c3c:
    // 0x244c3c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x244c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_244c40:
    // 0x244c40: 0xc0432bc  jal         func_10CAF0
label_244c44:
    if (ctx->pc == 0x244C44u) {
        ctx->pc = 0x244C48u;
        goto label_244c48;
    }
    ctx->pc = 0x244C40u;
    SET_GPR_U32(ctx, 31, 0x244C48u);
    ctx->pc = 0x10CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAF0u, 0x244C40u, 0x244C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244C48u;
label_244c48:
    // 0x244c48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x244c48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244c4c:
    // 0x244c4c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_244c50:
    if (ctx->pc == 0x244C50u) {
        ctx->pc = 0x244C54u;
        goto label_244c54;
    }
    ctx->pc = 0x244C4Cu;
    {
        const bool branch_taken_0x244c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244c4c) {
            ctx->pc = 0x244CBCu;
            goto label_244cbc;
        }
    }
    ctx->pc = 0x244C54u;
label_244c54:
    // 0x244c54: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x244c54u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_244c58:
    // 0x244c58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x244c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_244c5c:
    // 0x244c5c: 0xc084efc  jal         func_213BF0
label_244c60:
    if (ctx->pc == 0x244C60u) {
        ctx->pc = 0x244C64u;
        goto label_244c64;
    }
    ctx->pc = 0x244C5Cu;
    SET_GPR_U32(ctx, 31, 0x244C64u);
    ctx->pc = 0x213BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213BF0u, 0x244C5Cu, 0x244C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244C64u;
label_244c64:
    // 0x244c64: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x244c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_244c68:
    // 0x244c68: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x244c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_244c6c:
    // 0x244c6c: 0xc0422b8  jal         func_108AE0
label_244c70:
    if (ctx->pc == 0x244C70u) {
        ctx->pc = 0x244C74u;
        goto label_244c74;
    }
    ctx->pc = 0x244C6Cu;
    SET_GPR_U32(ctx, 31, 0x244C74u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x244C6Cu, 0x244C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244C74u;
label_244c74:
    // 0x244c74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x244c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244c78:
    // 0x244c78: 0x27a50074  addiu       $a1, $sp, 0x74
    ctx->pc = 0x244c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_244c7c:
    // 0x244c7c: 0xc0422a8  jal         func_108AA0
label_244c80:
    if (ctx->pc == 0x244C80u) {
        ctx->pc = 0x244C84u;
        goto label_244c84;
    }
    ctx->pc = 0x244C7Cu;
    SET_GPR_U32(ctx, 31, 0x244C84u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x244C7Cu, 0x244C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244C84u;
label_244c84:
    // 0x244c84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x244c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_244c88:
    // 0x244c88: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x244c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_244c8c:
    // 0x244c8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x244c8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_244c90:
    // 0x244c90: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x244c90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_244c94:
    // 0x244c94: 0x320f809  jalr        $t9
label_244c98:
    if (ctx->pc == 0x244C98u) {
        ctx->pc = 0x244C9Cu;
        goto label_244c9c;
    }
    ctx->pc = 0x244C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x244C9Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244C94u, 0x244C9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244C9Cu;
label_244c9c:
    // 0x244c9c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x244c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_244ca0:
    // 0x244ca0: 0xc0422b8  jal         func_108AE0
label_244ca4:
    if (ctx->pc == 0x244CA4u) {
        ctx->pc = 0x244CA8u;
        goto label_244ca8;
    }
    ctx->pc = 0x244CA0u;
    SET_GPR_U32(ctx, 31, 0x244CA8u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x244CA0u, 0x244CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244CA8u;
label_244ca8:
    // 0x244ca8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x244ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244cac:
    // 0x244cac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x244cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_244cb0:
    // 0x244cb0: 0xc08ec98  jal         func_23B260
label_244cb4:
    if (ctx->pc == 0x244CB4u) {
        ctx->pc = 0x244CB8u;
        goto label_244cb8;
    }
    ctx->pc = 0x244CB0u;
    SET_GPR_U32(ctx, 31, 0x244CB8u);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x244CB0u, 0x244CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244CB8u;
label_244cb8:
    // 0x244cb8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x244cb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_244cbc:
    // 0x244cbc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x244cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_244cc0:
    // 0x244cc0: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x244cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_244cc4:
    // 0x244cc4: 0xc041144  jal         func_104510
label_244cc8:
    if (ctx->pc == 0x244CC8u) {
        ctx->pc = 0x244CCCu;
        goto label_244ccc;
    }
    ctx->pc = 0x244CC4u;
    SET_GPR_U32(ctx, 31, 0x244CCCu);
    ctx->pc = 0x104510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104510u, 0x244CC4u, 0x244CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244CCCu;
label_244ccc:
    // 0x244ccc: 0x1622ffe1  bne         $s1, $v0, . + 4 + (-0x1F << 2)
label_244cd0:
    if (ctx->pc == 0x244CD0u) {
        ctx->pc = 0x244CD4u;
        goto label_244cd4;
    }
    ctx->pc = 0x244CCCu;
    {
        const bool branch_taken_0x244ccc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x244ccc) {
            ctx->pc = 0x244C54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244c54;
        }
    }
    ctx->pc = 0x244CD4u;
label_244cd4:
    // 0x244cd4: 0x10000043  b           . + 4 + (0x43 << 2)
label_244cd8:
    if (ctx->pc == 0x244CD8u) {
        ctx->pc = 0x244CDCu;
        goto label_244cdc;
    }
    ctx->pc = 0x244CD4u;
    {
        const bool branch_taken_0x244cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244cd4) {
            ctx->pc = 0x244DE4u;
            goto label_244de4;
        }
    }
    ctx->pc = 0x244CDCu;
label_244cdc:
    // 0x244cdc: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x244cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_244ce0:
    // 0x244ce0: 0xc0422b8  jal         func_108AE0
label_244ce4:
    if (ctx->pc == 0x244CE4u) {
        ctx->pc = 0x244CE8u;
        goto label_244ce8;
    }
    ctx->pc = 0x244CE0u;
    SET_GPR_U32(ctx, 31, 0x244CE8u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x244CE0u, 0x244CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244CE8u;
label_244ce8:
    // 0x244ce8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x244ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244cec:
    // 0x244cec: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x244cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_244cf0:
    // 0x244cf0: 0xc0422a8  jal         func_108AA0
label_244cf4:
    if (ctx->pc == 0x244CF4u) {
        ctx->pc = 0x244CF8u;
        goto label_244cf8;
    }
    ctx->pc = 0x244CF0u;
    SET_GPR_U32(ctx, 31, 0x244CF8u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x244CF0u, 0x244CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244CF8u;
label_244cf8:
    // 0x244cf8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x244cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_244cfc:
    // 0x244cfc: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x244cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_244d00:
    // 0x244d00: 0xc0432bc  jal         func_10CAF0
label_244d04:
    if (ctx->pc == 0x244D04u) {
        ctx->pc = 0x244D08u;
        goto label_244d08;
    }
    ctx->pc = 0x244D00u;
    SET_GPR_U32(ctx, 31, 0x244D08u);
    ctx->pc = 0x10CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAF0u, 0x244D00u, 0x244D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244D08u;
label_244d08:
    // 0x244d08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x244d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244d0c:
    // 0x244d0c: 0x10000008  b           . + 4 + (0x8 << 2)
label_244d10:
    if (ctx->pc == 0x244D10u) {
        ctx->pc = 0x244D14u;
        goto label_244d14;
    }
    ctx->pc = 0x244D0Cu;
    {
        const bool branch_taken_0x244d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244d0c) {
            ctx->pc = 0x244D30u;
            goto label_244d30;
        }
    }
    ctx->pc = 0x244D14u;
label_244d14:
    // 0x244d14: 0x8fb50070  lw          $s5, 0x70($sp)
    ctx->pc = 0x244d14u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_244d18:
    // 0x244d18: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x244d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_244d1c:
    // 0x244d1c: 0xc084efc  jal         func_213BF0
label_244d20:
    if (ctx->pc == 0x244D20u) {
        ctx->pc = 0x244D24u;
        goto label_244d24;
    }
    ctx->pc = 0x244D1Cu;
    SET_GPR_U32(ctx, 31, 0x244D24u);
    ctx->pc = 0x213BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213BF0u, 0x244D1Cu, 0x244D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244D24u;
label_244d24:
    // 0x244d24: 0x12a20008  beq         $s5, $v0, . + 4 + (0x8 << 2)
label_244d28:
    if (ctx->pc == 0x244D28u) {
        ctx->pc = 0x244D2Cu;
        goto label_244d2c;
    }
    ctx->pc = 0x244D24u;
    {
        const bool branch_taken_0x244d24 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x244d24) {
            ctx->pc = 0x244D48u;
            goto label_244d48;
        }
    }
    ctx->pc = 0x244D2Cu;
label_244d2c:
    // 0x244d2c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x244d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_244d30:
    // 0x244d30: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x244d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_244d34:
    // 0x244d34: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x244d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_244d38:
    // 0x244d38: 0xc041144  jal         func_104510
label_244d3c:
    if (ctx->pc == 0x244D3Cu) {
        ctx->pc = 0x244D40u;
        goto label_244d40;
    }
    ctx->pc = 0x244D38u;
    SET_GPR_U32(ctx, 31, 0x244D40u);
    ctx->pc = 0x104510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104510u, 0x244D38u, 0x244D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244D40u;
label_244d40:
    // 0x244d40: 0x1602fff4  bne         $s0, $v0, . + 4 + (-0xC << 2)
label_244d44:
    if (ctx->pc == 0x244D44u) {
        ctx->pc = 0x244D48u;
        goto label_244d48;
    }
    ctx->pc = 0x244D40u;
    {
        const bool branch_taken_0x244d40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x244d40) {
            ctx->pc = 0x244D14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244d14;
        }
    }
    ctx->pc = 0x244D48u;
label_244d48:
    // 0x244d48: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x244d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_244d4c:
    // 0x244d4c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x244d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_244d50:
    // 0x244d50: 0xc041144  jal         func_104510
label_244d54:
    if (ctx->pc == 0x244D54u) {
        ctx->pc = 0x244D58u;
        goto label_244d58;
    }
    ctx->pc = 0x244D50u;
    SET_GPR_U32(ctx, 31, 0x244D58u);
    ctx->pc = 0x104510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104510u, 0x244D50u, 0x244D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244D58u;
label_244d58:
    // 0x244d58: 0x12020016  beq         $s0, $v0, . + 4 + (0x16 << 2)
label_244d5c:
    if (ctx->pc == 0x244D5Cu) {
        ctx->pc = 0x244D60u;
        goto label_244d60;
    }
    ctx->pc = 0x244D58u;
    {
        const bool branch_taken_0x244d58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x244d58) {
            ctx->pc = 0x244DB4u;
            goto label_244db4;
        }
    }
    ctx->pc = 0x244D60u;
label_244d60:
    // 0x244d60: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x244d60u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_244d64:
    // 0x244d64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x244d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_244d68:
    // 0x244d68: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x244d68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_244d6c:
    // 0x244d6c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x244d6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_244d70:
    // 0x244d70: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x244d70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_244d74:
    // 0x244d74: 0x320f809  jalr        $t9
label_244d78:
    if (ctx->pc == 0x244D78u) {
        ctx->pc = 0x244D7Cu;
        goto label_244d7c;
    }
    ctx->pc = 0x244D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x244D7Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244D74u, 0x244D7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244D7Cu;
label_244d7c:
    // 0x244d7c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x244d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_244d80:
    // 0x244d80: 0x10000006  b           . + 4 + (0x6 << 2)
label_244d84:
    if (ctx->pc == 0x244D84u) {
        ctx->pc = 0x244D88u;
        goto label_244d88;
    }
    ctx->pc = 0x244D80u;
    {
        const bool branch_taken_0x244d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244d80) {
            ctx->pc = 0x244D9Cu;
            goto label_244d9c;
        }
    }
    ctx->pc = 0x244D88u;
label_244d88:
    // 0x244d88: 0x8fb50070  lw          $s5, 0x70($sp)
    ctx->pc = 0x244d88u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_244d8c:
    // 0x244d8c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x244d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_244d90:
    // 0x244d90: 0xc084efc  jal         func_213BF0
label_244d94:
    if (ctx->pc == 0x244D94u) {
        ctx->pc = 0x244D98u;
        goto label_244d98;
    }
    ctx->pc = 0x244D90u;
    SET_GPR_U32(ctx, 31, 0x244D98u);
    ctx->pc = 0x213BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213BF0u, 0x244D90u, 0x244D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244D98u;
label_244d98:
    // 0x244d98: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x244d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_244d9c:
    // 0x244d9c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x244d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_244da0:
    // 0x244da0: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x244da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_244da4:
    // 0x244da4: 0xc041144  jal         func_104510
label_244da8:
    if (ctx->pc == 0x244DA8u) {
        ctx->pc = 0x244DACu;
        goto label_244dac;
    }
    ctx->pc = 0x244DA4u;
    SET_GPR_U32(ctx, 31, 0x244DACu);
    ctx->pc = 0x104510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104510u, 0x244DA4u, 0x244DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244DACu;
label_244dac:
    // 0x244dac: 0x1602fff6  bne         $s0, $v0, . + 4 + (-0xA << 2)
label_244db0:
    if (ctx->pc == 0x244DB0u) {
        ctx->pc = 0x244DB4u;
        goto label_244db4;
    }
    ctx->pc = 0x244DACu;
    {
        const bool branch_taken_0x244dac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x244dac) {
            ctx->pc = 0x244D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244d88;
        }
    }
    ctx->pc = 0x244DB4u;
label_244db4:
    // 0x244db4: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x244db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_244db8:
    // 0x244db8: 0xc0422b8  jal         func_108AE0
label_244dbc:
    if (ctx->pc == 0x244DBCu) {
        ctx->pc = 0x244DC0u;
        goto label_244dc0;
    }
    ctx->pc = 0x244DB8u;
    SET_GPR_U32(ctx, 31, 0x244DC0u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x244DB8u, 0x244DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244DC0u;
label_244dc0:
    // 0x244dc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x244dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244dc4:
    // 0x244dc4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x244dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_244dc8:
    // 0x244dc8: 0xc08ece0  jal         func_23B380
label_244dcc:
    if (ctx->pc == 0x244DCCu) {
        ctx->pc = 0x244DD0u;
        goto label_244dd0;
    }
    ctx->pc = 0x244DC8u;
    SET_GPR_U32(ctx, 31, 0x244DD0u);
    ctx->pc = 0x23B380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B380u, 0x244DC8u, 0x244DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244DD0u;
label_244dd0:
    // 0x244dd0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x244dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_244dd4:
    // 0x244dd4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x244dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_244dd8:
    // 0x244dd8: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x244dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_244ddc:
    // 0x244ddc: 0x1460ffbf  bnez        $v1, . + 4 + (-0x41 << 2)
label_244de0:
    if (ctx->pc == 0x244DE0u) {
        ctx->pc = 0x244DE4u;
        goto label_244de4;
    }
    ctx->pc = 0x244DDCu;
    {
        const bool branch_taken_0x244ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x244ddc) {
            ctx->pc = 0x244CDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244cdc;
        }
    }
    ctx->pc = 0x244DE4u;
label_244de4:
    // 0x244de4: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x244de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_244de8:
    // 0x244de8: 0xc0422b8  jal         func_108AE0
label_244dec:
    if (ctx->pc == 0x244DECu) {
        ctx->pc = 0x244DF0u;
        goto label_244df0;
    }
    ctx->pc = 0x244DE8u;
    SET_GPR_U32(ctx, 31, 0x244DF0u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x244DE8u, 0x244DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244DF0u;
label_244df0:
    // 0x244df0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x244df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244df4:
    // 0x244df4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x244df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_244df8:
    // 0x244df8: 0xc08ec98  jal         func_23B260
label_244dfc:
    if (ctx->pc == 0x244DFCu) {
        ctx->pc = 0x244E00u;
        goto label_244e00;
    }
    ctx->pc = 0x244DF8u;
    SET_GPR_U32(ctx, 31, 0x244E00u);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x244DF8u, 0x244E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244E00u;
label_244e00:
    // 0x244e00: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x244e00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_244e04:
    // 0x244e04: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x244e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_244e08:
    // 0x244e08: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x244e08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_244e0c:
    // 0x244e0c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x244e0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_244e10:
    // 0x244e10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x244e10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_244e14:
    // 0x244e14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x244e14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_244e18:
    // 0x244e18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x244e18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_244e1c:
    // 0x244e1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x244e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_244e20:
    // 0x244e20: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x244e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_244e24:
    // 0x244e24: 0x3e00008  jr          $ra
label_244e28:
    if (ctx->pc == 0x244E28u) {
        ctx->pc = 0x244E2Cu;
        goto label_244e2c;
    }
    ctx->pc = 0x244E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244E2Cu;
label_244e2c:
    // 0x244e2c: 0x0  nop
    ctx->pc = 0x244e2cu;
    // NOP
    ctx->pc = 0x244e30u;
}
