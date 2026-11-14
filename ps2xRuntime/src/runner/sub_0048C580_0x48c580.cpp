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

// Function: sub_0048C580
// Address: 0x48c580 - 0x48c5e0
void sub_0048C580_0x48c580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048C580_0x48c580");
#endif

    switch (ctx->pc) {
        case 0x48c59cu: goto label_48c59c;
        case 0x48c5acu: goto label_48c5ac;
        case 0x48c5c0u: goto label_48c5c0;
        default: break;
    }

    ctx->pc = 0x48c580u;

    // 0x48c580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48c580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48c584: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48c584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x48c588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48c588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48c58c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x48c58cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x48c590: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x48c590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48c594: 0xc123200  jal         func_48C800
    ctx->pc = 0x48C594u;
    SET_GPR_U32(ctx, 31, 0x48C59Cu);
    ctx->pc = 0x48C800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C800u, 0x48C594u, 0x48C59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C59Cu;
label_48c59c:
    // 0x48c59c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x48c59cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c5a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x48c5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48c5a4: 0xc1231f8  jal         func_48C7E0
    ctx->pc = 0x48C5A4u;
    SET_GPR_U32(ctx, 31, 0x48C5ACu);
    ctx->pc = 0x48C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C7E0u, 0x48C5A4u, 0x48C5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C5ACu;
label_48c5ac:
    // 0x48c5ac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x48c5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48c5b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x48c5b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c5b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x48c5b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c5b8: 0xc123178  jal         func_48C5E0
    ctx->pc = 0x48C5B8u;
    SET_GPR_U32(ctx, 31, 0x48C5C0u);
    ctx->pc = 0x48C5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C5E0u, 0x48C5B8u, 0x48C5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C5C0u;
label_48c5c0:
    // 0x48c5c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48c5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48c5c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48c5c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48c5c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x48c5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48c5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x48C5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48C5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48C5D4u;
    // 0x48c5d4: 0x0  nop
    ctx->pc = 0x48c5d4u;
    // NOP
    // 0x48c5d8: 0x0  nop
    ctx->pc = 0x48c5d8u;
    // NOP
    // 0x48c5dc: 0x0  nop
    ctx->pc = 0x48c5dcu;
    // NOP
    ctx->pc = 0x48c5e0u;
}
