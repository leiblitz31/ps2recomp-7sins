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

// Function: sub_00477310
// Address: 0x477310 - 0x477360
void sub_00477310_0x477310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00477310_0x477310");
#endif

    switch (ctx->pc) {
        case 0x477328u: goto label_477328;
        case 0x477334u: goto label_477334;
        default: break;
    }

    ctx->pc = 0x477310u;

    // 0x477310: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x477310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x477314: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x477314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x477318: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x477318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x47731c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x47731cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x477320: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x477320u;
    {
        const bool branch_taken_0x477320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x477320) {
            ctx->pc = 0x477340u;
            goto label_477340;
        }
    }
    ctx->pc = 0x477328u;
label_477328:
    // 0x477328: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x477328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47732c: 0xc11dcd8  jal         func_477360
    ctx->pc = 0x47732Cu;
    SET_GPR_U32(ctx, 31, 0x477334u);
    ctx->pc = 0x477360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477360u, 0x47732Cu, 0x477334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477334u;
label_477334:
    // 0x477334: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x477334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x477338: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x477338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x47733c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x47733cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_477340:
    // 0x477340: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x477340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x477344: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x477344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x477348: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x477348u;
    {
        const bool branch_taken_0x477348 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x477348) {
            ctx->pc = 0x477328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_477328;
        }
    }
    ctx->pc = 0x477350u;
    // 0x477350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x477350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x477354: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x477354u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x477358: 0x3e00008  jr          $ra
    ctx->pc = 0x477358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x477358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x477360u;
}
