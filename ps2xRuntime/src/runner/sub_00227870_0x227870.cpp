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

// Function: sub_00227870
// Address: 0x227870 - 0x2278d0
void sub_00227870_0x227870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227870_0x227870");
#endif

    switch (ctx->pc) {
        case 0x22789cu: goto label_22789c;
        case 0x2278bcu: goto label_2278bc;
        default: break;
    }

    ctx->pc = 0x227870u;

    // 0x227870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x227870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x227874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227878: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x227878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22787c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x22787cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x227880: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x227880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227884: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x227884u;
    {
        const bool branch_taken_0x227884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227884) {
            ctx->pc = 0x2278BCu;
            goto label_2278bc;
        }
    }
    ctx->pc = 0x22788Cu;
    // 0x22788c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22788cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227890: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x227890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x227894: 0xc089e34  jal         func_2278D0
    ctx->pc = 0x227894u;
    SET_GPR_U32(ctx, 31, 0x22789Cu);
    ctx->pc = 0x2278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2278D0u, 0x227894u, 0x22789Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22789Cu;
label_22789c:
    // 0x22789c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x22789cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2278a0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2278a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2278a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2278a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2278a8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2278A8u;
    {
        const bool branch_taken_0x2278a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2278a8) {
            ctx->pc = 0x2278BCu;
            goto label_2278bc;
        }
    }
    ctx->pc = 0x2278B0u;
    // 0x2278b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2278b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2278b4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2278B4u;
    SET_GPR_U32(ctx, 31, 0x2278BCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2278B4u, 0x2278BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2278BCu;
label_2278bc:
    // 0x2278bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2278bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2278c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2278c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2278c4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2278c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2278c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2278C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2278C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2278D0u;
}
