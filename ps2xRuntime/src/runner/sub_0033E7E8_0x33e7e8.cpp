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

// Function: sub_0033E7E8
// Address: 0x33e7e8 - 0x33e938
void sub_0033E7E8_0x33e7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033E7E8_0x33e7e8");
#endif

    switch (ctx->pc) {
        case 0x33e80cu: goto label_33e80c;
        case 0x33e858u: goto label_33e858;
        default: break;
    }

    ctx->pc = 0x33e7e8u;

    // 0x33e7e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33e7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33e7ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x33e7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x33e7f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33e7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33e7f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33e7f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e7f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33e7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33e7fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33e7fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e800: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x33e800u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x33e804: 0xc0cead0  jal         func_33AB40
    ctx->pc = 0x33E804u;
    SET_GPR_U32(ctx, 31, 0x33E80Cu);
    ctx->pc = 0x33E808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E804u;
    // 0x33e808: 0xc4d40000  lwc1        $f20, 0x0($a2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AB40u, 0x33E804u, 0x33E80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E80Cu;
label_33e80c:
    // 0x33e80c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x33e80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33e810: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x33e810u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x33e814: 0x2502c210  addiu       $v0, $t0, -0x3DF0
    ctx->pc = 0x33e814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951440));
    // 0x33e818: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x33e818u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x33e81c: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x33e81cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61C250u));
    // 0x33e820: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x33e820u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e824: 0x8c6b000c  lw          $t3, 0xC($v1)
    ctx->pc = 0x33e824u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x33e828: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x33e828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e82c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x33e82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x33e830: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x33e830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x33e834: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x33e834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x33e838: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x33e838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x33e83c: 0x202500a  movz        $t2, $s0, $v0
    ctx->pc = 0x33e83cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 16));
    // 0x33e840: 0x18a00036  blez        $a1, . + 4 + (0x36 << 2)
    ctx->pc = 0x33E840u;
    {
        const bool branch_taken_0x33e840 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x33E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E840u;
        // 0x33e844: 0x2233821  addu        $a3, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e840) {
            ctx->pc = 0x33E91Cu;
            goto label_33e91c;
        }
    }
    ctx->pc = 0x33E848u;
    // 0x33e848: 0x100602d  daddu       $t4, $t0, $zero
    ctx->pc = 0x33e848u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e84c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x33e84cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e850: 0x24e80008  addiu       $t0, $a3, 0x8
    ctx->pc = 0x33e850u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x33e854: 0x0  nop
    ctx->pc = 0x33e854u;
    // NOP
label_33e858:
    // 0x33e858: 0xc501fffc  lwc1        $f1, -0x4($t0)
    ctx->pc = 0x33e858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33e85c: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x33e85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33e860: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33e860u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33e864: 0x0  nop
    ctx->pc = 0x33e864u;
    // NOP
    // 0x33e868: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x33E868u;
    {
        const bool branch_taken_0x33e868 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E868u;
        // 0x33e86c: 0x2583c210  addiu       $v1, $t4, -0x3DF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 4294951440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e868) {
            ctx->pc = 0x33E908u;
            goto label_33e908;
        }
    }
    ctx->pc = 0x33E870u;
    // 0x33e870: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x33e870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x33e874: 0x4400024  bltz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x33E874u;
    {
        const bool branch_taken_0x33e874 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33E878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E874u;
        // 0x33e878: 0x46140840  add.s       $f1, $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e874) {
            ctx->pc = 0x33E908u;
            goto label_33e908;
        }
    }
    ctx->pc = 0x33E87Cu;
    // 0x33e87c: 0xe23021  addu        $a2, $a3, $v0
    ctx->pc = 0x33e87cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x33e880: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x33e880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x33e884: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x33e884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33e888: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x33e888u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33e88c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x33E88Cu;
    {
        const bool branch_taken_0x33e88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E88Cu;
        // 0x33e890: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e88c) {
            ctx->pc = 0x33E908u;
            goto label_33e908;
        }
    }
    ctx->pc = 0x33E894u;
    // 0x33e894: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x33e894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x33e898: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x33e898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33e89c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33e89cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33e8a0: 0x0  nop
    ctx->pc = 0x33e8a0u;
    // NOP
    // 0x33e8a4: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x33E8A4u;
    {
        const bool branch_taken_0x33e8a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33E8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E8A4u;
        // 0x33e8a8: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e8a4) {
            ctx->pc = 0x33E90Cu;
            goto label_33e90c;
        }
    }
    ctx->pc = 0x33E8ACu;
    // 0x33e8ac: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x33e8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x33e8b0: 0x4600016  bltz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x33E8B0u;
    {
        const bool branch_taken_0x33e8b0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x33E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E8B0u;
        // 0x33e8b4: 0x420c0  sll         $a0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e8b0) {
            ctx->pc = 0x33E90Cu;
            goto label_33e90c;
        }
    }
    ctx->pc = 0x33E8B8u;
    // 0x33e8b8: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x33e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x33e8bc: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x33e8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x33e8c0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x33e8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x33e8c4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x33e8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33e8c8: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x33e8c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x33e8cc: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x33e8ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x33e8d0: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x33e8d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33e8d4: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x33e8d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33e8d8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x33e8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33e8dc: 0x8d420014  lw          $v0, 0x14($t2)
    ctx->pc = 0x33e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x33e8e0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x33e8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x33e8e4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x33e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x33e8e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x33e8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33e8ec: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x33e8ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x33e8f0: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x33e8f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x33e8f4: 0xb0a2000f  sdl         $v0, 0xF($a1)
    ctx->pc = 0x33e8f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33e8f8: 0xb4a20008  sdr         $v0, 0x8($a1)
    ctx->pc = 0x33e8f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33e8fc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x33e8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33e900: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33e900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33e904: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x33e904u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_33e908:
    // 0x33e908: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x33e908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_33e90c:
    // 0x33e90c: 0x10b4021  addu        $t0, $t0, $t3
    ctx->pc = 0x33e90cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x33e910: 0xeb3821  addu        $a3, $a3, $t3
    ctx->pc = 0x33e910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x33e914: 0x1c40ffd0  bgtz        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x33E914u;
    {
        const bool branch_taken_0x33e914 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x33E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E914u;
        // 0x33e918: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e914) {
            ctx->pc = 0x33E858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33e858;
        }
    }
    ctx->pc = 0x33E91Cu;
label_33e91c:
    // 0x33e91c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x33e91cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e920: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x33e920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33e924: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33e924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33e928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33e928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33e92c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x33e92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x33e930: 0x3e00008  jr          $ra
    ctx->pc = 0x33E930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E930u;
        // 0x33e934: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E938u;
}
