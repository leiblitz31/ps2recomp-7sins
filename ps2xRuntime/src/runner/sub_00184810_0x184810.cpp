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

// Function: sub_00184810
// Address: 0x184810 - 0x184870
void sub_00184810_0x184810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184810_0x184810");
#endif

    switch (ctx->pc) {
        case 0x18482cu: goto label_18482c;
        case 0x18483cu: goto label_18483c;
        case 0x184850u: goto label_184850;
        default: break;
    }

    ctx->pc = 0x184810u;

    // 0x184810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x184810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x184814: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x184814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x184818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18481c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x18481cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x184820: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x184820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184824: 0xc061284  jal         func_184A10
    ctx->pc = 0x184824u;
    SET_GPR_U32(ctx, 31, 0x18482Cu);
    ctx->pc = 0x184A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184A10u, 0x184824u, 0x18482Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18482Cu;
label_18482c:
    // 0x18482c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18482cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184830: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x184830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184834: 0xc06127c  jal         func_1849F0
    ctx->pc = 0x184834u;
    SET_GPR_U32(ctx, 31, 0x18483Cu);
    ctx->pc = 0x1849F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1849F0u, 0x184834u, 0x18483Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18483Cu;
label_18483c:
    // 0x18483c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x18483cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184840: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x184840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184844: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x184844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184848: 0xc06121c  jal         func_184870
    ctx->pc = 0x184848u;
    SET_GPR_U32(ctx, 31, 0x184850u);
    ctx->pc = 0x184870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184870u, 0x184848u, 0x184850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184850u;
label_184850:
    // 0x184850: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x184850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184854: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x184854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184858: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x184858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18485c: 0x3e00008  jr          $ra
    ctx->pc = 0x18485Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18485Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184864u;
    // 0x184864: 0x0  nop
    ctx->pc = 0x184864u;
    // NOP
    // 0x184868: 0x0  nop
    ctx->pc = 0x184868u;
    // NOP
    // 0x18486c: 0x0  nop
    ctx->pc = 0x18486cu;
    // NOP
    ctx->pc = 0x184870u;
}
