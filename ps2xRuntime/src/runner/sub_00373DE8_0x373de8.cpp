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

// Function: sub_00373DE8
// Address: 0x373de8 - 0x3740a8
void sub_00373DE8_0x373de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373DE8_0x373de8");
#endif

    switch (ctx->pc) {
        case 0x373e68u: goto label_373e68;
        case 0x373ea8u: goto label_373ea8;
        case 0x373f10u: goto label_373f10;
        case 0x374000u: goto label_374000;
        case 0x374038u: goto label_374038;
        default: break;
    }

    ctx->pc = 0x373de8u;

    // 0x373de8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x373de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x373dec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x373decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x373df0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x373df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x373df4: 0x2442c430  addiu       $v0, $v0, -0x3BD0
    ctx->pc = 0x373df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951984));
    // 0x373df8: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x373df8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x373dfc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x373dfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373e00: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x373e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x373e04: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x373e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x373e08: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x373e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x373e0c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x373e0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x373e10: 0x6843002b  ldl         $v1, 0x2B($v0)
    ctx->pc = 0x373e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x373e14: 0x6c430024  ldr         $v1, 0x24($v0)
    ctx->pc = 0x373e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x373e18: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x373e18u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61C45Cu));
    // 0x373e1c: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x373e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x373e20: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x373e20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x373e24: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x373e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x373e28: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x373e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x373e2c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x373e2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x373e30: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x373e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373e34: 0xc6430038  lwc1        $f3, 0x38($s2)
    ctx->pc = 0x373e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x373e38: 0xc644003c  lwc1        $f4, 0x3C($s2)
    ctx->pc = 0x373e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x373e3c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x373e3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x373e40: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x373e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x373e44: 0xc6430040  lwc1        $f3, 0x40($s2)
    ctx->pc = 0x373e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x373e48: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x373e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373e4c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x373e4cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x373e50: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x373e50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x373e54: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x373e54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x373e58: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x373e58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x373e5c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x373e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x373e60: 0xc104d24  jal         func_413490
    ctx->pc = 0x373E60u;
    SET_GPR_U32(ctx, 31, 0x373E68u);
    ctx->pc = 0x373E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373E60u;
    // 0x373e64: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x373E60u, 0x373E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373E68u;
label_373e68:
    // 0x373e68: 0xc6410044  lwc1        $f1, 0x44($s2)
    ctx->pc = 0x373e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373e6c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x373e6cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x373e70: 0x46000500  add.s       $f20, $f0, $f0
    ctx->pc = 0x373e70u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x373e74: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x373e74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x373e78: 0x0  nop
    ctx->pc = 0x373e78u;
    // NOP
    // 0x373e7c: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x373E7Cu;
    {
        const bool branch_taken_0x373e7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x373e7c) {
            ctx->pc = 0x373E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x373E7Cu;
            // 0x373e80: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x373E88u;
            goto label_373e88;
        }
    }
    ctx->pc = 0x373E84u;
    // 0x373e84: 0x0  nop
    ctx->pc = 0x373e84u;
    // NOP
label_373e88:
    // 0x373e88: 0xc7808124  lwc1        $f0, -0x7EDC($gp)
    ctx->pc = 0x373e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373e8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x373e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x373e90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x373e90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x373e94: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x373e94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x373e98: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x373e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x373e9c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x373E9Cu;
    {
        const bool branch_taken_0x373e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x373EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373E9Cu;
        // 0x373ea0: 0x46010100  add.s       $f4, $f0, $f1 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x373e9c) {
            ctx->pc = 0x373EF8u;
            goto label_373ef8;
        }
    }
    ctx->pc = 0x373EA4u;
    // 0x373ea4: 0xc6430038  lwc1        $f3, 0x38($s2)
    ctx->pc = 0x373ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_373ea8:
    // 0x373ea8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x373ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373eac: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x373eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373eb0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x373eb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x373eb4: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x373eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x373eb8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x373eb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x373ebc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x373ebcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x373ec0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x373ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x373ec4: 0xc643003c  lwc1        $f3, 0x3C($s2)
    ctx->pc = 0x373ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x373ec8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x373ec8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x373ecc: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x373eccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x373ed0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x373ed0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x373ed4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x373ed4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x373ed8: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x373ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373edc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x373edcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x373ee0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x373ee0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x373ee4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x373ee4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x373ee8: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x373ee8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x373eec: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x373eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x373ef0: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x373EF0u;
    {
        const bool branch_taken_0x373ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x373ef0) {
            ctx->pc = 0x373EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x373EF0u;
            // 0x373ef4: 0xc6430038  lwc1        $f3, 0x38($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x373EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_373ea8;
        }
    }
    ctx->pc = 0x373EF8u;
label_373ef8:
    // 0x373ef8: 0x8e51000c  lw          $s1, 0xC($s2)
    ctx->pc = 0x373ef8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x373efc: 0x12200044  beqz        $s1, . + 4 + (0x44 << 2)
    ctx->pc = 0x373EFCu;
    {
        const bool branch_taken_0x373efc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x373F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373EFCu;
        // 0x373f00: 0xae400034  sw          $zero, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373efc) {
            ctx->pc = 0x374010u;
            goto label_374010;
        }
    }
    ctx->pc = 0x373F04u;
    // 0x373f04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x373f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x373f08: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x373f08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x373f0c: 0x0  nop
    ctx->pc = 0x373f0cu;
    // NOP
label_373f10:
    // 0x373f10: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x373f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x373f14: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x373F14u;
    {
        const bool branch_taken_0x373f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x373f14) {
            ctx->pc = 0x373F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x373F14u;
            // 0x373f18: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x373F1Cu;
            goto label_373f1c;
        }
    }
    ctx->pc = 0x373F1Cu;
label_373f1c:
    // 0x373f1c: 0x26300018  addiu       $s0, $s1, 0x18
    ctx->pc = 0x373f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x373f20: 0xc6270000  lwc1        $f7, 0x0($s1)
    ctx->pc = 0x373f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x373f24: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x373f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373f28: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x373f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373f2c: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x373f2cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x373f30: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x373f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x373f34: 0xe7a70020  swc1        $f7, 0x20($sp)
    ctx->pc = 0x373f34u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x373f38: 0xc6250004  lwc1        $f5, 0x4($s1)
    ctx->pc = 0x373f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x373f3c: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x373f3cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x373f40: 0xe7a50024  swc1        $f5, 0x24($sp)
    ctx->pc = 0x373f40u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x373f44: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x373f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x373f48: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x373f48u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x373f4c: 0xe7a40028  swc1        $f4, 0x28($sp)
    ctx->pc = 0x373f4cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x373f50: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x373f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x373f54: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x373f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373f58: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x373f58u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x373f5c: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x373f5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x373f60: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x373f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x373f64: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x373f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373f68: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x373f68u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x373f6c: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x373f6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x373f70: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x373f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373f74: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x373f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373f78: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x373f78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x373f7c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x373f7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x373f80: 0x46012982  mul.s       $f6, $f5, $f1
    ctx->pc = 0x373f80u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x373f84: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x373f84u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x373f88: 0x46023802  mul.s       $f0, $f7, $f2
    ctx->pc = 0x373f88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x373f8c: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x373f8cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x373f90: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x373f90u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x373f94: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x373f94u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x373f98: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x373f98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x373f9c: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x373f9cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x373fa0: 0x46043181  sub.s       $f6, $f6, $f4
    ctx->pc = 0x373fa0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
    // 0x373fa4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x373fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x373fa8: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x373fa8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x373fac: 0xe7a60040  swc1        $f6, 0x40($sp)
    ctx->pc = 0x373facu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x373fb0: 0xe6260018  swc1        $f6, 0x18($s1)
    ctx->pc = 0x373fb0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x373fb4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x373fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373fb8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x373fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x373fbc: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x373fbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x373fc0: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x373fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373fc4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x373fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x373fc8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x373fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373fcc: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x373fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373fd0: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x373fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x373fd4: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x373fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x373fd8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x373fd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x373fdc: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x373fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x373fe0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x373fe0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x373fe4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x373fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373fe8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x373fe8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x373fec: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x373fecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x373ff0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x373ff0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x373ff4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x373ff4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x373ff8: 0xc104d24  jal         func_413490
    ctx->pc = 0x373FF8u;
    SET_GPR_U32(ctx, 31, 0x374000u);
    ctx->pc = 0x373FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373FF8u;
    // 0x373ffc: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x373FF8u, 0x374000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374000u;
label_374000:
    // 0x374000: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x374000u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x374004: 0x8e31000c  lw          $s1, 0xC($s1)
    ctx->pc = 0x374004u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x374008: 0x1620ffc1  bnez        $s1, . + 4 + (-0x3F << 2)
    ctx->pc = 0x374008u;
    {
        const bool branch_taken_0x374008 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x37400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374008u;
        // 0x37400c: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x374008) {
            ctx->pc = 0x373F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_373f10;
        }
    }
    ctx->pc = 0x374010u;
label_374010:
    // 0x374010: 0xc7808124  lwc1        $f0, -0x7EDC($gp)
    ctx->pc = 0x374010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374014: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x374014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x374018: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x374018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37401c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x37401cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x374020: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x374020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x374024: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x374024u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x374028: 0x46000903  div.s       $f4, $f1, $f0
    ctx->pc = 0x374028u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x37402c: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x37402Cu;
    {
        const bool branch_taken_0x37402c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37402c) {
            ctx->pc = 0x374030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37402Cu;
            // 0x374030: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37408Cu;
            goto label_37408c;
        }
    }
    ctx->pc = 0x374034u;
    // 0x374034: 0xc6430038  lwc1        $f3, 0x38($s2)
    ctx->pc = 0x374034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_374038:
    // 0x374038: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x374038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37403c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x37403cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x374040: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x374040u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x374044: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x374044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x374048: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x374048u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x37404c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x37404cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x374050: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x374050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x374054: 0xc643003c  lwc1        $f3, 0x3C($s2)
    ctx->pc = 0x374054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x374058: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x374058u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x37405c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x37405cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x374060: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x374060u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x374064: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x374064u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x374068: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x374068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37406c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x37406cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x374070: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x374070u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x374074: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x374074u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x374078: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x374078u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x37407c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x37407cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x374080: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x374080u;
    {
        const bool branch_taken_0x374080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x374080) {
            ctx->pc = 0x374084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374080u;
            // 0x374084: 0xc6430038  lwc1        $f3, 0x38($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x374038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_374038;
        }
    }
    ctx->pc = 0x374088u;
    // 0x374088: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x374088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_37408c:
    // 0x37408c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x37408cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x374090: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x374090u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x374094: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x374094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x374098: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x374098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x37409c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x37409cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3740a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3740A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3740A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3740A0u;
        // 0x3740a4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3740A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3740A8u;
}
