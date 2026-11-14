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

// Function: sub_001A1850
// Address: 0x1a1850 - 0x1a1890
void sub_001A1850_0x1a1850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1850_0x1a1850");
#endif

    switch (ctx->pc) {
        case 0x1a1878u: goto label_1a1878;
        default: break;
    }

    ctx->pc = 0x1a1850u;

    // 0x1a1850: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a1850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a1854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1858: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a1858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a185c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1a185cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1a1860: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1a1860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1a1864: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a1864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1868: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1a1868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a186c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1a186cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a1870: 0xc0685e8  jal         func_1A17A0
    ctx->pc = 0x1A1870u;
    SET_GPR_U32(ctx, 31, 0x1A1878u);
    ctx->pc = 0x1A17A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A17A0u, 0x1A1870u, 0x1A1878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1878u;
label_1a1878:
    // 0x1a1878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a187c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1a187cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a1880: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1888u;
    // 0x1a1888: 0x0  nop
    ctx->pc = 0x1a1888u;
    // NOP
    // 0x1a188c: 0x0  nop
    ctx->pc = 0x1a188cu;
    // NOP
    ctx->pc = 0x1a1890u;
}
