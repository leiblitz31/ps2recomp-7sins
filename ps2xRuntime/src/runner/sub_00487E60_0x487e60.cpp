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

// Function: sub_00487E60
// Address: 0x487e60 - 0x487ee0
void sub_00487E60_0x487e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00487E60_0x487e60");
#endif

    ctx->pc = 0x487e60u;

    // 0x487e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x487e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x487e64: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x487e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x487e68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x487e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x487e6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x487e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x487e70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x487e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x487e74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x487e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x487e78: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x487E78u;
    {
        const bool branch_taken_0x487e78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x487e78) {
            ctx->pc = 0x487E9Cu;
            goto label_487e9c;
        }
    }
    ctx->pc = 0x487E80u;
    // 0x487e80: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x487e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x487e84: 0x24637bc0  addiu       $v1, $v1, 0x7BC0
    ctx->pc = 0x487e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31680));
    // 0x487e88: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x487e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x487e8c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x487e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x487e90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x487e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x487e94: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x487E94u;
    {
        const bool branch_taken_0x487e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x487e94) {
            ctx->pc = 0x487ED4u;
            goto label_487ed4;
        }
    }
    ctx->pc = 0x487E9Cu;
label_487e9c:
    // 0x487e9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x487e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x487ea0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x487ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x487ea4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x487ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x487ea8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x487ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x487eac: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x487EACu;
    {
        const bool branch_taken_0x487eac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x487eac) {
            ctx->pc = 0x487ED0u;
            goto label_487ed0;
        }
    }
    ctx->pc = 0x487EB4u;
    // 0x487eb4: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x487eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x487eb8: 0x24637bf0  addiu       $v1, $v1, 0x7BF0
    ctx->pc = 0x487eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31728));
    // 0x487ebc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x487ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x487ec0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x487ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x487ec4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x487ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x487ec8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x487EC8u;
    {
        const bool branch_taken_0x487ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x487ec8) {
            ctx->pc = 0x487ED4u;
            goto label_487ed4;
        }
    }
    ctx->pc = 0x487ED0u;
label_487ed0:
    // 0x487ed0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x487ed0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_487ed4:
    // 0x487ed4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x487ed4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x487ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x487ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x487EE0u;
}
