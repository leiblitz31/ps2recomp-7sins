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

// Function: sub_0033C760
// Address: 0x33c760 - 0x33ca68
void sub_0033C760_0x33c760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C760_0x33c760");
#endif

    switch (ctx->pc) {
        case 0x33c784u: goto label_33c784;
        case 0x33c7f0u: goto label_33c7f0;
        default: break;
    }

    ctx->pc = 0x33c760u;

    // 0x33c760: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33c760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33c764: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x33c764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x33c768: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33c768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33c76c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33c76cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c770: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33c770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33c774: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33c774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c778: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x33c778u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x33c77c: 0xc0cead0  jal         func_33AB40
    ctx->pc = 0x33C77Cu;
    SET_GPR_U32(ctx, 31, 0x33C784u);
    ctx->pc = 0x33C780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C77Cu;
    // 0x33c780: 0xc4d40000  lwc1        $f20, 0x0($a2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AB40u, 0x33C77Cu, 0x33C784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C784u;
label_33c784:
    // 0x33c784: 0x3c0f0062  lui         $t7, 0x62
    ctx->pc = 0x33c784u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)98 << 16));
    // 0x33c788: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x33c788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33c78c: 0x25e2c210  addiu       $v0, $t7, -0x3DF0
    ctx->pc = 0x33c78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294951440));
    // 0x33c790: 0x8e2a0008  lw          $t2, 0x8($s1)
    ctx->pc = 0x33c790u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x33c794: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x33c794u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61C248u));
    // 0x33c798: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x33c798u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c79c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x33c79cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61C24Cu));
    // 0x33c7a0: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x33c7a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c7a4: 0x8c470044  lw          $a3, 0x44($v0)
    ctx->pc = 0x33c7a4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x61C254u));
    // 0x33c7a8: 0x28850000  slti        $a1, $a0, 0x0
    ctx->pc = 0x33c7a8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x33c7ac: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x33c7acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x33c7b0: 0x8cce000c  lw          $t6, 0xC($a2)
    ctx->pc = 0x33c7b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x33c7b4: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x33c7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x33c7b8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x33c7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x33c7bc: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x33c7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x33c7c0: 0x28e80000  slti        $t0, $a3, 0x0
    ctx->pc = 0x33c7c0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x33c7c4: 0x2078021  addu        $s0, $s0, $a3
    ctx->pc = 0x33c7c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x33c7c8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x33c7c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c7cc: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x33c7ccu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c7d0: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x33c7d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x33c7d4: 0x85680a  movz        $t5, $a0, $a1
    ctx->pc = 0x33c7d4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 4));
    // 0x33c7d8: 0x62580a  movz        $t3, $v1, $v0
    ctx->pc = 0x33c7d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 3));
    // 0x33c7dc: 0x2263821  addu        $a3, $s1, $a2
    ctx->pc = 0x33c7dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x33c7e0: 0x1920009a  blez        $t1, . + 4 + (0x9A << 2)
    ctx->pc = 0x33C7E0u;
    {
        const bool branch_taken_0x33c7e0 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x33C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C7E0u;
        // 0x33c7e4: 0x208600a  movz        $t4, $s0, $t0 (Delay Slot)
        if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c7e0) {
            ctx->pc = 0x33CA4Cu;
            goto label_33ca4c;
        }
    }
    ctx->pc = 0x33C7E8u;
    // 0x33c7e8: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x33c7e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c7ec: 0x24e80008  addiu       $t0, $a3, 0x8
    ctx->pc = 0x33c7ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_33c7f0:
    // 0x33c7f0: 0xc501fffc  lwc1        $f1, -0x4($t0)
    ctx->pc = 0x33c7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c7f4: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x33c7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c7f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33c7f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33c7fc: 0x0  nop
    ctx->pc = 0x33c7fcu;
    // NOP
    // 0x33c800: 0x4500008d  bc1f        . + 4 + (0x8D << 2)
    ctx->pc = 0x33C800u;
    {
        const bool branch_taken_0x33c800 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C800u;
        // 0x33c804: 0x25e3c210  addiu       $v1, $t7, -0x3DF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 4294951440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c800) {
            ctx->pc = 0x33CA38u;
            goto label_33ca38;
        }
    }
    ctx->pc = 0x33C808u;
    // 0x33c808: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x33c808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x33c80c: 0x440002d  bltz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x33C80Cu;
    {
        const bool branch_taken_0x33c80c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33C810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C80Cu;
        // 0x33c810: 0x46140840  add.s       $f1, $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c80c) {
            ctx->pc = 0x33C8C4u;
            goto label_33c8c4;
        }
    }
    ctx->pc = 0x33C814u;
    // 0x33c814: 0xe23021  addu        $a2, $a3, $v0
    ctx->pc = 0x33c814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x33c818: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x33c818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x33c81c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x33c81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33c820: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x33c820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33c824: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x33C824u;
    {
        const bool branch_taken_0x33c824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C824u;
        // 0x33c828: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c824) {
            ctx->pc = 0x33C8C4u;
            goto label_33c8c4;
        }
    }
    ctx->pc = 0x33C82Cu;
    // 0x33c82c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x33c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x33c830: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x33c830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c834: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33c834u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33c838: 0x0  nop
    ctx->pc = 0x33c838u;
    // NOP
    // 0x33c83c: 0x45020022  bc1fl       . + 4 + (0x22 << 2)
    ctx->pc = 0x33C83Cu;
    {
        const bool branch_taken_0x33c83c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33c83c) {
            ctx->pc = 0x33C840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33C83Cu;
            // 0x33c840: 0x8c620070  lw          $v0, 0x70($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C8C8u;
            goto label_33c8c8;
        }
    }
    ctx->pc = 0x33C844u;
    // 0x33c844: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x33c844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x33c848: 0x460001d  bltz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x33C848u;
    {
        const bool branch_taken_0x33c848 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x33C84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C848u;
        // 0x33c84c: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c848) {
            ctx->pc = 0x33C8C0u;
            goto label_33c8c0;
        }
    }
    ctx->pc = 0x33C850u;
    // 0x33c850: 0x8da2000c  lw          $v0, 0xC($t5)
    ctx->pc = 0x33c850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x33c854: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x33c854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x33c858: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x33c858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x33c85c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x33c85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33c860: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x33c860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x33c864: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x33c864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x33c868: 0x6883000f  ldl         $v1, 0xF($a0)
    ctx->pc = 0x33c868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x33c86c: 0x6c830008  ldr         $v1, 0x8($a0)
    ctx->pc = 0x33c86cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x33c870: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x33c870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33c874: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x33c874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33c878: 0xb0a3000f  sdl         $v1, 0xF($a1)
    ctx->pc = 0x33c878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33c87c: 0xb4a30008  sdr         $v1, 0x8($a1)
    ctx->pc = 0x33c87cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33c880: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x33c880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33c884: 0x8da20010  lw          $v0, 0x10($t5)
    ctx->pc = 0x33c884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x33c888: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x33c888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x33c88c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x33c88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x33c890: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x33c890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33c894: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x33c894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x33c898: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x33c898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x33c89c: 0x6864000f  ldl         $a0, 0xF($v1)
    ctx->pc = 0x33c89cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x33c8a0: 0x6c640008  ldr         $a0, 0x8($v1)
    ctx->pc = 0x33c8a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x33c8a4: 0xb0a20017  sdl         $v0, 0x17($a1)
    ctx->pc = 0x33c8a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33c8a8: 0xb4a20010  sdr         $v0, 0x10($a1)
    ctx->pc = 0x33c8a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33c8ac: 0xb0a4001f  sdl         $a0, 0x1F($a1)
    ctx->pc = 0x33c8acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33c8b0: 0xb4a40018  sdr         $a0, 0x18($a1)
    ctx->pc = 0x33c8b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33c8b4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x33c8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33c8b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33c8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33c8bc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x33c8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_33c8c0:
    // 0x33c8c0: 0x25e3c210  addiu       $v1, $t7, -0x3DF0
    ctx->pc = 0x33c8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 4294951440));
label_33c8c4:
    // 0x33c8c4: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x33c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_33c8c8:
    // 0x33c8c8: 0x4400035  bltz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x33C8C8u;
    {
        const bool branch_taken_0x33c8c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33C8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C8C8u;
        // 0x33c8cc: 0xe23021  addu        $a2, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c8c8) {
            ctx->pc = 0x33C9A0u;
            goto label_33c9a0;
        }
    }
    ctx->pc = 0x33C8D0u;
    // 0x33c8d0: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x33c8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x33c8d4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x33c8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33c8d8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x33c8d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33c8dc: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x33C8DCu;
    {
        const bool branch_taken_0x33c8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C8DCu;
        // 0x33c8e0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c8dc) {
            ctx->pc = 0x33C9A0u;
            goto label_33c9a0;
        }
    }
    ctx->pc = 0x33C8E4u;
    // 0x33c8e4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x33c8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x33c8e8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x33c8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c8ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33c8ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33c8f0: 0x0  nop
    ctx->pc = 0x33c8f0u;
    // NOP
    // 0x33c8f4: 0x4502002b  bc1fl       . + 4 + (0x2B << 2)
    ctx->pc = 0x33C8F4u;
    {
        const bool branch_taken_0x33c8f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33c8f4) {
            ctx->pc = 0x33C8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33C8F4u;
            // 0x33c8f8: 0x25e3c210  addiu       $v1, $t7, -0x3DF0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 4294951440));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C9A4u;
            goto label_33c9a4;
        }
    }
    ctx->pc = 0x33C8FCu;
    // 0x33c8fc: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x33c8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x33c900: 0x4600027  bltz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x33C900u;
    {
        const bool branch_taken_0x33c900 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x33C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C900u;
        // 0x33c904: 0x420c0  sll         $a0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c900) {
            ctx->pc = 0x33C9A0u;
            goto label_33c9a0;
        }
    }
    ctx->pc = 0x33C908u;
    // 0x33c908: 0x8d62000c  lw          $v0, 0xC($t3)
    ctx->pc = 0x33c908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x33c90c: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x33c90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x33c910: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x33c910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x33c914: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x33c914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33c918: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x33c918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x33c91c: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x33c91cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x33c920: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x33c920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33c924: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x33c924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33c928: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x33c928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33c92c: 0x8d620010  lw          $v0, 0x10($t3)
    ctx->pc = 0x33c92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x33c930: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x33c930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x33c934: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x33c934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x33c938: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x33c938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33c93c: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x33c93cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x33c940: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x33c940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x33c944: 0xb0a20017  sdl         $v0, 0x17($a1)
    ctx->pc = 0x33c944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33c948: 0xb4a20010  sdr         $v0, 0x10($a1)
    ctx->pc = 0x33c948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33c94c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x33c94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33c950: 0x8d620014  lw          $v0, 0x14($t3)
    ctx->pc = 0x33c950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x33c954: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x33c954u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x33c958: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x33c958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x33c95c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x33c95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33c960: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x33c960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x33c964: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x33c964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x33c968: 0xb0a2000f  sdl         $v0, 0xF($a1)
    ctx->pc = 0x33c968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33c96c: 0xb4a20008  sdr         $v0, 0x8($a1)
    ctx->pc = 0x33c96cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33c970: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x33c970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33c974: 0x8d620018  lw          $v0, 0x18($t3)
    ctx->pc = 0x33c974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x33c978: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x33c978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x33c97c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x33c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x33c980: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x33c980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33c984: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x33c984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x33c988: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x33c988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x33c98c: 0xb0a2001f  sdl         $v0, 0x1F($a1)
    ctx->pc = 0x33c98cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33c990: 0xb4a20018  sdr         $v0, 0x18($a1)
    ctx->pc = 0x33c990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33c994: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x33c994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33c998: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33c998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33c99c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x33c99cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_33c9a0:
    // 0x33c9a0: 0x25e3c210  addiu       $v1, $t7, -0x3DF0
    ctx->pc = 0x33c9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 4294951440));
label_33c9a4:
    // 0x33c9a4: 0x8c620078  lw          $v0, 0x78($v1)
    ctx->pc = 0x33c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x33c9a8: 0x4400023  bltz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x33C9A8u;
    {
        const bool branch_taken_0x33c9a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C9A8u;
        // 0x33c9ac: 0xe23021  addu        $a2, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c9a8) {
            ctx->pc = 0x33CA38u;
            goto label_33ca38;
        }
    }
    ctx->pc = 0x33C9B0u;
    // 0x33c9b0: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x33c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x33c9b4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x33c9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33c9b8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x33c9b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33c9bc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x33C9BCu;
    {
        const bool branch_taken_0x33c9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C9BCu;
        // 0x33c9c0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c9bc) {
            ctx->pc = 0x33CA38u;
            goto label_33ca38;
        }
    }
    ctx->pc = 0x33C9C4u;
    // 0x33c9c4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x33c9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x33c9c8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x33c9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c9cc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33c9ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33c9d0: 0x0  nop
    ctx->pc = 0x33c9d0u;
    // NOP
    // 0x33c9d4: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x33C9D4u;
    {
        const bool branch_taken_0x33c9d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33C9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C9D4u;
        // 0x33c9d8: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c9d4) {
            ctx->pc = 0x33CA3Cu;
            goto label_33ca3c;
        }
    }
    ctx->pc = 0x33C9DCu;
    // 0x33c9dc: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x33c9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x33c9e0: 0x4600016  bltz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x33C9E0u;
    {
        const bool branch_taken_0x33c9e0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x33C9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C9E0u;
        // 0x33c9e4: 0x420c0  sll         $a0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c9e0) {
            ctx->pc = 0x33CA3Cu;
            goto label_33ca3c;
        }
    }
    ctx->pc = 0x33C9E8u;
    // 0x33c9e8: 0x8d82000c  lw          $v0, 0xC($t4)
    ctx->pc = 0x33c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x33c9ec: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x33c9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x33c9f0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x33c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x33c9f4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x33c9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33c9f8: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x33c9f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x33c9fc: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x33c9fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x33ca00: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x33ca00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33ca04: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x33ca04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33ca08: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x33ca08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33ca0c: 0x8d820010  lw          $v0, 0x10($t4)
    ctx->pc = 0x33ca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x33ca10: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x33ca10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x33ca14: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x33ca14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x33ca18: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x33ca18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33ca1c: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x33ca1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x33ca20: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x33ca20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x33ca24: 0xb0a2000f  sdl         $v0, 0xF($a1)
    ctx->pc = 0x33ca24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33ca28: 0xb4a20008  sdr         $v0, 0x8($a1)
    ctx->pc = 0x33ca28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33ca2c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x33ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33ca30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33ca34: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x33ca34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_33ca38:
    // 0x33ca38: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x33ca38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_33ca3c:
    // 0x33ca3c: 0x10e4021  addu        $t0, $t0, $t6
    ctx->pc = 0x33ca3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x33ca40: 0xee3821  addu        $a3, $a3, $t6
    ctx->pc = 0x33ca40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 14)));
    // 0x33ca44: 0x1c40ff6a  bgtz        $v0, . + 4 + (-0x96 << 2)
    ctx->pc = 0x33CA44u;
    {
        const bool branch_taken_0x33ca44 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x33CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CA44u;
        // 0x33ca48: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ca44) {
            ctx->pc = 0x33C7F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c7f0;
        }
    }
    ctx->pc = 0x33CA4Cu;
label_33ca4c:
    // 0x33ca4c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x33ca4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ca50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x33ca50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33ca54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33ca54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33ca58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33ca58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ca5c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x33ca5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x33ca60: 0x3e00008  jr          $ra
    ctx->pc = 0x33CA60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CA60u;
        // 0x33ca64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CA60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CA68u;
}
