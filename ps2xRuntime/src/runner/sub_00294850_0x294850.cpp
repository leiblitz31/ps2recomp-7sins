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

// Function: sub_00294850
// Address: 0x294850 - 0x2948b0
void sub_00294850_0x294850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294850_0x294850");
#endif

    switch (ctx->pc) {
        case 0x29487cu: goto label_29487c;
        case 0x29489cu: goto label_29489c;
        default: break;
    }

    ctx->pc = 0x294850u;

    // 0x294850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x294850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x294854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x294854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x294858: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x294858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x29485c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x29485cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x294860: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x294860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294864: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x294864u;
    {
        const bool branch_taken_0x294864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294864) {
            ctx->pc = 0x29489Cu;
            goto label_29489c;
        }
    }
    ctx->pc = 0x29486Cu;
    // 0x29486c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29486cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294870: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x294870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294874: 0xc0a522c  jal         func_2948B0
    ctx->pc = 0x294874u;
    SET_GPR_U32(ctx, 31, 0x29487Cu);
    ctx->pc = 0x2948B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2948B0u, 0x294874u, 0x29487Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29487Cu;
label_29487c:
    // 0x29487c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x29487cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294880: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x294880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x294884: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x294884u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x294888: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x294888u;
    {
        const bool branch_taken_0x294888 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x294888) {
            ctx->pc = 0x29489Cu;
            goto label_29489c;
        }
    }
    ctx->pc = 0x294890u;
    // 0x294890: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x294890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294894: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x294894u;
    SET_GPR_U32(ctx, 31, 0x29489Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x294894u, 0x29489Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29489Cu;
label_29489c:
    // 0x29489c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29489cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2948a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2948a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2948a4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2948a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2948a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2948A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2948A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2948B0u;
}
