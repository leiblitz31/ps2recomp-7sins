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

// Function: sub_0020B710
// Address: 0x20b710 - 0x20b770
void sub_0020B710_0x20b710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B710_0x20b710");
#endif

    switch (ctx->pc) {
        case 0x20b72cu: goto label_20b72c;
        case 0x20b73cu: goto label_20b73c;
        case 0x20b750u: goto label_20b750;
        default: break;
    }

    ctx->pc = 0x20b710u;

    // 0x20b710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20b710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20b714: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20b714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20b718: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20b718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20b71c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x20b71cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x20b720: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x20b720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b724: 0xc082b90  jal         func_20AE40
    ctx->pc = 0x20B724u;
    SET_GPR_U32(ctx, 31, 0x20B72Cu);
    ctx->pc = 0x20AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE40u, 0x20B724u, 0x20B72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B72Cu;
label_20b72c:
    // 0x20b72c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20b72cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b730: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x20b730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b734: 0xc082e08  jal         func_20B820
    ctx->pc = 0x20B734u;
    SET_GPR_U32(ctx, 31, 0x20B73Cu);
    ctx->pc = 0x20B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B820u, 0x20B734u, 0x20B73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B73Cu;
label_20b73c:
    // 0x20b73c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x20b73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b740: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20b740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b744: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x20b744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b748: 0xc082ddc  jal         func_20B770
    ctx->pc = 0x20B748u;
    SET_GPR_U32(ctx, 31, 0x20B750u);
    ctx->pc = 0x20B770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B770u, 0x20B748u, 0x20B750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B750u;
label_20b750:
    // 0x20b750: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20b750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b754: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20b754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b758: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x20b758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20b75c: 0x3e00008  jr          $ra
    ctx->pc = 0x20B75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B75Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B764u;
    // 0x20b764: 0x0  nop
    ctx->pc = 0x20b764u;
    // NOP
    // 0x20b768: 0x0  nop
    ctx->pc = 0x20b768u;
    // NOP
    // 0x20b76c: 0x0  nop
    ctx->pc = 0x20b76cu;
    // NOP
    ctx->pc = 0x20b770u;
}
