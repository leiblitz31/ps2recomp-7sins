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

// Function: sub_0023BD90
// Address: 0x23bd90 - 0x23bde0
void sub_0023BD90_0x23bd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BD90_0x23bd90");
#endif

    ctx->pc = 0x23bd90u;

    // 0x23bd90: 0x8f82bbe8  lw          $v0, -0x4418($gp)
    ctx->pc = 0x23bd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949864)));
    // 0x23bd94: 0x1002000f  beq         $zero, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23BD94u;
    {
        const bool branch_taken_0x23bd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x23bd94) {
            ctx->pc = 0x23BDD4u;
            goto label_23bdd4;
        }
    }
    ctx->pc = 0x23BD9Cu;
    // 0x23bd9c: 0x8f82bbe8  lw          $v0, -0x4418($gp)
    ctx->pc = 0x23bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949864)));
    // 0x23bda0: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x23bda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x23bda4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23bda8: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23BDA8u;
    {
        const bool branch_taken_0x23bda8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23bda8) {
            ctx->pc = 0x23BDD4u;
            goto label_23bdd4;
        }
    }
    ctx->pc = 0x23BDB0u;
    // 0x23bdb0: 0x8f84bbe8  lw          $a0, -0x4418($gp)
    ctx->pc = 0x23bdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949864)));
    // 0x23bdb4: 0x8f82bbe8  lw          $v0, -0x4418($gp)
    ctx->pc = 0x23bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949864)));
    // 0x23bdb8: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x23bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x23bdbc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x23bdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23bdc0: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x23bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x23bdc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23bdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23bdc8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23bdcc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23BDCCu;
    {
        const bool branch_taken_0x23bdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bdcc) {
            ctx->pc = 0x23BDD8u;
            goto label_23bdd8;
        }
    }
    ctx->pc = 0x23BDD4u;
label_23bdd4:
    // 0x23bdd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23bdd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23bdd8:
    // 0x23bdd8: 0x3e00008  jr          $ra
    ctx->pc = 0x23BDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BDD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BDE0u;
}
