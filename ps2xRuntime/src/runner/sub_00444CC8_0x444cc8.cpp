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

// Function: sub_00444CC8
// Address: 0x444cc8 - 0x444e78
void sub_00444CC8_0x444cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00444CC8_0x444cc8");
#endif

    switch (ctx->pc) {
        case 0x444d28u: goto label_444d28;
        case 0x444d68u: goto label_444d68;
        case 0x444e38u: goto label_444e38;
        default: break;
    }

    ctx->pc = 0x444cc8u;

    // 0x444cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x444CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x444CD0u;
    // 0x444cd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x444cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x444cd4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x444cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x444cd8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x444cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x444cdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x444cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x444ce0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x444ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x444ce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x444ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x444ce8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x444ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x444cec: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x444cecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x444cf0: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x444CF0u;
    {
        const bool branch_taken_0x444cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x444CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444CF0u;
        // 0x444cf4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444cf0) {
            ctx->pc = 0x444E5Cu;
            goto label_444e5c;
        }
    }
    ctx->pc = 0x444CF8u;
    // 0x444cf8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x444cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x444cfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x444cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444d00: 0x8c880014  lw          $t0, 0x14($a0)
    ctx->pc = 0x444d00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x444d04: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x444D04u;
    {
        const bool branch_taken_0x444d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x444D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444D04u;
        // 0x444d08: 0x8e110014  lw          $s1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444d04) {
            ctx->pc = 0x444E30u;
            goto label_444e30;
        }
    }
    ctx->pc = 0x444D0Cu;
    // 0x444d0c: 0x240e000c  addiu       $t6, $zero, 0xC
    ctx->pc = 0x444d0cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x444d10: 0x240b001c  addiu       $t3, $zero, 0x1C
    ctx->pc = 0x444d10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x444d14: 0x250a0028  addiu       $t2, $t0, 0x28
    ctx->pc = 0x444d14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 40));
    // 0x444d18: 0x250d0018  addiu       $t5, $t0, 0x18
    ctx->pc = 0x444d18u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
    // 0x444d1c: 0x262c0028  addiu       $t4, $s1, 0x28
    ctx->pc = 0x444d1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x444d20: 0xae2018  mult        $a0, $a1, $t6
    ctx->pc = 0x444d20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x444d24: 0x0  nop
    ctx->pc = 0x444d24u;
    // NOP
label_444d28:
    // 0x444d28: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x444d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x444d2c: 0x95020002  lhu         $v0, 0x2($t0)
    ctx->pc = 0x444d2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x444d30: 0x24a90001  addiu       $t1, $a1, 0x1
    ctx->pc = 0x444d30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x444d34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x444d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444d38: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x444d38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444d3c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x444D3Cu;
    {
        const bool branch_taken_0x444d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x444D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444D3Cu;
        // 0x444d40: 0x643021  addu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444d3c) {
            ctx->pc = 0x444D94u;
            goto label_444d94;
        }
    }
    ctx->pc = 0x444D44u;
    // 0x444d44: 0x8d030028  lw          $v1, 0x28($t0)
    ctx->pc = 0x444d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x444d48: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x444D48u;
    {
        const bool branch_taken_0x444d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x444d48) {
            ctx->pc = 0x444D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x444D48u;
            // 0x444d4c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x444D68u;
            goto label_444d68;
        }
    }
    ctx->pc = 0x444D50u;
    // 0x444d50: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x444d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x444d54: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x444d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x444d58: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x444D58u;
    {
        const bool branch_taken_0x444d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x444d58) {
            ctx->pc = 0x444D94u;
            goto label_444d94;
        }
    }
    ctx->pc = 0x444D60u;
    // 0x444d60: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x444d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x444d64: 0x0  nop
    ctx->pc = 0x444d64u;
    // NOP
label_444d68:
    // 0x444d68: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x444d68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x444d6c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x444D6Cu;
    {
        const bool branch_taken_0x444d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x444D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444D6Cu;
        // 0x444d70: 0xab1818  mult        $v1, $a1, $t3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x444d6c) {
            ctx->pc = 0x444D94u;
            goto label_444d94;
        }
    }
    ctx->pc = 0x444D74u;
    // 0x444d74: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x444d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x444d78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x444d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x444d7c: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x444D7Cu;
    {
        const bool branch_taken_0x444d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x444d7c) {
            ctx->pc = 0x444D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x444D7Cu;
            // 0x444d80: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x444D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_444d68;
        }
    }
    ctx->pc = 0x444D84u;
    // 0x444d84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x444d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x444d88: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x444d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x444d8c: 0x5462fff6  bnel        $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x444D8Cu;
    {
        const bool branch_taken_0x444d8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x444d8c) {
            ctx->pc = 0x444D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x444D8Cu;
            // 0x444d90: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x444D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_444d68;
        }
    }
    ctx->pc = 0x444D94u;
label_444d94:
    // 0x444d94: 0x10a70021  beq         $a1, $a3, . + 4 + (0x21 << 2)
    ctx->pc = 0x444D94u;
    {
        const bool branch_taken_0x444d94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x444D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444D94u;
        // 0x444d98: 0x2407001c  addiu       $a3, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444d94) {
            ctx->pc = 0x444E1Cu;
            goto label_444e1c;
        }
    }
    ctx->pc = 0x444D9Cu;
    // 0x444d9c: 0xa71818  mult        $v1, $a1, $a3
    ctx->pc = 0x444d9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x444da0: 0x1a32021  addu        $a0, $t5, $v1
    ctx->pc = 0x444da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x444da4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x444da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x444da8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x444DA8u;
    {
        const bool branch_taken_0x444da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x444DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444DA8u;
        // 0x444dac: 0x1031821  addu        $v1, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444da8) {
            ctx->pc = 0x444E1Cu;
            goto label_444e1c;
        }
    }
    ctx->pc = 0x444DB0u;
    // 0x444db0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x444db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x444db4: 0x472818  mult        $a1, $v0, $a3
    ctx->pc = 0x444db4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x444db8: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x444db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x444dbc: 0x686f001b  ldl         $t7, 0x1B($v1)
    ctx->pc = 0x444dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x444dc0: 0x6c6f0014  ldr         $t7, 0x14($v1)
    ctx->pc = 0x444dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x444dc4: 0x68720023  ldl         $s2, 0x23($v1)
    ctx->pc = 0x444dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
    // 0x444dc8: 0x6c72001c  ldr         $s2, 0x1C($v1)
    ctx->pc = 0x444dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x444dcc: 0x6873002b  ldl         $s3, 0x2B($v1)
    ctx->pc = 0x444dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x444dd0: 0x6c730024  ldr         $s3, 0x24($v1)
    ctx->pc = 0x444dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
    // 0x444dd4: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x444dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x444dd8: 0xb04f001b  sdl         $t7, 0x1B($v0)
    ctx->pc = 0x444dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x444ddc: 0xb44f0014  sdr         $t7, 0x14($v0)
    ctx->pc = 0x444ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x444de0: 0xb0520023  sdl         $s2, 0x23($v0)
    ctx->pc = 0x444de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x444de4: 0xb452001c  sdr         $s2, 0x1C($v0)
    ctx->pc = 0x444de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x444de8: 0xb053002b  sdl         $s3, 0x2B($v0)
    ctx->pc = 0x444de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x444dec: 0xb4530024  sdr         $s3, 0x24($v0)
    ctx->pc = 0x444decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x444df0: 0xac45002c  sw          $a1, 0x2C($v0)
    ctx->pc = 0x444df0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 5));
    // 0x444df4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x444df4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x444df8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x444df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x444dfc: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x444dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x444e00: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x444e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x444e04: 0x871818  mult        $v1, $a0, $a3
    ctx->pc = 0x444e04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x444e08: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x444e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x444e0c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x444e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x444e10: 0x6c2021  addu        $a0, $v1, $t4
    ctx->pc = 0x444e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x444e14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x444e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x444e18: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x444e18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_444e1c:
    // 0x444e1c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x444e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x444e20: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x444e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444e24: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x444e24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x444e28: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x444E28u;
    {
        const bool branch_taken_0x444e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x444E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444E28u;
        // 0x444e2c: 0xae2018  mult        $a0, $a1, $t6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x444e28) {
            ctx->pc = 0x444D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_444d28;
        }
    }
    ctx->pc = 0x444E30u;
label_444e30:
    // 0x444e30: 0xc111448  jal         func_445120
    ctx->pc = 0x444E30u;
    SET_GPR_U32(ctx, 31, 0x444E38u);
    ctx->pc = 0x444E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444E30u;
    // 0x444e34: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445120u, 0x444E30u, 0x444E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444E38u;
label_444e38:
    // 0x444e38: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x444e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x444e3c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x444e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x444e40: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x444e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x444e44: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x444e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x444e48: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x444e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x444e4c: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x444e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x444e50: 0xae250010  sw          $a1, 0x10($s1)
    ctx->pc = 0x444e50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 5));
    // 0x444e54: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x444e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x444e58: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x444e58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_444e5c:
    // 0x444e5c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x444e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x444e60: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x444e60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x444e64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x444e64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x444e68: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x444e68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x444e6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x444e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x444e70: 0x3e00008  jr          $ra
    ctx->pc = 0x444E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x444E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444E70u;
        // 0x444e74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x444E78u;
}
