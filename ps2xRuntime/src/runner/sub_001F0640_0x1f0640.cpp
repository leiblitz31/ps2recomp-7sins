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

// Function: sub_001F0640
// Address: 0x1f0640 - 0x1f0800
void sub_001F0640_0x1f0640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0640_0x1f0640");
#endif

    switch (ctx->pc) {
        case 0x1f0670u: goto label_1f0670;
        case 0x1f06b8u: goto label_1f06b8;
        case 0x1f06d4u: goto label_1f06d4;
        case 0x1f0714u: goto label_1f0714;
        default: break;
    }

    ctx->pc = 0x1f0640u;

    // 0x1f0640: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1f0640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1f0644: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f0644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f0648: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f0648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f064c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f064cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f0650: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f0650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f0654: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x1f0654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x1f0658: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x1f0658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x1f065c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1f065cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f0660: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1f0660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0664: 0x27a60088  addiu       $a2, $sp, 0x88
    ctx->pc = 0x1f0664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1f0668: 0xc07bd0c  jal         func_1EF430
    ctx->pc = 0x1F0668u;
    SET_GPR_U32(ctx, 31, 0x1F0670u);
    ctx->pc = 0x1EF430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF430u, 0x1F0668u, 0x1F0670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0670u;
label_1f0670:
    // 0x1f0670: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0674: 0x2443001c  addiu       $v1, $v0, 0x1C
    ctx->pc = 0x1f0674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x1f0678: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1f0678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1f067c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1f067cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0680: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1f0680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0684: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x1f0684u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1f0688: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1f0688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1f068c: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1f068cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1f0690: 0x27a30078  addiu       $v1, $sp, 0x78
    ctx->pc = 0x1f0690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1f0694: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x1f0694u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f0698: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1f0698u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1f069c: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1f069cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f06a0: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1f06a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f06a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f06a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f06a8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1f06a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1f06ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f06acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f06b0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F06B0u;
    {
        const bool branch_taken_0x1f06b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f06b0) {
            ctx->pc = 0x1F06FCu;
            goto label_1f06fc;
        }
    }
    ctx->pc = 0x1F06B8u;
label_1f06b8:
    // 0x1f06b8: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1f06b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1f06bc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1f06bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1f06c0: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1f06c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f06c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f06c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f06c8: 0x24460060  addiu       $a2, $v0, 0x60
    ctx->pc = 0x1f06c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1f06cc: 0xc07c15c  jal         func_1F0570
    ctx->pc = 0x1F06CCu;
    SET_GPR_U32(ctx, 31, 0x1F06D4u);
    ctx->pc = 0x1F0570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0570u, 0x1F06CCu, 0x1F06D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F06D4u;
label_1f06d4:
    // 0x1f06d4: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1f06d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1f06d8: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1f06d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f06dc: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1f06dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1f06e0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1f06e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1f06e4: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x1f06e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f06e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f06e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f06ec: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1f06ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1f06f0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1f06f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1f06f4: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x1f06f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x1f06f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f06f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f06fc:
    // 0x1f06fc: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x1f06fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1f0700: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1F0700u;
    {
        const bool branch_taken_0x1f0700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0700) {
            ctx->pc = 0x1F06B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f06b8;
        }
    }
    ctx->pc = 0x1F0708u;
    // 0x1f0708: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f0708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f070c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1F070Cu;
    {
        const bool branch_taken_0x1f070c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f070c) {
            ctx->pc = 0x1F07D0u;
            goto label_1f07d0;
        }
    }
    ctx->pc = 0x1F0714u;
label_1f0714:
    // 0x1f0714: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0718: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1f0718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1f071c: 0x90420124  lbu         $v0, 0x124($v0)
    ctx->pc = 0x1f071cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 292)));
    // 0x1f0720: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f0720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f0724: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1F0724u;
    {
        const bool branch_taken_0x1f0724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0724) {
            ctx->pc = 0x1F07CCu;
            goto label_1f07cc;
        }
    }
    ctx->pc = 0x1F072Cu;
    // 0x1f072c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f072cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0730: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0734: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1f0734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1f0738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f073c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F073Cu;
    {
        const bool branch_taken_0x1f073c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f073c) {
            ctx->pc = 0x1F0770u;
            goto label_1f0770;
        }
    }
    ctx->pc = 0x1F0744u;
    // 0x1f0744: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1f0744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1f0748: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1f0748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1f074c: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x1f074cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0750: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1f0750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0754: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1f0754u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0758: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0758u;
    {
        const bool branch_taken_0x1f0758 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0758) {
            ctx->pc = 0x1F0770u;
            goto label_1f0770;
        }
    }
    ctx->pc = 0x1F0760u;
    // 0x1f0760: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0764: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1f0764u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f0768: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F0768u;
    {
        const bool branch_taken_0x1f0768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0768) {
            ctx->pc = 0x1F07A8u;
            goto label_1f07a8;
        }
    }
    ctx->pc = 0x1F0770u;
label_1f0770:
    // 0x1f0770: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0774: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1f0774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1f0778: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f0778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f077c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F077Cu;
    {
        const bool branch_taken_0x1f077c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f077c) {
            ctx->pc = 0x1F07A8u;
            goto label_1f07a8;
        }
    }
    ctx->pc = 0x1F0784u;
    // 0x1f0784: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1f0784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1f0788: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1f0788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1f078c: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x1f078cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0790: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1f0790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0794: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f0794u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0798: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F0798u;
    {
        const bool branch_taken_0x1f0798 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0798) {
            ctx->pc = 0x1F07A8u;
            goto label_1f07a8;
        }
    }
    ctx->pc = 0x1F07A0u;
    // 0x1f07a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f07a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f07a4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1f07a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1f07a8:
    // 0x1f07a8: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F07A8u;
    {
        const bool branch_taken_0x1f07a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f07a8) {
            ctx->pc = 0x1F07CCu;
            goto label_1f07cc;
        }
    }
    ctx->pc = 0x1F07B0u;
    // 0x1f07b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f07b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f07b4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f07b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f07b8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1f07b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1f07bc: 0xa0430124  sb          $v1, 0x124($v0)
    ctx->pc = 0x1f07bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 292), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f07c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f07c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f07c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F07C4u;
    {
        const bool branch_taken_0x1f07c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f07c4) {
            ctx->pc = 0x1F07E0u;
            goto label_1f07e0;
        }
    }
    ctx->pc = 0x1F07CCu;
label_1f07cc:
    // 0x1f07cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f07ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f07d0:
    // 0x1f07d0: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x1f07d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1f07d4: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1F07D4u;
    {
        const bool branch_taken_0x1f07d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f07d4) {
            ctx->pc = 0x1F0714u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0714;
        }
    }
    ctx->pc = 0x1F07DCu;
    // 0x1f07dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f07dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f07e0:
    // 0x1f07e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f07e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f07e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f07e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f07e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f07e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f07ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f07ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f07f0: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1f07f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1f07f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F07F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F07F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F07FCu;
    // 0x1f07fc: 0x0  nop
    ctx->pc = 0x1f07fcu;
    // NOP
    ctx->pc = 0x1f0800u;
}
