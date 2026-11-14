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

// Function: sub_001B1F80
// Address: 0x1b1f80 - 0x1b1fe0
void sub_001B1F80_0x1b1f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1F80_0x1b1f80");
#endif

    switch (ctx->pc) {
        case 0x1b1fa4u: goto label_1b1fa4;
        case 0x1b1fd0u: goto label_1b1fd0;
        default: break;
    }

    ctx->pc = 0x1b1f80u;

    // 0x1b1f80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b1f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b1f84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b1f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1f88: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1b1f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1b1f8c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1b1f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1b1f90: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1b1f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b1f94: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b1f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b1f98: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B1F98u;
    {
        const bool branch_taken_0x1b1f98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1f98) {
            ctx->pc = 0x1B1FC0u;
            goto label_1b1fc0;
        }
    }
    ctx->pc = 0x1B1FA0u;
    // 0x1b1fa0: 0x603021  addu        $a2, $v1, $zero
    ctx->pc = 0x1b1fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
label_1b1fa4:
    // 0x1b1fa4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1b1fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b1fa8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b1fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b1fac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b1facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b1fb0: 0x0  nop
    ctx->pc = 0x1b1fb0u;
    // NOP
    // 0x1b1fb4: 0x0  nop
    ctx->pc = 0x1b1fb4u;
    // NOP
    // 0x1b1fb8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B1FB8u;
    {
        const bool branch_taken_0x1b1fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1fb8) {
            ctx->pc = 0x1B1FA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1fa4;
        }
    }
    ctx->pc = 0x1B1FC0u;
label_1b1fc0:
    // 0x1b1fc0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b1fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1fc4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1b1fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1fc8: 0xc06c7f8  jal         func_1B1FE0
    ctx->pc = 0x1B1FC8u;
    SET_GPR_U32(ctx, 31, 0x1B1FD0u);
    ctx->pc = 0x1B1FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1FE0u, 0x1B1FC8u, 0x1B1FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1FD0u;
label_1b1fd0:
    // 0x1b1fd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1fd4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1b1fd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b1fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1FE0u;
}
