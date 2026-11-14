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

// Function: sub_00373C58
// Address: 0x373c58 - 0x373de8
void sub_00373C58_0x373c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373C58_0x373c58");
#endif

    switch (ctx->pc) {
        case 0x373d48u: goto label_373d48;
        case 0x373d54u: goto label_373d54;
        case 0x373d74u: goto label_373d74;
        case 0x373d80u: goto label_373d80;
        case 0x373da0u: goto label_373da0;
        case 0x373dacu: goto label_373dac;
        default: break;
    }

    ctx->pc = 0x373c58u;

    // 0x373c58: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x373c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x373c5c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x373c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x373c60: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x373c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x373c64: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x373c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x373c68: 0x8c50c438  lw          $s0, -0x3BC8($v0)
    ctx->pc = 0x373c68u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61C438u));
    // 0x373c6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x373c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373c70: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x373c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x373c74: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x373c74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x373c78: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x373c78u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x373c7c: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x373c7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x373c80: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x373c80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x373c84: 0x6a020023  ldl         $v0, 0x23($s0)
    ctx->pc = 0x373c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x373c88: 0x6e02001c  ldr         $v0, 0x1C($s0)
    ctx->pc = 0x373c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x373c8c: 0x6a03002b  ldl         $v1, 0x2B($s0)
    ctx->pc = 0x373c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x373c90: 0x6e030024  ldr         $v1, 0x24($s0)
    ctx->pc = 0x373c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x373c94: 0x6a040033  ldl         $a0, 0x33($s0)
    ctx->pc = 0x373c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x373c98: 0x6e04002c  ldr         $a0, 0x2C($s0)
    ctx->pc = 0x373c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x373c9c: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x373c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x373ca0: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x373ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x373ca4: 0xb3a3002f  sdl         $v1, 0x2F($sp)
    ctx->pc = 0x373ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x373ca8: 0xb7a30028  sdr         $v1, 0x28($sp)
    ctx->pc = 0x373ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x373cac: 0xb3a40037  sdl         $a0, 0x37($sp)
    ctx->pc = 0x373cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x373cb0: 0xb7a40030  sdr         $a0, 0x30($sp)
    ctx->pc = 0x373cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x373cb4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x373cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x373cb8: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x373cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x373cbc: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x373cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x373cc0: 0xc7a8002c  lwc1        $f8, 0x2C($sp)
    ctx->pc = 0x373cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x373cc4: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x373cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x373cc8: 0xc7a70030  lwc1        $f7, 0x30($sp)
    ctx->pc = 0x373cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x373ccc: 0x46081140  add.s       $f5, $f2, $f8
    ctx->pc = 0x373cccu;
    ctx->f[5] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x373cd0: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x373cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373cd4: 0xc7a60034  lwc1        $f6, 0x34($sp)
    ctx->pc = 0x373cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x373cd8: 0x46071900  add.s       $f4, $f3, $f7
    ctx->pc = 0x373cd8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x373cdc: 0x46092942  mul.s       $f5, $f5, $f9
    ctx->pc = 0x373cdcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x373ce0: 0x46060800  add.s       $f0, $f1, $f6
    ctx->pc = 0x373ce0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x373ce4: 0x46092102  mul.s       $f4, $f4, $f9
    ctx->pc = 0x373ce4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x373ce8: 0xe6050050  swc1        $f5, 0x50($s0)
    ctx->pc = 0x373ce8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x373cec: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x373cecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x373cf0: 0xe6040054  swc1        $f4, 0x54($s0)
    ctx->pc = 0x373cf0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x373cf4: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x373cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x373cf8: 0x46081081  sub.s       $f2, $f2, $f8
    ctx->pc = 0x373cf8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x373cfc: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x373cfcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x373d00: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x373d00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x373d04: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x373d04u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x373d08: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x373d08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x373d0c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x373d0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x373d10: 0x46021828  max.s       $f0, $f3, $f2
    ctx->pc = 0x373d10u;
    ctx->f[0] = std::max(ctx->f[3], ctx->f[2]);
    // 0x373d14: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x373d14u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x373d18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x373d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x373d1c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x373d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x373d20: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x373d20u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x373d24: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x373d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x373d28: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x373d28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x373d2c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x373d2cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x373d30: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x373d30u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x373d34: 0x4602ab03  div.s       $f12, $f21, $f2
    ctx->pc = 0x373d34u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[21], ctx->f[2]); }
    // 0x373d38: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x373d38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x373d3c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x373d3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x373d40: 0xc0c39e8  jal         func_30E7A0
    ctx->pc = 0x373D40u;
    SET_GPR_U32(ctx, 31, 0x373D48u);
    ctx->pc = 0x373D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373D40u;
    // 0x373d44: 0xe7a30014  swc1        $f3, 0x14($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E7A0u, 0x373D40u, 0x373D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373D48u;
label_373d48:
    // 0x373d48: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x373d48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x373d4c: 0xc0c39e8  jal         func_30E7A0
    ctx->pc = 0x373D4Cu;
    SET_GPR_U32(ctx, 31, 0x373D54u);
    ctx->pc = 0x373D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373D4Cu;
    // 0x373d50: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E7A0u, 0x373D4Cu, 0x373D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373D54u;
label_373d54:
    // 0x373d54: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x373d54u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x373d58: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x373d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x373d5c: 0x460cab03  div.s       $f12, $f21, $f12
    ctx->pc = 0x373d5cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[21], ctx->f[12]); }
    // 0x373d60: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x373d60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x373d64: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x373d64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x373d68: 0x21023  negu        $v0, $v0
    ctx->pc = 0x373d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x373d6c: 0xc0c39e8  jal         func_30E7A0
    ctx->pc = 0x373D6Cu;
    SET_GPR_U32(ctx, 31, 0x373D74u);
    ctx->pc = 0x373D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373D6Cu;
    // 0x373d70: 0xae02005c  sw          $v0, 0x5C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E7A0u, 0x373D6Cu, 0x373D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373D74u;
label_373d74:
    // 0x373d74: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x373d74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x373d78: 0xc0c39e8  jal         func_30E7A0
    ctx->pc = 0x373D78u;
    SET_GPR_U32(ctx, 31, 0x373D80u);
    ctx->pc = 0x373D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373D78u;
    // 0x373d7c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E7A0u, 0x373D78u, 0x373D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373D80u;
label_373d80:
    // 0x373d80: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x373d80u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x373d84: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x373d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x373d88: 0x460cab03  div.s       $f12, $f21, $f12
    ctx->pc = 0x373d88u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[21], ctx->f[12]); }
    // 0x373d8c: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x373d8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x373d90: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x373d90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x373d94: 0x21023  negu        $v0, $v0
    ctx->pc = 0x373d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x373d98: 0xc0c39e8  jal         func_30E7A0
    ctx->pc = 0x373D98u;
    SET_GPR_U32(ctx, 31, 0x373DA0u);
    ctx->pc = 0x373D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373D98u;
    // 0x373d9c: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E7A0u, 0x373D98u, 0x373DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373DA0u;
label_373da0:
    // 0x373da0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x373da0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x373da4: 0xc0c39e8  jal         func_30E7A0
    ctx->pc = 0x373DA4u;
    SET_GPR_U32(ctx, 31, 0x373DACu);
    ctx->pc = 0x373DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373DA4u;
    // 0x373da8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E7A0u, 0x373DA4u, 0x373DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373DACu;
label_373dac:
    // 0x373dac: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x373dacu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x373db0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x373db0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373db4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x373db4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x373db8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x373db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x373dbc: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x373dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x373dc0: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x373dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x373dc4: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x373dc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x373dc8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x373dc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x373dcc: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x373dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x373dd0: 0x31823  negu        $v1, $v1
    ctx->pc = 0x373dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x373dd4: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x373dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x373dd8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x373dd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x373ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x373DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373DDCu;
        // 0x373de0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373DE4u;
    // 0x373de4: 0x0  nop
    ctx->pc = 0x373de4u;
    // NOP
    ctx->pc = 0x373de8u;
}
