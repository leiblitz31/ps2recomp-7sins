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

// Function: sub_001C2140
// Address: 0x1c2140 - 0x1c2180
void sub_001C2140_0x1c2140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2140_0x1c2140");
#endif

    switch (ctx->pc) {
        case 0x1c2168u: goto label_1c2168;
        default: break;
    }

    ctx->pc = 0x1c2140u;

    // 0x1c2140: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c2140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c2144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2148: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1c2148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1c214c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1c214cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1c2150: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x1c2150u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c2154: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1c2154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2158: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1c2158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c215c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x1c215cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1c2160: 0xc070860  jal         func_1C2180
    ctx->pc = 0x1C2160u;
    SET_GPR_U32(ctx, 31, 0x1C2168u);
    ctx->pc = 0x1C2180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2180u, 0x1C2160u, 0x1C2168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2168u;
label_1c2168:
    // 0x1c2168: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c216c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1c216cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c2170: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2178u;
    // 0x1c2178: 0x0  nop
    ctx->pc = 0x1c2178u;
    // NOP
    // 0x1c217c: 0x0  nop
    ctx->pc = 0x1c217cu;
    // NOP
    ctx->pc = 0x1c2180u;
}
