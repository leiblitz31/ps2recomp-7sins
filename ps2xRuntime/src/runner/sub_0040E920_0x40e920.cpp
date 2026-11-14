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

// Function: sub_0040E920
// Address: 0x40e920 - 0x40ebf8
void sub_0040E920_0x40e920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040E920_0x40e920");
#endif

    switch (ctx->pc) {
        case 0x40e9b8u: goto label_40e9b8;
        case 0x40ea10u: goto label_40ea10;
        case 0x40ea48u: goto label_40ea48;
        case 0x40eaf4u: goto label_40eaf4;
        default: break;
    }

    ctx->pc = 0x40e920u;

    // 0x40e920: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x40e920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x40e924: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x40e924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x40e928: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x40e928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x40e92c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40e92cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40e930: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x40e930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x40e934: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x40e934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40e938: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x40e938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x40e93c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x40e93cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40e940: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x40e940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x40e944: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x40e944u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40e948: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x40e948u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x40e94c: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x40e94cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x40e950: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x40e950u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x40e954: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40e954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40e958: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x40e958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x40e95c: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x40e95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x40e960: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x40e960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e964: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40e964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x40e968: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x40e968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x40e96c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x40e96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e970: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40e970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40e974: 0xc6040028  lwc1        $f4, 0x28($s0)
    ctx->pc = 0x40e974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40e978: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x40e978u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x40e97c: 0xc6030018  lwc1        $f3, 0x18($s0)
    ctx->pc = 0x40e97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40e980: 0xc6050024  lwc1        $f5, 0x24($s0)
    ctx->pc = 0x40e980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x40e984: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x40e984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40e988: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x40e988u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x40e98c: 0xc6060008  lwc1        $f6, 0x8($s0)
    ctx->pc = 0x40e98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x40e990: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x40e990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e994: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x40e994u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x40e998: 0xc6040010  lwc1        $f4, 0x10($s0)
    ctx->pc = 0x40e998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40e99c: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x40e99cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x40e9a0: 0x46160d41  sub.s       $f21, $f1, $f22
    ctx->pc = 0x40e9a0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[22]);
    // 0x40e9a4: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x40e9a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x40e9a8: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x40e9a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x40e9ac: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x40e9acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x40e9b0: 0xc104d24  jal         func_413490
    ctx->pc = 0x40E9B0u;
    SET_GPR_U32(ctx, 31, 0x40E9B8u);
    ctx->pc = 0x40E9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E9B0u;
    // 0x40e9b4: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x40E9B0u, 0x40E9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E9B8u;
label_40e9b8:
    // 0x40e9b8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x40e9b8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x40e9bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40e9bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40e9c0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x40e9c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40e9c4: 0x0  nop
    ctx->pc = 0x40e9c4u;
    // NOP
    // 0x40e9c8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x40E9C8u;
    {
        const bool branch_taken_0x40e9c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40E9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E9C8u;
        // 0x40e9cc: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e9c8) {
            ctx->pc = 0x40E9F8u;
            goto label_40e9f8;
        }
    }
    ctx->pc = 0x40E9D0u;
    // 0x40e9d0: 0x4614b0c3  div.s       $f3, $f22, $f20
    ctx->pc = 0x40e9d0u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[22], ctx->f[20]); }
    // 0x40e9d4: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x40e9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40e9d8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x40e9d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x40e9dc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x40e9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e9e0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x40e9e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x40e9e4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x40e9e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x40e9e8: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x40e9e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x40e9ec: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x40e9ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x40e9f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x40E9F0u;
    {
        const bool branch_taken_0x40e9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E9F0u;
        // 0x40e9f4: 0xe6400008  swc1        $f0, 0x8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e9f0) {
            ctx->pc = 0x40EA04u;
            goto label_40ea04;
        }
    }
    ctx->pc = 0x40E9F8u;
label_40e9f8:
    // 0x40e9f8: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x40e9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x40e9fc: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x40e9fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x40ea00: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x40ea00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_40ea04:
    // 0x40ea04: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x40ea04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x40ea08: 0xc0c39d6  jal         func_30E758
    ctx->pc = 0x40EA08u;
    SET_GPR_U32(ctx, 31, 0x40EA10u);
    ctx->pc = 0x40EA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40EA08u;
    // 0x40ea0c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E758u, 0x40EA08u, 0x40EA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40EA10u;
label_40ea10:
    // 0x40ea10: 0xc7818038  lwc1        $f1, -0x7FC8($gp)
    ctx->pc = 0x40ea10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40ea14: 0xc782803c  lwc1        $f2, -0x7FC4($gp)
    ctx->pc = 0x40ea14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40ea18: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x40ea18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x40ea1c: 0x4602a036  c.le.s      $f20, $f2
    ctx->pc = 0x40ea1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40ea20: 0x0  nop
    ctx->pc = 0x40ea20u;
    // NOP
    // 0x40ea24: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x40EA24u;
    {
        const bool branch_taken_0x40ea24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40EA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EA24u;
        // 0x40ea28: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ea24) {
            ctx->pc = 0x40EA48u;
            goto label_40ea48;
        }
    }
    ctx->pc = 0x40EA2Cu;
    // 0x40ea2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40ea2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40ea30: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x40ea30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40ea34: 0x0  nop
    ctx->pc = 0x40ea34u;
    // NOP
    // 0x40ea38: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x40EA38u;
    {
        const bool branch_taken_0x40ea38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EA38u;
        // 0x40ea3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ea38) {
            ctx->pc = 0x40EA50u;
            goto label_40ea50;
        }
    }
    ctx->pc = 0x40EA40u;
    // 0x40ea40: 0xc1039ea  jal         func_40E7A8
    ctx->pc = 0x40EA40u;
    SET_GPR_U32(ctx, 31, 0x40EA48u);
    ctx->pc = 0x40EA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40EA40u;
    // 0x40ea44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E7A8u, 0x40EA40u, 0x40EA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40EA48u;
label_40ea48:
    // 0x40ea48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40ea48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40ea4c: 0x0  nop
    ctx->pc = 0x40ea4cu;
    // NOP
label_40ea50:
    // 0x40ea50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40ea50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x40ea54: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x40ea54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x40ea58: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x40ea58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x40ea5c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x40ea5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x40ea60: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x40ea60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x40ea64: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x40ea64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40ea68: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x40ea68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40ea6c: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x40ea6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x40ea70: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x40ea70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40ea74: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x40ea74u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x40ea78: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x40ea78u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x40ea7c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x40ea7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x40ea80: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x40ea80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x40ea84: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x40ea84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x40ea88: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x40ea88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40ea8c: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x40ea8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40ea90: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x40ea90u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x40ea94: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x40ea94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40ea98: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x40ea98u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x40ea9c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x40ea9cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x40eaa0: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x40eaa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x40eaa4: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x40eaa4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x40eaa8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x40eaa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x40eaac: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x40eaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40eab0: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x40eab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40eab4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x40eab4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x40eab8: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x40eab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40eabc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x40eabcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x40eac0: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x40eac0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x40eac4: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x40eac4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x40eac8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x40eac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x40eacc: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x40eaccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x40ead0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x40ead0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x40ead4: 0x3c02fffd  lui         $v0, 0xFFFD
    ctx->pc = 0x40ead4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65533 << 16));
    // 0x40ead8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x40ead8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x40eadc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x40eadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x40eae0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x40eae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x40eae4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x40eae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x40eae8: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x40eae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
    // 0x40eaec: 0xc10395e  jal         func_40E578
    ctx->pc = 0x40EAECu;
    SET_GPR_U32(ctx, 31, 0x40EAF4u);
    ctx->pc = 0x40EAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40EAECu;
    // 0x40eaf0: 0xafa3001c  sw          $v1, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E578u, 0x40EAECu, 0x40EAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40EAF4u;
label_40eaf4:
    // 0x40eaf4: 0x6ba20087  ldl         $v0, 0x87($sp)
    ctx->pc = 0x40eaf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x40eaf8: 0x6fa20080  ldr         $v0, 0x80($sp)
    ctx->pc = 0x40eaf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x40eafc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x40eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x40eb00: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x40eb00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40eb04: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x40eb04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40eb08: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x40eb08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x40eb0c: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x40eb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40eb10: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x40eb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40eb14: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x40eb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40eb18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x40eb18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x40eb1c: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x40eb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40eb20: 0xc7a30058  lwc1        $f3, 0x58($sp)
    ctx->pc = 0x40eb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40eb24: 0xc6250004  lwc1        $f5, 0x4($s1)
    ctx->pc = 0x40eb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x40eb28: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x40eb28u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x40eb2c: 0xc6260008  lwc1        $f6, 0x8($s1)
    ctx->pc = 0x40eb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x40eb30: 0xe6240000  swc1        $f4, 0x0($s1)
    ctx->pc = 0x40eb30u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x40eb34: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x40eb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40eb38: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x40eb38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x40eb3c: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x40eb3cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x40eb40: 0xe6250004  swc1        $f5, 0x4($s1)
    ctx->pc = 0x40eb40u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x40eb44: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x40eb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40eb48: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x40eb48u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x40eb4c: 0x46033180  add.s       $f6, $f6, $f3
    ctx->pc = 0x40eb4cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x40eb50: 0xe6260008  swc1        $f6, 0x8($s1)
    ctx->pc = 0x40eb50u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x40eb54: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x40eb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40eb58: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x40eb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40eb5c: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x40eb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40eb60: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x40eb60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x40eb64: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x40eb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40eb68: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x40eb68u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x40eb6c: 0xe6240000  swc1        $f4, 0x0($s1)
    ctx->pc = 0x40eb6cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x40eb70: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x40eb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40eb74: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x40eb74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x40eb78: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x40eb78u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x40eb7c: 0xe6250004  swc1        $f5, 0x4($s1)
    ctx->pc = 0x40eb7cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x40eb80: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x40eb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40eb84: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x40eb84u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x40eb88: 0x46033180  add.s       $f6, $f6, $f3
    ctx->pc = 0x40eb88u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x40eb8c: 0xe6260008  swc1        $f6, 0x8($s1)
    ctx->pc = 0x40eb8cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x40eb90: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x40eb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40eb94: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x40eb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40eb98: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x40eb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40eb9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x40eb9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x40eba0: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x40eba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40eba4: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x40eba4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x40eba8: 0xe6240000  swc1        $f4, 0x0($s1)
    ctx->pc = 0x40eba8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x40ebac: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x40ebacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40ebb0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x40ebb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x40ebb4: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x40ebb4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x40ebb8: 0xe6250004  swc1        $f5, 0x4($s1)
    ctx->pc = 0x40ebb8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x40ebbc: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x40ebbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40ebc0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x40ebc0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x40ebc4: 0x46033180  add.s       $f6, $f6, $f3
    ctx->pc = 0x40ebc4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x40ebc8: 0xe6260008  swc1        $f6, 0x8($s1)
    ctx->pc = 0x40ebc8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x40ebcc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x40ebccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ebd0: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x40ebd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x40ebd4: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x40ebd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x40ebd8: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x40ebd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x40ebdc: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x40ebdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x40ebe0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x40ebe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x40ebe4: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x40ebe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x40ebe8: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x40ebe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x40ebec: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x40ebecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x40ebf0: 0x3e00008  jr          $ra
    ctx->pc = 0x40EBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40EBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EBF0u;
        // 0x40ebf4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40EBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40EBF8u;
}
