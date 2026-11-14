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

// Function: sub_0023B090
// Address: 0x23b090 - 0x23b0f0
void sub_0023B090_0x23b090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B090_0x23b090");
#endif

    switch (ctx->pc) {
        case 0x23b0dcu: goto label_23b0dc;
        default: break;
    }

    ctx->pc = 0x23b090u;

    // 0x23b090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23b090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23b094: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23b094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23b098: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23b098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23b09c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x23b09cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x23b0a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b0a4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23B0A4u;
    {
        const bool branch_taken_0x23b0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b0a4) {
            ctx->pc = 0x23B0DCu;
            goto label_23b0dc;
        }
    }
    ctx->pc = 0x23B0ACu;
    // 0x23b0ac: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x23b0acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x23b0b0: 0x246355e0  addiu       $v1, $v1, 0x55E0
    ctx->pc = 0x23b0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21984));
    // 0x23b0b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b0b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23b0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x23b0bc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x23b0bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b0c0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23b0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23b0c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23b0c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x23b0c8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23B0C8u;
    {
        const bool branch_taken_0x23b0c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23b0c8) {
            ctx->pc = 0x23B0DCu;
            goto label_23b0dc;
        }
    }
    ctx->pc = 0x23B0D0u;
    // 0x23b0d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23b0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b0d4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x23B0D4u;
    SET_GPR_U32(ctx, 31, 0x23B0DCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x23B0D4u, 0x23B0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B0DCu;
label_23b0dc:
    // 0x23b0dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b0e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b0e4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23b0e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23b0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x23B0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B0F0u;
}
