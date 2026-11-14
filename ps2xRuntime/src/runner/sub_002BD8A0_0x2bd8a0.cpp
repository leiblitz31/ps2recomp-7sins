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

// Function: sub_002BD8A0
// Address: 0x2bd8a0 - 0x2bd900
void sub_002BD8A0_0x2bd8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD8A0_0x2bd8a0");
#endif

    switch (ctx->pc) {
        case 0x2bd8ccu: goto label_2bd8cc;
        case 0x2bd8ecu: goto label_2bd8ec;
        default: break;
    }

    ctx->pc = 0x2bd8a0u;

    // 0x2bd8a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bd8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bd8a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bd8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bd8a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2bd8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2bd8ac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2bd8acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2bd8b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bd8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd8b4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BD8B4u;
    {
        const bool branch_taken_0x2bd8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd8b4) {
            ctx->pc = 0x2BD8ECu;
            goto label_2bd8ec;
        }
    }
    ctx->pc = 0x2BD8BCu;
    // 0x2bd8bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bd8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd8c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bd8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd8c4: 0xc0af640  jal         func_2BD900
    ctx->pc = 0x2BD8C4u;
    SET_GPR_U32(ctx, 31, 0x2BD8CCu);
    ctx->pc = 0x2BD900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD900u, 0x2BD8C4u, 0x2BD8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD8CCu;
label_2bd8cc:
    // 0x2bd8cc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2bd8ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bd8d0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2bd8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2bd8d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bd8d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2bd8d8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BD8D8u;
    {
        const bool branch_taken_0x2bd8d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bd8d8) {
            ctx->pc = 0x2BD8ECu;
            goto label_2bd8ec;
        }
    }
    ctx->pc = 0x2BD8E0u;
    // 0x2bd8e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bd8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd8e4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2BD8E4u;
    SET_GPR_U32(ctx, 31, 0x2BD8ECu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2BD8E4u, 0x2BD8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD8ECu;
label_2bd8ec:
    // 0x2bd8ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bd8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd8f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bd8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd8f4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2bd8f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bd8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD900u;
}
