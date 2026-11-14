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

// Function: sub_0023F370
// Address: 0x23f370 - 0x23f3d0
void sub_0023F370_0x23f370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F370_0x23f370");
#endif

    switch (ctx->pc) {
        case 0x23f39cu: goto label_23f39c;
        case 0x23f3bcu: goto label_23f3bc;
        default: break;
    }

    ctx->pc = 0x23f370u;

    // 0x23f370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23f370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23f374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23f378: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23f378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23f37c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x23f37cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x23f380: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23f380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f384: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23F384u;
    {
        const bool branch_taken_0x23f384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f384) {
            ctx->pc = 0x23F3BCu;
            goto label_23f3bc;
        }
    }
    ctx->pc = 0x23F38Cu;
    // 0x23f38c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23f38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f390: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f394: 0xc08fcf4  jal         func_23F3D0
    ctx->pc = 0x23F394u;
    SET_GPR_U32(ctx, 31, 0x23F39Cu);
    ctx->pc = 0x23F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F3D0u, 0x23F394u, 0x23F39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F39Cu;
label_23f39c:
    // 0x23f39c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x23f39cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f3a0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23f3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23f3a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23f3a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x23f3a8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F3A8u;
    {
        const bool branch_taken_0x23f3a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23f3a8) {
            ctx->pc = 0x23F3BCu;
            goto label_23f3bc;
        }
    }
    ctx->pc = 0x23F3B0u;
    // 0x23f3b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23f3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f3b4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x23F3B4u;
    SET_GPR_U32(ctx, 31, 0x23F3BCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x23F3B4u, 0x23F3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F3BCu;
label_23f3bc:
    // 0x23f3bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f3c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f3c4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23f3c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23f3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x23F3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F3D0u;
}
