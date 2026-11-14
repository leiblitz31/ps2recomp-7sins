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

// Function: sub_00213A90
// Address: 0x213a90 - 0x213b00
void sub_00213A90_0x213a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213A90_0x213a90");
#endif

    switch (ctx->pc) {
        case 0x213accu: goto label_213acc;
        case 0x213aecu: goto label_213aec;
        default: break;
    }

    ctx->pc = 0x213a90u;

    // 0x213a90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x213a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x213a94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x213a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x213a98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x213a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x213a9c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x213a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x213aa0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x213aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213aa4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x213AA4u;
    {
        const bool branch_taken_0x213aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213aa4) {
            ctx->pc = 0x213AECu;
            goto label_213aec;
        }
    }
    ctx->pc = 0x213AACu;
    // 0x213aac: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x213aacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x213ab0: 0x24635190  addiu       $v1, $v1, 0x5190
    ctx->pc = 0x213ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20880));
    // 0x213ab4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x213ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213ab8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x213ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x213abc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x213abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213ac0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x213ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ac4: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x213AC4u;
    SET_GPR_U32(ctx, 31, 0x213ACCu);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x213AC4u, 0x213ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213ACCu;
label_213acc:
    // 0x213acc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x213accu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213ad0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x213ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x213ad4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x213ad4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x213ad8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x213AD8u;
    {
        const bool branch_taken_0x213ad8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x213ad8) {
            ctx->pc = 0x213AECu;
            goto label_213aec;
        }
    }
    ctx->pc = 0x213AE0u;
    // 0x213ae0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x213ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213ae4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x213AE4u;
    SET_GPR_U32(ctx, 31, 0x213AECu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x213AE4u, 0x213AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213AECu;
label_213aec:
    // 0x213aec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x213aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213af0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x213af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213af4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x213af4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x213af8: 0x3e00008  jr          $ra
    ctx->pc = 0x213AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213B00u;
}
