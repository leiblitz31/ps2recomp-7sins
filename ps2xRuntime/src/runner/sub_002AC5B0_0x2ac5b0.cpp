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

// Function: sub_002AC5B0
// Address: 0x2ac5b0 - 0x2ac610
void sub_002AC5B0_0x2ac5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC5B0_0x2ac5b0");
#endif

    switch (ctx->pc) {
        case 0x2ac5dcu: goto label_2ac5dc;
        case 0x2ac5fcu: goto label_2ac5fc;
        default: break;
    }

    ctx->pc = 0x2ac5b0u;

    // 0x2ac5b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ac5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ac5b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ac5b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2ac5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2ac5bc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2ac5bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ac5c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ac5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac5c4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2AC5C4u;
    {
        const bool branch_taken_0x2ac5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac5c4) {
            ctx->pc = 0x2AC5FCu;
            goto label_2ac5fc;
        }
    }
    ctx->pc = 0x2AC5CCu;
    // 0x2ac5cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2ac5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac5d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ac5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac5d4: 0xc0ab184  jal         func_2AC610
    ctx->pc = 0x2AC5D4u;
    SET_GPR_U32(ctx, 31, 0x2AC5DCu);
    ctx->pc = 0x2AC610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC610u, 0x2AC5D4u, 0x2AC5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC5DCu;
label_2ac5dc:
    // 0x2ac5dc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2ac5dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac5e0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2ac5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ac5e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ac5e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ac5e8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AC5E8u;
    {
        const bool branch_taken_0x2ac5e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ac5e8) {
            ctx->pc = 0x2AC5FCu;
            goto label_2ac5fc;
        }
    }
    ctx->pc = 0x2AC5F0u;
    // 0x2ac5f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2ac5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac5f4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2AC5F4u;
    SET_GPR_U32(ctx, 31, 0x2AC5FCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2AC5F4u, 0x2AC5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC5FCu;
label_2ac5fc:
    // 0x2ac5fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ac5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac600: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac604: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2ac604u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ac608: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC610u;
}
