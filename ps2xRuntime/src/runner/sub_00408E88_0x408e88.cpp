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

// Function: sub_00408E88
// Address: 0x408e88 - 0x4090e0
void sub_00408E88_0x408e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00408E88_0x408e88");
#endif

    switch (ctx->pc) {
        case 0x408eb4u: goto label_408eb4;
        case 0x408ec0u: goto label_408ec0;
        case 0x408ef8u: goto label_408ef8;
        default: break;
    }

    ctx->pc = 0x408e88u;

    // 0x408e88: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x408e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x408e8c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x408e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x408e90: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x408e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x408e94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x408e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408e98: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x408e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x408e9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x408e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408ea0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x408ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x408ea4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x408ea4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408ea8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x408ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x408eac: 0xc0de64a  jal         func_379928
    ctx->pc = 0x408EACu;
    SET_GPR_U32(ctx, 31, 0x408EB4u);
    ctx->pc = 0x408EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408EACu;
    // 0x408eb0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379928u, 0x408EACu, 0x408EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408EB4u;
label_408eb4:
    // 0x408eb4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x408eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x408eb8: 0xc0de648  jal         func_379920
    ctx->pc = 0x408EB8u;
    SET_GPR_U32(ctx, 31, 0x408EC0u);
    ctx->pc = 0x408EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408EB8u;
    // 0x408ebc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379920u, 0x408EB8u, 0x408EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408EC0u;
label_408ec0:
    // 0x408ec0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x408ec0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408ec4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x408ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x408ec8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x408ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x408ecc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x408eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x408ed0: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x408ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x408ed4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x408ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x408ed8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x408ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x408edc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x408edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x408ee0: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x408ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x408ee4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x408ee4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x408ee8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x408ee8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x408eec: 0x262a0006  addiu       $t2, $s1, 0x6
    ctx->pc = 0x408eecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x408ef0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x408ef0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408ef4: 0x0  nop
    ctx->pc = 0x408ef4u;
    // NOP
label_408ef8:
    // 0x408ef8: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x408ef8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x408efc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x408efcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x408f00: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x408f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x408f04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x408f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x408f08: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x408f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x408f0c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x408f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x408f10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x408f10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x408f14: 0x0  nop
    ctx->pc = 0x408f14u;
    // NOP
    // 0x408f18: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x408F18u;
    {
        const bool branch_taken_0x408f18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x408F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408F18u;
        // 0x408f1c: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408f18) {
            ctx->pc = 0x408F40u;
            goto label_408f40;
        }
    }
    ctx->pc = 0x408F20u;
    // 0x408f20: 0x618c2  srl         $v1, $a2, 3
    ctx->pc = 0x408f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
    // 0x408f24: 0x30c4001f  andi        $a0, $a2, 0x1F
    ctx->pc = 0x408f24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x408f28: 0x3063001c  andi        $v1, $v1, 0x1C
    ctx->pc = 0x408f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)28);
    // 0x408f2c: 0x892004  sllv        $a0, $t1, $a0
    ctx->pc = 0x408f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x408f30: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x408f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x408f34: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x408f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x408f38: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x408f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x408f3c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x408f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_408f40:
    // 0x408f40: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x408f40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x408f44: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x408f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x408f48: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x408f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x408f4c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x408f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x408f50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x408f50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x408f54: 0x0  nop
    ctx->pc = 0x408f54u;
    // NOP
    // 0x408f58: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x408F58u;
    {
        const bool branch_taken_0x408f58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x408f58) {
            ctx->pc = 0x408F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x408F58u;
            // 0x408f5c: 0x94e20000  lhu         $v0, 0x0($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x408F88u;
            goto label_408f88;
        }
    }
    ctx->pc = 0x408F60u;
    // 0x408f60: 0x63202  srl         $a2, $a2, 8
    ctx->pc = 0x408f60u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x408f64: 0x618c2  srl         $v1, $a2, 3
    ctx->pc = 0x408f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
    // 0x408f68: 0x30c4001f  andi        $a0, $a2, 0x1F
    ctx->pc = 0x408f68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x408f6c: 0x3063001c  andi        $v1, $v1, 0x1C
    ctx->pc = 0x408f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)28);
    // 0x408f70: 0x892004  sllv        $a0, $t1, $a0
    ctx->pc = 0x408f70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x408f74: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x408f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x408f78: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x408f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x408f7c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x408f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x408f80: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x408f80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x408f84: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x408f84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_408f88:
    // 0x408f88: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x408f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x408f8c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x408f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x408f90: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x408f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x408f94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x408f94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x408f98: 0x0  nop
    ctx->pc = 0x408f98u;
    // NOP
    // 0x408f9c: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x408F9Cu;
    {
        const bool branch_taken_0x408f9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x408f9c) {
            ctx->pc = 0x408FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x408F9Cu;
            // 0x408fa0: 0x94e20000  lhu         $v0, 0x0($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x408FCCu;
            goto label_408fcc;
        }
    }
    ctx->pc = 0x408FA4u;
    // 0x408fa4: 0x63202  srl         $a2, $a2, 8
    ctx->pc = 0x408fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x408fa8: 0x618c2  srl         $v1, $a2, 3
    ctx->pc = 0x408fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
    // 0x408fac: 0x30c4001f  andi        $a0, $a2, 0x1F
    ctx->pc = 0x408facu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x408fb0: 0x3063001c  andi        $v1, $v1, 0x1C
    ctx->pc = 0x408fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)28);
    // 0x408fb4: 0x892004  sllv        $a0, $t1, $a0
    ctx->pc = 0x408fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x408fb8: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x408fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x408fbc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x408fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x408fc0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x408fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x408fc4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x408fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x408fc8: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x408fc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_408fcc:
    // 0x408fcc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x408fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x408fd0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x408fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x408fd4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x408fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x408fd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x408fd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x408fdc: 0x0  nop
    ctx->pc = 0x408fdcu;
    // NOP
    // 0x408fe0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x408FE0u;
    {
        const bool branch_taken_0x408fe0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x408FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408FE0u;
        // 0x408fe4: 0x63202  srl         $a2, $a2, 8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408fe0) {
            ctx->pc = 0x409008u;
            goto label_409008;
        }
    }
    ctx->pc = 0x408FE8u;
    // 0x408fe8: 0x618c2  srl         $v1, $a2, 3
    ctx->pc = 0x408fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
    // 0x408fec: 0x30c4001f  andi        $a0, $a2, 0x1F
    ctx->pc = 0x408fecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x408ff0: 0x3063001c  andi        $v1, $v1, 0x1C
    ctx->pc = 0x408ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)28);
    // 0x408ff4: 0x892004  sllv        $a0, $t1, $a0
    ctx->pc = 0x408ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x408ff8: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x408ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x408ffc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x408ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x409000: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x409000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x409004: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x409004u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_409008:
    // 0x409008: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x409008u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x40900c: 0x22a102b  sltu        $v0, $s1, $t2
    ctx->pc = 0x40900cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x409010: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x409010u;
    {
        const bool branch_taken_0x409010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x409014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409010u;
        // 0x409014: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409010) {
            ctx->pc = 0x408EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_408ef8;
        }
    }
    ctx->pc = 0x409018u;
    // 0x409018: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x409018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40901c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x40901cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x409020: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x409020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x409024: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x409024u;
    {
        const bool branch_taken_0x409024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x409028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409024u;
        // 0x409028: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409024) {
            ctx->pc = 0x4090B8u;
            goto label_4090b8;
        }
    }
    ctx->pc = 0x40902Cu;
    // 0x40902c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x40902cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x409030: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x409030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x409034: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x409034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x409038: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x409038u;
    {
        const bool branch_taken_0x409038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x409038) {
            ctx->pc = 0x40903Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x409038u;
            // 0x40903c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4090BCu;
            goto label_4090bc;
        }
    }
    ctx->pc = 0x409040u;
    // 0x409040: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x409040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x409044: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x409044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x409048: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x409048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x40904c: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x40904Cu;
    {
        const bool branch_taken_0x40904c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40904c) {
            ctx->pc = 0x409050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40904Cu;
            // 0x409050: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4090BCu;
            goto label_4090bc;
        }
    }
    ctx->pc = 0x409054u;
    // 0x409054: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x409054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x409058: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x409058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x40905c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x40905cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x409060: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x409060u;
    {
        const bool branch_taken_0x409060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x409060) {
            ctx->pc = 0x409064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x409060u;
            // 0x409064: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4090BCu;
            goto label_4090bc;
        }
    }
    ctx->pc = 0x409068u;
    // 0x409068: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x409068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40906c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x40906cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x409070: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x409070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x409074: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x409074u;
    {
        const bool branch_taken_0x409074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x409074) {
            ctx->pc = 0x409078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x409074u;
            // 0x409078: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4090BCu;
            goto label_4090bc;
        }
    }
    ctx->pc = 0x40907Cu;
    // 0x40907c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x40907cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x409080: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x409080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x409084: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x409084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x409088: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x409088u;
    {
        const bool branch_taken_0x409088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x409088) {
            ctx->pc = 0x40908Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x409088u;
            // 0x40908c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4090BCu;
            goto label_4090bc;
        }
    }
    ctx->pc = 0x409090u;
    // 0x409090: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x409090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x409094: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x409094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x409098: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x409098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x40909c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x40909Cu;
    {
        const bool branch_taken_0x40909c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40909c) {
            ctx->pc = 0x4090A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40909Cu;
            // 0x4090a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4090BCu;
            goto label_4090bc;
        }
    }
    ctx->pc = 0x4090A4u;
    // 0x4090a4: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x4090a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x4090a8: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x4090a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x4090ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4090acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4090b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4090B0u;
    {
        const bool branch_taken_0x4090b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4090B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4090B0u;
        // 0x4090b4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4090b0) {
            ctx->pc = 0x4090C0u;
            goto label_4090c0;
        }
    }
    ctx->pc = 0x4090B8u;
label_4090b8:
    // 0x4090b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4090b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4090bc:
    // 0x4090bc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4090bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4090c0:
    // 0x4090c0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4090c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4090c4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4090c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4090c8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4090c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4090cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4090ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4090d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4090d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4090d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4090D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4090D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4090D4u;
        // 0x4090d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4090D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4090DCu;
    // 0x4090dc: 0x0  nop
    ctx->pc = 0x4090dcu;
    // NOP
    ctx->pc = 0x4090e0u;
}
