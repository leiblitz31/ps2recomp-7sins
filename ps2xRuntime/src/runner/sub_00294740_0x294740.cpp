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

// Function: sub_00294740
// Address: 0x294740 - 0x294790
void sub_00294740_0x294740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294740_0x294740");
#endif

    ctx->pc = 0x294740u;

    // 0x294740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x294740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x294744: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x294744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x294748: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x294748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x29474c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x29474cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294750: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x294750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x294754: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x294754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x294758: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x294758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x29475c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x29475cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x294760: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x294760u;
    {
        const bool branch_taken_0x294760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x294760) {
            ctx->pc = 0x29477Cu;
            goto label_29477c;
        }
    }
    ctx->pc = 0x294768u;
    // 0x294768: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x294768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29476c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29476cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x294770: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x294770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294774: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x294774u;
    {
        const bool branch_taken_0x294774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294774) {
            ctx->pc = 0x294780u;
            goto label_294780;
        }
    }
    ctx->pc = 0x29477Cu;
label_29477c:
    // 0x29477c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x29477cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_294780:
    // 0x294780: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x294780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x294784: 0x3e00008  jr          $ra
    ctx->pc = 0x294784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29478Cu;
    // 0x29478c: 0x0  nop
    ctx->pc = 0x29478cu;
    // NOP
    ctx->pc = 0x294790u;
}
