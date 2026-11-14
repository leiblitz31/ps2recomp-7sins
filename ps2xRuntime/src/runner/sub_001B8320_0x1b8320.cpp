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

// Function: sub_001B8320
// Address: 0x1b8320 - 0x1b8360
void sub_001B8320_0x1b8320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8320_0x1b8320");
#endif

    switch (ctx->pc) {
        case 0x1b8350u: goto label_1b8350;
        default: break;
    }

    ctx->pc = 0x1b8320u;

    // 0x1b8320: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b8320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b8324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8328: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1b8328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1b832c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1b832cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1b8330: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1b8330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1b8334: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x1b8334u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b8338: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b8338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b833c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1b833cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b8340: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1b8340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b8344: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x1b8344u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1b8348: 0xc06e0d8  jal         func_1B8360
    ctx->pc = 0x1B8348u;
    SET_GPR_U32(ctx, 31, 0x1B8350u);
    ctx->pc = 0x1B8360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8360u, 0x1B8348u, 0x1B8350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8350u;
label_1b8350:
    // 0x1b8350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8354: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1b8354u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b8358: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8360u;
}
