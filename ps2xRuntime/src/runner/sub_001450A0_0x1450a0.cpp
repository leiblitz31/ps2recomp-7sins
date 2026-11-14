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

// Function: sub_001450A0
// Address: 0x1450a0 - 0x145110
void sub_001450A0_0x1450a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001450A0_0x1450a0");
#endif

    switch (ctx->pc) {
        case 0x1450dcu: goto label_1450dc;
        case 0x1450fcu: goto label_1450fc;
        default: break;
    }

    ctx->pc = 0x1450a0u;

    // 0x1450a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1450a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1450a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1450a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1450a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1450a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1450ac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1450acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1450b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1450b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1450b4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1450B4u;
    {
        const bool branch_taken_0x1450b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1450b4) {
            ctx->pc = 0x1450FCu;
            goto label_1450fc;
        }
    }
    ctx->pc = 0x1450BCu;
    // 0x1450bc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1450bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1450c0: 0x246338a0  addiu       $v1, $v1, 0x38A0
    ctx->pc = 0x1450c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14496));
    // 0x1450c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1450c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1450c8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1450c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1450cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1450ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1450d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1450d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1450d4: 0xc051444  jal         func_145110
    ctx->pc = 0x1450D4u;
    SET_GPR_U32(ctx, 31, 0x1450DCu);
    ctx->pc = 0x145110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145110u, 0x1450D4u, 0x1450DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1450DCu;
label_1450dc:
    // 0x1450dc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1450dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1450e0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1450e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1450e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1450e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1450e8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1450E8u;
    {
        const bool branch_taken_0x1450e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1450e8) {
            ctx->pc = 0x1450FCu;
            goto label_1450fc;
        }
    }
    ctx->pc = 0x1450F0u;
    // 0x1450f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1450f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1450f4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1450F4u;
    SET_GPR_U32(ctx, 31, 0x1450FCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1450F4u, 0x1450FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1450FCu;
label_1450fc:
    // 0x1450fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1450fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145104: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x145104u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x145108: 0x3e00008  jr          $ra
    ctx->pc = 0x145108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145110u;
}
