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

// Function: sub_002D0280
// Address: 0x2d0280 - 0x2d02c0
void sub_002D0280_0x2d0280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0280_0x2d0280");
#endif

    switch (ctx->pc) {
        case 0x2d02a4u: goto label_2d02a4;
        default: break;
    }

    ctx->pc = 0x2d0280u;

    // 0x2d0280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d0284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0288: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d0288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d028c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2d028cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2d0290: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d0290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0294: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2d0294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0298: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d0298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d029c: 0xc0b40b0  jal         func_2D02C0
    ctx->pc = 0x2D029Cu;
    SET_GPR_U32(ctx, 31, 0x2D02A4u);
    ctx->pc = 0x2D02C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D02C0u, 0x2D029Cu, 0x2D02A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D02A4u;
label_2d02a4:
    // 0x2d02a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d02a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d02a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d02a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d02ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2D02ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D02ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D02B4u;
    // 0x2d02b4: 0x0  nop
    ctx->pc = 0x2d02b4u;
    // NOP
    // 0x2d02b8: 0x0  nop
    ctx->pc = 0x2d02b8u;
    // NOP
    // 0x2d02bc: 0x0  nop
    ctx->pc = 0x2d02bcu;
    // NOP
    ctx->pc = 0x2d02c0u;
}
