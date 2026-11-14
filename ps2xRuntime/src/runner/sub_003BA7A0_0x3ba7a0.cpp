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

// Function: sub_003BA7A0
// Address: 0x3ba7a0 - 0x3baa78
void sub_003BA7A0_0x3ba7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BA7A0_0x3ba7a0");
#endif

    switch (ctx->pc) {
        case 0x3ba81cu: goto label_3ba81c;
        case 0x3ba8e0u: goto label_3ba8e0;
        case 0x3ba9a4u: goto label_3ba9a4;
        default: break;
    }

    ctx->pc = 0x3ba7a0u;

    // 0x3ba7a0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3ba7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x3ba7a4: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x3ba7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x3ba7a8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x3ba7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x3ba7ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ba7acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba7b0: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x3ba7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x3ba7b4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3ba7b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba7b8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x3ba7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x3ba7bc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3ba7bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba7c0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x3ba7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x3ba7c4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3ba7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3ba7c8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3ba7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x3ba7cc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3ba7ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba7d0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3ba7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3ba7d4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x3ba7d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba7d8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3ba7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ba7dc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3ba7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3ba7e0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x3ba7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3ba7e4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3ba7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3ba7e8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3ba7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3ba7ec: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3ba7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3ba7f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3ba7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3ba7f4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3ba7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ba7f8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3ba7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba7fc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3ba7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ba800: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ba800u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ba804: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3ba804u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3ba808: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3ba808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ba80c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3ba80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ba810: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3ba810u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3ba814: 0xc104d38  jal         func_4134E0
    ctx->pc = 0x3BA814u;
    SET_GPR_U32(ctx, 31, 0x3BA81Cu);
    ctx->pc = 0x3BA818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA814u;
    // 0x3ba818: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4134E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4134E0u, 0x3BA814u, 0x3BA81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA81Cu;
label_3ba81c:
    // 0x3ba81c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3ba81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3ba820: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x3ba820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3ba824: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3ba824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3ba828: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3ba828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3ba82c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3ba82cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3ba830: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x3ba830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ba834: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ba834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3ba838: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ba838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3ba83c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3ba83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ba840: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3ba840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ba844: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x3ba844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ba848: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3ba848u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3ba84c: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x3ba84cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3ba850: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x3ba850u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3ba854: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x3ba854u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3ba858: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3ba858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ba85c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3ba85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ba860: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3ba860u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3ba864: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x3ba864u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3ba868: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x3ba868u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x3ba86c: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x3ba86cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ba870: 0x0  nop
    ctx->pc = 0x3ba870u;
    // NOP
    // 0x3ba874: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3BA874u;
    {
        const bool branch_taken_0x3ba874 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BA878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA874u;
        // 0x3ba878: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba874) {
            ctx->pc = 0x3BA884u;
            goto label_3ba884;
        }
    }
    ctx->pc = 0x3BA87Cu;
    // 0x3ba87c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3BA87Cu;
    {
        const bool branch_taken_0x3ba87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA87Cu;
        // 0x3ba880: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba87c) {
            ctx->pc = 0x3BA898u;
            goto label_3ba898;
        }
    }
    ctx->pc = 0x3BA884u;
label_3ba884:
    // 0x3ba884: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x3ba884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ba888: 0x0  nop
    ctx->pc = 0x3ba888u;
    // NOP
    // 0x3ba88c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3BA88Cu;
    {
        const bool branch_taken_0x3ba88c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BA890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA88Cu;
        // 0x3ba890: 0x24150004  addiu       $s5, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba88c) {
            ctx->pc = 0x3BA898u;
            goto label_3ba898;
        }
    }
    ctx->pc = 0x3BA894u;
    // 0x3ba894: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x3ba894u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ba898:
    // 0x3ba898: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x3ba898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3ba89c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3ba89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3ba8a0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ba8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ba8a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3ba8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba8a8: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x3ba8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3ba8ac: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3ba8acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3ba8b0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3ba8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3ba8b4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3ba8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3ba8b8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3ba8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3ba8bc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3ba8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ba8c0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3ba8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ba8c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3ba8c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3ba8c8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3ba8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3ba8cc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3ba8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ba8d0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3ba8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ba8d4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ba8d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ba8d8: 0xc104d38  jal         func_4134E0
    ctx->pc = 0x3BA8D8u;
    SET_GPR_U32(ctx, 31, 0x3BA8E0u);
    ctx->pc = 0x3BA8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA8D8u;
    // 0x3ba8dc: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4134E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4134E0u, 0x3BA8D8u, 0x3BA8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA8E0u;
label_3ba8e0:
    // 0x3ba8e0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ba8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ba8e4: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x3ba8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3ba8e8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3ba8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3ba8ec: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3ba8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3ba8f0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3ba8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3ba8f4: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x3ba8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ba8f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ba8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3ba8fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ba8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3ba900: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3ba900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ba904: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3ba904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ba908: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x3ba908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ba90c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3ba90cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3ba910: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x3ba910u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3ba914: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x3ba914u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3ba918: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x3ba918u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3ba91c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3ba91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ba920: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3ba920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ba924: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3ba924u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3ba928: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x3ba928u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3ba92c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x3ba92cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x3ba930: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x3ba930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ba934: 0x0  nop
    ctx->pc = 0x3ba934u;
    // NOP
    // 0x3ba938: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3BA938u;
    {
        const bool branch_taken_0x3ba938 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BA93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA938u;
        // 0x3ba93c: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba938) {
            ctx->pc = 0x3BA948u;
            goto label_3ba948;
        }
    }
    ctx->pc = 0x3BA940u;
    // 0x3ba940: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3BA940u;
    {
        const bool branch_taken_0x3ba940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA940u;
        // 0x3ba944: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba940) {
            ctx->pc = 0x3BA95Cu;
            goto label_3ba95c;
        }
    }
    ctx->pc = 0x3BA948u;
label_3ba948:
    // 0x3ba948: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x3ba948u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ba94c: 0x0  nop
    ctx->pc = 0x3ba94cu;
    // NOP
    // 0x3ba950: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3BA950u;
    {
        const bool branch_taken_0x3ba950 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BA954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA950u;
        // 0x3ba954: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba950) {
            ctx->pc = 0x3BA95Cu;
            goto label_3ba95c;
        }
    }
    ctx->pc = 0x3BA958u;
    // 0x3ba958: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x3ba958u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ba95c:
    // 0x3ba95c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3ba95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3ba960: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3ba960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3ba964: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3ba964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3ba968: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3ba968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba96c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x3ba96cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3ba970: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3ba970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3ba974: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3ba974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3ba978: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3ba978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3ba97c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3ba97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3ba980: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3ba980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ba984: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3ba984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ba988: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3ba988u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3ba98c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3ba98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3ba990: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3ba990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ba994: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3ba994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ba998: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ba998u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ba99c: 0xc104d38  jal         func_4134E0
    ctx->pc = 0x3BA99Cu;
    SET_GPR_U32(ctx, 31, 0x3BA9A4u);
    ctx->pc = 0x3BA9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA99Cu;
    // 0x3ba9a0: 0xe7a10054  swc1        $f1, 0x54($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4134E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4134E0u, 0x3BA99Cu, 0x3BA9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA9A4u;
label_3ba9a4:
    // 0x3ba9a4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3ba9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3ba9a8: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x3ba9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3ba9ac: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3ba9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3ba9b0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3ba9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3ba9b4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3ba9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3ba9b8: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x3ba9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ba9bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ba9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3ba9c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ba9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3ba9c4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3ba9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ba9c8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3ba9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ba9cc: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x3ba9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ba9d0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3ba9d0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3ba9d4: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x3ba9d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3ba9d8: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x3ba9d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3ba9dc: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x3ba9dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3ba9e0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3ba9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ba9e4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3ba9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ba9e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3ba9e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3ba9ec: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x3ba9ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3ba9f0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x3ba9f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x3ba9f4: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x3ba9f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ba9f8: 0x0  nop
    ctx->pc = 0x3ba9f8u;
    // NOP
    // 0x3ba9fc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3BA9FCu;
    {
        const bool branch_taken_0x3ba9fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BAA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA9FCu;
        // 0x3baa00: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba9fc) {
            ctx->pc = 0x3BAA0Cu;
            goto label_3baa0c;
        }
    }
    ctx->pc = 0x3BAA04u;
    // 0x3baa04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3BAA04u;
    {
        const bool branch_taken_0x3baa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BAA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAA04u;
        // 0x3baa08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3baa04) {
            ctx->pc = 0x3BAA20u;
            goto label_3baa20;
        }
    }
    ctx->pc = 0x3BAA0Cu;
label_3baa0c:
    // 0x3baa0c: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x3baa0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3baa10: 0x0  nop
    ctx->pc = 0x3baa10u;
    // NOP
    // 0x3baa14: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3BAA14u;
    {
        const bool branch_taken_0x3baa14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BAA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAA14u;
        // 0x3baa18: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3baa14) {
            ctx->pc = 0x3BAA20u;
            goto label_3baa20;
        }
    }
    ctx->pc = 0x3BAA1Cu;
    // 0x3baa1c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3baa1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3baa20:
    // 0x3baa20: 0x2b11024  and         $v0, $s5, $s1
    ctx->pc = 0x3baa20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 17));
    // 0x3baa24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3baa24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3baa28: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x3baa28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x3baa2c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BAA2Cu;
    {
        const bool branch_taken_0x3baa2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3BAA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAA2Cu;
        // 0x3baa30: 0x2b11025  or          $v0, $s5, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3baa2c) {
            ctx->pc = 0x3BAA3Cu;
            goto label_3baa3c;
        }
    }
    ctx->pc = 0x3BAA34u;
    // 0x3baa34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3BAA34u;
    {
        const bool branch_taken_0x3baa34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BAA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAA34u;
        // 0x3baa38: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3baa34) {
            ctx->pc = 0x3BAA50u;
            goto label_3baa50;
        }
    }
    ctx->pc = 0x3BAA3Cu;
label_3baa3c:
    // 0x3baa3c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3baa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3baa40: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3baa40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3baa44: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3baa44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3baa48: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3baa48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3baa4c: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x3baa4cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_3baa50:
    // 0x3baa50: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x3baa50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3baa54: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3baa54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3baa58: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x3baa58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3baa5c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x3baa5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3baa60: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x3baa60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3baa64: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x3baa64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3baa68: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3baa68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3baa6c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3baa6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3baa70: 0x3e00008  jr          $ra
    ctx->pc = 0x3BAA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BAA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAA70u;
        // 0x3baa74: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BAA70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BAA78u;
}
