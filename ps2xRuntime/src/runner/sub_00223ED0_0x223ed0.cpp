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

// Function: sub_00223ED0
// Address: 0x223ed0 - 0x223fa0
void sub_00223ED0_0x223ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223ED0_0x223ed0");
#endif

    switch (ctx->pc) {
        case 0x223ed0u: goto label_223ed0;
        case 0x223ed4u: goto label_223ed4;
        case 0x223ed8u: goto label_223ed8;
        case 0x223edcu: goto label_223edc;
        case 0x223ee0u: goto label_223ee0;
        case 0x223ee4u: goto label_223ee4;
        case 0x223ee8u: goto label_223ee8;
        case 0x223eecu: goto label_223eec;
        case 0x223ef0u: goto label_223ef0;
        case 0x223ef4u: goto label_223ef4;
        case 0x223ef8u: goto label_223ef8;
        case 0x223efcu: goto label_223efc;
        case 0x223f00u: goto label_223f00;
        case 0x223f04u: goto label_223f04;
        case 0x223f08u: goto label_223f08;
        case 0x223f0cu: goto label_223f0c;
        case 0x223f10u: goto label_223f10;
        case 0x223f14u: goto label_223f14;
        case 0x223f18u: goto label_223f18;
        case 0x223f1cu: goto label_223f1c;
        case 0x223f20u: goto label_223f20;
        case 0x223f24u: goto label_223f24;
        case 0x223f28u: goto label_223f28;
        case 0x223f2cu: goto label_223f2c;
        case 0x223f30u: goto label_223f30;
        case 0x223f34u: goto label_223f34;
        case 0x223f38u: goto label_223f38;
        case 0x223f3cu: goto label_223f3c;
        case 0x223f40u: goto label_223f40;
        case 0x223f44u: goto label_223f44;
        case 0x223f48u: goto label_223f48;
        case 0x223f4cu: goto label_223f4c;
        case 0x223f50u: goto label_223f50;
        case 0x223f54u: goto label_223f54;
        case 0x223f58u: goto label_223f58;
        case 0x223f5cu: goto label_223f5c;
        case 0x223f60u: goto label_223f60;
        case 0x223f64u: goto label_223f64;
        case 0x223f68u: goto label_223f68;
        case 0x223f6cu: goto label_223f6c;
        case 0x223f70u: goto label_223f70;
        case 0x223f74u: goto label_223f74;
        case 0x223f78u: goto label_223f78;
        case 0x223f7cu: goto label_223f7c;
        case 0x223f80u: goto label_223f80;
        case 0x223f84u: goto label_223f84;
        case 0x223f88u: goto label_223f88;
        case 0x223f8cu: goto label_223f8c;
        case 0x223f90u: goto label_223f90;
        case 0x223f94u: goto label_223f94;
        case 0x223f98u: goto label_223f98;
        case 0x223f9cu: goto label_223f9c;
        default: break;
    }

    ctx->pc = 0x223ed0u;

label_223ed0:
    // 0x223ed0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x223ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_223ed4:
    // 0x223ed4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x223ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_223ed8:
    // 0x223ed8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x223ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_223edc:
    // 0x223edc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x223edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_223ee0:
    // 0x223ee0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x223ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_223ee4:
    // 0x223ee4: 0x8f83c034  lw          $v1, -0x3FCC($gp)
    ctx->pc = 0x223ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950964)));
label_223ee8:
    // 0x223ee8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x223ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_223eec:
    // 0x223eec: 0xaf83c034  sw          $v1, -0x3FCC($gp)
    ctx->pc = 0x223eecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950964), GPR_U32(ctx, 3));
label_223ef0:
    // 0x223ef0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x223ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_223ef4:
    // 0x223ef4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x223ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_223ef8:
    // 0x223ef8: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
label_223efc:
    if (ctx->pc == 0x223EFCu) {
        ctx->pc = 0x223F00u;
        goto label_223f00;
    }
    ctx->pc = 0x223EF8u;
    {
        const bool branch_taken_0x223ef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x223ef8) {
            ctx->pc = 0x223F88u;
            goto label_223f88;
        }
    }
    ctx->pc = 0x223F00u;
label_223f00:
    // 0x223f00: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x223f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_223f04:
    // 0x223f04: 0x1003001c  beq         $zero, $v1, . + 4 + (0x1C << 2)
label_223f08:
    if (ctx->pc == 0x223F08u) {
        ctx->pc = 0x223F0Cu;
        goto label_223f0c;
    }
    ctx->pc = 0x223F04u;
    {
        const bool branch_taken_0x223f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x223f04) {
            ctx->pc = 0x223F78u;
            goto label_223f78;
        }
    }
    ctx->pc = 0x223F0Cu;
label_223f0c:
    // 0x223f0c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x223f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_223f10:
    // 0x223f10: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x223f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_223f14:
    // 0x223f14: 0xc088708  jal         func_221C20
label_223f18:
    if (ctx->pc == 0x223F18u) {
        ctx->pc = 0x223F1Cu;
        goto label_223f1c;
    }
    ctx->pc = 0x223F14u;
    SET_GPR_U32(ctx, 31, 0x223F1Cu);
    ctx->pc = 0x221C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C20u, 0x223F14u, 0x223F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223F1Cu;
label_223f1c:
    // 0x223f1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x223f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_223f20:
    // 0x223f20: 0x1000000f  b           . + 4 + (0xF << 2)
label_223f24:
    if (ctx->pc == 0x223F24u) {
        ctx->pc = 0x223F28u;
        goto label_223f28;
    }
    ctx->pc = 0x223F20u;
    {
        const bool branch_taken_0x223f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x223f20) {
            ctx->pc = 0x223F60u;
            goto label_223f60;
        }
    }
    ctx->pc = 0x223F28u;
label_223f28:
    // 0x223f28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x223f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_223f2c:
    // 0x223f2c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x223f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_223f30:
    // 0x223f30: 0xc041b38  jal         func_106CE0
label_223f34:
    if (ctx->pc == 0x223F34u) {
        ctx->pc = 0x223F38u;
        goto label_223f38;
    }
    ctx->pc = 0x223F30u;
    SET_GPR_U32(ctx, 31, 0x223F38u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x223F30u, 0x223F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223F38u;
label_223f38:
    // 0x223f38: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x223f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_223f3c:
    // 0x223f3c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x223f3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_223f40:
    // 0x223f40: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x223f40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_223f44:
    // 0x223f44: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x223f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_223f48:
    // 0x223f48: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x223f48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_223f4c:
    // 0x223f4c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x223f4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_223f50:
    // 0x223f50: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x223f50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_223f54:
    // 0x223f54: 0x320f809  jalr        $t9
label_223f58:
    if (ctx->pc == 0x223F58u) {
        ctx->pc = 0x223F5Cu;
        goto label_223f5c;
    }
    ctx->pc = 0x223F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x223F5Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223F54u, 0x223F5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x223F5Cu;
label_223f5c:
    // 0x223f5c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x223f5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_223f60:
    // 0x223f60: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x223f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_223f64:
    // 0x223f64: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x223f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_223f68:
    // 0x223f68: 0xc088700  jal         func_221C00
label_223f6c:
    if (ctx->pc == 0x223F6Cu) {
        ctx->pc = 0x223F70u;
        goto label_223f70;
    }
    ctx->pc = 0x223F68u;
    SET_GPR_U32(ctx, 31, 0x223F70u);
    ctx->pc = 0x221C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C00u, 0x223F68u, 0x223F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223F70u;
label_223f70:
    // 0x223f70: 0x1602ffed  bne         $s0, $v0, . + 4 + (-0x13 << 2)
label_223f74:
    if (ctx->pc == 0x223F74u) {
        ctx->pc = 0x223F78u;
        goto label_223f78;
    }
    ctx->pc = 0x223F70u;
    {
        const bool branch_taken_0x223f70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x223f70) {
            ctx->pc = 0x223F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223f28;
        }
    }
    ctx->pc = 0x223F78u;
label_223f78:
    // 0x223f78: 0x8f84c034  lw          $a0, -0x3FCC($gp)
    ctx->pc = 0x223f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950964)));
label_223f7c:
    // 0x223f7c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x223f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_223f80:
    // 0x223f80: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x223f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_223f84:
    // 0x223f84: 0xaf83c034  sw          $v1, -0x3FCC($gp)
    ctx->pc = 0x223f84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950964), GPR_U32(ctx, 3));
label_223f88:
    // 0x223f88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x223f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_223f8c:
    // 0x223f8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x223f8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_223f90:
    // 0x223f90: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x223f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_223f94:
    // 0x223f94: 0x3e00008  jr          $ra
label_223f98:
    if (ctx->pc == 0x223F98u) {
        ctx->pc = 0x223F9Cu;
        goto label_223f9c;
    }
    ctx->pc = 0x223F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223F9Cu;
label_223f9c:
    // 0x223f9c: 0x0  nop
    ctx->pc = 0x223f9cu;
    // NOP
    ctx->pc = 0x223fa0u;
}
