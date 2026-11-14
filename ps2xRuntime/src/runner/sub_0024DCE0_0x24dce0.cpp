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

// Function: sub_0024DCE0
// Address: 0x24dce0 - 0x24dda0
void sub_0024DCE0_0x24dce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DCE0_0x24dce0");
#endif

    switch (ctx->pc) {
        case 0x24dd10u: goto label_24dd10;
        case 0x24dd1cu: goto label_24dd1c;
        case 0x24dd2cu: goto label_24dd2c;
        case 0x24dd40u: goto label_24dd40;
        case 0x24dd7cu: goto label_24dd7c;
        case 0x24dd88u: goto label_24dd88;
        default: break;
    }

    ctx->pc = 0x24dce0u;

label_24dce0:
    // 0x24dce0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24dce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24dce4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24dce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24dce8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24dce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24dcec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x24dcecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x24dcf0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x24dcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x24dcf4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x24dcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24dcf8: 0x10030024  beq         $zero, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x24DCF8u;
    {
        const bool branch_taken_0x24dcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x24dcf8) {
            ctx->pc = 0x24DD8Cu;
            goto label_24dd8c;
        }
    }
    ctx->pc = 0x24DD00u;
    // 0x24dd00: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x24dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24dd04: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x24dd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x24dd08: 0xc092464  jal         func_249190
    ctx->pc = 0x24DD08u;
    SET_GPR_U32(ctx, 31, 0x24DD10u);
    ctx->pc = 0x249190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249190u, 0x24DD08u, 0x24DD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DD10u;
label_24dd10:
    // 0x24dd10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24dd10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dd14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24DD14u;
    {
        const bool branch_taken_0x24dd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24dd14) {
            ctx->pc = 0x24DD30u;
            goto label_24dd30;
        }
    }
    ctx->pc = 0x24DD1Cu;
label_24dd1c:
    // 0x24dd1c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x24dd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24dd20: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x24dd20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24dd24: 0xc093738  jal         func_24DCE0
    ctx->pc = 0x24DD24u;
    SET_GPR_U32(ctx, 31, 0x24DD2Cu);
    ctx->pc = 0x24DCE0u;
    goto label_24dce0;
    ctx->pc = 0x24DD2Cu;
label_24dd2c:
    // 0x24dd2c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x24dd2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_24dd30:
    // 0x24dd30: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x24dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24dd34: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x24dd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x24dd38: 0xc09245c  jal         func_249170
    ctx->pc = 0x24DD38u;
    SET_GPR_U32(ctx, 31, 0x24DD40u);
    ctx->pc = 0x249170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249170u, 0x24DD38u, 0x24DD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DD40u;
label_24dd40:
    // 0x24dd40: 0x1602fff6  bne         $s0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x24DD40u;
    {
        const bool branch_taken_0x24dd40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x24dd40) {
            ctx->pc = 0x24DD1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24dd1c;
        }
    }
    ctx->pc = 0x24DD48u;
    // 0x24dd48: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x24dd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24dd4c: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x24dd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x24dd50: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x24dd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24dd54: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24DD54u;
    {
        const bool branch_taken_0x24dd54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x24dd54) {
            ctx->pc = 0x24DD64u;
            goto label_24dd64;
        }
    }
    ctx->pc = 0x24DD5Cu;
    // 0x24dd5c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x24dd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24dd60: 0xac600044  sw          $zero, 0x44($v1)
    ctx->pc = 0x24dd60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
label_24dd64:
    // 0x24dd64: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x24dd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24dd68: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24DD68u;
    {
        const bool branch_taken_0x24dd68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24dd68) {
            ctx->pc = 0x24DD8Cu;
            goto label_24dd8c;
        }
    }
    ctx->pc = 0x24DD70u;
    // 0x24dd70: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x24dd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24dd74: 0xc093168  jal         func_24C5A0
    ctx->pc = 0x24DD74u;
    SET_GPR_U32(ctx, 31, 0x24DD7Cu);
    ctx->pc = 0x24C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C5A0u, 0x24DD74u, 0x24DD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DD7Cu;
label_24dd7c:
    // 0x24dd7c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x24dd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24dd80: 0xc119c5c  jal         func_467170
    ctx->pc = 0x24DD80u;
    SET_GPR_U32(ctx, 31, 0x24DD88u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x24DD80u, 0x24DD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DD88u;
label_24dd88:
    // 0x24dd88: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x24dd88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_24dd8c:
    // 0x24dd8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24dd8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24dd90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24dd90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24dd94: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x24dd94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24dd98: 0x3e00008  jr          $ra
    ctx->pc = 0x24DD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DDA0u;
}
