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

// Function: sub_002BF130
// Address: 0x2bf130 - 0x2bf190
void sub_002BF130_0x2bf130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF130_0x2bf130");
#endif

    switch (ctx->pc) {
        case 0x2bf14cu: goto label_2bf14c;
        case 0x2bf15cu: goto label_2bf15c;
        case 0x2bf170u: goto label_2bf170;
        default: break;
    }

    ctx->pc = 0x2bf130u;

    // 0x2bf130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bf130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bf134: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bf134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bf138: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bf138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bf13c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2bf13cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2bf140: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2bf140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bf144: 0xc0afc98  jal         func_2BF260
    ctx->pc = 0x2BF144u;
    SET_GPR_U32(ctx, 31, 0x2BF14Cu);
    ctx->pc = 0x2BF260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF260u, 0x2BF144u, 0x2BF14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF14Cu;
label_2bf14c:
    // 0x2bf14c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bf14cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf150: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2bf150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bf154: 0xc0afc90  jal         func_2BF240
    ctx->pc = 0x2BF154u;
    SET_GPR_U32(ctx, 31, 0x2BF15Cu);
    ctx->pc = 0x2BF240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF240u, 0x2BF154u, 0x2BF15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF15Cu;
label_2bf15c:
    // 0x2bf15c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2bf15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bf160: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bf160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf164: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2bf164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf168: 0xc0afc64  jal         func_2BF190
    ctx->pc = 0x2BF168u;
    SET_GPR_U32(ctx, 31, 0x2BF170u);
    ctx->pc = 0x2BF190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF190u, 0x2BF168u, 0x2BF170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF170u;
label_2bf170:
    // 0x2bf170: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bf170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf174: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bf174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf178: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2bf178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bf17c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF184u;
    // 0x2bf184: 0x0  nop
    ctx->pc = 0x2bf184u;
    // NOP
    // 0x2bf188: 0x0  nop
    ctx->pc = 0x2bf188u;
    // NOP
    // 0x2bf18c: 0x0  nop
    ctx->pc = 0x2bf18cu;
    // NOP
    ctx->pc = 0x2bf190u;
}
