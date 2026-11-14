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

// Function: sub_00189070
// Address: 0x189070 - 0x1890d0
void sub_00189070_0x189070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189070_0x189070");
#endif

    switch (ctx->pc) {
        case 0x18909cu: goto label_18909c;
        case 0x1890bcu: goto label_1890bc;
        default: break;
    }

    ctx->pc = 0x189070u;

    // 0x189070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x189070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x189074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189078: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x189078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18907c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x18907cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x189080: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189084: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x189084u;
    {
        const bool branch_taken_0x189084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189084) {
            ctx->pc = 0x1890BCu;
            goto label_1890bc;
        }
    }
    ctx->pc = 0x18908Cu;
    // 0x18908c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18908cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189090: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x189090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189094: 0xc062434  jal         func_1890D0
    ctx->pc = 0x189094u;
    SET_GPR_U32(ctx, 31, 0x18909Cu);
    ctx->pc = 0x1890D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1890D0u, 0x189094u, 0x18909Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18909Cu;
label_18909c:
    // 0x18909c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x18909cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1890a0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1890a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1890a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1890a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1890a8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1890A8u;
    {
        const bool branch_taken_0x1890a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1890a8) {
            ctx->pc = 0x1890BCu;
            goto label_1890bc;
        }
    }
    ctx->pc = 0x1890B0u;
    // 0x1890b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1890b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1890b4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1890B4u;
    SET_GPR_U32(ctx, 31, 0x1890BCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1890B4u, 0x1890BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1890BCu;
label_1890bc:
    // 0x1890bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1890bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1890c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1890c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1890c4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1890c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1890c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1890C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1890C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1890D0u;
}
