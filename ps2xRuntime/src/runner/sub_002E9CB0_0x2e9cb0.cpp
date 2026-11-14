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

// Function: sub_002E9CB0
// Address: 0x2e9cb0 - 0x2e9e80
void sub_002E9CB0_0x2e9cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9CB0_0x2e9cb0");
#endif

    switch (ctx->pc) {
        case 0x2e9ce0u: goto label_2e9ce0;
        case 0x2e9d3cu: goto label_2e9d3c;
        case 0x2e9d80u: goto label_2e9d80;
        case 0x2e9d94u: goto label_2e9d94;
        case 0x2e9dd8u: goto label_2e9dd8;
        case 0x2e9de0u: goto label_2e9de0;
        case 0x2e9de8u: goto label_2e9de8;
        case 0x2e9dfcu: goto label_2e9dfc;
        case 0x2e9e08u: goto label_2e9e08;
        default: break;
    }

    ctx->pc = 0x2e9cb0u;

    // 0x2e9cb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e9cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e9cb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e9cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e9cb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e9cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e9cbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e9cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e9cc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e9cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e9cc4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e9cc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9cc8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e9cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2e9ccc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e9cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9cd0: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x2e9cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x2e9cd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e9cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9cd8: 0xc0ba7f4  jal         func_2E9FD0
    ctx->pc = 0x2E9CD8u;
    SET_GPR_U32(ctx, 31, 0x2E9CE0u);
    ctx->pc = 0x2E9CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9CD8u;
    // 0x2e9cdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9FD0u, 0x2E9CD8u, 0x2E9CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9CE0u;
label_2e9ce0:
    // 0x2e9ce0: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x2E9CE0u;
    {
        const bool branch_taken_0x2e9ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9ce0) {
            ctx->pc = 0x2E9E58u;
            goto label_2e9e58;
        }
    }
    ctx->pc = 0x2E9CE8u;
    // 0x2e9ce8: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x2e9ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2e9cec: 0x3c052aaa  lui         $a1, 0x2AAA
    ctx->pc = 0x2e9cecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10922 << 16));
    // 0x2e9cf0: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x2e9cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2e9cf4: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x2e9cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2e9cf8: 0x34a5aaab  ori         $a1, $a1, 0xAAAB
    ctx->pc = 0x2e9cf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43691);
    // 0x2e9cfc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e9cfcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e9d00: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x2e9d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2e9d04: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e9d04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9d08: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2e9d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2e9d0c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e9d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e9d10: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x2e9d10u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2e9d14: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x2e9d14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2e9d18: 0x2810  mfhi        $a1
    ctx->pc = 0x2e9d18u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2e9d1c: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x2e9d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2e9d20: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x2e9d20u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x2e9d24: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2e9d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2e9d28: 0x24a9ffff  addiu       $t1, $a1, -0x1
    ctx->pc = 0x2e9d28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2e9d2c: 0x120082a  slt         $at, $t1, $zero
    ctx->pc = 0x2e9d2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2e9d30: 0x14200017  bnez        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E9D30u;
    {
        const bool branch_taken_0x2e9d30 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9D30u;
        // 0x2e9d34: 0x3183f  dsra32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9d30) {
            ctx->pc = 0x2E9D90u;
            goto label_2e9d90;
        }
    }
    ctx->pc = 0x2E9D38u;
    // 0x2e9d38: 0x1492821  addu        $a1, $t2, $t1
    ctx->pc = 0x2e9d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_2e9d3c:
    // 0x2e9d3c: 0x53843  sra         $a3, $a1, 1
    ctx->pc = 0x2e9d3cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 1));
    // 0x2e9d40: 0x72840  sll         $a1, $a3, 1
    ctx->pc = 0x2e9d40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2e9d44: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2e9d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2e9d48: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2e9d48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2e9d4c: 0x1055821  addu        $t3, $t0, $a1
    ctx->pc = 0x2e9d4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2e9d50: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x2e9d50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2e9d54: 0x66282b  sltu        $a1, $v1, $a2
    ctx->pc = 0x2e9d54u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e9d58: 0x14a0003a  bnez        $a1, . + 4 + (0x3A << 2)
    ctx->pc = 0x2E9D58u;
    {
        const bool branch_taken_0x2e9d58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9d58) {
            ctx->pc = 0x2E9E44u;
            goto label_2e9e44;
        }
    }
    ctx->pc = 0x2E9D60u;
    // 0x2e9d60: 0x8d650004  lw          $a1, 0x4($t3)
    ctx->pc = 0x2e9d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2e9d64: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x2e9d64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x2e9d68: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2e9d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2e9d6c: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x2e9d6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e9d70: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x2E9D70u;
    {
        const bool branch_taken_0x2e9d70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9d70) {
            ctx->pc = 0x2E9E50u;
            goto label_2e9e50;
        }
    }
    ctx->pc = 0x2E9D78u;
    // 0x2e9d78: 0x24ea0001  addiu       $t2, $a3, 0x1
    ctx->pc = 0x2e9d78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2e9d7c: 0x0  nop
    ctx->pc = 0x2e9d7cu;
    // NOP
label_2e9d80:
    // 0x2e9d80: 0x12a082a  slt         $at, $t1, $t2
    ctx->pc = 0x2e9d80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x2e9d84: 0x1020ffed  beqz        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2E9D84u;
    {
        const bool branch_taken_0x2e9d84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9D84u;
        // 0x2e9d88: 0x1492821  addu        $a1, $t2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9d84) {
            ctx->pc = 0x2E9D3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9d3c;
        }
    }
    ctx->pc = 0x2E9D8Cu;
    // 0x2e9d8c: 0x0  nop
    ctx->pc = 0x2e9d8cu;
    // NOP
label_2e9d90:
    // 0x2e9d90: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2e9d90u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9d94:
    // 0x2e9d94: 0x11600030  beqz        $t3, . + 4 + (0x30 << 2)
    ctx->pc = 0x2E9D94u;
    {
        const bool branch_taken_0x2e9d94 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9d94) {
            ctx->pc = 0x2E9E58u;
            goto label_2e9e58;
        }
    }
    ctx->pc = 0x2E9D9Cu;
    // 0x2e9d9c: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x2e9d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2e9da0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e9da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e9da4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E9DA4u;
    {
        const bool branch_taken_0x2e9da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9da4) {
            ctx->pc = 0x2E9DB8u;
            goto label_2e9db8;
        }
    }
    ctx->pc = 0x2E9DACu;
    // 0x2e9dac: 0x25620008  addiu       $v0, $t3, 0x8
    ctx->pc = 0x2e9dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x2e9db0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9DB0u;
    {
        const bool branch_taken_0x2e9db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9DB0u;
        // 0x2e9db4: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9db0) {
            ctx->pc = 0x2E9DC0u;
            goto label_2e9dc0;
        }
    }
    ctx->pc = 0x2E9DB8u;
label_2e9db8:
    // 0x2e9db8: 0x8d620008  lw          $v0, 0x8($t3)
    ctx->pc = 0x2e9db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x2e9dbc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2e9dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2e9dc0:
    // 0x2e9dc0: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x2e9dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2e9dc4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2e9dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2e9dc8: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x2e9dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2e9dcc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2e9dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e9dd0: 0xc0ba7dc  jal         func_2E9F70
    ctx->pc = 0x2E9DD0u;
    SET_GPR_U32(ctx, 31, 0x2E9DD8u);
    ctx->pc = 0x2E9DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9DD0u;
    // 0x2e9dd4: 0x628023  subu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9F70u, 0x2E9DD0u, 0x2E9DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9DD8u;
label_2e9dd8:
    // 0x2e9dd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e9dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9ddc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e9ddcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9de0:
    // 0x2e9de0: 0xc0ba1c8  jal         func_2E8720
    ctx->pc = 0x2E9DE0u;
    SET_GPR_U32(ctx, 31, 0x2E9DE8u);
    ctx->pc = 0x2E9DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9DE0u;
    // 0x2e9de4: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8720u, 0x2E9DE0u, 0x2E9DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9DE8u;
label_2e9de8:
    // 0x2e9de8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2e9de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2e9dec: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E9DECu;
    {
        const bool branch_taken_0x2e9dec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9DECu;
        // 0x2e9df0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9dec) {
            ctx->pc = 0x2E9E58u;
            goto label_2e9e58;
        }
    }
    ctx->pc = 0x2E9DF4u;
    // 0x2e9df4: 0xc0ba1c8  jal         func_2E8720
    ctx->pc = 0x2E9DF4u;
    SET_GPR_U32(ctx, 31, 0x2E9DFCu);
    ctx->pc = 0x2E9DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9DF4u;
    // 0x2e9df8: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8720u, 0x2E9DF4u, 0x2E9DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9DFCu;
label_2e9dfc:
    // 0x2e9dfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e9dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9e00: 0xc0ba1c8  jal         func_2E8720
    ctx->pc = 0x2E9E00u;
    SET_GPR_U32(ctx, 31, 0x2E9E08u);
    ctx->pc = 0x2E9E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9E00u;
    // 0x2e9e04: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8720u, 0x2E9E00u, 0x2E9E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9E08u;
label_2e9e08:
    // 0x2e9e08: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2e9e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2e9e0c: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x2e9e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2e9e10: 0x205182b  sltu        $v1, $s0, $a1
    ctx->pc = 0x2e9e10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2e9e14: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E9E14u;
    {
        const bool branch_taken_0x2e9e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9E14u;
        // 0x2e9e18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9e14) {
            ctx->pc = 0x2E9E58u;
            goto label_2e9e58;
        }
    }
    ctx->pc = 0x2E9E1Cu;
    // 0x2e9e1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e9e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e9e20: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x2e9e20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2e9e24: 0x250082b  sltu        $at, $s2, $s0
    ctx->pc = 0x2e9e24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2e9e28: 0x1420ffed  bnez        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2E9E28u;
    {
        const bool branch_taken_0x2e9e28 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9e28) {
            ctx->pc = 0x2E9DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9de0;
        }
    }
    ctx->pc = 0x2E9E30u;
    // 0x2e9e30: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2e9e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e9e34: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x2e9e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2e9e38: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2e9e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e9e3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E9E3Cu;
    {
        const bool branch_taken_0x2e9e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9E3Cu;
        // 0x2e9e40: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9e3c) {
            ctx->pc = 0x2E9E58u;
            goto label_2e9e58;
        }
    }
    ctx->pc = 0x2E9E44u;
label_2e9e44:
    // 0x2e9e44: 0x1000ffce  b           . + 4 + (-0x32 << 2)
    ctx->pc = 0x2E9E44u;
    {
        const bool branch_taken_0x2e9e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9E44u;
        // 0x2e9e48: 0x24e9ffff  addiu       $t1, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9e44) {
            ctx->pc = 0x2E9D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9d80;
        }
    }
    ctx->pc = 0x2E9E4Cu;
    // 0x2e9e4c: 0x0  nop
    ctx->pc = 0x2e9e4cu;
    // NOP
label_2e9e50:
    // 0x2e9e50: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
    ctx->pc = 0x2E9E50u;
    {
        const bool branch_taken_0x2e9e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9e50) {
            ctx->pc = 0x2E9D94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9d94;
        }
    }
    ctx->pc = 0x2E9E58u;
label_2e9e58:
    // 0x2e9e58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e9e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e9e5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e9e5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e9e60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e9e60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9e64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e9e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9e68: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9E68u;
        // 0x2e9e6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9E70u;
    // 0x2e9e70: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e9e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e9e74: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9E74u;
        // 0x2e9e78: 0x24428f70  addiu       $v0, $v0, -0x7090 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9E7Cu;
    // 0x2e9e7c: 0x0  nop
    ctx->pc = 0x2e9e7cu;
    // NOP
    ctx->pc = 0x2e9e80u;
}
