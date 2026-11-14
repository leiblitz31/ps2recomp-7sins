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

// Function: sub_00358A50
// Address: 0x358a50 - 0x358e40
void sub_00358A50_0x358a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358A50_0x358a50");
#endif

    switch (ctx->pc) {
        case 0x358ac0u: goto label_358ac0;
        case 0x358ad8u: goto label_358ad8;
        case 0x358bc8u: goto label_358bc8;
        case 0x358c90u: goto label_358c90;
        case 0x358dc0u: goto label_358dc0;
        case 0x358dd4u: goto label_358dd4;
        case 0x358df8u: goto label_358df8;
        case 0x358e08u: goto label_358e08;
        default: break;
    }

    ctx->pc = 0x358a50u;

    // 0x358a50: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x358a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x358a54: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x358a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x358a58: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x358a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x358a5c: 0x2442b310  addiu       $v0, $v0, -0x4CF0
    ctx->pc = 0x358a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947600));
    // 0x358a60: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x358a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x358a64: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x358a64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358a68: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x358a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x358a6c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x358a6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358a70: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x358a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x358a74: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x358a74u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358a78: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x358a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x358a7c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x358a7cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358a80: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x358a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x358a84: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x358a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x358a88: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x358a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x358a8c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x358a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x358a90: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x358a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x358a94: 0x8fc3006c  lw          $v1, 0x6C($fp)
    ctx->pc = 0x358a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 108)));
    // 0x358a98: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x358a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x358a9c: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x358a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x358aa0: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x358aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x358aa4: 0x10c000d0  beqz        $a2, . + 4 + (0xD0 << 2)
    ctx->pc = 0x358AA4u;
    {
        const bool branch_taken_0x358aa4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x358AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358AA4u;
        // 0x358aa8: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358aa4) {
            ctx->pc = 0x358DE8u;
            goto label_358de8;
        }
    }
    ctx->pc = 0x358AACu;
    // 0x358aac: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x358aacu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
    // 0x358ab0: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x358ab0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x358ab4: 0x27d5001c  addiu       $s5, $fp, 0x1C
    ctx->pc = 0x358ab4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
    // 0x358ab8: 0x36d6ffff  ori         $s6, $s6, 0xFFFF
    ctx->pc = 0x358ab8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x358abc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x358abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_358ac0:
    // 0x358ac0: 0x138180  sll         $s0, $s3, 6
    ctx->pc = 0x358ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x358ac4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x358ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358ac8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x358ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358acc: 0x508821  addu        $s1, $v0, $s0
    ctx->pc = 0x358accu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x358ad0: 0xc104d64  jal         func_413590
    ctx->pc = 0x358AD0u;
    SET_GPR_U32(ctx, 31, 0x358AD8u);
    ctx->pc = 0x358AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358AD0u;
    // 0x358ad4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413590u, 0x358AD0u, 0x358AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358AD8u;
label_358ad8:
    // 0x358ad8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x358ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x358adc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x358adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x358ae0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x358ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x358ae4: 0x10430020  beq         $v0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x358AE4u;
    {
        const bool branch_taken_0x358ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x358AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358AE4u;
        // 0x358ae8: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358ae4) {
            ctx->pc = 0x358B68u;
            goto label_358b68;
        }
    }
    ctx->pc = 0x358AECu;
    // 0x358aec: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x358aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x358af0: 0xc6220020  lwc1        $f2, 0x20($s1)
    ctx->pc = 0x358af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x358af4: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x358af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x358af8: 0xc4480004  lwc1        $f8, 0x4($v0)
    ctx->pc = 0x358af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x358afc: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x358afcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x358b00: 0xc4670004  lwc1        $f7, 0x4($v1)
    ctx->pc = 0x358b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x358b04: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x358b04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x358b08: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x358b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x358b0c: 0x46084202  mul.s       $f8, $f8, $f8
    ctx->pc = 0x358b0cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x358b10: 0xc6260004  lwc1        $f6, 0x4($s1)
    ctx->pc = 0x358b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x358b14: 0x460739c2  mul.s       $f7, $f7, $f7
    ctx->pc = 0x358b14u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x358b18: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x358b18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x358b1c: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x358b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x358b20: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x358b20u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x358b24: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x358b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x358b28: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x358b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x358b2c: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x358b2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x358b30: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x358b30u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x358b34: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x358b34u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x358b38: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x358b38u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x358b3c: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x358b3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x358b40: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x358b40u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x358b44: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x358b44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x358b48: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x358b48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x358b4c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x358b4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x358b50: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x358b50u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x358b54: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x358b54u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x358b58: 0x46010044  c1          0x10044
    ctx->pc = 0x358b58u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x358b5c: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x358b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x358b60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x358B60u;
    {
        const bool branch_taken_0x358b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358B60u;
        // 0x358b64: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x358b60) {
            ctx->pc = 0x358B6Cu;
            goto label_358b6c;
        }
    }
    ctx->pc = 0x358B68u;
label_358b68:
    // 0x358b68: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x358b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_358b6c:
    // 0x358b6c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x358b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x358b70: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x358b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x358b74: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x358b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x358b78: 0x8c62e880  lw          $v0, -0x1780($v1)
    ctx->pc = 0x358b78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61E880u));
    // 0x358b7c: 0x26710001  addiu       $s1, $s3, 0x1
    ctx->pc = 0x358b7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x358b80: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x358b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x358b84: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x358b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x358b88: 0x24430094  addiu       $v1, $v0, 0x94
    ctx->pc = 0x358b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x358b8c: 0xc4410094  lwc1        $f1, 0x94($v0)
    ctx->pc = 0x358b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x358b90: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x358b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x358b94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x358b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x358b98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x358b98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x358b9c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x358b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x358ba0: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x358ba0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x358ba4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x358ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x358ba8: 0xc465000c  lwc1        $f5, 0xC($v1)
    ctx->pc = 0x358ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x358bac: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x358bacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x358bb0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x358bb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x358bb4: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x358bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x358bb8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x358bb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x358bbc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x358BBCu;
    {
        const bool branch_taken_0x358bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358BBCu;
        // 0x358bc0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358bbc) {
            ctx->pc = 0x358C00u;
            goto label_358c00;
        }
    }
    ctx->pc = 0x358BC4u;
    // 0x358bc4: 0x0  nop
    ctx->pc = 0x358bc4u;
    // NOP
label_358bc8:
    // 0x358bc8: 0x10d60014  beq         $a2, $s6, . + 4 + (0x14 << 2)
    ctx->pc = 0x358BC8u;
    {
        const bool branch_taken_0x358bc8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 22));
        ctx->pc = 0x358BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358BC8u;
        // 0x358bcc: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358bc8) {
            ctx->pc = 0x358C1Cu;
            goto label_358c1c;
        }
    }
    ctx->pc = 0x358BD0u;
    // 0x358bd0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x358bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x358bd4: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x358bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x358bd8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x358bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x358bdc: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x358bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x358be0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x358be0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x358be4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x358be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x358be8: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x358be8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x358bec: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x358becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x358bf0: 0xc465000c  lwc1        $f5, 0xC($v1)
    ctx->pc = 0x358bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x358bf4: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x358bf4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x358bf8: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x358bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x358bfc: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x358bfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_358c00:
    // 0x358c00: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x358c00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x358c04: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x358c04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x358c08: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x358c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x358c0c: 0x0  nop
    ctx->pc = 0x358c0cu;
    // NOP
    // 0x358c10: 0x4502ffed  bc1fl       . + 4 + (-0x13 << 2)
    ctx->pc = 0x358C10u;
    {
        const bool branch_taken_0x358c10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x358c10) {
            ctx->pc = 0x358C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x358C10u;
            // 0x358c14: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358bc8;
        }
    }
    ctx->pc = 0x358C18u;
    // 0x358c18: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x358c18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_358c1c:
    // 0x358c1c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x358c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x358c20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x358c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x358c24: 0x1443002c  bne         $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x358C24u;
    {
        const bool branch_taken_0x358c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x358C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358C24u;
        // 0x358c28: 0x8c82e880  lw          $v0, -0x1780($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358c24) {
            ctx->pc = 0x358CD8u;
            goto label_358cd8;
        }
    }
    ctx->pc = 0x358C2Cu;
    // 0x358c2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x358c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358c30: 0x8f83bebc  lw          $v1, -0x4144($gp)
    ctx->pc = 0x358c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950588)));
    // 0x358c34: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x358c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x358c38: 0xc7a80000  lwc1        $f8, 0x0($sp)
    ctx->pc = 0x358c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x358c3c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x358c3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x358c40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x358c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x358c44: 0xc7a70004  lwc1        $f7, 0x4($sp)
    ctx->pc = 0x358c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x358c48: 0x24430060  addiu       $v1, $v0, 0x60
    ctx->pc = 0x358c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x358c4c: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x358c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x358c50: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x358c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x358c54: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x358c54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x358c58: 0xc7a60008  lwc1        $f6, 0x8($sp)
    ctx->pc = 0x358c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x358c5c: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x358c5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x358c60: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x358c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x358c64: 0xc7a5000c  lwc1        $f5, 0xC($sp)
    ctx->pc = 0x358c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x358c68: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x358c68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x358c6c: 0xc464000c  lwc1        $f4, 0xC($v1)
    ctx->pc = 0x358c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x358c70: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x358c70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x358c74: 0x460028c7  neg.s       $f3, $f5
    ctx->pc = 0x358c74u;
    ctx->f[3] = FPU_NEG_S(ctx->f[5]);
    // 0x358c78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x358c78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x358c7c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x358c7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x358c80: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x358c80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x358c84: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x358C84u;
    {
        const bool branch_taken_0x358c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358C84u;
        // 0x358c88: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358c84) {
            ctx->pc = 0x358CCCu;
            goto label_358ccc;
        }
    }
    ctx->pc = 0x358C8Cu;
    // 0x358c8c: 0x0  nop
    ctx->pc = 0x358c8cu;
    // NOP
label_358c90:
    // 0x358c90: 0x10c40011  beq         $a2, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x358C90u;
    {
        const bool branch_taken_0x358c90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x358C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358C90u;
        // 0x358c94: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358c90) {
            ctx->pc = 0x358CD8u;
            goto label_358cd8;
        }
    }
    ctx->pc = 0x358C98u;
    // 0x358c98: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x358c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x358c9c: 0x46002907  neg.s       $f4, $f5
    ctx->pc = 0x358c9cu;
    ctx->f[4] = FPU_NEG_S(ctx->f[5]);
    // 0x358ca0: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x358ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x358ca4: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x358ca4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x358ca8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x358ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x358cac: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x358cacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x358cb0: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x358cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x358cb4: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x358cb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x358cb8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x358cb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x358cbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x358cbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x358cc0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x358cc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x358cc4: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x358cc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x358cc8: 0x0  nop
    ctx->pc = 0x358cc8u;
    // NOP
label_358ccc:
    // 0x358ccc: 0x4502fff0  bc1fl       . + 4 + (-0x10 << 2)
    ctx->pc = 0x358CCCu;
    {
        const bool branch_taken_0x358ccc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x358ccc) {
            ctx->pc = 0x358CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x358CCCu;
            // 0x358cd0: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358c90;
        }
    }
    ctx->pc = 0x358CD4u;
    // 0x358cd4: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x358cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
label_358cd8:
    // 0x358cd8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x358cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358cdc: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x358CDCu;
    {
        const bool branch_taken_0x358cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x358CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358CDCu;
        // 0x358ce0: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358cdc) {
            ctx->pc = 0x358DD4u;
            goto label_358dd4;
        }
    }
    ctx->pc = 0x358CE4u;
    // 0x358ce4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x358ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x358ce8: 0x400013  mtlo        $v0
    ctx->pc = 0x358ce8u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x358cec: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x358cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x358cf0: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x358cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x358cf4: 0x72822000  madd        $a0, $s4, $v0
    ctx->pc = 0x358cf4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x358cf8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x358cf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x358cfc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x358cfcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x358d00: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x358d00u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x358d04: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x358d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x358d08: 0x24870020  addiu       $a3, $a0, 0x20
    ctx->pc = 0x358d08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x358d0c: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x358d0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x358d10: 0xc4880000  lwc1        $f8, 0x0($a0)
    ctx->pc = 0x358d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x358d14: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x358d14u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x358d18: 0xc48a0004  lwc1        $f10, 0x4($a0)
    ctx->pc = 0x358d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x358d1c: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x358d1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x358d20: 0xc4860010  lwc1        $f6, 0x10($a0)
    ctx->pc = 0x358d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x358d24: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x358d24u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x358d28: 0xc48b0008  lwc1        $f11, 0x8($a0)
    ctx->pc = 0x358d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x358d2c: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x358d2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x358d30: 0xc4840020  lwc1        $f4, 0x20($a0)
    ctx->pc = 0x358d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x358d34: 0x7c830030  sq          $v1, 0x30($a0)
    ctx->pc = 0x358d34u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
    // 0x358d38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x358d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358d3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x358d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x358d40: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x358d40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
    // 0x358d44: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x358d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x358d48: 0xc6e10000  lwc1        $f1, 0x0($s7)
    ctx->pc = 0x358d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x358d4c: 0xc6e50004  lwc1        $f5, 0x4($s7)
    ctx->pc = 0x358d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x358d50: 0xc4c70004  lwc1        $f7, 0x4($a2)
    ctx->pc = 0x358d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x358d54: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x358d54u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x358d58: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x358d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x358d5c: 0x46014202  mul.s       $f8, $f8, $f1
    ctx->pc = 0x358d5cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x358d60: 0x46055282  mul.s       $f10, $f10, $f5
    ctx->pc = 0x358d60u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
    // 0x358d64: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x358d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x358d68: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x358d68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x358d6c: 0xc4c90008  lwc1        $f9, 0x8($a2)
    ctx->pc = 0x358d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x358d70: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x358d70u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x358d74: 0xc4e30008  lwc1        $f3, 0x8($a3)
    ctx->pc = 0x358d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x358d78: 0x460539c2  mul.s       $f7, $f7, $f5
    ctx->pc = 0x358d78u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x358d7c: 0x460a4200  add.s       $f8, $f8, $f10
    ctx->pc = 0x358d7cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[10]);
    // 0x358d80: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x358d80u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x358d84: 0x46073180  add.s       $f6, $f6, $f7
    ctx->pc = 0x358d84u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x358d88: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x358d88u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x358d8c: 0x46005ac2  mul.s       $f11, $f11, $f0
    ctx->pc = 0x358d8cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x358d90: 0x46004a42  mul.s       $f9, $f9, $f0
    ctx->pc = 0x358d90u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x358d94: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x358d94u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x358d98: 0x460b4200  add.s       $f8, $f8, $f11
    ctx->pc = 0x358d98u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[11]);
    // 0x358d9c: 0x46093180  add.s       $f6, $f6, $f9
    ctx->pc = 0x358d9cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[9]);
    // 0x358da0: 0xe4840048  swc1        $f4, 0x48($a0)
    ctx->pc = 0x358da0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x358da4: 0xe4880040  swc1        $f8, 0x40($a0)
    ctx->pc = 0x358da4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x358da8: 0x1682000a  bne         $s4, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x358DA8u;
    {
        const bool branch_taken_0x358da8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x358DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358DA8u;
        // 0x358dac: 0xe4860044  swc1        $f6, 0x44($a0) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x358da8) {
            ctx->pc = 0x358DD4u;
            goto label_358dd4;
        }
    }
    ctx->pc = 0x358DB0u;
    // 0x358db0: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x358db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x358db4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x358db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x358db8: 0xc0cb58c  jal         func_32D630
    ctx->pc = 0x358DB8u;
    SET_GPR_U32(ctx, 31, 0x358DC0u);
    ctx->pc = 0x358DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358DB8u;
    // 0x358dbc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D630u, 0x358DB8u, 0x358DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358DC0u;
label_358dc0:
    // 0x358dc0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x358dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x358dc4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x358dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358dc8: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x358dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x358dcc: 0xc111718  jal         func_445C60
    ctx->pc = 0x358DCCu;
    SET_GPR_U32(ctx, 31, 0x358DD4u);
    ctx->pc = 0x358DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358DCCu;
    // 0x358dd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C60u, 0x358DCCu, 0x358DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358DD4u;
label_358dd4:
    // 0x358dd4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x358dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x358dd8: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x358dd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358ddc: 0x263102b  sltu        $v0, $s3, $v1
    ctx->pc = 0x358ddcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x358de0: 0x1440ff37  bnez        $v0, . + 4 + (-0xC9 << 2)
    ctx->pc = 0x358DE0u;
    {
        const bool branch_taken_0x358de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x358DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358DE0u;
        // 0x358de4: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358de0) {
            ctx->pc = 0x358AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358ac0;
        }
    }
    ctx->pc = 0x358DE8u;
label_358de8:
    // 0x358de8: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x358DE8u;
    {
        const bool branch_taken_0x358de8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x358DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358DE8u;
        // 0x358dec: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358de8) {
            ctx->pc = 0x358E08u;
            goto label_358e08;
        }
    }
    ctx->pc = 0x358DF0u;
    // 0x358df0: 0xc0cb58c  jal         func_32D630
    ctx->pc = 0x358DF0u;
    SET_GPR_U32(ctx, 31, 0x358DF8u);
    ctx->pc = 0x358DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358DF0u;
    // 0x358df4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D630u, 0x358DF0u, 0x358DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358DF8u;
label_358df8:
    // 0x358df8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x358df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x358dfc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x358dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358e00: 0xc111718  jal         func_445C60
    ctx->pc = 0x358E00u;
    SET_GPR_U32(ctx, 31, 0x358E08u);
    ctx->pc = 0x358E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358E00u;
    // 0x358e04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C60u, 0x358E00u, 0x358E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358E08u;
label_358e08:
    // 0x358e08: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x358e08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358e0c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x358e0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x358e10: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x358e10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x358e14: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x358e14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x358e18: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x358e18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x358e1c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x358e1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x358e20: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x358e20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x358e24: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x358e24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x358e28: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x358e28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x358e2c: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x358e2cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x358e30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x358e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x358e34: 0x3e00008  jr          $ra
    ctx->pc = 0x358E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358E34u;
        // 0x358e38: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358E3Cu;
    // 0x358e3c: 0x0  nop
    ctx->pc = 0x358e3cu;
    // NOP
    ctx->pc = 0x358e40u;
}
