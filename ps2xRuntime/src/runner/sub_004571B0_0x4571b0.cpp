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

// Function: sub_004571B0
// Address: 0x4571b0 - 0x457210
void sub_004571B0_0x4571b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004571B0_0x4571b0");
#endif

    switch (ctx->pc) {
        case 0x4571dcu: goto label_4571dc;
        case 0x4571fcu: goto label_4571fc;
        default: break;
    }

    ctx->pc = 0x4571b0u;

    // 0x4571b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4571b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4571b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4571b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4571b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4571b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4571bc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x4571bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x4571c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4571c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4571c4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4571C4u;
    {
        const bool branch_taken_0x4571c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4571c4) {
            ctx->pc = 0x4571FCu;
            goto label_4571fc;
        }
    }
    ctx->pc = 0x4571CCu;
    // 0x4571cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4571ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4571d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4571d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4571d4: 0xc115c84  jal         func_457210
    ctx->pc = 0x4571D4u;
    SET_GPR_U32(ctx, 31, 0x4571DCu);
    ctx->pc = 0x457210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457210u, 0x4571D4u, 0x4571DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4571DCu;
label_4571dc:
    // 0x4571dc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x4571dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4571e0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x4571e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x4571e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4571e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4571e8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4571E8u;
    {
        const bool branch_taken_0x4571e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4571e8) {
            ctx->pc = 0x4571FCu;
            goto label_4571fc;
        }
    }
    ctx->pc = 0x4571F0u;
    // 0x4571f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4571f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4571f4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x4571F4u;
    SET_GPR_U32(ctx, 31, 0x4571FCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x4571F4u, 0x4571FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4571FCu;
label_4571fc:
    // 0x4571fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4571fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x457200: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x457200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x457204: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x457204u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x457208: 0x3e00008  jr          $ra
    ctx->pc = 0x457208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x457208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x457210u;
}
