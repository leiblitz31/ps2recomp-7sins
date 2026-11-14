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

// Function: sub_002807A0
// Address: 0x2807a0 - 0x280800
void sub_002807A0_0x2807a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002807A0_0x2807a0");
#endif

    switch (ctx->pc) {
        case 0x2807ccu: goto label_2807cc;
        case 0x2807ecu: goto label_2807ec;
        default: break;
    }

    ctx->pc = 0x2807a0u;

    // 0x2807a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2807a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2807a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2807a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2807a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2807a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2807ac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2807acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2807b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2807b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2807b4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2807B4u;
    {
        const bool branch_taken_0x2807b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2807b4) {
            ctx->pc = 0x2807ECu;
            goto label_2807ec;
        }
    }
    ctx->pc = 0x2807BCu;
    // 0x2807bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2807bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2807c0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2807c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2807c4: 0xc0a0200  jal         func_280800
    ctx->pc = 0x2807C4u;
    SET_GPR_U32(ctx, 31, 0x2807CCu);
    ctx->pc = 0x280800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280800u, 0x2807C4u, 0x2807CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2807CCu;
label_2807cc:
    // 0x2807cc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2807ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2807d0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2807d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2807d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2807d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2807d8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2807D8u;
    {
        const bool branch_taken_0x2807d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2807d8) {
            ctx->pc = 0x2807ECu;
            goto label_2807ec;
        }
    }
    ctx->pc = 0x2807E0u;
    // 0x2807e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2807e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2807e4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2807E4u;
    SET_GPR_U32(ctx, 31, 0x2807ECu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2807E4u, 0x2807ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2807ECu;
label_2807ec:
    // 0x2807ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2807ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2807f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2807f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2807f4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2807f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2807f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2807F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2807F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280800u;
}
