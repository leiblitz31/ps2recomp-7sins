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

// Function: sub_002477A0
// Address: 0x2477a0 - 0x247810
void sub_002477A0_0x2477a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002477A0_0x2477a0");
#endif

    switch (ctx->pc) {
        case 0x2477c8u: goto label_2477c8;
        case 0x2477d8u: goto label_2477d8;
        case 0x2477f8u: goto label_2477f8;
        default: break;
    }

    ctx->pc = 0x2477a0u;

    // 0x2477a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2477a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2477a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2477a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2477a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2477a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2477ac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2477acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2477b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2477b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2477b4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2477B4u;
    {
        const bool branch_taken_0x2477b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2477b4) {
            ctx->pc = 0x2477F8u;
            goto label_2477f8;
        }
    }
    ctx->pc = 0x2477BCu;
    // 0x2477bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2477bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2477c0: 0xc091e20  jal         func_247880
    ctx->pc = 0x2477C0u;
    SET_GPR_U32(ctx, 31, 0x2477C8u);
    ctx->pc = 0x247880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247880u, 0x2477C0u, 0x2477C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2477C8u;
label_2477c8:
    // 0x2477c8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2477c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2477cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2477ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2477d0: 0xc091e04  jal         func_247810
    ctx->pc = 0x2477D0u;
    SET_GPR_U32(ctx, 31, 0x2477D8u);
    ctx->pc = 0x247810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247810u, 0x2477D0u, 0x2477D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2477D8u;
label_2477d8:
    // 0x2477d8: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2477d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2477dc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2477dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2477e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2477e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2477e4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2477E4u;
    {
        const bool branch_taken_0x2477e4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2477e4) {
            ctx->pc = 0x2477F8u;
            goto label_2477f8;
        }
    }
    ctx->pc = 0x2477ECu;
    // 0x2477ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2477ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2477f0: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2477F0u;
    SET_GPR_U32(ctx, 31, 0x2477F8u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2477F0u, 0x2477F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2477F8u;
label_2477f8:
    // 0x2477f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2477f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2477fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2477fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247800: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x247800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x247804: 0x3e00008  jr          $ra
    ctx->pc = 0x247804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24780Cu;
    // 0x24780c: 0x0  nop
    ctx->pc = 0x24780cu;
    // NOP
    ctx->pc = 0x247810u;
}
