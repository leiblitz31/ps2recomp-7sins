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

// Function: sub_002831B0
// Address: 0x2831b0 - 0x283240
void sub_002831B0_0x2831b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002831B0_0x2831b0");
#endif

    switch (ctx->pc) {
        case 0x2831ccu: goto label_2831cc;
        case 0x2831d8u: goto label_2831d8;
        case 0x2831e8u: goto label_2831e8;
        case 0x2831f4u: goto label_2831f4;
        case 0x283208u: goto label_283208;
        case 0x28321cu: goto label_28321c;
        default: break;
    }

    ctx->pc = 0x2831b0u;

label_2831b0:
    // 0x2831b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2831b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2831b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2831b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2831b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2831b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2831bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2831bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2831c0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2831c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2831c4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2831C4u;
    {
        const bool branch_taken_0x2831c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2831c4) {
            ctx->pc = 0x283220u;
            goto label_283220;
        }
    }
    ctx->pc = 0x2831CCu;
label_2831cc:
    // 0x2831cc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2831ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2831d0: 0xc0a0c38  jal         func_2830E0
    ctx->pc = 0x2831D0u;
    SET_GPR_U32(ctx, 31, 0x2831D8u);
    ctx->pc = 0x2830E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2830E0u, 0x2831D0u, 0x2831D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2831D8u;
label_2831d8:
    // 0x2831d8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2831d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2831dc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2831dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2831e0: 0xc0a0c6c  jal         func_2831B0
    ctx->pc = 0x2831E0u;
    SET_GPR_U32(ctx, 31, 0x2831E8u);
    ctx->pc = 0x2831B0u;
    goto label_2831b0;
    ctx->pc = 0x2831E8u;
label_2831e8:
    // 0x2831e8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2831e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2831ec: 0xc0a0c40  jal         func_283100
    ctx->pc = 0x2831ECu;
    SET_GPR_U32(ctx, 31, 0x2831F4u);
    ctx->pc = 0x283100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283100u, 0x2831ECu, 0x2831F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2831F4u;
label_2831f4:
    // 0x2831f4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2831f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2831f8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2831f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2831fc: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2831fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x283200: 0xc0a0c90  jal         func_283240
    ctx->pc = 0x283200u;
    SET_GPR_U32(ctx, 31, 0x283208u);
    ctx->pc = 0x283240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283240u, 0x283200u, 0x283208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283208u;
label_283208:
    // 0x283208: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x283208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28320c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x28320cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283210: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x283210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283214: 0xc0a07d0  jal         func_281F40
    ctx->pc = 0x283214u;
    SET_GPR_U32(ctx, 31, 0x28321Cu);
    ctx->pc = 0x281F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281F40u, 0x283214u, 0x28321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28321Cu;
label_28321c:
    // 0x28321c: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x28321cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
label_283220:
    // 0x283220: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x283220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283224: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x283224u;
    {
        const bool branch_taken_0x283224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x283224) {
            ctx->pc = 0x2831CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2831cc;
        }
    }
    ctx->pc = 0x28322Cu;
    // 0x28322c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28322cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283230: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x283230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283234: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x283234u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x283238: 0x3e00008  jr          $ra
    ctx->pc = 0x283238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283240u;
}
