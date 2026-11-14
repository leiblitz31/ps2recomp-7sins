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

// Function: sub_00428C88
// Address: 0x428c88 - 0x429140
void sub_00428C88_0x428c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00428C88_0x428c88");
#endif

    switch (ctx->pc) {
        case 0x428ca4u: goto label_428ca4;
        case 0x428d54u: goto label_428d54;
        case 0x428f20u: goto label_428f20;
        case 0x429024u: goto label_429024;
        case 0x429124u: goto label_429124;
        default: break;
    }

    ctx->pc = 0x428c88u;

    // 0x428c88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x428c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x428c8c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x428c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x428c90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x428c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x428c94: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x428c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428c98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x428c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x428c9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x428c9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428ca0: 0x8f84be8c  lw          $a0, -0x4174($gp)
    ctx->pc = 0x428ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950540)));
label_428ca4:
    // 0x428ca4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x428ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x428ca8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x428ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x428cac: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x428cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x428cb0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x428cb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428cb4: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x428cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x428cb8: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x428cb8u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x428cbc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x428cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x428cc0: 0x10e000d8  beqz        $a3, . + 4 + (0xD8 << 2)
    ctx->pc = 0x428CC0u;
    {
        const bool branch_taken_0x428cc0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x428CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428CC0u;
        // 0x428cc4: 0x43800b  movn        $s0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428cc0) {
            ctx->pc = 0x429024u;
            goto label_429024;
        }
    }
    ctx->pc = 0x428CC8u;
    // 0x428cc8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x428cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x428ccc: 0x24031101  addiu       $v1, $zero, 0x1101
    ctx->pc = 0x428cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4353));
    // 0x428cd0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x428cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x428cd4: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x428cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x428cd8: 0x144300cb  bne         $v0, $v1, . + 4 + (0xCB << 2)
    ctx->pc = 0x428CD8u;
    {
        const bool branch_taken_0x428cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x428CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428CD8u;
        // 0x428cdc: 0x8f86be20  lw          $a2, -0x41E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428cd8) {
            ctx->pc = 0x429008u;
            goto label_429008;
        }
    }
    ctx->pc = 0x428CE0u;
    // 0x428ce0: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x428ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x428ce4: 0x8f83be3c  lw          $v1, -0x41C4($gp)
    ctx->pc = 0x428ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950460)));
    // 0x428ce8: 0x8f82be40  lw          $v0, -0x41C0($gp)
    ctx->pc = 0x428ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950464)));
    // 0x428cec: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x428cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x428cf0: 0x8f84be70  lw          $a0, -0x4190($gp)
    ctx->pc = 0x428cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950512)));
    // 0x428cf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x428cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x428cf8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x428cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x428cfc: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x428cfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x428d00: 0x104000c1  beqz        $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x428D00u;
    {
        const bool branch_taken_0x428d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x428D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428D00u;
        // 0x428d04: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428d00) {
            ctx->pc = 0x429008u;
            goto label_429008;
        }
    }
    ctx->pc = 0x428D08u;
    // 0x428d08: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x428d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x428d0c: 0x2c422001  sltiu       $v0, $v0, 0x2001
    ctx->pc = 0x428d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8193) ? 1 : 0);
    // 0x428d10: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x428D10u;
    {
        const bool branch_taken_0x428d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x428D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428D10u;
        // 0x428d14: 0x8f87be40  lw          $a3, -0x41C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428d10) {
            ctx->pc = 0x428E18u;
            goto label_428e18;
        }
    }
    ctx->pc = 0x428D18u;
    // 0x428d18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x428d18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428d1c: 0x66380b  movn        $a3, $v1, $a2
    ctx->pc = 0x428d1cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x428d20: 0x50e0003d  beql        $a3, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x428D20u;
    {
        const bool branch_taken_0x428d20 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x428d20) {
            ctx->pc = 0x428D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x428D20u;
            // 0x428d24: 0x8f87be40  lw          $a3, -0x41C0($gp) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x428E18u;
            goto label_428e18;
        }
    }
    ctx->pc = 0x428D28u;
    // 0x428d28: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x428d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x428d2c: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x428d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x428d30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x428d30u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x428d34: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x428d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x428d38: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x428D38u;
    {
        const bool branch_taken_0x428d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x428D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428D38u;
        // 0x428d3c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428d38) {
            ctx->pc = 0x428D70u;
            goto label_428d70;
        }
    }
    ctx->pc = 0x428D40u;
    // 0x428d40: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x428d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x428d44: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x428d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x428d48: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x428d48u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x428d4c: 0xf  sync
    ctx->pc = 0x428d4cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x428d50: 0x40f  sync.p
    ctx->pc = 0x428d50u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_428d54:
    // 0x428d54: 0x0  nop
    ctx->pc = 0x428d54u;
    // NOP
    // 0x428d58: 0x0  nop
    ctx->pc = 0x428d58u;
    // NOP
    // 0x428d5c: 0x0  nop
    ctx->pc = 0x428d5cu;
    // NOP
    // 0x428d60: 0x0  nop
    ctx->pc = 0x428d60u;
    // NOP
    // 0x428d64: 0x0  nop
    ctx->pc = 0x428d64u;
    // NOP
    // 0x428d68: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x428D68u;
    {
        const bool branch_taken_0x428d68 = (false);
        if (branch_taken_0x428d68) {
            ctx->pc = 0x428D54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_428d54;
        }
    }
    ctx->pc = 0x428D70u;
label_428d70:
    // 0x428d70: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x428d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x428d74: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x428d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x428d78: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x428d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x428d7c: 0x8f86be3c  lw          $a2, -0x41C4($gp)
    ctx->pc = 0x428d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950460)));
    // 0x428d80: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x428d80u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 4)); // MMIO: 0x1000e010
    // 0x428d84: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x428d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x428d88: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x428d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x428d8c: 0x8f85be40  lw          $a1, -0x41C0($gp)
    ctx->pc = 0x428d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950464)));
    // 0x428d90: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x428d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x428d94: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x428d94u;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 6)); // MMIO: 0x1000d080
    // 0x428d98: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x428d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x428d9c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x428d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x428da0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x428da0u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 5)); // MMIO: 0x1000d010
    // 0x428da4: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x428da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x428da8: 0x71102  srl         $v0, $a3, 4
    ctx->pc = 0x428da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x428dac: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x428dacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x428db0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x428db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x428db4: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x428db4u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x428db8: 0xf  sync
    ctx->pc = 0x428db8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x428dbc: 0x40f  sync.p
    ctx->pc = 0x428dbcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x428dc0: 0x8f84be28  lw          $a0, -0x41D8($gp)
    ctx->pc = 0x428dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950440)));
    // 0x428dc4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x428DC4u;
    {
        const bool branch_taken_0x428dc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x428DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428DC4u;
        // 0x428dc8: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428dc4) {
            ctx->pc = 0x428DF8u;
            goto label_428df8;
        }
    }
    ctx->pc = 0x428DCCu;
    // 0x428dcc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x428dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x428dd0: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x428dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x428dd4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x428dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x428dd8: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x428DD8u;
    {
        const bool branch_taken_0x428dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x428dd8) {
            ctx->pc = 0x428DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x428DD8u;
            // 0x428ddc: 0x8f82be40  lw          $v0, -0x41C0($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x428DFCu;
            goto label_428dfc;
        }
    }
    ctx->pc = 0x428DE0u;
    // 0x428de0: 0x861023  subu        $v0, $a0, $a2
    ctx->pc = 0x428de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x428de4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x428de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x428de8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x428de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x428dec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x428decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x428df0: 0xaf82be28  sw          $v0, -0x41D8($gp)
    ctx->pc = 0x428df0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950440), GPR_U32(ctx, 2));
    // 0x428df4: 0x0  nop
    ctx->pc = 0x428df4u;
    // NOP
label_428df8:
    // 0x428df8: 0x8f82be40  lw          $v0, -0x41C0($gp)
    ctx->pc = 0x428df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950464)));
label_428dfc:
    // 0x428dfc: 0x8f83be3c  lw          $v1, -0x41C4($gp)
    ctx->pc = 0x428dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950460)));
    // 0x428e00: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x428e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x428e04: 0x38632000  xori        $v1, $v1, 0x2000
    ctx->pc = 0x428e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8192);
    // 0x428e08: 0xaf82be40  sw          $v0, -0x41C0($gp)
    ctx->pc = 0x428e08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950464), GPR_U32(ctx, 2));
    // 0x428e0c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x428e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x428e10: 0xaf83be3c  sw          $v1, -0x41C4($gp)
    ctx->pc = 0x428e10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950460), GPR_U32(ctx, 3));
    // 0x428e14: 0x8f87be40  lw          $a3, -0x41C0($gp)
    ctx->pc = 0x428e14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950464)));
label_428e18:
    // 0x428e18: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x428e18u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x428e1c: 0x8f86be20  lw          $a2, -0x41E0($gp)
    ctx->pc = 0x428e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x428e20: 0xe91021  addu        $v0, $a3, $t1
    ctx->pc = 0x428e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x428e24: 0x8f84be3c  lw          $a0, -0x41C4($gp)
    ctx->pc = 0x428e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950460)));
    // 0x428e28: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x428e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x428e2c: 0x8f85be8c  lw          $a1, -0x4174($gp)
    ctx->pc = 0x428e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950540)));
    // 0x428e30: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x428e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x428e34: 0xaf82be74  sw          $v0, -0x418C($gp)
    ctx->pc = 0x428e34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950516), GPR_U32(ctx, 2));
    // 0x428e38: 0xa81824  and         $v1, $a1, $t0
    ctx->pc = 0x428e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x428e3c: 0x107100bb  beq         $v1, $s1, . + 4 + (0xBB << 2)
    ctx->pc = 0x428E3Cu;
    {
        const bool branch_taken_0x428e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x428E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428E3Cu;
        // 0x428e40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428e3c) {
            ctx->pc = 0x42912Cu;
            goto label_42912c;
        }
    }
    ctx->pc = 0x428E44u;
    // 0x428e44: 0x111027  nor         $v0, $zero, $s1
    ctx->pc = 0x428e44u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 17)));
    // 0x428e48: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x428e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x428e4c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x428e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x428e50: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x428E50u;
    {
        const bool branch_taken_0x428e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x428E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428E50u;
        // 0x428e54: 0x8f85be88  lw          $a1, -0x4178($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428e50) {
            ctx->pc = 0x428EC0u;
            goto label_428ec0;
        }
    }
    ctx->pc = 0x428E58u;
    // 0x428e58: 0xc41823  subu        $v1, $a2, $a0
    ctx->pc = 0x428e58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x428e5c: 0xe51023  subu        $v0, $a3, $a1
    ctx->pc = 0x428e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x428e60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x428e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x428e64: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x428e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x428e68: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x428e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x428e6c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x428E6Cu;
    {
        const bool branch_taken_0x428e6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x428E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428E6Cu;
        // 0x428e70: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428e6c) {
            ctx->pc = 0x428EA0u;
            goto label_428ea0;
        }
    }
    ctx->pc = 0x428E74u;
    // 0x428e74: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x428e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x428e78: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x428e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x428e7c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x428e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x428e80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x428e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x428e84: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x428e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x428e88: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x428e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x428e8c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x428e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x428e90: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x428e90u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x428e94: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x428e94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x428e98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x428E98u;
    {
        const bool branch_taken_0x428e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x428E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428E98u;
        // 0x428e9c: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428e98) {
            ctx->pc = 0x428EA8u;
            goto label_428ea8;
        }
    }
    ctx->pc = 0x428EA0u;
label_428ea0:
    // 0x428ea0: 0x24e2fff0  addiu       $v0, $a3, -0x10
    ctx->pc = 0x428ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x428ea4: 0xaf82be40  sw          $v0, -0x41C0($gp)
    ctx->pc = 0x428ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950464), GPR_U32(ctx, 2));
label_428ea8:
    // 0x428ea8: 0xaf80be88  sw          $zero, -0x4178($gp)
    ctx->pc = 0x428ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950536), GPR_U32(ctx, 0));
    // 0x428eac: 0x8f83be8c  lw          $v1, -0x4174($gp)
    ctx->pc = 0x428eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950540)));
    // 0x428eb0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x428eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x428eb4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x428eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x428eb8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x428eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x428ebc: 0xaf83be8c  sw          $v1, -0x4174($gp)
    ctx->pc = 0x428ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950540), GPR_U32(ctx, 3));
label_428ec0:
    // 0x428ec0: 0x8f83be8c  lw          $v1, -0x4174($gp)
    ctx->pc = 0x428ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950540)));
    // 0x428ec4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x428ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x428ec8: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x428ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x428ecc: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x428eccu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x428ed0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x428ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x428ed4: 0x10600087  beqz        $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x428ED4u;
    {
        const bool branch_taken_0x428ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x428ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428ED4u;
        // 0x428ed8: 0x8f83be20  lw          $v1, -0x41E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428ed4) {
            ctx->pc = 0x4290F4u;
            goto label_4290f4;
        }
    }
    ctx->pc = 0x428EDCu;
    // 0x428edc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x428EDCu;
    {
        const bool branch_taken_0x428edc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x428EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428EDCu;
        // 0x428ee0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428edc) {
            ctx->pc = 0x428EF0u;
            goto label_428ef0;
        }
    }
    ctx->pc = 0x428EE4u;
    // 0x428ee4: 0x8f82be3c  lw          $v0, -0x41C4($gp)
    ctx->pc = 0x428ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950460)));
    // 0x428ee8: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x428ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x428eec: 0x0  nop
    ctx->pc = 0x428eecu;
    // NOP
label_428ef0:
    // 0x428ef0: 0x10e0003c  beqz        $a3, . + 4 + (0x3C << 2)
    ctx->pc = 0x428EF0u;
    {
        const bool branch_taken_0x428ef0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x428EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428EF0u;
        // 0x428ef4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428ef0) {
            ctx->pc = 0x428FE4u;
            goto label_428fe4;
        }
    }
    ctx->pc = 0x428EF8u;
    // 0x428ef8: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x428ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x428efc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x428efcu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
    // 0x428f00: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x428f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x428f04: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x428F04u;
    {
        const bool branch_taken_0x428f04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x428F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428F04u;
        // 0x428f08: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428f04) {
            ctx->pc = 0x428F40u;
            goto label_428f40;
        }
    }
    ctx->pc = 0x428F0Cu;
    // 0x428f0c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x428f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x428f10: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x428f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x428f14: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x428f14u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x428f18: 0xf  sync
    ctx->pc = 0x428f18u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x428f1c: 0x40f  sync.p
    ctx->pc = 0x428f1cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_428f20:
    // 0x428f20: 0x0  nop
    ctx->pc = 0x428f20u;
    // NOP
    // 0x428f24: 0x0  nop
    ctx->pc = 0x428f24u;
    // NOP
    // 0x428f28: 0x0  nop
    ctx->pc = 0x428f28u;
    // NOP
    // 0x428f2c: 0x0  nop
    ctx->pc = 0x428f2cu;
    // NOP
    // 0x428f30: 0x0  nop
    ctx->pc = 0x428f30u;
    // NOP
    // 0x428f34: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x428F34u;
    {
        const bool branch_taken_0x428f34 = (false);
        if (branch_taken_0x428f34) {
            ctx->pc = 0x428F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_428f20;
        }
    }
    ctx->pc = 0x428F3Cu;
    // 0x428f3c: 0x0  nop
    ctx->pc = 0x428f3cu;
    // NOP
label_428f40:
    // 0x428f40: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x428f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x428f44: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x428f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x428f48: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x428f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x428f4c: 0x8f86be3c  lw          $a2, -0x41C4($gp)
    ctx->pc = 0x428f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950460)));
    // 0x428f50: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x428f50u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 4)); // MMIO: 0x1000e010
    // 0x428f54: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x428f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x428f58: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x428f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x428f5c: 0x8f85be40  lw          $a1, -0x41C0($gp)
    ctx->pc = 0x428f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950464)));
    // 0x428f60: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x428f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x428f64: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x428f64u;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 6)); // MMIO: 0x1000d080
    // 0x428f68: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x428f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x428f6c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x428f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x428f70: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x428f70u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 5)); // MMIO: 0x1000d010
    // 0x428f74: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x428f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x428f78: 0x71102  srl         $v0, $a3, 4
    ctx->pc = 0x428f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x428f7c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x428f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x428f80: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x428f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x428f84: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x428f84u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x428f88: 0xf  sync
    ctx->pc = 0x428f88u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x428f8c: 0x40f  sync.p
    ctx->pc = 0x428f8cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x428f90: 0x8f84be28  lw          $a0, -0x41D8($gp)
    ctx->pc = 0x428f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950440)));
    // 0x428f94: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x428F94u;
    {
        const bool branch_taken_0x428f94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x428F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428F94u;
        // 0x428f98: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428f94) {
            ctx->pc = 0x428FC8u;
            goto label_428fc8;
        }
    }
    ctx->pc = 0x428F9Cu;
    // 0x428f9c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x428f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x428fa0: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x428fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x428fa4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x428fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x428fa8: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x428FA8u;
    {
        const bool branch_taken_0x428fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x428FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428FA8u;
        // 0x428fac: 0x8f82be40  lw          $v0, -0x41C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428fa8) {
            ctx->pc = 0x428FCCu;
            goto label_428fcc;
        }
    }
    ctx->pc = 0x428FB0u;
    // 0x428fb0: 0x861023  subu        $v0, $a0, $a2
    ctx->pc = 0x428fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x428fb4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x428fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x428fb8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x428fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x428fbc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x428fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x428fc0: 0xaf82be28  sw          $v0, -0x41D8($gp)
    ctx->pc = 0x428fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950440), GPR_U32(ctx, 2));
    // 0x428fc4: 0x0  nop
    ctx->pc = 0x428fc4u;
    // NOP
label_428fc8:
    // 0x428fc8: 0x8f82be40  lw          $v0, -0x41C0($gp)
    ctx->pc = 0x428fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950464)));
label_428fcc:
    // 0x428fcc: 0x8f83be3c  lw          $v1, -0x41C4($gp)
    ctx->pc = 0x428fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950460)));
    // 0x428fd0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x428fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x428fd4: 0x38632000  xori        $v1, $v1, 0x2000
    ctx->pc = 0x428fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8192);
    // 0x428fd8: 0xaf82be40  sw          $v0, -0x41C0($gp)
    ctx->pc = 0x428fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950464), GPR_U32(ctx, 2));
    // 0x428fdc: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x428fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x428fe0: 0xaf83be3c  sw          $v1, -0x41C4($gp)
    ctx->pc = 0x428fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950460), GPR_U32(ctx, 3));
label_428fe4:
    // 0x428fe4: 0x8f82be40  lw          $v0, -0x41C0($gp)
    ctx->pc = 0x428fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950464)));
    // 0x428fe8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x428fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x428fec: 0x8f83be8c  lw          $v1, -0x4174($gp)
    ctx->pc = 0x428fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950540)));
    // 0x428ff0: 0xaf82be88  sw          $v0, -0x4178($gp)
    ctx->pc = 0x428ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950536), GPR_U32(ctx, 2));
    // 0x428ff4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x428ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x428ff8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x428ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x428ffc: 0xaf82be40  sw          $v0, -0x41C0($gp)
    ctx->pc = 0x428ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950464), GPR_U32(ctx, 2));
    // 0x429000: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x429000u;
    {
        const bool branch_taken_0x429000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x429004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429000u;
        // 0x429004: 0xaf83be8c  sw          $v1, -0x4174($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950540), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429000) {
            ctx->pc = 0x4290F4u;
            goto label_4290f4;
        }
    }
    ctx->pc = 0x429008u;
label_429008:
    // 0x429008: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x429008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x42900c: 0x72027  nor         $a0, $zero, $a3
    ctx->pc = 0x42900cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
    // 0x429010: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x429010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x429014: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x429014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x429018: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x429018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x42901c: 0xc109f06  jal         func_427C18
    ctx->pc = 0x42901Cu;
    SET_GPR_U32(ctx, 31, 0x429024u);
    ctx->pc = 0x429020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42901Cu;
    // 0x429020: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427C18u, 0x42901Cu, 0x429024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429024u;
label_429024:
    // 0x429024: 0x8f82be78  lw          $v0, -0x4188($gp)
    ctx->pc = 0x429024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950520)));
    // 0x429028: 0x8f87be7c  lw          $a3, -0x4184($gp)
    ctx->pc = 0x429028u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950524)));
    // 0x42902c: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x42902cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x429030: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x429030u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x429034: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x429034u;
    {
        const bool branch_taken_0x429034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x429038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429034u;
        // 0x429038: 0x8f85be74  lw          $a1, -0x418C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429034) {
            ctx->pc = 0x429088u;
            goto label_429088;
        }
    }
    ctx->pc = 0x42903Cu;
    // 0x42903c: 0x8f82be74  lw          $v0, -0x418C($gp)
    ctx->pc = 0x42903cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950516)));
    // 0x429040: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x429040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x429044: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x429044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x429048: 0x8f84be70  lw          $a0, -0x4190($gp)
    ctx->pc = 0x429048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950512)));
    // 0x42904c: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x42904cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x429050: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x429050u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x429054: 0x24a60080  addiu       $a2, $a1, 0x80
    ctx->pc = 0x429054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x429058: 0xc4202b  sltu        $a0, $a2, $a0
    ctx->pc = 0x429058u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x42905c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x42905Cu;
    {
        const bool branch_taken_0x42905c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x429060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42905Cu;
        // 0x429060: 0x24a20078  addiu       $v0, $a1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42905c) {
            ctx->pc = 0x429084u;
            goto label_429084;
        }
    }
    ctx->pc = 0x429064u;
    // 0x429064: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x429064u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x429068: 0xaf85be7c  sw          $a1, -0x4184($gp)
    ctx->pc = 0x429068u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950524), GPR_U32(ctx, 5));
    // 0x42906c: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x42906cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x429070: 0xaf82be78  sw          $v0, -0x4188($gp)
    ctx->pc = 0x429070u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950520), GPR_U32(ctx, 2));
    // 0x429074: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x429074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x429078: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x429078u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x42907c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x42907Cu;
    {
        const bool branch_taken_0x42907c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x429080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42907Cu;
        // 0x429080: 0xaf86be74  sw          $a2, -0x418C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950516), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42907c) {
            ctx->pc = 0x429088u;
            goto label_429088;
        }
    }
    ctx->pc = 0x429084u;
label_429084:
    // 0x429084: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x429084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_429088:
    // 0x429088: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x429088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x42908c: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x42908Cu;
    {
        const bool branch_taken_0x42908c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x429090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42908Cu;
        // 0x429090: 0x51800b  movn        $s0, $v0, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42908c) {
            ctx->pc = 0x4290FCu;
            goto label_4290fc;
        }
    }
    ctx->pc = 0x429094u;
    // 0x429094: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x429094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x429098: 0x24a4007f  addiu       $a0, $a1, 0x7F
    ctx->pc = 0x429098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    // 0x42909c: 0x3463ff80  ori         $v1, $v1, 0xFF80
    ctx->pc = 0x42909cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65408);
    // 0x4290a0: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x4290a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x4290a4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4290a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4290a8: 0x8f82be70  lw          $v0, -0x4190($gp)
    ctx->pc = 0x4290a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950512)));
    // 0x4290ac: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x4290acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4290b0: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x4290b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4290b4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x4290B4u;
    {
        const bool branch_taken_0x4290b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4290b4) {
            ctx->pc = 0x4290B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4290B4u;
            // 0x4290b8: 0x2604ffff  addiu       $a0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x429100u;
            goto label_429100;
        }
    }
    ctx->pc = 0x4290BCu;
    // 0x4290bc: 0x8f82be3c  lw          $v0, -0x41C4($gp)
    ctx->pc = 0x4290bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950460)));
    // 0x4290c0: 0x24031101  addiu       $v1, $zero, 0x1101
    ctx->pc = 0x4290c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4353));
    // 0x4290c4: 0xaf85be74  sw          $a1, -0x418C($gp)
    ctx->pc = 0x4290c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950516), GPR_U32(ctx, 5));
    // 0x4290c8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x4290c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x4290cc: 0xaf83be8c  sw          $v1, -0x4174($gp)
    ctx->pc = 0x4290ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950540), GPR_U32(ctx, 3));
    // 0x4290d0: 0xaf84be80  sw          $a0, -0x4180($gp)
    ctx->pc = 0x4290d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950528), GPR_U32(ctx, 4));
    // 0x4290d4: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4290D4u;
    {
        const bool branch_taken_0x4290d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4290D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4290D4u;
        // 0x4290d8: 0xaf84be40  sw          $a0, -0x41C0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950464), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4290d4) {
            ctx->pc = 0x4290F4u;
            goto label_4290f4;
        }
    }
    ctx->pc = 0x4290DCu;
    // 0x4290dc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4290dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4290e0: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x4290e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4290e4: 0x34421101  ori         $v0, $v0, 0x1101
    ctx->pc = 0x4290e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4353);
    // 0x4290e8: 0xaf83be40  sw          $v1, -0x41C0($gp)
    ctx->pc = 0x4290e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950464), GPR_U32(ctx, 3));
    // 0x4290ec: 0xaf82be8c  sw          $v0, -0x4174($gp)
    ctx->pc = 0x4290ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950540), GPR_U32(ctx, 2));
    // 0x4290f0: 0xaf84be88  sw          $a0, -0x4178($gp)
    ctx->pc = 0x4290f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950536), GPR_U32(ctx, 4));
label_4290f4:
    // 0x4290f4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4290F4u;
    {
        const bool branch_taken_0x4290f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4290F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4290F4u;
        // 0x4290f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4290f4) {
            ctx->pc = 0x42912Cu;
            goto label_42912c;
        }
    }
    ctx->pc = 0x4290FCu;
label_4290fc:
    // 0x4290fc: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x4290fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_429100:
    // 0x429100: 0x8f83be60  lw          $v1, -0x41A0($gp)
    ctx->pc = 0x429100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950496)));
    // 0x429104: 0x91800b  movn        $s0, $a0, $s1
    ctx->pc = 0x429104u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x429108: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x429108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x42910c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x42910cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x429110: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x429110u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x429114: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x429114u;
    {
        const bool branch_taken_0x429114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x429118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429114u;
        // 0x429118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429114) {
            ctx->pc = 0x42912Cu;
            goto label_42912c;
        }
    }
    ctx->pc = 0x42911Cu;
    // 0x42911c: 0xc10a024  jal         func_428090
    ctx->pc = 0x42911Cu;
    SET_GPR_U32(ctx, 31, 0x429124u);
    ctx->pc = 0x428090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428090u, 0x42911Cu, 0x429124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429124u;
label_429124:
    // 0x429124: 0x1000fedf  b           . + 4 + (-0x121 << 2)
    ctx->pc = 0x429124u;
    {
        const bool branch_taken_0x429124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x429128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429124u;
        // 0x429128: 0x8f84be8c  lw          $a0, -0x4174($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429124) {
            ctx->pc = 0x428CA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_428ca4;
        }
    }
    ctx->pc = 0x42912Cu;
label_42912c:
    // 0x42912c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x42912cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x429130: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x429130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x429134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x429134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x429138: 0x3e00008  jr          $ra
    ctx->pc = 0x429138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429138u;
        // 0x42913c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x429138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x429140u;
}
