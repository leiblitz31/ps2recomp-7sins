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

// Function: sub_002BF740
// Address: 0x2bf740 - 0x2bfa70
void sub_002BF740_0x2bf740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF740_0x2bf740");
#endif

    switch (ctx->pc) {
        case 0x2bf798u: goto label_2bf798;
        case 0x2bf7a8u: goto label_2bf7a8;
        case 0x2bf7b8u: goto label_2bf7b8;
        case 0x2bf7ecu: goto label_2bf7ec;
        case 0x2bf808u: goto label_2bf808;
        case 0x2bf818u: goto label_2bf818;
        case 0x2bf824u: goto label_2bf824;
        case 0x2bf844u: goto label_2bf844;
        case 0x2bf854u: goto label_2bf854;
        case 0x2bf86cu: goto label_2bf86c;
        case 0x2bf888u: goto label_2bf888;
        case 0x2bf898u: goto label_2bf898;
        case 0x2bf8a8u: goto label_2bf8a8;
        case 0x2bf8c8u: goto label_2bf8c8;
        case 0x2bf8d8u: goto label_2bf8d8;
        case 0x2bf914u: goto label_2bf914;
        case 0x2bf93cu: goto label_2bf93c;
        case 0x2bf94cu: goto label_2bf94c;
        case 0x2bf96cu: goto label_2bf96c;
        case 0x2bf97cu: goto label_2bf97c;
        case 0x2bf98cu: goto label_2bf98c;
        case 0x2bf9a4u: goto label_2bf9a4;
        case 0x2bf9d4u: goto label_2bf9d4;
        case 0x2bf9e8u: goto label_2bf9e8;
        case 0x2bfa18u: goto label_2bfa18;
        case 0x2bfa34u: goto label_2bfa34;
        default: break;
    }

    ctx->pc = 0x2bf740u;

    // 0x2bf740: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x2bf740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x2bf744: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2bf744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2bf748: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2bf748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2bf74c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2bf74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2bf750: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2bf750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2bf754: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2bf754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2bf758: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2bf758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2bf75c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bf75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2bf760: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bf760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bf764: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bf764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bf768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bf768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bf76c: 0xafa50130  sw          $a1, 0x130($sp)
    ctx->pc = 0x2bf76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 5));
    // 0x2bf770: 0xafa60140  sw          $a2, 0x140($sp)
    ctx->pc = 0x2bf770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 6));
    // 0x2bf774: 0xafa70150  sw          $a3, 0x150($sp)
    ctx->pc = 0x2bf774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 7));
    // 0x2bf778: 0xe7ac0160  swc1        $f12, 0x160($sp)
    ctx->pc = 0x2bf778u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x2bf77c: 0xafa80170  sw          $t0, 0x170($sp)
    ctx->pc = 0x2bf77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 8));
    // 0x2bf780: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2bf780u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf784: 0xc78081c0  lwc1        $f0, -0x7E40($gp)
    ctx->pc = 0x2bf784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf788: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x2bf788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x2bf78c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2bf78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2bf790: 0xc05ef10  jal         func_17BC40
    ctx->pc = 0x2BF790u;
    SET_GPR_U32(ctx, 31, 0x2BF798u);
    ctx->pc = 0x17BC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BC40u, 0x2BF790u, 0x2BF798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF798u;
label_2bf798:
    // 0x2bf798: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x2bf798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2bf79c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2bf79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2bf7a0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2BF7A0u;
    SET_GPR_U32(ctx, 31, 0x2BF7A8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BF7A0u, 0x2BF7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF7A8u;
label_2bf7a8:
    // 0x2bf7a8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2bf7a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf7ac: 0x8e840028  lw          $a0, 0x28($s4)
    ctx->pc = 0x2bf7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x2bf7b0: 0xc090590  jal         func_241640
    ctx->pc = 0x2BF7B0u;
    SET_GPR_U32(ctx, 31, 0x2BF7B8u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x2BF7B0u, 0x2BF7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF7B8u;
label_2bf7b8:
    // 0x2bf7b8: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x2bf7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
    // 0x2bf7bc: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x2bf7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2bf7c0: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x2bf7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2bf7c4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2bf7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bf7c8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2bf7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf7cc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2bf7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf7d0: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2bf7d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2bf7d4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2bf7d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2bf7d8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2bf7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2bf7dc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2bf7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2bf7e0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2bf7e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf7e4: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2BF7E4u;
    SET_GPR_U32(ctx, 31, 0x2BF7ECu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2BF7E4u, 0x2BF7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF7ECu;
label_2bf7ec:
    // 0x2bf7ec: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x2bf7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf7f0: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2bf7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2bf7f4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2bf7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2bf7f8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2bf7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2bf7fc: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x2bf7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2bf800: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x2BF800u;
    SET_GPR_U32(ctx, 31, 0x2BF808u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x2BF800u, 0x2BF808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF808u;
label_2bf808:
    // 0x2bf808: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2bf808u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf80c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2bf80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf810: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x2BF810u;
    SET_GPR_U32(ctx, 31, 0x2BF818u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x2BF810u, 0x2BF818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF818u;
label_2bf818:
    // 0x2bf818: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bf818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf81c: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x2BF81Cu;
    {
        const bool branch_taken_0x2bf81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf81c) {
            ctx->pc = 0x2BFA0Cu;
            goto label_2bfa0c;
        }
    }
    ctx->pc = 0x2BF824u;
label_2bf824:
    // 0x2bf824: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2bf824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bf828: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x2bf828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2bf82c: 0x10620076  beq         $v1, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x2BF82Cu;
    {
        const bool branch_taken_0x2bf82c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bf82c) {
            ctx->pc = 0x2BFA08u;
            goto label_2bfa08;
        }
    }
    ctx->pc = 0x2BF834u;
    // 0x2bf834: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2bf834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bf838: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2bf838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2bf83c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2BF83Cu;
    SET_GPR_U32(ctx, 31, 0x2BF844u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BF83Cu, 0x2BF844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF844u;
label_2bf844:
    // 0x2bf844: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2bf844u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf848: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bf848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf84c: 0xc09107c  jal         func_2441F0
    ctx->pc = 0x2BF84Cu;
    SET_GPR_U32(ctx, 31, 0x2BF854u);
    ctx->pc = 0x2441F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2441F0u, 0x2BF84Cu, 0x2BF854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF854u;
label_2bf854:
    // 0x2bf854: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x2bf854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x2bf858: 0x1043006b  beq         $v0, $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x2BF858u;
    {
        const bool branch_taken_0x2bf858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2bf858) {
            ctx->pc = 0x2BFA08u;
            goto label_2bfa08;
        }
    }
    ctx->pc = 0x2BF860u;
    // 0x2bf860: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2bf860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bf864: 0xc085530  jal         func_2154C0
    ctx->pc = 0x2BF864u;
    SET_GPR_U32(ctx, 31, 0x2BF86Cu);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x2BF864u, 0x2BF86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF86Cu;
label_2bf86c:
    // 0x2bf86c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2bf86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2bf870: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2BF870u;
    {
        const bool branch_taken_0x2bf870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2bf870) {
            ctx->pc = 0x2BF8B8u;
            goto label_2bf8b8;
        }
    }
    ctx->pc = 0x2BF878u;
    // 0x2bf878: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2bf878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2bf87c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2bf87cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bf880: 0xc0af520  jal         func_2BD480
    ctx->pc = 0x2BF880u;
    SET_GPR_U32(ctx, 31, 0x2BF888u);
    ctx->pc = 0x2BD480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD480u, 0x2BF880u, 0x2BF888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF888u;
label_2bf888:
    // 0x2bf888: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2bf888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bf88c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2bf88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2bf890: 0xc041d58  jal         func_107560
    ctx->pc = 0x2BF890u;
    SET_GPR_U32(ctx, 31, 0x2BF898u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2BF890u, 0x2BF898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF898u;
label_2bf898:
    // 0x2bf898: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2bf898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2bf89c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bf89cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf8a0: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2BF8A0u;
    SET_GPR_U32(ctx, 31, 0x2BF8A8u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2BF8A0u, 0x2BF8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF8A8u;
label_2bf8a8:
    // 0x2bf8a8: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x2bf8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf8ac: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2bf8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2bf8b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2BF8B0u;
    {
        const bool branch_taken_0x2bf8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf8b0) {
            ctx->pc = 0x2BF8D8u;
            goto label_2bf8d8;
        }
    }
    ctx->pc = 0x2BF8B8u;
label_2bf8b8:
    // 0x2bf8b8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2bf8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2bf8bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bf8bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf8c0: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2BF8C0u;
    SET_GPR_U32(ctx, 31, 0x2BF8C8u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2BF8C0u, 0x2BF8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF8C8u;
label_2bf8c8:
    // 0x2bf8c8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2bf8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bf8cc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2bf8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2bf8d0: 0xc041d58  jal         func_107560
    ctx->pc = 0x2BF8D0u;
    SET_GPR_U32(ctx, 31, 0x2BF8D8u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2BF8D0u, 0x2BF8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF8D8u;
label_2bf8d8:
    // 0x2bf8d8: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x2bf8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf8dc: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x2bf8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf8e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2bf8e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bf8e4: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2bf8e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2bf8e8: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x2bf8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf8ec: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x2bf8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf8f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2bf8f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bf8f4: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2bf8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2bf8f8: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x2bf8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf8fc: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x2bf8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf900: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2bf900u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bf904: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x2bf904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2bf908: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2bf908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bf90c: 0xc104d24  jal         func_413490
    ctx->pc = 0x2BF90Cu;
    SET_GPR_U32(ctx, 31, 0x2BF914u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2BF90Cu, 0x2BF914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF914u;
label_2bf914:
    // 0x2bf914: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x2bf914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2bf918: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x2bf918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf91c: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x2bf91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf920: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bf920u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf924: 0x45000038  bc1f        . + 4 + (0x38 << 2)
    ctx->pc = 0x2BF924u;
    {
        const bool branch_taken_0x2bf924 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bf924) {
            ctx->pc = 0x2BFA08u;
            goto label_2bfa08;
        }
    }
    ctx->pc = 0x2BF92Cu;
    // 0x2bf92c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2bf92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bf930: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2bf930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2bf934: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2BF934u;
    SET_GPR_U32(ctx, 31, 0x2BF93Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BF934u, 0x2BF93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF93Cu;
label_2bf93c:
    // 0x2bf93c: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x2bf93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x2bf940: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2bf940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2bf944: 0xc09b044  jal         func_26C110
    ctx->pc = 0x2BF944u;
    SET_GPR_U32(ctx, 31, 0x2BF94Cu);
    ctx->pc = 0x26C110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C110u, 0x2BF944u, 0x2BF94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF94Cu;
label_2bf94c:
    // 0x2bf94c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2BF94Cu;
    {
        const bool branch_taken_0x2bf94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf94c) {
            ctx->pc = 0x2BFA08u;
            goto label_2bfa08;
        }
    }
    ctx->pc = 0x2BF954u;
    // 0x2bf954: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2bf954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2bf958: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2BF958u;
    {
        const bool branch_taken_0x2bf958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf958) {
            ctx->pc = 0x2BF9E8u;
            goto label_2bf9e8;
        }
    }
    ctx->pc = 0x2BF960u;
    // 0x2bf960: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2bf960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2bf964: 0xc05f1b8  jal         func_17C6E0
    ctx->pc = 0x2BF964u;
    SET_GPR_U32(ctx, 31, 0x2BF96Cu);
    ctx->pc = 0x17C6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6E0u, 0x2BF964u, 0x2BF96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF96Cu;
label_2bf96c:
    // 0x2bf96c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bf96cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf970: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x2bf970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2bf974: 0xc042290  jal         func_108A40
    ctx->pc = 0x2BF974u;
    SET_GPR_U32(ctx, 31, 0x2BF97Cu);
    ctx->pc = 0x108A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A40u, 0x2BF974u, 0x2BF97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF97Cu;
label_2bf97c:
    // 0x2bf97c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2bf97cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf980: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2bf980u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf984: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF984u;
    {
        const bool branch_taken_0x2bf984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf984) {
            ctx->pc = 0x2BF998u;
            goto label_2bf998;
        }
    }
    ctx->pc = 0x2BF98Cu;
label_2bf98c:
    // 0x2bf98c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2bf98cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2bf990: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2bf990u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2bf994: 0x260b82d  daddu       $s7, $s3, $zero
    ctx->pc = 0x2bf994u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2bf998:
    // 0x2bf998: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2bf998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2bf99c: 0xc05f314  jal         func_17CC50
    ctx->pc = 0x2BF99Cu;
    SET_GPR_U32(ctx, 31, 0x2BF9A4u);
    ctx->pc = 0x17CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CC50u, 0x2BF99Cu, 0x2BF9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF9A4u;
label_2bf9a4:
    // 0x2bf9a4: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BF9A4u;
    {
        const bool branch_taken_0x2bf9a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bf9a4) {
            ctx->pc = 0x2BF9C0u;
            goto label_2bf9c0;
        }
    }
    ctx->pc = 0x2BF9ACu;
    // 0x2bf9ac: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x2bf9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf9b0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2bf9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf9b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2bf9b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf9b8: 0x4500fff4  bc1f        . + 4 + (-0xC << 2)
    ctx->pc = 0x2BF9B8u;
    {
        const bool branch_taken_0x2bf9b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bf9b8) {
            ctx->pc = 0x2BF98Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bf98c;
        }
    }
    ctx->pc = 0x2BF9C0u;
label_2bf9c0:
    // 0x2bf9c0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2bf9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2bf9c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bf9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf9c8: 0x27a60114  addiu       $a2, $sp, 0x114
    ctx->pc = 0x2bf9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x2bf9cc: 0xc0aff08  jal         func_2BFC20
    ctx->pc = 0x2BF9CCu;
    SET_GPR_U32(ctx, 31, 0x2BF9D4u);
    ctx->pc = 0x2BFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFC20u, 0x2BF9CCu, 0x2BF9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF9D4u;
label_2bf9d4:
    // 0x2bf9d4: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x2bf9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2bf9d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2bf9d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf9dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bf9dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf9e0: 0xc0afe9c  jal         func_2BFA70
    ctx->pc = 0x2BF9E0u;
    SET_GPR_U32(ctx, 31, 0x2BF9E8u);
    ctx->pc = 0x2BFA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFA70u, 0x2BF9E0u, 0x2BF9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF9E8u;
label_2bf9e8:
    // 0x2bf9e8: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x2bf9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf9ec: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x2bf9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf9f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bf9f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf9f4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF9F4u;
    {
        const bool branch_taken_0x2bf9f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bf9f4) {
            ctx->pc = 0x2BFA08u;
            goto label_2bfa08;
        }
    }
    ctx->pc = 0x2BF9FCu;
    // 0x2bf9fc: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x2bf9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bfa00: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x2bfa00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x2bfa04: 0x8e160000  lw          $s6, 0x0($s0)
    ctx->pc = 0x2bfa04u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2bfa08:
    // 0x2bfa08: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2bfa08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2bfa0c:
    // 0x2bfa0c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2bfa0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfa10: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x2BFA10u;
    SET_GPR_U32(ctx, 31, 0x2BFA18u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x2BFA10u, 0x2BFA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFA18u;
label_2bfa18:
    // 0x2bfa18: 0x1602ff82  bne         $s0, $v0, . + 4 + (-0x7E << 2)
    ctx->pc = 0x2BFA18u;
    {
        const bool branch_taken_0x2bfa18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bfa18) {
            ctx->pc = 0x2BF824u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bf824;
        }
    }
    ctx->pc = 0x2BFA20u;
    // 0x2bfa20: 0xafb6010c  sw          $s6, 0x10C($sp)
    ctx->pc = 0x2bfa20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 22));
    // 0x2bfa24: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2bfa24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2bfa28: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2bfa28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bfa2c: 0xc05ee30  jal         func_17B8C0
    ctx->pc = 0x2BFA2Cu;
    SET_GPR_U32(ctx, 31, 0x2BFA34u);
    ctx->pc = 0x17B8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B8C0u, 0x2BFA2Cu, 0x2BFA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFA34u;
label_2bfa34:
    // 0x2bfa34: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x2bfa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x2bfa38: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2bfa38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bfa3c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2bfa3cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bfa40: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2bfa40u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bfa44: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2bfa44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bfa48: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2bfa48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bfa4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2bfa4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bfa50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bfa50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bfa54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bfa54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bfa58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bfa58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bfa5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bfa5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bfa60: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x2bfa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2bfa64: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFA64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFA6Cu;
    // 0x2bfa6c: 0x0  nop
    ctx->pc = 0x2bfa6cu;
    // NOP
    ctx->pc = 0x2bfa70u;
}
