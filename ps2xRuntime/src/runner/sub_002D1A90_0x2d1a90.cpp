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

// Function: sub_002D1A90
// Address: 0x2d1a90 - 0x2d1af0
void sub_002D1A90_0x2d1a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1A90_0x2d1a90");
#endif

    switch (ctx->pc) {
        case 0x2d1abcu: goto label_2d1abc;
        case 0x2d1adcu: goto label_2d1adc;
        default: break;
    }

    ctx->pc = 0x2d1a90u;

    // 0x2d1a90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d1a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d1a94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1a98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d1a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d1a9c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2d1a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2d1aa0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d1aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1aa4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D1AA4u;
    {
        const bool branch_taken_0x2d1aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1aa4) {
            ctx->pc = 0x2D1ADCu;
            goto label_2d1adc;
        }
    }
    ctx->pc = 0x2D1AACu;
    // 0x2d1aac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d1aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1ab0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d1ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1ab4: 0xc0b46bc  jal         func_2D1AF0
    ctx->pc = 0x2D1AB4u;
    SET_GPR_U32(ctx, 31, 0x2D1ABCu);
    ctx->pc = 0x2D1AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1AF0u, 0x2D1AB4u, 0x2D1ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1ABCu;
label_2d1abc:
    // 0x2d1abc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2d1abcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1ac0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d1ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d1ac4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d1ac4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d1ac8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1AC8u;
    {
        const bool branch_taken_0x2d1ac8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d1ac8) {
            ctx->pc = 0x2D1ADCu;
            goto label_2d1adc;
        }
    }
    ctx->pc = 0x2D1AD0u;
    // 0x2d1ad0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d1ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1ad4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2D1AD4u;
    SET_GPR_U32(ctx, 31, 0x2D1ADCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2D1AD4u, 0x2D1ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1ADCu;
label_2d1adc:
    // 0x2d1adc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d1adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1ae0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1ae4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d1ae4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d1ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1AF0u;
}
