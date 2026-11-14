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

// Function: sub_001130D0
// Address: 0x1130d0 - 0x113130
void sub_001130D0_0x1130d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001130D0_0x1130d0");
#endif

    switch (ctx->pc) {
        case 0x1130fcu: goto label_1130fc;
        case 0x11311cu: goto label_11311c;
        default: break;
    }

    ctx->pc = 0x1130d0u;

    // 0x1130d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1130d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1130d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1130d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1130d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1130d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1130dc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1130dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1130e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1130e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1130e4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1130E4u;
    {
        const bool branch_taken_0x1130e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1130e4) {
            ctx->pc = 0x11311Cu;
            goto label_11311c;
        }
    }
    ctx->pc = 0x1130ECu;
    // 0x1130ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1130ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1130f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1130f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1130f4: 0xc044c4c  jal         func_113130
    ctx->pc = 0x1130F4u;
    SET_GPR_U32(ctx, 31, 0x1130FCu);
    ctx->pc = 0x113130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113130u, 0x1130F4u, 0x1130FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1130FCu;
label_1130fc:
    // 0x1130fc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1130fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113100: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x113100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x113104: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x113104u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x113108: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x113108u;
    {
        const bool branch_taken_0x113108 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x113108) {
            ctx->pc = 0x11311Cu;
            goto label_11311c;
        }
    }
    ctx->pc = 0x113110u;
    // 0x113110: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x113110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113114: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x113114u;
    SET_GPR_U32(ctx, 31, 0x11311Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x113114u, 0x11311Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11311Cu;
label_11311c:
    // 0x11311c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11311cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113124: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x113124u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x113128: 0x3e00008  jr          $ra
    ctx->pc = 0x113128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113130u;
}
