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

// Function: sub_0045B700
// Address: 0x45b700 - 0x45b760
void sub_0045B700_0x45b700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045B700_0x45b700");
#endif

    ctx->pc = 0x45b700u;

    // 0x45b700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x45b700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x45b704: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x45b704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x45b708: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x45b708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45b70c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45B70Cu;
    {
        const bool branch_taken_0x45b70c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x45b70c) {
            ctx->pc = 0x45B720u;
            goto label_45b720;
        }
    }
    ctx->pc = 0x45B714u;
    // 0x45b714: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45b714u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45b718: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x45B718u;
    {
        const bool branch_taken_0x45b718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b718) {
            ctx->pc = 0x45B750u;
            goto label_45b750;
        }
    }
    ctx->pc = 0x45B720u;
label_45b720:
    // 0x45b720: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x45b720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45b724: 0x2841004e  slti        $at, $v0, 0x4E
    ctx->pc = 0x45b724u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)78) ? 1 : 0);
    // 0x45b728: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x45B728u;
    {
        const bool branch_taken_0x45b728 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x45b728) {
            ctx->pc = 0x45B74Cu;
            goto label_45b74c;
        }
    }
    ctx->pc = 0x45B730u;
    // 0x45b730: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x45b730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45b734: 0x284100b1  slti        $at, $v0, 0xB1
    ctx->pc = 0x45b734u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)177) ? 1 : 0);
    // 0x45b738: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x45B738u;
    {
        const bool branch_taken_0x45b738 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b738) {
            ctx->pc = 0x45B74Cu;
            goto label_45b74c;
        }
    }
    ctx->pc = 0x45B740u;
    // 0x45b740: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45b740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45b744: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x45B744u;
    {
        const bool branch_taken_0x45b744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b744) {
            ctx->pc = 0x45B750u;
            goto label_45b750;
        }
    }
    ctx->pc = 0x45B74Cu;
label_45b74c:
    // 0x45b74c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45b74cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45b750:
    // 0x45b750: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x45b750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x45b754: 0x3e00008  jr          $ra
    ctx->pc = 0x45B754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45B754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45B75Cu;
    // 0x45b75c: 0x0  nop
    ctx->pc = 0x45b75cu;
    // NOP
    ctx->pc = 0x45b760u;
}
