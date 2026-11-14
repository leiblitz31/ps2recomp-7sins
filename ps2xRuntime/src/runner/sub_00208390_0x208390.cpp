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

// Function: sub_00208390
// Address: 0x208390 - 0x2083e0
void sub_00208390_0x208390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208390_0x208390");
#endif

    switch (ctx->pc) {
        case 0x2083c8u: goto label_2083c8;
        default: break;
    }

    ctx->pc = 0x208390u;

    // 0x208390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x208390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x208394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x208398: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x208398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x20839c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x20839cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2083a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2083a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2083a4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2083a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2083a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2083a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2083ac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2083acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2083b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2083b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2083b4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2083b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2083b8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2083b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2083bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2083bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2083c0: 0xc0820f8  jal         func_2083E0
    ctx->pc = 0x2083C0u;
    SET_GPR_U32(ctx, 31, 0x2083C8u);
    ctx->pc = 0x2083E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2083E0u, 0x2083C0u, 0x2083C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2083C8u;
label_2083c8:
    // 0x2083c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2083c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2083cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2083ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2083d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2083d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2083d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2083D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2083D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2083DCu;
    // 0x2083dc: 0x0  nop
    ctx->pc = 0x2083dcu;
    // NOP
    ctx->pc = 0x2083e0u;
}
