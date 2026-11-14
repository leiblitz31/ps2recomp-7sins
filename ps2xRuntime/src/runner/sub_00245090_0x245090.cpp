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

// Function: sub_00245090
// Address: 0x245090 - 0x2450f0
void sub_00245090_0x245090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245090_0x245090");
#endif

    switch (ctx->pc) {
        case 0x2450bcu: goto label_2450bc;
        case 0x2450dcu: goto label_2450dc;
        default: break;
    }

    ctx->pc = 0x245090u;

    // 0x245090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x245090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x245094: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x245094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x245098: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x245098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24509c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x24509cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2450a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2450a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2450a4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2450A4u;
    {
        const bool branch_taken_0x2450a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2450a4) {
            ctx->pc = 0x2450DCu;
            goto label_2450dc;
        }
    }
    ctx->pc = 0x2450ACu;
    // 0x2450ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2450acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2450b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2450b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2450b4: 0xc09143c  jal         func_2450F0
    ctx->pc = 0x2450B4u;
    SET_GPR_U32(ctx, 31, 0x2450BCu);
    ctx->pc = 0x2450F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2450F0u, 0x2450B4u, 0x2450BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2450BCu;
label_2450bc:
    // 0x2450bc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2450bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2450c0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2450c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2450c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2450c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2450c8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2450C8u;
    {
        const bool branch_taken_0x2450c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2450c8) {
            ctx->pc = 0x2450DCu;
            goto label_2450dc;
        }
    }
    ctx->pc = 0x2450D0u;
    // 0x2450d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2450d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2450d4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2450D4u;
    SET_GPR_U32(ctx, 31, 0x2450DCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2450D4u, 0x2450DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2450DCu;
label_2450dc:
    // 0x2450dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2450dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2450e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2450e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2450e4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2450e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2450e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2450E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2450E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2450F0u;
}
