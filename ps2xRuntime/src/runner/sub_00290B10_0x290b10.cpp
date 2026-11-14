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

// Function: sub_00290B10
// Address: 0x290b10 - 0x290b70
void sub_00290B10_0x290b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290B10_0x290b10");
#endif

    switch (ctx->pc) {
        case 0x290b3cu: goto label_290b3c;
        case 0x290b5cu: goto label_290b5c;
        default: break;
    }

    ctx->pc = 0x290b10u;

    // 0x290b10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x290b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x290b14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x290b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x290b18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x290b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x290b1c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x290b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x290b20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x290b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290b24: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x290B24u;
    {
        const bool branch_taken_0x290b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x290b24) {
            ctx->pc = 0x290B5Cu;
            goto label_290b5c;
        }
    }
    ctx->pc = 0x290B2Cu;
    // 0x290b2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x290b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290b30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x290b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290b34: 0xc0a41e0  jal         func_290780
    ctx->pc = 0x290B34u;
    SET_GPR_U32(ctx, 31, 0x290B3Cu);
    ctx->pc = 0x290780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290780u, 0x290B34u, 0x290B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290B3Cu;
label_290b3c:
    // 0x290b3c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x290b3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290b40: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x290b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x290b44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x290b44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x290b48: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290B48u;
    {
        const bool branch_taken_0x290b48 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x290b48) {
            ctx->pc = 0x290B5Cu;
            goto label_290b5c;
        }
    }
    ctx->pc = 0x290B50u;
    // 0x290b50: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x290b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290b54: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x290B54u;
    SET_GPR_U32(ctx, 31, 0x290B5Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x290B54u, 0x290B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290B5Cu;
label_290b5c:
    // 0x290b5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x290b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290b60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290b64: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x290b64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x290b68: 0x3e00008  jr          $ra
    ctx->pc = 0x290B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290B70u;
}
