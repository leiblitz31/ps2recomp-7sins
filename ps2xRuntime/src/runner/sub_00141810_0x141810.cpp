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

// Function: sub_00141810
// Address: 0x141810 - 0x141890
void sub_00141810_0x141810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141810_0x141810");
#endif

    switch (ctx->pc) {
        case 0x141844u: goto label_141844;
        case 0x141854u: goto label_141854;
        case 0x141874u: goto label_141874;
        default: break;
    }

    ctx->pc = 0x141810u;

    // 0x141810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x141810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x141814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141818: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x141818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14181c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x14181cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x141820: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x141820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141824: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x141824u;
    {
        const bool branch_taken_0x141824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141824) {
            ctx->pc = 0x141874u;
            goto label_141874;
        }
    }
    ctx->pc = 0x14182Cu;
    // 0x14182c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14182cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141830: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x141830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141834: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x141834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x141838: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x141838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14183c: 0xc050650  jal         func_141940
    ctx->pc = 0x14183Cu;
    SET_GPR_U32(ctx, 31, 0x141844u);
    ctx->pc = 0x141940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141940u, 0x14183Cu, 0x141844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141844u;
label_141844:
    // 0x141844: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x141844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141848: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x141848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14184c: 0xc050624  jal         func_141890
    ctx->pc = 0x14184Cu;
    SET_GPR_U32(ctx, 31, 0x141854u);
    ctx->pc = 0x141890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141890u, 0x14184Cu, 0x141854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141854u;
label_141854:
    // 0x141854: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x141854u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141858: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x141858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x14185c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14185cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x141860: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x141860u;
    {
        const bool branch_taken_0x141860 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x141860) {
            ctx->pc = 0x141874u;
            goto label_141874;
        }
    }
    ctx->pc = 0x141868u;
    // 0x141868: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x141868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14186c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x14186Cu;
    SET_GPR_U32(ctx, 31, 0x141874u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x14186Cu, 0x141874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141874u;
label_141874:
    // 0x141874: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x141874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x141878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14187c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14187cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x141880: 0x3e00008  jr          $ra
    ctx->pc = 0x141880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141888u;
    // 0x141888: 0x0  nop
    ctx->pc = 0x141888u;
    // NOP
    // 0x14188c: 0x0  nop
    ctx->pc = 0x14188cu;
    // NOP
    ctx->pc = 0x141890u;
}
