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

// Function: sub_0044E4B0
// Address: 0x44e4b0 - 0x44e500
void sub_0044E4B0_0x44e4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044E4B0_0x44e4b0");
#endif

    switch (ctx->pc) {
        case 0x44e4ecu: goto label_44e4ec;
        default: break;
    }

    ctx->pc = 0x44e4b0u;

    // 0x44e4b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44e4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44e4b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44e4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x44e4b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44e4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x44e4bc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x44e4bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x44e4c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44e4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44e4c4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x44E4C4u;
    {
        const bool branch_taken_0x44e4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e4c4) {
            ctx->pc = 0x44E4ECu;
            goto label_44e4ec;
        }
    }
    ctx->pc = 0x44E4CCu;
    // 0x44e4cc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x44e4ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44e4d0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x44e4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x44e4d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x44e4d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x44e4d8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x44E4D8u;
    {
        const bool branch_taken_0x44e4d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x44e4d8) {
            ctx->pc = 0x44E4ECu;
            goto label_44e4ec;
        }
    }
    ctx->pc = 0x44E4E0u;
    // 0x44e4e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44e4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44e4e4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x44E4E4u;
    SET_GPR_U32(ctx, 31, 0x44E4ECu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x44E4E4u, 0x44E4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E4ECu;
label_44e4ec:
    // 0x44e4ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44e4f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44e4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44e4f4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x44e4f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x44e4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x44E4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44E500u;
}
