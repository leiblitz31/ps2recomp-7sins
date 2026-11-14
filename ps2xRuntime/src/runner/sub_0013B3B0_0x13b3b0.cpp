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

// Function: sub_0013B3B0
// Address: 0x13b3b0 - 0x13b410
void sub_0013B3B0_0x13b3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B3B0_0x13b3b0");
#endif

    switch (ctx->pc) {
        case 0x13b3dcu: goto label_13b3dc;
        case 0x13b3fcu: goto label_13b3fc;
        default: break;
    }

    ctx->pc = 0x13b3b0u;

    // 0x13b3b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13b3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13b3b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13b3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13b3b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13b3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13b3bc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x13b3bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x13b3c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13b3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b3c4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x13B3C4u;
    {
        const bool branch_taken_0x13b3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b3c4) {
            ctx->pc = 0x13B3FCu;
            goto label_13b3fc;
        }
    }
    ctx->pc = 0x13B3CCu;
    // 0x13b3cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13b3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b3d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13b3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13b3d4: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x13B3D4u;
    SET_GPR_U32(ctx, 31, 0x13B3DCu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x13B3D4u, 0x13B3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B3DCu;
label_13b3dc:
    // 0x13b3dc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x13b3dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b3e0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x13b3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x13b3e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13b3e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13b3e8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B3E8u;
    {
        const bool branch_taken_0x13b3e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x13b3e8) {
            ctx->pc = 0x13B3FCu;
            goto label_13b3fc;
        }
    }
    ctx->pc = 0x13B3F0u;
    // 0x13b3f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b3f4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x13B3F4u;
    SET_GPR_U32(ctx, 31, 0x13B3FCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x13B3F4u, 0x13B3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B3FCu;
label_13b3fc:
    // 0x13b3fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13b3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13b400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b404: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13b404u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13b408: 0x3e00008  jr          $ra
    ctx->pc = 0x13B408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B410u;
}
