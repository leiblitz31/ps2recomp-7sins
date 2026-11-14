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

// Function: sub_00133160
// Address: 0x133160 - 0x1331a0
void sub_00133160_0x133160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133160_0x133160");
#endif

    switch (ctx->pc) {
        case 0x13317cu: goto label_13317c;
        case 0x133190u: goto label_133190;
        default: break;
    }

    ctx->pc = 0x133160u;

    // 0x133160: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x133160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x133164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x133164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x133168: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x133168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x13316c: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x13316cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x133170: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x133170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x133174: 0xc04d650  jal         func_135940
    ctx->pc = 0x133174u;
    SET_GPR_U32(ctx, 31, 0x13317Cu);
    ctx->pc = 0x135940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135940u, 0x133174u, 0x13317Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13317Cu;
label_13317c:
    // 0x13317c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x13317cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x133180: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x133180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x133184: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x133184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133188: 0xc04cc68  jal         func_1331A0
    ctx->pc = 0x133188u;
    SET_GPR_U32(ctx, 31, 0x133190u);
    ctx->pc = 0x1331A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1331A0u, 0x133188u, 0x133190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133190u;
label_133190:
    // 0x133190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x133190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133194: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x133194u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x133198: 0x3e00008  jr          $ra
    ctx->pc = 0x133198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1331A0u;
}
