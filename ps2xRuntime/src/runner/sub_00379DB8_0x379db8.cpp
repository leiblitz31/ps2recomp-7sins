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

// Function: sub_00379DB8
// Address: 0x379db8 - 0x379e48
void sub_00379DB8_0x379db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379DB8_0x379db8");
#endif

    switch (ctx->pc) {
        case 0x379e20u: goto label_379e20;
        case 0x379e30u: goto label_379e30;
        default: break;
    }

    ctx->pc = 0x379db8u;

    // 0x379db8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x379db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x379dbc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x379dbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x379dc0: 0x8c62ac50  lw          $v0, -0x53B0($v1)
    ctx->pc = 0x379dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5DAC50u));
    // 0x379dc4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x379dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x379dc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x379dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x379dcc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x379dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x379dd0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x379dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x379dd4: 0x10e00017  beqz        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x379DD4u;
    {
        const bool branch_taken_0x379dd4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x379DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379DD4u;
        // 0x379dd8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379dd4) {
            ctx->pc = 0x379E34u;
            goto label_379e34;
        }
    }
    ctx->pc = 0x379DDCu;
    // 0x379ddc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x379ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x379de0: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x379de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x379de4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x379de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x379de8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x379DE8u;
    {
        const bool branch_taken_0x379de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x379de8) {
            ctx->pc = 0x379E28u;
            goto label_379e28;
        }
    }
    ctx->pc = 0x379DF0u;
    // 0x379df0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x379df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x379df4: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x379df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x379df8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x379df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379dfc: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x379dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x379e00: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x379e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x379e04: 0x24b00004  addiu       $s0, $a1, 0x4
    ctx->pc = 0x379e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x379e08: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x379e08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x379e0c: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x379e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x379e10: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x379e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x379e14: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x379e14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x379e18: 0xc0de288  jal         func_378A20
    ctx->pc = 0x379E18u;
    SET_GPR_U32(ctx, 31, 0x379E20u);
    ctx->pc = 0x379E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379E18u;
    // 0x379e1c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378A20u, 0x379E18u, 0x379E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379E20u;
label_379e20:
    // 0x379e20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x379E20u;
    {
        const bool branch_taken_0x379e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379E20u;
        // 0x379e24: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379e20) {
            ctx->pc = 0x379E34u;
            goto label_379e34;
        }
    }
    ctx->pc = 0x379E28u;
label_379e28:
    // 0x379e28: 0xc0de908  jal         func_37A420
    ctx->pc = 0x379E28u;
    SET_GPR_U32(ctx, 31, 0x379E30u);
    ctx->pc = 0x37A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A420u, 0x379E28u, 0x379E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379E30u;
label_379e30:
    // 0x379e30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x379e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_379e34:
    // 0x379e34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x379e34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379e38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x379e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379e3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x379e3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379e40: 0x3e00008  jr          $ra
    ctx->pc = 0x379E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379E40u;
        // 0x379e44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379E48u;
}
