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

// Function: sub_00228120
// Address: 0x228120 - 0x228170
void sub_00228120_0x228120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228120_0x228120");
#endif

    switch (ctx->pc) {
        case 0x228144u: goto label_228144;
        default: break;
    }

    ctx->pc = 0x228120u;

    // 0x228120: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x228120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x228124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228128: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x228128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22812c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22812cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x228130: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x228130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x228134: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x228134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228138: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x228138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22813c: 0xc08a05c  jal         func_228170
    ctx->pc = 0x22813Cu;
    SET_GPR_U32(ctx, 31, 0x228144u);
    ctx->pc = 0x228170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228170u, 0x22813Cu, 0x228144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228144u;
label_228144:
    // 0x228144: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x228144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x228148: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x228148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22814c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22814cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x228150: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x228150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228154: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228158: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x228158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22815c: 0x3e00008  jr          $ra
    ctx->pc = 0x22815Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22815Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228164u;
    // 0x228164: 0x0  nop
    ctx->pc = 0x228164u;
    // NOP
    // 0x228168: 0x0  nop
    ctx->pc = 0x228168u;
    // NOP
    // 0x22816c: 0x0  nop
    ctx->pc = 0x22816cu;
    // NOP
    ctx->pc = 0x228170u;
}
