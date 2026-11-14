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

// Function: sub_002D8BB0
// Address: 0x2d8bb0 - 0x2d8c50
void sub_002D8BB0_0x2d8bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8BB0_0x2d8bb0");
#endif

    switch (ctx->pc) {
        case 0x2d8bb0u: goto label_2d8bb0;
        case 0x2d8bb4u: goto label_2d8bb4;
        case 0x2d8bb8u: goto label_2d8bb8;
        case 0x2d8bbcu: goto label_2d8bbc;
        case 0x2d8bc0u: goto label_2d8bc0;
        case 0x2d8bc4u: goto label_2d8bc4;
        case 0x2d8bc8u: goto label_2d8bc8;
        case 0x2d8bccu: goto label_2d8bcc;
        case 0x2d8bd0u: goto label_2d8bd0;
        case 0x2d8bd4u: goto label_2d8bd4;
        case 0x2d8bd8u: goto label_2d8bd8;
        case 0x2d8bdcu: goto label_2d8bdc;
        case 0x2d8be0u: goto label_2d8be0;
        case 0x2d8be4u: goto label_2d8be4;
        case 0x2d8be8u: goto label_2d8be8;
        case 0x2d8becu: goto label_2d8bec;
        case 0x2d8bf0u: goto label_2d8bf0;
        case 0x2d8bf4u: goto label_2d8bf4;
        case 0x2d8bf8u: goto label_2d8bf8;
        case 0x2d8bfcu: goto label_2d8bfc;
        case 0x2d8c00u: goto label_2d8c00;
        case 0x2d8c04u: goto label_2d8c04;
        case 0x2d8c08u: goto label_2d8c08;
        case 0x2d8c0cu: goto label_2d8c0c;
        case 0x2d8c10u: goto label_2d8c10;
        case 0x2d8c14u: goto label_2d8c14;
        case 0x2d8c18u: goto label_2d8c18;
        case 0x2d8c1cu: goto label_2d8c1c;
        case 0x2d8c20u: goto label_2d8c20;
        case 0x2d8c24u: goto label_2d8c24;
        case 0x2d8c28u: goto label_2d8c28;
        case 0x2d8c2cu: goto label_2d8c2c;
        case 0x2d8c30u: goto label_2d8c30;
        case 0x2d8c34u: goto label_2d8c34;
        case 0x2d8c38u: goto label_2d8c38;
        case 0x2d8c3cu: goto label_2d8c3c;
        case 0x2d8c40u: goto label_2d8c40;
        case 0x2d8c44u: goto label_2d8c44;
        case 0x2d8c48u: goto label_2d8c48;
        case 0x2d8c4cu: goto label_2d8c4c;
        default: break;
    }

    ctx->pc = 0x2d8bb0u;

label_2d8bb0:
    // 0x2d8bb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d8bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2d8bb4:
    // 0x2d8bb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d8bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d8bb8:
    // 0x2d8bb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d8bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d8bbc:
    // 0x2d8bbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d8bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d8bc0:
    // 0x2d8bc0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2d8bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2d8bc4:
    // 0x2d8bc4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d8bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2d8bc8:
    // 0x2d8bc8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2d8bcc:
    if (ctx->pc == 0x2D8BCCu) {
        ctx->pc = 0x2D8BD0u;
        goto label_2d8bd0;
    }
    ctx->pc = 0x2D8BC8u;
    {
        const bool branch_taken_0x2d8bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8bc8) {
            ctx->pc = 0x2D8BD8u;
            goto label_2d8bd8;
        }
    }
    ctx->pc = 0x2D8BD0u;
label_2d8bd0:
    // 0x2d8bd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d8bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d8bd4:
    // 0x2d8bd4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2d8bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_2d8bd8:
    // 0x2d8bd8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d8bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2d8bdc:
    // 0x2d8bdc: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2d8bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2d8be0:
    // 0x2d8be0: 0xc119b68  jal         func_466DA0
label_2d8be4:
    if (ctx->pc == 0x2D8BE4u) {
        ctx->pc = 0x2D8BE8u;
        goto label_2d8be8;
    }
    ctx->pc = 0x2D8BE0u;
    SET_GPR_U32(ctx, 31, 0x2D8BE8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2D8BE0u, 0x2D8BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8BE8u;
label_2d8be8:
    // 0x2d8be8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d8be8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8bec:
    // 0x2d8bec: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2d8bf0:
    if (ctx->pc == 0x2D8BF0u) {
        ctx->pc = 0x2D8BF4u;
        goto label_2d8bf4;
    }
    ctx->pc = 0x2D8BECu;
    {
        const bool branch_taken_0x2d8bec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8bec) {
            ctx->pc = 0x2D8C00u;
            goto label_2d8c00;
        }
    }
    ctx->pc = 0x2D8BF4u;
label_2d8bf4:
    // 0x2d8bf4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d8bf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d8bf8:
    // 0x2d8bf8: 0x1000000e  b           . + 4 + (0xE << 2)
label_2d8bfc:
    if (ctx->pc == 0x2D8BFCu) {
        ctx->pc = 0x2D8C00u;
        goto label_2d8c00;
    }
    ctx->pc = 0x2D8BF8u;
    {
        const bool branch_taken_0x2d8bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8bf8) {
            ctx->pc = 0x2D8C34u;
            goto label_2d8c34;
        }
    }
    ctx->pc = 0x2D8C00u;
label_2d8c00:
    // 0x2d8c00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d8c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8c04:
    // 0x2d8c04: 0xc0ba088  jal         func_2E8220
label_2d8c08:
    if (ctx->pc == 0x2D8C08u) {
        ctx->pc = 0x2D8C0Cu;
        goto label_2d8c0c;
    }
    ctx->pc = 0x2D8C04u;
    SET_GPR_U32(ctx, 31, 0x2D8C0Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2D8C04u, 0x2D8C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8C0Cu;
label_2d8c0c:
    // 0x2d8c0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d8c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8c10:
    // 0x2d8c10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d8c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d8c14:
    // 0x2d8c14: 0xc0ba088  jal         func_2E8220
label_2d8c18:
    if (ctx->pc == 0x2D8C18u) {
        ctx->pc = 0x2D8C1Cu;
        goto label_2d8c1c;
    }
    ctx->pc = 0x2D8C14u;
    SET_GPR_U32(ctx, 31, 0x2D8C1Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2D8C14u, 0x2D8C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8C1Cu;
label_2d8c1c:
    // 0x2d8c1c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_2d8c20:
    if (ctx->pc == 0x2D8C20u) {
        ctx->pc = 0x2D8C24u;
        goto label_2d8c24;
    }
    ctx->pc = 0x2D8C1Cu;
    {
        const bool branch_taken_0x2d8c1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8c1c) {
            ctx->pc = 0x2D8BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8bd8;
        }
    }
    ctx->pc = 0x2D8C24u;
label_2d8c24:
    // 0x2d8c24: 0x200f809  jalr        $s0
label_2d8c28:
    if (ctx->pc == 0x2D8C28u) {
        ctx->pc = 0x2D8C2Cu;
        goto label_2d8c2c;
    }
    ctx->pc = 0x2D8C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2D8C2Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8C24u, 0x2D8C2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D8C2Cu;
label_2d8c2c:
    // 0x2d8c2c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_2d8c30:
    if (ctx->pc == 0x2D8C30u) {
        ctx->pc = 0x2D8C34u;
        goto label_2d8c34;
    }
    ctx->pc = 0x2D8C2Cu;
    {
        const bool branch_taken_0x2d8c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8c2c) {
            ctx->pc = 0x2D8BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8bd8;
        }
    }
    ctx->pc = 0x2D8C34u;
label_2d8c34:
    // 0x2d8c34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d8c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d8c38:
    // 0x2d8c38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d8c38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d8c3c:
    // 0x2d8c3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d8c3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d8c40:
    // 0x2d8c40: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2d8c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2d8c44:
    // 0x2d8c44: 0x3e00008  jr          $ra
label_2d8c48:
    if (ctx->pc == 0x2D8C48u) {
        ctx->pc = 0x2D8C4Cu;
        goto label_2d8c4c;
    }
    ctx->pc = 0x2D8C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8C4Cu;
label_2d8c4c:
    // 0x2d8c4c: 0x0  nop
    ctx->pc = 0x2d8c4cu;
    // NOP
    ctx->pc = 0x2d8c50u;
}
