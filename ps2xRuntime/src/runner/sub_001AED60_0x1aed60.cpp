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

// Function: sub_001AED60
// Address: 0x1aed60 - 0x1aedc0
void sub_001AED60_0x1aed60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AED60_0x1aed60");
#endif

    switch (ctx->pc) {
        case 0x1aed8cu: goto label_1aed8c;
        case 0x1aedacu: goto label_1aedac;
        default: break;
    }

    ctx->pc = 0x1aed60u;

    // 0x1aed60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aed60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aed64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aed64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aed68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1aed68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1aed6c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1aed6cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1aed70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1aed70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aed74: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1AED74u;
    {
        const bool branch_taken_0x1aed74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aed74) {
            ctx->pc = 0x1AEDACu;
            goto label_1aedac;
        }
    }
    ctx->pc = 0x1AED7Cu;
    // 0x1aed7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1aed7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aed80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aed80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aed84: 0xc06bb70  jal         func_1AEDC0
    ctx->pc = 0x1AED84u;
    SET_GPR_U32(ctx, 31, 0x1AED8Cu);
    ctx->pc = 0x1AEDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEDC0u, 0x1AED84u, 0x1AED8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AED8Cu;
label_1aed8c:
    // 0x1aed8c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1aed8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aed90: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1aed90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1aed94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1aed94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1aed98: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AED98u;
    {
        const bool branch_taken_0x1aed98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1aed98) {
            ctx->pc = 0x1AEDACu;
            goto label_1aedac;
        }
    }
    ctx->pc = 0x1AEDA0u;
    // 0x1aeda0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1aeda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aeda4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1AEDA4u;
    SET_GPR_U32(ctx, 31, 0x1AEDACu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1AEDA4u, 0x1AEDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEDACu;
label_1aedac:
    // 0x1aedac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1aedacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aedb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aedb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aedb4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1aedb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1aedb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEDB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEDB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEDC0u;
}
