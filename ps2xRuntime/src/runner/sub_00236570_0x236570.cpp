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

// Function: sub_00236570
// Address: 0x236570 - 0x2369f0
void sub_00236570_0x236570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236570_0x236570");
#endif

    switch (ctx->pc) {
        case 0x2365b0u: goto label_2365b0;
        case 0x2365d8u: goto label_2365d8;
        case 0x2365ecu: goto label_2365ec;
        case 0x2365fcu: goto label_2365fc;
        case 0x23660cu: goto label_23660c;
        case 0x236618u: goto label_236618;
        case 0x236644u: goto label_236644;
        case 0x236658u: goto label_236658;
        case 0x236674u: goto label_236674;
        case 0x236694u: goto label_236694;
        case 0x2366b4u: goto label_2366b4;
        case 0x2366d4u: goto label_2366d4;
        case 0x2366f4u: goto label_2366f4;
        case 0x236714u: goto label_236714;
        case 0x236734u: goto label_236734;
        case 0x236754u: goto label_236754;
        case 0x236774u: goto label_236774;
        case 0x236794u: goto label_236794;
        case 0x2367b4u: goto label_2367b4;
        case 0x2367d4u: goto label_2367d4;
        case 0x2367f0u: goto label_2367f0;
        case 0x236810u: goto label_236810;
        case 0x23682cu: goto label_23682c;
        case 0x23684cu: goto label_23684c;
        case 0x236868u: goto label_236868;
        case 0x236888u: goto label_236888;
        case 0x2368a4u: goto label_2368a4;
        case 0x2368c4u: goto label_2368c4;
        case 0x2368e0u: goto label_2368e0;
        case 0x236900u: goto label_236900;
        case 0x23691cu: goto label_23691c;
        case 0x23693cu: goto label_23693c;
        case 0x236958u: goto label_236958;
        case 0x236978u: goto label_236978;
        case 0x236994u: goto label_236994;
        case 0x2369b4u: goto label_2369b4;
        default: break;
    }

    ctx->pc = 0x236570u;

    // 0x236570: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x236570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x236574: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x236574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x236578: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x236578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x23657c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x23657cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x236580: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x236580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x236584: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x236584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x236588: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x236588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x23658c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23658cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x236590: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x236590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x236594: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x236594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x236598: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x236598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23659c: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x23659cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
    // 0x2365a0: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x2365a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
    // 0x2365a4: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x2365a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2365a8: 0xc041b48  jal         func_106D20
    ctx->pc = 0x2365A8u;
    SET_GPR_U32(ctx, 31, 0x2365B0u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x2365A8u, 0x2365B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2365B0u;
label_2365b0:
    // 0x2365b0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2365b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2365b4: 0x14020019  bne         $zero, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2365B4u;
    {
        const bool branch_taken_0x2365b4 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x2365b4) {
            ctx->pc = 0x23661Cu;
            goto label_23661c;
        }
    }
    ctx->pc = 0x2365BCu;
    // 0x2365bc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2365bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2365c0: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2365c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2365c4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2365c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2365c8: 0x24a5b9d0  addiu       $a1, $a1, -0x4630
    ctx->pc = 0x2365c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949328));
    // 0x2365cc: 0x27869d38  addiu       $a2, $gp, -0x62C8
    ctx->pc = 0x2365ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942008));
    // 0x2365d0: 0xc04206c  jal         func_1081B0
    ctx->pc = 0x2365D0u;
    SET_GPR_U32(ctx, 31, 0x2365D8u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x2365D0u, 0x2365D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2365D8u;
label_2365d8:
    // 0x2365d8: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x2365d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x2365dc: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x2365dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x2365e0: 0x8fa500dc  lw          $a1, 0xDC($sp)
    ctx->pc = 0x2365e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2365e4: 0xc040304  jal         func_100C10
    ctx->pc = 0x2365E4u;
    SET_GPR_U32(ctx, 31, 0x2365ECu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2365E4u, 0x2365ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2365ECu;
label_2365ec:
    // 0x2365ec: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x2365ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2365f0: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x2365f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x2365f4: 0xc1190f4  jal         func_4643D0
    ctx->pc = 0x2365F4u;
    SET_GPR_U32(ctx, 31, 0x2365FCu);
    ctx->pc = 0x4643D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4643D0u, 0x2365F4u, 0x2365FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2365FCu;
label_2365fc:
    // 0x2365fc: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x2365fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x236600: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x236600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x236604: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x236604u;
    SET_GPR_U32(ctx, 31, 0x23660Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x236604u, 0x23660Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23660Cu;
label_23660c:
    // 0x23660c: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x23660cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x236610: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x236610u;
    SET_GPR_U32(ctx, 31, 0x236618u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x236610u, 0x236618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236618u;
label_236618:
    // 0x236618: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x236618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_23661c:
    // 0x23661c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x23661cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x236620: 0x104000df  beqz        $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x236620u;
    {
        const bool branch_taken_0x236620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236620) {
            ctx->pc = 0x2369A0u;
            goto label_2369a0;
        }
    }
    ctx->pc = 0x236628u;
    // 0x236628: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x236628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x23662c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x23662cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236630: 0x104000db  beqz        $v0, . + 4 + (0xDB << 2)
    ctx->pc = 0x236630u;
    {
        const bool branch_taken_0x236630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236630) {
            ctx->pc = 0x2369A0u;
            goto label_2369a0;
        }
    }
    ctx->pc = 0x236638u;
    // 0x236638: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x236638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x23663c: 0xc0bc65a  jal         func_2F1968
    ctx->pc = 0x23663Cu;
    SET_GPR_U32(ctx, 31, 0x236644u);
    ctx->pc = 0x2F1968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1968u, 0x23663Cu, 0x236644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236644u;
label_236644:
    // 0x236644: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x236644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x236648: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x236648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x23664c: 0x24a5b9f0  addiu       $a1, $a1, -0x4610
    ctx->pc = 0x23664cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949360));
    // 0x236650: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x236650u;
    SET_GPR_U32(ctx, 31, 0x236658u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x236650u, 0x236658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236658u;
label_236658:
    // 0x236658: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x236658u;
    {
        const bool branch_taken_0x236658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236658) {
            ctx->pc = 0x236680u;
            goto label_236680;
        }
    }
    ctx->pc = 0x236660u;
    // 0x236660: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x236660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x236664: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x236664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x236668: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x236668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23666c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x23666Cu;
    SET_GPR_U32(ctx, 31, 0x236674u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x23666Cu, 0x236674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236674u;
label_236674:
    // 0x236674: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x236674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x236678: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x236678u;
    {
        const bool branch_taken_0x236678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x236678) {
            ctx->pc = 0x2369B8u;
            goto label_2369b8;
        }
    }
    ctx->pc = 0x236680u;
label_236680:
    // 0x236680: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x236680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x236684: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x236684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x236688: 0x24a5b9c0  addiu       $a1, $a1, -0x4640
    ctx->pc = 0x236688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949312));
    // 0x23668c: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x23668Cu;
    SET_GPR_U32(ctx, 31, 0x236694u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x23668Cu, 0x236694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236694u;
label_236694:
    // 0x236694: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x236694u;
    {
        const bool branch_taken_0x236694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236694) {
            ctx->pc = 0x2366C0u;
            goto label_2366c0;
        }
    }
    ctx->pc = 0x23669Cu;
    // 0x23669c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x23669cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2366a0: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x2366a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x2366a4: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x2366a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2366a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2366a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2366ac: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2366ACu;
    SET_GPR_U32(ctx, 31, 0x2366B4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2366ACu, 0x2366B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2366B4u;
label_2366b4:
    // 0x2366b4: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x2366b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2366b8: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x2366B8u;
    {
        const bool branch_taken_0x2366b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2366b8) {
            ctx->pc = 0x2369B8u;
            goto label_2369b8;
        }
    }
    ctx->pc = 0x2366C0u;
label_2366c0:
    // 0x2366c0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2366c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2366c4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2366c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2366c8: 0x24a5ba00  addiu       $a1, $a1, -0x4600
    ctx->pc = 0x2366c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949376));
    // 0x2366cc: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x2366CCu;
    SET_GPR_U32(ctx, 31, 0x2366D4u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x2366CCu, 0x2366D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2366D4u;
label_2366d4:
    // 0x2366d4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2366D4u;
    {
        const bool branch_taken_0x2366d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2366d4) {
            ctx->pc = 0x236700u;
            goto label_236700;
        }
    }
    ctx->pc = 0x2366DCu;
    // 0x2366dc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2366dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2366e0: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x2366e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x2366e4: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x2366e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2366e8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2366e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2366ec: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2366ECu;
    SET_GPR_U32(ctx, 31, 0x2366F4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2366ECu, 0x2366F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2366F4u;
label_2366f4:
    // 0x2366f4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2366f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2366f8: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x2366F8u;
    {
        const bool branch_taken_0x2366f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2366f8) {
            ctx->pc = 0x2369B8u;
            goto label_2369b8;
        }
    }
    ctx->pc = 0x236700u;
label_236700:
    // 0x236700: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x236700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x236704: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x236704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x236708: 0x24a5ba10  addiu       $a1, $a1, -0x45F0
    ctx->pc = 0x236708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949392));
    // 0x23670c: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x23670Cu;
    SET_GPR_U32(ctx, 31, 0x236714u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x23670Cu, 0x236714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236714u;
label_236714:
    // 0x236714: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x236714u;
    {
        const bool branch_taken_0x236714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236714) {
            ctx->pc = 0x236740u;
            goto label_236740;
        }
    }
    ctx->pc = 0x23671Cu;
    // 0x23671c: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x23671cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x236720: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x236720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x236724: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x236724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x236728: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x236728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23672c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x23672Cu;
    SET_GPR_U32(ctx, 31, 0x236734u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x23672Cu, 0x236734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236734u;
label_236734:
    // 0x236734: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x236734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x236738: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x236738u;
    {
        const bool branch_taken_0x236738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x236738) {
            ctx->pc = 0x2369B8u;
            goto label_2369b8;
        }
    }
    ctx->pc = 0x236740u;
label_236740:
    // 0x236740: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x236740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x236744: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x236744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x236748: 0x24a5ba28  addiu       $a1, $a1, -0x45D8
    ctx->pc = 0x236748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949416));
    // 0x23674c: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x23674Cu;
    SET_GPR_U32(ctx, 31, 0x236754u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x23674Cu, 0x236754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236754u;
label_236754:
    // 0x236754: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x236754u;
    {
        const bool branch_taken_0x236754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236754) {
            ctx->pc = 0x236780u;
            goto label_236780;
        }
    }
    ctx->pc = 0x23675Cu;
    // 0x23675c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x23675cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x236760: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x236760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x236764: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x236764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x236768: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x236768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23676c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x23676Cu;
    SET_GPR_U32(ctx, 31, 0x236774u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x23676Cu, 0x236774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236774u;
label_236774:
    // 0x236774: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x236774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x236778: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x236778u;
    {
        const bool branch_taken_0x236778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x236778) {
            ctx->pc = 0x2369B8u;
            goto label_2369b8;
        }
    }
    ctx->pc = 0x236780u;
label_236780:
    // 0x236780: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x236780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x236784: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x236784u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x236788: 0x24a5ba38  addiu       $a1, $a1, -0x45C8
    ctx->pc = 0x236788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949432));
    // 0x23678c: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x23678Cu;
    SET_GPR_U32(ctx, 31, 0x236794u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x23678Cu, 0x236794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236794u;
label_236794:
    // 0x236794: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x236794u;
    {
        const bool branch_taken_0x236794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236794) {
            ctx->pc = 0x2367C0u;
            goto label_2367c0;
        }
    }
    ctx->pc = 0x23679Cu;
    // 0x23679c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x23679cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2367a0: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x2367a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x2367a4: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x2367a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2367a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2367a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2367ac: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2367ACu;
    SET_GPR_U32(ctx, 31, 0x2367B4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2367ACu, 0x2367B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2367B4u;
label_2367b4:
    // 0x2367b4: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x2367b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2367b8: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x2367B8u;
    {
        const bool branch_taken_0x2367b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2367b8) {
            ctx->pc = 0x2369B8u;
            goto label_2369b8;
        }
    }
    ctx->pc = 0x2367C0u;
label_2367c0:
    // 0x2367c0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2367c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2367c4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2367c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2367c8: 0x24a5ba48  addiu       $a1, $a1, -0x45B8
    ctx->pc = 0x2367c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949448));
    // 0x2367cc: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x2367CCu;
    SET_GPR_U32(ctx, 31, 0x2367D4u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x2367CCu, 0x2367D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2367D4u;
label_2367d4:
    // 0x2367d4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2367D4u;
    {
        const bool branch_taken_0x2367d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2367d4) {
            ctx->pc = 0x2367FCu;
            goto label_2367fc;
        }
    }
    ctx->pc = 0x2367DCu;
    // 0x2367dc: 0x241e0032  addiu       $fp, $zero, 0x32
    ctx->pc = 0x2367dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2367e0: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x2367e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2367e4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2367e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2367e8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2367E8u;
    SET_GPR_U32(ctx, 31, 0x2367F0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2367E8u, 0x2367F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2367F0u;
label_2367f0:
    // 0x2367f0: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x2367f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2367f4: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x2367F4u;
    {
        const bool branch_taken_0x2367f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2367f4) {
            ctx->pc = 0x2369B8u;
            goto label_2369b8;
        }
    }
    ctx->pc = 0x2367FCu;
label_2367fc:
    // 0x2367fc: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2367fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x236800: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x236800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x236804: 0x24a5ba58  addiu       $a1, $a1, -0x45A8
    ctx->pc = 0x236804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949464));
    // 0x236808: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x236808u;
    SET_GPR_U32(ctx, 31, 0x236810u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x236808u, 0x236810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236810u;
label_236810:
    // 0x236810: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x236810u;
    {
        const bool branch_taken_0x236810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236810) {
            ctx->pc = 0x236838u;
            goto label_236838;
        }
    }
    ctx->pc = 0x236818u;
    // 0x236818: 0x2417003c  addiu       $s7, $zero, 0x3C
    ctx->pc = 0x236818u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x23681c: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x23681cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x236820: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x236820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x236824: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x236824u;
    SET_GPR_U32(ctx, 31, 0x23682Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x236824u, 0x23682Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23682Cu;
label_23682c:
    // 0x23682c: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x23682cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236830: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x236830u;
    {
        const bool branch_taken_0x236830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x236830) {
            ctx->pc = 0x2369B8u;
            goto label_2369b8;
        }
    }
    ctx->pc = 0x236838u;
label_236838:
    // 0x236838: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x236838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x23683c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x23683cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x236840: 0x24a5ba68  addiu       $a1, $a1, -0x4598
    ctx->pc = 0x236840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949480));
    // 0x236844: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x236844u;
    SET_GPR_U32(ctx, 31, 0x23684Cu);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x236844u, 0x23684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23684Cu;
label_23684c:
    // 0x23684c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23684Cu;
    {
        const bool branch_taken_0x23684c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23684c) {
            ctx->pc = 0x236874u;
            goto label_236874;
        }
    }
    ctx->pc = 0x236854u;
    // 0x236854: 0x24160047  addiu       $s6, $zero, 0x47
    ctx->pc = 0x236854u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x236858: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x236858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x23685c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x23685cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x236860: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x236860u;
    SET_GPR_U32(ctx, 31, 0x236868u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x236860u, 0x236868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236868u;
label_236868:
    // 0x236868: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x236868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23686c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x23686Cu;
    {
        const bool branch_taken_0x23686c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23686c) {
            ctx->pc = 0x2369B8u;
            goto label_2369b8;
        }
    }
    ctx->pc = 0x236874u;
label_236874:
    // 0x236874: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x236874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x236878: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x236878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x23687c: 0x24a5ba80  addiu       $a1, $a1, -0x4580
    ctx->pc = 0x23687cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949504));
    // 0x236880: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x236880u;
    SET_GPR_U32(ctx, 31, 0x236888u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x236880u, 0x236888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236888u;
label_236888:
    // 0x236888: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x236888u;
    {
        const bool branch_taken_0x236888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236888) {
            ctx->pc = 0x2368B0u;
            goto label_2368b0;
        }
    }
    ctx->pc = 0x236890u;
    // 0x236890: 0x24150048  addiu       $s5, $zero, 0x48
    ctx->pc = 0x236890u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x236894: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x236894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x236898: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x236898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23689c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x23689Cu;
    SET_GPR_U32(ctx, 31, 0x2368A4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x23689Cu, 0x2368A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2368A4u;
label_2368a4:
    // 0x2368a4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2368a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2368a8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2368A8u;
    {
        const bool branch_taken_0x2368a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2368a8) {
            ctx->pc = 0x2369B8u;
            goto label_2369b8;
        }
    }
    ctx->pc = 0x2368B0u;
label_2368b0:
    // 0x2368b0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2368b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2368b4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2368b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2368b8: 0x24a5ba90  addiu       $a1, $a1, -0x4570
    ctx->pc = 0x2368b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949520));
    // 0x2368bc: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x2368BCu;
    SET_GPR_U32(ctx, 31, 0x2368C4u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x2368BCu, 0x2368C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2368C4u;
label_2368c4:
    // 0x2368c4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2368C4u;
    {
        const bool branch_taken_0x2368c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2368c4) {
            ctx->pc = 0x2368ECu;
            goto label_2368ec;
        }
    }
    ctx->pc = 0x2368CCu;
    // 0x2368cc: 0x24140049  addiu       $s4, $zero, 0x49
    ctx->pc = 0x2368ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x2368d0: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x2368d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2368d4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2368d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2368d8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2368D8u;
    SET_GPR_U32(ctx, 31, 0x2368E0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2368D8u, 0x2368E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2368E0u;
label_2368e0:
    // 0x2368e0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2368e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2368e4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2368E4u;
    {
        const bool branch_taken_0x2368e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2368e4) {
            ctx->pc = 0x2369B8u;
            goto label_2369b8;
        }
    }
    ctx->pc = 0x2368ECu;
label_2368ec:
    // 0x2368ec: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2368ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2368f0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2368f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2368f4: 0x24a5baa0  addiu       $a1, $a1, -0x4560
    ctx->pc = 0x2368f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949536));
    // 0x2368f8: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x2368F8u;
    SET_GPR_U32(ctx, 31, 0x236900u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x2368F8u, 0x236900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236900u;
label_236900:
    // 0x236900: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x236900u;
    {
        const bool branch_taken_0x236900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236900) {
            ctx->pc = 0x236928u;
            goto label_236928;
        }
    }
    ctx->pc = 0x236908u;
    // 0x236908: 0x2413004a  addiu       $s3, $zero, 0x4A
    ctx->pc = 0x236908u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x23690c: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x23690cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x236910: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x236910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x236914: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x236914u;
    SET_GPR_U32(ctx, 31, 0x23691Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x236914u, 0x23691Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23691Cu;
label_23691c:
    // 0x23691c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x23691cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236920: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x236920u;
    {
        const bool branch_taken_0x236920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x236920) {
            ctx->pc = 0x2369B8u;
            goto label_2369b8;
        }
    }
    ctx->pc = 0x236928u;
label_236928:
    // 0x236928: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x236928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x23692c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x23692cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x236930: 0x24a5bac0  addiu       $a1, $a1, -0x4540
    ctx->pc = 0x236930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949568));
    // 0x236934: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x236934u;
    SET_GPR_U32(ctx, 31, 0x23693Cu);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x236934u, 0x23693Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23693Cu;
label_23693c:
    // 0x23693c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23693Cu;
    {
        const bool branch_taken_0x23693c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23693c) {
            ctx->pc = 0x236964u;
            goto label_236964;
        }
    }
    ctx->pc = 0x236944u;
    // 0x236944: 0x2412004b  addiu       $s2, $zero, 0x4B
    ctx->pc = 0x236944u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x236948: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x236948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x23694c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x23694cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x236950: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x236950u;
    SET_GPR_U32(ctx, 31, 0x236958u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x236950u, 0x236958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236958u;
label_236958:
    // 0x236958: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x236958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23695c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x23695Cu;
    {
        const bool branch_taken_0x23695c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23695c) {
            ctx->pc = 0x2369B8u;
            goto label_2369b8;
        }
    }
    ctx->pc = 0x236964u;
label_236964:
    // 0x236964: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x236964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x236968: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x236968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x23696c: 0x24a5bad0  addiu       $a1, $a1, -0x4530
    ctx->pc = 0x23696cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949584));
    // 0x236970: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x236970u;
    SET_GPR_U32(ctx, 31, 0x236978u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x236970u, 0x236978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236978u;
label_236978:
    // 0x236978: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x236978u;
    {
        const bool branch_taken_0x236978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236978) {
            ctx->pc = 0x2369A0u;
            goto label_2369a0;
        }
    }
    ctx->pc = 0x236980u;
    // 0x236980: 0x2411004c  addiu       $s1, $zero, 0x4C
    ctx->pc = 0x236980u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x236984: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x236984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x236988: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x236988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23698c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x23698Cu;
    SET_GPR_U32(ctx, 31, 0x236994u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x23698Cu, 0x236994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236994u;
label_236994:
    // 0x236994: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x236994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236998: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x236998u;
    {
        const bool branch_taken_0x236998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x236998) {
            ctx->pc = 0x2369B8u;
            goto label_2369b8;
        }
    }
    ctx->pc = 0x2369A0u;
label_2369a0:
    // 0x2369a0: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2369a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2369a4: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x2369a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2369a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2369a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2369ac: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2369ACu;
    SET_GPR_U32(ctx, 31, 0x2369B4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2369ACu, 0x2369B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2369B4u;
label_2369b4:
    // 0x2369b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2369b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2369b8:
    // 0x2369b8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2369b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2369bc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2369bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2369c0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2369c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2369c4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2369c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2369c8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2369c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2369cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2369ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2369d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2369d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2369d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2369d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2369d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2369d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2369dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2369dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2369e0: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x2369e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2369e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2369E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2369E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2369ECu;
    // 0x2369ec: 0x0  nop
    ctx->pc = 0x2369ecu;
    // NOP
    ctx->pc = 0x2369f0u;
}
