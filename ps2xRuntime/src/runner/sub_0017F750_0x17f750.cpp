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

// Function: sub_0017F750
// Address: 0x17f750 - 0x17fb40
void sub_0017F750_0x17f750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F750_0x17f750");
#endif

    switch (ctx->pc) {
        case 0x17f7d8u: goto label_17f7d8;
        case 0x17f7f0u: goto label_17f7f0;
        case 0x17f808u: goto label_17f808;
        case 0x17f81cu: goto label_17f81c;
        case 0x17f834u: goto label_17f834;
        case 0x17f850u: goto label_17f850;
        case 0x17f87cu: goto label_17f87c;
        case 0x17f8a0u: goto label_17f8a0;
        case 0x17f8ccu: goto label_17f8cc;
        case 0x17f8ecu: goto label_17f8ec;
        case 0x17f918u: goto label_17f918;
        case 0x17f940u: goto label_17f940;
        case 0x17f954u: goto label_17f954;
        case 0x17f96cu: goto label_17f96c;
        case 0x17f9a0u: goto label_17f9a0;
        case 0x17f9ccu: goto label_17f9cc;
        case 0x17f9e0u: goto label_17f9e0;
        case 0x17fa24u: goto label_17fa24;
        case 0x17fa50u: goto label_17fa50;
        case 0x17fa6cu: goto label_17fa6c;
        case 0x17fa98u: goto label_17fa98;
        case 0x17fab0u: goto label_17fab0;
        case 0x17fae4u: goto label_17fae4;
        default: break;
    }

    ctx->pc = 0x17f750u;

    // 0x17f750: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x17f750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x17f754: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17f754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17f758: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17f758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17f75c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17f75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17f760: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17f760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17f764: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17f764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17f768: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x17f768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x17f76c: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x17f76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x17f770: 0xa3a0008f  sb          $zero, 0x8F($sp)
    ctx->pc = 0x17f770u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 143), (uint8_t)GPR_U32(ctx, 0));
    // 0x17f774: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17f774u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f778: 0x0  nop
    ctx->pc = 0x17f778u;
    // NOP
    // 0x17f77c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x17f77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x17f780: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17f780u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f784: 0x0  nop
    ctx->pc = 0x17f784u;
    // NOP
    // 0x17f788: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x17f788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x17f78c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x17f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17f790: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17F790u;
    {
        const bool branch_taken_0x17f790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f790) {
            ctx->pc = 0x17F7B0u;
            goto label_17f7b0;
        }
    }
    ctx->pc = 0x17F798u;
    // 0x17f798: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x17f798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17f79c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17f7a0: 0x8c420098  lw          $v0, 0x98($v0)
    ctx->pc = 0x17f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x17f7a4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x17f7a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x17f7a8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F7A8u;
    {
        const bool branch_taken_0x17f7a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f7a8) {
            ctx->pc = 0x17F7BCu;
            goto label_17f7bc;
        }
    }
    ctx->pc = 0x17F7B0u;
label_17f7b0:
    // 0x17f7b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17f7b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7b4: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x17F7B4u;
    {
        const bool branch_taken_0x17f7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f7b4) {
            ctx->pc = 0x17FB20u;
            goto label_17fb20;
        }
    }
    ctx->pc = 0x17F7BCu;
label_17f7bc:
    // 0x17f7bc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17f7c0: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x17f7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x17f7c4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x17f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17f7c8: 0x629823  subu        $s3, $v1, $v0
    ctx->pc = 0x17f7c8u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17f7cc: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x17f7ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7d0: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x17F7D0u;
    {
        const bool branch_taken_0x17f7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f7d0) {
            ctx->pc = 0x17FB08u;
            goto label_17fb08;
        }
    }
    ctx->pc = 0x17F7D8u;
label_17f7d8:
    // 0x17f7d8: 0x26510009  addiu       $s1, $s2, 0x9
    ctx->pc = 0x17f7d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 9));
    // 0x17f7dc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17f7e0: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17f7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17f7e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17f7e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7e8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17F7E8u;
    SET_GPR_U32(ctx, 31, 0x17F7F0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17F7E8u, 0x17F7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F7F0u;
label_17f7f0:
    // 0x17f7f0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17f7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f7f4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17f7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17f7f8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17f7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17f7fc: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x17f7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17f800: 0xc08c744  jal         func_231D10
    ctx->pc = 0x17F800u;
    SET_GPR_U32(ctx, 31, 0x17F808u);
    ctx->pc = 0x231D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D10u, 0x17F800u, 0x17F808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F808u;
label_17f808:
    // 0x17f808: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17f808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17f80c: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17f80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17f810: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17f810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f814: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17F814u;
    SET_GPR_U32(ctx, 31, 0x17F81Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17F814u, 0x17F81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F81Cu;
label_17f81c:
    // 0x17f81c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17f81cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f820: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17f820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17f824: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17f824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17f828: 0x27a60068  addiu       $a2, $sp, 0x68
    ctx->pc = 0x17f828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x17f82c: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x17F82Cu;
    SET_GPR_U32(ctx, 31, 0x17F834u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x17F82Cu, 0x17F834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F834u;
label_17f834:
    // 0x17f834: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17f834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f838: 0xa3a2008f  sb          $v0, 0x8F($sp)
    ctx->pc = 0x17f838u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 143), (uint8_t)GPR_U32(ctx, 2));
    // 0x17f83c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17f83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17f840: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17f840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17f844: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17f844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f848: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17F848u;
    SET_GPR_U32(ctx, 31, 0x17F850u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17F848u, 0x17F850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F850u;
label_17f850:
    // 0x17f850: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17f850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f854: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17f854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17f858: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17f858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17f85c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17f85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17f860: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17f860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17f864: 0x27a7008f  addiu       $a3, $sp, 0x8F
    ctx->pc = 0x17f864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 143));
    // 0x17f868: 0xc7ac0084  lwc1        $f12, 0x84($sp)
    ctx->pc = 0x17f868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17f86c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17f86cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f870: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17f870u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f874: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17F874u;
    SET_GPR_U32(ctx, 31, 0x17F87Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17F874u, 0x17F87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F87Cu;
label_17f87c:
    // 0x17f87c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17f880: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17f880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f884: 0x0  nop
    ctx->pc = 0x17f884u;
    // NOP
    // 0x17f888: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x17f888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x17f88c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17f88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17f890: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17f890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17f894: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17f894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f898: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17F898u;
    SET_GPR_U32(ctx, 31, 0x17F8A0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17F898u, 0x17F8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F8A0u;
label_17f8a0:
    // 0x17f8a0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17f8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f8a4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17f8a8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17f8a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17f8ac: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17f8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17f8b0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17f8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17f8b4: 0x27a70088  addiu       $a3, $sp, 0x88
    ctx->pc = 0x17f8b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x17f8b8: 0xc7ac0084  lwc1        $f12, 0x84($sp)
    ctx->pc = 0x17f8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17f8bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17f8bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f8c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17f8c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f8c4: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17F8C4u;
    SET_GPR_U32(ctx, 31, 0x17F8CCu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17F8C4u, 0x17F8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F8CCu;
label_17f8cc:
    // 0x17f8cc: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x17f8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17f8d0: 0xdf8290f8  ld          $v0, -0x6F08($gp)
    ctx->pc = 0x17f8d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294938872)));
    // 0x17f8d4: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x17f8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x17f8d8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17f8dc: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17f8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17f8e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17f8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f8e4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17F8E4u;
    SET_GPR_U32(ctx, 31, 0x17F8ECu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17F8E4u, 0x17F8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F8ECu;
label_17f8ec:
    // 0x17f8ec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17f8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f8f0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17f8f4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17f8f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17f8f8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17f8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17f8fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17f8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f900: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x17f900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17f904: 0xc7ac0084  lwc1        $f12, 0x84($sp)
    ctx->pc = 0x17f904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17f908: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17f908u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f90c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17f90cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f910: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17F910u;
    SET_GPR_U32(ctx, 31, 0x17F918u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17F910u, 0x17F918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F918u;
label_17f918:
    // 0x17f918: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x17f918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f91c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x17f91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x17f920: 0x3c024198  lui         $v0, 0x4198
    ctx->pc = 0x17f920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16792 << 16));
    // 0x17f924: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17f924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17f928: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x17f928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f92c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17f92cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17f930: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x17f930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x17f934: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17f934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f938: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x17F938u;
    {
        const bool branch_taken_0x17f938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f938) {
            ctx->pc = 0x17FAF8u;
            goto label_17faf8;
        }
    }
    ctx->pc = 0x17F940u;
label_17f940:
    // 0x17f940: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17f940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17f944: 0x26050017  addiu       $a1, $s0, 0x17
    ctx->pc = 0x17f944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 23));
    // 0x17f948: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17f948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17f94c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17F94Cu;
    SET_GPR_U32(ctx, 31, 0x17F954u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17F94Cu, 0x17F954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F954u;
label_17f954:
    // 0x17f954: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17f954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f958: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17f958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17f95c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17f95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17f960: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x17f960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x17f964: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x17F964u;
    SET_GPR_U32(ctx, 31, 0x17F96Cu);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x17F964u, 0x17F96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F96Cu;
label_17f96c:
    // 0x17f96c: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x17f96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17f970: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x17f970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f974: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x17f974u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17f978: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x17f978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x17f97c: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x17f97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17f980: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x17f980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f984: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x17f984u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17f988: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x17f988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x17f98c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17f990: 0x26050017  addiu       $a1, $s0, 0x17
    ctx->pc = 0x17f990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 23));
    // 0x17f994: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17f994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17f998: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17F998u;
    SET_GPR_U32(ctx, 31, 0x17F9A0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17F998u, 0x17F9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F9A0u;
label_17f9a0:
    // 0x17f9a0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17f9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f9a4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17f9a8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17f9a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17f9ac: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17f9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17f9b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17f9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f9b4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x17f9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x17f9b8: 0xc7ac0084  lwc1        $f12, 0x84($sp)
    ctx->pc = 0x17f9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17f9bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17f9bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f9c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17f9c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f9c4: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17F9C4u;
    SET_GPR_U32(ctx, 31, 0x17F9CCu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17F9C4u, 0x17F9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F9CCu;
label_17f9cc:
    // 0x17f9cc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17f9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17f9d0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x17f9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17f9d4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17F9D4u;
    {
        const bool branch_taken_0x17f9d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f9d4) {
            ctx->pc = 0x17F9FCu;
            goto label_17f9fc;
        }
    }
    ctx->pc = 0x17F9DCu;
    // 0x17f9dc: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x17f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_17f9e0:
    // 0x17f9e0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x17f9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x17f9e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17f9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17f9e8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17f9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17f9ec: 0x0  nop
    ctx->pc = 0x17f9ecu;
    // NOP
    // 0x17f9f0: 0x0  nop
    ctx->pc = 0x17f9f0u;
    // NOP
    // 0x17f9f4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17F9F4u;
    {
        const bool branch_taken_0x17f9f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f9f4) {
            ctx->pc = 0x17F9E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f9e0;
        }
    }
    ctx->pc = 0x17F9FCu;
label_17f9fc:
    // 0x17f9fc: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x17f9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fa00: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x17fa00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x17fa04: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x17fa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fa08: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x17fa08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x17fa0c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x17fa0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x17fa10: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17fa14: 0x26050017  addiu       $a1, $s0, 0x17
    ctx->pc = 0x17fa14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 23));
    // 0x17fa18: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17fa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17fa1c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17FA1Cu;
    SET_GPR_U32(ctx, 31, 0x17FA24u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17FA1Cu, 0x17FA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FA24u;
label_17fa24:
    // 0x17fa24: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17fa24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17fa28: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17fa2c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17fa2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17fa30: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17fa30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17fa34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17fa34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa38: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x17fa38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17fa3c: 0xc7ac0084  lwc1        $f12, 0x84($sp)
    ctx->pc = 0x17fa3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17fa40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17fa40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa44: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17fa44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa48: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17FA48u;
    SET_GPR_U32(ctx, 31, 0x17FA50u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17FA48u, 0x17FA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FA50u;
label_17fa50:
    // 0x17fa50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17fa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17fa54: 0xa3a2008f  sb          $v0, 0x8F($sp)
    ctx->pc = 0x17fa54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 143), (uint8_t)GPR_U32(ctx, 2));
    // 0x17fa58: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17fa5c: 0x26050017  addiu       $a1, $s0, 0x17
    ctx->pc = 0x17fa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 23));
    // 0x17fa60: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17fa60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17fa64: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17FA64u;
    SET_GPR_U32(ctx, 31, 0x17FA6Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17FA64u, 0x17FA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FA6Cu;
label_17fa6c:
    // 0x17fa6c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17fa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17fa70: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17fa74: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17fa74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17fa78: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17fa78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17fa7c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17fa7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17fa80: 0x27a7008f  addiu       $a3, $sp, 0x8F
    ctx->pc = 0x17fa80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 143));
    // 0x17fa84: 0xc7ac0084  lwc1        $f12, 0x84($sp)
    ctx->pc = 0x17fa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17fa88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17fa88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa8c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17fa8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa90: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17FA90u;
    SET_GPR_U32(ctx, 31, 0x17FA98u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17FA90u, 0x17FA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FA98u;
label_17fa98:
    // 0x17fa98: 0xa3a0008f  sb          $zero, 0x8F($sp)
    ctx->pc = 0x17fa98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 143), (uint8_t)GPR_U32(ctx, 0));
    // 0x17fa9c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17fa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17faa0: 0x26050017  addiu       $a1, $s0, 0x17
    ctx->pc = 0x17faa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 23));
    // 0x17faa4: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17faa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17faa8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17FAA8u;
    SET_GPR_U32(ctx, 31, 0x17FAB0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17FAA8u, 0x17FAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FAB0u;
label_17fab0:
    // 0x17fab0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17fab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17fab4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17fab8: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x17fab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17fabc: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x17fabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fac0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x17fac0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17fac4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17fac4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17fac8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17fac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17facc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17faccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17fad0: 0x27a7008f  addiu       $a3, $sp, 0x8F
    ctx->pc = 0x17fad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 143));
    // 0x17fad4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17fad4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fad8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17fad8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fadc: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17FADCu;
    SET_GPR_U32(ctx, 31, 0x17FAE4u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17FADCu, 0x17FAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FAE4u;
label_17fae4:
    // 0x17fae4: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x17fae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17fae8: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x17fae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17faec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17faecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17faf0: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x17faf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x17faf4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17faf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_17faf8:
    // 0x17faf8: 0x2e020013  sltiu       $v0, $s0, 0x13
    ctx->pc = 0x17faf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x17fafc: 0x1440ff90  bnez        $v0, . + 4 + (-0x70 << 2)
    ctx->pc = 0x17FAFCu;
    {
        const bool branch_taken_0x17fafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fafc) {
            ctx->pc = 0x17F940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f940;
        }
    }
    ctx->pc = 0x17FB04u;
    // 0x17fb04: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17fb04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_17fb08:
    // 0x17fb08: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x17fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17fb0c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x17fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x17fb10: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x17fb10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17fb14: 0x1440ff30  bnez        $v0, . + 4 + (-0xD0 << 2)
    ctx->pc = 0x17FB14u;
    {
        const bool branch_taken_0x17fb14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fb14) {
            ctx->pc = 0x17F7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f7d8;
        }
    }
    ctx->pc = 0x17FB1Cu;
    // 0x17fb1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17fb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17fb20:
    // 0x17fb20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17fb20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17fb24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17fb24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17fb28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17fb28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fb2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17fb2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fb30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17fb30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fb34: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x17fb34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x17fb38: 0x3e00008  jr          $ra
    ctx->pc = 0x17FB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FB38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FB40u;
}
