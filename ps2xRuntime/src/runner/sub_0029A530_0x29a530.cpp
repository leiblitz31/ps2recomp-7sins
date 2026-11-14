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

// Function: sub_0029A530
// Address: 0x29a530 - 0x29a590
void sub_0029A530_0x29a530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A530_0x29a530");
#endif

    switch (ctx->pc) {
        case 0x29a54cu: goto label_29a54c;
        case 0x29a55cu: goto label_29a55c;
        case 0x29a570u: goto label_29a570;
        default: break;
    }

    ctx->pc = 0x29a530u;

    // 0x29a530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29a530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29a534: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29a534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29a538: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29a538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29a53c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x29a53cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x29a540: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x29a540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a544: 0xc0a69a8  jal         func_29A6A0
    ctx->pc = 0x29A544u;
    SET_GPR_U32(ctx, 31, 0x29A54Cu);
    ctx->pc = 0x29A6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6A0u, 0x29A544u, 0x29A54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A54Cu;
label_29a54c:
    // 0x29a54c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29a54cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a550: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x29a550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a554: 0xc0a6990  jal         func_29A640
    ctx->pc = 0x29A554u;
    SET_GPR_U32(ctx, 31, 0x29A55Cu);
    ctx->pc = 0x29A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A640u, 0x29A554u, 0x29A55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A55Cu;
label_29a55c:
    // 0x29a55c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x29a55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a560: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29a560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a564: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x29a564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a568: 0xc0a6964  jal         func_29A590
    ctx->pc = 0x29A568u;
    SET_GPR_U32(ctx, 31, 0x29A570u);
    ctx->pc = 0x29A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A590u, 0x29A568u, 0x29A570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A570u;
label_29a570:
    // 0x29a570: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29a570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a574: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29a574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a578: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x29a578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29a57c: 0x3e00008  jr          $ra
    ctx->pc = 0x29A57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A584u;
    // 0x29a584: 0x0  nop
    ctx->pc = 0x29a584u;
    // NOP
    // 0x29a588: 0x0  nop
    ctx->pc = 0x29a588u;
    // NOP
    // 0x29a58c: 0x0  nop
    ctx->pc = 0x29a58cu;
    // NOP
    ctx->pc = 0x29a590u;
}
