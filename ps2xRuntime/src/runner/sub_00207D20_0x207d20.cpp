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

// Function: sub_00207D20
// Address: 0x207d20 - 0x207d80
void sub_00207D20_0x207d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207D20_0x207d20");
#endif

    switch (ctx->pc) {
        case 0x207d4cu: goto label_207d4c;
        case 0x207d6cu: goto label_207d6c;
        default: break;
    }

    ctx->pc = 0x207d20u;

    // 0x207d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x207d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x207d24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x207d28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x207d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x207d2c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x207d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x207d30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207d34: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x207D34u;
    {
        const bool branch_taken_0x207d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207d34) {
            ctx->pc = 0x207D6Cu;
            goto label_207d6c;
        }
    }
    ctx->pc = 0x207D3Cu;
    // 0x207d3c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x207d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207d40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x207d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207d44: 0xc081f60  jal         func_207D80
    ctx->pc = 0x207D44u;
    SET_GPR_U32(ctx, 31, 0x207D4Cu);
    ctx->pc = 0x207D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207D80u, 0x207D44u, 0x207D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207D4Cu;
label_207d4c:
    // 0x207d4c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x207d4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x207d50: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x207d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x207d54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x207d54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x207d58: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x207D58u;
    {
        const bool branch_taken_0x207d58 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x207d58) {
            ctx->pc = 0x207D6Cu;
            goto label_207d6c;
        }
    }
    ctx->pc = 0x207D60u;
    // 0x207d60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x207d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207d64: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x207D64u;
    SET_GPR_U32(ctx, 31, 0x207D6Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x207D64u, 0x207D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207D6Cu;
label_207d6c:
    // 0x207d6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207d74: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x207d74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x207d78: 0x3e00008  jr          $ra
    ctx->pc = 0x207D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207D80u;
}
