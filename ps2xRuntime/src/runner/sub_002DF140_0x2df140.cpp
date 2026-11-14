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

// Function: sub_002DF140
// Address: 0x2df140 - 0x2df180
void sub_002DF140_0x2df140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF140_0x2df140");
#endif

    switch (ctx->pc) {
        case 0x2df164u: goto label_2df164;
        default: break;
    }

    ctx->pc = 0x2df140u;

    // 0x2df140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2df140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2df144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2df148: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2df148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2df14c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2df14cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2df150: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2df150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df154: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2df154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df158: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2df158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df15c: 0xc0b7c60  jal         func_2DF180
    ctx->pc = 0x2DF15Cu;
    SET_GPR_U32(ctx, 31, 0x2DF164u);
    ctx->pc = 0x2DF180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF180u, 0x2DF15Cu, 0x2DF164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF164u;
label_2df164:
    // 0x2df164: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df168: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2df168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2df16c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF16Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF174u;
    // 0x2df174: 0x0  nop
    ctx->pc = 0x2df174u;
    // NOP
    // 0x2df178: 0x0  nop
    ctx->pc = 0x2df178u;
    // NOP
    // 0x2df17c: 0x0  nop
    ctx->pc = 0x2df17cu;
    // NOP
    ctx->pc = 0x2df180u;
}
