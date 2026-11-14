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

// Function: sub_003C2C70
// Address: 0x3c2c70 - 0x3c2cc0
void sub_003C2C70_0x3c2c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C2C70_0x3c2c70");
#endif

    switch (ctx->pc) {
        case 0x3c2c70u: goto label_3c2c70;
        case 0x3c2c74u: goto label_3c2c74;
        case 0x3c2c78u: goto label_3c2c78;
        case 0x3c2c7cu: goto label_3c2c7c;
        case 0x3c2c80u: goto label_3c2c80;
        case 0x3c2c84u: goto label_3c2c84;
        case 0x3c2c88u: goto label_3c2c88;
        case 0x3c2c8cu: goto label_3c2c8c;
        case 0x3c2c90u: goto label_3c2c90;
        case 0x3c2c94u: goto label_3c2c94;
        case 0x3c2c98u: goto label_3c2c98;
        case 0x3c2c9cu: goto label_3c2c9c;
        case 0x3c2ca0u: goto label_3c2ca0;
        case 0x3c2ca4u: goto label_3c2ca4;
        case 0x3c2ca8u: goto label_3c2ca8;
        case 0x3c2cacu: goto label_3c2cac;
        case 0x3c2cb0u: goto label_3c2cb0;
        case 0x3c2cb4u: goto label_3c2cb4;
        case 0x3c2cb8u: goto label_3c2cb8;
        case 0x3c2cbcu: goto label_3c2cbc;
        default: break;
    }

    ctx->pc = 0x3c2c70u;

label_3c2c70:
    // 0x3c2c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c2c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3c2c74:
    // 0x3c2c74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c2c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3c2c78:
    // 0x3c2c78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c2c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c2c7c:
    // 0x3c2c7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c2c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c2c80:
    // 0x3c2c80: 0x2060018  mult        $zero, $s0, $a2
    ctx->pc = 0x3c2c80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3c2c84:
    // 0x3c2c84: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3c2c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c2c88:
    // 0x3c2c88: 0x8ce30050  lw          $v1, 0x50($a3)
    ctx->pc = 0x3c2c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
label_3c2c8c:
    // 0x3c2c8c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x3c2c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3c2c90:
    // 0x3c2c90: 0x3012  mflo        $a2
    ctx->pc = 0x3c2c90u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_3c2c94:
    // 0x3c2c94: 0x40f809  jalr        $v0
label_3c2c98:
    if (ctx->pc == 0x3C2C98u) {
        ctx->pc = 0x3C2C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2C94u;
        // 0x3c2c98: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2C9Cu;
        goto label_3c2c9c;
    }
    ctx->pc = 0x3C2C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C2C9Cu);
        ctx->pc = 0x3C2C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2C94u;
        // 0x3c2c98: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2C94u, 0x3C2C9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C2C9Cu;
label_3c2c9c:
    // 0x3c2c9c: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x3c2c9cu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_3c2ca0:
    // 0x3c2ca0: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_3c2ca4:
    if (ctx->pc == 0x3C2CA4u) {
        ctx->pc = 0x3C2CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2CA0u;
        // 0x3c2ca4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2CA8u;
        goto label_3c2ca8;
    }
    ctx->pc = 0x3C2CA0u;
    {
        const bool branch_taken_0x3c2ca0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2ca0) {
            ctx->pc = 0x3C2CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C2CA0u;
            // 0x3c2ca4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2CA8u;
            goto label_3c2ca8;
        }
    }
    ctx->pc = 0x3C2CA8u;
label_3c2ca8:
    // 0x3c2ca8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c2ca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c2cac:
    // 0x3c2cac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c2cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c2cb0:
    // 0x3c2cb0: 0x1012  mflo        $v0
    ctx->pc = 0x3c2cb0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_3c2cb4:
    // 0x3c2cb4: 0x3e00008  jr          $ra
label_3c2cb8:
    if (ctx->pc == 0x3C2CB8u) {
        ctx->pc = 0x3C2CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2CB4u;
        // 0x3c2cb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2CBCu;
        goto label_3c2cbc;
    }
    ctx->pc = 0x3C2CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2CB4u;
        // 0x3c2cb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C2CBCu;
label_3c2cbc:
    // 0x3c2cbc: 0x0  nop
    ctx->pc = 0x3c2cbcu;
    // NOP
    ctx->pc = 0x3c2cc0u;
}
