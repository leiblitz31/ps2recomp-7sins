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

// Function: sub_0014B660
// Address: 0x14b660 - 0x14b6a0
void sub_0014B660_0x14b660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B660_0x14b660");
#endif

    switch (ctx->pc) {
        case 0x14b688u: goto label_14b688;
        default: break;
    }

    ctx->pc = 0x14b660u;

    // 0x14b660: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14b660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14b664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b668: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14b668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14b66c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x14b66cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x14b670: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x14b670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x14b674: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14b674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b678: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x14b678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b67c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x14b67cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b680: 0xc052da8  jal         func_14B6A0
    ctx->pc = 0x14B680u;
    SET_GPR_U32(ctx, 31, 0x14B688u);
    ctx->pc = 0x14B6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6A0u, 0x14B680u, 0x14B688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B688u;
label_14b688:
    // 0x14b688: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14b688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b68c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b68cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b690: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x14b690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14b694: 0x3e00008  jr          $ra
    ctx->pc = 0x14B694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B69Cu;
    // 0x14b69c: 0x0  nop
    ctx->pc = 0x14b69cu;
    // NOP
    ctx->pc = 0x14b6a0u;
}
