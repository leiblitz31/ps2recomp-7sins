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

// Function: sub_0022A130
// Address: 0x22a130 - 0x22a190
void sub_0022A130_0x22a130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A130_0x22a130");
#endif

    switch (ctx->pc) {
        case 0x22a158u: goto label_22a158;
        case 0x22a170u: goto label_22a170;
        default: break;
    }

    ctx->pc = 0x22a130u;

    // 0x22a130: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22a130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22a134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a138: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x22a138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x22a13c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x22a13cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x22a140: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x22a140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x22a144: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x22a144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x22a148: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x22a148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x22a14c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x22a14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22a150: 0xc08a864  jal         func_22A190
    ctx->pc = 0x22A150u;
    SET_GPR_U32(ctx, 31, 0x22A158u);
    ctx->pc = 0x22A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A190u, 0x22A150u, 0x22A158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A158u;
label_22a158:
    // 0x22a158: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22a158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a15c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x22a15cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a160: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x22a160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a164: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x22a164u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22a168: 0xc08ab8c  jal         func_22AE30
    ctx->pc = 0x22A168u;
    SET_GPR_U32(ctx, 31, 0x22A170u);
    ctx->pc = 0x22AE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AE30u, 0x22A168u, 0x22A170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A170u;
label_22a170:
    // 0x22a170: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x22a170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a174: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a178: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x22a178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22a17c: 0x3e00008  jr          $ra
    ctx->pc = 0x22A17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A184u;
    // 0x22a184: 0x0  nop
    ctx->pc = 0x22a184u;
    // NOP
    // 0x22a188: 0x0  nop
    ctx->pc = 0x22a188u;
    // NOP
    // 0x22a18c: 0x0  nop
    ctx->pc = 0x22a18cu;
    // NOP
    ctx->pc = 0x22a190u;
}
