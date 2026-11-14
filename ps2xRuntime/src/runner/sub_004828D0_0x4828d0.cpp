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

// Function: sub_004828D0
// Address: 0x4828d0 - 0x482930
void sub_004828D0_0x4828d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004828D0_0x4828d0");
#endif

    switch (ctx->pc) {
        case 0x4828ecu: goto label_4828ec;
        case 0x4828fcu: goto label_4828fc;
        case 0x482910u: goto label_482910;
        default: break;
    }

    ctx->pc = 0x4828d0u;

    // 0x4828d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4828d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4828d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4828d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4828d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4828d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4828dc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x4828dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x4828e0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4828e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4828e4: 0xc120a80  jal         func_482A00
    ctx->pc = 0x4828E4u;
    SET_GPR_U32(ctx, 31, 0x4828ECu);
    ctx->pc = 0x482A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482A00u, 0x4828E4u, 0x4828ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4828ECu;
label_4828ec:
    // 0x4828ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4828ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4828f0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4828f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4828f4: 0xc120a78  jal         func_4829E0
    ctx->pc = 0x4828F4u;
    SET_GPR_U32(ctx, 31, 0x4828FCu);
    ctx->pc = 0x4829E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4829E0u, 0x4828F4u, 0x4828FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4828FCu;
label_4828fc:
    // 0x4828fc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4828fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x482900: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x482900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482904: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x482904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482908: 0xc120a4c  jal         func_482930
    ctx->pc = 0x482908u;
    SET_GPR_U32(ctx, 31, 0x482910u);
    ctx->pc = 0x482930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482930u, 0x482908u, 0x482910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482910u;
label_482910:
    // 0x482910: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x482910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482914: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x482914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x482918: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x482918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48291c: 0x3e00008  jr          $ra
    ctx->pc = 0x48291Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48291Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x482924u;
    // 0x482924: 0x0  nop
    ctx->pc = 0x482924u;
    // NOP
    // 0x482928: 0x0  nop
    ctx->pc = 0x482928u;
    // NOP
    // 0x48292c: 0x0  nop
    ctx->pc = 0x48292cu;
    // NOP
    ctx->pc = 0x482930u;
}
