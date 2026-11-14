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

// Function: sub_00128060
// Address: 0x128060 - 0x128420
void sub_00128060_0x128060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128060_0x128060");
#endif

    switch (ctx->pc) {
        case 0x1280b0u: goto label_1280b0;
        case 0x1280bcu: goto label_1280bc;
        case 0x128108u: goto label_128108;
        case 0x128124u: goto label_128124;
        case 0x128140u: goto label_128140;
        case 0x128150u: goto label_128150;
        case 0x128160u: goto label_128160;
        case 0x12816cu: goto label_12816c;
        case 0x1281acu: goto label_1281ac;
        case 0x1281c8u: goto label_1281c8;
        case 0x1281e8u: goto label_1281e8;
        case 0x128218u: goto label_128218;
        case 0x128250u: goto label_128250;
        case 0x128260u: goto label_128260;
        case 0x1283dcu: goto label_1283dc;
        default: break;
    }

    ctx->pc = 0x128060u;

    // 0x128060: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x128060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x128064: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x128064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x128068: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x128068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x12806c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x12806cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x128070: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x128070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x128074: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x128074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x128078: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x128078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x12807c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12807cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x128080: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x128080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x128084: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x128084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x128088: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x128088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12808c: 0xa3a400e0  sb          $a0, 0xE0($sp)
    ctx->pc = 0x12808cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 224), (uint8_t)GPR_U32(ctx, 4));
    // 0x128090: 0xa3a500f0  sb          $a1, 0xF0($sp)
    ctx->pc = 0x128090u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 240), (uint8_t)GPR_U32(ctx, 5));
    // 0x128094: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x128094u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128098: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x128098u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12809c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x12809cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1280a0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1280a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1280a4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1280a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1280a8: 0xc041b48  jal         func_106D20
    ctx->pc = 0x1280A8u;
    SET_GPR_U32(ctx, 31, 0x1280B0u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x1280A8u, 0x1280B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1280B0u;
label_1280b0:
    // 0x1280b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1280b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1280b4: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x1280B4u;
    {
        const bool branch_taken_0x1280b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1280b4) {
            ctx->pc = 0x128398u;
            goto label_128398;
        }
    }
    ctx->pc = 0x1280BCu;
label_1280bc:
    // 0x1280bc: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1280bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1280c0: 0x2e010006  sltiu       $at, $s0, 0x6
    ctx->pc = 0x1280c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1280c4: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x1280C4u;
    {
        const bool branch_taken_0x1280c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1280c4) {
            ctx->pc = 0x128160u;
            goto label_128160;
        }
    }
    ctx->pc = 0x1280CCu;
    // 0x1280cc: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1280ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x1280d0: 0x24637f70  addiu       $v1, $v1, 0x7F70
    ctx->pc = 0x1280d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32624));
    // 0x1280d4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1280d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1280d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1280d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1280dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1280dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1280e0: 0x400008  jr          $v0
    ctx->pc = 0x1280E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1280E8u: goto label_1280e8;
            case 0x1280F4u: goto label_1280f4;
            case 0x128110u: goto label_128110;
            case 0x12812Cu: goto label_12812c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1280E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1280E8u;
label_1280e8:
    // 0x1280e8: 0x24170004  addiu       $s7, $zero, 0x4
    ctx->pc = 0x1280e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1280ec: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1280ECu;
    {
        const bool branch_taken_0x1280ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1280ec) {
            ctx->pc = 0x128160u;
            goto label_128160;
        }
    }
    ctx->pc = 0x1280F4u;
label_1280f4:
    // 0x1280f4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1280f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1280f8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1280f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1280fc: 0x24a52458  addiu       $a1, $a1, 0x2458
    ctx->pc = 0x1280fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9304));
    // 0x128100: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x128100u;
    SET_GPR_U32(ctx, 31, 0x128108u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x128100u, 0x128108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128108u;
label_128108:
    // 0x128108: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x128108u;
    {
        const bool branch_taken_0x128108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128108) {
            ctx->pc = 0x128160u;
            goto label_128160;
        }
    }
    ctx->pc = 0x128110u;
label_128110:
    // 0x128110: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x128110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x128114: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x128114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x128118: 0x24a52468  addiu       $a1, $a1, 0x2468
    ctx->pc = 0x128118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9320));
    // 0x12811c: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x12811Cu;
    SET_GPR_U32(ctx, 31, 0x128124u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x12811Cu, 0x128124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128124u;
label_128124:
    // 0x128124: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x128124u;
    {
        const bool branch_taken_0x128124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128124) {
            ctx->pc = 0x128160u;
            goto label_128160;
        }
    }
    ctx->pc = 0x12812Cu;
label_12812c:
    // 0x12812c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x12812cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x128130: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x128130u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x128134: 0x24a52280  addiu       $a1, $a1, 0x2280
    ctx->pc = 0x128134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8832));
    // 0x128138: 0xc118058  jal         func_460160
    ctx->pc = 0x128138u;
    SET_GPR_U32(ctx, 31, 0x128140u);
    ctx->pc = 0x460160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x460160u, 0x128138u, 0x128140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128140u;
label_128140:
    // 0x128140: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x128140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x128144: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x128144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x128148: 0xc0430e4  jal         func_10C390
    ctx->pc = 0x128148u;
    SET_GPR_U32(ctx, 31, 0x128150u);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x128148u, 0x128150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128150u;
label_128150:
    // 0x128150: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x128150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x128154: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x128154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128158: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x128158u;
    SET_GPR_U32(ctx, 31, 0x128160u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x128158u, 0x128160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128160u;
label_128160:
    // 0x128160: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x128160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128164: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x128164u;
    {
        const bool branch_taken_0x128164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128164) {
            ctx->pc = 0x128388u;
            goto label_128388;
        }
    }
    ctx->pc = 0x12816Cu;
label_12816c:
    // 0x12816c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x12816cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x128170: 0x12020017  beq         $s0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x128170u;
    {
        const bool branch_taken_0x128170 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x128170) {
            ctx->pc = 0x1281D0u;
            goto label_1281d0;
        }
    }
    ctx->pc = 0x128178u;
    // 0x128178: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x128178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12817c: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12817Cu;
    {
        const bool branch_taken_0x12817c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x12817c) {
            ctx->pc = 0x1281B4u;
            goto label_1281b4;
        }
    }
    ctx->pc = 0x128184u;
    // 0x128184: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x128184u;
    {
        const bool branch_taken_0x128184 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x128184) {
            ctx->pc = 0x128194u;
            goto label_128194;
        }
    }
    ctx->pc = 0x12818Cu;
    // 0x12818c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x12818Cu;
    {
        const bool branch_taken_0x12818c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12818c) {
            ctx->pc = 0x1281E8u;
            goto label_1281e8;
        }
    }
    ctx->pc = 0x128194u;
label_128194:
    // 0x128194: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x128194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x128198: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x128198u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x12819c: 0x24a52478  addiu       $a1, $a1, 0x2478
    ctx->pc = 0x12819cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9336));
    // 0x1281a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1281a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1281a4: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x1281A4u;
    SET_GPR_U32(ctx, 31, 0x1281ACu);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x1281A4u, 0x1281ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1281ACu;
label_1281ac:
    // 0x1281ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1281ACu;
    {
        const bool branch_taken_0x1281ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1281ac) {
            ctx->pc = 0x1281E8u;
            goto label_1281e8;
        }
    }
    ctx->pc = 0x1281B4u;
label_1281b4:
    // 0x1281b4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1281b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1281b8: 0x27858b78  addiu       $a1, $gp, -0x7488
    ctx->pc = 0x1281b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937464));
    // 0x1281bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1281bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1281c0: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x1281C0u;
    SET_GPR_U32(ctx, 31, 0x1281C8u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x1281C0u, 0x1281C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1281C8u;
label_1281c8:
    // 0x1281c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1281C8u;
    {
        const bool branch_taken_0x1281c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1281c8) {
            ctx->pc = 0x1281E8u;
            goto label_1281e8;
        }
    }
    ctx->pc = 0x1281D0u;
label_1281d0:
    // 0x1281d0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1281d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1281d4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1281d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1281d8: 0x24a52488  addiu       $a1, $a1, 0x2488
    ctx->pc = 0x1281d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9352));
    // 0x1281dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1281dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1281e0: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x1281E0u;
    SET_GPR_U32(ctx, 31, 0x1281E8u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x1281E0u, 0x1281E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1281E8u;
label_1281e8:
    // 0x1281e8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1281e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1281ec: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1281ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1281f0: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x1281f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
    // 0x1281f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1281f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1281f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1281f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1281fc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1281fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x128200: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x128200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x128204: 0xac4300a0  sw          $v1, 0xA0($v0)
    ctx->pc = 0x128204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 3));
    // 0x128208: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x128208u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12820c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x12820cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128210: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x128210u;
    {
        const bool branch_taken_0x128210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128210) {
            ctx->pc = 0x1282B0u;
            goto label_1282b0;
        }
    }
    ctx->pc = 0x128218u;
label_128218:
    // 0x128218: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x128218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x12821c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x12821cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x128220: 0x2442b840  addiu       $v0, $v0, -0x47C0
    ctx->pc = 0x128220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948928));
    // 0x128224: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x128224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x128228: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x128228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x12822c: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x12822cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x128230: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x128230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x128234: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x128234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x128238: 0x2442b840  addiu       $v0, $v0, -0x47C0
    ctx->pc = 0x128238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948928));
    // 0x12823c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12823cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x128240: 0x8c560010  lw          $s6, 0x10($v0)
    ctx->pc = 0x128240u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x128244: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x128244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x128248: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x128248u;
    SET_GPR_U32(ctx, 31, 0x128250u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x128248u, 0x128250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128250u;
label_128250:
    // 0x128250: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x128250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x128254: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x128254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128258: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x128258u;
    SET_GPR_U32(ctx, 31, 0x128260u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x128258u, 0x128260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128260u;
label_128260:
    // 0x128260: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x128260u;
    {
        const bool branch_taken_0x128260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128260) {
            ctx->pc = 0x1282ACu;
            goto label_1282ac;
        }
    }
    ctx->pc = 0x128268u;
    // 0x128268: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x128268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x12826c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x12826cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x128270: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x128270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
    // 0x128274: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x128274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x128278: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x128278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12827c: 0x56082b  sltu        $at, $v0, $s6
    ctx->pc = 0x12827cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x128280: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x128280u;
    {
        const bool branch_taken_0x128280 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x128280) {
            ctx->pc = 0x12829Cu;
            goto label_12829c;
        }
    }
    ctx->pc = 0x128288u;
    // 0x128288: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x128288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x12828c: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x12828cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x128290: 0x8c6200a0  lw          $v0, 0xA0($v1)
    ctx->pc = 0x128290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x128294: 0x561023  subu        $v0, $v0, $s6
    ctx->pc = 0x128294u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x128298: 0xac6200a0  sw          $v0, 0xA0($v1)
    ctx->pc = 0x128298u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 2));
label_12829c:
    // 0x12829c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12829cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1282a0: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1282a0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1282a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1282A4u;
    {
        const bool branch_taken_0x1282a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1282a4) {
            ctx->pc = 0x1282B0u;
            goto label_1282b0;
        }
    }
    ctx->pc = 0x1282ACu;
label_1282ac:
    // 0x1282ac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1282acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1282b0:
    // 0x1282b0: 0x93a200f0  lbu         $v0, 0xF0($sp)
    ctx->pc = 0x1282b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1282b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1282B4u;
    {
        const bool branch_taken_0x1282b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1282b4) {
            ctx->pc = 0x1282D4u;
            goto label_1282d4;
        }
    }
    ctx->pc = 0x1282BCu;
    // 0x1282bc: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1282BCu;
    {
        const bool branch_taken_0x1282bc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1282bc) {
            ctx->pc = 0x1282D4u;
            goto label_1282d4;
        }
    }
    ctx->pc = 0x1282C4u;
    // 0x1282c4: 0x8f82ba14  lw          $v0, -0x45EC($gp)
    ctx->pc = 0x1282c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949396)));
    // 0x1282c8: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1282c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1282cc: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1282CCu;
    {
        const bool branch_taken_0x1282cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1282cc) {
            ctx->pc = 0x128218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128218;
        }
    }
    ctx->pc = 0x1282D4u;
label_1282d4:
    // 0x1282d4: 0x93a200f0  lbu         $v0, 0xF0($sp)
    ctx->pc = 0x1282d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1282d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1282D8u;
    {
        const bool branch_taken_0x1282d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1282d8) {
            ctx->pc = 0x1282E8u;
            goto label_1282e8;
        }
    }
    ctx->pc = 0x1282E0u;
    // 0x1282e0: 0x16800002  bnez        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x1282E0u;
    {
        const bool branch_taken_0x1282e0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1282e0) {
            ctx->pc = 0x1282ECu;
            goto label_1282ec;
        }
    }
    ctx->pc = 0x1282E8u;
label_1282e8:
    // 0x1282e8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1282e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1282ec:
    // 0x1282ec: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1282ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1282f0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1282f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1282f4: 0x8c4200a0  lw          $v0, 0xA0($v0)
    ctx->pc = 0x1282f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1282f8: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x1282f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x1282fc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1282FCu;
    {
        const bool branch_taken_0x1282fc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1282fc) {
            ctx->pc = 0x128318u;
            goto label_128318;
        }
    }
    ctx->pc = 0x128304u;
    // 0x128304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x128304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128308: 0x0  nop
    ctx->pc = 0x128308u;
    // NOP
    // 0x12830c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x12830cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x128310: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x128310u;
    {
        const bool branch_taken_0x128310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128310) {
            ctx->pc = 0x128334u;
            goto label_128334;
        }
    }
    ctx->pc = 0x128318u;
label_128318:
    // 0x128318: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x128318u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x12831c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12831cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x128320: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x128320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x128324: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128324u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128328: 0x0  nop
    ctx->pc = 0x128328u;
    // NOP
    // 0x12832c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x12832cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x128330: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x128330u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_128334:
    // 0x128334: 0x3c024480  lui         $v0, 0x4480
    ctx->pc = 0x128334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17536 << 16));
    // 0x128338: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x128338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12833c: 0x0  nop
    ctx->pc = 0x12833cu;
    // NOP
    // 0x128340: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x128340u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x128344: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x128344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x128348: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x128348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12834c: 0x0  nop
    ctx->pc = 0x12834cu;
    // NOP
    // 0x128350: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x128350u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128354: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x128354u;
    {
        const bool branch_taken_0x128354 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x128354) {
            ctx->pc = 0x12836Cu;
            goto label_12836c;
        }
    }
    ctx->pc = 0x12835Cu;
    // 0x12835c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12835cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x128360: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x128360u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x128364: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x128364u;
    {
        const bool branch_taken_0x128364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128364) {
            ctx->pc = 0x128380u;
            goto label_128380;
        }
    }
    ctx->pc = 0x12836Cu;
label_12836c:
    // 0x12836c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x12836cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x128370: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x128370u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x128374: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x128374u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x128378: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x128378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x12837c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12837cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_128380:
    // 0x128380: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x128380u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x128384: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x128384u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_128388:
    // 0x128388: 0x237102b  sltu        $v0, $s1, $s7
    ctx->pc = 0x128388u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x12838c: 0x1440ff77  bnez        $v0, . + 4 + (-0x89 << 2)
    ctx->pc = 0x12838Cu;
    {
        const bool branch_taken_0x12838c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12838c) {
            ctx->pc = 0x12816Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12816c;
        }
    }
    ctx->pc = 0x128394u;
    // 0x128394: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x128394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_128398:
    // 0x128398: 0x2e020006  sltiu       $v0, $s0, 0x6
    ctx->pc = 0x128398u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x12839c: 0x1440ff47  bnez        $v0, . + 4 + (-0xB9 << 2)
    ctx->pc = 0x12839Cu;
    {
        const bool branch_taken_0x12839c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12839c) {
            ctx->pc = 0x1280BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1280bc;
        }
    }
    ctx->pc = 0x1283A4u;
    // 0x1283a4: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x1283a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1283a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1283a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1283ac: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x1283acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1283b0: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1283b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1283b4: 0x93a200e0  lbu         $v0, 0xE0($sp)
    ctx->pc = 0x1283b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1283b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1283b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1283bc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1283BCu;
    {
        const bool branch_taken_0x1283bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1283bc) {
            ctx->pc = 0x1283C8u;
            goto label_1283c8;
        }
    }
    ctx->pc = 0x1283C4u;
    // 0x1283c4: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x1283c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_1283c8:
    // 0x1283c8: 0x240f02d  daddu       $fp, $s2, $zero
    ctx->pc = 0x1283c8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1283cc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1283ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1283d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1283d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1283d4: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1283D4u;
    SET_GPR_U32(ctx, 31, 0x1283DCu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1283D4u, 0x1283DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1283DCu;
label_1283dc:
    // 0x1283dc: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x1283dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1283e0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1283e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1283e4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1283e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1283e8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1283e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1283ec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1283ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1283f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1283f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1283f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1283f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1283f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1283f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1283fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1283fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128400: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x128400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128404: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x128404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128408: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x128408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x12840c: 0x3e00008  jr          $ra
    ctx->pc = 0x12840Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12840Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128414u;
    // 0x128414: 0x0  nop
    ctx->pc = 0x128414u;
    // NOP
    // 0x128418: 0x0  nop
    ctx->pc = 0x128418u;
    // NOP
    // 0x12841c: 0x0  nop
    ctx->pc = 0x12841cu;
    // NOP
    ctx->pc = 0x128420u;
}
