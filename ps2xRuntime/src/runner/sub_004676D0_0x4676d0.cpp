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

// Function: sub_004676D0
// Address: 0x4676d0 - 0x467710
void sub_004676D0_0x4676d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004676D0_0x4676d0");
#endif

    ctx->pc = 0x4676d0u;

    // 0x4676d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4676d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4676d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4676d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4676d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4676d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4676dc: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x4676dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x4676e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4676E0u;
    {
        const bool branch_taken_0x4676e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4676e0) {
            ctx->pc = 0x4676F4u;
            goto label_4676f4;
        }
    }
    ctx->pc = 0x4676E8u;
    // 0x4676e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4676e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4676ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4676ECu;
    {
        const bool branch_taken_0x4676ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4676ec) {
            ctx->pc = 0x4676F8u;
            goto label_4676f8;
        }
    }
    ctx->pc = 0x4676F4u;
label_4676f4:
    // 0x4676f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4676f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4676f8:
    // 0x4676f8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4676f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4676fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4676FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4676FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x467704u;
    // 0x467704: 0x0  nop
    ctx->pc = 0x467704u;
    // NOP
    // 0x467708: 0x0  nop
    ctx->pc = 0x467708u;
    // NOP
    // 0x46770c: 0x0  nop
    ctx->pc = 0x46770cu;
    // NOP
    ctx->pc = 0x467710u;
}
