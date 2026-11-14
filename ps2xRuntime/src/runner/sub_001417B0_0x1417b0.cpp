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

// Function: sub_001417B0
// Address: 0x1417b0 - 0x141810
void sub_001417B0_0x1417b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001417B0_0x1417b0");
#endif

    switch (ctx->pc) {
        case 0x1417dcu: goto label_1417dc;
        case 0x1417fcu: goto label_1417fc;
        default: break;
    }

    ctx->pc = 0x1417b0u;

    // 0x1417b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1417b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1417b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1417b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1417b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1417b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1417bc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1417bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1417c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1417c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1417c4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1417C4u;
    {
        const bool branch_taken_0x1417c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1417c4) {
            ctx->pc = 0x1417FCu;
            goto label_1417fc;
        }
    }
    ctx->pc = 0x1417CCu;
    // 0x1417cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1417ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1417d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1417d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1417d4: 0xc050604  jal         func_141810
    ctx->pc = 0x1417D4u;
    SET_GPR_U32(ctx, 31, 0x1417DCu);
    ctx->pc = 0x141810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141810u, 0x1417D4u, 0x1417DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1417DCu;
label_1417dc:
    // 0x1417dc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1417dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1417e0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1417e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1417e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1417e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1417e8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1417E8u;
    {
        const bool branch_taken_0x1417e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1417e8) {
            ctx->pc = 0x1417FCu;
            goto label_1417fc;
        }
    }
    ctx->pc = 0x1417F0u;
    // 0x1417f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1417f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1417f4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1417F4u;
    SET_GPR_U32(ctx, 31, 0x1417FCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1417F4u, 0x1417FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1417FCu;
label_1417fc:
    // 0x1417fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1417fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x141800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141804: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x141804u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x141808: 0x3e00008  jr          $ra
    ctx->pc = 0x141808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141810u;
}
