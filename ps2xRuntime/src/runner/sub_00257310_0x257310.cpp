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

// Function: sub_00257310
// Address: 0x257310 - 0x257350
void sub_00257310_0x257310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257310_0x257310");
#endif

    switch (ctx->pc) {
        case 0x25733cu: goto label_25733c;
        default: break;
    }

    ctx->pc = 0x257310u;

    // 0x257310: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x257310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x257314: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x257314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x257318: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x257318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25731c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x25731cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x257320: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x257320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x257324: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x257324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257328: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x257328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25732c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x25732cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x257330: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x257330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x257334: 0xc095cd4  jal         func_257350
    ctx->pc = 0x257334u;
    SET_GPR_U32(ctx, 31, 0x25733Cu);
    ctx->pc = 0x257350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257350u, 0x257334u, 0x25733Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25733Cu;
label_25733c:
    // 0x25733c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25733cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257340: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x257340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x257344: 0x3e00008  jr          $ra
    ctx->pc = 0x257344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25734Cu;
    // 0x25734c: 0x0  nop
    ctx->pc = 0x25734cu;
    // NOP
    ctx->pc = 0x257350u;
}
