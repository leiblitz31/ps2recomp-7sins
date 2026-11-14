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

// Function: sub_00262420
// Address: 0x262420 - 0x262480
void sub_00262420_0x262420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262420_0x262420");
#endif

    switch (ctx->pc) {
        case 0x26243cu: goto label_26243c;
        case 0x26244cu: goto label_26244c;
        case 0x262460u: goto label_262460;
        default: break;
    }

    ctx->pc = 0x262420u;

    // 0x262420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x262420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x262424: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x262424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x262428: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x262428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26242c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x26242cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x262430: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x262430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262434: 0xc098954  jal         func_262550
    ctx->pc = 0x262434u;
    SET_GPR_U32(ctx, 31, 0x26243Cu);
    ctx->pc = 0x262550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262550u, 0x262434u, 0x26243Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26243Cu;
label_26243c:
    // 0x26243c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26243cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262440: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x262440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262444: 0xc09894c  jal         func_262530
    ctx->pc = 0x262444u;
    SET_GPR_U32(ctx, 31, 0x26244Cu);
    ctx->pc = 0x262530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262530u, 0x262444u, 0x26244Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26244Cu;
label_26244c:
    // 0x26244c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x26244cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262450: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x262450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262454: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x262454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262458: 0xc098920  jal         func_262480
    ctx->pc = 0x262458u;
    SET_GPR_U32(ctx, 31, 0x262460u);
    ctx->pc = 0x262480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262480u, 0x262458u, 0x262460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262460u;
label_262460:
    // 0x262460: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x262460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262464: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x262464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262468: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x262468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26246c: 0x3e00008  jr          $ra
    ctx->pc = 0x26246Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26246Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262474u;
    // 0x262474: 0x0  nop
    ctx->pc = 0x262474u;
    // NOP
    // 0x262478: 0x0  nop
    ctx->pc = 0x262478u;
    // NOP
    // 0x26247c: 0x0  nop
    ctx->pc = 0x26247cu;
    // NOP
    ctx->pc = 0x262480u;
}
