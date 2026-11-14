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

// Function: sub_002948B0
// Address: 0x2948b0 - 0x294930
void sub_002948B0_0x2948b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002948B0_0x2948b0");
#endif

    switch (ctx->pc) {
        case 0x2948e4u: goto label_2948e4;
        case 0x2948f4u: goto label_2948f4;
        case 0x294914u: goto label_294914;
        default: break;
    }

    ctx->pc = 0x2948b0u;

    // 0x2948b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2948b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2948b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2948b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2948b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2948b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2948bc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2948bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2948c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2948c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2948c4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2948C4u;
    {
        const bool branch_taken_0x2948c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2948c4) {
            ctx->pc = 0x294914u;
            goto label_294914;
        }
    }
    ctx->pc = 0x2948CCu;
    // 0x2948cc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2948ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2948d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2948d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2948d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2948d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2948d8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2948d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2948dc: 0xc0a50f8  jal         func_2943E0
    ctx->pc = 0x2948DCu;
    SET_GPR_U32(ctx, 31, 0x2948E4u);
    ctx->pc = 0x2943E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2943E0u, 0x2948DCu, 0x2948E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2948E4u;
label_2948e4:
    // 0x2948e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2948e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2948e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2948e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2948ec: 0xc0a524c  jal         func_294930
    ctx->pc = 0x2948ECu;
    SET_GPR_U32(ctx, 31, 0x2948F4u);
    ctx->pc = 0x294930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294930u, 0x2948ECu, 0x2948F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2948F4u;
label_2948f4:
    // 0x2948f4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2948f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2948f8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2948f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2948fc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2948fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x294900: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x294900u;
    {
        const bool branch_taken_0x294900 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x294900) {
            ctx->pc = 0x294914u;
            goto label_294914;
        }
    }
    ctx->pc = 0x294908u;
    // 0x294908: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x294908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29490c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x29490Cu;
    SET_GPR_U32(ctx, 31, 0x294914u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x29490Cu, 0x294914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294914u;
label_294914:
    // 0x294914: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x294914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x294918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29491c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x29491cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x294920: 0x3e00008  jr          $ra
    ctx->pc = 0x294920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294928u;
    // 0x294928: 0x0  nop
    ctx->pc = 0x294928u;
    // NOP
    // 0x29492c: 0x0  nop
    ctx->pc = 0x29492cu;
    // NOP
    ctx->pc = 0x294930u;
}
