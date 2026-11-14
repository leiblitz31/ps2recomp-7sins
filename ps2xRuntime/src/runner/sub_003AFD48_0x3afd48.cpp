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

// Function: sub_003AFD48
// Address: 0x3afd48 - 0x3b0010
void sub_003AFD48_0x3afd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AFD48_0x3afd48");
#endif

    switch (ctx->pc) {
        case 0x3afd88u: goto label_3afd88;
        case 0x3afda4u: goto label_3afda4;
        case 0x3afdc8u: goto label_3afdc8;
        case 0x3afde8u: goto label_3afde8;
        case 0x3afe50u: goto label_3afe50;
        case 0x3afe68u: goto label_3afe68;
        case 0x3afe7cu: goto label_3afe7c;
        case 0x3aff7cu: goto label_3aff7c;
        case 0x3affd0u: goto label_3affd0;
        default: break;
    }

    ctx->pc = 0x3afd48u;

    // 0x3afd48: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3afd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x3afd4c: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x3afd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x3afd50: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3afd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x3afd54: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3afd54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afd58: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3afd58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afd5c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x3afd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x3afd60: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x3afd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x3afd64: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x3afd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x3afd68: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x3afd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x3afd6c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3afd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3afd70: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x3afd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x3afd74: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x3afd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x3afd78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3afd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3afd7c: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x3afd7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x3afd80: 0xc0eba30  jal         func_3AE8C0
    ctx->pc = 0x3AFD80u;
    SET_GPR_U32(ctx, 31, 0x3AFD88u);
    ctx->pc = 0x3AFD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFD80u;
    // 0x3afd84: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE8C0u, 0x3AFD80u, 0x3AFD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFD88u;
label_3afd88:
    // 0x3afd88: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3afd88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3afd8c: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x3afd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x3afd90: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3afd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3afd94: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AFD94u;
    {
        const bool branch_taken_0x3afd94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3AFD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFD94u;
        // 0x3afd98: 0xe440d580  swc1        $f0, -0x2A80($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956416), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afd94) {
            ctx->pc = 0x3AFDACu;
            goto label_3afdac;
        }
    }
    ctx->pc = 0x3AFD9Cu;
    // 0x3afd9c: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3AFD9Cu;
    SET_GPR_U32(ctx, 31, 0x3AFDA4u);
    ctx->pc = 0x3AFDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFD9Cu;
    // 0x3afda0: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3AFD9Cu, 0x3AFDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFDA4u;
label_3afda4:
    // 0x3afda4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3AFDA4u;
    {
        const bool branch_taken_0x3afda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFDA4u;
        // 0x3afda8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afda4) {
            ctx->pc = 0x3AFDB0u;
            goto label_3afdb0;
        }
    }
    ctx->pc = 0x3AFDACu;
label_3afdac:
    // 0x3afdac: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x3afdacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3afdb0:
    // 0x3afdb0: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x3afdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x3afdb4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3afdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3afdb8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AFDB8u;
    {
        const bool branch_taken_0x3afdb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AFDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFDB8u;
        // 0x3afdbc: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afdb8) {
            ctx->pc = 0x3AFDCCu;
            goto label_3afdcc;
        }
    }
    ctx->pc = 0x3AFDC0u;
    // 0x3afdc0: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3AFDC0u;
    SET_GPR_U32(ctx, 31, 0x3AFDC8u);
    ctx->pc = 0x3AFDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFDC0u;
    // 0x3afdc4: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3AFDC0u, 0x3AFDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFDC8u;
label_3afdc8:
    // 0x3afdc8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3afdc8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3afdcc:
    // 0x3afdcc: 0x1ac0007b  blez        $s6, . + 4 + (0x7B << 2)
    ctx->pc = 0x3AFDCCu;
    {
        const bool branch_taken_0x3afdcc = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x3AFDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFDCCu;
        // 0x3afdd0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afdcc) {
            ctx->pc = 0x3AFFBCu;
            goto label_3affbc;
        }
    }
    ctx->pc = 0x3AFDD4u;
    // 0x3afdd4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x3afdd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x3afdd8: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x3afdd8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3afddc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3afddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3afde0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3afde0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3afde4: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x3afde4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3afde8:
    // 0x3afde8: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x3afde8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3afdec: 0x163e001a  bne         $s1, $fp, . + 4 + (0x1A << 2)
    ctx->pc = 0x3AFDECu;
    {
        const bool branch_taken_0x3afdec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 30));
        if (branch_taken_0x3afdec) {
            ctx->pc = 0x3AFE58u;
            goto label_3afe58;
        }
    }
    ctx->pc = 0x3AFDF4u;
    // 0x3afdf4: 0x6a02fff3  ldl         $v0, -0xD($s0)
    ctx->pc = 0x3afdf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294967283); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3afdf8: 0x6e02ffec  ldr         $v0, -0x14($s0)
    ctx->pc = 0x3afdf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294967276); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3afdfc: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x3afdfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3afe00: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x3afe00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3afe04: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x3afe04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x3afe08: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3afe08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x3afe0c: 0x6a06000b  ldl         $a2, 0xB($s0)
    ctx->pc = 0x3afe0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3afe10: 0x6e060004  ldr         $a2, 0x4($s0)
    ctx->pc = 0x3afe10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3afe14: 0xb3a6000f  sdl         $a2, 0xF($sp)
    ctx->pc = 0x3afe14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3afe18: 0xb7a60008  sdr         $a2, 0x8($sp)
    ctx->pc = 0x3afe18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3afe1c: 0x2463ce80  addiu       $v1, $v1, -0x3180
    ctx->pc = 0x3afe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
    // 0x3afe20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3afe20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afe24: 0x8c660708  lw          $a2, 0x708($v1)
    ctx->pc = 0x3afe24u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x61D588u));
    // 0x3afe28: 0x6a070023  ldl         $a3, 0x23($s0)
    ctx->pc = 0x3afe28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x3afe2c: 0x6e07001c  ldr         $a3, 0x1C($s0)
    ctx->pc = 0x3afe2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x3afe30: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x3afe30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3afe34: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x3afe34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3afe38: 0x6a07003b  ldl         $a3, 0x3B($s0)
    ctx->pc = 0x3afe38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x3afe3c: 0x6e070034  ldr         $a3, 0x34($s0)
    ctx->pc = 0x3afe3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x3afe40: 0xb3a7001f  sdl         $a3, 0x1F($sp)
    ctx->pc = 0x3afe40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3afe44: 0xb7a70018  sdr         $a3, 0x18($sp)
    ctx->pc = 0x3afe44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3afe48: 0xc0ebe6c  jal         func_3AF9B0
    ctx->pc = 0x3AFE48u;
    SET_GPR_U32(ctx, 31, 0x3AFE50u);
    ctx->pc = 0x3AFE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFE48u;
    // 0x3afe4c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF9B0u, 0x3AFE48u, 0x3AFE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFE50u;
label_3afe50:
    // 0x3afe50: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x3AFE50u;
    {
        const bool branch_taken_0x3afe50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFE50u;
        // 0x3afe54: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afe50) {
            ctx->pc = 0x3AFFACu;
            goto label_3affac;
        }
    }
    ctx->pc = 0x3AFE58u;
label_3afe58:
    // 0x3afe58: 0x56370045  bnel        $s1, $s7, . + 4 + (0x45 << 2)
    ctx->pc = 0x3AFE58u;
    {
        const bool branch_taken_0x3afe58 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 23));
        if (branch_taken_0x3afe58) {
            ctx->pc = 0x3AFE5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AFE58u;
            // 0x3afe5c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AFF70u;
            goto label_3aff70;
        }
    }
    ctx->pc = 0x3AFE60u;
    // 0x3afe60: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3AFE60u;
    SET_GPR_U32(ctx, 31, 0x3AFE68u);
    ctx->pc = 0x3AFE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFE60u;
    // 0x3afe64: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3AFE60u, 0x3AFE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFE68u;
label_3afe68:
    // 0x3afe68: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3afe68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3afe6c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3afe6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x3afe70: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3afe70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afe74: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3AFE74u;
    SET_GPR_U32(ctx, 31, 0x3AFE7Cu);
    ctx->pc = 0x3AFE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFE74u;
    // 0x3afe78: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3AFE74u, 0x3AFE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFE7Cu;
label_3afe7c:
    // 0x3afe7c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x3afe7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3afe80: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3afe80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afe84: 0xc462fff0  lwc1        $f2, -0x10($v1)
    ctx->pc = 0x3afe84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3afe88: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3afe88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3afe8c: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x3afe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x3afe90: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3afe90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3afe94: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3afe94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3afe98: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x3afe98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3afe9c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3afe9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3afea0: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x3afea0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3afea4: 0xc460ffec  lwc1        $f0, -0x14($v1)
    ctx->pc = 0x3afea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3afea8: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x3afea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3afeac: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3afeacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3afeb0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3afeb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3afeb4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3afeb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3afeb8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3afeb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x3afebc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3afebcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3afec0: 0x46010044  c1          0x10044
    ctx->pc = 0x3afec0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x3afec4: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x3afec4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3afec8: 0x0  nop
    ctx->pc = 0x3afec8u;
    // NOP
    // 0x3afecc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3AFECCu;
    {
        const bool branch_taken_0x3afecc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AFED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFECCu;
        // 0x3afed0: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afecc) {
            ctx->pc = 0x3AFED8u;
            goto label_3afed8;
        }
    }
    ctx->pc = 0x3AFED4u;
    // 0x3afed4: 0x4601a043  div.s       $f1, $f20, $f1
    ctx->pc = 0x3afed4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
label_3afed8:
    // 0x3afed8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x3afed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3afedc: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x3afedcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3afee0: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x3afee0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x3afee4: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x3afee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3afee8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3afee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3afeec: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x3afeecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x3afef0: 0xc461fffc  lwc1        $f1, -0x4($v1)
    ctx->pc = 0x3afef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3afef4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x3afef4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x3afef8: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x3afef8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3afefc: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3AFEFCu;
    {
        const bool branch_taken_0x3afefc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AFF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFEFCu;
        // 0x3aff00: 0xe4610014  swc1        $f1, 0x14($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afefc) {
            ctx->pc = 0x3AFF58u;
            goto label_3aff58;
        }
    }
    ctx->pc = 0x3AFF04u;
    // 0x3aff04: 0x24628000  addiu       $v0, $v1, -0x8000
    ctx->pc = 0x3aff04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x3aff08: 0xc4437ff4  lwc1        $f3, 0x7FF4($v0)
    ctx->pc = 0x3aff08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3aff0c: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x3aff0cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x3aff10: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x3aff10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3aff14: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x3aff14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aff18: 0xc4417ff8  lwc1        $f1, 0x7FF8($v0)
    ctx->pc = 0x3aff18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3aff1c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3aff1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3aff20: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x3aff20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3aff24: 0xc4407ff4  lwc1        $f0, 0x7FF4($v0)
    ctx->pc = 0x3aff24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aff28: 0xc4427ff8  lwc1        $f2, 0x7FF8($v0)
    ctx->pc = 0x3aff28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3aff2c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3aff2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3aff30: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x3aff30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3aff34: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3aff34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3aff38: 0x4600a043  div.s       $f1, $f20, $f0
    ctx->pc = 0x3aff38u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x3aff3c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x3aff3cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3aff40: 0xe4437ff4  swc1        $f3, 0x7FF4($v0)
    ctx->pc = 0x3aff40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32756), bits); }
    // 0x3aff44: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x3aff44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aff48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3aff48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3aff4c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3AFF4Cu;
    {
        const bool branch_taken_0x3aff4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFF4Cu;
        // 0x3aff50: 0xe4407ff8  swc1        $f0, 0x7FF8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32760), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aff4c) {
            ctx->pc = 0x3AFFACu;
            goto label_3affac;
        }
    }
    ctx->pc = 0x3AFF54u;
    // 0x3aff54: 0x0  nop
    ctx->pc = 0x3aff54u;
    // NOP
label_3aff58:
    // 0x3aff58: 0x68640013  ldl         $a0, 0x13($v1)
    ctx->pc = 0x3aff58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3aff5c: 0x6c64000c  ldr         $a0, 0xC($v1)
    ctx->pc = 0x3aff5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3aff60: 0xb064fffb  sdl         $a0, -0x5($v1)
    ctx->pc = 0x3aff60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3aff64: 0xb464fff4  sdr         $a0, -0xC($v1)
    ctx->pc = 0x3aff64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967284); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3aff68: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3AFF68u;
    {
        const bool branch_taken_0x3aff68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFF68u;
        // 0x3aff6c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aff68) {
            ctx->pc = 0x3AFFB0u;
            goto label_3affb0;
        }
    }
    ctx->pc = 0x3AFF70u;
label_3aff70:
    // 0x3aff70: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3aff70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x3aff74: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3AFF74u;
    SET_GPR_U32(ctx, 31, 0x3AFF7Cu);
    ctx->pc = 0x3AFF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFF74u;
    // 0x3aff78: 0x34a501a1  ori         $a1, $a1, 0x1A1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)417);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3AFF74u, 0x3AFF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFF7Cu;
label_3aff7c:
    // 0x3aff7c: 0x6a080007  ldl         $t0, 0x7($s0)
    ctx->pc = 0x3aff7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x3aff80: 0x6e080000  ldr         $t0, 0x0($s0)
    ctx->pc = 0x3aff80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x3aff84: 0x6a03000f  ldl         $v1, 0xF($s0)
    ctx->pc = 0x3aff84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3aff88: 0x6e030008  ldr         $v1, 0x8($s0)
    ctx->pc = 0x3aff88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3aff8c: 0x6a040017  ldl         $a0, 0x17($s0)
    ctx->pc = 0x3aff8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3aff90: 0x6e040010  ldr         $a0, 0x10($s0)
    ctx->pc = 0x3aff90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3aff94: 0xb0480007  sdl         $t0, 0x7($v0)
    ctx->pc = 0x3aff94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3aff98: 0xb4480000  sdr         $t0, 0x0($v0)
    ctx->pc = 0x3aff98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3aff9c: 0xb043000f  sdl         $v1, 0xF($v0)
    ctx->pc = 0x3aff9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3affa0: 0xb4430008  sdr         $v1, 0x8($v0)
    ctx->pc = 0x3affa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3affa4: 0xb0440017  sdl         $a0, 0x17($v0)
    ctx->pc = 0x3affa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3affa8: 0xb4440010  sdr         $a0, 0x10($v0)
    ctx->pc = 0x3affa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3affac:
    // 0x3affac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3affacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3affb0:
    // 0x3affb0: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x3affb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x3affb4: 0x1440ff8c  bnez        $v0, . + 4 + (-0x74 << 2)
    ctx->pc = 0x3AFFB4u;
    {
        const bool branch_taken_0x3affb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AFFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFFB4u;
        // 0x3affb8: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3affb4) {
            ctx->pc = 0x3AFDE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3afde8;
        }
    }
    ctx->pc = 0x3AFFBCu;
label_3affbc:
    // 0x3affbc: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x3affbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x3affc0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AFFC0u;
    {
        const bool branch_taken_0x3affc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFFC0u;
        // 0x3affc4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3affc0) {
            ctx->pc = 0x3AFFD4u;
            goto label_3affd4;
        }
    }
    ctx->pc = 0x3AFFC8u;
    // 0x3affc8: 0xc0ebc42  jal         func_3AF108
    ctx->pc = 0x3AFFC8u;
    SET_GPR_U32(ctx, 31, 0x3AFFD0u);
    ctx->pc = 0x3AFFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFFC8u;
    // 0x3affcc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF108u, 0x3AFFC8u, 0x3AFFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFFD0u;
label_3affd0:
    // 0x3affd0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3affd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3affd4:
    // 0x3affd4: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x3affd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3affd8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x3affd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3affdc: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x3affdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3affe0: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x3affe0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3affe4: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x3affe4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3affe8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3affe8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3affec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3affecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3afff0: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x3afff0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3afff4: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x3afff4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3afff8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3afff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3afffc: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x3afffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3b0000: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x3b0000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3b0004: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0004u;
        // 0x3b0008: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B000Cu;
    // 0x3b000c: 0x0  nop
    ctx->pc = 0x3b000cu;
    // NOP
    ctx->pc = 0x3b0010u;
}
