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

// Function: sub_004596B0
// Address: 0x4596b0 - 0x459730
void sub_004596B0_0x4596b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004596B0_0x4596b0");
#endif

    switch (ctx->pc) {
        case 0x4596c4u: goto label_4596c4;
        case 0x4596e0u: goto label_4596e0;
        case 0x459708u: goto label_459708;
        default: break;
    }

    ctx->pc = 0x4596b0u;

    // 0x4596b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4596b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4596b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4596b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4596b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4596b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4596bc: 0xc0bdc94  jal         func_2F7250
    ctx->pc = 0x4596BCu;
    SET_GPR_U32(ctx, 31, 0x4596C4u);
    ctx->pc = 0x2F7250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7250u, 0x4596BCu, 0x4596C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4596C4u;
label_4596c4:
    // 0x4596c4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4596c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x4596c8: 0x8c4241c4  lw          $v0, 0x41C4($v0)
    ctx->pc = 0x4596c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6241C4u));
    // 0x4596cc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4596CCu;
    {
        const bool branch_taken_0x4596cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4596cc) {
            ctx->pc = 0x4596E8u;
            goto label_4596e8;
        }
    }
    ctx->pc = 0x4596D4u;
    // 0x4596d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4596d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4596d8: 0xc0bde5c  jal         func_2F7970
    ctx->pc = 0x4596D8u;
    SET_GPR_U32(ctx, 31, 0x4596E0u);
    ctx->pc = 0x2F7970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7970u, 0x4596D8u, 0x4596E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4596E0u;
label_4596e0:
    // 0x4596e0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4596E0u;
    {
        const bool branch_taken_0x4596e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4596e0) {
            ctx->pc = 0x459714u;
            goto label_459714;
        }
    }
    ctx->pc = 0x4596E8u;
label_4596e8:
    // 0x4596e8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4596e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x4596ec: 0x8c4341c4  lw          $v1, 0x41C4($v0)
    ctx->pc = 0x4596ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6241C4u));
    // 0x4596f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4596f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4596f4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4596F4u;
    {
        const bool branch_taken_0x4596f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4596f4) {
            ctx->pc = 0x459710u;
            goto label_459710;
        }
    }
    ctx->pc = 0x4596FCu;
    // 0x4596fc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4596fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x459700: 0xc0bde5c  jal         func_2F7970
    ctx->pc = 0x459700u;
    SET_GPR_U32(ctx, 31, 0x459708u);
    ctx->pc = 0x2F7970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7970u, 0x459700u, 0x459708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459708u;
label_459708:
    // 0x459708: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x459708u;
    {
        const bool branch_taken_0x459708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x459708) {
            ctx->pc = 0x459714u;
            goto label_459714;
        }
    }
    ctx->pc = 0x459710u;
label_459710:
    // 0x459710: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x459710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_459714:
    // 0x459714: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x459714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x459718: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x459718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x45971c: 0x3e00008  jr          $ra
    ctx->pc = 0x45971Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45971Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x459724u;
    // 0x459724: 0x0  nop
    ctx->pc = 0x459724u;
    // NOP
    // 0x459728: 0x0  nop
    ctx->pc = 0x459728u;
    // NOP
    // 0x45972c: 0x0  nop
    ctx->pc = 0x45972cu;
    // NOP
    ctx->pc = 0x459730u;
}
