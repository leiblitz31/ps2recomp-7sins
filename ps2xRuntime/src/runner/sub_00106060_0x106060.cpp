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

// Function: sub_00106060
// Address: 0x106060 - 0x1060d0
void sub_00106060_0x106060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106060_0x106060");
#endif

    switch (ctx->pc) {
        case 0x106094u: goto label_106094;
        case 0x1060b4u: goto label_1060b4;
        default: break;
    }

    ctx->pc = 0x106060u;

    // 0x106060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x106064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x106068: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x106068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10606c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x10606cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x106070: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x106070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106074: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x106074u;
    {
        const bool branch_taken_0x106074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106074) {
            ctx->pc = 0x1060B4u;
            goto label_1060b4;
        }
    }
    ctx->pc = 0x10607Cu;
    // 0x10607c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10607cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106080: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x106080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106084: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x106084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106088: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x106088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10608c: 0xc04241c  jal         func_109070
    ctx->pc = 0x10608Cu;
    SET_GPR_U32(ctx, 31, 0x106094u);
    ctx->pc = 0x109070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109070u, 0x10608Cu, 0x106094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106094u;
label_106094:
    // 0x106094: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x106094u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106098: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x106098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x10609c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x10609cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1060a0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1060A0u;
    {
        const bool branch_taken_0x1060a0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1060a0) {
            ctx->pc = 0x1060B4u;
            goto label_1060b4;
        }
    }
    ctx->pc = 0x1060A8u;
    // 0x1060a8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1060a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1060ac: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1060ACu;
    SET_GPR_U32(ctx, 31, 0x1060B4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1060ACu, 0x1060B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1060B4u;
label_1060b4:
    // 0x1060b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1060b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1060b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1060b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1060bc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1060bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1060c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1060C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1060C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1060C8u;
    // 0x1060c8: 0x0  nop
    ctx->pc = 0x1060c8u;
    // NOP
    // 0x1060cc: 0x0  nop
    ctx->pc = 0x1060ccu;
    // NOP
    ctx->pc = 0x1060d0u;
}
