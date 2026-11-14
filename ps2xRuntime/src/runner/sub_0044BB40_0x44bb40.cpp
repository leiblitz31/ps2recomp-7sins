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

// Function: sub_0044BB40
// Address: 0x44bb40 - 0x44bcd8
void sub_0044BB40_0x44bb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044BB40_0x44bb40");
#endif

    switch (ctx->pc) {
        case 0x44bc60u: goto label_44bc60;
        case 0x44bc84u: goto label_44bc84;
        case 0x44bc90u: goto label_44bc90;
        case 0x44bca4u: goto label_44bca4;
        case 0x44bcb0u: goto label_44bcb0;
        default: break;
    }

    ctx->pc = 0x44bb40u;

    // 0x44bb40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x44bb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x44bb44: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x44bb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x44bb48: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x44bb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x44bb4c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x44bb4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bb50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x44bb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x44bb54: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x44bb54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bb58: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x44bb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x44bb5c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x44bb5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bb60: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x44bb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x44bb64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44bb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x44bb68: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x44bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x44bb6c: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x44BB6Cu;
    {
        const bool branch_taken_0x44bb6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BB6Cu;
        // 0x44bb70: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bb6c) {
            ctx->pc = 0x44BC54u;
            goto label_44bc54;
        }
    }
    ctx->pc = 0x44BB74u;
    // 0x44bb74: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x44bb74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x44bb78: 0x10a00037  beqz        $a1, . + 4 + (0x37 << 2)
    ctx->pc = 0x44BB78u;
    {
        const bool branch_taken_0x44bb78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BB78u;
        // 0x44bb7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bb78) {
            ctx->pc = 0x44BC58u;
            goto label_44bc58;
        }
    }
    ctx->pc = 0x44BB80u;
    // 0x44bb80: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x44bb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x44bb84: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x44bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x44bb88: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x44bb88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x44bb8c: 0x54400032  bnel        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x44BB8Cu;
    {
        const bool branch_taken_0x44bb8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44bb8c) {
            ctx->pc = 0x44BB90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44BB8Cu;
            // 0x44bb90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44BC58u;
            goto label_44bc58;
        }
    }
    ctx->pc = 0x44BB94u;
    // 0x44bb94: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x44bb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x44bb98: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x44bb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x44bb9c: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x44bb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x44bba0: 0xd21823  subu        $v1, $a2, $s2
    ctx->pc = 0x44bba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x44bba4: 0x2c630100  sltiu       $v1, $v1, 0x100
    ctx->pc = 0x44bba4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x44bba8: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x44BBA8u;
    {
        const bool branch_taken_0x44bba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BBA8u;
        // 0x44bbac: 0x26420020  addiu       $v0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bba8) {
            ctx->pc = 0x44BC0Cu;
            goto label_44bc0c;
        }
    }
    ctx->pc = 0x44BBB0u;
    // 0x44bbb0: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x44bbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x44bbb4: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x44bbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x44bbb8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x44bbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x44bbbc: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x44bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x44bbc0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x44bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x44bbc4: 0x10450007  beq         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x44BBC4u;
    {
        const bool branch_taken_0x44bbc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x44BBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BBC4u;
        // 0x44bbc8: 0x641021  addu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bbc4) {
            ctx->pc = 0x44BBE4u;
            goto label_44bbe4;
        }
    }
    ctx->pc = 0x44BBCCu;
    // 0x44bbcc: 0x6843ffff  ldl         $v1, -0x1($v0)
    ctx->pc = 0x44bbccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x44bbd0: 0x6c43fff8  ldr         $v1, -0x8($v0)
    ctx->pc = 0x44bbd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x44bbd4: 0xb0a30007  sdl         $v1, 0x7($a1)
    ctx->pc = 0x44bbd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44bbd8: 0xb4a30000  sdr         $v1, 0x0($a1)
    ctx->pc = 0x44bbd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44bbdc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x44bbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x44bbe0: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x44bbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
label_44bbe4:
    // 0x44bbe4: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x44bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x44bbe8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x44bbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x44bbec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x44bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x44bbf0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x44bbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x44bbf4: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x44bbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    // 0x44bbf8: 0xae260008  sw          $a2, 0x8($s1)
    ctx->pc = 0x44bbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 6));
    // 0x44bbfc: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x44BBFCu;
    {
        const bool branch_taken_0x44bbfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BBFCu;
        // 0x44bc00: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bbfc) {
            ctx->pc = 0x44BC4Cu;
            goto label_44bc4c;
        }
    }
    ctx->pc = 0x44BC04u;
    // 0x44bc04: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x44BC04u;
    {
        const bool branch_taken_0x44bc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BC04u;
        // 0x44bc08: 0xac710000  sw          $s1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bc04) {
            ctx->pc = 0x44BC4Cu;
            goto label_44bc4c;
        }
    }
    ctx->pc = 0x44BC0Cu;
label_44bc0c:
    // 0x44bc0c: 0x881823  subu        $v1, $a0, $t0
    ctx->pc = 0x44bc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x44bc10: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x44bc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x44bc14: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x44bc14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x44bc18: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x44bc18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x44bc1c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x44bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x44bc20: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x44bc20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x44bc24: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x44bc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x44bc28: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x44BC28u;
    {
        const bool branch_taken_0x44bc28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BC28u;
        // 0x44bc2c: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bc28) {
            ctx->pc = 0x44BC34u;
            goto label_44bc34;
        }
    }
    ctx->pc = 0x44BC30u;
    // 0x44bc30: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x44bc30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_44bc34:
    // 0x44bc34: 0xae320008  sw          $s2, 0x8($s1)
    ctx->pc = 0x44bc34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 18));
    // 0x44bc38: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x44bc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x44bc3c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x44bc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x44bc40: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x44bc40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x44bc44: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x44bc44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x44bc48: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x44bc48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_44bc4c:
    // 0x44bc4c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x44BC4Cu;
    {
        const bool branch_taken_0x44bc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BC4Cu;
        // 0x44bc50: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bc4c) {
            ctx->pc = 0x44BCB8u;
            goto label_44bcb8;
        }
    }
    ctx->pc = 0x44BC54u;
label_44bc54:
    // 0x44bc54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x44bc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_44bc58:
    // 0x44bc58: 0xc113084  jal         func_44C210
    ctx->pc = 0x44BC58u;
    SET_GPR_U32(ctx, 31, 0x44BC60u);
    ctx->pc = 0x44BC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44BC58u;
    // 0x44bc5c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C210u, 0x44BC58u, 0x44BC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BC60u;
label_44bc60:
    // 0x44bc60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x44bc60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bc64: 0x5600000c  bnel        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x44BC64u;
    {
        const bool branch_taken_0x44bc64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x44bc64) {
            ctx->pc = 0x44BC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44BC64u;
            // 0x44bc68: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44BC98u;
            goto label_44bc98;
        }
    }
    ctx->pc = 0x44BC6Cu;
    // 0x44bc6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44bc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44bc70: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x44bc70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x44bc74: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x44bc74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x44bc78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x44bc78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bc7c: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x44BC7Cu;
    SET_GPR_U32(ctx, 31, 0x44BC84u);
    ctx->pc = 0x44BC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44BC7Cu;
    // 0x44bc80: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x44BC7Cu, 0x44BC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BC84u;
label_44bc84:
    // 0x44bc84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x44bc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bc88: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x44BC88u;
    SET_GPR_U32(ctx, 31, 0x44BC90u);
    ctx->pc = 0x44BC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44BC88u;
    // 0x44bc8c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x44BC88u, 0x44BC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BC90u;
label_44bc90:
    // 0x44bc90: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x44BC90u;
    {
        const bool branch_taken_0x44bc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BC90u;
        // 0x44bc94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bc90) {
            ctx->pc = 0x44BCB8u;
            goto label_44bcb8;
        }
    }
    ctx->pc = 0x44BC98u;
label_44bc98:
    // 0x44bc98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44bc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bc9c: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x44BC9Cu;
    SET_GPR_U32(ctx, 31, 0x44BCA4u);
    ctx->pc = 0x44BCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44BC9Cu;
    // 0x44bca0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x44BC9Cu, 0x44BCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BCA4u;
label_44bca4:
    // 0x44bca4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x44bca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bca8: 0xc112fc8  jal         func_44BF20
    ctx->pc = 0x44BCA8u;
    SET_GPR_U32(ctx, 31, 0x44BCB0u);
    ctx->pc = 0x44BCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44BCA8u;
    // 0x44bcac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44BF20u, 0x44BCA8u, 0x44BCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BCB0u;
label_44bcb0:
    // 0x44bcb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x44bcb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bcb4: 0x0  nop
    ctx->pc = 0x44bcb4u;
    // NOP
label_44bcb8:
    // 0x44bcb8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x44bcb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x44bcbc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x44bcbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x44bcc0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x44bcc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x44bcc4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x44bcc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44bcc8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x44bcc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44bccc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44bcccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44bcd0: 0x3e00008  jr          $ra
    ctx->pc = 0x44BCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BCD0u;
        // 0x44bcd4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44BCD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44BCD8u;
}
