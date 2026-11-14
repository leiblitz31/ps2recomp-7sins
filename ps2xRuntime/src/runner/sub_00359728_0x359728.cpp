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

// Function: sub_00359728
// Address: 0x359728 - 0x35a520
void sub_00359728_0x359728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359728_0x359728");
#endif

    switch (ctx->pc) {
        case 0x3597e4u: goto label_3597e4;
        case 0x359810u: goto label_359810;
        case 0x359858u: goto label_359858;
        case 0x3598e0u: goto label_3598e0;
        case 0x3598fcu: goto label_3598fc;
        case 0x359940u: goto label_359940;
        case 0x359968u: goto label_359968;
        case 0x3599c0u: goto label_3599c0;
        case 0x3599e8u: goto label_3599e8;
        case 0x359a18u: goto label_359a18;
        case 0x359d6cu: goto label_359d6c;
        case 0x359da4u: goto label_359da4;
        case 0x359dc8u: goto label_359dc8;
        case 0x359e48u: goto label_359e48;
        case 0x359e98u: goto label_359e98;
        case 0x359ec0u: goto label_359ec0;
        case 0x359f48u: goto label_359f48;
        case 0x359f70u: goto label_359f70;
        case 0x35a0a8u: goto label_35a0a8;
        case 0x35a1ecu: goto label_35a1ec;
        case 0x35a234u: goto label_35a234;
        case 0x35a258u: goto label_35a258;
        case 0x35a3d8u: goto label_35a3d8;
        default: break;
    }

    ctx->pc = 0x359728u;

    // 0x359728: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x359728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x35972c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x35972cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x359730: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x359730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x359734: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x359734u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359738: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x359738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x35973c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x35973cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x359740: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x359740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x359744: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x359744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x359748: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x359748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x35974c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x35974cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x359750: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x359750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x359754: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x359754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x359758: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x359758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35975c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x35975cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x359760: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x359760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x359764: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x359764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x359768: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x359768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35976c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x35976cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x359770: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x359770u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x359774: 0xc5000070  lwc1        $f0, 0x70($t0)
    ctx->pc = 0x359774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x359778: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x359778u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x35977c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x35977cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x359780: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x359780u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x359784: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x359784u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x359788: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x359788u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x35978c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x35978cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x359790: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x359790u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x359794: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x359794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x359798: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x359798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35979c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x35979cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x3597a0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x3597a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3597a4: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3597a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x3597a8: 0xc5000074  lwc1        $f0, 0x74($t0)
    ctx->pc = 0x3597a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3597ac: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3597acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3597b0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3597b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3597b4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3597b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3597b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3597b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3597bc: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x3597bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3597c0: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x3597c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3597c4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x3597c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3597c8: 0x8d100004  lw          $s0, 0x4($t0)
    ctx->pc = 0x3597c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x3597cc: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x3597ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3597d0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3597d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3597d4: 0x14a302bc  bne         $a1, $v1, . + 4 + (0x2BC << 2)
    ctx->pc = 0x3597D4u;
    {
        const bool branch_taken_0x3597d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3597D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3597D4u;
        // 0x3597d8: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3597d4) {
            ctx->pc = 0x35A2C8u;
            goto label_35a2c8;
        }
    }
    ctx->pc = 0x3597DCu;
    // 0x3597dc: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x3597DCu;
    SET_GPR_U32(ctx, 31, 0x3597E4u);
    ctx->pc = 0x3597E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3597DCu;
    // 0x3597e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x3597DCu, 0x3597E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3597E4u;
label_3597e4:
    // 0x3597e4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3597e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3597e8: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x3597e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x3597ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3597ecu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x3597f0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x3597f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x3597f4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3597F4u;
    {
        const bool branch_taken_0x3597f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3597F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3597F4u;
        // 0x3597f8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3597f4) {
            ctx->pc = 0x359830u;
            goto label_359830;
        }
    }
    ctx->pc = 0x3597FCu;
    // 0x3597fc: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x3597fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x359800: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x359800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x359804: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x359804u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x359808: 0xf  sync
    ctx->pc = 0x359808u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35980c: 0x40f  sync.p
    ctx->pc = 0x35980cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_359810:
    // 0x359810: 0x0  nop
    ctx->pc = 0x359810u;
    // NOP
    // 0x359814: 0x0  nop
    ctx->pc = 0x359814u;
    // NOP
    // 0x359818: 0x0  nop
    ctx->pc = 0x359818u;
    // NOP
    // 0x35981c: 0x0  nop
    ctx->pc = 0x35981cu;
    // NOP
    // 0x359820: 0x0  nop
    ctx->pc = 0x359820u;
    // NOP
    // 0x359824: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x359824u;
    {
        const bool branch_taken_0x359824 = (false);
        if (branch_taken_0x359824) {
            ctx->pc = 0x359810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359810;
        }
    }
    ctx->pc = 0x35982Cu;
    // 0x35982c: 0x0  nop
    ctx->pc = 0x35982cu;
    // NOP
label_359830:
    // 0x359830: 0x3c021001  lui         $v0, 0x1001
    ctx->pc = 0x359830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4097 << 16));
    // 0x359834: 0x8c42d000  lw          $v0, -0x3000($v0)
    ctx->pc = 0x359834u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x359838: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x359838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35983c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x35983Cu;
    {
        const bool branch_taken_0x35983c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35983Cu;
        // 0x359840: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35983c) {
            ctx->pc = 0x359878u;
            goto label_359878;
        }
    }
    ctx->pc = 0x359844u;
    // 0x359844: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x359844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x359848: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x359848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35984c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35984cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x359850: 0xf  sync
    ctx->pc = 0x359850u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x359854: 0x40f  sync.p
    ctx->pc = 0x359854u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_359858:
    // 0x359858: 0x0  nop
    ctx->pc = 0x359858u;
    // NOP
    // 0x35985c: 0x0  nop
    ctx->pc = 0x35985cu;
    // NOP
    // 0x359860: 0x0  nop
    ctx->pc = 0x359860u;
    // NOP
    // 0x359864: 0x0  nop
    ctx->pc = 0x359864u;
    // NOP
    // 0x359868: 0x0  nop
    ctx->pc = 0x359868u;
    // NOP
    // 0x35986c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35986Cu;
    {
        const bool branch_taken_0x35986c = (false);
        if (branch_taken_0x35986c) {
            ctx->pc = 0x359858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359858;
        }
    }
    ctx->pc = 0x359874u;
    // 0x359874: 0x0  nop
    ctx->pc = 0x359874u;
    // NOP
label_359878:
    // 0x359878: 0x2a4200cd  slti        $v0, $s2, 0xCD
    ctx->pc = 0x359878u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)205) ? 1 : 0);
    // 0x35987c: 0x14400166  bnez        $v0, . + 4 + (0x166 << 2)
    ctx->pc = 0x35987Cu;
    {
        const bool branch_taken_0x35987c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35987c) {
            ctx->pc = 0x359E18u;
            goto label_359e18;
        }
    }
    ctx->pc = 0x359884u;
    // 0x359884: 0x3c0c1000  lui         $t4, 0x1000
    ctx->pc = 0x359884u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4096 << 16));
    // 0x359888: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x359888u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x35988c: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x35988cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x359890: 0x3c0e1000  lui         $t6, 0x1000
    ctx->pc = 0x359890u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4096 << 16));
    // 0x359894: 0x3c171000  lui         $s7, 0x1000
    ctx->pc = 0x359894u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)4096 << 16));
    // 0x359898: 0x3c161000  lui         $s6, 0x1000
    ctx->pc = 0x359898u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)4096 << 16));
    // 0x35989c: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x35989cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
    // 0x3598a0: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x3598a0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x3598a4: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x3598a4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x3598a8: 0x3c191000  lui         $t9, 0x1000
    ctx->pc = 0x3598a8u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)4096 << 16));
    // 0x3598ac: 0x358cd000  ori         $t4, $t4, 0xD000
    ctx->pc = 0x3598acu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)53248);
    // 0x3598b0: 0x354ae020  ori         $t2, $t2, 0xE020
    ctx->pc = 0x3598b0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)57376);
    // 0x3598b4: 0x240d0100  addiu       $t5, $zero, 0x100
    ctx->pc = 0x3598b4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3598b8: 0x356bd400  ori         $t3, $t3, 0xD400
    ctx->pc = 0x3598b8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)54272);
    // 0x3598bc: 0x240f0200  addiu       $t7, $zero, 0x200
    ctx->pc = 0x3598bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3598c0: 0x35cee010  ori         $t6, $t6, 0xE010
    ctx->pc = 0x3598c0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)57360);
    // 0x3598c4: 0x36f7d480  ori         $s7, $s7, 0xD480
    ctx->pc = 0x3598c4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)54400);
    // 0x3598c8: 0x36d6d410  ori         $s6, $s6, 0xD410
    ctx->pc = 0x3598c8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)54288);
    // 0x3598cc: 0x36b5d420  ori         $s5, $s5, 0xD420
    ctx->pc = 0x3598ccu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)54304);
    // 0x3598d0: 0x3694d080  ori         $s4, $s4, 0xD080
    ctx->pc = 0x3598d0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)53376);
    // 0x3598d4: 0x3673d010  ori         $s3, $s3, 0xD010
    ctx->pc = 0x3598d4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)53264);
    // 0x3598d8: 0x3739d020  ori         $t9, $t9, 0xD020
    ctx->pc = 0x3598d8u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)53280);
    // 0x3598dc: 0x241e0330  addiu       $fp, $zero, 0x330
    ctx->pc = 0x3598dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
label_3598e0:
    // 0x3598e0: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x3598e0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 12), 0))); // MMIO: 0x1000d000
    // 0x3598e4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3598e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3598e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3598E8u;
    {
        const bool branch_taken_0x3598e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3598e8) {
            ctx->pc = 0x359918u;
            goto label_359918;
        }
    }
    ctx->pc = 0x3598F0u;
    // 0x3598f0: 0xad4d0000  sw          $t5, 0x0($t2)
    ctx->pc = 0x3598f0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 13));
    // 0x3598f4: 0xf  sync
    ctx->pc = 0x3598f4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3598f8: 0x40f  sync.p
    ctx->pc = 0x3598f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3598fc:
    // 0x3598fc: 0x0  nop
    ctx->pc = 0x3598fcu;
    // NOP
    // 0x359900: 0x0  nop
    ctx->pc = 0x359900u;
    // NOP
    // 0x359904: 0x0  nop
    ctx->pc = 0x359904u;
    // NOP
    // 0x359908: 0x0  nop
    ctx->pc = 0x359908u;
    // NOP
    // 0x35990c: 0x0  nop
    ctx->pc = 0x35990cu;
    // NOP
    // 0x359910: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x359910u;
    {
        const bool branch_taken_0x359910 = (false);
        if (branch_taken_0x359910) {
            ctx->pc = 0x3598FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3598fc;
        }
    }
    ctx->pc = 0x359918u;
label_359918:
    // 0x359918: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x359918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x35991c: 0x2647ff34  addiu       $a3, $s2, -0xCC
    ctx->pc = 0x35991cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967092));
    // 0x359920: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x359920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x359924: 0x26120cc0  addiu       $s2, $s0, 0xCC0
    ctx->pc = 0x359924u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3264));
    // 0x359928: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x359928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35992c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x35992Cu;
    {
        const bool branch_taken_0x35992c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35992Cu;
        // 0x359930: 0x26383300  addiu       $t8, $s1, 0x3300 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 17), 13056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35992c) {
            ctx->pc = 0x359984u;
            goto label_359984;
        }
    }
    ctx->pc = 0x359934u;
    // 0x359934: 0xad4f0000  sw          $t7, 0x0($t2)
    ctx->pc = 0x359934u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 15));
    // 0x359938: 0xf  sync
    ctx->pc = 0x359938u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35993c: 0x40f  sync.p
    ctx->pc = 0x35993cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_359940:
    // 0x359940: 0x0  nop
    ctx->pc = 0x359940u;
    // NOP
    // 0x359944: 0x0  nop
    ctx->pc = 0x359944u;
    // NOP
    // 0x359948: 0x0  nop
    ctx->pc = 0x359948u;
    // NOP
    // 0x35994c: 0x0  nop
    ctx->pc = 0x35994cu;
    // NOP
    // 0x359950: 0x0  nop
    ctx->pc = 0x359950u;
    // NOP
    // 0x359954: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x359954u;
    {
        const bool branch_taken_0x359954 = (false);
        if (branch_taken_0x359954) {
            ctx->pc = 0x359940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359940;
        }
    }
    ctx->pc = 0x35995Cu;
    // 0x35995c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35995cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x359960: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x359960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x359964: 0x0  nop
    ctx->pc = 0x359964u;
    // NOP
label_359968:
    // 0x359968: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x359968u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35996c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35996cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x359970: 0x0  nop
    ctx->pc = 0x359970u;
    // NOP
    // 0x359974: 0x0  nop
    ctx->pc = 0x359974u;
    // NOP
    // 0x359978: 0x0  nop
    ctx->pc = 0x359978u;
    // NOP
    // 0x35997c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35997Cu;
    {
        const bool branch_taken_0x35997c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35997c) {
            ctx->pc = 0x359968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359968;
        }
    }
    ctx->pc = 0x359984u;
label_359984:
    // 0x359984: 0xadcf0000  sw          $t7, 0x0($t6)
    ctx->pc = 0x359984u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 15));
    // 0x359988: 0x240200cc  addiu       $v0, $zero, 0xCC
    ctx->pc = 0x359988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x35998c: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x35998cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x359990: 0xaed00000  sw          $s0, 0x0($s6)
    ctx->pc = 0x359990u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
    // 0x359994: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x359994u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x359998: 0xad6d0000  sw          $t5, 0x0($t3)
    ctx->pc = 0x359998u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 13));
    // 0x35999c: 0xf  sync
    ctx->pc = 0x35999cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3599a0: 0x40f  sync.p
    ctx->pc = 0x3599a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3599a4: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x3599a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3599a8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3599a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3599ac: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3599ACu;
    {
        const bool branch_taken_0x3599ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3599B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3599ACu;
        // 0x3599b0: 0x3c057000  lui         $a1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3599ac) {
            ctx->pc = 0x359A04u;
            goto label_359a04;
        }
    }
    ctx->pc = 0x3599B4u;
    // 0x3599b4: 0xad4f0000  sw          $t7, 0x0($t2)
    ctx->pc = 0x3599b4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 15));
    // 0x3599b8: 0xf  sync
    ctx->pc = 0x3599b8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3599bc: 0x40f  sync.p
    ctx->pc = 0x3599bcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3599c0:
    // 0x3599c0: 0x0  nop
    ctx->pc = 0x3599c0u;
    // NOP
    // 0x3599c4: 0x0  nop
    ctx->pc = 0x3599c4u;
    // NOP
    // 0x3599c8: 0x0  nop
    ctx->pc = 0x3599c8u;
    // NOP
    // 0x3599cc: 0x0  nop
    ctx->pc = 0x3599ccu;
    // NOP
    // 0x3599d0: 0x0  nop
    ctx->pc = 0x3599d0u;
    // NOP
    // 0x3599d4: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x3599D4u;
    {
        const bool branch_taken_0x3599d4 = (false);
        if (branch_taken_0x3599d4) {
            ctx->pc = 0x3599C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3599c0;
        }
    }
    ctx->pc = 0x3599DCu;
    // 0x3599dc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3599dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3599e0: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x3599e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x3599e4: 0x0  nop
    ctx->pc = 0x3599e4u;
    // NOP
label_3599e8:
    // 0x3599e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3599e8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x3599ec: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3599ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3599f0: 0x0  nop
    ctx->pc = 0x3599f0u;
    // NOP
    // 0x3599f4: 0x0  nop
    ctx->pc = 0x3599f4u;
    // NOP
    // 0x3599f8: 0x0  nop
    ctx->pc = 0x3599f8u;
    // NOP
    // 0x3599fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3599FCu;
    {
        const bool branch_taken_0x3599fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x359A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3599FCu;
        // 0x359a00: 0x3c057000  lui         $a1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3599fc) {
            ctx->pc = 0x3599E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3599e8;
        }
    }
    ctx->pc = 0x359A04u;
label_359a04:
    // 0x359a04: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x359a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359a08: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x359a08u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x359a0c: 0x34a50cc0  ori         $a1, $a1, 0xCC0
    ctx->pc = 0x359a0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3264);
    // 0x359a10: 0x240900cb  addiu       $t1, $zero, 0xCB
    ctx->pc = 0x359a10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
    // 0x359a14: 0x0  nop
    ctx->pc = 0x359a14u;
    // NOP
label_359a18:
    // 0x359a18: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x359a18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x359a1c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x359a1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359a20: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x359a20u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x359a24: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x359a24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x359a28: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x359a28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x359a2c: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x359a2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x359a30: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x359a30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x359a34: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x359a34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x359a38: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x359a38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x359a3c: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x359a3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x359a40: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x359a40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x359a44: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x359a44u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x359a48: 0xf8a50010  sqc2        $vf5, 0x10($a1)
    ctx->pc = 0x359a48u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x359a4c: 0xf8a60020  sqc2        $vf6, 0x20($a1)
    ctx->pc = 0x359a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x359a50: 0xf8a70030  sqc2        $vf7, 0x30($a1)
    ctx->pc = 0x359a50u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x359a54: 0x24a30040  addiu       $v1, $a1, 0x40
    ctx->pc = 0x359a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x359a58: 0x25020010  addiu       $v0, $t0, 0x10
    ctx->pc = 0x359a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x359a5c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x359a5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x359a60: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x359a60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359a64: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x359a64u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x359a68: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x359a68u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x359a6c: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x359a6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x359a70: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x359a70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x359a74: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x359a74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x359a78: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x359a78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x359a7c: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x359a7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x359a80: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x359a80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x359a84: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x359a84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x359a88: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x359a88u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x359a8c: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x359a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x359a90: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x359a90u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x359a94: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x359a94u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x359a98: 0x24a40080  addiu       $a0, $a1, 0x80
    ctx->pc = 0x359a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x359a9c: 0x25020020  addiu       $v0, $t0, 0x20
    ctx->pc = 0x359a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x359aa0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x359aa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x359aa4: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x359aa4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359aa8: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x359aa8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x359aac: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x359aacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x359ab0: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x359ab0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x359ab4: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x359ab4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x359ab8: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x359ab8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x359abc: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x359abcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x359ac0: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x359ac0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x359ac4: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x359ac4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x359ac8: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x359ac8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x359acc: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x359accu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x359ad0: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x359ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x359ad4: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x359ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x359ad8: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x359ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x359adc: 0x24a300c0  addiu       $v1, $a1, 0xC0
    ctx->pc = 0x359adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x359ae0: 0x25020030  addiu       $v0, $t0, 0x30
    ctx->pc = 0x359ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x359ae4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x359ae4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x359ae8: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x359ae8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359aec: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x359aecu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x359af0: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x359af0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x359af4: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x359af4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x359af8: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x359af8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x359afc: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x359afcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x359b00: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x359b00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x359b04: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x359b04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x359b08: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x359b08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x359b0c: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x359b0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x359b10: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x359b10u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x359b14: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x359b14u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x359b18: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x359b18u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x359b1c: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x359b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x359b20: 0x24a40100  addiu       $a0, $a1, 0x100
    ctx->pc = 0x359b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    // 0x359b24: 0x25020040  addiu       $v0, $t0, 0x40
    ctx->pc = 0x359b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x359b28: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x359b28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x359b2c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x359b2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359b30: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x359b30u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x359b34: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x359b34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x359b38: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x359b38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x359b3c: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x359b3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x359b40: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x359b40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x359b44: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x359b44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x359b48: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x359b48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x359b4c: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x359b4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x359b50: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x359b50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x359b54: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x359b54u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x359b58: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x359b58u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x359b5c: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x359b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x359b60: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x359b60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x359b64: 0x24a30140  addiu       $v1, $a1, 0x140
    ctx->pc = 0x359b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x359b68: 0x25020050  addiu       $v0, $t0, 0x50
    ctx->pc = 0x359b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
    // 0x359b6c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x359b6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x359b70: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x359b70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359b74: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x359b74u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x359b78: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x359b78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x359b7c: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x359b7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x359b80: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x359b80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x359b84: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x359b84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x359b88: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x359b88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x359b8c: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x359b8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x359b90: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x359b90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x359b94: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x359b94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x359b98: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x359b98u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x359b9c: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x359b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x359ba0: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x359ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x359ba4: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x359ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x359ba8: 0x24a40180  addiu       $a0, $a1, 0x180
    ctx->pc = 0x359ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
    // 0x359bac: 0x25020060  addiu       $v0, $t0, 0x60
    ctx->pc = 0x359bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 96));
    // 0x359bb0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x359bb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x359bb4: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x359bb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359bb8: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x359bb8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x359bbc: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x359bbcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x359bc0: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x359bc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x359bc4: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x359bc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x359bc8: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x359bc8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x359bcc: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x359bccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x359bd0: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x359bd0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x359bd4: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x359bd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x359bd8: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x359bd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x359bdc: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x359bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x359be0: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x359be0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x359be4: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x359be4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x359be8: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x359be8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x359bec: 0x24a301c0  addiu       $v1, $a1, 0x1C0
    ctx->pc = 0x359becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 448));
    // 0x359bf0: 0x25020070  addiu       $v0, $t0, 0x70
    ctx->pc = 0x359bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
    // 0x359bf4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x359bf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x359bf8: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x359bf8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359bfc: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x359bfcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x359c00: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x359c00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x359c04: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x359c04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x359c08: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x359c08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x359c0c: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x359c0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x359c10: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x359c10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x359c14: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x359c14u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x359c18: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x359c18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x359c1c: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x359c1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x359c20: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x359c20u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x359c24: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x359c24u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x359c28: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x359c28u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x359c2c: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x359c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x359c30: 0x24a40200  addiu       $a0, $a1, 0x200
    ctx->pc = 0x359c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
    // 0x359c34: 0x25020080  addiu       $v0, $t0, 0x80
    ctx->pc = 0x359c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
    // 0x359c38: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x359c38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x359c3c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x359c3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359c40: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x359c40u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x359c44: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x359c44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x359c48: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x359c48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x359c4c: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x359c4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x359c50: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x359c50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x359c54: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x359c54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x359c58: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x359c58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x359c5c: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x359c5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x359c60: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x359c60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x359c64: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x359c64u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x359c68: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x359c68u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x359c6c: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x359c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x359c70: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x359c70u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x359c74: 0x24a30240  addiu       $v1, $a1, 0x240
    ctx->pc = 0x359c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 576));
    // 0x359c78: 0x25020090  addiu       $v0, $t0, 0x90
    ctx->pc = 0x359c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 144));
    // 0x359c7c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x359c7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x359c80: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x359c80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359c84: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x359c84u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x359c88: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x359c88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x359c8c: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x359c8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x359c90: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x359c90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x359c94: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x359c94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x359c98: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x359c98u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x359c9c: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x359c9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x359ca0: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x359ca0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x359ca4: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x359ca4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x359ca8: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x359ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x359cac: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x359cacu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x359cb0: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x359cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x359cb4: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x359cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x359cb8: 0x24a40280  addiu       $a0, $a1, 0x280
    ctx->pc = 0x359cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 640));
    // 0x359cbc: 0x250200a0  addiu       $v0, $t0, 0xA0
    ctx->pc = 0x359cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
    // 0x359cc0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x359cc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x359cc4: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x359cc4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359cc8: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x359cc8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x359ccc: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x359cccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x359cd0: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x359cd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x359cd4: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x359cd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x359cd8: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x359cd8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x359cdc: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x359cdcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x359ce0: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x359ce0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x359ce4: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x359ce4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x359ce8: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x359ce8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x359cec: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x359cecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x359cf0: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x359cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x359cf4: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x359cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x359cf8: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x359cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x359cfc: 0x24a302c0  addiu       $v1, $a1, 0x2C0
    ctx->pc = 0x359cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 704));
    // 0x359d00: 0x250200b0  addiu       $v0, $t0, 0xB0
    ctx->pc = 0x359d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 176));
    // 0x359d04: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x359d04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x359d08: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x359d08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359d0c: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x359d0cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x359d10: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x359d10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x359d14: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x359d14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x359d18: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x359d18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x359d1c: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x359d1cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x359d20: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x359d20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x359d24: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x359d24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x359d28: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x359d28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x359d2c: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x359d2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x359d30: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x359d30u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x359d34: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x359d34u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x359d38: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x359d38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x359d3c: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x359d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x359d40: 0x24a50300  addiu       $a1, $a1, 0x300
    ctx->pc = 0x359d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 768));
    // 0x359d44: 0x2529fff4  addiu       $t1, $t1, -0xC
    ctx->pc = 0x359d44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967284));
    // 0x359d48: 0x521ff33  bgez        $t1, . + 4 + (-0xCD << 2)
    ctx->pc = 0x359D48u;
    {
        const bool branch_taken_0x359d48 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x359D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359D48u;
        // 0x359d4c: 0x250800c0  addiu       $t0, $t0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359d48) {
            ctx->pc = 0x359A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359a18;
        }
    }
    ctx->pc = 0x359D50u;
    // 0x359d50: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x359d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x359d54: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x359d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x359d58: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x359D58u;
    {
        const bool branch_taken_0x359d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x359d58) {
            ctx->pc = 0x359D88u;
            goto label_359d88;
        }
    }
    ctx->pc = 0x359D60u;
    // 0x359d60: 0xad4d0000  sw          $t5, 0x0($t2)
    ctx->pc = 0x359d60u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 13));
    // 0x359d64: 0xf  sync
    ctx->pc = 0x359d64u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x359d68: 0x40f  sync.p
    ctx->pc = 0x359d68u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_359d6c:
    // 0x359d6c: 0x0  nop
    ctx->pc = 0x359d6cu;
    // NOP
    // 0x359d70: 0x0  nop
    ctx->pc = 0x359d70u;
    // NOP
    // 0x359d74: 0x0  nop
    ctx->pc = 0x359d74u;
    // NOP
    // 0x359d78: 0x0  nop
    ctx->pc = 0x359d78u;
    // NOP
    // 0x359d7c: 0x0  nop
    ctx->pc = 0x359d7cu;
    // NOP
    // 0x359d80: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x359D80u;
    {
        const bool branch_taken_0x359d80 = (false);
        if (branch_taken_0x359d80) {
            ctx->pc = 0x359D6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359d6c;
        }
    }
    ctx->pc = 0x359D88u;
label_359d88:
    // 0x359d88: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x359d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x359d8c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x359d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x359d90: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x359D90u;
    {
        const bool branch_taken_0x359d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x359d90) {
            ctx->pc = 0x359DE4u;
            goto label_359de4;
        }
    }
    ctx->pc = 0x359D98u;
    // 0x359d98: 0xad4f0000  sw          $t7, 0x0($t2)
    ctx->pc = 0x359d98u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 15));
    // 0x359d9c: 0xf  sync
    ctx->pc = 0x359d9cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x359da0: 0x40f  sync.p
    ctx->pc = 0x359da0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_359da4:
    // 0x359da4: 0x0  nop
    ctx->pc = 0x359da4u;
    // NOP
    // 0x359da8: 0x0  nop
    ctx->pc = 0x359da8u;
    // NOP
    // 0x359dac: 0x0  nop
    ctx->pc = 0x359dacu;
    // NOP
    // 0x359db0: 0x0  nop
    ctx->pc = 0x359db0u;
    // NOP
    // 0x359db4: 0x0  nop
    ctx->pc = 0x359db4u;
    // NOP
    // 0x359db8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x359DB8u;
    {
        const bool branch_taken_0x359db8 = (false);
        if (branch_taken_0x359db8) {
            ctx->pc = 0x359DA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359da4;
        }
    }
    ctx->pc = 0x359DC0u;
    // 0x359dc0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x359dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x359dc4: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x359dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_359dc8:
    // 0x359dc8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x359dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x359dcc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x359dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x359dd0: 0x0  nop
    ctx->pc = 0x359dd0u;
    // NOP
    // 0x359dd4: 0x0  nop
    ctx->pc = 0x359dd4u;
    // NOP
    // 0x359dd8: 0x0  nop
    ctx->pc = 0x359dd8u;
    // NOP
    // 0x359ddc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x359DDCu;
    {
        const bool branch_taken_0x359ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x359ddc) {
            ctx->pc = 0x359DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359dc8;
        }
    }
    ctx->pc = 0x359DE4u;
label_359de4:
    // 0x359de4: 0xadcd0000  sw          $t5, 0x0($t6)
    ctx->pc = 0x359de4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
    // 0x359de8: 0x24020cc0  addiu       $v0, $zero, 0xCC0
    ctx->pc = 0x359de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3264));
    // 0x359dec: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x359decu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x359df0: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x359df0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x359df4: 0xaf3e0000  sw          $fp, 0x0($t9)
    ctx->pc = 0x359df4u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 30));
    // 0x359df8: 0xad8d0000  sw          $t5, 0x0($t4)
    ctx->pc = 0x359df8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 13));
    // 0x359dfc: 0xf  sync
    ctx->pc = 0x359dfcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x359e00: 0x40f  sync.p
    ctx->pc = 0x359e00u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x359e04: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x359e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359e08: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x359e08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359e0c: 0x2a4200cd  slti        $v0, $s2, 0xCD
    ctx->pc = 0x359e0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)205) ? 1 : 0);
    // 0x359e10: 0x1040feb3  beqz        $v0, . + 4 + (-0x14D << 2)
    ctx->pc = 0x359E10u;
    {
        const bool branch_taken_0x359e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359E10u;
        // 0x359e14: 0x300882d  daddu       $s1, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359e10) {
            ctx->pc = 0x3598E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3598e0;
        }
    }
    ctx->pc = 0x359E18u;
label_359e18:
    // 0x359e18: 0x124001b5  beqz        $s2, . + 4 + (0x1B5 << 2)
    ctx->pc = 0x359E18u;
    {
        const bool branch_taken_0x359e18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x359E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359E18u;
        // 0x359e1c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359e18) {
            ctx->pc = 0x35A4F0u;
            goto label_35a4f0;
        }
    }
    ctx->pc = 0x359E20u;
    // 0x359e20: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x359e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x359e24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x359e24u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
    // 0x359e28: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x359e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x359e2c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x359E2Cu;
    {
        const bool branch_taken_0x359e2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x359E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359E2Cu;
        // 0x359e30: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359e2c) {
            ctx->pc = 0x359E68u;
            goto label_359e68;
        }
    }
    ctx->pc = 0x359E34u;
    // 0x359e34: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x359e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x359e38: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x359e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x359e3c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x359e3cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x359e40: 0xf  sync
    ctx->pc = 0x359e40u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x359e44: 0x40f  sync.p
    ctx->pc = 0x359e44u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_359e48:
    // 0x359e48: 0x0  nop
    ctx->pc = 0x359e48u;
    // NOP
    // 0x359e4c: 0x0  nop
    ctx->pc = 0x359e4cu;
    // NOP
    // 0x359e50: 0x0  nop
    ctx->pc = 0x359e50u;
    // NOP
    // 0x359e54: 0x0  nop
    ctx->pc = 0x359e54u;
    // NOP
    // 0x359e58: 0x0  nop
    ctx->pc = 0x359e58u;
    // NOP
    // 0x359e5c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x359E5Cu;
    {
        const bool branch_taken_0x359e5c = (false);
        if (branch_taken_0x359e5c) {
            ctx->pc = 0x359E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359e48;
        }
    }
    ctx->pc = 0x359E64u;
    // 0x359e64: 0x0  nop
    ctx->pc = 0x359e64u;
    // NOP
label_359e68:
    // 0x359e68: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x359e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x359e6c: 0x123880  sll         $a3, $s2, 2
    ctx->pc = 0x359e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x359e70: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x359e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x359e74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x359e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x359e78: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x359e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x359e7c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x359E7Cu;
    {
        const bool branch_taken_0x359e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359E7Cu;
        // 0x359e80: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359e7c) {
            ctx->pc = 0x359EDCu;
            goto label_359edc;
        }
    }
    ctx->pc = 0x359E84u;
    // 0x359e84: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x359e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x359e88: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x359e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x359e8c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x359e8cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x359e90: 0xf  sync
    ctx->pc = 0x359e90u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x359e94: 0x40f  sync.p
    ctx->pc = 0x359e94u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_359e98:
    // 0x359e98: 0x0  nop
    ctx->pc = 0x359e98u;
    // NOP
    // 0x359e9c: 0x0  nop
    ctx->pc = 0x359e9cu;
    // NOP
    // 0x359ea0: 0x0  nop
    ctx->pc = 0x359ea0u;
    // NOP
    // 0x359ea4: 0x0  nop
    ctx->pc = 0x359ea4u;
    // NOP
    // 0x359ea8: 0x0  nop
    ctx->pc = 0x359ea8u;
    // NOP
    // 0x359eac: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x359EACu;
    {
        const bool branch_taken_0x359eac = (false);
        if (branch_taken_0x359eac) {
            ctx->pc = 0x359E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359e98;
        }
    }
    ctx->pc = 0x359EB4u;
    // 0x359eb4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x359eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x359eb8: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x359eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x359ebc: 0x0  nop
    ctx->pc = 0x359ebcu;
    // NOP
label_359ec0:
    // 0x359ec0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x359ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x359ec4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x359ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x359ec8: 0x0  nop
    ctx->pc = 0x359ec8u;
    // NOP
    // 0x359ecc: 0x0  nop
    ctx->pc = 0x359eccu;
    // NOP
    // 0x359ed0: 0x0  nop
    ctx->pc = 0x359ed0u;
    // NOP
    // 0x359ed4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x359ED4u;
    {
        const bool branch_taken_0x359ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x359ed4) {
            ctx->pc = 0x359EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359ec0;
        }
    }
    ctx->pc = 0x359EDCu;
label_359edc:
    // 0x359edc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x359edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x359ee0: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x359ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x359ee4: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x359ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x359ee8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x359ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x359eec: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x359eecu;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x1000e010
    // 0x359ef0: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x359ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x359ef4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x359ef4u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 0)); // MMIO: 0x1000d480
    // 0x359ef8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x359ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x359efc: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x359efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x359f00: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x359f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x359f04: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x359f04u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 16)); // MMIO: 0x1000d410
    // 0x359f08: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x359f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x359f0c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x359f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x359f10: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x359f10u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 18)); // MMIO: 0x1000d420
    // 0x359f14: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x359f14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x359f18: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x359f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x359f1c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x359f1cu;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x1000d400
    // 0x359f20: 0xf  sync
    ctx->pc = 0x359f20u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x359f24: 0x40f  sync.p
    ctx->pc = 0x359f24u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x359f28: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x359f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x359f2c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x359f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x359f30: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x359F30u;
    {
        const bool branch_taken_0x359f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359F30u;
        // 0x359f34: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359f30) {
            ctx->pc = 0x359F8Cu;
            goto label_359f8c;
        }
    }
    ctx->pc = 0x359F38u;
    // 0x359f38: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x359f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x359f3c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x359f3cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x1000e020
    // 0x359f40: 0xf  sync
    ctx->pc = 0x359f40u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x359f44: 0x40f  sync.p
    ctx->pc = 0x359f44u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_359f48:
    // 0x359f48: 0x0  nop
    ctx->pc = 0x359f48u;
    // NOP
    // 0x359f4c: 0x0  nop
    ctx->pc = 0x359f4cu;
    // NOP
    // 0x359f50: 0x0  nop
    ctx->pc = 0x359f50u;
    // NOP
    // 0x359f54: 0x0  nop
    ctx->pc = 0x359f54u;
    // NOP
    // 0x359f58: 0x0  nop
    ctx->pc = 0x359f58u;
    // NOP
    // 0x359f5c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x359F5Cu;
    {
        const bool branch_taken_0x359f5c = (false);
        if (branch_taken_0x359f5c) {
            ctx->pc = 0x359F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359f48;
        }
    }
    ctx->pc = 0x359F64u;
    // 0x359f64: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x359f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x359f68: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x359f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x359f6c: 0x0  nop
    ctx->pc = 0x359f6cu;
    // NOP
label_359f70:
    // 0x359f70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x359f70u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x359f74: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x359f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x359f78: 0x0  nop
    ctx->pc = 0x359f78u;
    // NOP
    // 0x359f7c: 0x0  nop
    ctx->pc = 0x359f7cu;
    // NOP
    // 0x359f80: 0x0  nop
    ctx->pc = 0x359f80u;
    // NOP
    // 0x359f84: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x359F84u;
    {
        const bool branch_taken_0x359f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x359f84) {
            ctx->pc = 0x359F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359f70;
        }
    }
    ctx->pc = 0x359F8Cu;
label_359f8c:
    // 0x359f8c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x359f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x359f90: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x359f90u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x359f94: 0x1a40008a  blez        $s2, . + 4 + (0x8A << 2)
    ctx->pc = 0x359F94u;
    {
        const bool branch_taken_0x359f94 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x359F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359F94u;
        // 0x359f98: 0x34a50cc0  ori         $a1, $a1, 0xCC0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3264);
        ctx->in_delay_slot = false;
        if (branch_taken_0x359f94) {
            ctx->pc = 0x35A1C0u;
            goto label_35a1c0;
        }
    }
    ctx->pc = 0x359F9Cu;
    // 0x359f9c: 0x121023  negu        $v0, $s2
    ctx->pc = 0x359f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x359fa0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x359fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x359fa4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x359fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x359fa8: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x359FA8u;
    {
        const bool branch_taken_0x359fa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x359FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359FA8u;
        // 0x359fac: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359fa8) {
            ctx->pc = 0x35A0A8u;
            goto label_35a0a8;
        }
    }
    ctx->pc = 0x359FB0u;
    // 0x359fb0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x359fb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x359fb4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x359FB4u;
    {
        const bool branch_taken_0x359fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359FB4u;
        // 0x359fb8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x359fb4) {
            ctx->pc = 0x35A058u;
            goto label_35a058;
        }
    }
    ctx->pc = 0x359FBCu;
    // 0x359fbc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x359FBCu;
    {
        const bool branch_taken_0x359fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x359fbc) {
            ctx->pc = 0x35A010u;
            goto label_35a010;
        }
    }
    ctx->pc = 0x359FC4u;
    // 0x359fc4: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x359fc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x359fc8: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x359fc8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359fcc: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x359fccu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x359fd0: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x359fd0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x359fd4: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x359fd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x359fd8: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x359fd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x359fdc: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x359fdcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x359fe0: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x359fe0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x359fe4: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x359fe4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x359fe8: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x359fe8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x359fec: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x359fecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x359ff0: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x359ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x359ff4: 0xf8a50010  sqc2        $vf5, 0x10($a1)
    ctx->pc = 0x359ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x359ff8: 0xf8a60020  sqc2        $vf6, 0x20($a1)
    ctx->pc = 0x359ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x359ffc: 0xf8a70030  sqc2        $vf7, 0x30($a1)
    ctx->pc = 0x359ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35a000: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x35a000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x35a004: 0x35080010  ori         $t0, $t0, 0x10
    ctx->pc = 0x35a004u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16);
    // 0x35a008: 0x34a50d00  ori         $a1, $a1, 0xD00
    ctx->pc = 0x35a008u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3328);
    // 0x35a00c: 0x2649ffff  addiu       $t1, $s2, -0x1
    ctx->pc = 0x35a00cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_35a010:
    // 0x35a010: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x35a010u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x35a014: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x35a014u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a018: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x35a018u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35a01c: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35a01cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a020: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35a020u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a024: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35a024u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a028: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35a028u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a02c: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35a02cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a030: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35a030u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a034: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35a034u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a038: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35a038u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a03c: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x35a03cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35a040: 0xf8a50010  sqc2        $vf5, 0x10($a1)
    ctx->pc = 0x35a040u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35a044: 0xf8a60020  sqc2        $vf6, 0x20($a1)
    ctx->pc = 0x35a044u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35a048: 0xf8a70030  sqc2        $vf7, 0x30($a1)
    ctx->pc = 0x35a048u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35a04c: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x35a04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x35a050: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x35a050u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x35a054: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x35a054u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_35a058:
    // 0x35a058: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x35a058u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x35a05c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x35a05cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a060: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x35a060u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35a064: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35a064u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a068: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35a068u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a06c: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35a06cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a070: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35a070u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a074: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35a074u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a078: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35a078u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a07c: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35a07cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a080: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35a080u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a084: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x35a084u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35a088: 0xf8a50010  sqc2        $vf5, 0x10($a1)
    ctx->pc = 0x35a088u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35a08c: 0xf8a60020  sqc2        $vf6, 0x20($a1)
    ctx->pc = 0x35a08cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35a090: 0xf8a70030  sqc2        $vf7, 0x30($a1)
    ctx->pc = 0x35a090u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35a094: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x35a094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x35a098: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x35a098u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x35a09c: 0x11200048  beqz        $t1, . + 4 + (0x48 << 2)
    ctx->pc = 0x35A09Cu;
    {
        const bool branch_taken_0x35a09c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A09Cu;
        // 0x35a0a0: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a09c) {
            ctx->pc = 0x35A1C0u;
            goto label_35a1c0;
        }
    }
    ctx->pc = 0x35A0A4u;
    // 0x35a0a4: 0x0  nop
    ctx->pc = 0x35a0a4u;
    // NOP
label_35a0a8:
    // 0x35a0a8: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x35a0a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x35a0ac: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x35a0acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a0b0: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x35a0b0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35a0b4: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35a0b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a0b8: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35a0b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a0bc: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35a0bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a0c0: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35a0c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a0c4: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35a0c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a0c8: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35a0c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a0cc: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35a0ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a0d0: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35a0d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a0d4: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x35a0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35a0d8: 0xf8a50010  sqc2        $vf5, 0x10($a1)
    ctx->pc = 0x35a0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35a0dc: 0xf8a60020  sqc2        $vf6, 0x20($a1)
    ctx->pc = 0x35a0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35a0e0: 0xf8a70030  sqc2        $vf7, 0x30($a1)
    ctx->pc = 0x35a0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35a0e4: 0x24a30040  addiu       $v1, $a1, 0x40
    ctx->pc = 0x35a0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x35a0e8: 0x25020010  addiu       $v0, $t0, 0x10
    ctx->pc = 0x35a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x35a0ec: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35a0ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35a0f0: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x35a0f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a0f4: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x35a0f4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35a0f8: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35a0f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a0fc: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35a0fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a100: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35a100u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a104: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35a104u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a108: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35a108u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a10c: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35a10cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a110: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35a110u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a114: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35a114u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a118: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x35a118u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35a11c: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x35a11cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35a120: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x35a120u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35a124: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x35a124u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35a128: 0x24a40080  addiu       $a0, $a1, 0x80
    ctx->pc = 0x35a128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x35a12c: 0x25020020  addiu       $v0, $t0, 0x20
    ctx->pc = 0x35a12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x35a130: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35a130u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35a134: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x35a134u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a138: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x35a138u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35a13c: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35a13cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a140: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35a140u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a144: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35a144u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a148: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35a148u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a14c: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35a14cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a150: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35a150u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a154: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35a154u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a158: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35a158u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a15c: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x35a15cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35a160: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x35a160u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35a164: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x35a164u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35a168: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x35a168u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35a16c: 0x24a300c0  addiu       $v1, $a1, 0xC0
    ctx->pc = 0x35a16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x35a170: 0x25020030  addiu       $v0, $t0, 0x30
    ctx->pc = 0x35a170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x35a174: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35a174u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35a178: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x35a178u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a17c: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x35a17cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35a180: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35a180u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a184: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35a184u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a188: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35a188u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a18c: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35a18cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a190: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35a190u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a194: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35a194u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a198: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35a198u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a19c: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35a19cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a1a0: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x35a1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35a1a4: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x35a1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35a1a8: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x35a1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35a1ac: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x35a1acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35a1b0: 0x24a50100  addiu       $a1, $a1, 0x100
    ctx->pc = 0x35a1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    // 0x35a1b4: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x35a1b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x35a1b8: 0x1520ffbb  bnez        $t1, . + 4 + (-0x45 << 2)
    ctx->pc = 0x35A1B8u;
    {
        const bool branch_taken_0x35a1b8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x35A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A1B8u;
        // 0x35a1bc: 0x25080040  addiu       $t0, $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a1b8) {
            ctx->pc = 0x35A0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a0a8;
        }
    }
    ctx->pc = 0x35A1C0u;
label_35a1c0:
    // 0x35a1c0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35a1c4: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x35a1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x35a1c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35a1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x35a1cc: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x35a1ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x35a1d0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x35A1D0u;
    {
        const bool branch_taken_0x35a1d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A1D0u;
        // 0x35a1d4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a1d0) {
            ctx->pc = 0x35A208u;
            goto label_35a208;
        }
    }
    ctx->pc = 0x35A1D8u;
    // 0x35a1d8: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x35a1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35a1dc: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x35a1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35a1e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35a1e0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x35a1e4: 0xf  sync
    ctx->pc = 0x35a1e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35a1e8: 0x40f  sync.p
    ctx->pc = 0x35a1e8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35a1ec:
    // 0x35a1ec: 0x0  nop
    ctx->pc = 0x35a1ecu;
    // NOP
    // 0x35a1f0: 0x0  nop
    ctx->pc = 0x35a1f0u;
    // NOP
    // 0x35a1f4: 0x0  nop
    ctx->pc = 0x35a1f4u;
    // NOP
    // 0x35a1f8: 0x0  nop
    ctx->pc = 0x35a1f8u;
    // NOP
    // 0x35a1fc: 0x0  nop
    ctx->pc = 0x35a1fcu;
    // NOP
    // 0x35a200: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35A200u;
    {
        const bool branch_taken_0x35a200 = (false);
        if (branch_taken_0x35a200) {
            ctx->pc = 0x35A1ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a1ec;
        }
    }
    ctx->pc = 0x35A208u;
label_35a208:
    // 0x35a208: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35a208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35a20c: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x35a20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x35a210: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35a210u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x1000d400
    // 0x35a214: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x35a214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x35a218: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x35A218u;
    {
        const bool branch_taken_0x35a218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A218u;
        // 0x35a21c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a218) {
            ctx->pc = 0x35A274u;
            goto label_35a274;
        }
    }
    ctx->pc = 0x35A220u;
    // 0x35a220: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x35a220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x35a224: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x35a224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35a228: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35a228u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x35a22c: 0xf  sync
    ctx->pc = 0x35a22cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35a230: 0x40f  sync.p
    ctx->pc = 0x35a230u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35a234:
    // 0x35a234: 0x0  nop
    ctx->pc = 0x35a234u;
    // NOP
    // 0x35a238: 0x0  nop
    ctx->pc = 0x35a238u;
    // NOP
    // 0x35a23c: 0x0  nop
    ctx->pc = 0x35a23cu;
    // NOP
    // 0x35a240: 0x0  nop
    ctx->pc = 0x35a240u;
    // NOP
    // 0x35a244: 0x0  nop
    ctx->pc = 0x35a244u;
    // NOP
    // 0x35a248: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35A248u;
    {
        const bool branch_taken_0x35a248 = (false);
        if (branch_taken_0x35a248) {
            ctx->pc = 0x35A234u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a234;
        }
    }
    ctx->pc = 0x35A250u;
    // 0x35a250: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35a250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35a254: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35a254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_35a258:
    // 0x35a258: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35a258u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35a25c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35a25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35a260: 0x0  nop
    ctx->pc = 0x35a260u;
    // NOP
    // 0x35a264: 0x0  nop
    ctx->pc = 0x35a264u;
    // NOP
    // 0x35a268: 0x0  nop
    ctx->pc = 0x35a268u;
    // NOP
    // 0x35a26c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35A26Cu;
    {
        const bool branch_taken_0x35a26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35a26c) {
            ctx->pc = 0x35A258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a258;
        }
    }
    ctx->pc = 0x35A274u;
label_35a274:
    // 0x35a274: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35a274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35a278: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x35a278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35a27c: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x35a27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x35a280: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35a280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35a284: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x35a284u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x1000e010
    // 0x35a288: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x35a288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x35a28c: 0x24040cc0  addiu       $a0, $zero, 0xCC0
    ctx->pc = 0x35a28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3264));
    // 0x35a290: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35a290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35a294: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x35a294u;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 4)); // MMIO: 0x1000d080
    // 0x35a298: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x35a298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x35a29c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x35a29cu;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 17)); // MMIO: 0x1000d010
    // 0x35a2a0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35a2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35a2a4: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x35a2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x35a2a8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35a2ac: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x35a2acu;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 7)); // MMIO: 0x1000d020
    // 0x35a2b0: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x35a2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x35a2b4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x35a2b4u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 5)); // MMIO: 0x1000d000
    // 0x35a2b8: 0xf  sync
    ctx->pc = 0x35a2b8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35a2bc: 0x40f  sync.p
    ctx->pc = 0x35a2bcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35a2c0: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x35A2C0u;
    {
        const bool branch_taken_0x35a2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A2C0u;
        // 0x35a2c4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a2c0) {
            ctx->pc = 0x35A4F4u;
            goto label_35a4f4;
        }
    }
    ctx->pc = 0x35A2C8u;
label_35a2c8:
    // 0x35a2c8: 0x1a400089  blez        $s2, . + 4 + (0x89 << 2)
    ctx->pc = 0x35A2C8u;
    {
        const bool branch_taken_0x35a2c8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x35A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A2C8u;
        // 0x35a2cc: 0x121023  negu        $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a2c8) {
            ctx->pc = 0x35A4F0u;
            goto label_35a4f0;
        }
    }
    ctx->pc = 0x35A2D0u;
    // 0x35a2d0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x35a2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35a2d4: 0x30460003  andi        $a2, $v0, 0x3
    ctx->pc = 0x35a2d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x35a2d8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x35a2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35a2dc: 0x10c0003e  beqz        $a2, . + 4 + (0x3E << 2)
    ctx->pc = 0x35A2DCu;
    {
        const bool branch_taken_0x35a2dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A2DCu;
        // 0x35a2e0: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a2dc) {
            ctx->pc = 0x35A3D8u;
            goto label_35a3d8;
        }
    }
    ctx->pc = 0x35A2E4u;
    // 0x35a2e4: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x35a2e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x35a2e8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x35A2E8u;
    {
        const bool branch_taken_0x35a2e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A2E8u;
        // 0x35a2ec: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a2e8) {
            ctx->pc = 0x35A388u;
            goto label_35a388;
        }
    }
    ctx->pc = 0x35A2F0u;
    // 0x35a2f0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x35A2F0u;
    {
        const bool branch_taken_0x35a2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a2f0) {
            ctx->pc = 0x35A340u;
            goto label_35a340;
        }
    }
    ctx->pc = 0x35A2F8u;
    // 0x35a2f8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x35a2f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35a2fc: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x35a2fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a300: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x35a300u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35a304: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35a304u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a308: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35a308u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a30c: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35a30cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a310: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35a310u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a314: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35a314u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a318: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35a318u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a31c: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35a31cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a320: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35a320u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a324: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x35a324u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35a328: 0xfa250010  sqc2        $vf5, 0x10($s1)
    ctx->pc = 0x35a328u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35a32c: 0xfa260020  sqc2        $vf6, 0x20($s1)
    ctx->pc = 0x35a32cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35a330: 0xfa270030  sqc2        $vf7, 0x30($s1)
    ctx->pc = 0x35a330u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35a334: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x35a334u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x35a338: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x35a338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x35a33c: 0x2649ffff  addiu       $t1, $s2, -0x1
    ctx->pc = 0x35a33cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_35a340:
    // 0x35a340: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x35a340u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35a344: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x35a344u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a348: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x35a348u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35a34c: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35a34cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a350: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35a350u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a354: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35a354u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a358: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35a358u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a35c: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35a35cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a360: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35a360u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a364: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35a364u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a368: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35a368u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a36c: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x35a36cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35a370: 0xfa250010  sqc2        $vf5, 0x10($s1)
    ctx->pc = 0x35a370u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35a374: 0xfa260020  sqc2        $vf6, 0x20($s1)
    ctx->pc = 0x35a374u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35a378: 0xfa270030  sqc2        $vf7, 0x30($s1)
    ctx->pc = 0x35a378u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35a37c: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x35a37cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x35a380: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x35a380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x35a384: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x35a384u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_35a388:
    // 0x35a388: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x35a388u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35a38c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x35a38cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a390: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x35a390u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35a394: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35a394u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a398: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35a398u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a39c: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35a39cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a3a0: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35a3a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a3a4: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35a3a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a3a8: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35a3a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a3ac: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35a3acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a3b0: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35a3b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a3b4: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x35a3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35a3b8: 0xfa250010  sqc2        $vf5, 0x10($s1)
    ctx->pc = 0x35a3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35a3bc: 0xfa260020  sqc2        $vf6, 0x20($s1)
    ctx->pc = 0x35a3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35a3c0: 0xfa270030  sqc2        $vf7, 0x30($s1)
    ctx->pc = 0x35a3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35a3c4: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x35a3c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x35a3c8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x35a3c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x35a3cc: 0x11200048  beqz        $t1, . + 4 + (0x48 << 2)
    ctx->pc = 0x35A3CCu;
    {
        const bool branch_taken_0x35a3cc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A3CCu;
        // 0x35a3d0: 0x2058021  addu        $s0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a3cc) {
            ctx->pc = 0x35A4F0u;
            goto label_35a4f0;
        }
    }
    ctx->pc = 0x35A3D4u;
    // 0x35a3d4: 0x0  nop
    ctx->pc = 0x35a3d4u;
    // NOP
label_35a3d8:
    // 0x35a3d8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x35a3d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35a3dc: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x35a3dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a3e0: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x35a3e0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35a3e4: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35a3e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a3e8: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35a3e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a3ec: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35a3ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a3f0: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35a3f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a3f4: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35a3f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a3f8: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35a3f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a3fc: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35a3fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a400: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35a400u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a404: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x35a404u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35a408: 0xfa250010  sqc2        $vf5, 0x10($s1)
    ctx->pc = 0x35a408u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35a40c: 0xfa260020  sqc2        $vf6, 0x20($s1)
    ctx->pc = 0x35a40cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35a410: 0xfa270030  sqc2        $vf7, 0x30($s1)
    ctx->pc = 0x35a410u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35a414: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x35a414u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x35a418: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x35a418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x35a41c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x35a41cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35a420: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x35a420u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a424: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x35a424u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35a428: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35a428u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a42c: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35a42cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a430: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35a430u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a434: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35a434u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a438: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35a438u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a43c: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35a43cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a440: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35a440u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a444: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35a444u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a448: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x35a448u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35a44c: 0xfa250010  sqc2        $vf5, 0x10($s1)
    ctx->pc = 0x35a44cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35a450: 0xfa260020  sqc2        $vf6, 0x20($s1)
    ctx->pc = 0x35a450u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35a454: 0xfa270030  sqc2        $vf7, 0x30($s1)
    ctx->pc = 0x35a454u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35a458: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x35a458u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x35a45c: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x35a45cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x35a460: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x35a460u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35a464: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x35a464u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a468: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x35a468u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35a46c: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35a46cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a470: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35a470u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a474: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35a474u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a478: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35a478u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a47c: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35a47cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a480: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35a480u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a484: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35a484u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a488: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35a488u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a48c: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x35a48cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35a490: 0xfa250010  sqc2        $vf5, 0x10($s1)
    ctx->pc = 0x35a490u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35a494: 0xfa260020  sqc2        $vf6, 0x20($s1)
    ctx->pc = 0x35a494u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35a498: 0xfa270030  sqc2        $vf7, 0x30($s1)
    ctx->pc = 0x35a498u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35a49c: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x35a49cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x35a4a0: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x35a4a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x35a4a4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x35a4a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35a4a8: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x35a4a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a4ac: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x35a4acu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35a4b0: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35a4b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a4b4: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35a4b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a4b8: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35a4b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a4bc: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35a4bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a4c0: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35a4c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a4c4: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35a4c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a4c8: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35a4c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a4cc: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35a4ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a4d0: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x35a4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35a4d4: 0xfa250010  sqc2        $vf5, 0x10($s1)
    ctx->pc = 0x35a4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35a4d8: 0xfa260020  sqc2        $vf6, 0x20($s1)
    ctx->pc = 0x35a4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35a4dc: 0xfa270030  sqc2        $vf7, 0x30($s1)
    ctx->pc = 0x35a4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35a4e0: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x35a4e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x35a4e4: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x35a4e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x35a4e8: 0x1520ffbb  bnez        $t1, . + 4 + (-0x45 << 2)
    ctx->pc = 0x35A4E8u;
    {
        const bool branch_taken_0x35a4e8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x35A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A4E8u;
        // 0x35a4ec: 0x2058021  addu        $s0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a4e8) {
            ctx->pc = 0x35A3D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a3d8;
        }
    }
    ctx->pc = 0x35A4F0u;
label_35a4f0:
    // 0x35a4f0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x35a4f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_35a4f4:
    // 0x35a4f4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x35a4f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x35a4f8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x35a4f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x35a4fc: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x35a4fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x35a500: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x35a500u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x35a504: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x35a504u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35a508: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x35a508u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35a50c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x35a50cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35a510: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x35a510u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35a514: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35a514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35a518: 0x3e00008  jr          $ra
    ctx->pc = 0x35A518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A518u;
        // 0x35a51c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A520u;
}
