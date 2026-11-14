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

// Function: sub_002666F0
// Address: 0x2666f0 - 0x266860
void sub_002666F0_0x2666f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002666F0_0x2666f0");
#endif

    switch (ctx->pc) {
        case 0x266720u: goto label_266720;
        case 0x266730u: goto label_266730;
        case 0x266740u: goto label_266740;
        case 0x266750u: goto label_266750;
        case 0x26675cu: goto label_26675c;
        case 0x266778u: goto label_266778;
        case 0x266790u: goto label_266790;
        case 0x2667b4u: goto label_2667b4;
        case 0x2667c4u: goto label_2667c4;
        case 0x2667d4u: goto label_2667d4;
        case 0x2667e4u: goto label_2667e4;
        case 0x2667f0u: goto label_2667f0;
        case 0x26680cu: goto label_26680c;
        case 0x266824u: goto label_266824;
        default: break;
    }

    ctx->pc = 0x2666f0u;

    // 0x2666f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2666f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2666f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2666f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2666f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2666f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2666fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2666fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x266700: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x266700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x266704: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x266704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x266708: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x266708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x26670c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26670cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266710: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x266710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266714: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x266714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x266718: 0xc041a70  jal         func_1069C0
    ctx->pc = 0x266718u;
    SET_GPR_U32(ctx, 31, 0x266720u);
    ctx->pc = 0x1069C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069C0u, 0x266718u, 0x266720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266720u;
label_266720:
    // 0x266720: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x266720u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266724: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x266724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266728: 0xc048bb4  jal         func_122ED0
    ctx->pc = 0x266728u;
    SET_GPR_U32(ctx, 31, 0x266730u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x266728u, 0x266730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266730u;
label_266730:
    // 0x266730: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x266730u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266734: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x266734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266738: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x266738u;
    {
        const bool branch_taken_0x266738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266738) {
            ctx->pc = 0x26679Cu;
            goto label_26679c;
        }
    }
    ctx->pc = 0x266740u;
label_266740:
    // 0x266740: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x266740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266744: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x266744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266748: 0xc0999a4  jal         func_266690
    ctx->pc = 0x266748u;
    SET_GPR_U32(ctx, 31, 0x266750u);
    ctx->pc = 0x266690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266690u, 0x266748u, 0x266750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266750u;
label_266750:
    // 0x266750: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x266750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266754: 0xc09d0b8  jal         func_2742E0
    ctx->pc = 0x266754u;
    SET_GPR_U32(ctx, 31, 0x26675Cu);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x266754u, 0x26675Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26675Cu;
label_26675c:
    // 0x26675c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26675cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266760: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x266760u;
    {
        const bool branch_taken_0x266760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x266760) {
            ctx->pc = 0x266798u;
            goto label_266798;
        }
    }
    ctx->pc = 0x266768u;
    // 0x266768: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x266768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26676c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26676cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266770: 0xc0999a4  jal         func_266690
    ctx->pc = 0x266770u;
    SET_GPR_U32(ctx, 31, 0x266778u);
    ctx->pc = 0x266690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266690u, 0x266770u, 0x266778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266778u;
label_266778:
    // 0x266778: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x266778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26677c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26677cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x266780: 0x24a5cd60  addiu       $a1, $a1, -0x32A0
    ctx->pc = 0x266780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954336));
    // 0x266784: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x266784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266788: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x266788u;
    SET_GPR_U32(ctx, 31, 0x266790u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x266788u, 0x266790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266790u;
label_266790:
    // 0x266790: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x266790u;
    {
        const bool branch_taken_0x266790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266790) {
            ctx->pc = 0x266840u;
            goto label_266840;
        }
    }
    ctx->pc = 0x266798u;
label_266798:
    // 0x266798: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x266798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_26679c:
    // 0x26679c: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x26679cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2667a0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2667A0u;
    {
        const bool branch_taken_0x2667a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2667a0) {
            ctx->pc = 0x266740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266740;
        }
    }
    ctx->pc = 0x2667A8u;
    // 0x2667a8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2667a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2667ac: 0xc041a68  jal         func_1069A0
    ctx->pc = 0x2667ACu;
    SET_GPR_U32(ctx, 31, 0x2667B4u);
    ctx->pc = 0x1069A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069A0u, 0x2667ACu, 0x2667B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2667B4u;
label_2667b4:
    // 0x2667b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2667b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2667b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2667b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2667bc: 0xc048bb4  jal         func_122ED0
    ctx->pc = 0x2667BCu;
    SET_GPR_U32(ctx, 31, 0x2667C4u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x2667BCu, 0x2667C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2667C4u;
label_2667c4:
    // 0x2667c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2667c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2667c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2667c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2667cc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2667CCu;
    {
        const bool branch_taken_0x2667cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2667cc) {
            ctx->pc = 0x266830u;
            goto label_266830;
        }
    }
    ctx->pc = 0x2667D4u;
label_2667d4:
    // 0x2667d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2667d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2667d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2667d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2667dc: 0xc0999a4  jal         func_266690
    ctx->pc = 0x2667DCu;
    SET_GPR_U32(ctx, 31, 0x2667E4u);
    ctx->pc = 0x266690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266690u, 0x2667DCu, 0x2667E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2667E4u;
label_2667e4:
    // 0x2667e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2667e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2667e8: 0xc09d0b8  jal         func_2742E0
    ctx->pc = 0x2667E8u;
    SET_GPR_U32(ctx, 31, 0x2667F0u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2667E8u, 0x2667F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2667F0u;
label_2667f0:
    // 0x2667f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2667f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2667f4: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2667F4u;
    {
        const bool branch_taken_0x2667f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2667f4) {
            ctx->pc = 0x26682Cu;
            goto label_26682c;
        }
    }
    ctx->pc = 0x2667FCu;
    // 0x2667fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2667fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266800: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x266800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266804: 0xc0999a4  jal         func_266690
    ctx->pc = 0x266804u;
    SET_GPR_U32(ctx, 31, 0x26680Cu);
    ctx->pc = 0x266690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266690u, 0x266804u, 0x26680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26680Cu;
label_26680c:
    // 0x26680c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26680cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266810: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x266810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x266814: 0x24a5cd60  addiu       $a1, $a1, -0x32A0
    ctx->pc = 0x266814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954336));
    // 0x266818: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x266818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26681c: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x26681Cu;
    SET_GPR_U32(ctx, 31, 0x266824u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x26681Cu, 0x266824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266824u;
label_266824:
    // 0x266824: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x266824u;
    {
        const bool branch_taken_0x266824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266824) {
            ctx->pc = 0x266840u;
            goto label_266840;
        }
    }
    ctx->pc = 0x26682Cu;
label_26682c:
    // 0x26682c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26682cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_266830:
    // 0x266830: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x266830u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x266834: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x266834u;
    {
        const bool branch_taken_0x266834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266834) {
            ctx->pc = 0x2667D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2667d4;
        }
    }
    ctx->pc = 0x26683Cu;
    // 0x26683c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26683cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_266840:
    // 0x266840: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x266840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x266844: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x266844u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266848: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x266848u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26684c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26684cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266850: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x266850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266854: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x266854u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x266858: 0x3e00008  jr          $ra
    ctx->pc = 0x266858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266860u;
}
