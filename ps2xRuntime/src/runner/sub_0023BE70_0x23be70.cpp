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

// Function: sub_0023BE70
// Address: 0x23be70 - 0x23bed0
void sub_0023BE70_0x23be70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BE70_0x23be70");
#endif

    switch (ctx->pc) {
        case 0x23be9cu: goto label_23be9c;
        case 0x23bebcu: goto label_23bebc;
        default: break;
    }

    ctx->pc = 0x23be70u;

    // 0x23be70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23be70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23be74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23be74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23be78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23be78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23be7c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x23be7cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x23be80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23be80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23be84: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23BE84u;
    {
        const bool branch_taken_0x23be84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23be84) {
            ctx->pc = 0x23BEBCu;
            goto label_23bebc;
        }
    }
    ctx->pc = 0x23BE8Cu;
    // 0x23be8c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23be8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23be90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23be90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23be94: 0xc08efb4  jal         func_23BED0
    ctx->pc = 0x23BE94u;
    SET_GPR_U32(ctx, 31, 0x23BE9Cu);
    ctx->pc = 0x23BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BED0u, 0x23BE94u, 0x23BE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BE9Cu;
label_23be9c:
    // 0x23be9c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x23be9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23bea0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23bea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23bea4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23bea4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x23bea8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23BEA8u;
    {
        const bool branch_taken_0x23bea8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23bea8) {
            ctx->pc = 0x23BEBCu;
            goto label_23bebc;
        }
    }
    ctx->pc = 0x23BEB0u;
    // 0x23beb0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23beb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23beb4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x23BEB4u;
    SET_GPR_U32(ctx, 31, 0x23BEBCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x23BEB4u, 0x23BEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BEBCu;
label_23bebc:
    // 0x23bebc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bec0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23bec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bec4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23bec4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23bec8: 0x3e00008  jr          $ra
    ctx->pc = 0x23BEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BED0u;
}
