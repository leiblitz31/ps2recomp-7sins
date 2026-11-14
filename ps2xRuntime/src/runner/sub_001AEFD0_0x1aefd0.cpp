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

// Function: sub_001AEFD0
// Address: 0x1aefd0 - 0x1af030
void sub_001AEFD0_0x1aefd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEFD0_0x1aefd0");
#endif

    switch (ctx->pc) {
        case 0x1aeffcu: goto label_1aeffc;
        case 0x1af01cu: goto label_1af01c;
        default: break;
    }

    ctx->pc = 0x1aefd0u;

    // 0x1aefd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aefd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aefd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aefd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aefd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1aefd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1aefdc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1aefdcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1aefe0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1aefe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aefe4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1AEFE4u;
    {
        const bool branch_taken_0x1aefe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aefe4) {
            ctx->pc = 0x1AF01Cu;
            goto label_1af01c;
        }
    }
    ctx->pc = 0x1AEFECu;
    // 0x1aefec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1aefecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aeff0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aeff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeff4: 0xc06bc0c  jal         func_1AF030
    ctx->pc = 0x1AEFF4u;
    SET_GPR_U32(ctx, 31, 0x1AEFFCu);
    ctx->pc = 0x1AF030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF030u, 0x1AEFF4u, 0x1AEFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEFFCu;
label_1aeffc:
    // 0x1aeffc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1aeffcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af000: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1af000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1af004: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1af004u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1af008: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF008u;
    {
        const bool branch_taken_0x1af008 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1af008) {
            ctx->pc = 0x1AF01Cu;
            goto label_1af01c;
        }
    }
    ctx->pc = 0x1AF010u;
    // 0x1af010: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1af010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af014: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1AF014u;
    SET_GPR_U32(ctx, 31, 0x1AF01Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1AF014u, 0x1AF01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF01Cu;
label_1af01c:
    // 0x1af01c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af020: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af024: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1af024u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1af028: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF030u;
}
