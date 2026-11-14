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

// Function: sub_00177810
// Address: 0x177810 - 0x177880
void sub_00177810_0x177810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177810_0x177810");
#endif

    switch (ctx->pc) {
        case 0x17784cu: goto label_17784c;
        case 0x17786cu: goto label_17786c;
        default: break;
    }

    ctx->pc = 0x177810u;

    // 0x177810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x177810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x177814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177818: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x177818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17781c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x17781cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x177820: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x177820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177824: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x177824u;
    {
        const bool branch_taken_0x177824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x177824) {
            ctx->pc = 0x17786Cu;
            goto label_17786c;
        }
    }
    ctx->pc = 0x17782Cu;
    // 0x17782c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x17782cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x177830: 0x24633e58  addiu       $v1, $v1, 0x3E58
    ctx->pc = 0x177830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15960));
    // 0x177834: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x177834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177838: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x177838u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x17783c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17783cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177840: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177844: 0xc05de20  jal         func_177880
    ctx->pc = 0x177844u;
    SET_GPR_U32(ctx, 31, 0x17784Cu);
    ctx->pc = 0x177880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177880u, 0x177844u, 0x17784Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17784Cu;
label_17784c:
    // 0x17784c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x17784cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177850: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x177850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x177854: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x177854u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x177858: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x177858u;
    {
        const bool branch_taken_0x177858 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x177858) {
            ctx->pc = 0x17786Cu;
            goto label_17786c;
        }
    }
    ctx->pc = 0x177860u;
    // 0x177860: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x177860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177864: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x177864u;
    SET_GPR_U32(ctx, 31, 0x17786Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x177864u, 0x17786Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17786Cu;
label_17786c:
    // 0x17786c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17786cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177874: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x177874u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x177878: 0x3e00008  jr          $ra
    ctx->pc = 0x177878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177880u;
}
