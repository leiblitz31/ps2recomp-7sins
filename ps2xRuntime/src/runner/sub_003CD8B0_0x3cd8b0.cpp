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

// Function: sub_003CD8B0
// Address: 0x3cd8b0 - 0x3cda28
void sub_003CD8B0_0x3cd8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CD8B0_0x3cd8b0");
#endif

    switch (ctx->pc) {
        case 0x3cd8e4u: goto label_3cd8e4;
        case 0x3cd930u: goto label_3cd930;
        case 0x3cd9acu: goto label_3cd9ac;
        case 0x3cd9d8u: goto label_3cd9d8;
        default: break;
    }

    ctx->pc = 0x3cd8b0u;

    // 0x3cd8b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3cd8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3cd8b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3cd8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3cd8b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3cd8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3cd8bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3cd8bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd8c0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3cd8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3cd8c4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3cd8c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd8c8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x3cd8c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3cd8cc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3cd8ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd8d0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3cd8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3cd8d4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3cd8d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3cd8d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3cd8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3cd8dc: 0xc0f5314  jal         func_3D4C50
    ctx->pc = 0x3CD8DCu;
    SET_GPR_U32(ctx, 31, 0x3CD8E4u);
    ctx->pc = 0x3CD8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD8DCu;
    // 0x3cd8e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4C50u, 0x3CD8DCu, 0x3CD8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD8E4u;
label_3cd8e4:
    // 0x3cd8e4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3cd8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3cd8e8: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x3CD8E8u;
    {
        const bool branch_taken_0x3cd8e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CD8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD8E8u;
        // 0x3cd8ec: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd8e8) {
            ctx->pc = 0x3CDA08u;
            goto label_3cda08;
        }
    }
    ctx->pc = 0x3CD8F0u;
    // 0x3cd8f0: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x3cd8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3cd8f4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3cd8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x3cd8f8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3cd8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3cd8fc: 0x2451b298  addiu       $s1, $v0, -0x4D68
    ctx->pc = 0x3cd8fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947480));
    // 0x3cd900: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3cd900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3cd904: 0x96020080  lhu         $v0, 0x80($s0)
    ctx->pc = 0x3cd904u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x3cd908: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3cd908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3cd90c: 0x8e2600ac  lw          $a2, 0xAC($s1)
    ctx->pc = 0x3cd90cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x3cd910: 0x94640006  lhu         $a0, 0x6($v1)
    ctx->pc = 0x3cd910u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x3cd914: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x3cd914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3cd918: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3cd918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3cd91c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3cd91cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3cd920: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3cd920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3cd924: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3cd924u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3cd928: 0xc0f5392  jal         func_3D4E48
    ctx->pc = 0x3CD928u;
    SET_GPR_U32(ctx, 31, 0x3CD930u);
    ctx->pc = 0x3CD92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD928u;
    // 0x3cd92c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4E48u, 0x3CD928u, 0x3CD930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD930u;
label_3cd930:
    // 0x3cd930: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3cd930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3cd934: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3CD934u;
    {
        const bool branch_taken_0x3cd934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CD938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD934u;
        // 0x3cd938: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd934) {
            ctx->pc = 0x3CDA08u;
            goto label_3cda08;
        }
    }
    ctx->pc = 0x3CD93Cu;
    // 0x3cd93c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x3cd93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cd940: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3cd940u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cd944: 0x0  nop
    ctx->pc = 0x3cd944u;
    // NOP
    // 0x3cd948: 0x45020030  bc1fl       . + 4 + (0x30 << 2)
    ctx->pc = 0x3CD948u;
    {
        const bool branch_taken_0x3cd948 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cd948) {
            ctx->pc = 0x3CD94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CD948u;
            // 0x3cd94c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CDA0Cu;
            goto label_3cda0c;
        }
    }
    ctx->pc = 0x3CD950u;
    // 0x3cd950: 0xe6740000  swc1        $f20, 0x0($s3)
    ctx->pc = 0x3cd950u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x3cd954: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x3cd954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3cd958: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x3cd958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3cd95c: 0x6a43000f  ldl         $v1, 0xF($s2)
    ctx->pc = 0x3cd95cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3cd960: 0x6e430008  ldr         $v1, 0x8($s2)
    ctx->pc = 0x3cd960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3cd964: 0x6a450017  ldl         $a1, 0x17($s2)
    ctx->pc = 0x3cd964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3cd968: 0x6e450010  ldr         $a1, 0x10($s2)
    ctx->pc = 0x3cd968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3cd96c: 0x6a46001f  ldl         $a2, 0x1F($s2)
    ctx->pc = 0x3cd96cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3cd970: 0x6e460018  ldr         $a2, 0x18($s2)
    ctx->pc = 0x3cd970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3cd974: 0xb22200cb  sdl         $v0, 0xCB($s1)
    ctx->pc = 0x3cd974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 203); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cd978: 0xb62200c4  sdr         $v0, 0xC4($s1)
    ctx->pc = 0x3cd978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 196); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cd97c: 0xb22300d3  sdl         $v1, 0xD3($s1)
    ctx->pc = 0x3cd97cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 211); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cd980: 0xb62300cc  sdr         $v1, 0xCC($s1)
    ctx->pc = 0x3cd980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 204); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cd984: 0xb22500db  sdl         $a1, 0xDB($s1)
    ctx->pc = 0x3cd984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 219); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cd988: 0xb62500d4  sdr         $a1, 0xD4($s1)
    ctx->pc = 0x3cd988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 212); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cd98c: 0xb22600e3  sdl         $a2, 0xE3($s1)
    ctx->pc = 0x3cd98cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 227); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cd990: 0xb62600dc  sdr         $a2, 0xDC($s1)
    ctx->pc = 0x3cd990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 220); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cd994: 0x6a420027  ldl         $v0, 0x27($s2)
    ctx->pc = 0x3cd994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3cd998: 0x6e420020  ldr         $v0, 0x20($s2)
    ctx->pc = 0x3cd998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3cd99c: 0xb22200eb  sdl         $v0, 0xEB($s1)
    ctx->pc = 0x3cd99cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 235); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cd9a0: 0xb62200e4  sdr         $v0, 0xE4($s1)
    ctx->pc = 0x3cd9a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 228); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cd9a4: 0xc0f5392  jal         func_3D4E48
    ctx->pc = 0x3CD9A4u;
    SET_GPR_U32(ctx, 31, 0x3CD9ACu);
    ctx->pc = 0x3CD9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD9A4u;
    // 0x3cd9a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4E48u, 0x3CD9A4u, 0x3CD9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD9ACu;
label_3cd9ac:
    // 0x3cd9ac: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x3cd9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x3cd9b0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3cd9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x3cd9b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3cd9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cd9b8: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x3cd9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x3cd9bc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3cd9bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3cd9c0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CD9C0u;
    {
        const bool branch_taken_0x3cd9c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CD9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD9C0u;
        // 0x3cd9c4: 0xae2400ec  sw          $a0, 0xEC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd9c0) {
            ctx->pc = 0x3CD9D0u;
            goto label_3cd9d0;
        }
    }
    ctx->pc = 0x3CD9C8u;
    // 0x3cd9c8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3CD9C8u;
    {
        const bool branch_taken_0x3cd9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD9C8u;
        // 0x3cd9cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd9c8) {
            ctx->pc = 0x3CDA08u;
            goto label_3cda08;
        }
    }
    ctx->pc = 0x3CD9D0u;
label_3cd9d0:
    // 0x3cd9d0: 0xc0f5392  jal         func_3D4E48
    ctx->pc = 0x3CD9D0u;
    SET_GPR_U32(ctx, 31, 0x3CD9D8u);
    ctx->pc = 0x3CD9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD9D0u;
    // 0x3cd9d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4E48u, 0x3CD9D0u, 0x3CD9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD9D8u;
label_3cd9d8:
    // 0x3cd9d8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3cd9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x3cd9dc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CD9DCu;
    {
        const bool branch_taken_0x3cd9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd9dc) {
            ctx->pc = 0x3CD9E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CD9DCu;
            // 0x3cd9e0: 0x8e2300a0  lw          $v1, 0xA0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CD9F4u;
            goto label_3cd9f4;
        }
    }
    ctx->pc = 0x3CD9E4u;
    // 0x3cd9e4: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x3cd9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x3cd9e8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3cd9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3cd9ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3CD9ECu;
    {
        const bool branch_taken_0x3cd9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD9ECu;
        // 0x3cd9f0: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd9ec) {
            ctx->pc = 0x3CDA04u;
            goto label_3cda04;
        }
    }
    ctx->pc = 0x3CD9F4u;
label_3cd9f4:
    // 0x3cd9f4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3cd9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3cd9f8: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x3cd9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x3cd9fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3cd9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3cda00: 0xae2300a0  sw          $v1, 0xA0($s1)
    ctx->pc = 0x3cda00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
label_3cda04:
    // 0x3cda04: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3cda04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cda08:
    // 0x3cda08: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3cda08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3cda0c:
    // 0x3cda0c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3cda0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3cda10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3cda10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cda14: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3cda14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cda18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3cda18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cda1c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x3cda1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3cda20: 0x3e00008  jr          $ra
    ctx->pc = 0x3CDA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CDA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDA20u;
        // 0x3cda24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CDA20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CDA28u;
}
