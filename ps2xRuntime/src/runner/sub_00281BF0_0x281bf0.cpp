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

// Function: sub_00281BF0
// Address: 0x281bf0 - 0x281d90
void sub_00281BF0_0x281bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281BF0_0x281bf0");
#endif

    switch (ctx->pc) {
        case 0x281bf0u: goto label_281bf0;
        case 0x281bf4u: goto label_281bf4;
        case 0x281bf8u: goto label_281bf8;
        case 0x281bfcu: goto label_281bfc;
        case 0x281c00u: goto label_281c00;
        case 0x281c04u: goto label_281c04;
        case 0x281c08u: goto label_281c08;
        case 0x281c0cu: goto label_281c0c;
        case 0x281c10u: goto label_281c10;
        case 0x281c14u: goto label_281c14;
        case 0x281c18u: goto label_281c18;
        case 0x281c1cu: goto label_281c1c;
        case 0x281c20u: goto label_281c20;
        case 0x281c24u: goto label_281c24;
        case 0x281c28u: goto label_281c28;
        case 0x281c2cu: goto label_281c2c;
        case 0x281c30u: goto label_281c30;
        case 0x281c34u: goto label_281c34;
        case 0x281c38u: goto label_281c38;
        case 0x281c3cu: goto label_281c3c;
        case 0x281c40u: goto label_281c40;
        case 0x281c44u: goto label_281c44;
        case 0x281c48u: goto label_281c48;
        case 0x281c4cu: goto label_281c4c;
        case 0x281c50u: goto label_281c50;
        case 0x281c54u: goto label_281c54;
        case 0x281c58u: goto label_281c58;
        case 0x281c5cu: goto label_281c5c;
        case 0x281c60u: goto label_281c60;
        case 0x281c64u: goto label_281c64;
        case 0x281c68u: goto label_281c68;
        case 0x281c6cu: goto label_281c6c;
        case 0x281c70u: goto label_281c70;
        case 0x281c74u: goto label_281c74;
        case 0x281c78u: goto label_281c78;
        case 0x281c7cu: goto label_281c7c;
        case 0x281c80u: goto label_281c80;
        case 0x281c84u: goto label_281c84;
        case 0x281c88u: goto label_281c88;
        case 0x281c8cu: goto label_281c8c;
        case 0x281c90u: goto label_281c90;
        case 0x281c94u: goto label_281c94;
        case 0x281c98u: goto label_281c98;
        case 0x281c9cu: goto label_281c9c;
        case 0x281ca0u: goto label_281ca0;
        case 0x281ca4u: goto label_281ca4;
        case 0x281ca8u: goto label_281ca8;
        case 0x281cacu: goto label_281cac;
        case 0x281cb0u: goto label_281cb0;
        case 0x281cb4u: goto label_281cb4;
        case 0x281cb8u: goto label_281cb8;
        case 0x281cbcu: goto label_281cbc;
        case 0x281cc0u: goto label_281cc0;
        case 0x281cc4u: goto label_281cc4;
        case 0x281cc8u: goto label_281cc8;
        case 0x281cccu: goto label_281ccc;
        case 0x281cd0u: goto label_281cd0;
        case 0x281cd4u: goto label_281cd4;
        case 0x281cd8u: goto label_281cd8;
        case 0x281cdcu: goto label_281cdc;
        case 0x281ce0u: goto label_281ce0;
        case 0x281ce4u: goto label_281ce4;
        case 0x281ce8u: goto label_281ce8;
        case 0x281cecu: goto label_281cec;
        case 0x281cf0u: goto label_281cf0;
        case 0x281cf4u: goto label_281cf4;
        case 0x281cf8u: goto label_281cf8;
        case 0x281cfcu: goto label_281cfc;
        case 0x281d00u: goto label_281d00;
        case 0x281d04u: goto label_281d04;
        case 0x281d08u: goto label_281d08;
        case 0x281d0cu: goto label_281d0c;
        case 0x281d10u: goto label_281d10;
        case 0x281d14u: goto label_281d14;
        case 0x281d18u: goto label_281d18;
        case 0x281d1cu: goto label_281d1c;
        case 0x281d20u: goto label_281d20;
        case 0x281d24u: goto label_281d24;
        case 0x281d28u: goto label_281d28;
        case 0x281d2cu: goto label_281d2c;
        case 0x281d30u: goto label_281d30;
        case 0x281d34u: goto label_281d34;
        case 0x281d38u: goto label_281d38;
        case 0x281d3cu: goto label_281d3c;
        case 0x281d40u: goto label_281d40;
        case 0x281d44u: goto label_281d44;
        case 0x281d48u: goto label_281d48;
        case 0x281d4cu: goto label_281d4c;
        case 0x281d50u: goto label_281d50;
        case 0x281d54u: goto label_281d54;
        case 0x281d58u: goto label_281d58;
        case 0x281d5cu: goto label_281d5c;
        case 0x281d60u: goto label_281d60;
        case 0x281d64u: goto label_281d64;
        case 0x281d68u: goto label_281d68;
        case 0x281d6cu: goto label_281d6c;
        case 0x281d70u: goto label_281d70;
        case 0x281d74u: goto label_281d74;
        case 0x281d78u: goto label_281d78;
        case 0x281d7cu: goto label_281d7c;
        case 0x281d80u: goto label_281d80;
        case 0x281d84u: goto label_281d84;
        case 0x281d88u: goto label_281d88;
        case 0x281d8cu: goto label_281d8c;
        default: break;
    }

    ctx->pc = 0x281bf0u;

label_281bf0:
    // 0x281bf0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x281bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_281bf4:
    // 0x281bf4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x281bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_281bf8:
    // 0x281bf8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x281bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_281bfc:
    // 0x281bfc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x281bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_281c00:
    // 0x281c00: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x281c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_281c04:
    // 0x281c04: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x281c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_281c08:
    // 0x281c08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x281c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_281c0c:
    // 0x281c0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x281c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_281c10:
    // 0x281c10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x281c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_281c14:
    // 0x281c14: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x281c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_281c18:
    // 0x281c18: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x281c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_281c1c:
    // 0x281c1c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x281c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_281c20:
    // 0x281c20: 0x24050548  addiu       $a1, $zero, 0x548
    ctx->pc = 0x281c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1352));
label_281c24:
    // 0x281c24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x281c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281c28:
    // 0x281c28: 0xc04146c  jal         func_1051B0
label_281c2c:
    if (ctx->pc == 0x281C2Cu) {
        ctx->pc = 0x281C30u;
        goto label_281c30;
    }
    ctx->pc = 0x281C28u;
    SET_GPR_U32(ctx, 31, 0x281C30u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x281C28u, 0x281C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281C30u;
label_281c30:
    // 0x281c30: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x281c30u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_281c34:
    // 0x281c34: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x281c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_281c38:
    // 0x281c38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x281c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_281c3c:
    // 0x281c3c: 0x14620037  bne         $v1, $v0, . + 4 + (0x37 << 2)
label_281c40:
    if (ctx->pc == 0x281C40u) {
        ctx->pc = 0x281C44u;
        goto label_281c44;
    }
    ctx->pc = 0x281C3Cu;
    {
        const bool branch_taken_0x281c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x281c3c) {
            ctx->pc = 0x281D1Cu;
            goto label_281d1c;
        }
    }
    ctx->pc = 0x281C44u;
label_281c44:
    // 0x281c44: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x281c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_281c48:
    // 0x281c48: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x281c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_281c4c:
    // 0x281c4c: 0x24050548  addiu       $a1, $zero, 0x548
    ctx->pc = 0x281c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1352));
label_281c50:
    // 0x281c50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x281c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281c54:
    // 0x281c54: 0xc041b54  jal         func_106D50
label_281c58:
    if (ctx->pc == 0x281C58u) {
        ctx->pc = 0x281C5Cu;
        goto label_281c5c;
    }
    ctx->pc = 0x281C54u;
    SET_GPR_U32(ctx, 31, 0x281C5Cu);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x281C54u, 0x281C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281C5Cu;
label_281c5c:
    // 0x281c5c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x281c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_281c60:
    // 0x281c60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x281c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281c64:
    // 0x281c64: 0xc0a0694  jal         func_281A50
label_281c68:
    if (ctx->pc == 0x281C68u) {
        ctx->pc = 0x281C6Cu;
        goto label_281c6c;
    }
    ctx->pc = 0x281C64u;
    SET_GPR_U32(ctx, 31, 0x281C6Cu);
    ctx->pc = 0x281A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281A50u, 0x281C64u, 0x281C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281C6Cu;
label_281c6c:
    // 0x281c6c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x281c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_281c70:
    // 0x281c70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x281c70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_281c74:
    // 0x281c74: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x281c74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_281c78:
    // 0x281c78: 0x320f809  jalr        $t9
label_281c7c:
    if (ctx->pc == 0x281C7Cu) {
        ctx->pc = 0x281C80u;
        goto label_281c80;
    }
    ctx->pc = 0x281C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x281C80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281C78u, 0x281C80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x281C80u;
label_281c80:
    // 0x281c80: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x281c80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_281c84:
    // 0x281c84: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x281c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_281c88:
    // 0x281c88: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x281c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_281c8c:
    // 0x281c8c: 0xc085538  jal         func_2154E0
label_281c90:
    if (ctx->pc == 0x281C90u) {
        ctx->pc = 0x281C94u;
        goto label_281c94;
    }
    ctx->pc = 0x281C8Cu;
    SET_GPR_U32(ctx, 31, 0x281C94u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x281C8Cu, 0x281C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281C94u;
label_281c94:
    // 0x281c94: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x281c94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_281c98:
    // 0x281c98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x281c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_281c9c:
    // 0x281c9c: 0xc091aa8  jal         func_246AA0
label_281ca0:
    if (ctx->pc == 0x281CA0u) {
        ctx->pc = 0x281CA4u;
        goto label_281ca4;
    }
    ctx->pc = 0x281C9Cu;
    SET_GPR_U32(ctx, 31, 0x281CA4u);
    ctx->pc = 0x246AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246AA0u, 0x281C9Cu, 0x281CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281CA4u;
label_281ca4:
    // 0x281ca4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x281ca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_281ca8:
    // 0x281ca8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x281ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_281cac:
    // 0x281cac: 0xc040e7c  jal         func_1039F0
label_281cb0:
    if (ctx->pc == 0x281CB0u) {
        ctx->pc = 0x281CB4u;
        goto label_281cb4;
    }
    ctx->pc = 0x281CACu;
    SET_GPR_U32(ctx, 31, 0x281CB4u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x281CACu, 0x281CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281CB4u;
label_281cb4:
    // 0x281cb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x281cb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_281cb8:
    // 0x281cb8: 0x1000000d  b           . + 4 + (0xD << 2)
label_281cbc:
    if (ctx->pc == 0x281CBCu) {
        ctx->pc = 0x281CC0u;
        goto label_281cc0;
    }
    ctx->pc = 0x281CB8u;
    {
        const bool branch_taken_0x281cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281cb8) {
            ctx->pc = 0x281CF0u;
            goto label_281cf0;
        }
    }
    ctx->pc = 0x281CC0u;
label_281cc0:
    // 0x281cc0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x281cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_281cc4:
    // 0x281cc4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x281cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_281cc8:
    // 0x281cc8: 0xc085538  jal         func_2154E0
label_281ccc:
    if (ctx->pc == 0x281CCCu) {
        ctx->pc = 0x281CD0u;
        goto label_281cd0;
    }
    ctx->pc = 0x281CC8u;
    SET_GPR_U32(ctx, 31, 0x281CD0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x281CC8u, 0x281CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281CD0u;
label_281cd0:
    // 0x281cd0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x281cd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_281cd4:
    // 0x281cd4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x281cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_281cd8:
    // 0x281cd8: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x281cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_281cdc:
    // 0x281cdc: 0x24a581c0  addiu       $a1, $a1, -0x7E40
    ctx->pc = 0x281cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934976));
label_281ce0:
    // 0x281ce0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x281ce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281ce4:
    // 0x281ce4: 0xc0a3674  jal         func_28D9D0
label_281ce8:
    if (ctx->pc == 0x281CE8u) {
        ctx->pc = 0x281CECu;
        goto label_281cec;
    }
    ctx->pc = 0x281CE4u;
    SET_GPR_U32(ctx, 31, 0x281CECu);
    ctx->pc = 0x28D9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9D0u, 0x281CE4u, 0x281CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281CECu;
label_281cec:
    // 0x281cec: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x281cecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_281cf0:
    // 0x281cf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x281cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_281cf4:
    // 0x281cf4: 0xc04147c  jal         func_1051F0
label_281cf8:
    if (ctx->pc == 0x281CF8u) {
        ctx->pc = 0x281CFCu;
        goto label_281cfc;
    }
    ctx->pc = 0x281CF4u;
    SET_GPR_U32(ctx, 31, 0x281CFCu);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x281CF4u, 0x281CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281CFCu;
label_281cfc:
    // 0x281cfc: 0x1602fff0  bne         $s0, $v0, . + 4 + (-0x10 << 2)
label_281d00:
    if (ctx->pc == 0x281D00u) {
        ctx->pc = 0x281D04u;
        goto label_281d04;
    }
    ctx->pc = 0x281CFCu;
    {
        const bool branch_taken_0x281cfc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x281cfc) {
            ctx->pc = 0x281CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281cc0;
        }
    }
    ctx->pc = 0x281D04u;
label_281d04:
    // 0x281d04: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x281d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_281d08:
    // 0x281d08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x281d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_281d0c:
    // 0x281d0c: 0xc0a0694  jal         func_281A50
label_281d10:
    if (ctx->pc == 0x281D10u) {
        ctx->pc = 0x281D14u;
        goto label_281d14;
    }
    ctx->pc = 0x281D0Cu;
    SET_GPR_U32(ctx, 31, 0x281D14u);
    ctx->pc = 0x281A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281A50u, 0x281D0Cu, 0x281D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281D14u;
label_281d14:
    // 0x281d14: 0x10000006  b           . + 4 + (0x6 << 2)
label_281d18:
    if (ctx->pc == 0x281D18u) {
        ctx->pc = 0x281D1Cu;
        goto label_281d1c;
    }
    ctx->pc = 0x281D14u;
    {
        const bool branch_taken_0x281d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281d14) {
            ctx->pc = 0x281D30u;
            goto label_281d30;
        }
    }
    ctx->pc = 0x281D1Cu;
label_281d1c:
    // 0x281d1c: 0xc12246c  jal         func_4891B0
label_281d20:
    if (ctx->pc == 0x281D20u) {
        ctx->pc = 0x281D24u;
        goto label_281d24;
    }
    ctx->pc = 0x281D1Cu;
    SET_GPR_U32(ctx, 31, 0x281D24u);
    ctx->pc = 0x4891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891B0u, 0x281D1Cu, 0x281D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281D24u;
label_281d24:
    // 0x281d24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x281d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_281d28:
    // 0x281d28: 0xc120160  jal         func_480580
label_281d2c:
    if (ctx->pc == 0x281D2Cu) {
        ctx->pc = 0x281D30u;
        goto label_281d30;
    }
    ctx->pc = 0x281D28u;
    SET_GPR_U32(ctx, 31, 0x281D30u);
    ctx->pc = 0x480580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480580u, 0x281D28u, 0x281D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281D30u;
label_281d30:
    // 0x281d30: 0xc1046a0  jal         func_411A80
label_281d34:
    if (ctx->pc == 0x281D34u) {
        ctx->pc = 0x281D38u;
        goto label_281d38;
    }
    ctx->pc = 0x281D30u;
    SET_GPR_U32(ctx, 31, 0x281D38u);
    ctx->pc = 0x411A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411A80u, 0x281D30u, 0x281D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281D38u;
label_281d38:
    // 0x281d38: 0xc12246c  jal         func_4891B0
label_281d3c:
    if (ctx->pc == 0x281D3Cu) {
        ctx->pc = 0x281D40u;
        goto label_281d40;
    }
    ctx->pc = 0x281D38u;
    SET_GPR_U32(ctx, 31, 0x281D40u);
    ctx->pc = 0x4891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891B0u, 0x281D38u, 0x281D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281D40u;
label_281d40:
    // 0x281d40: 0x3c120048  lui         $s2, 0x48
    ctx->pc = 0x281d40u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
label_281d44:
    // 0x281d44: 0x265217a0  addiu       $s2, $s2, 0x17A0
    ctx->pc = 0x281d44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 6048));
label_281d48:
    // 0x281d48: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x281d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_281d4c:
    // 0x281d4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x281d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_281d50:
    // 0x281d50: 0x240f809  jalr        $s2
label_281d54:
    if (ctx->pc == 0x281D54u) {
        ctx->pc = 0x281D58u;
        goto label_281d58;
    }
    ctx->pc = 0x281D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x281D58u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281D50u, 0x281D58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x281D58u;
label_281d58:
    // 0x281d58: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x281d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_281d5c:
    // 0x281d5c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x281d5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_281d60:
    // 0x281d60: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x281d60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_281d64:
    // 0x281d64: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x281d64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_281d68:
    // 0x281d68: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x281d68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_281d6c:
    // 0x281d6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x281d6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_281d70:
    // 0x281d70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x281d70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_281d74:
    // 0x281d74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x281d74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_281d78:
    // 0x281d78: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x281d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_281d7c:
    // 0x281d7c: 0x3e00008  jr          $ra
label_281d80:
    if (ctx->pc == 0x281D80u) {
        ctx->pc = 0x281D84u;
        goto label_281d84;
    }
    ctx->pc = 0x281D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281D84u;
label_281d84:
    // 0x281d84: 0x0  nop
    ctx->pc = 0x281d84u;
    // NOP
label_281d88:
    // 0x281d88: 0x0  nop
    ctx->pc = 0x281d88u;
    // NOP
label_281d8c:
    // 0x281d8c: 0x0  nop
    ctx->pc = 0x281d8cu;
    // NOP
    ctx->pc = 0x281d90u;
}
