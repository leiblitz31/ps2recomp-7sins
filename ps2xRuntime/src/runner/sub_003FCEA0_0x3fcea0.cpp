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

// Function: sub_003FCEA0
// Address: 0x3fcea0 - 0x3fcec8
void sub_003FCEA0_0x3fcea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FCEA0_0x3fcea0");
#endif

    ctx->pc = 0x3fcea0u;

    // 0x3fcea0: 0x9082020b  lbu         $v0, 0x20B($a0)
    ctx->pc = 0x3fcea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 523)));
    // 0x3fcea4: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x3fcea4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3fcea8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FCEA8u;
    {
        const bool branch_taken_0x3fcea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FCEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCEA8u;
        // 0x3fceac: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcea8) {
            ctx->pc = 0x3FCEBCu;
            goto label_3fcebc;
        }
    }
    ctx->pc = 0x3FCEB0u;
    // 0x3fceb0: 0xdc820108  ld          $v0, 0x108($a0)
    ctx->pc = 0x3fceb0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x3fceb4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3fceb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3fceb8: 0xfc820108  sd          $v0, 0x108($a0)
    ctx->pc = 0x3fceb8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 264), GPR_U64(ctx, 2));
label_3fcebc:
    // 0x3fcebc: 0x3e00008  jr          $ra
    ctx->pc = 0x3FCEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FCEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FCEC4u;
    // 0x3fcec4: 0x0  nop
    ctx->pc = 0x3fcec4u;
    // NOP
    ctx->pc = 0x3fcec8u;
}
