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

// Function: sub_004A3828
// Address: 0x4a3828 - 0x4a3dc0
void sub_004A3828_0x4a3828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A3828_0x4a3828");
#endif

    switch (ctx->pc) {
        case 0x4a38c4u: goto label_4a38c4;
        case 0x4a3908u: goto label_4a3908;
        case 0x4a392cu: goto label_4a392c;
        case 0x4a3950u: goto label_4a3950;
        case 0x4a3998u: goto label_4a3998;
        case 0x4a39c0u: goto label_4a39c0;
        case 0x4a3ac8u: goto label_4a3ac8;
        case 0x4a3ae8u: goto label_4a3ae8;
        case 0x4a3b20u: goto label_4a3b20;
        case 0x4a3b70u: goto label_4a3b70;
        case 0x4a3c08u: goto label_4a3c08;
        case 0x4a3c84u: goto label_4a3c84;
        case 0x4a3ca0u: goto label_4a3ca0;
        case 0x4a3d78u: goto label_4a3d78;
        default: break;
    }

    ctx->pc = 0x4a3828u;

    // 0x4a3828: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x4a3828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x4a382c: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x4a382cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x4a3830: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x4a3830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x4a3834: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x4a3834u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x4a3838: 0x79603  sra         $s2, $a3, 24
    ctx->pc = 0x4a3838u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 7), 24));
    // 0x4a383c: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x4a383cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x4a3840: 0xb2001b  divu        $zero, $a1, $s2
    ctx->pc = 0x4a3840u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x4a3844: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x4a3844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x4a3848: 0x84603  sra         $t0, $t0, 24
    ctx->pc = 0x4a3848u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 24));
    // 0x4a384c: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x4a384cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
    // 0x4a3850: 0x7fb70100  sq          $s7, 0x100($sp)
    ctx->pc = 0x4a3850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 23));
    // 0x4a3854: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x4a3854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x4a3858: 0x829821  addu        $s3, $a0, $v0
    ctx->pc = 0x4a3858u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4a385c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x4a385cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4a3860: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x4a3860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x4a3864: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x4a3864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x4a3868: 0x7fb50120  sq          $s5, 0x120($sp)
    ctx->pc = 0x4a3868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 21));
    // 0x4a386c: 0x34a50806  ori         $a1, $a1, 0x806
    ctx->pc = 0x4a386cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
    // 0x4a3870: 0xe7b70198  swc1        $f23, 0x198($sp)
    ctx->pc = 0x4a3870u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x4a3874: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4a3874u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3878: 0xe7b60190  swc1        $f22, 0x190($sp)
    ctx->pc = 0x4a3878u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x4a387c: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x4a387cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x4a3880: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x4a3880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
    // 0x4a3884: 0x7fb60110  sq          $s6, 0x110($sp)
    ctx->pc = 0x4a3884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 22));
    // 0x4a3888: 0x7fbe00f0  sq          $fp, 0xF0($sp)
    ctx->pc = 0x4a3888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 30));
    // 0x4a388c: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x4a388cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x4a3890: 0xe7b50188  swc1        $f21, 0x188($sp)
    ctx->pc = 0x4a3890u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x4a3894: 0xe7b40180  swc1        $f20, 0x180($sp)
    ctx->pc = 0x4a3894u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x4a3898: 0xafa80094  sw          $t0, 0x94($sp)
    ctx->pc = 0x4a3898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 8));
    // 0x4a389c: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4A389Cu;
    {
        const bool branch_taken_0x4a389c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a389c) {
            ctx->pc = 0x4A38A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A389Cu;
            // 0x4a38a0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A38A4u;
            goto label_4a38a4;
        }
    }
    ctx->pc = 0x4A38A4u;
label_4a38a4:
    // 0x4a38a4: 0xafa6009c  sw          $a2, 0x9C($sp)
    ctx->pc = 0x4a38a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 6));
    // 0x4a38a8: 0xb812  mflo        $s7
    ctx->pc = 0x4a38a8u;
    SET_GPR_U64(ctx, 23, ctx->lo);
    // 0x4a38ac: 0x26e2000d  addiu       $v0, $s7, 0xD
    ctx->pc = 0x4a38acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 13));
    // 0x4a38b0: 0x26f5fffe  addiu       $s5, $s7, -0x2
    ctx->pc = 0x4a38b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967294));
    // 0x4a38b4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x4a38b4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x4a38b8: 0x2012  mflo        $a0
    ctx->pc = 0x4a38b8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x4a38bc: 0xc127ca4  jal         func_49F290
    ctx->pc = 0x4A38BCu;
    SET_GPR_U32(ctx, 31, 0x4A38C4u);
    ctx->pc = 0x4A38C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A38BCu;
    // 0x4a38c0: 0xafa400a0  sw          $a0, 0xA0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F290u, 0x4A38BCu, 0x4A38C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A38C4u;
label_4a38c4:
    // 0x4a38c4: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x4a38c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x4a38c8: 0x122040  sll         $a0, $s2, 1
    ctx->pc = 0x4a38c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x4a38cc: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x4a38ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x4a38d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4a38d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4a38d4: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4a38d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a38d8: 0x2649821  addu        $s3, $s3, $a0
    ctx->pc = 0x4a38d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x4a38dc: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x4a38dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4a38e0: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4a38e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a38e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4a38e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a38e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4a38e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4a38ec: 0x2649821  addu        $s3, $s3, $a0
    ctx->pc = 0x4a38ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x4a38f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a38f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a38f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a38f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a38f8: 0x46020dc2  mul.s       $f23, $f1, $f2
    ctx->pc = 0x4a38f8u;
    ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x4a38fc: 0x10a00051  beqz        $a1, . + 4 + (0x51 << 2)
    ctx->pc = 0x4A38FCu;
    {
        const bool branch_taken_0x4a38fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A38FCu;
        // 0x4a3900: 0x46020582  mul.s       $f22, $f0, $f2 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a38fc) {
            ctx->pc = 0x4A3A44u;
            goto label_4a3a44;
        }
    }
    ctx->pc = 0x4A3904u;
    // 0x4a3904: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x4a3904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
label_4a3908:
    // 0x4a3908: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x4a3908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x4a390c: 0x2414000e  addiu       $s4, $zero, 0xE
    ctx->pc = 0x4a390cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4a3910: 0x55102b  sltu        $v0, $v0, $s5
    ctx->pc = 0x4a3910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x4a3914: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x4a3914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x4a3918: 0x2a2a00a  movz        $s4, $s5, $v0
    ctx->pc = 0x4a3918u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 21));
    // 0x4a391c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a391cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3920: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a3920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3924: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x4A3924u;
    SET_GPR_U32(ctx, 31, 0x4A392Cu);
    ctx->pc = 0x4A3928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3924u;
    // 0x4a3928: 0x263e0001  addiu       $fp, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4A3924u, 0x4A392Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A392Cu;
label_4a392c:
    // 0x4a392c: 0x2b4a823  subu        $s5, $s5, $s4
    ctx->pc = 0x4a392cu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x4a3930: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x4a3930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x4a3934: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4a3934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3938: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x4A3938u;
    {
        const bool branch_taken_0x4a3938 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3938u;
        // 0x4a393c: 0xd1b021  addu        $s6, $a2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3938) {
            ctx->pc = 0x4A3978u;
            goto label_4a3978;
        }
    }
    ctx->pc = 0x4A3940u;
    // 0x4a3940: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x4a3940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x4a3944: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4a3944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a3948: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a3948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a394c: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x4a394cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_4a3950:
    // 0x4a3950: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4a3950u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a3954: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4a3954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4a3958: 0x2659821  addu        $s3, $s3, $a1
    ctx->pc = 0x4a3958u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x4a395c: 0x214182b  sltu        $v1, $s0, $s4
    ctx->pc = 0x4a395cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x4a3960: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a3960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a3964: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a3964u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a3968: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4a3968u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4a396c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x4a396cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4a3970: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4A3970u;
    {
        const bool branch_taken_0x4a3970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3970u;
        // 0x4a3974: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3970) {
            ctx->pc = 0x4A3950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a3950;
        }
    }
    ctx->pc = 0x4A3978u;
label_4a3978:
    // 0x4a3978: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x4a3978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x4a397c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x4a397cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x4a3980: 0x24475df8  addiu       $a3, $v0, 0x5DF8
    ctx->pc = 0x4a3980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 24056));
    // 0x4a3984: 0xc466a7c0  lwc1        $f6, -0x5840($v1)
    ctx->pc = 0x4a3984u;
    { uint32_t bits = FAST_READ32(0x60A7C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4a3988: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x4a3988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4a398c: 0x24e80004  addiu       $t0, $a3, 0x4
    ctx->pc = 0x4a398cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x4a3990: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4a3990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3994: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x4a3994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_4a3998:
    // 0x4a3998: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x4a3998u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4a399c: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x4a399cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4a39a0: 0x4600bd46  mov.s       $f21, $f23
    ctx->pc = 0x4a39a0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[23]);
    // 0x4a39a4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4a39a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4a39a8: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x4a39a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4a39ac: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x4a39acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4a39b0: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x4a39b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
    // 0x4a39b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4a39b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a39b8: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x4a39b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4a39bc: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x4a39bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4a39c0:
    // 0x4a39c0: 0x46152082  mul.s       $f2, $f4, $f21
    ctx->pc = 0x4a39c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
    // 0x4a39c4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x4a39c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4a39c8: 0x46142802  mul.s       $f0, $f5, $f20
    ctx->pc = 0x4a39c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x4a39cc: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x4a39ccu;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x4a39d0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4a39d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4a39d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4a39d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4a39d8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x4a39d8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x4a39dc: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x4a39dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4a39e0: 0x0  nop
    ctx->pc = 0x4a39e0u;
    // NOP
    // 0x4a39e4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x4A39E4u;
    {
        const bool branch_taken_0x4a39e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4A39E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A39E4u;
        // 0x4a39e8: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a39e4) {
            ctx->pc = 0x4A39F0u;
            goto label_4a39f0;
        }
    }
    ctx->pc = 0x4A39ECu;
    // 0x4a39ec: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x4a39ecu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_4a39f0:
    // 0x4a39f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4a39f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4a39f4: 0x2e02000e  sltiu       $v0, $s0, 0xE
    ctx->pc = 0x4a39f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x4a39f8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x4A39F8u;
    {
        const bool branch_taken_0x4a39f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A39FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A39F8u;
        // 0x4a39fc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a39f8) {
            ctx->pc = 0x4A39C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a39c0;
        }
    }
    ctx->pc = 0x4A3A00u;
    // 0x4a3a00: 0x46061836  c.le.s      $f3, $f6
    ctx->pc = 0x4a3a00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4a3a04: 0x0  nop
    ctx->pc = 0x4a3a04u;
    // NOP
    // 0x4a3a08: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x4A3A08u;
    {
        const bool branch_taken_0x4a3a08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4a3a08) {
            ctx->pc = 0x4A3A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A3A08u;
            // 0x4a3a0c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A3A1Cu;
            goto label_4a3a1c;
        }
    }
    ctx->pc = 0x4A3A10u;
    // 0x4a3a10: 0x46001986  mov.s       $f6, $f3
    ctx->pc = 0x4a3a10u;
    ctx->f[6] = FPU_MOV_S(ctx->f[3]);
    // 0x4a3a14: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4a3a14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3a18: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4a3a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a3a1c:
    // 0x4a3a1c: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x4a3a1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x4a3a20: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x4A3A20u;
    {
        const bool branch_taken_0x4a3a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3A20u;
        // 0x4a3a24: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3a20) {
            ctx->pc = 0x4A3998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a3998;
        }
    }
    ctx->pc = 0x4A3A28u;
    // 0x4a3a28: 0xa2c60000  sb          $a2, 0x0($s6)
    ctx->pc = 0x4a3a28u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x4a3a2c: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x4a3a2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3a30: 0x4600adc6  mov.s       $f23, $f21
    ctx->pc = 0x4a3a30u;
    ctx->f[23] = FPU_MOV_S(ctx->f[21]);
    // 0x4a3a34: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x4a3a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4a3a38: 0x224102b  sltu        $v0, $s1, $a0
    ctx->pc = 0x4a3a38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4a3a3c: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x4A3A3Cu;
    {
        const bool branch_taken_0x4a3a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3A3Cu;
        // 0x4a3a40: 0x4600a586  mov.s       $f22, $f20 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3a3c) {
            ctx->pc = 0x4A3908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a3908;
        }
    }
    ctx->pc = 0x4A3A44u;
label_4a3a44:
    // 0x4a3a44: 0x8fa50094  lw          $a1, 0x94($sp)
    ctx->pc = 0x4a3a44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x4a3a48: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x4a3a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x4a3a4c: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x4a3a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4a3a50: 0x26f5fffe  addiu       $s5, $s7, -0x2
    ctx->pc = 0x4a3a50u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967294));
    // 0x4a3a54: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x4a3a54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x4a3a58: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x4a3a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x4a3a5c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4a3a5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4a3a60: 0xc29821  addu        $s3, $a2, $v0
    ctx->pc = 0x4a3a60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4a3a64: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x4a3a64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x4a3a68: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x4a3a68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a3a6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4a3a6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3a70: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x4a3a70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x4a3a74: 0x4600b5c6  mov.s       $f23, $f22
    ctx->pc = 0x4a3a74u;
    ctx->f[23] = FPU_MOV_S(ctx->f[22]);
    // 0x4a3a78: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4a3a78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a3a7c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4a3a7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a3a80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a3a80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a3a84: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x4a3a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
    // 0x4a3a88: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x4a3a88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x4a3a8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4a3a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a3a90: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4a3a90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4a3a94: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x4a3a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4a3a98: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x4a3a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4a3a9c: 0x46020542  mul.s       $f21, $f0, $f2
    ctx->pc = 0x4a3a9cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x4a3aa0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4a3aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4a3aa4: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x4a3aa4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x4a3aa8: 0x106000b1  beqz        $v1, . + 4 + (0xB1 << 2)
    ctx->pc = 0x4A3AA8u;
    {
        const bool branch_taken_0x4a3aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3AA8u;
        // 0x4a3aac: 0xafa200a8  sw          $v0, 0xA8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3aa8) {
            ctx->pc = 0x4A3D70u;
            goto label_4a3d70;
        }
    }
    ctx->pc = 0x4A3AB0u;
    // 0x4a3ab0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4a3ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4a3ab4: 0x27a50081  addiu       $a1, $sp, 0x81
    ctx->pc = 0x4a3ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 129));
    // 0x4a3ab8: 0xafa400ac  sw          $a0, 0xAC($sp)
    ctx->pc = 0x4a3ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
    // 0x4a3abc: 0x240b7fff  addiu       $t3, $zero, 0x7FFF
    ctx->pc = 0x4a3abcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x4a3ac0: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x4a3ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x4a3ac4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x4a3ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_4a3ac8:
    // 0x4a3ac8: 0x2414000e  addiu       $s4, $zero, 0xE
    ctx->pc = 0x4a3ac8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4a3acc: 0x55102b  sltu        $v0, $v0, $s5
    ctx->pc = 0x4a3accu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x4a3ad0: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x4a3ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x4a3ad4: 0x2a2a00a  movz        $s4, $s5, $v0
    ctx->pc = 0x4a3ad4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 21));
    // 0x4a3ad8: 0x7fab00d0  sq          $t3, 0xD0($sp)
    ctx->pc = 0x4a3ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 11));
    // 0x4a3adc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a3adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3ae0: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x4A3AE0u;
    SET_GPR_U32(ctx, 31, 0x4A3AE8u);
    ctx->pc = 0x4A3AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3AE0u;
    // 0x4a3ae4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4A3AE0u, 0x4A3AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3AE8u;
label_4a3ae8:
    // 0x4a3ae8: 0x263e0001  addiu       $fp, $s1, 0x1
    ctx->pc = 0x4a3ae8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4a3aec: 0x8fa2009c  lw          $v0, 0x9C($sp)
    ctx->pc = 0x4a3aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x4a3af0: 0x2b4a823  subu        $s5, $s5, $s4
    ctx->pc = 0x4a3af0u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x4a3af4: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x4a3af4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x4a3af8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4a3af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3afc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x4a3afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x4a3b00: 0x7bab00d0  lq          $t3, 0xD0($sp)
    ctx->pc = 0x4a3b00u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x4a3b04: 0xd1b021  addu        $s6, $a2, $s1
    ctx->pc = 0x4a3b04u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x4a3b08: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x4A3B08u;
    {
        const bool branch_taken_0x4a3b08 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3B08u;
        // 0x4a3b0c: 0xafa200a4  sw          $v0, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3b08) {
            ctx->pc = 0x4A3B48u;
            goto label_4a3b48;
        }
    }
    ctx->pc = 0x4A3B10u;
    // 0x4a3b10: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x4a3b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x4a3b14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4a3b14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a3b18: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a3b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3b1c: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x4a3b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_4a3b20:
    // 0x4a3b20: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4a3b20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a3b24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4a3b24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4a3b28: 0x2659821  addu        $s3, $s3, $a1
    ctx->pc = 0x4a3b28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x4a3b2c: 0x214182b  sltu        $v1, $s0, $s4
    ctx->pc = 0x4a3b2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x4a3b30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a3b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a3b34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a3b34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a3b38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4a3b38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4a3b3c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x4a3b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4a3b40: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4A3B40u;
    {
        const bool branch_taken_0x4a3b40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3B40u;
        // 0x4a3b44: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3b40) {
            ctx->pc = 0x4A3B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a3b20;
        }
    }
    ctx->pc = 0x4A3B48u;
label_4a3b48:
    // 0x4a3b48: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x4a3b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x4a3b4c: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x4a3b4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x4a3b50: 0x24675df8  addiu       $a3, $v1, 0x5DF8
    ctx->pc = 0x4a3b50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 24056));
    // 0x4a3b54: 0xc7838198  lwc1        $f3, -0x7E68($gp)
    ctx->pc = 0x4a3b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4a3b58: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x4a3b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x4a3b5c: 0x24e80004  addiu       $t0, $a3, 0x4
    ctx->pc = 0x4a3b5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x4a3b60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4a3b60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3b64: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4a3b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3b68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a3b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3b6c: 0x0  nop
    ctx->pc = 0x4a3b6cu;
    // NOP
label_4a3b70:
    // 0x4a3b70: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x4a3b70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a3b74: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x4a3b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4a3b78: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4a3b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4a3b7c: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x4a3b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4a3b80: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4a3b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4a3b84: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x4a3b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a3b88: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x4a3b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4a3b8c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x4a3b8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x4a3b90: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x4a3b90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x4a3b94: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x4a3b94u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x4a3b98: 0x46001506  mov.s       $f20, $f2
    ctx->pc = 0x4a3b98u;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
    // 0x4a3b9c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4a3b9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4a3ba0: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x4a3ba0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x4a3ba4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x4a3ba4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x4a3ba8: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x4a3ba8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x4a3bac: 0x46013034  c.lt.s      $f6, $f1
    ctx->pc = 0x4a3bacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4a3bb0: 0x0  nop
    ctx->pc = 0x4a3bb0u;
    // NOP
    // 0x4a3bb4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x4A3BB4u;
    {
        const bool branch_taken_0x4a3bb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4A3BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3BB4u;
        // 0x4a3bb8: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3bb4) {
            ctx->pc = 0x4A3BC0u;
            goto label_4a3bc0;
        }
    }
    ctx->pc = 0x4A3BBCu;
    // 0x4a3bbc: 0x46000986  mov.s       $f6, $f1
    ctx->pc = 0x4a3bbcu;
    ctx->f[6] = FPU_MOV_S(ctx->f[1]);
label_4a3bc0:
    // 0x4a3bc0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4a3bc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4a3bc4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x4a3bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4a3bc8: 0x2e02000e  sltiu       $v0, $s0, 0xE
    ctx->pc = 0x4a3bc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x4a3bcc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x4A3BCCu;
    {
        const bool branch_taken_0x4a3bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3BCCu;
        // 0x4a3bd0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3bcc) {
            ctx->pc = 0x4A3B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a3b70;
        }
    }
    ctx->pc = 0x4A3BD4u;
    // 0x4a3bd4: 0x46003024  .word       0x46003024                   # cvt.w.s     $f0, $f6 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a3bd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[6]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4a3bd8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4a3bd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x4a3bdc: 0x24104000  addiu       $s0, $zero, 0x4000
    ctx->pc = 0x4a3bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x4a3be0: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x4a3be0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x4a3be4: 0x165102a  slt         $v0, $t3, $a1
    ctx->pc = 0x4a3be4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x4a3be8: 0x162280b  movn        $a1, $t3, $v0
    ctx->pc = 0x4a3be8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 11));
    // 0x4a3bec: 0x165182a  slt         $v1, $t3, $a1
    ctx->pc = 0x4a3becu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x4a3bf0: 0x83280a  movz        $a1, $a0, $v1
    ctx->pc = 0x4a3bf0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x4a3bf4: 0x24a20800  addiu       $v0, $a1, 0x800
    ctx->pc = 0x4a3bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2048));
    // 0x4a3bf8: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x4a3bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x4a3bfc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A3BFCu;
    {
        const bool branch_taken_0x4a3bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3BFCu;
        // 0x4a3c00: 0x2412000c  addiu       $s2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3bfc) {
            ctx->pc = 0x4A3C24u;
            goto label_4a3c24;
        }
    }
    ctx->pc = 0x4A3C04u;
    // 0x4a3c04: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x4a3c04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_4a3c08:
    // 0x4a3c08: 0x6400008  bltz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A3C08u;
    {
        const bool branch_taken_0x4a3c08 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x4A3C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3C08u;
        // 0x4a3c0c: 0x108042  srl         $s0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3c08) {
            ctx->pc = 0x4A3C2Cu;
            goto label_4a3c2c;
        }
    }
    ctx->pc = 0x4A3C10u;
    // 0x4a3c10: 0x1010c2  srl         $v0, $s0, 3
    ctx->pc = 0x4a3c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 3));
    // 0x4a3c14: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4a3c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4a3c18: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4a3c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4a3c1c: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4A3C1Cu;
    {
        const bool branch_taken_0x4a3c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a3c1c) {
            ctx->pc = 0x4A3C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A3C1Cu;
            // 0x4a3c20: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A3C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a3c08;
        }
    }
    ctx->pc = 0x4A3C24u;
label_4a3c24:
    // 0x4a3c24: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A3C24u;
    {
        const bool branch_taken_0x4a3c24 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x4A3C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3C24u;
        // 0x4a3c28: 0x2a42000d  slti        $v0, $s2, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3c24) {
            ctx->pc = 0x4A3C34u;
            goto label_4a3c34;
        }
    }
    ctx->pc = 0x4A3C2Cu;
label_4a3c2c:
    // 0x4a3c2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4A3C2Cu;
    {
        const bool branch_taken_0x4a3c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3C2Cu;
        // 0x4a3c30: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3c2c) {
            ctx->pc = 0x4A3C3Cu;
            goto label_4a3c3c;
        }
    }
    ctx->pc = 0x4A3C34u;
label_4a3c34:
    // 0x4a3c34: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x4a3c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4a3c38: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x4a3c38u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_4a3c3c:
    // 0x4a3c3c: 0xffa00080  sd          $zero, 0x80($sp)
    ctx->pc = 0x4a3c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 0));
    // 0x4a3c40: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x4a3c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4a3c44: 0x8fb100b0  lw          $s1, 0xB0($sp)
    ctx->pc = 0x4a3c44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4a3c48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4a3c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3c4c: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x4a3c4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4a3c50: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4a3c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4a3c54: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4a3c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4a3c58: 0xa3a20080  sb          $v0, 0x80($sp)
    ctx->pc = 0x4a3c58u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 2));
    // 0x4a3c5c: 0x12800038  beqz        $s4, . + 4 + (0x38 << 2)
    ctx->pc = 0x4A3C5Cu;
    {
        const bool branch_taken_0x4a3c5c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3C5Cu;
        // 0x4a3c60: 0x929023  subu        $s2, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3c5c) {
            ctx->pc = 0x4A3D40u;
            goto label_4a3d40;
        }
    }
    ctx->pc = 0x4A3C64u;
    // 0x4a3c64: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x4a3c64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
    // 0x4a3c68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4a3c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a3c6c: 0x24b75df8  addiu       $s7, $a1, 0x5DF8
    ctx->pc = 0x4a3c6cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 24056));
    // 0x4a3c70: 0x7fab00d0  sq          $t3, 0xD0($sp)
    ctx->pc = 0x4a3c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 11));
    // 0x4a3c74: 0x26ea0004  addiu       $t2, $s7, 0x4
    ctx->pc = 0x4a3c74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x4a3c78: 0x2442014  dsllv       $a0, $a0, $s2
    ctx->pc = 0x4a3c78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 18) & 0x3F));
    // 0x4a3c7c: 0xc0beb04  jal         func_2FAC10
    ctx->pc = 0x4A3C7Cu;
    SET_GPR_U32(ctx, 31, 0x4A3C84u);
    ctx->pc = 0x4A3C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3C7Cu;
    // 0x4a3c80: 0x7faa00c0  sq          $t2, 0xC0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAC10u, 0x4A3C7Cu, 0x4A3C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3C84u;
label_4a3c84:
    // 0x4a3c84: 0x8fa700ac  lw          $a3, 0xAC($sp)
    ctx->pc = 0x4a3c84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x4a3c88: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x4a3c88u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x4a3c8c: 0x7bab00d0  lq          $t3, 0xD0($sp)
    ctx->pc = 0x4a3c8cu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x4a3c90: 0x2409f000  addiu       $t1, $zero, -0x1000
    ctx->pc = 0x4a3c90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x4a3c94: 0x7baa00c0  lq          $t2, 0xC0($sp)
    ctx->pc = 0x4a3c94u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x4a3c98: 0x2408fff0  addiu       $t0, $zero, -0x10
    ctx->pc = 0x4a3c98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x4a3c9c: 0x0  nop
    ctx->pc = 0x4a3c9cu;
    // NOP
label_4a3ca0:
    // 0x4a3ca0: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x4a3ca0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4a3ca4: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x4a3ca4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x4a3ca8: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x4a3ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4a3cac: 0x24057fff  addiu       $a1, $zero, 0x7FFF
    ctx->pc = 0x4a3cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x4a3cb0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4a3cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4a3cb4: 0x32040001  andi        $a0, $s0, 0x1
    ctx->pc = 0x4a3cb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x4a3cb8: 0x4a1821  addu        $v1, $v0, $t2
    ctx->pc = 0x4a3cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4a3cbc: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x4a3cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x4a3cc0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x4a3cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4a3cc4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4a3cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a3cc8: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x4a3cc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x4a3ccc: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x4a3cccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x4a3cd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4a3cd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4a3cd4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x4a3cd4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x4a3cd8: 0x46031042  mul.s       $f1, $f2, $f3
    ctx->pc = 0x4a3cd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x4a3cdc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a3cdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4a3ce0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x4a3ce0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4a3ce4: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x4a3ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x4a3ce8: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4a3ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4a3cec: 0x162102a  slt         $v0, $t3, $v0
    ctx->pc = 0x4a3cecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4a3cf0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A3CF0u;
    {
        const bool branch_taken_0x4a3cf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3CF0u;
        // 0x4a3cf4: 0xa2300b  movn        $a2, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3cf0) {
            ctx->pc = 0x4A3D10u;
            goto label_4a3d10;
        }
    }
    ctx->pc = 0x4A3CF8u;
    // 0x4a3cf8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x4a3cf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a3cfc: 0x61b02  srl         $v1, $a2, 12
    ctx->pc = 0x4a3cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 12));
    // 0x4a3d00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a3d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a3d04: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x4a3d04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4a3d08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A3D08u;
    {
        const bool branch_taken_0x4a3d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3D08u;
        // 0x4a3d0c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3d08) {
            ctx->pc = 0x4A3D1Cu;
            goto label_4a3d1c;
        }
    }
    ctx->pc = 0x4A3D10u;
label_4a3d10:
    // 0x4a3d10: 0x61203  sra         $v0, $a2, 8
    ctx->pc = 0x4a3d10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 8));
    // 0x4a3d14: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4a3d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4a3d18: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x4a3d18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_4a3d1c:
    // 0x4a3d1c: 0x2461007  srav        $v0, $a2, $s2
    ctx->pc = 0x4a3d1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 18) & 0x1F));
    // 0x4a3d20: 0x4600b5c6  mov.s       $f23, $f22
    ctx->pc = 0x4a3d20u;
    ctx->f[23] = FPU_MOV_S(ctx->f[22]);
    // 0x4a3d24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a3d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a3d28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a3d28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a3d2c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4a3d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4a3d30: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x4a3d30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x4a3d34: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x4a3d34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x4a3d38: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x4A3D38u;
    {
        const bool branch_taken_0x4a3d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3D38u;
        // 0x4a3d3c: 0x46020581  sub.s       $f22, $f0, $f2 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3d38) {
            ctx->pc = 0x4A3CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a3ca0;
        }
    }
    ctx->pc = 0x4A3D40u;
label_4a3d40:
    // 0x4a3d40: 0x8fa2009c  lw          $v0, 0x9C($sp)
    ctx->pc = 0x4a3d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x4a3d44: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x4a3d44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3d48: 0x6ba30087  ldl         $v1, 0x87($sp)
    ctx->pc = 0x4a3d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4a3d4c: 0x6fa30080  ldr         $v1, 0x80($sp)
    ctx->pc = 0x4a3d4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4a3d50: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x4a3d50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a3d54: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x4a3d54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a3d58: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x4a3d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x4a3d5c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x4a3d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4a3d60: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x4a3d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x4a3d64: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x4a3d64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4a3d68: 0x1440ff57  bnez        $v0, . + 4 + (-0xA9 << 2)
    ctx->pc = 0x4A3D68u;
    {
        const bool branch_taken_0x4a3d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3D68u;
        // 0x4a3d6c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3d68) {
            ctx->pc = 0x4A3AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a3ac8;
        }
    }
    ctx->pc = 0x4A3D70u;
label_4a3d70:
    // 0x4a3d70: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x4A3D70u;
    SET_GPR_U32(ctx, 31, 0x4A3D78u);
    ctx->pc = 0x4A3D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3D70u;
    // 0x4a3d74: 0x8fa40098  lw          $a0, 0x98($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A3D70u, 0x4A3D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3D78u;
label_4a3d78:
    // 0x4a3d78: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x4a3d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x4a3d7c: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x4a3d7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x4a3d80: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x4a3d80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x4a3d84: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x4a3d84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x4a3d88: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x4a3d88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x4a3d8c: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x4a3d8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x4a3d90: 0x7bb50120  lq          $s5, 0x120($sp)
    ctx->pc = 0x4a3d90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x4a3d94: 0x7bb60110  lq          $s6, 0x110($sp)
    ctx->pc = 0x4a3d94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x4a3d98: 0x7bb70100  lq          $s7, 0x100($sp)
    ctx->pc = 0x4a3d98u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x4a3d9c: 0x7bbe00f0  lq          $fp, 0xF0($sp)
    ctx->pc = 0x4a3d9cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x4a3da0: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x4a3da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x4a3da4: 0xc7b70198  lwc1        $f23, 0x198($sp)
    ctx->pc = 0x4a3da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x4a3da8: 0xc7b60190  lwc1        $f22, 0x190($sp)
    ctx->pc = 0x4a3da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x4a3dac: 0xc7b50188  lwc1        $f21, 0x188($sp)
    ctx->pc = 0x4a3dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4a3db0: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x4a3db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4a3db4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A3DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A3DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3DB4u;
        // 0x4a3db8: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A3DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A3DBCu;
    // 0x4a3dbc: 0x0  nop
    ctx->pc = 0x4a3dbcu;
    // NOP
    ctx->pc = 0x4a3dc0u;
}
