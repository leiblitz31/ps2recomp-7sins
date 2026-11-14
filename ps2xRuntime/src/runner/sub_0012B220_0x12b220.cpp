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

// Function: sub_0012B220
// Address: 0x12b220 - 0x12b260
void sub_0012B220_0x12b220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B220_0x12b220");
#endif

    switch (ctx->pc) {
        case 0x12b248u: goto label_12b248;
        default: break;
    }

    ctx->pc = 0x12b220u;

    // 0x12b220: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12b220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12b224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b228: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x12b228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x12b22c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x12b22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x12b230: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x12b230u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x12b234: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x12b234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b238: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x12b238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b23c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x12b23cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x12b240: 0xc04ac98  jal         func_12B260
    ctx->pc = 0x12B240u;
    SET_GPR_U32(ctx, 31, 0x12B248u);
    ctx->pc = 0x12B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B260u, 0x12B240u, 0x12B248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B248u;
label_12b248:
    // 0x12b248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b24c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x12b24cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12b250: 0x3e00008  jr          $ra
    ctx->pc = 0x12B250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B258u;
    // 0x12b258: 0x0  nop
    ctx->pc = 0x12b258u;
    // NOP
    // 0x12b25c: 0x0  nop
    ctx->pc = 0x12b25cu;
    // NOP
    ctx->pc = 0x12b260u;
}
