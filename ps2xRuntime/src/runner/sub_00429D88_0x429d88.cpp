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

// Function: sub_00429D88
// Address: 0x429d88 - 0x429e28
void sub_00429D88_0x429d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00429D88_0x429d88");
#endif

    switch (ctx->pc) {
        case 0x429e0cu: goto label_429e0c;
        default: break;
    }

    ctx->pc = 0x429d88u;

    // 0x429d88: 0x9783beaa  lhu         $v1, -0x4156($gp)
    ctx->pc = 0x429d88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294950570)));
    // 0x429d8c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x429d8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x429d90: 0x8f85bea4  lw          $a1, -0x415C($gp)
    ctx->pc = 0x429d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950564)));
    // 0x429d94: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x429d94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x429d98: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x429d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x429d9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x429d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x429da0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x429da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x429da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x429da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x429da8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x429da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x429dac: 0x9787ade6  lhu         $a3, -0x521A($gp)
    ctx->pc = 0x429dacu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294946278)));
    // 0x429db0: 0x24010001  addiu       $at, $zero, 0x1
    ctx->pc = 0x429db0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x429db4: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x429db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x429db8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x429db8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x429dbc: 0x30e6ffff  andi        $a2, $a3, 0xFFFF
    ctx->pc = 0x429dbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x429dc0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x429dc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x429dc4: 0x14860002  bne         $a0, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x429DC4u;
    {
        const bool branch_taken_0x429dc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x429DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429DC4u;
        // 0x429dc8: 0xa783beaa  sh          $v1, -0x4156($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294950570), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429dc4) {
            ctx->pc = 0x429DD0u;
            goto label_429dd0;
        }
    }
    ctx->pc = 0x429DCCu;
    // 0x429dcc: 0xa780beaa  sh          $zero, -0x4156($gp)
    ctx->pc = 0x429dccu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294950570), (uint16_t)GPR_U32(ctx, 0));
label_429dd0:
    // 0x429dd0: 0x9784bea8  lhu         $a0, -0x4158($gp)
    ctx->pc = 0x429dd0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294950568)));
    // 0x429dd4: 0x9782beaa  lhu         $v0, -0x4156($gp)
    ctx->pc = 0x429dd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294950570)));
    // 0x429dd8: 0x1482000f  bne         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x429DD8u;
    {
        const bool branch_taken_0x429dd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x429DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429DD8u;
        // 0x429ddc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429dd8) {
            ctx->pc = 0x429E18u;
            goto label_429e18;
        }
    }
    ctx->pc = 0x429DE0u;
    // 0x429de0: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x429de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x429de4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x429de4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x429de8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x429de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x429dec: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x429decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x429df0: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x429df0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x429df4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x429DF4u;
    {
        const bool branch_taken_0x429df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x429DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429DF4u;
        // 0x429df8: 0xa784beaa  sh          $a0, -0x4156($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294950570), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429df4) {
            ctx->pc = 0x429E04u;
            goto label_429e04;
        }
    }
    ctx->pc = 0x429DFCu;
    // 0x429dfc: 0x871023  subu        $v0, $a0, $a3
    ctx->pc = 0x429dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x429e00: 0xa782beaa  sh          $v0, -0x4156($gp)
    ctx->pc = 0x429e00u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294950570), (uint16_t)GPR_U32(ctx, 2));
label_429e04:
    // 0x429e04: 0xc109f06  jal         func_427C18
    ctx->pc = 0x429E04u;
    SET_GPR_U32(ctx, 31, 0x429E0Cu);
    ctx->pc = 0x429E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x429E04u;
    // 0x429e08: 0x9790beaa  lhu         $s0, -0x4156($gp) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294950570)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427C18u, 0x429E04u, 0x429E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429E0Cu;
label_429e0c:
    // 0x429e0c: 0xa790bea8  sh          $s0, -0x4158($gp)
    ctx->pc = 0x429e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294950568), (uint16_t)GPR_U32(ctx, 16));
    // 0x429e10: 0xa791beaa  sh          $s1, -0x4156($gp)
    ctx->pc = 0x429e10u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294950570), (uint16_t)GPR_U32(ctx, 17));
    // 0x429e14: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x429e14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_429e18:
    // 0x429e18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x429e18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x429e1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x429e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x429e20: 0x3e00008  jr          $ra
    ctx->pc = 0x429E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x429E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429E20u;
        // 0x429e24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x429E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x429E28u;
}
