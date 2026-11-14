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

// Function: sub_00329E08
// Address: 0x329e08 - 0x32a098
void sub_00329E08_0x329e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329E08_0x329e08");
#endif

    switch (ctx->pc) {
        case 0x329e68u: goto label_329e68;
        case 0x329f38u: goto label_329f38;
        case 0x329fe4u: goto label_329fe4;
        default: break;
    }

    ctx->pc = 0x329e08u;

    // 0x329e08: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x329e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x329e0c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x329e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x329e10: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x329e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x329e14: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x329e14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329e18: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x329e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x329e1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x329e1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329e20: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x329e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x329e24: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x329e24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329e28: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x329e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x329e2c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x329e2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329e30: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x329e30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x329e34: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x329e34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329e38: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x329e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x329e3c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x329e3cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x329e40: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x329e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x329e44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x329e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x329e48: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x329e48u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x329e4c: 0x12a00084  beqz        $s5, . + 4 + (0x84 << 2)
    ctx->pc = 0x329E4Cu;
    {
        const bool branch_taken_0x329e4c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x329E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E4Cu;
        // 0x329e50: 0xe7b50098  swc1        $f21, 0x98($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x329e4c) {
            ctx->pc = 0x32A060u;
            goto label_32a060;
        }
    }
    ctx->pc = 0x329E54u;
    // 0x329e54: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x329e54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x329e58: 0x2416000c  addiu       $s6, $zero, 0xC
    ctx->pc = 0x329e58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x329e5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x329e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x329e60: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x329e60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x329e64: 0x2161818  mult        $v1, $s0, $s6
    ctx->pc = 0x329e64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_329e68:
    // 0x329e68: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x329e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x329e6c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x329e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x329e70: 0x10a0006d  beqz        $a1, . + 4 + (0x6D << 2)
    ctx->pc = 0x329E70u;
    {
        const bool branch_taken_0x329e70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x329E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E70u;
        // 0x329e74: 0x711021  addu        $v0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329e70) {
            ctx->pc = 0x32A028u;
            goto label_32a028;
        }
    }
    ctx->pc = 0x329E78u;
    // 0x329e78: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x329e78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x329e7c: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x329e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x329e80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x329e80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329e84: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x329e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329e88: 0x26130001  addiu       $s3, $s0, 0x1
    ctx->pc = 0x329e88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x329e8c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x329e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x329e90: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x329e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x329e94: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x329e94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x329e98: 0x10a00050  beqz        $a1, . + 4 + (0x50 << 2)
    ctx->pc = 0x329E98u;
    {
        const bool branch_taken_0x329e98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x329E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E98u;
        // 0x329e9c: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x329e98) {
            ctx->pc = 0x329FDCu;
            goto label_329fdc;
        }
    }
    ctx->pc = 0x329EA0u;
    // 0x329ea0: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x329ea0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x329ea4: 0x46000206  mov.s       $f8, $f0
    ctx->pc = 0x329ea4u;
    ctx->f[8] = FPU_MOV_S(ctx->f[0]);
    // 0x329ea8: 0x2081018  mult        $v0, $s0, $t0
    ctx->pc = 0x329ea8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x329eac: 0x460009c6  mov.s       $f7, $f1
    ctx->pc = 0x329eacu;
    ctx->f[7] = FPU_MOV_S(ctx->f[1]);
    // 0x329eb0: 0x46001186  mov.s       $f6, $f2
    ctx->pc = 0x329eb0u;
    ctx->f[6] = FPU_MOV_S(ctx->f[2]);
    // 0x329eb4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x329eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329eb8: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x329eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x329ebc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x329ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x329ec0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x329ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x329ec4: 0xc44b0008  lwc1        $f11, 0x8($v0)
    ctx->pc = 0x329ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x329ec8: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x329ec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x329ecc: 0xc44a0000  lwc1        $f10, 0x0($v0)
    ctx->pc = 0x329eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x329ed0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x329ED0u;
    {
        const bool branch_taken_0x329ed0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x329ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329ED0u;
        // 0x329ed4: 0xc4490004  lwc1        $f9, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x329ed0) {
            ctx->pc = 0x329EE0u;
            goto label_329ee0;
        }
    }
    ctx->pc = 0x329ED8u;
    // 0x329ed8: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x329ED8u;
    {
        const bool branch_taken_0x329ed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x329EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329ED8u;
        // 0x329edc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329ed8) {
            ctx->pc = 0x329F38u;
            goto label_329f38;
        }
    }
    ctx->pc = 0x329EE0u;
label_329ee0:
    // 0x329ee0: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x329ee0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x329ee4: 0x482018  mult        $a0, $v0, $t0
    ctx->pc = 0x329ee4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x329ee8: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x329ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x329eec: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x329eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x329ef0: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x329ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x329ef4: 0x46035002  mul.s       $f0, $f10, $f3
    ctx->pc = 0x329ef4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
    // 0x329ef8: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x329ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x329efc: 0x46044842  mul.s       $f1, $f9, $f4
    ctx->pc = 0x329efcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[4]);
    // 0x329f00: 0x46055882  mul.s       $f2, $f11, $f5
    ctx->pc = 0x329f00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x329f04: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x329f04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x329f08: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x329f08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x329f0c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x329f0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x329f10: 0x0  nop
    ctx->pc = 0x329f10u;
    // NOP
    // 0x329f14: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x329F14u;
    {
        const bool branch_taken_0x329f14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x329F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F14u;
        // 0x329f18: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329f14) {
            ctx->pc = 0x329F28u;
            goto label_329f28;
        }
    }
    ctx->pc = 0x329F1Cu;
    // 0x329f1c: 0x46034200  add.s       $f8, $f8, $f3
    ctx->pc = 0x329f1cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[3]);
    // 0x329f20: 0x460439c0  add.s       $f7, $f7, $f4
    ctx->pc = 0x329f20u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
    // 0x329f24: 0x46053180  add.s       $f6, $f6, $f5
    ctx->pc = 0x329f24u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
label_329f28:
    // 0x329f28: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x329f28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x329f2c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x329F2Cu;
    {
        const bool branch_taken_0x329f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F2Cu;
        // 0x329f30: 0x24e50002  addiu       $a1, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329f2c) {
            ctx->pc = 0x329FD0u;
            goto label_329fd0;
        }
    }
    ctx->pc = 0x329F34u;
    // 0x329f34: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x329f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_329f38:
    // 0x329f38: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x329f38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x329f3c: 0x482818  mult        $a1, $v0, $t0
    ctx->pc = 0x329f3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x329f40: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x329f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x329f44: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x329f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x329f48: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x329f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x329f4c: 0x46035002  mul.s       $f0, $f10, $f3
    ctx->pc = 0x329f4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
    // 0x329f50: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x329f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x329f54: 0x46044842  mul.s       $f1, $f9, $f4
    ctx->pc = 0x329f54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[4]);
    // 0x329f58: 0x46055882  mul.s       $f2, $f11, $f5
    ctx->pc = 0x329f58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x329f5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x329f5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x329f60: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x329f60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x329f64: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x329f64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x329f68: 0x0  nop
    ctx->pc = 0x329f68u;
    // NOP
    // 0x329f6c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x329F6Cu;
    {
        const bool branch_taken_0x329f6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x329F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F6Cu;
        // 0x329f70: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329f6c) {
            ctx->pc = 0x329F80u;
            goto label_329f80;
        }
    }
    ctx->pc = 0x329F74u;
    // 0x329f74: 0x46034200  add.s       $f8, $f8, $f3
    ctx->pc = 0x329f74u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[3]);
    // 0x329f78: 0x460439c0  add.s       $f7, $f7, $f4
    ctx->pc = 0x329f78u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
    // 0x329f7c: 0x46053180  add.s       $f6, $f6, $f5
    ctx->pc = 0x329f7cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
label_329f80:
    // 0x329f80: 0x482818  mult        $a1, $v0, $t0
    ctx->pc = 0x329f80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x329f84: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x329f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x329f88: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x329f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x329f8c: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x329f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x329f90: 0x46035002  mul.s       $f0, $f10, $f3
    ctx->pc = 0x329f90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
    // 0x329f94: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x329f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x329f98: 0x46044842  mul.s       $f1, $f9, $f4
    ctx->pc = 0x329f98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[4]);
    // 0x329f9c: 0x46055882  mul.s       $f2, $f11, $f5
    ctx->pc = 0x329f9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x329fa0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x329fa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x329fa4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x329fa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x329fa8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x329fa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x329fac: 0x0  nop
    ctx->pc = 0x329facu;
    // NOP
    // 0x329fb0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x329FB0u;
    {
        const bool branch_taken_0x329fb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x329FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329FB0u;
        // 0x329fb4: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329fb0) {
            ctx->pc = 0x329FC4u;
            goto label_329fc4;
        }
    }
    ctx->pc = 0x329FB8u;
    // 0x329fb8: 0x46034200  add.s       $f8, $f8, $f3
    ctx->pc = 0x329fb8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[3]);
    // 0x329fbc: 0x460439c0  add.s       $f7, $f7, $f4
    ctx->pc = 0x329fbcu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
    // 0x329fc0: 0x46053180  add.s       $f6, $f6, $f5
    ctx->pc = 0x329fc0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
label_329fc4:
    // 0x329fc4: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x329fc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x329fc8: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x329FC8u;
    {
        const bool branch_taken_0x329fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329FC8u;
        // 0x329fcc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329fc8) {
            ctx->pc = 0x329F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329f38;
        }
    }
    ctx->pc = 0x329FD0u;
label_329fd0:
    // 0x329fd0: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x329fd0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x329fd4: 0xe7a70004  swc1        $f7, 0x4($sp)
    ctx->pc = 0x329fd4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x329fd8: 0xe7a80000  swc1        $f8, 0x0($sp)
    ctx->pc = 0x329fd8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_329fdc:
    // 0x329fdc: 0xc104d24  jal         func_413490
    ctx->pc = 0x329FDCu;
    SET_GPR_U32(ctx, 31, 0x329FE4u);
    ctx->pc = 0x329FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329FDCu;
    // 0x329fe0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x329FDCu, 0x329FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329FE4u;
label_329fe4:
    // 0x329fe4: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x329fe4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x329fe8: 0x0  nop
    ctx->pc = 0x329fe8u;
    // NOP
    // 0x329fec: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x329FECu;
    {
        const bool branch_taken_0x329fec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x329FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329FECu;
        // 0x329ff0: 0xc7a20000  lwc1        $f2, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x329fec) {
            ctx->pc = 0x32A050u;
            goto label_32a050;
        }
    }
    ctx->pc = 0x329FF4u;
    // 0x329ff4: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x329ff4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x329ff8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x329ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x329ffc: 0x2161818  mult        $v1, $s0, $s6
    ctx->pc = 0x329ffcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x32a000: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x32a000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a004: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x32a004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x32a008: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32a008u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32a00c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x32a00cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x32a010: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x32a010u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x32a014: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x32a014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x32a018: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x32a018u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x32a01c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x32A01Cu;
    {
        const bool branch_taken_0x32a01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A01Cu;
        // 0x32a020: 0xe4430004  swc1        $f3, 0x4($v0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a01c) {
            ctx->pc = 0x32A050u;
            goto label_32a050;
        }
    }
    ctx->pc = 0x32A024u;
    // 0x32a024: 0x0  nop
    ctx->pc = 0x32a024u;
    // NOP
label_32a028:
    // 0x32a028: 0x12510009  beq         $s2, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x32A028u;
    {
        const bool branch_taken_0x32a028 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        ctx->pc = 0x32A02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A028u;
        // 0x32a02c: 0x26130001  addiu       $s3, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a028) {
            ctx->pc = 0x32A050u;
            goto label_32a050;
        }
    }
    ctx->pc = 0x32A030u;
    // 0x32a030: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x32a030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x32a034: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x32a034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a038: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x32a038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x32a03c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x32a03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x32a040: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x32a040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32a044: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x32a044u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x32a048: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x32a048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a04c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x32a04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_32a050:
    // 0x32a050: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x32a050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a054: 0x215102b  sltu        $v0, $s0, $s5
    ctx->pc = 0x32a054u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x32a058: 0x1440ff83  bnez        $v0, . + 4 + (-0x7D << 2)
    ctx->pc = 0x32A058u;
    {
        const bool branch_taken_0x32a058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A058u;
        // 0x32a05c: 0x2161818  mult        $v1, $s0, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a058) {
            ctx->pc = 0x329E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329e68;
        }
    }
    ctx->pc = 0x32A060u;
label_32a060:
    // 0x32a060: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x32a060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a064: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x32a064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x32a068: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x32a068u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32a06c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x32a06cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32a070: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x32a070u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32a074: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32a074u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32a078: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x32a078u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32a07c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x32a07cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32a080: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32a080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a084: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x32a084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x32a088: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x32a088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x32a08c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x32a08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x32a090: 0x3e00008  jr          $ra
    ctx->pc = 0x32A090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A090u;
        // 0x32a094: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A098u;
}
