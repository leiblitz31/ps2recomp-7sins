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

// Function: sub_00385D08
// Address: 0x385d08 - 0x385ff0
void sub_00385D08_0x385d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385D08_0x385d08");
#endif

    switch (ctx->pc) {
        case 0x385db0u: goto label_385db0;
        case 0x385dd0u: goto label_385dd0;
        case 0x385e4cu: goto label_385e4c;
        case 0x385eacu: goto label_385eac;
        case 0x385eb4u: goto label_385eb4;
        case 0x385ef0u: goto label_385ef0;
        case 0x385f10u: goto label_385f10;
        case 0x385f34u: goto label_385f34;
        case 0x385f60u: goto label_385f60;
        case 0x385f70u: goto label_385f70;
        case 0x385fa4u: goto label_385fa4;
        case 0x385fbcu: goto label_385fbc;
        default: break;
    }

    ctx->pc = 0x385d08u;

    // 0x385d08: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x385d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x385d0c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x385d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x385d10: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x385d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x385d14: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x385d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x385d18: 0x2410002c  addiu       $s0, $zero, 0x2C
    ctx->pc = 0x385d18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x385d1c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x385d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x385d20: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x385d20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385d24: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x385d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x385d28: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x385d28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385d2c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x385d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x385d30: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x385d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x385d34: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x385d34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385d38: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x385d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x385d3c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x385d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x385d40: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x385d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x385d44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x385d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x385d48: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x385D48u;
    {
        const bool branch_taken_0x385d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x385D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385D48u;
        // 0x385d4c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385d48) {
            ctx->pc = 0x385D9Cu;
            goto label_385d9c;
        }
    }
    ctx->pc = 0x385D50u;
    // 0x385d50: 0x96440082  lhu         $a0, 0x82($s2)
    ctx->pc = 0x385d50u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 130)));
    // 0x385d54: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x385d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x385d58: 0x32230010  andi        $v1, $s1, 0x10
    ctx->pc = 0x385d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
    // 0x385d5c: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x385d5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x385d60: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x385D60u;
    {
        const bool branch_taken_0x385d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x385D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385D60u;
        // 0x385d64: 0x2450002c  addiu       $s0, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385d60) {
            ctx->pc = 0x385D70u;
            goto label_385d70;
        }
    }
    ctx->pc = 0x385D68u;
    // 0x385d68: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x385d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x385d6c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x385d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_385d70:
    // 0x385d70: 0x32220008  andi        $v0, $s1, 0x8
    ctx->pc = 0x385d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
    // 0x385d74: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x385D74u;
    {
        const bool branch_taken_0x385d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385D74u;
        // 0x385d78: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385d74) {
            ctx->pc = 0x385D80u;
            goto label_385d80;
        }
    }
    ctx->pc = 0x385D7Cu;
    // 0x385d7c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x385d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_385d80:
    // 0x385d80: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x385d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x385d84: 0x96430084  lhu         $v1, 0x84($s2)
    ctx->pc = 0x385d84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x385d88: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x385d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x385d8c: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x385d8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x385d90: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x385d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x385d94: 0xb08021  addu        $s0, $a1, $s0
    ctx->pc = 0x385d94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x385d98: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x385d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_385d9c:
    // 0x385d9c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x385d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x385da0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x385da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385da4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x385da4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385da8: 0xc104aec  jal         func_412BB0
    ctx->pc = 0x385DA8u;
    SET_GPR_U32(ctx, 31, 0x385DB0u);
    ctx->pc = 0x385DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385DA8u;
    // 0x385dac: 0x2484ae40  addiu       $a0, $a0, -0x51C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412BB0u, 0x385DA8u, 0x385DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385DB0u;
label_385db0:
    // 0x385db0: 0x26060018  addiu       $a2, $s0, 0x18
    ctx->pc = 0x385db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x385db4: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x385db4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x385db8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x385db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x385dbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x385dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385dc0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x385dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x385dc4: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x385dc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x385dc8: 0xc103404  jal         func_40D010
    ctx->pc = 0x385DC8u;
    SET_GPR_U32(ctx, 31, 0x385DD0u);
    ctx->pc = 0x385DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385DC8u;
    // 0x385dcc: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x385DC8u, 0x385DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385DD0u;
label_385dd0:
    // 0x385dd0: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x385DD0u;
    {
        const bool branch_taken_0x385dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385DD0u;
        // 0x385dd4: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385dd0) {
            ctx->pc = 0x385EB4u;
            goto label_385eb4;
        }
    }
    ctx->pc = 0x385DD8u;
    // 0x385dd8: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x385dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x385ddc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x385ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x385de0: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x385DE0u;
    {
        const bool branch_taken_0x385de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x385DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385DE0u;
        // 0x385de4: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385de0) {
            ctx->pc = 0x385E34u;
            goto label_385e34;
        }
    }
    ctx->pc = 0x385DE8u;
    // 0x385de8: 0x96440082  lhu         $a0, 0x82($s2)
    ctx->pc = 0x385de8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 130)));
    // 0x385dec: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x385decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x385df0: 0x32230010  andi        $v1, $s1, 0x10
    ctx->pc = 0x385df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
    // 0x385df4: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x385df4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x385df8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x385DF8u;
    {
        const bool branch_taken_0x385df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x385DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385DF8u;
        // 0x385dfc: 0x2446002c  addiu       $a2, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385df8) {
            ctx->pc = 0x385E08u;
            goto label_385e08;
        }
    }
    ctx->pc = 0x385E00u;
    // 0x385e00: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x385e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x385e04: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x385e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_385e08:
    // 0x385e08: 0x32220008  andi        $v0, $s1, 0x8
    ctx->pc = 0x385e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
    // 0x385e0c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x385E0Cu;
    {
        const bool branch_taken_0x385e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385E0Cu;
        // 0x385e10: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385e0c) {
            ctx->pc = 0x385E18u;
            goto label_385e18;
        }
    }
    ctx->pc = 0x385E14u;
    // 0x385e14: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x385e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_385e18:
    // 0x385e18: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x385e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x385e1c: 0x96430084  lhu         $v1, 0x84($s2)
    ctx->pc = 0x385e1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x385e20: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x385e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x385e24: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x385e24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x385e28: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x385e28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x385e2c: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x385e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x385e30: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x385e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_385e34:
    // 0x385e34: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x385e34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x385e38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x385e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385e3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x385e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x385e40: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x385e40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x385e44: 0xc103404  jal         func_40D010
    ctx->pc = 0x385E44u;
    SET_GPR_U32(ctx, 31, 0x385E4Cu);
    ctx->pc = 0x385E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385E44u;
    // 0x385e48: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x385E44u, 0x385E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385E4Cu;
label_385e4c:
    // 0x385e4c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x385E4Cu;
    {
        const bool branch_taken_0x385e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385E4Cu;
        // 0x385e50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385e4c) {
            ctx->pc = 0x385EB4u;
            goto label_385eb4;
        }
    }
    ctx->pc = 0x385E54u;
    // 0x385e54: 0x96470080  lhu         $a3, 0x80($s2)
    ctx->pc = 0x385e54u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x385e58: 0x96430084  lhu         $v1, 0x84($s2)
    ctx->pc = 0x385e58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x385e5c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x385e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385e60: 0x96420082  lhu         $v0, 0x82($s2)
    ctx->pc = 0x385e60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 130)));
    // 0x385e64: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x385e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x385e68: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x385e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x385e6c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x385e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x385e70: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x385e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x385e74: 0x6a470073  ldl         $a3, 0x73($s2)
    ctx->pc = 0x385e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x385e78: 0x6e47006c  ldr         $a3, 0x6C($s2)
    ctx->pc = 0x385e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x385e7c: 0x8e480074  lw          $t0, 0x74($s2)
    ctx->pc = 0x385e7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x385e80: 0xb3a70013  sdl         $a3, 0x13($sp)
    ctx->pc = 0x385e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x385e84: 0xb7a7000c  sdr         $a3, 0xC($sp)
    ctx->pc = 0x385e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x385e88: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x385e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
    // 0x385e8c: 0x6a470067  ldl         $a3, 0x67($s2)
    ctx->pc = 0x385e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x385e90: 0x6e470060  ldr         $a3, 0x60($s2)
    ctx->pc = 0x385e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x385e94: 0x8e480068  lw          $t0, 0x68($s2)
    ctx->pc = 0x385e94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x385e98: 0xb3a7001f  sdl         $a3, 0x1F($sp)
    ctx->pc = 0x385e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x385e9c: 0xb7a70018  sdr         $a3, 0x18($sp)
    ctx->pc = 0x385e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x385ea0: 0xafa80020  sw          $t0, 0x20($sp)
    ctx->pc = 0x385ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 8));
    // 0x385ea4: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x385EA4u;
    SET_GPR_U32(ctx, 31, 0x385EACu);
    ctx->pc = 0x385EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385EA4u;
    // 0x385ea8: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x385EA4u, 0x385EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385EACu;
label_385eac:
    // 0x385eac: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x385EACu;
    {
        const bool branch_taken_0x385eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x385eac) {
            ctx->pc = 0x385EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385EACu;
            // 0x385eb0: 0x8ea20008  lw          $v0, 0x8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385EBCu;
            goto label_385ebc;
        }
    }
    ctx->pc = 0x385EB4u;
label_385eb4:
    // 0x385eb4: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x385EB4u;
    {
        const bool branch_taken_0x385eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385EB4u;
        // 0x385eb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385eb4) {
            ctx->pc = 0x385FC4u;
            goto label_385fc4;
        }
    }
    ctx->pc = 0x385EBCu;
label_385ebc:
    // 0x385ebc: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x385ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x385ec0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x385ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x385ec4: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x385EC4u;
    {
        const bool branch_taken_0x385ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x385EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385EC4u;
        // 0x385ec8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385ec4) {
            ctx->pc = 0x385FB0u;
            goto label_385fb0;
        }
    }
    ctx->pc = 0x385ECCu;
    // 0x385ecc: 0x96420082  lhu         $v0, 0x82($s2)
    ctx->pc = 0x385eccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 130)));
    // 0x385ed0: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x385ED0u;
    {
        const bool branch_taken_0x385ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x385ed0) {
            ctx->pc = 0x385ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385ED0u;
            // 0x385ed4: 0x96420084  lhu         $v0, 0x84($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385F8Cu;
            goto label_385f8c;
        }
    }
    ctx->pc = 0x385ED8u;
    // 0x385ed8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x385ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x385edc: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x385edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x385ee0: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x385ee0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x385ee4: 0x3012  mflo        $a2
    ctx->pc = 0x385ee4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x385ee8: 0xc10341a  jal         func_40D068
    ctx->pc = 0x385EE8u;
    SET_GPR_U32(ctx, 31, 0x385EF0u);
    ctx->pc = 0x385EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385EE8u;
    // 0x385eec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x385EE8u, 0x385EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385EF0u;
label_385ef0:
    // 0x385ef0: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x385EF0u;
    {
        const bool branch_taken_0x385ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385EF0u;
        // 0x385ef4: 0x32220010  andi        $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x385ef0) {
            ctx->pc = 0x385EB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_385eb4;
        }
    }
    ctx->pc = 0x385EF8u;
    // 0x385ef8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x385EF8u;
    {
        const bool branch_taken_0x385ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385EF8u;
        // 0x385efc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385ef8) {
            ctx->pc = 0x385F18u;
            goto label_385f18;
        }
    }
    ctx->pc = 0x385F00u;
    // 0x385f00: 0x96460082  lhu         $a2, 0x82($s2)
    ctx->pc = 0x385f00u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 130)));
    // 0x385f04: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x385f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x385f08: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x385F08u;
    SET_GPR_U32(ctx, 31, 0x385F10u);
    ctx->pc = 0x385F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385F08u;
    // 0x385f0c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x385F08u, 0x385F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385F10u;
label_385f10:
    // 0x385f10: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x385F10u;
    {
        const bool branch_taken_0x385f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385F10u;
        // 0x385f14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385f10) {
            ctx->pc = 0x385FC4u;
            goto label_385fc4;
        }
    }
    ctx->pc = 0x385F18u;
label_385f18:
    // 0x385f18: 0x32220008  andi        $v0, $s1, 0x8
    ctx->pc = 0x385f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
    // 0x385f1c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x385F1Cu;
    {
        const bool branch_taken_0x385f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385F1Cu;
        // 0x385f20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385f1c) {
            ctx->pc = 0x385F3Cu;
            goto label_385f3c;
        }
    }
    ctx->pc = 0x385F24u;
    // 0x385f24: 0x96460082  lhu         $a2, 0x82($s2)
    ctx->pc = 0x385f24u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 130)));
    // 0x385f28: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x385f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x385f2c: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x385F2Cu;
    SET_GPR_U32(ctx, 31, 0x385F34u);
    ctx->pc = 0x385F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385F2Cu;
    // 0x385f30: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x385F2Cu, 0x385F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385F34u;
label_385f34:
    // 0x385f34: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x385F34u;
    {
        const bool branch_taken_0x385f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385F34u;
        // 0x385f38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385f34) {
            ctx->pc = 0x385FC4u;
            goto label_385fc4;
        }
    }
    ctx->pc = 0x385F3Cu;
label_385f3c:
    // 0x385f3c: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x385f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x385f40: 0x58600012  blezl       $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x385F40u;
    {
        const bool branch_taken_0x385f40 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x385f40) {
            ctx->pc = 0x385F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385F40u;
            // 0x385f44: 0x96420084  lhu         $v0, 0x84($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385F8Cu;
            goto label_385f8c;
        }
    }
    ctx->pc = 0x385F48u;
    // 0x385f48: 0x96420082  lhu         $v0, 0x82($s2)
    ctx->pc = 0x385f48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 130)));
    // 0x385f4c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x385f4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385f50: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x385F50u;
    {
        const bool branch_taken_0x385f50 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x385F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385F50u;
        // 0x385f54: 0x2a0c0  sll         $s4, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385f50) {
            ctx->pc = 0x385F88u;
            goto label_385f88;
        }
    }
    ctx->pc = 0x385F58u;
    // 0x385f58: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x385f58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x385f5c: 0x0  nop
    ctx->pc = 0x385f5cu;
    // NOP
label_385f60:
    // 0x385f60: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x385f60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x385f64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x385f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385f68: 0xc10341a  jal         func_40D068
    ctx->pc = 0x385F68u;
    SET_GPR_U32(ctx, 31, 0x385F70u);
    ctx->pc = 0x385F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385F68u;
    // 0x385f6c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x385F68u, 0x385F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385F70u;
label_385f70:
    // 0x385f70: 0x1040ffd0  beqz        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x385F70u;
    {
        const bool branch_taken_0x385f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385F70u;
        // 0x385f74: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385f70) {
            ctx->pc = 0x385EB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_385eb4;
        }
    }
    ctx->pc = 0x385F78u;
    // 0x385f78: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x385f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x385f7c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x385f7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x385f80: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x385F80u;
    {
        const bool branch_taken_0x385f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x385F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385F80u;
        // 0x385f84: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385f80) {
            ctx->pc = 0x385F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_385f60;
        }
    }
    ctx->pc = 0x385F88u;
label_385f88:
    // 0x385f88: 0x96420084  lhu         $v0, 0x84($s2)
    ctx->pc = 0x385f88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 132)));
label_385f8c:
    // 0x385f8c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x385F8Cu;
    {
        const bool branch_taken_0x385f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385F8Cu;
        // 0x385f90: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385f8c) {
            ctx->pc = 0x385FACu;
            goto label_385fac;
        }
    }
    ctx->pc = 0x385F94u;
    // 0x385f94: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x385f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x385f98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x385f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385f9c: 0xc10344a  jal         func_40D128
    ctx->pc = 0x385F9Cu;
    SET_GPR_U32(ctx, 31, 0x385FA4u);
    ctx->pc = 0x385FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385F9Cu;
    // 0x385fa0: 0x630c0  sll         $a2, $a2, 3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D128u, 0x385F9Cu, 0x385FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385FA4u;
label_385fa4:
    // 0x385fa4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x385FA4u;
    {
        const bool branch_taken_0x385fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385FA4u;
        // 0x385fa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385fa4) {
            ctx->pc = 0x385FC4u;
            goto label_385fc4;
        }
    }
    ctx->pc = 0x385FACu;
label_385fac:
    // 0x385fac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x385facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_385fb0:
    // 0x385fb0: 0x26c4ae40  addiu       $a0, $s6, -0x51C0
    ctx->pc = 0x385fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946368));
    // 0x385fb4: 0xc104a72  jal         func_4129C8
    ctx->pc = 0x385FB4u;
    SET_GPR_U32(ctx, 31, 0x385FBCu);
    ctx->pc = 0x385FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385FB4u;
    // 0x385fb8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4129C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4129C8u, 0x385FB4u, 0x385FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385FBCu;
label_385fbc:
    // 0x385fbc: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x385fbcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    // 0x385fc0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x385fc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_385fc4:
    // 0x385fc4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x385fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x385fc8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x385fc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x385fcc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x385fccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x385fd0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x385fd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x385fd4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x385fd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x385fd8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x385fd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x385fdc: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x385fdcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x385fe0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x385fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x385fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x385FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385FE4u;
        // 0x385fe8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385FECu;
    // 0x385fec: 0x0  nop
    ctx->pc = 0x385fecu;
    // NOP
    ctx->pc = 0x385ff0u;
}
