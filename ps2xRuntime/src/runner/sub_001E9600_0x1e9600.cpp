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

// Function: sub_001E9600
// Address: 0x1e9600 - 0x1e9660
void sub_001E9600_0x1e9600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9600_0x1e9600");
#endif

    switch (ctx->pc) {
        case 0x1e961cu: goto label_1e961c;
        case 0x1e962cu: goto label_1e962c;
        default: break;
    }

    ctx->pc = 0x1e9600u;

    // 0x1e9600: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e9600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e9604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e9608: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e9608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e960c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e960cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e9610: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1e9610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1e9614: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E9614u;
    {
        const bool branch_taken_0x1e9614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9614) {
            ctx->pc = 0x1E9638u;
            goto label_1e9638;
        }
    }
    ctx->pc = 0x1E961Cu;
label_1e961c:
    // 0x1e961c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e961cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9620: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1e9620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e9624: 0xc052608  jal         func_149820
    ctx->pc = 0x1E9624u;
    SET_GPR_U32(ctx, 31, 0x1E962Cu);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x1E9624u, 0x1E962Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E962Cu;
label_1e962c:
    // 0x1e962c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e962cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9630: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1e9630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1e9634: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1e9634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1e9638:
    // 0x1e9638: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e9638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e963c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1e963cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9640: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E9640u;
    {
        const bool branch_taken_0x1e9640 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e9640) {
            ctx->pc = 0x1E961Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e961c;
        }
    }
    ctx->pc = 0x1E9648u;
    // 0x1e9648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e964c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1e964cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e9650: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9658u;
    // 0x1e9658: 0x0  nop
    ctx->pc = 0x1e9658u;
    // NOP
    // 0x1e965c: 0x0  nop
    ctx->pc = 0x1e965cu;
    // NOP
    ctx->pc = 0x1e9660u;
}
