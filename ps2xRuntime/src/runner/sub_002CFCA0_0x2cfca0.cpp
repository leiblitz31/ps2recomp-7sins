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

// Function: sub_002CFCA0
// Address: 0x2cfca0 - 0x2cfd40
void sub_002CFCA0_0x2cfca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFCA0_0x2cfca0");
#endif

    switch (ctx->pc) {
        case 0x2cfca0u: goto label_2cfca0;
        case 0x2cfca4u: goto label_2cfca4;
        case 0x2cfca8u: goto label_2cfca8;
        case 0x2cfcacu: goto label_2cfcac;
        case 0x2cfcb0u: goto label_2cfcb0;
        case 0x2cfcb4u: goto label_2cfcb4;
        case 0x2cfcb8u: goto label_2cfcb8;
        case 0x2cfcbcu: goto label_2cfcbc;
        case 0x2cfcc0u: goto label_2cfcc0;
        case 0x2cfcc4u: goto label_2cfcc4;
        case 0x2cfcc8u: goto label_2cfcc8;
        case 0x2cfcccu: goto label_2cfccc;
        case 0x2cfcd0u: goto label_2cfcd0;
        case 0x2cfcd4u: goto label_2cfcd4;
        case 0x2cfcd8u: goto label_2cfcd8;
        case 0x2cfcdcu: goto label_2cfcdc;
        case 0x2cfce0u: goto label_2cfce0;
        case 0x2cfce4u: goto label_2cfce4;
        case 0x2cfce8u: goto label_2cfce8;
        case 0x2cfcecu: goto label_2cfcec;
        case 0x2cfcf0u: goto label_2cfcf0;
        case 0x2cfcf4u: goto label_2cfcf4;
        case 0x2cfcf8u: goto label_2cfcf8;
        case 0x2cfcfcu: goto label_2cfcfc;
        case 0x2cfd00u: goto label_2cfd00;
        case 0x2cfd04u: goto label_2cfd04;
        case 0x2cfd08u: goto label_2cfd08;
        case 0x2cfd0cu: goto label_2cfd0c;
        case 0x2cfd10u: goto label_2cfd10;
        case 0x2cfd14u: goto label_2cfd14;
        case 0x2cfd18u: goto label_2cfd18;
        case 0x2cfd1cu: goto label_2cfd1c;
        case 0x2cfd20u: goto label_2cfd20;
        case 0x2cfd24u: goto label_2cfd24;
        case 0x2cfd28u: goto label_2cfd28;
        case 0x2cfd2cu: goto label_2cfd2c;
        case 0x2cfd30u: goto label_2cfd30;
        case 0x2cfd34u: goto label_2cfd34;
        case 0x2cfd38u: goto label_2cfd38;
        case 0x2cfd3cu: goto label_2cfd3c;
        default: break;
    }

    ctx->pc = 0x2cfca0u;

label_2cfca0:
    // 0x2cfca0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cfca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2cfca4:
    // 0x2cfca4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cfca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2cfca8:
    // 0x2cfca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cfca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cfcac:
    // 0x2cfcac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cfcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cfcb0:
    // 0x2cfcb0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2cfcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2cfcb4:
    // 0x2cfcb4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2cfcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2cfcb8:
    // 0x2cfcb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2cfcbc:
    if (ctx->pc == 0x2CFCBCu) {
        ctx->pc = 0x2CFCC0u;
        goto label_2cfcc0;
    }
    ctx->pc = 0x2CFCB8u;
    {
        const bool branch_taken_0x2cfcb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cfcb8) {
            ctx->pc = 0x2CFCC8u;
            goto label_2cfcc8;
        }
    }
    ctx->pc = 0x2CFCC0u;
label_2cfcc0:
    // 0x2cfcc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cfcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cfcc4:
    // 0x2cfcc4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2cfcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_2cfcc8:
    // 0x2cfcc8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2cfcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2cfccc:
    // 0x2cfccc: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2cfcccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2cfcd0:
    // 0x2cfcd0: 0xc119b68  jal         func_466DA0
label_2cfcd4:
    if (ctx->pc == 0x2CFCD4u) {
        ctx->pc = 0x2CFCD8u;
        goto label_2cfcd8;
    }
    ctx->pc = 0x2CFCD0u;
    SET_GPR_U32(ctx, 31, 0x2CFCD8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2CFCD0u, 0x2CFCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFCD8u;
label_2cfcd8:
    // 0x2cfcd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cfcd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cfcdc:
    // 0x2cfcdc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2cfce0:
    if (ctx->pc == 0x2CFCE0u) {
        ctx->pc = 0x2CFCE4u;
        goto label_2cfce4;
    }
    ctx->pc = 0x2CFCDCu;
    {
        const bool branch_taken_0x2cfcdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfcdc) {
            ctx->pc = 0x2CFCF0u;
            goto label_2cfcf0;
        }
    }
    ctx->pc = 0x2CFCE4u;
label_2cfce4:
    // 0x2cfce4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cfce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cfce8:
    // 0x2cfce8: 0x1000000e  b           . + 4 + (0xE << 2)
label_2cfcec:
    if (ctx->pc == 0x2CFCECu) {
        ctx->pc = 0x2CFCF0u;
        goto label_2cfcf0;
    }
    ctx->pc = 0x2CFCE8u;
    {
        const bool branch_taken_0x2cfce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfce8) {
            ctx->pc = 0x2CFD24u;
            goto label_2cfd24;
        }
    }
    ctx->pc = 0x2CFCF0u;
label_2cfcf0:
    // 0x2cfcf0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2cfcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cfcf4:
    // 0x2cfcf4: 0xc0ba088  jal         func_2E8220
label_2cfcf8:
    if (ctx->pc == 0x2CFCF8u) {
        ctx->pc = 0x2CFCFCu;
        goto label_2cfcfc;
    }
    ctx->pc = 0x2CFCF4u;
    SET_GPR_U32(ctx, 31, 0x2CFCFCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2CFCF4u, 0x2CFCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFCFCu;
label_2cfcfc:
    // 0x2cfcfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cfcfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cfd00:
    // 0x2cfd00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cfd00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cfd04:
    // 0x2cfd04: 0xc0ba088  jal         func_2E8220
label_2cfd08:
    if (ctx->pc == 0x2CFD08u) {
        ctx->pc = 0x2CFD0Cu;
        goto label_2cfd0c;
    }
    ctx->pc = 0x2CFD04u;
    SET_GPR_U32(ctx, 31, 0x2CFD0Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2CFD04u, 0x2CFD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFD0Cu;
label_2cfd0c:
    // 0x2cfd0c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_2cfd10:
    if (ctx->pc == 0x2CFD10u) {
        ctx->pc = 0x2CFD14u;
        goto label_2cfd14;
    }
    ctx->pc = 0x2CFD0Cu;
    {
        const bool branch_taken_0x2cfd0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfd0c) {
            ctx->pc = 0x2CFCC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cfcc8;
        }
    }
    ctx->pc = 0x2CFD14u;
label_2cfd14:
    // 0x2cfd14: 0x200f809  jalr        $s0
label_2cfd18:
    if (ctx->pc == 0x2CFD18u) {
        ctx->pc = 0x2CFD1Cu;
        goto label_2cfd1c;
    }
    ctx->pc = 0x2CFD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2CFD1Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFD14u, 0x2CFD1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CFD1Cu;
label_2cfd1c:
    // 0x2cfd1c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_2cfd20:
    if (ctx->pc == 0x2CFD20u) {
        ctx->pc = 0x2CFD24u;
        goto label_2cfd24;
    }
    ctx->pc = 0x2CFD1Cu;
    {
        const bool branch_taken_0x2cfd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfd1c) {
            ctx->pc = 0x2CFCC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cfcc8;
        }
    }
    ctx->pc = 0x2CFD24u;
label_2cfd24:
    // 0x2cfd24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cfd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cfd28:
    // 0x2cfd28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cfd28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cfd2c:
    // 0x2cfd2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cfd2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cfd30:
    // 0x2cfd30: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2cfd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2cfd34:
    // 0x2cfd34: 0x3e00008  jr          $ra
label_2cfd38:
    if (ctx->pc == 0x2CFD38u) {
        ctx->pc = 0x2CFD3Cu;
        goto label_2cfd3c;
    }
    ctx->pc = 0x2CFD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFD34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFD3Cu;
label_2cfd3c:
    // 0x2cfd3c: 0x0  nop
    ctx->pc = 0x2cfd3cu;
    // NOP
    ctx->pc = 0x2cfd40u;
}
