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

// Function: sub_0035A520
// Address: 0x35a520 - 0x35b590
void sub_0035A520_0x35a520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A520_0x35a520");
#endif

    switch (ctx->pc) {
        case 0x35a614u: goto label_35a614;
        case 0x35a640u: goto label_35a640;
        case 0x35a690u: goto label_35a690;
        case 0x35a6b8u: goto label_35a6b8;
        case 0x35a738u: goto label_35a738;
        case 0x35a754u: goto label_35a754;
        case 0x35a79cu: goto label_35a79c;
        case 0x35a7c0u: goto label_35a7c0;
        case 0x35a818u: goto label_35a818;
        case 0x35a840u: goto label_35a840;
        case 0x35a870u: goto label_35a870;
        case 0x35acb4u: goto label_35acb4;
        case 0x35acecu: goto label_35acec;
        case 0x35ad10u: goto label_35ad10;
        case 0x35ad98u: goto label_35ad98;
        case 0x35ade8u: goto label_35ade8;
        case 0x35ae10u: goto label_35ae10;
        case 0x35ae98u: goto label_35ae98;
        case 0x35aec0u: goto label_35aec0;
        case 0x35b038u: goto label_35b038;
        case 0x35b1ccu: goto label_35b1cc;
        case 0x35b214u: goto label_35b214;
        case 0x35b238u: goto label_35b238;
        case 0x35b3f8u: goto label_35b3f8;
        default: break;
    }

    ctx->pc = 0x35a520u;

    // 0x35a520: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x35a520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x35a524: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x35a524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x35a528: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x35a528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x35a52c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x35a52cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a530: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x35a530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x35a534: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x35a534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x35a538: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x35a538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x35a53c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x35a53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x35a540: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x35a540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x35a544: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x35a544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x35a548: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x35a548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x35a54c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x35a54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x35a550: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x35a550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x35a554: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x35a554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x35a558: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x35a558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x35a55c: 0xc4a50008  lwc1        $f5, 0x8($a1)
    ctx->pc = 0x35a55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x35a560: 0xc4a90004  lwc1        $f9, 0x4($a1)
    ctx->pc = 0x35a560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x35a564: 0x460230c2  mul.s       $f3, $f6, $f2
    ctx->pc = 0x35a564u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x35a568: 0x46022902  mul.s       $f4, $f5, $f2
    ctx->pc = 0x35a568u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x35a56c: 0xc5000070  lwc1        $f0, 0x70($t0)
    ctx->pc = 0x35a56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35a570: 0x46024842  mul.s       $f1, $f9, $f2
    ctx->pc = 0x35a570u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x35a574: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x35a574u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x35a578: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x35a578u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x35a57c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x35a57cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x35a580: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x35a580u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x35a584: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x35a584u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x35a588: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x35a588u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x35a58c: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x35a58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x35a590: 0xc4c70008  lwc1        $f7, 0x8($a2)
    ctx->pc = 0x35a590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x35a594: 0x460220c2  mul.s       $f3, $f4, $f2
    ctx->pc = 0x35a594u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x35a598: 0xc4c80004  lwc1        $f8, 0x4($a2)
    ctx->pc = 0x35a598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x35a59c: 0x46023842  mul.s       $f1, $f7, $f2
    ctx->pc = 0x35a59cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x35a5a0: 0xc5000074  lwc1        $f0, 0x74($t0)
    ctx->pc = 0x35a5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35a5a4: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x35a5a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x35a5a8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x35a5a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x35a5ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x35a5acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x35a5b0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x35a5b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x35a5b4: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x35a5b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x35a5b8: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x35a5b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x35a5bc: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x35a5bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x35a5c0: 0xc5000068  lwc1        $f0, 0x68($t0)
    ctx->pc = 0x35a5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35a5c4: 0xc501006c  lwc1        $f1, 0x6C($t0)
    ctx->pc = 0x35a5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35a5c8: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x35a5c8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x35a5cc: 0x46060182  mul.s       $f6, $f0, $f6
    ctx->pc = 0x35a5ccu;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x35a5d0: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x35a5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x35a5d4: 0x460709c2  mul.s       $f7, $f1, $f7
    ctx->pc = 0x35a5d4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x35a5d8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x35a5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35a5dc: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x35a5dcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x35a5e0: 0x8d100004  lw          $s0, 0x4($t0)
    ctx->pc = 0x35a5e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x35a5e4: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x35a5e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x35a5e8: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x35a5e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35a5ec: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x35a5ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x35a5f0: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x35a5f0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x35a5f4: 0x46072940  add.s       $f5, $f5, $f7
    ctx->pc = 0x35a5f4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[7]);
    // 0x35a5f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x35a5f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x35a5fc: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x35a5fcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x35a600: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x35a600u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x35a604: 0x14c30328  bne         $a2, $v1, . + 4 + (0x328 << 2)
    ctx->pc = 0x35A604u;
    {
        const bool branch_taken_0x35a604 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x35A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A604u;
        // 0x35a608: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a604) {
            ctx->pc = 0x35B2A8u;
            goto label_35b2a8;
        }
    }
    ctx->pc = 0x35A60Cu;
    // 0x35a60c: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x35A60Cu;
    SET_GPR_U32(ctx, 31, 0x35A614u);
    ctx->pc = 0x35A610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A60Cu;
    // 0x35a610: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x35A60Cu, 0x35A614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A614u;
label_35a614:
    // 0x35a614: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35a614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35a618: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x35a618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x35a61c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35a61cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x35a620: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x35a620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x35a624: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x35A624u;
    {
        const bool branch_taken_0x35a624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A624u;
        // 0x35a628: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a624) {
            ctx->pc = 0x35A660u;
            goto label_35a660;
        }
    }
    ctx->pc = 0x35A62Cu;
    // 0x35a62c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x35a62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35a630: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x35a630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35a634: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35a634u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x35a638: 0xf  sync
    ctx->pc = 0x35a638u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35a63c: 0x40f  sync.p
    ctx->pc = 0x35a63cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35a640:
    // 0x35a640: 0x0  nop
    ctx->pc = 0x35a640u;
    // NOP
    // 0x35a644: 0x0  nop
    ctx->pc = 0x35a644u;
    // NOP
    // 0x35a648: 0x0  nop
    ctx->pc = 0x35a648u;
    // NOP
    // 0x35a64c: 0x0  nop
    ctx->pc = 0x35a64cu;
    // NOP
    // 0x35a650: 0x0  nop
    ctx->pc = 0x35a650u;
    // NOP
    // 0x35a654: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35A654u;
    {
        const bool branch_taken_0x35a654 = (false);
        if (branch_taken_0x35a654) {
            ctx->pc = 0x35A640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a640;
        }
    }
    ctx->pc = 0x35A65Cu;
    // 0x35a65c: 0x0  nop
    ctx->pc = 0x35a65cu;
    // NOP
label_35a660:
    // 0x35a660: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35a660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35a664: 0x2a4400cd  slti        $a0, $s2, 0xCD
    ctx->pc = 0x35a664u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)205) ? 1 : 0);
    // 0x35a668: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35a668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x35a66c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35a670: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35a670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35a674: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x35A674u;
    {
        const bool branch_taken_0x35a674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A674u;
        // 0x35a678: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a674) {
            ctx->pc = 0x35A6D4u;
            goto label_35a6d4;
        }
    }
    ctx->pc = 0x35A67Cu;
    // 0x35a67c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x35a67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x35a680: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x35a680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35a684: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35a684u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x35a688: 0xf  sync
    ctx->pc = 0x35a688u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35a68c: 0x40f  sync.p
    ctx->pc = 0x35a68cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35a690:
    // 0x35a690: 0x0  nop
    ctx->pc = 0x35a690u;
    // NOP
    // 0x35a694: 0x0  nop
    ctx->pc = 0x35a694u;
    // NOP
    // 0x35a698: 0x0  nop
    ctx->pc = 0x35a698u;
    // NOP
    // 0x35a69c: 0x0  nop
    ctx->pc = 0x35a69cu;
    // NOP
    // 0x35a6a0: 0x0  nop
    ctx->pc = 0x35a6a0u;
    // NOP
    // 0x35a6a4: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35A6A4u;
    {
        const bool branch_taken_0x35a6a4 = (false);
        if (branch_taken_0x35a6a4) {
            ctx->pc = 0x35A690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a690;
        }
    }
    ctx->pc = 0x35A6ACu;
    // 0x35a6ac: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35a6acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35a6b0: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35a6b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x35a6b4: 0x0  nop
    ctx->pc = 0x35a6b4u;
    // NOP
label_35a6b8:
    // 0x35a6b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35a6bc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35a6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35a6c0: 0x0  nop
    ctx->pc = 0x35a6c0u;
    // NOP
    // 0x35a6c4: 0x0  nop
    ctx->pc = 0x35a6c4u;
    // NOP
    // 0x35a6c8: 0x0  nop
    ctx->pc = 0x35a6c8u;
    // NOP
    // 0x35a6cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35A6CCu;
    {
        const bool branch_taken_0x35a6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35a6cc) {
            ctx->pc = 0x35A6B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a6b8;
        }
    }
    ctx->pc = 0x35A6D4u;
label_35a6d4:
    // 0x35a6d4: 0x148001a4  bnez        $a0, . + 4 + (0x1A4 << 2)
    ctx->pc = 0x35A6D4u;
    {
        const bool branch_taken_0x35a6d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x35a6d4) {
            ctx->pc = 0x35AD68u;
            goto label_35ad68;
        }
    }
    ctx->pc = 0x35A6DCu;
    // 0x35a6dc: 0x3c0d1000  lui         $t5, 0x1000
    ctx->pc = 0x35a6dcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4096 << 16));
    // 0x35a6e0: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x35a6e0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x35a6e4: 0x3c0c1000  lui         $t4, 0x1000
    ctx->pc = 0x35a6e4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4096 << 16));
    // 0x35a6e8: 0x3c0f1000  lui         $t7, 0x1000
    ctx->pc = 0x35a6e8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4096 << 16));
    // 0x35a6ec: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x35a6ecu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
    // 0x35a6f0: 0x3c171000  lui         $s7, 0x1000
    ctx->pc = 0x35a6f0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)4096 << 16));
    // 0x35a6f4: 0x3c161000  lui         $s6, 0x1000
    ctx->pc = 0x35a6f4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)4096 << 16));
    // 0x35a6f8: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x35a6f8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
    // 0x35a6fc: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x35a6fcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x35a700: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x35a700u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x35a704: 0x35add000  ori         $t5, $t5, 0xD000
    ctx->pc = 0x35a704u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)53248);
    // 0x35a708: 0x356be020  ori         $t3, $t3, 0xE020
    ctx->pc = 0x35a708u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)57376);
    // 0x35a70c: 0x240e0100  addiu       $t6, $zero, 0x100
    ctx->pc = 0x35a70cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35a710: 0x358cd400  ori         $t4, $t4, 0xD400
    ctx->pc = 0x35a710u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)54272);
    // 0x35a714: 0x24180200  addiu       $t8, $zero, 0x200
    ctx->pc = 0x35a714u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x35a718: 0x35efe010  ori         $t7, $t7, 0xE010
    ctx->pc = 0x35a718u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)57360);
    // 0x35a71c: 0x37ded480  ori         $fp, $fp, 0xD480
    ctx->pc = 0x35a71cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)54400);
    // 0x35a720: 0x36f7d410  ori         $s7, $s7, 0xD410
    ctx->pc = 0x35a720u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)54288);
    // 0x35a724: 0x36d6d420  ori         $s6, $s6, 0xD420
    ctx->pc = 0x35a724u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)54304);
    // 0x35a728: 0x36b5d080  ori         $s5, $s5, 0xD080
    ctx->pc = 0x35a728u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)53376);
    // 0x35a72c: 0x3694d010  ori         $s4, $s4, 0xD010
    ctx->pc = 0x35a72cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)53264);
    // 0x35a730: 0x3673d020  ori         $s3, $s3, 0xD020
    ctx->pc = 0x35a730u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)53280);
    // 0x35a734: 0x0  nop
    ctx->pc = 0x35a734u;
    // NOP
label_35a738:
    // 0x35a738: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x35a738u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 13), 0))); // MMIO: 0x1000d000
    // 0x35a73c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35a73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35a740: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x35A740u;
    {
        const bool branch_taken_0x35a740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a740) {
            ctx->pc = 0x35A770u;
            goto label_35a770;
        }
    }
    ctx->pc = 0x35A748u;
    // 0x35a748: 0xad6e0000  sw          $t6, 0x0($t3)
    ctx->pc = 0x35a748u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 14));
    // 0x35a74c: 0xf  sync
    ctx->pc = 0x35a74cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35a750: 0x40f  sync.p
    ctx->pc = 0x35a750u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35a754:
    // 0x35a754: 0x0  nop
    ctx->pc = 0x35a754u;
    // NOP
    // 0x35a758: 0x0  nop
    ctx->pc = 0x35a758u;
    // NOP
    // 0x35a75c: 0x0  nop
    ctx->pc = 0x35a75cu;
    // NOP
    // 0x35a760: 0x0  nop
    ctx->pc = 0x35a760u;
    // NOP
    // 0x35a764: 0x0  nop
    ctx->pc = 0x35a764u;
    // NOP
    // 0x35a768: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35A768u;
    {
        const bool branch_taken_0x35a768 = (false);
        if (branch_taken_0x35a768) {
            ctx->pc = 0x35A754u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a754;
        }
    }
    ctx->pc = 0x35A770u;
label_35a770:
    // 0x35a770: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x35a770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x35a774: 0x2647ff34  addiu       $a3, $s2, -0xCC
    ctx->pc = 0x35a774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967092));
    // 0x35a778: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x35a778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35a77c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x35a77cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35a780: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35a780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35a784: 0x26120cc0  addiu       $s2, $s0, 0xCC0
    ctx->pc = 0x35a784u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3264));
    // 0x35a788: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x35A788u;
    {
        const bool branch_taken_0x35a788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A788u;
        // 0x35a78c: 0x26393300  addiu       $t9, $s1, 0x3300 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 17), 13056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a788) {
            ctx->pc = 0x35A7DCu;
            goto label_35a7dc;
        }
    }
    ctx->pc = 0x35A790u;
    // 0x35a790: 0xad780000  sw          $t8, 0x0($t3)
    ctx->pc = 0x35a790u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 24));
    // 0x35a794: 0xf  sync
    ctx->pc = 0x35a794u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35a798: 0x40f  sync.p
    ctx->pc = 0x35a798u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35a79c:
    // 0x35a79c: 0x0  nop
    ctx->pc = 0x35a79cu;
    // NOP
    // 0x35a7a0: 0x0  nop
    ctx->pc = 0x35a7a0u;
    // NOP
    // 0x35a7a4: 0x0  nop
    ctx->pc = 0x35a7a4u;
    // NOP
    // 0x35a7a8: 0x0  nop
    ctx->pc = 0x35a7a8u;
    // NOP
    // 0x35a7ac: 0x0  nop
    ctx->pc = 0x35a7acu;
    // NOP
    // 0x35a7b0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35A7B0u;
    {
        const bool branch_taken_0x35a7b0 = (false);
        if (branch_taken_0x35a7b0) {
            ctx->pc = 0x35A79Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a79c;
        }
    }
    ctx->pc = 0x35A7B8u;
    // 0x35a7b8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35a7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35a7bc: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35a7bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_35a7c0:
    // 0x35a7c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35a7c4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35a7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35a7c8: 0x0  nop
    ctx->pc = 0x35a7c8u;
    // NOP
    // 0x35a7cc: 0x0  nop
    ctx->pc = 0x35a7ccu;
    // NOP
    // 0x35a7d0: 0x0  nop
    ctx->pc = 0x35a7d0u;
    // NOP
    // 0x35a7d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35A7D4u;
    {
        const bool branch_taken_0x35a7d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35a7d4) {
            ctx->pc = 0x35A7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a7c0;
        }
    }
    ctx->pc = 0x35A7DCu;
label_35a7dc:
    // 0x35a7dc: 0xadf80000  sw          $t8, 0x0($t7)
    ctx->pc = 0x35a7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 24));
    // 0x35a7e0: 0x240200cc  addiu       $v0, $zero, 0xCC
    ctx->pc = 0x35a7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x35a7e4: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x35a7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x35a7e8: 0xaef00000  sw          $s0, 0x0($s7)
    ctx->pc = 0x35a7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 16));
    // 0x35a7ec: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x35a7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x35a7f0: 0xad8e0000  sw          $t6, 0x0($t4)
    ctx->pc = 0x35a7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 14));
    // 0x35a7f4: 0xf  sync
    ctx->pc = 0x35a7f4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35a7f8: 0x40f  sync.p
    ctx->pc = 0x35a7f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35a7fc: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x35a7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x35a800: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35a800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35a804: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x35A804u;
    {
        const bool branch_taken_0x35a804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A804u;
        // 0x35a808: 0x3c057000  lui         $a1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a804) {
            ctx->pc = 0x35A85Cu;
            goto label_35a85c;
        }
    }
    ctx->pc = 0x35A80Cu;
    // 0x35a80c: 0xad780000  sw          $t8, 0x0($t3)
    ctx->pc = 0x35a80cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 24));
    // 0x35a810: 0xf  sync
    ctx->pc = 0x35a810u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35a814: 0x40f  sync.p
    ctx->pc = 0x35a814u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35a818:
    // 0x35a818: 0x0  nop
    ctx->pc = 0x35a818u;
    // NOP
    // 0x35a81c: 0x0  nop
    ctx->pc = 0x35a81cu;
    // NOP
    // 0x35a820: 0x0  nop
    ctx->pc = 0x35a820u;
    // NOP
    // 0x35a824: 0x0  nop
    ctx->pc = 0x35a824u;
    // NOP
    // 0x35a828: 0x0  nop
    ctx->pc = 0x35a828u;
    // NOP
    // 0x35a82c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35A82Cu;
    {
        const bool branch_taken_0x35a82c = (false);
        if (branch_taken_0x35a82c) {
            ctx->pc = 0x35A818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a818;
        }
    }
    ctx->pc = 0x35A834u;
    // 0x35a834: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35a834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35a838: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35a838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x35a83c: 0x0  nop
    ctx->pc = 0x35a83cu;
    // NOP
label_35a840:
    // 0x35a840: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35a840u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35a844: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35a844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35a848: 0x0  nop
    ctx->pc = 0x35a848u;
    // NOP
    // 0x35a84c: 0x0  nop
    ctx->pc = 0x35a84cu;
    // NOP
    // 0x35a850: 0x0  nop
    ctx->pc = 0x35a850u;
    // NOP
    // 0x35a854: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35A854u;
    {
        const bool branch_taken_0x35a854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35A858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A854u;
        // 0x35a858: 0x3c057000  lui         $a1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a854) {
            ctx->pc = 0x35A840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a840;
        }
    }
    ctx->pc = 0x35A85Cu;
label_35a85c:
    // 0x35a85c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x35a85cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a860: 0x3c097000  lui         $t1, 0x7000
    ctx->pc = 0x35a860u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
    // 0x35a864: 0x34a50cc0  ori         $a1, $a1, 0xCC0
    ctx->pc = 0x35a864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3264);
    // 0x35a868: 0x240a00cb  addiu       $t2, $zero, 0xCB
    ctx->pc = 0x35a868u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
    // 0x35a86c: 0x0  nop
    ctx->pc = 0x35a86cu;
    // NOP
label_35a870:
    // 0x35a870: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x35a870u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x35a874: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x35a874u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x35a878: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x35a878u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35a87c: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x35a87cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a880: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35a880u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a884: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35a884u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a888: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35a888u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a88c: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35a88cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a890: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35a890u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a894: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35a894u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a898: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35a898u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a89c: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35a89cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a8a0: 0x4bc82128  vadd.xyz    $vf4, $vf4, $vf8
    ctx->pc = 0x35a8a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a8a4: 0x4bc82968  vadd.xyz    $vf5, $vf5, $vf8
    ctx->pc = 0x35a8a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a8a8: 0x4bc831a8  vadd.xyz    $vf6, $vf6, $vf8
    ctx->pc = 0x35a8a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a8ac: 0x4bc839e8  vadd.xyz    $vf7, $vf7, $vf8
    ctx->pc = 0x35a8acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a8b0: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x35a8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35a8b4: 0xf8a50010  sqc2        $vf5, 0x10($a1)
    ctx->pc = 0x35a8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35a8b8: 0xf8a60020  sqc2        $vf6, 0x20($a1)
    ctx->pc = 0x35a8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35a8bc: 0xf8a70030  sqc2        $vf7, 0x30($a1)
    ctx->pc = 0x35a8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35a8c0: 0x24a30040  addiu       $v1, $a1, 0x40
    ctx->pc = 0x35a8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x35a8c4: 0x25220010  addiu       $v0, $t1, 0x10
    ctx->pc = 0x35a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x35a8c8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35a8c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35a8cc: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x35a8ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x35a8d0: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x35a8d0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35a8d4: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x35a8d4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a8d8: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35a8d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a8dc: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35a8dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a8e0: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35a8e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a8e4: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35a8e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a8e8: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35a8e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a8ec: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35a8ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a8f0: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35a8f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a8f4: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35a8f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a8f8: 0x4bc82128  vadd.xyz    $vf4, $vf4, $vf8
    ctx->pc = 0x35a8f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a8fc: 0x4bc82968  vadd.xyz    $vf5, $vf5, $vf8
    ctx->pc = 0x35a8fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a900: 0x4bc831a8  vadd.xyz    $vf6, $vf6, $vf8
    ctx->pc = 0x35a900u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a904: 0x4bc839e8  vadd.xyz    $vf7, $vf7, $vf8
    ctx->pc = 0x35a904u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a908: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x35a908u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35a90c: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x35a90cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35a910: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x35a910u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35a914: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x35a914u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35a918: 0x24a40080  addiu       $a0, $a1, 0x80
    ctx->pc = 0x35a918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x35a91c: 0x25220020  addiu       $v0, $t1, 0x20
    ctx->pc = 0x35a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x35a920: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35a920u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35a924: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x35a924u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x35a928: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x35a928u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35a92c: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x35a92cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a930: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35a930u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a934: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35a934u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a938: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35a938u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a93c: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35a93cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a940: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35a940u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a944: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35a944u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a948: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35a948u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a94c: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35a94cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a950: 0x4bc82128  vadd.xyz    $vf4, $vf4, $vf8
    ctx->pc = 0x35a950u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a954: 0x4bc82968  vadd.xyz    $vf5, $vf5, $vf8
    ctx->pc = 0x35a954u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a958: 0x4bc831a8  vadd.xyz    $vf6, $vf6, $vf8
    ctx->pc = 0x35a958u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a95c: 0x4bc839e8  vadd.xyz    $vf7, $vf7, $vf8
    ctx->pc = 0x35a95cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a960: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x35a960u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35a964: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x35a964u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35a968: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x35a968u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35a96c: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x35a96cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35a970: 0x24a300c0  addiu       $v1, $a1, 0xC0
    ctx->pc = 0x35a970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x35a974: 0x25220030  addiu       $v0, $t1, 0x30
    ctx->pc = 0x35a974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
    // 0x35a978: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35a978u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35a97c: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x35a97cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x35a980: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x35a980u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35a984: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x35a984u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a988: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35a988u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a98c: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35a98cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a990: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35a990u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a994: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35a994u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a998: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35a998u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a99c: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35a99cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a9a0: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35a9a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a9a4: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35a9a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a9a8: 0x4bc82128  vadd.xyz    $vf4, $vf4, $vf8
    ctx->pc = 0x35a9a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a9ac: 0x4bc82968  vadd.xyz    $vf5, $vf5, $vf8
    ctx->pc = 0x35a9acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a9b0: 0x4bc831a8  vadd.xyz    $vf6, $vf6, $vf8
    ctx->pc = 0x35a9b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a9b4: 0x4bc839e8  vadd.xyz    $vf7, $vf7, $vf8
    ctx->pc = 0x35a9b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a9b8: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x35a9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35a9bc: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x35a9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35a9c0: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x35a9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35a9c4: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x35a9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35a9c8: 0x24a40100  addiu       $a0, $a1, 0x100
    ctx->pc = 0x35a9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    // 0x35a9cc: 0x25220040  addiu       $v0, $t1, 0x40
    ctx->pc = 0x35a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
    // 0x35a9d0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35a9d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35a9d4: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x35a9d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x35a9d8: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x35a9d8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35a9dc: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x35a9dcu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a9e0: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35a9e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a9e4: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35a9e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a9e8: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35a9e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a9ec: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35a9ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35a9f0: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35a9f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35a9f4: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35a9f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a9f8: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35a9f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35a9fc: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35a9fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35aa00: 0x4bc82128  vadd.xyz    $vf4, $vf4, $vf8
    ctx->pc = 0x35aa00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35aa04: 0x4bc82968  vadd.xyz    $vf5, $vf5, $vf8
    ctx->pc = 0x35aa04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35aa08: 0x4bc831a8  vadd.xyz    $vf6, $vf6, $vf8
    ctx->pc = 0x35aa08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35aa0c: 0x4bc839e8  vadd.xyz    $vf7, $vf7, $vf8
    ctx->pc = 0x35aa0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35aa10: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x35aa10u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35aa14: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x35aa14u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35aa18: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x35aa18u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35aa1c: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x35aa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35aa20: 0x24a30140  addiu       $v1, $a1, 0x140
    ctx->pc = 0x35aa20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x35aa24: 0x25220050  addiu       $v0, $t1, 0x50
    ctx->pc = 0x35aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
    // 0x35aa28: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35aa28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35aa2c: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x35aa2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x35aa30: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x35aa30u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35aa34: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x35aa34u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35aa38: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35aa38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35aa3c: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35aa3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35aa40: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35aa40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35aa44: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35aa44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35aa48: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35aa48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35aa4c: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35aa4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35aa50: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35aa50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35aa54: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35aa54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35aa58: 0x4bc82128  vadd.xyz    $vf4, $vf4, $vf8
    ctx->pc = 0x35aa58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35aa5c: 0x4bc82968  vadd.xyz    $vf5, $vf5, $vf8
    ctx->pc = 0x35aa5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35aa60: 0x4bc831a8  vadd.xyz    $vf6, $vf6, $vf8
    ctx->pc = 0x35aa60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35aa64: 0x4bc839e8  vadd.xyz    $vf7, $vf7, $vf8
    ctx->pc = 0x35aa64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35aa68: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x35aa68u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35aa6c: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x35aa6cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35aa70: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x35aa70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35aa74: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x35aa74u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35aa78: 0x24a40180  addiu       $a0, $a1, 0x180
    ctx->pc = 0x35aa78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
    // 0x35aa7c: 0x25220060  addiu       $v0, $t1, 0x60
    ctx->pc = 0x35aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 96));
    // 0x35aa80: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35aa80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35aa84: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x35aa84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x35aa88: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x35aa88u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35aa8c: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x35aa8cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35aa90: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35aa90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35aa94: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35aa94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35aa98: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35aa98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35aa9c: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35aa9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35aaa0: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35aaa0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35aaa4: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35aaa4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35aaa8: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35aaa8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35aaac: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35aaacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35aab0: 0x4bc82128  vadd.xyz    $vf4, $vf4, $vf8
    ctx->pc = 0x35aab0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35aab4: 0x4bc82968  vadd.xyz    $vf5, $vf5, $vf8
    ctx->pc = 0x35aab4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35aab8: 0x4bc831a8  vadd.xyz    $vf6, $vf6, $vf8
    ctx->pc = 0x35aab8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35aabc: 0x4bc839e8  vadd.xyz    $vf7, $vf7, $vf8
    ctx->pc = 0x35aabcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35aac0: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x35aac0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35aac4: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x35aac4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35aac8: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x35aac8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35aacc: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x35aaccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35aad0: 0x24a301c0  addiu       $v1, $a1, 0x1C0
    ctx->pc = 0x35aad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 448));
    // 0x35aad4: 0x25220070  addiu       $v0, $t1, 0x70
    ctx->pc = 0x35aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 112));
    // 0x35aad8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35aad8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35aadc: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x35aadcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x35aae0: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x35aae0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35aae4: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x35aae4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35aae8: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35aae8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35aaec: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35aaecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35aaf0: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35aaf0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35aaf4: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35aaf4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35aaf8: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35aaf8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35aafc: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35aafcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35ab00: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35ab00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35ab04: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35ab04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35ab08: 0x4bc82128  vadd.xyz    $vf4, $vf4, $vf8
    ctx->pc = 0x35ab08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35ab0c: 0x4bc82968  vadd.xyz    $vf5, $vf5, $vf8
    ctx->pc = 0x35ab0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35ab10: 0x4bc831a8  vadd.xyz    $vf6, $vf6, $vf8
    ctx->pc = 0x35ab10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35ab14: 0x4bc839e8  vadd.xyz    $vf7, $vf7, $vf8
    ctx->pc = 0x35ab14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35ab18: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x35ab18u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35ab1c: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x35ab1cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35ab20: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x35ab20u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35ab24: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x35ab24u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35ab28: 0x24a40200  addiu       $a0, $a1, 0x200
    ctx->pc = 0x35ab28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
    // 0x35ab2c: 0x25220080  addiu       $v0, $t1, 0x80
    ctx->pc = 0x35ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 128));
    // 0x35ab30: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35ab30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35ab34: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x35ab34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x35ab38: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x35ab38u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35ab3c: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x35ab3cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ab40: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35ab40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35ab44: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35ab44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35ab48: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35ab48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35ab4c: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35ab4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35ab50: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35ab50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35ab54: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35ab54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35ab58: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35ab58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35ab5c: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35ab5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35ab60: 0x4bc82128  vadd.xyz    $vf4, $vf4, $vf8
    ctx->pc = 0x35ab60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35ab64: 0x4bc82968  vadd.xyz    $vf5, $vf5, $vf8
    ctx->pc = 0x35ab64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35ab68: 0x4bc831a8  vadd.xyz    $vf6, $vf6, $vf8
    ctx->pc = 0x35ab68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35ab6c: 0x4bc839e8  vadd.xyz    $vf7, $vf7, $vf8
    ctx->pc = 0x35ab6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35ab70: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x35ab70u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35ab74: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x35ab74u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35ab78: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x35ab78u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35ab7c: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x35ab7cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35ab80: 0x24a30240  addiu       $v1, $a1, 0x240
    ctx->pc = 0x35ab80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 576));
    // 0x35ab84: 0x25220090  addiu       $v0, $t1, 0x90
    ctx->pc = 0x35ab84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
    // 0x35ab88: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35ab88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35ab8c: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x35ab8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x35ab90: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x35ab90u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35ab94: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x35ab94u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ab98: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35ab98u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35ab9c: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35ab9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35aba0: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35aba0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35aba4: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35aba4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35aba8: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35aba8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35abac: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35abacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35abb0: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35abb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35abb4: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35abb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35abb8: 0x4bc82128  vadd.xyz    $vf4, $vf4, $vf8
    ctx->pc = 0x35abb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35abbc: 0x4bc82968  vadd.xyz    $vf5, $vf5, $vf8
    ctx->pc = 0x35abbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35abc0: 0x4bc831a8  vadd.xyz    $vf6, $vf6, $vf8
    ctx->pc = 0x35abc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35abc4: 0x4bc839e8  vadd.xyz    $vf7, $vf7, $vf8
    ctx->pc = 0x35abc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35abc8: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x35abc8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35abcc: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x35abccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35abd0: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x35abd0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35abd4: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x35abd4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35abd8: 0x24a40280  addiu       $a0, $a1, 0x280
    ctx->pc = 0x35abd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 640));
    // 0x35abdc: 0x252200a0  addiu       $v0, $t1, 0xA0
    ctx->pc = 0x35abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 160));
    // 0x35abe0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35abe0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35abe4: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x35abe4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x35abe8: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x35abe8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35abec: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x35abecu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35abf0: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35abf0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35abf4: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35abf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35abf8: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35abf8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35abfc: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35abfcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35ac00: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35ac00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35ac04: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35ac04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35ac08: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35ac08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35ac0c: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35ac0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35ac10: 0x4bc82128  vadd.xyz    $vf4, $vf4, $vf8
    ctx->pc = 0x35ac10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35ac14: 0x4bc82968  vadd.xyz    $vf5, $vf5, $vf8
    ctx->pc = 0x35ac14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35ac18: 0x4bc831a8  vadd.xyz    $vf6, $vf6, $vf8
    ctx->pc = 0x35ac18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35ac1c: 0x4bc839e8  vadd.xyz    $vf7, $vf7, $vf8
    ctx->pc = 0x35ac1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35ac20: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x35ac20u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35ac24: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x35ac24u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35ac28: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x35ac28u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35ac2c: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x35ac2cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35ac30: 0x24a302c0  addiu       $v1, $a1, 0x2C0
    ctx->pc = 0x35ac30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 704));
    // 0x35ac34: 0x252200b0  addiu       $v0, $t1, 0xB0
    ctx->pc = 0x35ac34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 176));
    // 0x35ac38: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35ac38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35ac3c: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x35ac3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x35ac40: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x35ac40u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35ac44: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x35ac44u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ac48: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35ac48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35ac4c: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35ac4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35ac50: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35ac50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35ac54: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35ac54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35ac58: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35ac58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35ac5c: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35ac5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35ac60: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35ac60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35ac64: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35ac64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35ac68: 0x4bc82128  vadd.xyz    $vf4, $vf4, $vf8
    ctx->pc = 0x35ac68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35ac6c: 0x4bc82968  vadd.xyz    $vf5, $vf5, $vf8
    ctx->pc = 0x35ac6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35ac70: 0x4bc831a8  vadd.xyz    $vf6, $vf6, $vf8
    ctx->pc = 0x35ac70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35ac74: 0x4bc839e8  vadd.xyz    $vf7, $vf7, $vf8
    ctx->pc = 0x35ac74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35ac78: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x35ac78u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35ac7c: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x35ac7cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35ac80: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x35ac80u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35ac84: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x35ac84u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35ac88: 0x24a50300  addiu       $a1, $a1, 0x300
    ctx->pc = 0x35ac88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 768));
    // 0x35ac8c: 0x254afff4  addiu       $t2, $t2, -0xC
    ctx->pc = 0x35ac8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967284));
    // 0x35ac90: 0x541fef7  bgez        $t2, . + 4 + (-0x109 << 2)
    ctx->pc = 0x35AC90u;
    {
        const bool branch_taken_0x35ac90 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x35AC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AC90u;
        // 0x35ac94: 0x252900c0  addiu       $t1, $t1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ac90) {
            ctx->pc = 0x35A870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a870;
        }
    }
    ctx->pc = 0x35AC98u;
    // 0x35ac98: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x35ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x35ac9c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35ac9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35aca0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x35ACA0u;
    {
        const bool branch_taken_0x35aca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35aca0) {
            ctx->pc = 0x35ACD0u;
            goto label_35acd0;
        }
    }
    ctx->pc = 0x35ACA8u;
    // 0x35aca8: 0xad6e0000  sw          $t6, 0x0($t3)
    ctx->pc = 0x35aca8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 14));
    // 0x35acac: 0xf  sync
    ctx->pc = 0x35acacu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35acb0: 0x40f  sync.p
    ctx->pc = 0x35acb0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35acb4:
    // 0x35acb4: 0x0  nop
    ctx->pc = 0x35acb4u;
    // NOP
    // 0x35acb8: 0x0  nop
    ctx->pc = 0x35acb8u;
    // NOP
    // 0x35acbc: 0x0  nop
    ctx->pc = 0x35acbcu;
    // NOP
    // 0x35acc0: 0x0  nop
    ctx->pc = 0x35acc0u;
    // NOP
    // 0x35acc4: 0x0  nop
    ctx->pc = 0x35acc4u;
    // NOP
    // 0x35acc8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35ACC8u;
    {
        const bool branch_taken_0x35acc8 = (false);
        if (branch_taken_0x35acc8) {
            ctx->pc = 0x35ACB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35acb4;
        }
    }
    ctx->pc = 0x35ACD0u;
label_35acd0:
    // 0x35acd0: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x35acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x35acd4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35acd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35acd8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x35ACD8u;
    {
        const bool branch_taken_0x35acd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35acd8) {
            ctx->pc = 0x35AD2Cu;
            goto label_35ad2c;
        }
    }
    ctx->pc = 0x35ACE0u;
    // 0x35ace0: 0xad780000  sw          $t8, 0x0($t3)
    ctx->pc = 0x35ace0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 24));
    // 0x35ace4: 0xf  sync
    ctx->pc = 0x35ace4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35ace8: 0x40f  sync.p
    ctx->pc = 0x35ace8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35acec:
    // 0x35acec: 0x0  nop
    ctx->pc = 0x35acecu;
    // NOP
    // 0x35acf0: 0x0  nop
    ctx->pc = 0x35acf0u;
    // NOP
    // 0x35acf4: 0x0  nop
    ctx->pc = 0x35acf4u;
    // NOP
    // 0x35acf8: 0x0  nop
    ctx->pc = 0x35acf8u;
    // NOP
    // 0x35acfc: 0x0  nop
    ctx->pc = 0x35acfcu;
    // NOP
    // 0x35ad00: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35AD00u;
    {
        const bool branch_taken_0x35ad00 = (false);
        if (branch_taken_0x35ad00) {
            ctx->pc = 0x35ACECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35acec;
        }
    }
    ctx->pc = 0x35AD08u;
    // 0x35ad08: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35ad08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35ad0c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35ad0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_35ad10:
    // 0x35ad10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35ad14: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35ad14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35ad18: 0x0  nop
    ctx->pc = 0x35ad18u;
    // NOP
    // 0x35ad1c: 0x0  nop
    ctx->pc = 0x35ad1cu;
    // NOP
    // 0x35ad20: 0x0  nop
    ctx->pc = 0x35ad20u;
    // NOP
    // 0x35ad24: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35AD24u;
    {
        const bool branch_taken_0x35ad24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ad24) {
            ctx->pc = 0x35AD10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ad10;
        }
    }
    ctx->pc = 0x35AD2Cu;
label_35ad2c:
    // 0x35ad2c: 0xadee0000  sw          $t6, 0x0($t7)
    ctx->pc = 0x35ad2cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 14));
    // 0x35ad30: 0x24020cc0  addiu       $v0, $zero, 0xCC0
    ctx->pc = 0x35ad30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3264));
    // 0x35ad34: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x35ad34u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x35ad38: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x35ad38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x35ad3c: 0x24020330  addiu       $v0, $zero, 0x330
    ctx->pc = 0x35ad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    // 0x35ad40: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x35ad40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x35ad44: 0xadae0000  sw          $t6, 0x0($t5)
    ctx->pc = 0x35ad44u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 14));
    // 0x35ad48: 0xf  sync
    ctx->pc = 0x35ad48u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35ad4c: 0x40f  sync.p
    ctx->pc = 0x35ad4cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35ad50: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x35ad50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ad54: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x35ad54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ad58: 0x2a4200cd  slti        $v0, $s2, 0xCD
    ctx->pc = 0x35ad58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)205) ? 1 : 0);
    // 0x35ad5c: 0x1040fe76  beqz        $v0, . + 4 + (-0x18A << 2)
    ctx->pc = 0x35AD5Cu;
    {
        const bool branch_taken_0x35ad5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AD5Cu;
        // 0x35ad60: 0x320882d  daddu       $s1, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ad5c) {
            ctx->pc = 0x35A738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a738;
        }
    }
    ctx->pc = 0x35AD64u;
    // 0x35ad64: 0x0  nop
    ctx->pc = 0x35ad64u;
    // NOP
label_35ad68:
    // 0x35ad68: 0x124001fd  beqz        $s2, . + 4 + (0x1FD << 2)
    ctx->pc = 0x35AD68u;
    {
        const bool branch_taken_0x35ad68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AD68u;
        // 0x35ad6c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ad68) {
            ctx->pc = 0x35B560u;
            goto label_35b560;
        }
    }
    ctx->pc = 0x35AD70u;
    // 0x35ad70: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x35ad70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x35ad74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35ad74u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
    // 0x35ad78: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x35ad78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x35ad7c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x35AD7Cu;
    {
        const bool branch_taken_0x35ad7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AD7Cu;
        // 0x35ad80: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ad7c) {
            ctx->pc = 0x35ADB8u;
            goto label_35adb8;
        }
    }
    ctx->pc = 0x35AD84u;
    // 0x35ad84: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x35ad84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35ad88: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x35ad88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35ad8c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35ad8cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x35ad90: 0xf  sync
    ctx->pc = 0x35ad90u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35ad94: 0x40f  sync.p
    ctx->pc = 0x35ad94u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35ad98:
    // 0x35ad98: 0x0  nop
    ctx->pc = 0x35ad98u;
    // NOP
    // 0x35ad9c: 0x0  nop
    ctx->pc = 0x35ad9cu;
    // NOP
    // 0x35ada0: 0x0  nop
    ctx->pc = 0x35ada0u;
    // NOP
    // 0x35ada4: 0x0  nop
    ctx->pc = 0x35ada4u;
    // NOP
    // 0x35ada8: 0x0  nop
    ctx->pc = 0x35ada8u;
    // NOP
    // 0x35adac: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35ADACu;
    {
        const bool branch_taken_0x35adac = (false);
        if (branch_taken_0x35adac) {
            ctx->pc = 0x35AD98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ad98;
        }
    }
    ctx->pc = 0x35ADB4u;
    // 0x35adb4: 0x0  nop
    ctx->pc = 0x35adb4u;
    // NOP
label_35adb8:
    // 0x35adb8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35adb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35adbc: 0x124080  sll         $t0, $s2, 2
    ctx->pc = 0x35adbcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x35adc0: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35adc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x35adc4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35adc8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35adc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35adcc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x35ADCCu;
    {
        const bool branch_taken_0x35adcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ADCCu;
        // 0x35add0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35adcc) {
            ctx->pc = 0x35AE2Cu;
            goto label_35ae2c;
        }
    }
    ctx->pc = 0x35ADD4u;
    // 0x35add4: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x35add4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x35add8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x35add8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35addc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35addcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x35ade0: 0xf  sync
    ctx->pc = 0x35ade0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35ade4: 0x40f  sync.p
    ctx->pc = 0x35ade4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35ade8:
    // 0x35ade8: 0x0  nop
    ctx->pc = 0x35ade8u;
    // NOP
    // 0x35adec: 0x0  nop
    ctx->pc = 0x35adecu;
    // NOP
    // 0x35adf0: 0x0  nop
    ctx->pc = 0x35adf0u;
    // NOP
    // 0x35adf4: 0x0  nop
    ctx->pc = 0x35adf4u;
    // NOP
    // 0x35adf8: 0x0  nop
    ctx->pc = 0x35adf8u;
    // NOP
    // 0x35adfc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35ADFCu;
    {
        const bool branch_taken_0x35adfc = (false);
        if (branch_taken_0x35adfc) {
            ctx->pc = 0x35ADE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ade8;
        }
    }
    ctx->pc = 0x35AE04u;
    // 0x35ae04: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35ae04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35ae08: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35ae08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x35ae0c: 0x0  nop
    ctx->pc = 0x35ae0cu;
    // NOP
label_35ae10:
    // 0x35ae10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35ae14: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35ae14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35ae18: 0x0  nop
    ctx->pc = 0x35ae18u;
    // NOP
    // 0x35ae1c: 0x0  nop
    ctx->pc = 0x35ae1cu;
    // NOP
    // 0x35ae20: 0x0  nop
    ctx->pc = 0x35ae20u;
    // NOP
    // 0x35ae24: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35AE24u;
    {
        const bool branch_taken_0x35ae24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ae24) {
            ctx->pc = 0x35AE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ae10;
        }
    }
    ctx->pc = 0x35AE2Cu;
label_35ae2c:
    // 0x35ae2c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35ae30: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x35ae30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x35ae34: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x35ae34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x35ae38: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35ae38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35ae3c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x35ae3cu;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x1000e010
    // 0x35ae40: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x35ae40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x35ae44: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x35ae44u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 0)); // MMIO: 0x1000d480
    // 0x35ae48: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35ae4c: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x35ae4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x35ae50: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35ae50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35ae54: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x35ae54u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 16)); // MMIO: 0x1000d410
    // 0x35ae58: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x35ae58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x35ae5c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x35ae5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x35ae60: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x35ae60u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 18)); // MMIO: 0x1000d420
    // 0x35ae64: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x35ae64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x35ae68: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x35ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35ae6c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x35ae6cu;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x1000d400
    // 0x35ae70: 0xf  sync
    ctx->pc = 0x35ae70u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35ae74: 0x40f  sync.p
    ctx->pc = 0x35ae74u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35ae78: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x35ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35ae7c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35ae7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35ae80: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x35AE80u;
    {
        const bool branch_taken_0x35ae80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AE80u;
        // 0x35ae84: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ae80) {
            ctx->pc = 0x35AEDCu;
            goto label_35aedc;
        }
    }
    ctx->pc = 0x35AE88u;
    // 0x35ae88: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x35ae88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35ae8c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x35ae8cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x1000e020
    // 0x35ae90: 0xf  sync
    ctx->pc = 0x35ae90u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35ae94: 0x40f  sync.p
    ctx->pc = 0x35ae94u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35ae98:
    // 0x35ae98: 0x0  nop
    ctx->pc = 0x35ae98u;
    // NOP
    // 0x35ae9c: 0x0  nop
    ctx->pc = 0x35ae9cu;
    // NOP
    // 0x35aea0: 0x0  nop
    ctx->pc = 0x35aea0u;
    // NOP
    // 0x35aea4: 0x0  nop
    ctx->pc = 0x35aea4u;
    // NOP
    // 0x35aea8: 0x0  nop
    ctx->pc = 0x35aea8u;
    // NOP
    // 0x35aeac: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35AEACu;
    {
        const bool branch_taken_0x35aeac = (false);
        if (branch_taken_0x35aeac) {
            ctx->pc = 0x35AE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ae98;
        }
    }
    ctx->pc = 0x35AEB4u;
    // 0x35aeb4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35aeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35aeb8: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35aeb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x35aebc: 0x0  nop
    ctx->pc = 0x35aebcu;
    // NOP
label_35aec0:
    // 0x35aec0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35aec4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35aec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35aec8: 0x0  nop
    ctx->pc = 0x35aec8u;
    // NOP
    // 0x35aecc: 0x0  nop
    ctx->pc = 0x35aeccu;
    // NOP
    // 0x35aed0: 0x0  nop
    ctx->pc = 0x35aed0u;
    // NOP
    // 0x35aed4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35AED4u;
    {
        const bool branch_taken_0x35aed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35aed4) {
            ctx->pc = 0x35AEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35aec0;
        }
    }
    ctx->pc = 0x35AEDCu;
label_35aedc:
    // 0x35aedc: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x35aedcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x35aee0: 0x3c097000  lui         $t1, 0x7000
    ctx->pc = 0x35aee0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
    // 0x35aee4: 0x1a4000ae  blez        $s2, . + 4 + (0xAE << 2)
    ctx->pc = 0x35AEE4u;
    {
        const bool branch_taken_0x35aee4 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x35AEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AEE4u;
        // 0x35aee8: 0x34a50cc0  ori         $a1, $a1, 0xCC0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3264);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35aee4) {
            ctx->pc = 0x35B1A0u;
            goto label_35b1a0;
        }
    }
    ctx->pc = 0x35AEECu;
    // 0x35aeec: 0x121023  negu        $v0, $s2
    ctx->pc = 0x35aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x35aef0: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x35aef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35aef4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x35aef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x35aef8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x35aef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35aefc: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x35AEFCu;
    {
        const bool branch_taken_0x35aefc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AEFCu;
        // 0x35af00: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35aefc) {
            ctx->pc = 0x35B038u;
            goto label_35b038;
        }
    }
    ctx->pc = 0x35AF04u;
    // 0x35af04: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x35af04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x35af08: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x35AF08u;
    {
        const bool branch_taken_0x35af08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AF08u;
        // 0x35af0c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35af08) {
            ctx->pc = 0x35AFD8u;
            goto label_35afd8;
        }
    }
    ctx->pc = 0x35AF10u;
    // 0x35af10: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x35AF10u;
    {
        const bool branch_taken_0x35af10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35af10) {
            ctx->pc = 0x35AF78u;
            goto label_35af78;
        }
    }
    ctx->pc = 0x35AF18u;
    // 0x35af18: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x35af18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x35af1c: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x35af1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x35af20: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x35af20u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35af24: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x35af24u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35af28: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35af28u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35af2c: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35af2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35af30: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35af30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35af34: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35af34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35af38: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35af38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35af3c: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35af3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35af40: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35af40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35af44: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35af44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35af48: 0x4bc82128  vadd.xyz    $vf4, $vf4, $vf8
    ctx->pc = 0x35af48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35af4c: 0x4bc82968  vadd.xyz    $vf5, $vf5, $vf8
    ctx->pc = 0x35af4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35af50: 0x4bc831a8  vadd.xyz    $vf6, $vf6, $vf8
    ctx->pc = 0x35af50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35af54: 0x4bc839e8  vadd.xyz    $vf7, $vf7, $vf8
    ctx->pc = 0x35af54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35af58: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x35af58u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35af5c: 0xf8a50010  sqc2        $vf5, 0x10($a1)
    ctx->pc = 0x35af5cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35af60: 0xf8a60020  sqc2        $vf6, 0x20($a1)
    ctx->pc = 0x35af60u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35af64: 0xf8a70030  sqc2        $vf7, 0x30($a1)
    ctx->pc = 0x35af64u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35af68: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x35af68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x35af6c: 0x35290010  ori         $t1, $t1, 0x10
    ctx->pc = 0x35af6cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)16);
    // 0x35af70: 0x34a50d00  ori         $a1, $a1, 0xD00
    ctx->pc = 0x35af70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3328);
    // 0x35af74: 0x264affff  addiu       $t2, $s2, -0x1
    ctx->pc = 0x35af74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_35af78:
    // 0x35af78: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x35af78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x35af7c: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x35af7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x35af80: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x35af80u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35af84: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x35af84u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35af88: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35af88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35af8c: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35af8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35af90: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35af90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35af94: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35af94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35af98: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35af98u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35af9c: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35af9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35afa0: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35afa0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35afa4: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35afa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35afa8: 0x4bc82128  vadd.xyz    $vf4, $vf4, $vf8
    ctx->pc = 0x35afa8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35afac: 0x4bc82968  vadd.xyz    $vf5, $vf5, $vf8
    ctx->pc = 0x35afacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35afb0: 0x4bc831a8  vadd.xyz    $vf6, $vf6, $vf8
    ctx->pc = 0x35afb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35afb4: 0x4bc839e8  vadd.xyz    $vf7, $vf7, $vf8
    ctx->pc = 0x35afb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35afb8: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x35afb8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35afbc: 0xf8a50010  sqc2        $vf5, 0x10($a1)
    ctx->pc = 0x35afbcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35afc0: 0xf8a60020  sqc2        $vf6, 0x20($a1)
    ctx->pc = 0x35afc0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35afc4: 0xf8a70030  sqc2        $vf7, 0x30($a1)
    ctx->pc = 0x35afc4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35afc8: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x35afc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x35afcc: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x35afccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x35afd0: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x35afd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x35afd4: 0x0  nop
    ctx->pc = 0x35afd4u;
    // NOP
label_35afd8:
    // 0x35afd8: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x35afd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x35afdc: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x35afdcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x35afe0: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x35afe0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35afe4: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x35afe4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35afe8: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35afe8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35afec: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35afecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35aff0: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35aff0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35aff4: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35aff4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35aff8: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35aff8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35affc: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35affcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b000: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35b000u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b004: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35b004u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b008: 0x4bc82128  vadd.xyz    $vf4, $vf4, $vf8
    ctx->pc = 0x35b008u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b00c: 0x4bc82968  vadd.xyz    $vf5, $vf5, $vf8
    ctx->pc = 0x35b00cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b010: 0x4bc831a8  vadd.xyz    $vf6, $vf6, $vf8
    ctx->pc = 0x35b010u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b014: 0x4bc839e8  vadd.xyz    $vf7, $vf7, $vf8
    ctx->pc = 0x35b014u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b018: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x35b018u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35b01c: 0xf8a50010  sqc2        $vf5, 0x10($a1)
    ctx->pc = 0x35b01cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35b020: 0xf8a60020  sqc2        $vf6, 0x20($a1)
    ctx->pc = 0x35b020u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35b024: 0xf8a70030  sqc2        $vf7, 0x30($a1)
    ctx->pc = 0x35b024u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35b028: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x35b028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x35b02c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x35b02cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x35b030: 0x1140005b  beqz        $t2, . + 4 + (0x5B << 2)
    ctx->pc = 0x35B030u;
    {
        const bool branch_taken_0x35b030 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B030u;
        // 0x35b034: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b030) {
            ctx->pc = 0x35B1A0u;
            goto label_35b1a0;
        }
    }
    ctx->pc = 0x35B038u;
label_35b038:
    // 0x35b038: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x35b038u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x35b03c: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x35b03cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x35b040: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x35b040u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35b044: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x35b044u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b048: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35b048u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b04c: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35b04cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b050: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35b050u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b054: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35b054u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b058: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35b058u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b05c: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35b05cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b060: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35b060u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b064: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35b064u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b068: 0x4bc82128  vadd.xyz    $vf4, $vf4, $vf8
    ctx->pc = 0x35b068u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b06c: 0x4bc82968  vadd.xyz    $vf5, $vf5, $vf8
    ctx->pc = 0x35b06cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b070: 0x4bc831a8  vadd.xyz    $vf6, $vf6, $vf8
    ctx->pc = 0x35b070u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b074: 0x4bc839e8  vadd.xyz    $vf7, $vf7, $vf8
    ctx->pc = 0x35b074u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b078: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x35b078u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35b07c: 0xf8a50010  sqc2        $vf5, 0x10($a1)
    ctx->pc = 0x35b07cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35b080: 0xf8a60020  sqc2        $vf6, 0x20($a1)
    ctx->pc = 0x35b080u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35b084: 0xf8a70030  sqc2        $vf7, 0x30($a1)
    ctx->pc = 0x35b084u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35b088: 0x24a30040  addiu       $v1, $a1, 0x40
    ctx->pc = 0x35b088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x35b08c: 0x25220010  addiu       $v0, $t1, 0x10
    ctx->pc = 0x35b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x35b090: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35b090u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35b094: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x35b094u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x35b098: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x35b098u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35b09c: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x35b09cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b0a0: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35b0a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b0a4: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35b0a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b0a8: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35b0a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b0ac: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35b0acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b0b0: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35b0b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b0b4: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35b0b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b0b8: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35b0b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b0bc: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35b0bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b0c0: 0x4bc82128  vadd.xyz    $vf4, $vf4, $vf8
    ctx->pc = 0x35b0c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b0c4: 0x4bc82968  vadd.xyz    $vf5, $vf5, $vf8
    ctx->pc = 0x35b0c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b0c8: 0x4bc831a8  vadd.xyz    $vf6, $vf6, $vf8
    ctx->pc = 0x35b0c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b0cc: 0x4bc839e8  vadd.xyz    $vf7, $vf7, $vf8
    ctx->pc = 0x35b0ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b0d0: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x35b0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35b0d4: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x35b0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35b0d8: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x35b0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35b0dc: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x35b0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35b0e0: 0x24a40080  addiu       $a0, $a1, 0x80
    ctx->pc = 0x35b0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x35b0e4: 0x25220020  addiu       $v0, $t1, 0x20
    ctx->pc = 0x35b0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x35b0e8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35b0e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35b0ec: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x35b0ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x35b0f0: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x35b0f0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35b0f4: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x35b0f4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b0f8: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35b0f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b0fc: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35b0fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b100: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35b100u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b104: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35b104u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b108: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35b108u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b10c: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35b10cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b110: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35b110u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b114: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35b114u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b118: 0x4bc82128  vadd.xyz    $vf4, $vf4, $vf8
    ctx->pc = 0x35b118u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b11c: 0x4bc82968  vadd.xyz    $vf5, $vf5, $vf8
    ctx->pc = 0x35b11cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b120: 0x4bc831a8  vadd.xyz    $vf6, $vf6, $vf8
    ctx->pc = 0x35b120u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b124: 0x4bc839e8  vadd.xyz    $vf7, $vf7, $vf8
    ctx->pc = 0x35b124u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b128: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x35b128u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35b12c: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x35b12cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35b130: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x35b130u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35b134: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x35b134u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35b138: 0x24a300c0  addiu       $v1, $a1, 0xC0
    ctx->pc = 0x35b138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x35b13c: 0x25220030  addiu       $v0, $t1, 0x30
    ctx->pc = 0x35b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
    // 0x35b140: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35b140u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35b144: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x35b144u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x35b148: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x35b148u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35b14c: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x35b14cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b150: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35b150u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b154: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35b154u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b158: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35b158u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b15c: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35b15cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b160: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35b160u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b164: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35b164u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b168: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35b168u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b16c: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35b16cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b170: 0x4bc82128  vadd.xyz    $vf4, $vf4, $vf8
    ctx->pc = 0x35b170u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b174: 0x4bc82968  vadd.xyz    $vf5, $vf5, $vf8
    ctx->pc = 0x35b174u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b178: 0x4bc831a8  vadd.xyz    $vf6, $vf6, $vf8
    ctx->pc = 0x35b178u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b17c: 0x4bc839e8  vadd.xyz    $vf7, $vf7, $vf8
    ctx->pc = 0x35b17cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b180: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x35b180u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35b184: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x35b184u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35b188: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x35b188u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35b18c: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x35b18cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35b190: 0x24a50100  addiu       $a1, $a1, 0x100
    ctx->pc = 0x35b190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    // 0x35b194: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x35b194u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x35b198: 0x1540ffa7  bnez        $t2, . + 4 + (-0x59 << 2)
    ctx->pc = 0x35B198u;
    {
        const bool branch_taken_0x35b198 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x35B19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B198u;
        // 0x35b19c: 0x25290040  addiu       $t1, $t1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b198) {
            ctx->pc = 0x35B038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b038;
        }
    }
    ctx->pc = 0x35B1A0u;
label_35b1a0:
    // 0x35b1a0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35b1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35b1a4: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x35b1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x35b1a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35b1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x35b1ac: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x35b1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x35b1b0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x35B1B0u;
    {
        const bool branch_taken_0x35b1b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B1B0u;
        // 0x35b1b4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b1b0) {
            ctx->pc = 0x35B1E8u;
            goto label_35b1e8;
        }
    }
    ctx->pc = 0x35B1B8u;
    // 0x35b1b8: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x35b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35b1bc: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x35b1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35b1c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35b1c0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x35b1c4: 0xf  sync
    ctx->pc = 0x35b1c4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35b1c8: 0x40f  sync.p
    ctx->pc = 0x35b1c8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35b1cc:
    // 0x35b1cc: 0x0  nop
    ctx->pc = 0x35b1ccu;
    // NOP
    // 0x35b1d0: 0x0  nop
    ctx->pc = 0x35b1d0u;
    // NOP
    // 0x35b1d4: 0x0  nop
    ctx->pc = 0x35b1d4u;
    // NOP
    // 0x35b1d8: 0x0  nop
    ctx->pc = 0x35b1d8u;
    // NOP
    // 0x35b1dc: 0x0  nop
    ctx->pc = 0x35b1dcu;
    // NOP
    // 0x35b1e0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35B1E0u;
    {
        const bool branch_taken_0x35b1e0 = (false);
        if (branch_taken_0x35b1e0) {
            ctx->pc = 0x35B1CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b1cc;
        }
    }
    ctx->pc = 0x35B1E8u;
label_35b1e8:
    // 0x35b1e8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35b1ec: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x35b1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x35b1f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x1000d400
    // 0x35b1f4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x35b1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x35b1f8: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x35B1F8u;
    {
        const bool branch_taken_0x35b1f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B1F8u;
        // 0x35b1fc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b1f8) {
            ctx->pc = 0x35B254u;
            goto label_35b254;
        }
    }
    ctx->pc = 0x35B200u;
    // 0x35b200: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x35b200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x35b204: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x35b204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35b208: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35b208u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x35b20c: 0xf  sync
    ctx->pc = 0x35b20cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35b210: 0x40f  sync.p
    ctx->pc = 0x35b210u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35b214:
    // 0x35b214: 0x0  nop
    ctx->pc = 0x35b214u;
    // NOP
    // 0x35b218: 0x0  nop
    ctx->pc = 0x35b218u;
    // NOP
    // 0x35b21c: 0x0  nop
    ctx->pc = 0x35b21cu;
    // NOP
    // 0x35b220: 0x0  nop
    ctx->pc = 0x35b220u;
    // NOP
    // 0x35b224: 0x0  nop
    ctx->pc = 0x35b224u;
    // NOP
    // 0x35b228: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35B228u;
    {
        const bool branch_taken_0x35b228 = (false);
        if (branch_taken_0x35b228) {
            ctx->pc = 0x35B214u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b214;
        }
    }
    ctx->pc = 0x35B230u;
    // 0x35b230: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35b230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35b234: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35b234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_35b238:
    // 0x35b238: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35b238u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35b23c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35b23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35b240: 0x0  nop
    ctx->pc = 0x35b240u;
    // NOP
    // 0x35b244: 0x0  nop
    ctx->pc = 0x35b244u;
    // NOP
    // 0x35b248: 0x0  nop
    ctx->pc = 0x35b248u;
    // NOP
    // 0x35b24c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35B24Cu;
    {
        const bool branch_taken_0x35b24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35b24c) {
            ctx->pc = 0x35B238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b238;
        }
    }
    ctx->pc = 0x35B254u;
label_35b254:
    // 0x35b254: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35b254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35b258: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x35b258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35b25c: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x35b25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x35b260: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35b260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35b264: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x35b264u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x1000e010
    // 0x35b268: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x35b268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x35b26c: 0x24040cc0  addiu       $a0, $zero, 0xCC0
    ctx->pc = 0x35b26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3264));
    // 0x35b270: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35b270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35b274: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x35b274u;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 4)); // MMIO: 0x1000d080
    // 0x35b278: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x35b278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x35b27c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x35b27cu;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 17)); // MMIO: 0x1000d010
    // 0x35b280: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35b280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35b284: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x35b284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x35b288: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35b288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35b28c: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x35b28cu;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 8)); // MMIO: 0x1000d020
    // 0x35b290: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x35b290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x35b294: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x35b294u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 5)); // MMIO: 0x1000d000
    // 0x35b298: 0xf  sync
    ctx->pc = 0x35b298u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35b29c: 0x40f  sync.p
    ctx->pc = 0x35b29cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35b2a0: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x35B2A0u;
    {
        const bool branch_taken_0x35b2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B2A0u;
        // 0x35b2a4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b2a0) {
            ctx->pc = 0x35B564u;
            goto label_35b564;
        }
    }
    ctx->pc = 0x35B2A8u;
label_35b2a8:
    // 0x35b2a8: 0x1a4000ad  blez        $s2, . + 4 + (0xAD << 2)
    ctx->pc = 0x35B2A8u;
    {
        const bool branch_taken_0x35b2a8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x35B2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B2A8u;
        // 0x35b2ac: 0x121023  negu        $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b2a8) {
            ctx->pc = 0x35B560u;
            goto label_35b560;
        }
    }
    ctx->pc = 0x35B2B0u;
    // 0x35b2b0: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x35b2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35b2b4: 0x30470003  andi        $a3, $v0, 0x3
    ctx->pc = 0x35b2b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x35b2b8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x35b2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35b2bc: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x35b2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35b2c0: 0x10e0004d  beqz        $a3, . + 4 + (0x4D << 2)
    ctx->pc = 0x35B2C0u;
    {
        const bool branch_taken_0x35b2c0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B2C0u;
        // 0x35b2c4: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b2c0) {
            ctx->pc = 0x35B3F8u;
            goto label_35b3f8;
        }
    }
    ctx->pc = 0x35B2C8u;
    // 0x35b2c8: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x35b2c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x35b2cc: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x35B2CCu;
    {
        const bool branch_taken_0x35b2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B2CCu;
        // 0x35b2d0: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b2cc) {
            ctx->pc = 0x35B398u;
            goto label_35b398;
        }
    }
    ctx->pc = 0x35B2D4u;
    // 0x35b2d4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x35B2D4u;
    {
        const bool branch_taken_0x35b2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35b2d4) {
            ctx->pc = 0x35B338u;
            goto label_35b338;
        }
    }
    ctx->pc = 0x35B2DCu;
    // 0x35b2dc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x35b2dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35b2e0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x35b2e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35b2e4: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x35b2e4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35b2e8: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x35b2e8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b2ec: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35b2ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b2f0: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35b2f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b2f4: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35b2f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b2f8: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35b2f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b2fc: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35b2fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b300: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35b300u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b304: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35b304u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b308: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35b308u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b30c: 0x4bc82128  vadd.xyz    $vf4, $vf4, $vf8
    ctx->pc = 0x35b30cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b310: 0x4bc82968  vadd.xyz    $vf5, $vf5, $vf8
    ctx->pc = 0x35b310u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b314: 0x4bc831a8  vadd.xyz    $vf6, $vf6, $vf8
    ctx->pc = 0x35b314u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b318: 0x4bc839e8  vadd.xyz    $vf7, $vf7, $vf8
    ctx->pc = 0x35b318u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b31c: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x35b31cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35b320: 0xfa250010  sqc2        $vf5, 0x10($s1)
    ctx->pc = 0x35b320u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35b324: 0xfa260020  sqc2        $vf6, 0x20($s1)
    ctx->pc = 0x35b324u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35b328: 0xfa270030  sqc2        $vf7, 0x30($s1)
    ctx->pc = 0x35b328u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35b32c: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x35b32cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x35b330: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x35b330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x35b334: 0x264affff  addiu       $t2, $s2, -0x1
    ctx->pc = 0x35b334u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_35b338:
    // 0x35b338: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x35b338u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35b33c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x35b33cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35b340: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x35b340u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35b344: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x35b344u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b348: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35b348u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b34c: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35b34cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b350: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35b350u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b354: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35b354u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b358: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35b358u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b35c: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35b35cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b360: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35b360u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b364: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35b364u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b368: 0x4bc82128  vadd.xyz    $vf4, $vf4, $vf8
    ctx->pc = 0x35b368u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b36c: 0x4bc82968  vadd.xyz    $vf5, $vf5, $vf8
    ctx->pc = 0x35b36cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b370: 0x4bc831a8  vadd.xyz    $vf6, $vf6, $vf8
    ctx->pc = 0x35b370u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b374: 0x4bc839e8  vadd.xyz    $vf7, $vf7, $vf8
    ctx->pc = 0x35b374u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b378: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x35b378u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35b37c: 0xfa250010  sqc2        $vf5, 0x10($s1)
    ctx->pc = 0x35b37cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35b380: 0xfa260020  sqc2        $vf6, 0x20($s1)
    ctx->pc = 0x35b380u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35b384: 0xfa270030  sqc2        $vf7, 0x30($s1)
    ctx->pc = 0x35b384u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35b388: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x35b388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x35b38c: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x35b38cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x35b390: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x35b390u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x35b394: 0x0  nop
    ctx->pc = 0x35b394u;
    // NOP
label_35b398:
    // 0x35b398: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x35b398u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35b39c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x35b39cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35b3a0: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x35b3a0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35b3a4: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x35b3a4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b3a8: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35b3a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b3ac: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35b3acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b3b0: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35b3b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b3b4: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35b3b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b3b8: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35b3b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b3bc: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35b3bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b3c0: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35b3c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b3c4: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35b3c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b3c8: 0x4bc82128  vadd.xyz    $vf4, $vf4, $vf8
    ctx->pc = 0x35b3c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b3cc: 0x4bc82968  vadd.xyz    $vf5, $vf5, $vf8
    ctx->pc = 0x35b3ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b3d0: 0x4bc831a8  vadd.xyz    $vf6, $vf6, $vf8
    ctx->pc = 0x35b3d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b3d4: 0x4bc839e8  vadd.xyz    $vf7, $vf7, $vf8
    ctx->pc = 0x35b3d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b3d8: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x35b3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35b3dc: 0xfa250010  sqc2        $vf5, 0x10($s1)
    ctx->pc = 0x35b3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35b3e0: 0xfa260020  sqc2        $vf6, 0x20($s1)
    ctx->pc = 0x35b3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35b3e4: 0xfa270030  sqc2        $vf7, 0x30($s1)
    ctx->pc = 0x35b3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35b3e8: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x35b3e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x35b3ec: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x35b3ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x35b3f0: 0x1140005b  beqz        $t2, . + 4 + (0x5B << 2)
    ctx->pc = 0x35B3F0u;
    {
        const bool branch_taken_0x35b3f0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B3F0u;
        // 0x35b3f4: 0x2068021  addu        $s0, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b3f0) {
            ctx->pc = 0x35B560u;
            goto label_35b560;
        }
    }
    ctx->pc = 0x35B3F8u;
label_35b3f8:
    // 0x35b3f8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x35b3f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35b3fc: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x35b3fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35b400: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x35b400u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35b404: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x35b404u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b408: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35b408u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b40c: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35b40cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b410: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35b410u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b414: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35b414u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b418: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35b418u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b41c: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35b41cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b420: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35b420u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b424: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35b424u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b428: 0x4bc82128  vadd.xyz    $vf4, $vf4, $vf8
    ctx->pc = 0x35b428u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b42c: 0x4bc82968  vadd.xyz    $vf5, $vf5, $vf8
    ctx->pc = 0x35b42cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b430: 0x4bc831a8  vadd.xyz    $vf6, $vf6, $vf8
    ctx->pc = 0x35b430u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b434: 0x4bc839e8  vadd.xyz    $vf7, $vf7, $vf8
    ctx->pc = 0x35b434u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b438: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x35b438u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35b43c: 0xfa250010  sqc2        $vf5, 0x10($s1)
    ctx->pc = 0x35b43cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35b440: 0xfa260020  sqc2        $vf6, 0x20($s1)
    ctx->pc = 0x35b440u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35b444: 0xfa270030  sqc2        $vf7, 0x30($s1)
    ctx->pc = 0x35b444u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35b448: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x35b448u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x35b44c: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x35b44cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x35b450: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x35b450u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35b454: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x35b454u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35b458: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x35b458u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35b45c: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x35b45cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b460: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35b460u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b464: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35b464u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b468: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35b468u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b46c: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35b46cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b470: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35b470u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b474: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35b474u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b478: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35b478u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b47c: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35b47cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b480: 0x4bc82128  vadd.xyz    $vf4, $vf4, $vf8
    ctx->pc = 0x35b480u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b484: 0x4bc82968  vadd.xyz    $vf5, $vf5, $vf8
    ctx->pc = 0x35b484u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b488: 0x4bc831a8  vadd.xyz    $vf6, $vf6, $vf8
    ctx->pc = 0x35b488u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b48c: 0x4bc839e8  vadd.xyz    $vf7, $vf7, $vf8
    ctx->pc = 0x35b48cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b490: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x35b490u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35b494: 0xfa250010  sqc2        $vf5, 0x10($s1)
    ctx->pc = 0x35b494u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35b498: 0xfa260020  sqc2        $vf6, 0x20($s1)
    ctx->pc = 0x35b498u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35b49c: 0xfa270030  sqc2        $vf7, 0x30($s1)
    ctx->pc = 0x35b49cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35b4a0: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x35b4a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x35b4a4: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x35b4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x35b4a8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x35b4a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35b4ac: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x35b4acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35b4b0: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x35b4b0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35b4b4: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x35b4b4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b4b8: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35b4b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b4bc: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35b4bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b4c0: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35b4c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b4c4: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35b4c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b4c8: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35b4c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b4cc: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35b4ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b4d0: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35b4d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b4d4: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35b4d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b4d8: 0x4bc82128  vadd.xyz    $vf4, $vf4, $vf8
    ctx->pc = 0x35b4d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b4dc: 0x4bc82968  vadd.xyz    $vf5, $vf5, $vf8
    ctx->pc = 0x35b4dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b4e0: 0x4bc831a8  vadd.xyz    $vf6, $vf6, $vf8
    ctx->pc = 0x35b4e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b4e4: 0x4bc839e8  vadd.xyz    $vf7, $vf7, $vf8
    ctx->pc = 0x35b4e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b4e8: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x35b4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35b4ec: 0xfa250010  sqc2        $vf5, 0x10($s1)
    ctx->pc = 0x35b4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35b4f0: 0xfa260020  sqc2        $vf6, 0x20($s1)
    ctx->pc = 0x35b4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35b4f4: 0xfa270030  sqc2        $vf7, 0x30($s1)
    ctx->pc = 0x35b4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35b4f8: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x35b4f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x35b4fc: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x35b4fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x35b500: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x35b500u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35b504: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x35b504u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35b508: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x35b508u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35b50c: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x35b50cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b510: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x35b510u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b514: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x35b514u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b518: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x35b518u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b51c: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x35b51cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b520: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x35b520u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b524: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x35b524u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b528: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x35b528u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b52c: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x35b52cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b530: 0x4bc82128  vadd.xyz    $vf4, $vf4, $vf8
    ctx->pc = 0x35b530u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35b534: 0x4bc82968  vadd.xyz    $vf5, $vf5, $vf8
    ctx->pc = 0x35b534u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35b538: 0x4bc831a8  vadd.xyz    $vf6, $vf6, $vf8
    ctx->pc = 0x35b538u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35b53c: 0x4bc839e8  vadd.xyz    $vf7, $vf7, $vf8
    ctx->pc = 0x35b53cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35b540: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x35b540u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x35b544: 0xfa250010  sqc2        $vf5, 0x10($s1)
    ctx->pc = 0x35b544u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35b548: 0xfa260020  sqc2        $vf6, 0x20($s1)
    ctx->pc = 0x35b548u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x35b54c: 0xfa270030  sqc2        $vf7, 0x30($s1)
    ctx->pc = 0x35b54cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35b550: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x35b550u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x35b554: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x35b554u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x35b558: 0x1540ffa7  bnez        $t2, . + 4 + (-0x59 << 2)
    ctx->pc = 0x35B558u;
    {
        const bool branch_taken_0x35b558 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x35B55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B558u;
        // 0x35b55c: 0x2068021  addu        $s0, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b558) {
            ctx->pc = 0x35B3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b3f8;
        }
    }
    ctx->pc = 0x35B560u;
label_35b560:
    // 0x35b560: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x35b560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_35b564:
    // 0x35b564: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x35b564u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x35b568: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x35b568u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x35b56c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x35b56cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x35b570: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x35b570u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x35b574: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x35b574u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x35b578: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x35b578u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35b57c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x35b57cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35b580: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x35b580u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35b584: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x35b584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35b588: 0x3e00008  jr          $ra
    ctx->pc = 0x35B588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B588u;
        // 0x35b58c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B590u;
}
