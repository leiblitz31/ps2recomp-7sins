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

// Function: sub_00356990
// Address: 0x356990 - 0x356c00
void sub_00356990_0x356990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356990_0x356990");
#endif

    switch (ctx->pc) {
        case 0x3569dcu: goto label_3569dc;
        case 0x356a78u: goto label_356a78;
        case 0x356a84u: goto label_356a84;
        case 0x356b50u: goto label_356b50;
        case 0x356b58u: goto label_356b58;
        default: break;
    }

    ctx->pc = 0x356990u;

    // 0x356990: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x356990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x356994: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x356994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x356998: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x356998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x35699c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x35699cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x3569a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3569a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3569a4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3569a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x3569a8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3569a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3569ac: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3569acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3569b0: 0x26120030  addiu       $s2, $s0, 0x30
    ctx->pc = 0x3569b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3569b4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3569b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x3569b8: 0x2613003c  addiu       $s3, $s0, 0x3C
    ctx->pc = 0x3569b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x3569bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3569bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3569c0: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x3569c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3569c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3569c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3569c8: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x3569c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x3569cc: 0x8c43e880  lw          $v1, -0x1780($v0)
    ctx->pc = 0x3569ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61E880u));
    // 0x3569d0: 0x8e34004c  lw          $s4, 0x4C($s1)
    ctx->pc = 0x3569d0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x3569d4: 0xc106784  jal         func_419E10
    ctx->pc = 0x3569D4u;
    SET_GPR_U32(ctx, 31, 0x3569DCu);
    ctx->pc = 0x3569D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3569D4u;
    // 0x3569d8: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x3569D4u, 0x3569DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3569DCu;
label_3569dc:
    // 0x3569dc: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x3569dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x3569e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3569e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3569e4: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x3569e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x3569e8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3569E8u;
    {
        const bool branch_taken_0x3569e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3569ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3569E8u;
        // 0x3569ec: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3569e8) {
            ctx->pc = 0x356A28u;
            goto label_356a28;
        }
    }
    ctx->pc = 0x3569F0u;
    // 0x3569f0: 0x6a2200b7  ldl         $v0, 0xB7($s1)
    ctx->pc = 0x3569f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3569f4: 0x6e2200b0  ldr         $v0, 0xB0($s1)
    ctx->pc = 0x3569f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3569f8: 0x8e2300b8  lw          $v1, 0xB8($s1)
    ctx->pc = 0x3569f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x3569fc: 0xb2020037  sdl         $v0, 0x37($s0)
    ctx->pc = 0x3569fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x356a00: 0xb6020030  sdr         $v0, 0x30($s0)
    ctx->pc = 0x356a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x356a04: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x356a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x356a08: 0x6a2200c7  ldl         $v0, 0xC7($s1)
    ctx->pc = 0x356a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x356a0c: 0x6e2200c0  ldr         $v0, 0xC0($s1)
    ctx->pc = 0x356a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x356a10: 0x8e2300c8  lw          $v1, 0xC8($s1)
    ctx->pc = 0x356a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x356a14: 0xb2020043  sdl         $v0, 0x43($s0)
    ctx->pc = 0x356a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x356a18: 0xb602003c  sdr         $v0, 0x3C($s0)
    ctx->pc = 0x356a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x356a1c: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x356a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x356a20: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x356A20u;
    {
        const bool branch_taken_0x356a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356A20u;
        // 0x356a24: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356a20) {
            ctx->pc = 0x356B3Cu;
            goto label_356b3c;
        }
    }
    ctx->pc = 0x356A28u;
label_356a28:
    // 0x356a28: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x356a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x356a2c: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x356A2Cu;
    {
        const bool branch_taken_0x356a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356a2c) {
            ctx->pc = 0x356A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356A2Cu;
            // 0x356a30: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x356B00u;
            goto label_356b00;
        }
    }
    ctx->pc = 0x356A34u;
    // 0x356a34: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x356a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x356a38: 0xc62c0078  lwc1        $f12, 0x78($s1)
    ctx->pc = 0x356a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x356a3c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x356a3cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x356a40: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x356a40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x356a44: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x356a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x356a48: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x356a48u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x356a4c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x356a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x356a50: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x356a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x356a54: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x356a54u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x356a58: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x356a58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x356a5c: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x356a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x356a60: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x356a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x356a64: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x356a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x356a68: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x356a68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x356a6c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x356a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x356a70: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x356A70u;
    SET_GPR_U32(ctx, 31, 0x356A78u);
    ctx->pc = 0x356A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356A70u;
    // 0x356a74: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x356A70u, 0x356A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356A78u;
label_356a78:
    // 0x356a78: 0xc62c0078  lwc1        $f12, 0x78($s1)
    ctx->pc = 0x356a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x356a7c: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x356A7Cu;
    SET_GPR_U32(ctx, 31, 0x356A84u);
    ctx->pc = 0x356A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356A7Cu;
    // 0x356a80: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x356A7Cu, 0x356A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356A84u;
label_356a84:
    // 0x356a84: 0x4600a107  neg.s       $f4, $f20
    ctx->pc = 0x356a84u;
    ctx->f[4] = FPU_NEG_S(ctx->f[20]);
    // 0x356a88: 0xc7a50000  lwc1        $f5, 0x0($sp)
    ctx->pc = 0x356a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x356a8c: 0xc7a80010  lwc1        $f8, 0x10($sp)
    ctx->pc = 0x356a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x356a90: 0xc7ab0014  lwc1        $f11, 0x14($sp)
    ctx->pc = 0x356a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x356a94: 0x460500c2  mul.s       $f3, $f0, $f5
    ctx->pc = 0x356a94u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x356a98: 0xc7aa0004  lwc1        $f10, 0x4($sp)
    ctx->pc = 0x356a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x356a9c: 0x46082242  mul.s       $f9, $f4, $f8
    ctx->pc = 0x356a9cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x356aa0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x356aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x356aa4: 0x460b2302  mul.s       $f12, $f4, $f11
    ctx->pc = 0x356aa4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[11]);
    // 0x356aa8: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x356aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x356aac: 0x460a01c2  mul.s       $f7, $f0, $f10
    ctx->pc = 0x356aacu;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x356ab0: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x356ab0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x356ab4: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x356ab4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x356ab8: 0x4605a142  mul.s       $f5, $f20, $f5
    ctx->pc = 0x356ab8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[20], ctx->f[5]);
    // 0x356abc: 0x46080202  mul.s       $f8, $f0, $f8
    ctx->pc = 0x356abcu;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x356ac0: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x356ac0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x356ac4: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x356ac4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x356ac8: 0x460918c0  add.s       $f3, $f3, $f9
    ctx->pc = 0x356ac8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
    // 0x356acc: 0x460aa502  mul.s       $f20, $f20, $f10
    ctx->pc = 0x356accu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[10]);
    // 0x356ad0: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x356ad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x356ad4: 0x460c39c0  add.s       $f7, $f7, $f12
    ctx->pc = 0x356ad4u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[12]);
    // 0x356ad8: 0xe6030030  swc1        $f3, 0x30($s0)
    ctx->pc = 0x356ad8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x356adc: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x356adcu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x356ae0: 0x46082940  add.s       $f5, $f5, $f8
    ctx->pc = 0x356ae0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[8]);
    // 0x356ae4: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x356ae4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x356ae8: 0xe6470004  swc1        $f7, 0x4($s2)
    ctx->pc = 0x356ae8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x356aec: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x356aecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x356af0: 0xe6460008  swc1        $f6, 0x8($s2)
    ctx->pc = 0x356af0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x356af4: 0xe605003c  swc1        $f5, 0x3C($s0)
    ctx->pc = 0x356af4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x356af8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x356AF8u;
    {
        const bool branch_taken_0x356af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356AF8u;
        // 0x356afc: 0xe6740004  swc1        $f20, 0x4($s3) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x356af8) {
            ctx->pc = 0x356B34u;
            goto label_356b34;
        }
    }
    ctx->pc = 0x356B00u;
label_356b00:
    // 0x356b00: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x356b00u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x356b04: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x356b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x356b08: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x356b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x356b0c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x356b0cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x356b10: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x356b10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x356b14: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x356b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x356b18: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x356b18u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x356b1c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x356b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x356b20: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x356b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x356b24: 0xe601003c  swc1        $f1, 0x3C($s0)
    ctx->pc = 0x356b24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x356b28: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x356b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x356b2c: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x356b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x356b30: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x356b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_356b34:
    // 0x356b34: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x356b34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x356b38: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x356b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_356b3c:
    // 0x356b3c: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x356b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x356b40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x356B40u;
    {
        const bool branch_taken_0x356b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x356B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356B40u;
        // 0x356b44: 0x8e9200e4  lw          $s2, 0xE4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356b40) {
            ctx->pc = 0x356B50u;
            goto label_356b50;
        }
    }
    ctx->pc = 0x356B48u;
    // 0x356b48: 0xc0d4426  jal         func_351098
    ctx->pc = 0x356B48u;
    SET_GPR_U32(ctx, 31, 0x356B50u);
    ctx->pc = 0x356B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356B48u;
    // 0x356b4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351098u, 0x356B48u, 0x356B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356B50u;
label_356b50:
    // 0x356b50: 0xc10a450  jal         func_429140
    ctx->pc = 0x356B50u;
    SET_GPR_U32(ctx, 31, 0x356B58u);
    ctx->pc = 0x429140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429140u, 0x356B50u, 0x356B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356B58u;
label_356b58:
    // 0x356b58: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x356b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x356b5c: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x356b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x356b60: 0x2444818  mult        $t1, $s2, $a0
    ctx->pc = 0x356b60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x356b64: 0x3c02ffe7  lui         $v0, 0xFFE7
    ctx->pc = 0x356b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65511 << 16));
    // 0x356b68: 0x3463dfbd  ori         $v1, $v1, 0xDFBD
    ctx->pc = 0x356b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57277);
    // 0x356b6c: 0x3442fe7f  ori         $v0, $v0, 0xFE7F
    ctx->pc = 0x356b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65151);
    // 0x356b70: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x356b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x356b74: 0x2a31824  and         $v1, $s5, $v1
    ctx->pc = 0x356b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & GPR_U64(ctx, 3));
    // 0x356b78: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x356b78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x356b7c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x356b7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x356b80: 0x2892021  addu        $a0, $s4, $t1
    ctx->pc = 0x356b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
    // 0x356b84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x356b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356b88: 0x8c860140  lw          $a2, 0x140($a0)
    ctx->pc = 0x356b88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x356b8c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x356b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x356b90: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x356b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x356b94: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x356b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x356b98: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x356b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x356b9c: 0xae070014  sw          $a3, 0x14($s0)
    ctx->pc = 0x356b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 7));
    // 0x356ba0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x356BA0u;
    {
        const bool branch_taken_0x356ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x356BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356BA0u;
        // 0x356ba4: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356ba0) {
            ctx->pc = 0x356BBCu;
            goto label_356bbc;
        }
    }
    ctx->pc = 0x356BA8u;
    // 0x356ba8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x356ba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356bac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x356bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x356bb0: 0x8c440154  lw          $a0, 0x154($v0)
    ctx->pc = 0x356bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x356bb4: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x356bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x356bb8: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x356bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
label_356bbc:
    // 0x356bbc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x356bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x356bc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x356BC0u;
    {
        const bool branch_taken_0x356bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x356BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356BC0u;
        // 0x356bc4: 0x2891021  addu        $v0, $s4, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356bc0) {
            ctx->pc = 0x356BD8u;
            goto label_356bd8;
        }
    }
    ctx->pc = 0x356BC8u;
    // 0x356bc8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x356bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x356bcc: 0x8c440160  lw          $a0, 0x160($v0)
    ctx->pc = 0x356bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x356bd0: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x356bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x356bd4: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x356bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_356bd8:
    // 0x356bd8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x356bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x356bdc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x356bdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x356be0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x356be0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x356be4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x356be4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x356be8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x356be8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x356bec: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x356becu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x356bf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x356bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x356bf4: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x356bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x356bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x356BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356BF8u;
        // 0x356bfc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356C00u;
}
