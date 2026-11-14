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

// Function: sub_001A1810
// Address: 0x1a1810 - 0x1a1850
void sub_001A1810_0x1a1810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1810_0x1a1810");
#endif

    switch (ctx->pc) {
        case 0x1a1840u: goto label_1a1840;
        default: break;
    }

    ctx->pc = 0x1a1810u;

    // 0x1a1810: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a1810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a1814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1818: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1a1818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1a181c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1a181cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1a1820: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1a1820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1a1824: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x1a1824u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1828: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a1828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a182c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1a182cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a1830: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1a1830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1834: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x1a1834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1a1838: 0xc068614  jal         func_1A1850
    ctx->pc = 0x1A1838u;
    SET_GPR_U32(ctx, 31, 0x1A1840u);
    ctx->pc = 0x1A1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1850u, 0x1A1838u, 0x1A1840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1840u;
label_1a1840:
    // 0x1a1840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1844: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1a1844u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a1848: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1850u;
}
