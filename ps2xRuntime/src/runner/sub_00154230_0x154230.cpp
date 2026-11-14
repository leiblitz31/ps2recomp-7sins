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

// Function: sub_00154230
// Address: 0x154230 - 0x154280
void sub_00154230_0x154230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154230_0x154230");
#endif

    switch (ctx->pc) {
        case 0x154258u: goto label_154258;
        case 0x15426cu: goto label_15426c;
        default: break;
    }

    ctx->pc = 0x154230u;

    // 0x154230: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x154230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x154234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x154238: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x154238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x15423c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x15423cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x154240: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x154240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x154244: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x154244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x154248: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x154248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15424c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x15424cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x154250: 0xc0555dc  jal         func_155770
    ctx->pc = 0x154250u;
    SET_GPR_U32(ctx, 31, 0x154258u);
    ctx->pc = 0x155770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155770u, 0x154250u, 0x154258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154258u;
label_154258:
    // 0x154258: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x154258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15425c: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x15425cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x154260: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x154260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x154264: 0xc0550a0  jal         func_154280
    ctx->pc = 0x154264u;
    SET_GPR_U32(ctx, 31, 0x15426Cu);
    ctx->pc = 0x154280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154280u, 0x154264u, 0x15426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15426Cu;
label_15426c:
    // 0x15426c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15426cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154270: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x154270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x154274: 0x3e00008  jr          $ra
    ctx->pc = 0x154274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15427Cu;
    // 0x15427c: 0x0  nop
    ctx->pc = 0x15427cu;
    // NOP
    ctx->pc = 0x154280u;
}
