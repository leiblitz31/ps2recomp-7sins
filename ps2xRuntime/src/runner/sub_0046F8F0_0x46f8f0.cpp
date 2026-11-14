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

// Function: sub_0046F8F0
// Address: 0x46f8f0 - 0x46f940
void sub_0046F8F0_0x46f8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046F8F0_0x46f8f0");
#endif

    switch (ctx->pc) {
        case 0x46f91cu: goto label_46f91c;
        default: break;
    }

    ctx->pc = 0x46f8f0u;

    // 0x46f8f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x46f8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x46f8f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46f8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46f8f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46f8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46f8fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46f8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46f900: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x46f900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x46f904: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46f904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x46f908: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x46F908u;
    {
        const bool branch_taken_0x46f908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x46f908) {
            ctx->pc = 0x46F928u;
            goto label_46f928;
        }
    }
    ctx->pc = 0x46F910u;
    // 0x46f910: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46f910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46f914: 0xc11be50  jal         func_46F940
    ctx->pc = 0x46F914u;
    SET_GPR_U32(ctx, 31, 0x46F91Cu);
    ctx->pc = 0x46F940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F940u, 0x46F914u, 0x46F91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F91Cu;
label_46f91c:
    // 0x46f91c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46f91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x46f920: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x46F920u;
    {
        const bool branch_taken_0x46f920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f920) {
            ctx->pc = 0x46F92Cu;
            goto label_46f92c;
        }
    }
    ctx->pc = 0x46F928u;
label_46f928:
    // 0x46f928: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x46f928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46f92c:
    // 0x46f92c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46f92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46f930: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x46f930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x46f934: 0x3e00008  jr          $ra
    ctx->pc = 0x46F934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46F934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46F93Cu;
    // 0x46f93c: 0x0  nop
    ctx->pc = 0x46f93cu;
    // NOP
    ctx->pc = 0x46f940u;
}
