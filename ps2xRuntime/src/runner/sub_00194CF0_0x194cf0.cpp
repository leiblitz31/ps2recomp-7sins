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

// Function: sub_00194CF0
// Address: 0x194cf0 - 0x194d40
void sub_00194CF0_0x194cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194CF0_0x194cf0");
#endif

    switch (ctx->pc) {
        case 0x194d08u: goto label_194d08;
        case 0x194d14u: goto label_194d14;
        default: break;
    }

    ctx->pc = 0x194cf0u;

    // 0x194cf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x194cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x194cf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194cf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x194cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x194cfc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x194cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x194d00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x194D00u;
    {
        const bool branch_taken_0x194d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194d00) {
            ctx->pc = 0x194D20u;
            goto label_194d20;
        }
    }
    ctx->pc = 0x194D08u;
label_194d08:
    // 0x194d08: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x194d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194d0c: 0xc065350  jal         func_194D40
    ctx->pc = 0x194D0Cu;
    SET_GPR_U32(ctx, 31, 0x194D14u);
    ctx->pc = 0x194D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194D40u, 0x194D0Cu, 0x194D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194D14u;
label_194d14:
    // 0x194d14: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x194d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194d18: 0x24630024  addiu       $v1, $v1, 0x24
    ctx->pc = 0x194d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x194d1c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x194d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_194d20:
    // 0x194d20: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x194d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194d24: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x194d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194d28: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x194D28u;
    {
        const bool branch_taken_0x194d28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x194d28) {
            ctx->pc = 0x194D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194d08;
        }
    }
    ctx->pc = 0x194D30u;
    // 0x194d30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194d34: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x194d34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x194d38: 0x3e00008  jr          $ra
    ctx->pc = 0x194D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194D40u;
}
