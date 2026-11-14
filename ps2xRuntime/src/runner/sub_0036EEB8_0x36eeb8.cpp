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

// Function: sub_0036EEB8
// Address: 0x36eeb8 - 0x36f4d8
void sub_0036EEB8_0x36eeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036EEB8_0x36eeb8");
#endif

    switch (ctx->pc) {
        case 0x36ef54u: goto label_36ef54;
        case 0x36f0e0u: goto label_36f0e0;
        case 0x36f288u: goto label_36f288;
        case 0x36f320u: goto label_36f320;
        case 0x36f32cu: goto label_36f32c;
        case 0x36f430u: goto label_36f430;
        case 0x36f450u: goto label_36f450;
        case 0x36f474u: goto label_36f474;
        case 0x36f498u: goto label_36f498;
        default: break;
    }

    ctx->pc = 0x36eeb8u;

    // 0x36eeb8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x36eeb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x36eebc: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x36eebcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36eec0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x36eec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x36eec4: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x36eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x36eec8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x36eec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x36eecc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36eeccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36eed0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x36eed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x36eed4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x36eed4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36eed8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x36eed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x36eedc: 0x26340030  addiu       $s4, $s1, 0x30
    ctx->pc = 0x36eedcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x36eee0: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x36eee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x36eee4: 0x2635003c  addiu       $s5, $s1, 0x3C
    ctx->pc = 0x36eee4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x36eee8: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x36eee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x36eeec: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x36eeecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36eef0: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x36eef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x36eef4: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x36eef4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36eef8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x36eef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x36eefc: 0x3c21024  and         $v0, $fp, $v0
    ctx->pc = 0x36eefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & GPR_U64(ctx, 2));
    // 0x36ef00: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x36ef00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x36ef04: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x36ef04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x36ef08: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x36ef08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x36ef0c: 0x104000da  beqz        $v0, . + 4 + (0xDA << 2)
    ctx->pc = 0x36EF0Cu;
    {
        const bool branch_taken_0x36ef0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EF0Cu;
        // 0x36ef10: 0x8d360018  lw          $s6, 0x18($t1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ef0c) {
            ctx->pc = 0x36F278u;
            goto label_36f278;
        }
    }
    ctx->pc = 0x36EF14u;
    // 0x36ef14: 0x8f83a858  lw          $v1, -0x57A8($gp)
    ctx->pc = 0x36ef14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
    // 0x36ef18: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x36ef18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x36ef1c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x36ef1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ef20: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36ef20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36ef24: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x36ef24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x36ef28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36ef2c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x36ef2cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36ef30: 0x24c8b9e0  addiu       $t0, $a2, -0x4620
    ctx->pc = 0x36ef30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949344));
    // 0x36ef34: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x36ef34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x36ef38: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x36ef38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x36ef3c: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x36ef3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5FB9E8u));
    // 0x36ef40: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x36ef40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36ef44: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x36ef44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36ef48: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x36ef48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x36ef4c: 0xc0e33ee  jal         func_38CFB8
    ctx->pc = 0x36EF4Cu;
    SET_GPR_U32(ctx, 31, 0x36EF54u);
    ctx->pc = 0x36EF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EF4Cu;
    // 0x36ef50: 0x8ed0005c  lw          $s0, 0x5C($s6) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CFB8u, 0x36EF4Cu, 0x36EF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EF54u;
label_36ef54:
    // 0x36ef54: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x36ef54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ef58: 0xf2102a  slt         $v0, $a3, $s2
    ctx->pc = 0x36ef58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x36ef5c: 0x104000c6  beqz        $v0, . + 4 + (0xC6 << 2)
    ctx->pc = 0x36EF5Cu;
    {
        const bool branch_taken_0x36ef5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EF5Cu;
        // 0x36ef60: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ef5c) {
            ctx->pc = 0x36F278u;
            goto label_36f278;
        }
    }
    ctx->pc = 0x36EF64u;
    // 0x36ef64: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x36ef64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x36ef68: 0xe22018  mult        $a0, $a3, $v0
    ctx->pc = 0x36ef68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x36ef6c: 0x2473823  subu        $a3, $s2, $a3
    ctx->pc = 0x36ef6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x36ef70: 0x71023  negu        $v0, $a3
    ctx->pc = 0x36ef70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x36ef74: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x36ef74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x36ef78: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x36ef78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x36ef7c: 0x10800055  beqz        $a0, . + 4 + (0x55 << 2)
    ctx->pc = 0x36EF7Cu;
    {
        const bool branch_taken_0x36ef7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EF7Cu;
        // 0x36ef80: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ef7c) {
            ctx->pc = 0x36F0D4u;
            goto label_36f0d4;
        }
    }
    ctx->pc = 0x36EF84u;
    // 0x36ef84: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x36ef84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36ef88: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x36EF88u;
    {
        const bool branch_taken_0x36ef88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EF88u;
        // 0x36ef8c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ef88) {
            ctx->pc = 0x36F068u;
            goto label_36f068;
        }
    }
    ctx->pc = 0x36EF90u;
    // 0x36ef90: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x36EF90u;
    {
        const bool branch_taken_0x36ef90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ef90) {
            ctx->pc = 0x36F000u;
            goto label_36f000;
        }
    }
    ctx->pc = 0x36EF98u;
    // 0x36ef98: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x36ef98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x36ef9c: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x36ef9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x36efa0: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x36efa0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36efa4: 0xb0a60007  sdl         $a2, 0x7($a1)
    ctx->pc = 0x36efa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36efa8: 0xb4a60000  sdr         $a2, 0x0($a1)
    ctx->pc = 0x36efa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36efac: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x36efacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x36efb0: 0xaca80008  sw          $t0, 0x8($a1)
    ctx->pc = 0x36efb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
    // 0x36efb4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x36efb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x36efb8: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x36efb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x36efbc: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x36efbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x36efc0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x36efc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36efc4: 0xb0a20013  sdl         $v0, 0x13($a1)
    ctx->pc = 0x36efc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36efc8: 0xb4a2000c  sdr         $v0, 0xC($a1)
    ctx->pc = 0x36efc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36efcc: 0xaca40014  sw          $a0, 0x14($a1)
    ctx->pc = 0x36efccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
    // 0x36efd0: 0x6ba90007  ldl         $t1, 0x7($sp)
    ctx->pc = 0x36efd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x36efd4: 0x6fa90000  ldr         $t1, 0x0($sp)
    ctx->pc = 0x36efd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x36efd8: 0x8faa0008  lw          $t2, 0x8($sp)
    ctx->pc = 0x36efd8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36efdc: 0xb0a9001f  sdl         $t1, 0x1F($a1)
    ctx->pc = 0x36efdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36efe0: 0xb4a90018  sdr         $t1, 0x18($a1)
    ctx->pc = 0x36efe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36efe4: 0xacaa0020  sw          $t2, 0x20($a1)
    ctx->pc = 0x36efe4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 10));
    // 0x36efe8: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x36efe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x36efec: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x36efecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x36eff0: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x36eff0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36eff4: 0xb0a6002b  sdl         $a2, 0x2B($a1)
    ctx->pc = 0x36eff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36eff8: 0xb4a60024  sdr         $a2, 0x24($a1)
    ctx->pc = 0x36eff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36effc: 0xaca8002c  sw          $t0, 0x2C($a1)
    ctx->pc = 0x36effcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 8));
label_36f000:
    // 0x36f000: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x36f000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x36f004: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x36f004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x36f008: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x36f008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f00c: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x36f00cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f010: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x36f010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f014: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x36f014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x36f018: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x36f018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x36f01c: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x36f01cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x36f020: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x36f020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x36f024: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x36f024u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f028: 0xb0680013  sdl         $t0, 0x13($v1)
    ctx->pc = 0x36f028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f02c: 0xb468000c  sdr         $t0, 0xC($v1)
    ctx->pc = 0x36f02cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f030: 0xac690014  sw          $t1, 0x14($v1)
    ctx->pc = 0x36f030u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 9));
    // 0x36f034: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x36f034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x36f038: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x36f038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x36f03c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x36f03cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f040: 0xb064001f  sdl         $a0, 0x1F($v1)
    ctx->pc = 0x36f040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f044: 0xb4640018  sdr         $a0, 0x18($v1)
    ctx->pc = 0x36f044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f048: 0xac650020  sw          $a1, 0x20($v1)
    ctx->pc = 0x36f048u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
    // 0x36f04c: 0x6ba90007  ldl         $t1, 0x7($sp)
    ctx->pc = 0x36f04cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x36f050: 0x6fa90000  ldr         $t1, 0x0($sp)
    ctx->pc = 0x36f050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x36f054: 0x8faa0008  lw          $t2, 0x8($sp)
    ctx->pc = 0x36f054u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f058: 0xb069002b  sdl         $t1, 0x2B($v1)
    ctx->pc = 0x36f058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f05c: 0xb4690024  sdr         $t1, 0x24($v1)
    ctx->pc = 0x36f05cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f060: 0xac6a002c  sw          $t2, 0x2C($v1)
    ctx->pc = 0x36f060u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 10));
    // 0x36f064: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x36f064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_36f068:
    // 0x36f068: 0x6ba50007  ldl         $a1, 0x7($sp)
    ctx->pc = 0x36f068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x36f06c: 0x6fa50000  ldr         $a1, 0x0($sp)
    ctx->pc = 0x36f06cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x36f070: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x36f070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f074: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x36f074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f078: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x36f078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f07c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x36f07cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x36f080: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x36f080u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x36f084: 0x6baa0007  ldl         $t2, 0x7($sp)
    ctx->pc = 0x36f084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x36f088: 0x6faa0000  ldr         $t2, 0x0($sp)
    ctx->pc = 0x36f088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x36f08c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x36f08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f090: 0xb06a0013  sdl         $t2, 0x13($v1)
    ctx->pc = 0x36f090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f094: 0xb46a000c  sdr         $t2, 0xC($v1)
    ctx->pc = 0x36f094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f098: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x36f098u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x36f09c: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x36f09cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x36f0a0: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x36f0a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x36f0a4: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x36f0a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f0a8: 0xb066001f  sdl         $a2, 0x1F($v1)
    ctx->pc = 0x36f0a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f0ac: 0xb4660018  sdr         $a2, 0x18($v1)
    ctx->pc = 0x36f0acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f0b0: 0xac680020  sw          $t0, 0x20($v1)
    ctx->pc = 0x36f0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 8));
    // 0x36f0b4: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x36f0b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x36f0b8: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x36f0b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x36f0bc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x36f0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f0c0: 0xb062002b  sdl         $v0, 0x2B($v1)
    ctx->pc = 0x36f0c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f0c4: 0xb4620024  sdr         $v0, 0x24($v1)
    ctx->pc = 0x36f0c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f0c8: 0xac64002c  sw          $a0, 0x2C($v1)
    ctx->pc = 0x36f0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 4));
    // 0x36f0cc: 0x10e0006a  beqz        $a3, . + 4 + (0x6A << 2)
    ctx->pc = 0x36F0CCu;
    {
        const bool branch_taken_0x36f0cc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F0CCu;
        // 0x36f0d0: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f0cc) {
            ctx->pc = 0x36F278u;
            goto label_36f278;
        }
    }
    ctx->pc = 0x36F0D4u;
label_36f0d4:
    // 0x36f0d4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x36f0d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f0d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36f0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f0dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x36f0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36f0e0:
    // 0x36f0e0: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x36f0e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x36f0e4: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x36f0e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x36f0e8: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x36f0e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f0ec: 0xb0680007  sdl         $t0, 0x7($v1)
    ctx->pc = 0x36f0ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f0f0: 0xb4680000  sdr         $t0, 0x0($v1)
    ctx->pc = 0x36f0f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f0f4: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x36f0f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x36f0f8: 0xac690008  sw          $t1, 0x8($v1)
    ctx->pc = 0x36f0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 9));
    // 0x36f0fc: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x36f0fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x36f100: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x36f100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x36f104: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x36f104u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f108: 0xb0880013  sdl         $t0, 0x13($a0)
    ctx->pc = 0x36f108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f10c: 0xb488000c  sdr         $t0, 0xC($a0)
    ctx->pc = 0x36f10cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f110: 0xac890014  sw          $t1, 0x14($a0)
    ctx->pc = 0x36f110u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 9));
    // 0x36f114: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x36f114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x36f118: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x36f118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x36f11c: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x36f11cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f120: 0xb0a8001f  sdl         $t0, 0x1F($a1)
    ctx->pc = 0x36f120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f124: 0xb4a80018  sdr         $t0, 0x18($a1)
    ctx->pc = 0x36f124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f128: 0xaca90020  sw          $t1, 0x20($a1)
    ctx->pc = 0x36f128u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 9));
    // 0x36f12c: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x36f12cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x36f130: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x36f130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x36f134: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x36f134u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f138: 0xb048002b  sdl         $t0, 0x2B($v0)
    ctx->pc = 0x36f138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f13c: 0xb4480024  sdr         $t0, 0x24($v0)
    ctx->pc = 0x36f13cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f140: 0xac49002c  sw          $t1, 0x2C($v0)
    ctx->pc = 0x36f140u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 9));
    // 0x36f144: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x36f144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x36f148: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x36f148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x36f14c: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x36f14cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f150: 0xb0680037  sdl         $t0, 0x37($v1)
    ctx->pc = 0x36f150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f154: 0xb4680030  sdr         $t0, 0x30($v1)
    ctx->pc = 0x36f154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f158: 0xac690038  sw          $t1, 0x38($v1)
    ctx->pc = 0x36f158u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 9));
    // 0x36f15c: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x36f15cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x36f160: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x36f160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x36f164: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x36f164u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f168: 0xb0880043  sdl         $t0, 0x43($a0)
    ctx->pc = 0x36f168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f16c: 0xb488003c  sdr         $t0, 0x3C($a0)
    ctx->pc = 0x36f16cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f170: 0xac890044  sw          $t1, 0x44($a0)
    ctx->pc = 0x36f170u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 9));
    // 0x36f174: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x36f174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x36f178: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x36f178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x36f17c: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x36f17cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f180: 0xb0a8004f  sdl         $t0, 0x4F($a1)
    ctx->pc = 0x36f180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f184: 0xb4a80048  sdr         $t0, 0x48($a1)
    ctx->pc = 0x36f184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f188: 0xaca90050  sw          $t1, 0x50($a1)
    ctx->pc = 0x36f188u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 9));
    // 0x36f18c: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x36f18cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x36f190: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x36f190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x36f194: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x36f194u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f198: 0xb048005b  sdl         $t0, 0x5B($v0)
    ctx->pc = 0x36f198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f19c: 0xb4480054  sdr         $t0, 0x54($v0)
    ctx->pc = 0x36f19cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f1a0: 0xac49005c  sw          $t1, 0x5C($v0)
    ctx->pc = 0x36f1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 9));
    // 0x36f1a4: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x36f1a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x36f1a8: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x36f1a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x36f1ac: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x36f1acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f1b0: 0xb0680067  sdl         $t0, 0x67($v1)
    ctx->pc = 0x36f1b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f1b4: 0xb4680060  sdr         $t0, 0x60($v1)
    ctx->pc = 0x36f1b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f1b8: 0xac690068  sw          $t1, 0x68($v1)
    ctx->pc = 0x36f1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 9));
    // 0x36f1bc: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x36f1bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x36f1c0: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x36f1c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x36f1c4: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x36f1c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f1c8: 0xb0880073  sdl         $t0, 0x73($a0)
    ctx->pc = 0x36f1c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f1cc: 0xb488006c  sdr         $t0, 0x6C($a0)
    ctx->pc = 0x36f1ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f1d0: 0xac890074  sw          $t1, 0x74($a0)
    ctx->pc = 0x36f1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 9));
    // 0x36f1d4: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x36f1d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x36f1d8: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x36f1d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x36f1dc: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x36f1dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f1e0: 0xb0a8007f  sdl         $t0, 0x7F($a1)
    ctx->pc = 0x36f1e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f1e4: 0xb4a80078  sdr         $t0, 0x78($a1)
    ctx->pc = 0x36f1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f1e8: 0xaca90080  sw          $t1, 0x80($a1)
    ctx->pc = 0x36f1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 9));
    // 0x36f1ec: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x36f1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x36f1f0: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x36f1f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x36f1f4: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x36f1f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f1f8: 0xb048008b  sdl         $t0, 0x8B($v0)
    ctx->pc = 0x36f1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 139); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f1fc: 0xb4480084  sdr         $t0, 0x84($v0)
    ctx->pc = 0x36f1fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 132); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f200: 0xac49008c  sw          $t1, 0x8C($v0)
    ctx->pc = 0x36f200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 9));
    // 0x36f204: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x36f204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x36f208: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x36f208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x36f20c: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x36f20cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f210: 0xb0680097  sdl         $t0, 0x97($v1)
    ctx->pc = 0x36f210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f214: 0xb4680090  sdr         $t0, 0x90($v1)
    ctx->pc = 0x36f214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f218: 0xac690098  sw          $t1, 0x98($v1)
    ctx->pc = 0x36f218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 9));
    // 0x36f21c: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x36f21cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x36f220: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x36f220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x36f224: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x36f224u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f228: 0xb08800a3  sdl         $t0, 0xA3($a0)
    ctx->pc = 0x36f228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 163); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f22c: 0xb488009c  sdr         $t0, 0x9C($a0)
    ctx->pc = 0x36f22cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 156); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f230: 0xac8900a4  sw          $t1, 0xA4($a0)
    ctx->pc = 0x36f230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 9));
    // 0x36f234: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x36f234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x36f238: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x36f238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x36f23c: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x36f23cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x36f240: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x36f240u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f244: 0xb0a800af  sdl         $t0, 0xAF($a1)
    ctx->pc = 0x36f244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f248: 0xb4a800a8  sdr         $t0, 0xA8($a1)
    ctx->pc = 0x36f248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f24c: 0xaca900b0  sw          $t1, 0xB0($a1)
    ctx->pc = 0x36f24cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 176), GPR_U32(ctx, 9));
    // 0x36f250: 0x248400c0  addiu       $a0, $a0, 0xC0
    ctx->pc = 0x36f250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x36f254: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x36f254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x36f258: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x36f258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x36f25c: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x36f25cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f260: 0xb04800bb  sdl         $t0, 0xBB($v0)
    ctx->pc = 0x36f260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 187); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f264: 0xb44800b4  sdr         $t0, 0xB4($v0)
    ctx->pc = 0x36f264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 180); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f268: 0xac4900bc  sw          $t1, 0xBC($v0)
    ctx->pc = 0x36f268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 9));
    // 0x36f26c: 0x24a500c0  addiu       $a1, $a1, 0xC0
    ctx->pc = 0x36f26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x36f270: 0x14e0ff9b  bnez        $a3, . + 4 + (-0x65 << 2)
    ctx->pc = 0x36F270u;
    {
        const bool branch_taken_0x36f270 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F270u;
        // 0x36f274: 0x244200c0  addiu       $v0, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f270) {
            ctx->pc = 0x36F0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36f0e0;
        }
    }
    ctx->pc = 0x36F278u;
label_36f278:
    // 0x36f278: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x36f278u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
    // 0x36f27c: 0x8ce2e880  lw          $v0, -0x1780($a3)
    ctx->pc = 0x36f27cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61E880u));
    // 0x36f280: 0xc106784  jal         func_419E10
    ctx->pc = 0x36F280u;
    SET_GPR_U32(ctx, 31, 0x36F288u);
    ctx->pc = 0x36F284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F280u;
    // 0x36f284: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x36F280u, 0x36F288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F288u;
label_36f288:
    // 0x36f288: 0x8e640058  lw          $a0, 0x58($s3)
    ctx->pc = 0x36f288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x36f28c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x36f28cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f290: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x36f290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x36f294: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x36F294u;
    {
        const bool branch_taken_0x36f294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F294u;
        // 0x36f298: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f294) {
            ctx->pc = 0x36F2D4u;
            goto label_36f2d4;
        }
    }
    ctx->pc = 0x36F29Cu;
    // 0x36f29c: 0x6a6800b7  ldl         $t0, 0xB7($s3)
    ctx->pc = 0x36f29cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x36f2a0: 0x6e6800b0  ldr         $t0, 0xB0($s3)
    ctx->pc = 0x36f2a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x36f2a4: 0x8e6900b8  lw          $t1, 0xB8($s3)
    ctx->pc = 0x36f2a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
    // 0x36f2a8: 0xb2880007  sdl         $t0, 0x7($s4)
    ctx->pc = 0x36f2a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f2ac: 0xb6880000  sdr         $t0, 0x0($s4)
    ctx->pc = 0x36f2acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f2b0: 0xae890008  sw          $t1, 0x8($s4)
    ctx->pc = 0x36f2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 9));
    // 0x36f2b4: 0x6a6300c7  ldl         $v1, 0xC7($s3)
    ctx->pc = 0x36f2b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x36f2b8: 0x6e6300c0  ldr         $v1, 0xC0($s3)
    ctx->pc = 0x36f2b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x36f2bc: 0x8e6400c8  lw          $a0, 0xC8($s3)
    ctx->pc = 0x36f2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
    // 0x36f2c0: 0xb2a30007  sdl         $v1, 0x7($s5)
    ctx->pc = 0x36f2c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f2c4: 0xb6a30000  sdr         $v1, 0x0($s5)
    ctx->pc = 0x36f2c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36f2c8: 0xaea40008  sw          $a0, 0x8($s5)
    ctx->pc = 0x36f2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 4));
    // 0x36f2cc: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x36F2CCu;
    {
        const bool branch_taken_0x36f2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F2CCu;
        // 0x36f2d0: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f2cc) {
            ctx->pc = 0x36F3E4u;
            goto label_36f3e4;
        }
    }
    ctx->pc = 0x36F2D4u;
label_36f2d4:
    // 0x36f2d4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x36f2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x36f2d8: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x36F2D8u;
    {
        const bool branch_taken_0x36f2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F2D8u;
        // 0x36f2dc: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f2d8) {
            ctx->pc = 0x36F3A8u;
            goto label_36f3a8;
        }
    }
    ctx->pc = 0x36F2E0u;
    // 0x36f2e0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x36f2e0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x36f2e4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x36f2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x36f2e8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x36f2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36f2ec: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x36f2ecu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x36f2f0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x36f2f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36f2f4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x36f2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36f2f8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x36f2f8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x36f2fc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x36f2fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x36f300: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x36f300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36f304: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x36f304u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x36f308: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x36f308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36f30c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x36f30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x36f310: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x36f310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36f314: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x36f314u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x36f318: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x36F318u;
    SET_GPR_U32(ctx, 31, 0x36F320u);
    ctx->pc = 0x36F31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F318u;
    // 0x36f31c: 0xc66c0078  lwc1        $f12, 0x78($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x36F318u, 0x36F320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F320u;
label_36f320:
    // 0x36f320: 0xc66c0078  lwc1        $f12, 0x78($s3)
    ctx->pc = 0x36f320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36f324: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x36F324u;
    SET_GPR_U32(ctx, 31, 0x36F32Cu);
    ctx->pc = 0x36F328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F324u;
    // 0x36f328: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x36F324u, 0x36F32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F32Cu;
label_36f32c:
    // 0x36f32c: 0xc7a60010  lwc1        $f6, 0x10($sp)
    ctx->pc = 0x36f32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x36f330: 0x4600a087  neg.s       $f2, $f20
    ctx->pc = 0x36f330u;
    ctx->f[2] = FPU_NEG_S(ctx->f[20]);
    // 0x36f334: 0xc7a70020  lwc1        $f7, 0x20($sp)
    ctx->pc = 0x36f334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x36f338: 0xc7a90024  lwc1        $f9, 0x24($sp)
    ctx->pc = 0x36f338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x36f33c: 0x46060202  mul.s       $f8, $f0, $f6
    ctx->pc = 0x36f33cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x36f340: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x36f340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36f344: 0x4606a182  mul.s       $f6, $f20, $f6
    ctx->pc = 0x36f344u;
    ctx->f[6] = FPU_MUL_S(ctx->f[20], ctx->f[6]);
    // 0x36f348: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x36f348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36f34c: 0x46071302  mul.s       $f12, $f2, $f7
    ctx->pc = 0x36f34cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x36f350: 0xc7ab0014  lwc1        $f11, 0x14($sp)
    ctx->pc = 0x36f350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x36f354: 0x46091282  mul.s       $f10, $f2, $f9
    ctx->pc = 0x36f354u;
    ctx->f[10] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x36f358: 0x46010102  mul.s       $f4, $f0, $f1
    ctx->pc = 0x36f358u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x36f35c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x36f35cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x36f360: 0x460b0142  mul.s       $f5, $f0, $f11
    ctx->pc = 0x36f360u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x36f364: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x36f364u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x36f368: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x36f368u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x36f36c: 0x460701c2  mul.s       $f7, $f0, $f7
    ctx->pc = 0x36f36cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x36f370: 0x460ba502  mul.s       $f20, $f20, $f11
    ctx->pc = 0x36f370u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[11]);
    // 0x36f374: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x36f374u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x36f378: 0x460c4200  add.s       $f8, $f8, $f12
    ctx->pc = 0x36f378u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[12]);
    // 0x36f37c: 0x460a2940  add.s       $f5, $f5, $f10
    ctx->pc = 0x36f37cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[10]);
    // 0x36f380: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x36f380u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x36f384: 0x46073180  add.s       $f6, $f6, $f7
    ctx->pc = 0x36f384u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x36f388: 0xe6880000  swc1        $f8, 0x0($s4)
    ctx->pc = 0x36f388u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x36f38c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x36f38cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x36f390: 0xe6850004  swc1        $f5, 0x4($s4)
    ctx->pc = 0x36f390u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x36f394: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x36f394u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x36f398: 0xe6840008  swc1        $f4, 0x8($s4)
    ctx->pc = 0x36f398u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x36f39c: 0xe6a60000  swc1        $f6, 0x0($s5)
    ctx->pc = 0x36f39cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x36f3a0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x36F3A0u;
    {
        const bool branch_taken_0x36f3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F3A0u;
        // 0x36f3a4: 0xe6b40004  swc1        $f20, 0x4($s5) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f3a0) {
            ctx->pc = 0x36F3DCu;
            goto label_36f3dc;
        }
    }
    ctx->pc = 0x36F3A8u;
label_36f3a8:
    // 0x36f3a8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x36f3a8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x36f3ac: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x36f3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x36f3b0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x36f3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36f3b4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x36f3b4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x36f3b8: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x36f3b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x36f3bc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x36f3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36f3c0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x36f3c0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x36f3c4: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x36f3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x36f3c8: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x36f3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36f3cc: 0xe6a10000  swc1        $f1, 0x0($s5)
    ctx->pc = 0x36f3ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x36f3d0: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x36f3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36f3d4: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x36f3d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x36f3d8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x36f3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36f3dc:
    // 0x36f3dc: 0xe6a10008  swc1        $f1, 0x8($s5)
    ctx->pc = 0x36f3dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x36f3e0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x36f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_36f3e4:
    // 0x36f3e4: 0x3c030018  lui         $v1, 0x18
    ctx->pc = 0x36f3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24 << 16));
    // 0x36f3e8: 0x34422042  ori         $v0, $v0, 0x2042
    ctx->pc = 0x36f3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8258);
    // 0x36f3ec: 0x34630180  ori         $v1, $v1, 0x180
    ctx->pc = 0x36f3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)384);
    // 0x36f3f0: 0x3c21024  and         $v0, $fp, $v0
    ctx->pc = 0x36f3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & GPR_U64(ctx, 2));
    // 0x36f3f4: 0x3c31824  and         $v1, $fp, $v1
    ctx->pc = 0x36f3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & GPR_U64(ctx, 3));
    // 0x36f3f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36f3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36f3fc: 0x1e3103  sra         $a2, $fp, 4
    ctx->pc = 0x36f3fcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 30), 4));
    // 0x36f400: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x36f400u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x36f404: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x36f404u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36f408: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x36f408u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x36f40c: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x36f40cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x36f410: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x36f410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x36f414: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x36f414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f418: 0x8ed0005c  lw          $s0, 0x5C($s6)
    ctx->pc = 0x36f418u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 92)));
    // 0x36f41c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36f41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36f420: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x36f420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x36f424: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x36f424u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x36f428: 0xc0e33ee  jal         func_38CFB8
    ctx->pc = 0x36F428u;
    SET_GPR_U32(ctx, 31, 0x36F430u);
    ctx->pc = 0x36F42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F428u;
    // 0x36f42c: 0xae26000c  sw          $a2, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CFB8u, 0x36F428u, 0x36F430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F430u;
label_36f430:
    // 0x36f430: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x36f430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x36f434: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x36f434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x36f438: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x36f438u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x36f43c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x36F43Cu;
    {
        const bool branch_taken_0x36f43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F43Cu;
        // 0x36f440: 0xae320014  sw          $s2, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f43c) {
            ctx->pc = 0x36F460u;
            goto label_36f460;
        }
    }
    ctx->pc = 0x36F444u;
    // 0x36f444: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x36f444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f448: 0xc0e33ee  jal         func_38CFB8
    ctx->pc = 0x36F448u;
    SET_GPR_U32(ctx, 31, 0x36F450u);
    ctx->pc = 0x36F44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F448u;
    // 0x36f44c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CFB8u, 0x36F448u, 0x36F450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F450u;
label_36f450:
    // 0x36f450: 0x8ec30030  lw          $v1, 0x30($s6)
    ctx->pc = 0x36f450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x36f454: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x36f454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36f458: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x36f458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x36f45c: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x36f45cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_36f460:
    // 0x36f460: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x36f460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x36f464: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x36F464u;
    {
        const bool branch_taken_0x36f464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F464u;
        // 0x36f468: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f464) {
            ctx->pc = 0x36F484u;
            goto label_36f484;
        }
    }
    ctx->pc = 0x36F46Cu;
    // 0x36f46c: 0xc0e33ee  jal         func_38CFB8
    ctx->pc = 0x36F46Cu;
    SET_GPR_U32(ctx, 31, 0x36F474u);
    ctx->pc = 0x36F470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F46Cu;
    // 0x36f470: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CFB8u, 0x36F46Cu, 0x36F474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F474u;
label_36f474:
    // 0x36f474: 0x8ec30034  lw          $v1, 0x34($s6)
    ctx->pc = 0x36f474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x36f478: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x36f478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x36f47c: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x36f47cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x36f480: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x36f480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_36f484:
    // 0x36f484: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x36f484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x36f488: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36F488u;
    {
        const bool branch_taken_0x36f488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F488u;
        // 0x36f48c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f488) {
            ctx->pc = 0x36F4A4u;
            goto label_36f4a4;
        }
    }
    ctx->pc = 0x36F490u;
    // 0x36f490: 0xc0e33ee  jal         func_38CFB8
    ctx->pc = 0x36F490u;
    SET_GPR_U32(ctx, 31, 0x36F498u);
    ctx->pc = 0x36F494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F490u;
    // 0x36f494: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CFB8u, 0x36F490u, 0x36F498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F498u;
label_36f498:
    // 0x36f498: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x36f498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x36f49c: 0xae32002c  sw          $s2, 0x2C($s1)
    ctx->pc = 0x36f49cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 18));
    // 0x36f4a0: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x36f4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
label_36f4a4:
    // 0x36f4a4: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x36f4a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x36f4a8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x36f4a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x36f4ac: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x36f4acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x36f4b0: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x36f4b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36f4b4: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x36f4b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36f4b8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x36f4b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36f4bc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x36f4bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36f4c0: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x36f4c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36f4c4: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x36f4c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36f4c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x36f4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36f4cc: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x36f4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36f4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x36F4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F4D0u;
        // 0x36f4d4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F4D8u;
}
