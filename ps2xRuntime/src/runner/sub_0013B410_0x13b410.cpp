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

// Function: sub_0013B410
// Address: 0x13b410 - 0x13b460
void sub_0013B410_0x13b410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B410_0x13b410");
#endif

    switch (ctx->pc) {
        case 0x13b434u: goto label_13b434;
        default: break;
    }

    ctx->pc = 0x13b410u;

    // 0x13b410: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13b410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13b414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13b414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13b418: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13b418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13b41c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13b41cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x13b420: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x13b420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x13b424: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13b424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b428: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x13b428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b42c: 0xc042844  jal         func_10A110
    ctx->pc = 0x13B42Cu;
    SET_GPR_U32(ctx, 31, 0x13B434u);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x13B42Cu, 0x13B434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B434u;
label_13b434:
    // 0x13b434: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13b434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b438: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13b438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13b43c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b440: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x13b440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x13b444: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13b444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13b448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b44c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x13b44cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13b450: 0x3e00008  jr          $ra
    ctx->pc = 0x13B450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B458u;
    // 0x13b458: 0x0  nop
    ctx->pc = 0x13b458u;
    // NOP
    // 0x13b45c: 0x0  nop
    ctx->pc = 0x13b45cu;
    // NOP
    ctx->pc = 0x13b460u;
}
