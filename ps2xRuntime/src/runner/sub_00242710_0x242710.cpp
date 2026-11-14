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

// Function: sub_00242710
// Address: 0x242710 - 0x242770
void sub_00242710_0x242710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242710_0x242710");
#endif

    switch (ctx->pc) {
        case 0x24273cu: goto label_24273c;
        case 0x24275cu: goto label_24275c;
        default: break;
    }

    ctx->pc = 0x242710u;

    // 0x242710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x242710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x242714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x242714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x242718: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x242718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24271c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x24271cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x242720: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x242720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242724: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x242724u;
    {
        const bool branch_taken_0x242724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242724) {
            ctx->pc = 0x24275Cu;
            goto label_24275c;
        }
    }
    ctx->pc = 0x24272Cu;
    // 0x24272c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x24272cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242730: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x242730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242734: 0xc0909dc  jal         func_242770
    ctx->pc = 0x242734u;
    SET_GPR_U32(ctx, 31, 0x24273Cu);
    ctx->pc = 0x242770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242770u, 0x242734u, 0x24273Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24273Cu;
label_24273c:
    // 0x24273c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x24273cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242740: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x242740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x242744: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x242744u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x242748: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x242748u;
    {
        const bool branch_taken_0x242748 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x242748) {
            ctx->pc = 0x24275Cu;
            goto label_24275c;
        }
    }
    ctx->pc = 0x242750u;
    // 0x242750: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x242750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242754: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x242754u;
    SET_GPR_U32(ctx, 31, 0x24275Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x242754u, 0x24275Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24275Cu;
label_24275c:
    // 0x24275c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24275cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x242760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242764: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x242764u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x242768: 0x3e00008  jr          $ra
    ctx->pc = 0x242768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242770u;
}
