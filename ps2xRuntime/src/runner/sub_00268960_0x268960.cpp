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

// Function: sub_00268960
// Address: 0x268960 - 0x2689b0
void sub_00268960_0x268960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268960_0x268960");
#endif

    switch (ctx->pc) {
        case 0x268978u: goto label_268978;
        case 0x268984u: goto label_268984;
        default: break;
    }

    ctx->pc = 0x268960u;

    // 0x268960: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x268960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x268964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x268964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x268968: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x268968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26896c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x26896cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x268970: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x268970u;
    {
        const bool branch_taken_0x268970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268970) {
            ctx->pc = 0x268990u;
            goto label_268990;
        }
    }
    ctx->pc = 0x268978u;
label_268978:
    // 0x268978: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x268978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26897c: 0xc09a26c  jal         func_2689B0
    ctx->pc = 0x26897Cu;
    SET_GPR_U32(ctx, 31, 0x268984u);
    ctx->pc = 0x2689B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2689B0u, 0x26897Cu, 0x268984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268984u;
label_268984:
    // 0x268984: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x268984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268988: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x268988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x26898c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x26898cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_268990:
    // 0x268990: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x268990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268994: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x268994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268998: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x268998u;
    {
        const bool branch_taken_0x268998 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x268998) {
            ctx->pc = 0x268978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_268978;
        }
    }
    ctx->pc = 0x2689A0u;
    // 0x2689a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2689a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2689a4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2689a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2689a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2689A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2689A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2689B0u;
}
