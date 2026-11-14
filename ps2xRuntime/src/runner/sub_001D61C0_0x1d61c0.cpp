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

// Function: sub_001D61C0
// Address: 0x1d61c0 - 0x1d6220
void sub_001D61C0_0x1d61c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D61C0_0x1d61c0");
#endif

    switch (ctx->pc) {
        case 0x1d61e8u: goto label_1d61e8;
        case 0x1d6208u: goto label_1d6208;
        default: break;
    }

    ctx->pc = 0x1d61c0u;

    // 0x1d61c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d61c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d61c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d61c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d61c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d61c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1d61cc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1d61ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d61d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d61d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d61d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D61D4u;
    {
        const bool branch_taken_0x1d61d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d61d4) {
            ctx->pc = 0x1D6208u;
            goto label_1d6208;
        }
    }
    ctx->pc = 0x1D61DCu;
    // 0x1d61dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d61dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d61e0: 0xc075888  jal         func_1D6220
    ctx->pc = 0x1D61E0u;
    SET_GPR_U32(ctx, 31, 0x1D61E8u);
    ctx->pc = 0x1D6220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6220u, 0x1D61E0u, 0x1D61E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D61E8u;
label_1d61e8:
    // 0x1d61e8: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1d61e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d61ec: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d61ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d61f0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d61f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d61f4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D61F4u;
    {
        const bool branch_taken_0x1d61f4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d61f4) {
            ctx->pc = 0x1D6208u;
            goto label_1d6208;
        }
    }
    ctx->pc = 0x1D61FCu;
    // 0x1d61fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d61fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6200: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1D6200u;
    SET_GPR_U32(ctx, 31, 0x1D6208u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1D6200u, 0x1D6208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6208u;
label_1d6208:
    // 0x1d6208: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d620c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d620cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6210: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d6210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d6214: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D621Cu;
    // 0x1d621c: 0x0  nop
    ctx->pc = 0x1d621cu;
    // NOP
    ctx->pc = 0x1d6220u;
}
