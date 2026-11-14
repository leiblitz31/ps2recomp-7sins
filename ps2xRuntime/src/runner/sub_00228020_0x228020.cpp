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

// Function: sub_00228020
// Address: 0x228020 - 0x228070
void sub_00228020_0x228020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228020_0x228020");
#endif

    switch (ctx->pc) {
        case 0x228038u: goto label_228038;
        case 0x228044u: goto label_228044;
        default: break;
    }

    ctx->pc = 0x228020u;

    // 0x228020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x228020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x228024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228028: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x228028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22802c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22802cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x228030: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x228030u;
    {
        const bool branch_taken_0x228030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228030) {
            ctx->pc = 0x228050u;
            goto label_228050;
        }
    }
    ctx->pc = 0x228038u;
label_228038:
    // 0x228038: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x228038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22803c: 0xc08a01c  jal         func_228070
    ctx->pc = 0x22803Cu;
    SET_GPR_U32(ctx, 31, 0x228044u);
    ctx->pc = 0x228070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228070u, 0x22803Cu, 0x228044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228044u;
label_228044:
    // 0x228044: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x228044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228048: 0x2463002c  addiu       $v1, $v1, 0x2C
    ctx->pc = 0x228048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x22804c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x22804cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_228050:
    // 0x228050: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x228050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228054: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x228054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228058: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x228058u;
    {
        const bool branch_taken_0x228058 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x228058) {
            ctx->pc = 0x228038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228038;
        }
    }
    ctx->pc = 0x228060u;
    // 0x228060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228064: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x228064u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x228068: 0x3e00008  jr          $ra
    ctx->pc = 0x228068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228070u;
}
