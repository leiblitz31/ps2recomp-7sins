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

// Function: sub_00478790
// Address: 0x478790 - 0x4787f0
void sub_00478790_0x478790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00478790_0x478790");
#endif

    switch (ctx->pc) {
        case 0x4787b0u: goto label_4787b0;
        default: break;
    }

    ctx->pc = 0x478790u;

    // 0x478790: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x478790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x478794: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x478794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x478798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x478798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47879c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x47879cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x4787a0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x4787a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x4787a4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4787a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4787a8: 0xc11e030  jal         func_4780C0
    ctx->pc = 0x4787A8u;
    SET_GPR_U32(ctx, 31, 0x4787B0u);
    ctx->pc = 0x4780C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4780C0u, 0x4787A8u, 0x4787B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4787B0u;
label_4787b0:
    // 0x4787b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4787b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4787b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4787b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4787b8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x4787b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x4787bc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4787BCu;
    {
        const bool branch_taken_0x4787bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4787bc) {
            ctx->pc = 0x4787D0u;
            goto label_4787d0;
        }
    }
    ctx->pc = 0x4787C4u;
    // 0x4787c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4787c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4787c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4787C8u;
    {
        const bool branch_taken_0x4787c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4787c8) {
            ctx->pc = 0x4787D4u;
            goto label_4787d4;
        }
    }
    ctx->pc = 0x4787D0u;
label_4787d0:
    // 0x4787d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4787d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4787d4:
    // 0x4787d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4787d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4787d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4787d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4787dc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4787dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4787e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4787E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4787E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4787E8u;
    // 0x4787e8: 0x0  nop
    ctx->pc = 0x4787e8u;
    // NOP
    // 0x4787ec: 0x0  nop
    ctx->pc = 0x4787ecu;
    // NOP
    ctx->pc = 0x4787f0u;
}
