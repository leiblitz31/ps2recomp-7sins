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

// Function: sub_00262810
// Address: 0x262810 - 0x262890
void sub_00262810_0x262810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262810_0x262810");
#endif

    switch (ctx->pc) {
        case 0x262844u: goto label_262844;
        case 0x262854u: goto label_262854;
        case 0x262874u: goto label_262874;
        default: break;
    }

    ctx->pc = 0x262810u;

    // 0x262810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x262810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x262814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x262814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x262818: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x262818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26281c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x26281cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x262820: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x262820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262824: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x262824u;
    {
        const bool branch_taken_0x262824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262824) {
            ctx->pc = 0x262874u;
            goto label_262874;
        }
    }
    ctx->pc = 0x26282Cu;
    // 0x26282c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x26282cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262830: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x262830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262834: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x262834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x262838: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x262838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26283c: 0xc098a4c  jal         func_262930
    ctx->pc = 0x26283Cu;
    SET_GPR_U32(ctx, 31, 0x262844u);
    ctx->pc = 0x262930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262930u, 0x26283Cu, 0x262844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262844u;
label_262844:
    // 0x262844: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x262844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262848: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x262848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26284c: 0xc098a24  jal         func_262890
    ctx->pc = 0x26284Cu;
    SET_GPR_U32(ctx, 31, 0x262854u);
    ctx->pc = 0x262890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262890u, 0x26284Cu, 0x262854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262854u;
label_262854:
    // 0x262854: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x262854u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262858: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x262858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26285c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26285cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x262860: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x262860u;
    {
        const bool branch_taken_0x262860 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x262860) {
            ctx->pc = 0x262874u;
            goto label_262874;
        }
    }
    ctx->pc = 0x262868u;
    // 0x262868: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x262868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26286c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x26286Cu;
    SET_GPR_U32(ctx, 31, 0x262874u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x26286Cu, 0x262874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262874u;
label_262874:
    // 0x262874: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x262874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x262878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26287c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x26287cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262880: 0x3e00008  jr          $ra
    ctx->pc = 0x262880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262888u;
    // 0x262888: 0x0  nop
    ctx->pc = 0x262888u;
    // NOP
    // 0x26288c: 0x0  nop
    ctx->pc = 0x26288cu;
    // NOP
    ctx->pc = 0x262890u;
}
