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

// Function: sub_002836E0
// Address: 0x2836e0 - 0x2838f0
void sub_002836E0_0x2836e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002836E0_0x2836e0");
#endif

    switch (ctx->pc) {
        case 0x283750u: goto label_283750;
        case 0x283760u: goto label_283760;
        case 0x283778u: goto label_283778;
        case 0x283790u: goto label_283790;
        case 0x2837a0u: goto label_2837a0;
        case 0x2837c0u: goto label_2837c0;
        case 0x2837d0u: goto label_2837d0;
        case 0x2837e8u: goto label_2837e8;
        case 0x283800u: goto label_283800;
        case 0x28381cu: goto label_28381c;
        case 0x28382cu: goto label_28382c;
        case 0x28383cu: goto label_28383c;
        case 0x283854u: goto label_283854;
        case 0x283864u: goto label_283864;
        case 0x283874u: goto label_283874;
        case 0x283884u: goto label_283884;
        case 0x2838a0u: goto label_2838a0;
        case 0x2838c0u: goto label_2838c0;
        default: break;
    }

    ctx->pc = 0x2836e0u;

    // 0x2836e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2836e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2836e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2836e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2836e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2836e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2836ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2836ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2836f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2836f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2836f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2836f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2836f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2836f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2836fc: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x2836fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x283700: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x283700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x283704: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x283704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x283708: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x283708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x28370c: 0xafa800b0  sw          $t0, 0xB0($sp)
    ctx->pc = 0x28370cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 8));
    // 0x283710: 0xafa900c0  sw          $t1, 0xC0($sp)
    ctx->pc = 0x283710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 9));
    // 0x283714: 0x8fb300c0  lw          $s3, 0xC0($sp)
    ctx->pc = 0x283714u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x283718: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x283718u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28371c: 0x8fb100a0  lw          $s1, 0xA0($sp)
    ctx->pc = 0x28371cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x283720: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x283720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283724: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x283724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283728: 0x12220015  beq         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x283728u;
    {
        const bool branch_taken_0x283728 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x283728) {
            ctx->pc = 0x283780u;
            goto label_283780;
        }
    }
    ctx->pc = 0x283730u;
    // 0x283730: 0x16600036  bnez        $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x283730u;
    {
        const bool branch_taken_0x283730 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x283730) {
            ctx->pc = 0x28380Cu;
            goto label_28380c;
        }
    }
    ctx->pc = 0x283738u;
    // 0x283738: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x283738u;
    {
        const bool branch_taken_0x283738 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x283738) {
            ctx->pc = 0x283780u;
            goto label_283780;
        }
    }
    ctx->pc = 0x283740u;
    // 0x283740: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x283740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x283744: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x283744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x283748: 0xc0a0b24  jal         func_282C90
    ctx->pc = 0x283748u;
    SET_GPR_U32(ctx, 31, 0x283750u);
    ctx->pc = 0x282C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282C90u, 0x283748u, 0x283750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283750u;
label_283750:
    // 0x283750: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x283750u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x283754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283758: 0xc0a0b14  jal         func_282C50
    ctx->pc = 0x283758u;
    SET_GPR_U32(ctx, 31, 0x283760u);
    ctx->pc = 0x282C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282C50u, 0x283758u, 0x283760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283760u;
label_283760:
    // 0x283760: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x283760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283764: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x283764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x283768: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x283768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28376c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28376cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283770: 0xc0a0b08  jal         func_282C20
    ctx->pc = 0x283770u;
    SET_GPR_U32(ctx, 31, 0x283778u);
    ctx->pc = 0x282C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282C20u, 0x283770u, 0x283778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283778u;
label_283778:
    // 0x283778: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x283778u;
    {
        const bool branch_taken_0x283778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283778) {
            ctx->pc = 0x28380Cu;
            goto label_28380c;
        }
    }
    ctx->pc = 0x283780u;
label_283780:
    // 0x283780: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x283780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283784: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x283784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x283788: 0xc0a0e44  jal         func_283910
    ctx->pc = 0x283788u;
    SET_GPR_U32(ctx, 31, 0x283790u);
    ctx->pc = 0x283910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283910u, 0x283788u, 0x283790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283790u;
label_283790:
    // 0x283790: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x283790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283794: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x283794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283798: 0xc0a0b00  jal         func_282C00
    ctx->pc = 0x283798u;
    SET_GPR_U32(ctx, 31, 0x2837A0u);
    ctx->pc = 0x282C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282C00u, 0x283798u, 0x2837A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2837A0u;
label_2837a0:
    // 0x2837a0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2837a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2837a4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2837a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2837a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2837a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2837ac: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2837ACu;
    {
        const bool branch_taken_0x2837ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2837ac) {
            ctx->pc = 0x2837DCu;
            goto label_2837dc;
        }
    }
    ctx->pc = 0x2837B4u;
    // 0x2837b4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2837b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2837b8: 0xc09e5b0  jal         func_2796C0
    ctx->pc = 0x2837B8u;
    SET_GPR_U32(ctx, 31, 0x2837C0u);
    ctx->pc = 0x2796C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2796C0u, 0x2837B8u, 0x2837C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2837C0u;
label_2837c0:
    // 0x2837c0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2837c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2837c4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2837c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2837c8: 0xc09e5a0  jal         func_279680
    ctx->pc = 0x2837C8u;
    SET_GPR_U32(ctx, 31, 0x2837D0u);
    ctx->pc = 0x279680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279680u, 0x2837C8u, 0x2837D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2837D0u;
label_2837d0:
    // 0x2837d0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2837d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2837d4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2837D4u;
    {
        const bool branch_taken_0x2837d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2837d4) {
            ctx->pc = 0x283858u;
            goto label_283858;
        }
    }
    ctx->pc = 0x2837DCu;
label_2837dc:
    // 0x2837dc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2837dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2837e0: 0xc09e5a8  jal         func_2796A0
    ctx->pc = 0x2837E0u;
    SET_GPR_U32(ctx, 31, 0x2837E8u);
    ctx->pc = 0x2796A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2796A0u, 0x2837E0u, 0x2837E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2837E8u;
label_2837e8:
    // 0x2837e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2837e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2837ec: 0x1622001a  bne         $s1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2837ECu;
    {
        const bool branch_taken_0x2837ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2837ec) {
            ctx->pc = 0x283858u;
            goto label_283858;
        }
    }
    ctx->pc = 0x2837F4u;
    // 0x2837f4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2837f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2837f8: 0xc09e5a8  jal         func_2796A0
    ctx->pc = 0x2837F8u;
    SET_GPR_U32(ctx, 31, 0x283800u);
    ctx->pc = 0x2796A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2796A0u, 0x2837F8u, 0x283800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283800u;
label_283800:
    // 0x283800: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x283800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x283804: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x283804u;
    {
        const bool branch_taken_0x283804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283804) {
            ctx->pc = 0x283858u;
            goto label_283858;
        }
    }
    ctx->pc = 0x28380Cu;
label_28380c:
    // 0x28380c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x28380cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283810: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x283810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x283814: 0xc0a0e44  jal         func_283910
    ctx->pc = 0x283814u;
    SET_GPR_U32(ctx, 31, 0x28381Cu);
    ctx->pc = 0x283910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283910u, 0x283814u, 0x28381Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28381Cu;
label_28381c:
    // 0x28381c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28381cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283820: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x283820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283824: 0xc0a0af8  jal         func_282BE0
    ctx->pc = 0x283824u;
    SET_GPR_U32(ctx, 31, 0x28382Cu);
    ctx->pc = 0x282BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282BE0u, 0x283824u, 0x28382Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28382Cu;
label_28382c:
    // 0x28382c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x28382cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x283830: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x283830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283834: 0xc09e5a0  jal         func_279680
    ctx->pc = 0x283834u;
    SET_GPR_U32(ctx, 31, 0x28383Cu);
    ctx->pc = 0x279680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279680u, 0x283834u, 0x28383Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28383Cu;
label_28383c:
    // 0x28383c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28383cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283840: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x283840u;
    {
        const bool branch_taken_0x283840 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x283840) {
            ctx->pc = 0x283858u;
            goto label_283858;
        }
    }
    ctx->pc = 0x283848u;
    // 0x283848: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x283848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28384c: 0xc09e5a0  jal         func_279680
    ctx->pc = 0x28384Cu;
    SET_GPR_U32(ctx, 31, 0x283854u);
    ctx->pc = 0x279680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279680u, 0x28384Cu, 0x283854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283854u;
label_283854:
    // 0x283854: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x283854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_283858:
    // 0x283858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x283858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28385c: 0xc0a0e3c  jal         func_2838F0
    ctx->pc = 0x28385Cu;
    SET_GPR_U32(ctx, 31, 0x283864u);
    ctx->pc = 0x2838F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2838F0u, 0x28385Cu, 0x283864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283864u;
label_283864:
    // 0x283864: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x283864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x283868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x283868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28386c: 0xc0a0b00  jal         func_282C00
    ctx->pc = 0x28386Cu;
    SET_GPR_U32(ctx, 31, 0x283874u);
    ctx->pc = 0x282C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282C00u, 0x28386Cu, 0x283874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283874u;
label_283874:
    // 0x283874: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x283874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x283878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x283878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28387c: 0xc0a0af8  jal         func_282BE0
    ctx->pc = 0x28387Cu;
    SET_GPR_U32(ctx, 31, 0x283884u);
    ctx->pc = 0x282BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282BE0u, 0x28387Cu, 0x283884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283884u;
label_283884:
    // 0x283884: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x283884u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x283888: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x283888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28388c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28388cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x283890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283894: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x283894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x283898: 0xc042858  jal         func_10A160
    ctx->pc = 0x283898u;
    SET_GPR_U32(ctx, 31, 0x2838A0u);
    ctx->pc = 0x10A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A160u, 0x283898u, 0x2838A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2838A0u;
label_2838a0:
    // 0x2838a0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2838a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2838a4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2838a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2838a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2838a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2838ac: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2838acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2838b0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2838b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2838b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2838b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2838b8: 0xc0a0aec  jal         func_282BB0
    ctx->pc = 0x2838B8u;
    SET_GPR_U32(ctx, 31, 0x2838C0u);
    ctx->pc = 0x282BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282BB0u, 0x2838B8u, 0x2838C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2838C0u;
label_2838c0:
    // 0x2838c0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2838c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2838c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2838c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2838c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2838c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2838cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2838ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2838d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2838d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2838d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2838d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2838d8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x2838d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2838dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2838DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2838DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2838E4u;
    // 0x2838e4: 0x0  nop
    ctx->pc = 0x2838e4u;
    // NOP
    // 0x2838e8: 0x0  nop
    ctx->pc = 0x2838e8u;
    // NOP
    // 0x2838ec: 0x0  nop
    ctx->pc = 0x2838ecu;
    // NOP
    ctx->pc = 0x2838f0u;
}
