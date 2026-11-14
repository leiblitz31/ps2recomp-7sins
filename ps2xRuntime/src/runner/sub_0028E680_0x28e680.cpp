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

// Function: sub_0028E680
// Address: 0x28e680 - 0x28e6e0
void sub_0028E680_0x28e680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E680_0x28e680");
#endif

    switch (ctx->pc) {
        case 0x28e69cu: goto label_28e69c;
        case 0x28e6acu: goto label_28e6ac;
        default: break;
    }

    ctx->pc = 0x28e680u;

    // 0x28e680: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28e680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28e684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28e684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28e688: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x28e688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28e68c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28e68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x28e690: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x28e690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x28e694: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28E694u;
    {
        const bool branch_taken_0x28e694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e694) {
            ctx->pc = 0x28E6B8u;
            goto label_28e6b8;
        }
    }
    ctx->pc = 0x28E69Cu;
label_28e69c:
    // 0x28e69c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28e69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e6a0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x28e6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28e6a4: 0xc0a1824  jal         func_286090
    ctx->pc = 0x28E6A4u;
    SET_GPR_U32(ctx, 31, 0x28E6ACu);
    ctx->pc = 0x286090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286090u, 0x28E6A4u, 0x28E6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E6ACu;
label_28e6ac:
    // 0x28e6ac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x28e6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e6b0: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x28e6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x28e6b4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x28e6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_28e6b8:
    // 0x28e6b8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28e6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e6bc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x28e6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28e6c0: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x28E6C0u;
    {
        const bool branch_taken_0x28e6c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x28e6c0) {
            ctx->pc = 0x28E69Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28e69c;
        }
    }
    ctx->pc = 0x28E6C8u;
    // 0x28e6c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e6cc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x28e6ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28e6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x28E6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E6D8u;
    // 0x28e6d8: 0x0  nop
    ctx->pc = 0x28e6d8u;
    // NOP
    // 0x28e6dc: 0x0  nop
    ctx->pc = 0x28e6dcu;
    // NOP
    ctx->pc = 0x28e6e0u;
}
