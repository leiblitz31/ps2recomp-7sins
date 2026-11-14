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

// Function: sub_0040DAB0
// Address: 0x40dab0 - 0x40db40
void sub_0040DAB0_0x40dab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040DAB0_0x40dab0");
#endif

    switch (ctx->pc) {
        case 0x40daf0u: goto label_40daf0;
        case 0x40db04u: goto label_40db04;
        default: break;
    }

    ctx->pc = 0x40dab0u;

    // 0x40dab0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x40dab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x40dab4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x40dab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x40dab8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x40dab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x40dabc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x40dabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x40dac0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x40dac0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40dac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40dac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40dac8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x40dac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x40dacc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x40daccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x40dad0: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x40dad0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x40dad4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x40dad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x40dad8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x40dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x40dadc: 0x2445fffe  addiu       $a1, $v0, -0x2
    ctx->pc = 0x40dadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x40dae0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x40dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x40dae4: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x40DAE4u;
    {
        const bool branch_taken_0x40dae4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x40DAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DAE4u;
        // 0x40dae8: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40dae4) {
            ctx->pc = 0x40DB18u;
            goto label_40db18;
        }
    }
    ctx->pc = 0x40DAECu;
    // 0x40daec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x40daecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_40daf0:
    // 0x40daf0: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x40daf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x40daf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40daf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40daf8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x40daf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40dafc: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x40DAFCu;
    SET_GPR_U32(ctx, 31, 0x40DB04u);
    ctx->pc = 0x40DB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40DAFCu;
    // 0x40db00: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x40DAFCu, 0x40DB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40DB04u;
label_40db04:
    // 0x40db04: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x40db04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x40db08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x40db08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40db0c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x40db0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x40db10: 0x1c40fff7  bgtz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x40DB10u;
    {
        const bool branch_taken_0x40db10 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x40DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DB10u;
        // 0x40db14: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40db10) {
            ctx->pc = 0x40DAF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40daf0;
        }
    }
    ctx->pc = 0x40DB18u;
label_40db18:
    // 0x40db18: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x40db18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x40db1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40db20: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x40db20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40db24: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x40db24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x40db28: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x40db28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40db2c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x40db2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x40db30: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x40db30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40db34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40db34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40db38: 0x3e00008  jr          $ra
    ctx->pc = 0x40DB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40DB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DB38u;
        // 0x40db3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DB38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40DB40u;
}
