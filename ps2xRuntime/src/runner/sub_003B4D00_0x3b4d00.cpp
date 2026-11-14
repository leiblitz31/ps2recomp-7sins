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

// Function: sub_003B4D00
// Address: 0x3b4d00 - 0x3b4dd0
void sub_003B4D00_0x3b4d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4D00_0x3b4d00");
#endif

    switch (ctx->pc) {
        case 0x3b4d28u: goto label_3b4d28;
        case 0x3b4d48u: goto label_3b4d48;
        case 0x3b4d58u: goto label_3b4d58;
        default: break;
    }

    ctx->pc = 0x3b4d00u;

    // 0x3b4d00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3b4d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3b4d04: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x3b4d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x3b4d08: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3b4d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3b4d0c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3b4d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3b4d10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b4d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4d14: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b4d14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4d18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b4d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b4d1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b4d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4d20: 0xc10480a  jal         func_412028
    ctx->pc = 0x3B4D20u;
    SET_GPR_U32(ctx, 31, 0x3B4D28u);
    ctx->pc = 0x3B4D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4D20u;
    // 0x3b4d24: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3B4D20u, 0x3B4D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4D28u;
label_3b4d28:
    // 0x3b4d28: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x3b4d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x3b4d2c: 0x14430023  bne         $v0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x3B4D2Cu;
    {
        const bool branch_taken_0x3b4d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B4D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4D2Cu;
        // 0x3b4d30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4d2c) {
            ctx->pc = 0x3B4DBCu;
            goto label_3b4dbc;
        }
    }
    ctx->pc = 0x3B4D34u;
    // 0x3b4d34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b4d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4d38: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x3b4d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3b4d3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b4d3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4d40: 0xc103322  jal         func_40CC88
    ctx->pc = 0x3B4D40u;
    SET_GPR_U32(ctx, 31, 0x3B4D48u);
    ctx->pc = 0x3B4D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4D40u;
    // 0x3b4d44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x3B4D40u, 0x3B4D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4D48u;
label_3b4d48:
    // 0x3b4d48: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3B4D48u;
    {
        const bool branch_taken_0x3b4d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4D48u;
        // 0x3b4d4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4d48) {
            ctx->pc = 0x3B4DB8u;
            goto label_3b4db8;
        }
    }
    ctx->pc = 0x3B4D50u;
    // 0x3b4d50: 0xc103548  jal         func_40D520
    ctx->pc = 0x3B4D50u;
    SET_GPR_U32(ctx, 31, 0x3B4D58u);
    ctx->pc = 0x3B4D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4D50u;
    // 0x3b4d54: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D520u, 0x3B4D50u, 0x3B4D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4D58u;
label_3b4d58:
    // 0x3b4d58: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3b4d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3b4d5c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3b4d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3b4d60: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x3b4d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b4d64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b4d64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4d68: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3b4d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3b4d6c: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x3b4d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x3b4d70: 0x6ba30013  ldl         $v1, 0x13($sp)
    ctx->pc = 0x3b4d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3b4d74: 0x6fa3000c  ldr         $v1, 0xC($sp)
    ctx->pc = 0x3b4d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3b4d78: 0x6ba4001b  ldl         $a0, 0x1B($sp)
    ctx->pc = 0x3b4d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3b4d7c: 0x6fa40014  ldr         $a0, 0x14($sp)
    ctx->pc = 0x3b4d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3b4d80: 0xb2030097  sdl         $v1, 0x97($s0)
    ctx->pc = 0x3b4d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b4d84: 0xb6030090  sdr         $v1, 0x90($s0)
    ctx->pc = 0x3b4d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b4d88: 0xb204009f  sdl         $a0, 0x9F($s0)
    ctx->pc = 0x3b4d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b4d8c: 0xb6040098  sdr         $a0, 0x98($s0)
    ctx->pc = 0x3b4d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b4d90: 0x6ba30023  ldl         $v1, 0x23($sp)
    ctx->pc = 0x3b4d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3b4d94: 0x6fa3001c  ldr         $v1, 0x1C($sp)
    ctx->pc = 0x3b4d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3b4d98: 0x6ba4002b  ldl         $a0, 0x2B($sp)
    ctx->pc = 0x3b4d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3b4d9c: 0x6fa40024  ldr         $a0, 0x24($sp)
    ctx->pc = 0x3b4d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3b4da0: 0xb20300a7  sdl         $v1, 0xA7($s0)
    ctx->pc = 0x3b4da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b4da4: 0xb60300a0  sdr         $v1, 0xA0($s0)
    ctx->pc = 0x3b4da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b4da8: 0xb20400af  sdl         $a0, 0xAF($s0)
    ctx->pc = 0x3b4da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b4dac: 0xb60400a8  sdr         $a0, 0xA8($s0)
    ctx->pc = 0x3b4dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b4db0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3B4DB0u;
    {
        const bool branch_taken_0x3b4db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4DB0u;
        // 0x3b4db4: 0xae050008  sw          $a1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4db0) {
            ctx->pc = 0x3B4DBCu;
            goto label_3b4dbc;
        }
    }
    ctx->pc = 0x3B4DB8u;
label_3b4db8:
    // 0x3b4db8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b4db8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b4dbc:
    // 0x3b4dbc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3b4dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b4dc0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3b4dc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b4dc4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b4dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b4dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4DC8u;
        // 0x3b4dcc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4DD0u;
}
