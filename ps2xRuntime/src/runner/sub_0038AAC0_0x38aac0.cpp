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

// Function: sub_0038AAC0
// Address: 0x38aac0 - 0x38ac18
void sub_0038AAC0_0x38aac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038AAC0_0x38aac0");
#endif

    switch (ctx->pc) {
        case 0x38aafcu: goto label_38aafc;
        case 0x38ab58u: goto label_38ab58;
        default: break;
    }

    ctx->pc = 0x38aac0u;

    // 0x38aac0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x38aac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x38aac4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x38aac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x38aac8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x38aac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x38aacc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38aaccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aad0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x38aad0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x38aad4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x38aad4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aad8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x38aad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x38aadc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x38aadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x38aae0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x38aae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x38aae4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x38aae4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x38aae8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x38aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x38aaec: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x38aaecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x38aaf0: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x38aaf0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x38aaf4: 0xc1053ce  jal         func_414F38
    ctx->pc = 0x38AAF4u;
    SET_GPR_U32(ctx, 31, 0x38AAFCu);
    ctx->pc = 0x38AAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AAF4u;
    // 0x38aaf8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414F38u, 0x38AAF4u, 0x38AAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AAFCu;
label_38aafc:
    // 0x38aafc: 0xc7a4001c  lwc1        $f4, 0x1C($sp)
    ctx->pc = 0x38aafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x38ab00: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x38ab00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38ab04: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x38ab04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x38ab08: 0xc7a50014  lwc1        $f5, 0x14($sp)
    ctx->pc = 0x38ab08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x38ab0c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x38ab0cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x38ab10: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x38ab10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38ab14: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x38ab14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38ab18: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x38ab18u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x38ab1c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x38ab1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x38ab20: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x38ab20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x38ab24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38ab24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38ab28: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x38ab28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x38ab2c: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x38ab2cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x38ab30: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x38ab30u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x38ab34: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x38ab34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x38ab38: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x38ab38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x38ab3c: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x38ab3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x38ab40: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x38ab40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x38ab44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38ab44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ab48: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x38AB48u;
    {
        const bool branch_taken_0x38ab48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AB48u;
        // 0x38ab4c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ab48) {
            ctx->pc = 0x38ABB0u;
            goto label_38abb0;
        }
    }
    ctx->pc = 0x38AB50u;
    // 0x38ab50: 0x46000946  mov.s       $f5, $f1
    ctx->pc = 0x38ab50u;
    ctx->f[5] = FPU_MOV_S(ctx->f[1]);
    // 0x38ab54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x38ab54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38ab58:
    // 0x38ab58: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x38ab58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38ab5c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x38ab5cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x38ab60: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x38ab60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x38ab64: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x38ab64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38ab68: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x38ab68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x38ab6c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x38ab6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x38ab70: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x38ab70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38ab74: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x38ab74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x38ab78: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x38ab78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x38ab7c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x38ab7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x38ab80: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x38ab80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x38ab84: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x38ab84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x38ab88: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x38ab88u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x38ab8c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x38ab8cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x38ab90: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x38ab90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38ab94: 0x0  nop
    ctx->pc = 0x38ab94u;
    // NOP
    // 0x38ab98: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x38AB98u;
    {
        const bool branch_taken_0x38ab98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38ab98) {
            ctx->pc = 0x38AB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38AB98u;
            // 0x38ab9c: 0x46001506  mov.s       $f20, $f2 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x38ABA0u;
            goto label_38aba0;
        }
    }
    ctx->pc = 0x38ABA0u;
label_38aba0:
    // 0x38aba0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x38aba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aba4: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x38aba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x38aba8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x38ABA8u;
    {
        const bool branch_taken_0x38aba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38ABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ABA8u;
        // 0x38abac: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aba8) {
            ctx->pc = 0x38AB58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38ab58;
        }
    }
    ctx->pc = 0x38ABB0u;
label_38abb0:
    // 0x38abb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x38abb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38abb4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x38abb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38abb8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x38ABB8u;
    {
        const bool branch_taken_0x38abb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x38abb8) {
            ctx->pc = 0x38ABC8u;
            goto label_38abc8;
        }
    }
    ctx->pc = 0x38ABC0u;
    // 0x38abc0: 0x46140504  c1          0x140504
    ctx->pc = 0x38abc0u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x38abc4: 0x0  nop
    ctx->pc = 0x38abc4u;
    // NOP
label_38abc8:
    // 0x38abc8: 0xc78080a4  lwc1        $f0, -0x7F5C($gp)
    ctx->pc = 0x38abc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38abcc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x38abccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38abd0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x38abd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38abd4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x38abd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x38abd8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x38abd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38abdc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x38abdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38abe0: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x38abe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x38abe4: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x38abe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x38abe8: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x38abe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x38abec: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x38abecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x38abf0: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x38abf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x38abf4: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x38abf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x38abf8: 0xb2430007  sdl         $v1, 0x7($s2)
    ctx->pc = 0x38abf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38abfc: 0xb6430000  sdr         $v1, 0x0($s2)
    ctx->pc = 0x38abfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38ac00: 0xb244000f  sdl         $a0, 0xF($s2)
    ctx->pc = 0x38ac00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38ac04: 0xb6440008  sdr         $a0, 0x8($s2)
    ctx->pc = 0x38ac04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38ac08: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x38ac08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38ac0c: 0x3e00008  jr          $ra
    ctx->pc = 0x38AC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38AC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AC0Cu;
        // 0x38ac10: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38AC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38AC14u;
    // 0x38ac14: 0x0  nop
    ctx->pc = 0x38ac14u;
    // NOP
    ctx->pc = 0x38ac18u;
}
