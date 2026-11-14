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

// Function: sub_001E2100
// Address: 0x1e2100 - 0x1e2160
void sub_001E2100_0x1e2100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2100_0x1e2100");
#endif

    switch (ctx->pc) {
        case 0x1e2124u: goto label_1e2124;
        case 0x1e2138u: goto label_1e2138;
        case 0x1e2148u: goto label_1e2148;
        default: break;
    }

    ctx->pc = 0x1e2100u;

    // 0x1e2100: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e2100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e2104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e2108: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e2108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e210c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e210cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e2110: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1e2110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1e2114: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1e2114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e2118: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1e2118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e211c: 0xc0788e4  jal         func_1E2390
    ctx->pc = 0x1E211Cu;
    SET_GPR_U32(ctx, 31, 0x1E2124u);
    ctx->pc = 0x1E2390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2390u, 0x1E211Cu, 0x1E2124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2124u;
label_1e2124:
    // 0x1e2124: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1e2124u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e2128: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x1e2128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1e212c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1e212cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e2130: 0xc07887c  jal         func_1E21F0
    ctx->pc = 0x1E2130u;
    SET_GPR_U32(ctx, 31, 0x1E2138u);
    ctx->pc = 0x1E21F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E21F0u, 0x1E2130u, 0x1E2138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2138u;
label_1e2138:
    // 0x1e2138: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e2138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e213c: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x1e213cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1e2140: 0xc078858  jal         func_1E2160
    ctx->pc = 0x1E2140u;
    SET_GPR_U32(ctx, 31, 0x1E2148u);
    ctx->pc = 0x1E2160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2160u, 0x1E2140u, 0x1E2148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2148u;
label_1e2148:
    // 0x1e2148: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1e2148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e214c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e214cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2150: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1e2150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e2154: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E215Cu;
    // 0x1e215c: 0x0  nop
    ctx->pc = 0x1e215cu;
    // NOP
    ctx->pc = 0x1e2160u;
}
