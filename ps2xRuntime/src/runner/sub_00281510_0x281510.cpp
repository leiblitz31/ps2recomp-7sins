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

// Function: sub_00281510
// Address: 0x281510 - 0x281590
void sub_00281510_0x281510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281510_0x281510");
#endif

    switch (ctx->pc) {
        case 0x281530u: goto label_281530;
        case 0x281540u: goto label_281540;
        case 0x281558u: goto label_281558;
        case 0x281570u: goto label_281570;
        default: break;
    }

    ctx->pc = 0x281510u;

    // 0x281510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x281510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x281514: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x281514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x281518: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x281518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28151c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x28151cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x281520: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x281520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281524: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x281524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x281528: 0xc0a0564  jal         func_281590
    ctx->pc = 0x281528u;
    SET_GPR_U32(ctx, 31, 0x281530u);
    ctx->pc = 0x281590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281590u, 0x281528u, 0x281530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281530u;
label_281530:
    // 0x281530: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x281530u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x281534: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x281534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281538: 0xc0a0270  jal         func_2809C0
    ctx->pc = 0x281538u;
    SET_GPR_U32(ctx, 31, 0x281540u);
    ctx->pc = 0x2809C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2809C0u, 0x281538u, 0x281540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281540u;
label_281540:
    // 0x281540: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x281540u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x281544: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x281544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281548: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x281548u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28154c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28154cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281550: 0xc0a0268  jal         func_2809A0
    ctx->pc = 0x281550u;
    SET_GPR_U32(ctx, 31, 0x281558u);
    ctx->pc = 0x2809A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2809A0u, 0x281550u, 0x281558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281558u;
label_281558:
    // 0x281558: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x281558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x28155c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x28155cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281560: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x281560u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x281564: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x281564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281568: 0xc0a0260  jal         func_280980
    ctx->pc = 0x281568u;
    SET_GPR_U32(ctx, 31, 0x281570u);
    ctx->pc = 0x280980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280980u, 0x281568u, 0x281570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281570u;
label_281570:
    // 0x281570: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x281570u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x281574: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x281574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281578: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x281578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28157c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28157cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x281580: 0x3e00008  jr          $ra
    ctx->pc = 0x281580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281588u;
    // 0x281588: 0x0  nop
    ctx->pc = 0x281588u;
    // NOP
    // 0x28158c: 0x0  nop
    ctx->pc = 0x28158cu;
    // NOP
    ctx->pc = 0x281590u;
}
