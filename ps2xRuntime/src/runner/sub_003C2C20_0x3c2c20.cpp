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

// Function: sub_003C2C20
// Address: 0x3c2c20 - 0x3c2c70
void sub_003C2C20_0x3c2c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C2C20_0x3c2c20");
#endif

    switch (ctx->pc) {
        case 0x3c2c20u: goto label_3c2c20;
        case 0x3c2c24u: goto label_3c2c24;
        case 0x3c2c28u: goto label_3c2c28;
        case 0x3c2c2cu: goto label_3c2c2c;
        case 0x3c2c30u: goto label_3c2c30;
        case 0x3c2c34u: goto label_3c2c34;
        case 0x3c2c38u: goto label_3c2c38;
        case 0x3c2c3cu: goto label_3c2c3c;
        case 0x3c2c40u: goto label_3c2c40;
        case 0x3c2c44u: goto label_3c2c44;
        case 0x3c2c48u: goto label_3c2c48;
        case 0x3c2c4cu: goto label_3c2c4c;
        case 0x3c2c50u: goto label_3c2c50;
        case 0x3c2c54u: goto label_3c2c54;
        case 0x3c2c58u: goto label_3c2c58;
        case 0x3c2c5cu: goto label_3c2c5c;
        case 0x3c2c60u: goto label_3c2c60;
        case 0x3c2c64u: goto label_3c2c64;
        case 0x3c2c68u: goto label_3c2c68;
        case 0x3c2c6cu: goto label_3c2c6c;
        default: break;
    }

    ctx->pc = 0x3c2c20u;

label_3c2c20:
    // 0x3c2c20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c2c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3c2c24:
    // 0x3c2c24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c2c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3c2c28:
    // 0x3c2c28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c2c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c2c2c:
    // 0x3c2c2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c2c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c2c30:
    // 0x3c2c30: 0x2060018  mult        $zero, $s0, $a2
    ctx->pc = 0x3c2c30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3c2c34:
    // 0x3c2c34: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3c2c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c2c38:
    // 0x3c2c38: 0x8ce30050  lw          $v1, 0x50($a3)
    ctx->pc = 0x3c2c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
label_3c2c3c:
    // 0x3c2c3c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x3c2c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_3c2c40:
    // 0x3c2c40: 0x3012  mflo        $a2
    ctx->pc = 0x3c2c40u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_3c2c44:
    // 0x3c2c44: 0x40f809  jalr        $v0
label_3c2c48:
    if (ctx->pc == 0x3C2C48u) {
        ctx->pc = 0x3C2C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2C44u;
        // 0x3c2c48: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2C4Cu;
        goto label_3c2c4c;
    }
    ctx->pc = 0x3C2C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C2C4Cu);
        ctx->pc = 0x3C2C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2C44u;
        // 0x3c2c48: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2C44u, 0x3C2C4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C2C4Cu;
label_3c2c4c:
    // 0x3c2c4c: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x3c2c4cu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_3c2c50:
    // 0x3c2c50: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_3c2c54:
    if (ctx->pc == 0x3C2C54u) {
        ctx->pc = 0x3C2C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2C50u;
        // 0x3c2c54: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2C58u;
        goto label_3c2c58;
    }
    ctx->pc = 0x3C2C50u;
    {
        const bool branch_taken_0x3c2c50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2c50) {
            ctx->pc = 0x3C2C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C2C50u;
            // 0x3c2c54: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2C58u;
            goto label_3c2c58;
        }
    }
    ctx->pc = 0x3C2C58u;
label_3c2c58:
    // 0x3c2c58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c2c58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c2c5c:
    // 0x3c2c5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c2c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c2c60:
    // 0x3c2c60: 0x1012  mflo        $v0
    ctx->pc = 0x3c2c60u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_3c2c64:
    // 0x3c2c64: 0x3e00008  jr          $ra
label_3c2c68:
    if (ctx->pc == 0x3C2C68u) {
        ctx->pc = 0x3C2C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2C64u;
        // 0x3c2c68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2C6Cu;
        goto label_3c2c6c;
    }
    ctx->pc = 0x3C2C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2C64u;
        // 0x3c2c68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C2C6Cu;
label_3c2c6c:
    // 0x3c2c6c: 0x0  nop
    ctx->pc = 0x3c2c6cu;
    // NOP
    ctx->pc = 0x3c2c70u;
}
