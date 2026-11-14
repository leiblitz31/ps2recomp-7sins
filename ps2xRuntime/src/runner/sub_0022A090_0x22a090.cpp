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

// Function: sub_0022A090
// Address: 0x22a090 - 0x22a0f0
void sub_0022A090_0x22a090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A090_0x22a090");
#endif

    switch (ctx->pc) {
        case 0x22a0bcu: goto label_22a0bc;
        case 0x22a0dcu: goto label_22a0dc;
        default: break;
    }

    ctx->pc = 0x22a090u;

    // 0x22a090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22a090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22a094: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a098: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22a098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22a09c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x22a09cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x22a0a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22a0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a0a4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22A0A4u;
    {
        const bool branch_taken_0x22a0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a0a4) {
            ctx->pc = 0x22A0DCu;
            goto label_22a0dc;
        }
    }
    ctx->pc = 0x22A0ACu;
    // 0x22a0ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22a0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a0b0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x22a0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22a0b4: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x22A0B4u;
    SET_GPR_U32(ctx, 31, 0x22A0BCu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x22A0B4u, 0x22A0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A0BCu;
label_22a0bc:
    // 0x22a0bc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x22a0bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a0c0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x22a0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22a0c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22a0c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x22a0c8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22A0C8u;
    {
        const bool branch_taken_0x22a0c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22a0c8) {
            ctx->pc = 0x22A0DCu;
            goto label_22a0dc;
        }
    }
    ctx->pc = 0x22A0D0u;
    // 0x22a0d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22a0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a0d4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x22A0D4u;
    SET_GPR_U32(ctx, 31, 0x22A0DCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x22A0D4u, 0x22A0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A0DCu;
label_22a0dc:
    // 0x22a0dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22a0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a0e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a0e4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22a0e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22a0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x22A0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A0F0u;
}
