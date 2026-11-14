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

// Function: sub_00136710
// Address: 0x136710 - 0x136770
void sub_00136710_0x136710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136710_0x136710");
#endif

    switch (ctx->pc) {
        case 0x13672cu: goto label_13672c;
        case 0x13673cu: goto label_13673c;
        case 0x136750u: goto label_136750;
        default: break;
    }

    ctx->pc = 0x136710u;

    // 0x136710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x136710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x136714: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x136714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x136718: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x136718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13671c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x13671cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x136720: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x136720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136724: 0xc04da84  jal         func_136A10
    ctx->pc = 0x136724u;
    SET_GPR_U32(ctx, 31, 0x13672Cu);
    ctx->pc = 0x136A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A10u, 0x136724u, 0x13672Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13672Cu;
label_13672c:
    // 0x13672c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13672cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136730: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x136730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136734: 0xc04da7c  jal         func_1369F0
    ctx->pc = 0x136734u;
    SET_GPR_U32(ctx, 31, 0x13673Cu);
    ctx->pc = 0x1369F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1369F0u, 0x136734u, 0x13673Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13673Cu;
label_13673c:
    // 0x13673c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x13673cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136740: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x136740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136744: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x136744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136748: 0xc04d9dc  jal         func_136770
    ctx->pc = 0x136748u;
    SET_GPR_U32(ctx, 31, 0x136750u);
    ctx->pc = 0x136770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136770u, 0x136748u, 0x136750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136750u;
label_136750:
    // 0x136750: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x136750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136754: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x136754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136758: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x136758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13675c: 0x3e00008  jr          $ra
    ctx->pc = 0x13675Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13675Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136764u;
    // 0x136764: 0x0  nop
    ctx->pc = 0x136764u;
    // NOP
    // 0x136768: 0x0  nop
    ctx->pc = 0x136768u;
    // NOP
    // 0x13676c: 0x0  nop
    ctx->pc = 0x13676cu;
    // NOP
    ctx->pc = 0x136770u;
}
