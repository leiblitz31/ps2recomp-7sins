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

// Function: sub_001B91A0
// Address: 0x1b91a0 - 0x1b9200
void sub_001B91A0_0x1b91a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B91A0_0x1b91a0");
#endif

    switch (ctx->pc) {
        case 0x1b91ccu: goto label_1b91cc;
        case 0x1b91ecu: goto label_1b91ec;
        default: break;
    }

    ctx->pc = 0x1b91a0u;

    // 0x1b91a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b91a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b91a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b91a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b91a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b91a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1b91ac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1b91acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1b91b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b91b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b91b4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B91B4u;
    {
        const bool branch_taken_0x1b91b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b91b4) {
            ctx->pc = 0x1B91ECu;
            goto label_1b91ec;
        }
    }
    ctx->pc = 0x1B91BCu;
    // 0x1b91bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b91bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b91c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b91c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b91c4: 0xc06e480  jal         func_1B9200
    ctx->pc = 0x1B91C4u;
    SET_GPR_U32(ctx, 31, 0x1B91CCu);
    ctx->pc = 0x1B9200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9200u, 0x1B91C4u, 0x1B91CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B91CCu;
label_1b91cc:
    // 0x1b91cc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1b91ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b91d0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b91d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b91d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b91d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b91d8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B91D8u;
    {
        const bool branch_taken_0x1b91d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b91d8) {
            ctx->pc = 0x1B91ECu;
            goto label_1b91ec;
        }
    }
    ctx->pc = 0x1B91E0u;
    // 0x1b91e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b91e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b91e4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1B91E4u;
    SET_GPR_U32(ctx, 31, 0x1B91ECu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1B91E4u, 0x1B91ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B91ECu;
label_1b91ec:
    // 0x1b91ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b91ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b91f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b91f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b91f4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b91f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b91f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B91F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B91F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9200u;
}
