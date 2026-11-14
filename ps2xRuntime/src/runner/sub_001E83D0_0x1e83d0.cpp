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

// Function: sub_001E83D0
// Address: 0x1e83d0 - 0x1e8430
void sub_001E83D0_0x1e83d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E83D0_0x1e83d0");
#endif

    switch (ctx->pc) {
        case 0x1e83ecu: goto label_1e83ec;
        case 0x1e83fcu: goto label_1e83fc;
        default: break;
    }

    ctx->pc = 0x1e83d0u;

    // 0x1e83d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e83d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e83d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e83d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e83d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e83d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e83dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e83dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e83e0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1e83e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1e83e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E83E4u;
    {
        const bool branch_taken_0x1e83e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e83e4) {
            ctx->pc = 0x1E8408u;
            goto label_1e8408;
        }
    }
    ctx->pc = 0x1E83ECu;
label_1e83ec:
    // 0x1e83ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e83ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e83f0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1e83f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e83f4: 0xc0785f0  jal         func_1E17C0
    ctx->pc = 0x1E83F4u;
    SET_GPR_U32(ctx, 31, 0x1E83FCu);
    ctx->pc = 0x1E17C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E17C0u, 0x1E83F4u, 0x1E83FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E83FCu;
label_1e83fc:
    // 0x1e83fc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e83fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8400: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x1e8400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1e8404: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1e8404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1e8408:
    // 0x1e8408: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e8408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e840c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1e840cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8410: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E8410u;
    {
        const bool branch_taken_0x1e8410 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e8410) {
            ctx->pc = 0x1E83ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e83ec;
        }
    }
    ctx->pc = 0x1E8418u;
    // 0x1e8418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e841c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1e841cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e8420: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8428u;
    // 0x1e8428: 0x0  nop
    ctx->pc = 0x1e8428u;
    // NOP
    // 0x1e842c: 0x0  nop
    ctx->pc = 0x1e842cu;
    // NOP
    ctx->pc = 0x1e8430u;
}
