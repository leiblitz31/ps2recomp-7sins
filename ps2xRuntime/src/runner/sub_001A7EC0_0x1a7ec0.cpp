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

// Function: sub_001A7EC0
// Address: 0x1a7ec0 - 0x1a7f60
void sub_001A7EC0_0x1a7ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7EC0_0x1a7ec0");
#endif

    switch (ctx->pc) {
        case 0x1a7ec0u: goto label_1a7ec0;
        case 0x1a7ec4u: goto label_1a7ec4;
        case 0x1a7ec8u: goto label_1a7ec8;
        case 0x1a7eccu: goto label_1a7ecc;
        case 0x1a7ed0u: goto label_1a7ed0;
        case 0x1a7ed4u: goto label_1a7ed4;
        case 0x1a7ed8u: goto label_1a7ed8;
        case 0x1a7edcu: goto label_1a7edc;
        case 0x1a7ee0u: goto label_1a7ee0;
        case 0x1a7ee4u: goto label_1a7ee4;
        case 0x1a7ee8u: goto label_1a7ee8;
        case 0x1a7eecu: goto label_1a7eec;
        case 0x1a7ef0u: goto label_1a7ef0;
        case 0x1a7ef4u: goto label_1a7ef4;
        case 0x1a7ef8u: goto label_1a7ef8;
        case 0x1a7efcu: goto label_1a7efc;
        case 0x1a7f00u: goto label_1a7f00;
        case 0x1a7f04u: goto label_1a7f04;
        case 0x1a7f08u: goto label_1a7f08;
        case 0x1a7f0cu: goto label_1a7f0c;
        case 0x1a7f10u: goto label_1a7f10;
        case 0x1a7f14u: goto label_1a7f14;
        case 0x1a7f18u: goto label_1a7f18;
        case 0x1a7f1cu: goto label_1a7f1c;
        case 0x1a7f20u: goto label_1a7f20;
        case 0x1a7f24u: goto label_1a7f24;
        case 0x1a7f28u: goto label_1a7f28;
        case 0x1a7f2cu: goto label_1a7f2c;
        case 0x1a7f30u: goto label_1a7f30;
        case 0x1a7f34u: goto label_1a7f34;
        case 0x1a7f38u: goto label_1a7f38;
        case 0x1a7f3cu: goto label_1a7f3c;
        case 0x1a7f40u: goto label_1a7f40;
        case 0x1a7f44u: goto label_1a7f44;
        case 0x1a7f48u: goto label_1a7f48;
        case 0x1a7f4cu: goto label_1a7f4c;
        case 0x1a7f50u: goto label_1a7f50;
        case 0x1a7f54u: goto label_1a7f54;
        case 0x1a7f58u: goto label_1a7f58;
        case 0x1a7f5cu: goto label_1a7f5c;
        default: break;
    }

    ctx->pc = 0x1a7ec0u;

label_1a7ec0:
    // 0x1a7ec0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a7ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1a7ec4:
    // 0x1a7ec4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a7ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a7ec8:
    // 0x1a7ec8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a7ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a7ecc:
    // 0x1a7ecc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a7eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a7ed0:
    // 0x1a7ed0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1a7ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1a7ed4:
    // 0x1a7ed4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1a7ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1a7ed8:
    // 0x1a7ed8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a7edc:
    if (ctx->pc == 0x1A7EDCu) {
        ctx->pc = 0x1A7EE0u;
        goto label_1a7ee0;
    }
    ctx->pc = 0x1A7ED8u;
    {
        const bool branch_taken_0x1a7ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7ed8) {
            ctx->pc = 0x1A7EE8u;
            goto label_1a7ee8;
        }
    }
    ctx->pc = 0x1A7EE0u;
label_1a7ee0:
    // 0x1a7ee0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7ee4:
    // 0x1a7ee4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1a7ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1a7ee8:
    // 0x1a7ee8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1a7ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1a7eec:
    // 0x1a7eec: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1a7eecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a7ef0:
    // 0x1a7ef0: 0xc119b68  jal         func_466DA0
label_1a7ef4:
    if (ctx->pc == 0x1A7EF4u) {
        ctx->pc = 0x1A7EF8u;
        goto label_1a7ef8;
    }
    ctx->pc = 0x1A7EF0u;
    SET_GPR_U32(ctx, 31, 0x1A7EF8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1A7EF0u, 0x1A7EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7EF8u;
label_1a7ef8:
    // 0x1a7ef8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a7ef8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a7efc:
    // 0x1a7efc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1a7f00:
    if (ctx->pc == 0x1A7F00u) {
        ctx->pc = 0x1A7F04u;
        goto label_1a7f04;
    }
    ctx->pc = 0x1A7EFCu;
    {
        const bool branch_taken_0x1a7efc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7efc) {
            ctx->pc = 0x1A7F10u;
            goto label_1a7f10;
        }
    }
    ctx->pc = 0x1A7F04u;
label_1a7f04:
    // 0x1a7f04: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a7f04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a7f08:
    // 0x1a7f08: 0x1000000e  b           . + 4 + (0xE << 2)
label_1a7f0c:
    if (ctx->pc == 0x1A7F0Cu) {
        ctx->pc = 0x1A7F10u;
        goto label_1a7f10;
    }
    ctx->pc = 0x1A7F08u;
    {
        const bool branch_taken_0x1a7f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7f08) {
            ctx->pc = 0x1A7F44u;
            goto label_1a7f44;
        }
    }
    ctx->pc = 0x1A7F10u;
label_1a7f10:
    // 0x1a7f10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a7f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7f14:
    // 0x1a7f14: 0xc0ba088  jal         func_2E8220
label_1a7f18:
    if (ctx->pc == 0x1A7F18u) {
        ctx->pc = 0x1A7F1Cu;
        goto label_1a7f1c;
    }
    ctx->pc = 0x1A7F14u;
    SET_GPR_U32(ctx, 31, 0x1A7F1Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1A7F14u, 0x1A7F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7F1Cu;
label_1a7f1c:
    // 0x1a7f1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a7f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a7f20:
    // 0x1a7f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7f24:
    // 0x1a7f24: 0xc0ba088  jal         func_2E8220
label_1a7f28:
    if (ctx->pc == 0x1A7F28u) {
        ctx->pc = 0x1A7F2Cu;
        goto label_1a7f2c;
    }
    ctx->pc = 0x1A7F24u;
    SET_GPR_U32(ctx, 31, 0x1A7F2Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1A7F24u, 0x1A7F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7F2Cu;
label_1a7f2c:
    // 0x1a7f2c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_1a7f30:
    if (ctx->pc == 0x1A7F30u) {
        ctx->pc = 0x1A7F34u;
        goto label_1a7f34;
    }
    ctx->pc = 0x1A7F2Cu;
    {
        const bool branch_taken_0x1a7f2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7f2c) {
            ctx->pc = 0x1A7EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7ee8;
        }
    }
    ctx->pc = 0x1A7F34u;
label_1a7f34:
    // 0x1a7f34: 0x200f809  jalr        $s0
label_1a7f38:
    if (ctx->pc == 0x1A7F38u) {
        ctx->pc = 0x1A7F3Cu;
        goto label_1a7f3c;
    }
    ctx->pc = 0x1A7F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1A7F3Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7F34u, 0x1A7F3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A7F3Cu;
label_1a7f3c:
    // 0x1a7f3c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_1a7f40:
    if (ctx->pc == 0x1A7F40u) {
        ctx->pc = 0x1A7F44u;
        goto label_1a7f44;
    }
    ctx->pc = 0x1A7F3Cu;
    {
        const bool branch_taken_0x1a7f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7f3c) {
            ctx->pc = 0x1A7EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7ee8;
        }
    }
    ctx->pc = 0x1A7F44u;
label_1a7f44:
    // 0x1a7f44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a7f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a7f48:
    // 0x1a7f48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a7f48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a7f4c:
    // 0x1a7f4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a7f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a7f50:
    // 0x1a7f50: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1a7f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1a7f54:
    // 0x1a7f54: 0x3e00008  jr          $ra
label_1a7f58:
    if (ctx->pc == 0x1A7F58u) {
        ctx->pc = 0x1A7F5Cu;
        goto label_1a7f5c;
    }
    ctx->pc = 0x1A7F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7F5Cu;
label_1a7f5c:
    // 0x1a7f5c: 0x0  nop
    ctx->pc = 0x1a7f5cu;
    // NOP
    ctx->pc = 0x1a7f60u;
}
