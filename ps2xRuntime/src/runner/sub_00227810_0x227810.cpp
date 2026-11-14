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

// Function: sub_00227810
// Address: 0x227810 - 0x227870
void sub_00227810_0x227810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227810_0x227810");
#endif

    switch (ctx->pc) {
        case 0x22783cu: goto label_22783c;
        case 0x22785cu: goto label_22785c;
        default: break;
    }

    ctx->pc = 0x227810u;

    // 0x227810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x227810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x227814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227818: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x227818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22781c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x22781cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x227820: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x227820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227824: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x227824u;
    {
        const bool branch_taken_0x227824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227824) {
            ctx->pc = 0x22785Cu;
            goto label_22785c;
        }
    }
    ctx->pc = 0x22782Cu;
    // 0x22782c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22782cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227830: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x227830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227834: 0xc089e1c  jal         func_227870
    ctx->pc = 0x227834u;
    SET_GPR_U32(ctx, 31, 0x22783Cu);
    ctx->pc = 0x227870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227870u, 0x227834u, 0x22783Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22783Cu;
label_22783c:
    // 0x22783c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x22783cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227840: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x227840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x227844: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x227844u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x227848: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x227848u;
    {
        const bool branch_taken_0x227848 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x227848) {
            ctx->pc = 0x22785Cu;
            goto label_22785c;
        }
    }
    ctx->pc = 0x227850u;
    // 0x227850: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x227850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227854: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x227854u;
    SET_GPR_U32(ctx, 31, 0x22785Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x227854u, 0x22785Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22785Cu;
label_22785c:
    // 0x22785c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22785cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227864: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x227864u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x227868: 0x3e00008  jr          $ra
    ctx->pc = 0x227868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227870u;
}
