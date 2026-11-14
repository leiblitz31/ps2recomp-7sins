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

// Function: sub_002CA400
// Address: 0x2ca400 - 0x2ca710
void sub_002CA400_0x2ca400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA400_0x2ca400");
#endif

    switch (ctx->pc) {
        case 0x2ca468u: goto label_2ca468;
        case 0x2ca490u: goto label_2ca490;
        case 0x2ca4a0u: goto label_2ca4a0;
        case 0x2ca4ccu: goto label_2ca4cc;
        case 0x2ca4f0u: goto label_2ca4f0;
        case 0x2ca500u: goto label_2ca500;
        case 0x2ca530u: goto label_2ca530;
        case 0x2ca560u: goto label_2ca560;
        case 0x2ca594u: goto label_2ca594;
        case 0x2ca5a4u: goto label_2ca5a4;
        case 0x2ca5d0u: goto label_2ca5d0;
        case 0x2ca5e4u: goto label_2ca5e4;
        case 0x2ca5f4u: goto label_2ca5f4;
        case 0x2ca608u: goto label_2ca608;
        case 0x2ca628u: goto label_2ca628;
        case 0x2ca63cu: goto label_2ca63c;
        case 0x2ca64cu: goto label_2ca64c;
        case 0x2ca660u: goto label_2ca660;
        case 0x2ca680u: goto label_2ca680;
        case 0x2ca690u: goto label_2ca690;
        case 0x2ca6b0u: goto label_2ca6b0;
        default: break;
    }

    ctx->pc = 0x2ca400u;

    // 0x2ca400: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2ca400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2ca404: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2ca404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2ca408: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2ca408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2ca40c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2ca40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2ca410: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2ca410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2ca414: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ca414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2ca418: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ca418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ca41c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ca41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ca420: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ca420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ca424: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ca424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ca428: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ca428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ca42c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2ca42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2ca430: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x2ca430u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ca434: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2ca434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2ca438: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ca438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ca43c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA43Cu;
    {
        const bool branch_taken_0x2ca43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca43c) {
            ctx->pc = 0x2CA450u;
            goto label_2ca450;
        }
    }
    ctx->pc = 0x2CA444u;
    // 0x2ca444: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ca444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca448: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x2CA448u;
    {
        const bool branch_taken_0x2ca448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca448) {
            ctx->pc = 0x2CA6D8u;
            goto label_2ca6d8;
        }
    }
    ctx->pc = 0x2CA450u;
label_2ca450:
    // 0x2ca450: 0x8f82bae8  lw          $v0, -0x4518($gp)
    ctx->pc = 0x2ca450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949608)));
    // 0x2ca454: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CA454u;
    {
        const bool branch_taken_0x2ca454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca454) {
            ctx->pc = 0x2CA47Cu;
            goto label_2ca47c;
        }
    }
    ctx->pc = 0x2CA45Cu;
    // 0x2ca45c: 0x8f84bae8  lw          $a0, -0x4518($gp)
    ctx->pc = 0x2ca45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949608)));
    // 0x2ca460: 0xc0628b8  jal         func_18A2E0
    ctx->pc = 0x2CA460u;
    SET_GPR_U32(ctx, 31, 0x2CA468u);
    ctx->pc = 0x18A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A2E0u, 0x2CA460u, 0x2CA468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA468u;
label_2ca468:
    // 0x2ca468: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA468u;
    {
        const bool branch_taken_0x2ca468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca468) {
            ctx->pc = 0x2CA47Cu;
            goto label_2ca47c;
        }
    }
    ctx->pc = 0x2CA470u;
    // 0x2ca470: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ca470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca474: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x2CA474u;
    {
        const bool branch_taken_0x2ca474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca474) {
            ctx->pc = 0x2CA6D8u;
            goto label_2ca6d8;
        }
    }
    ctx->pc = 0x2CA47Cu;
label_2ca47c:
    // 0x2ca47c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2ca47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2ca480: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ca480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ca484: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2ca484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2ca488: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2CA488u;
    SET_GPR_U32(ctx, 31, 0x2CA490u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CA488u, 0x2CA490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA490u;
label_2ca490:
    // 0x2ca490: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x2ca490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x2ca494: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x2ca494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2ca498: 0xc063dd0  jal         func_18F740
    ctx->pc = 0x2CA498u;
    SET_GPR_U32(ctx, 31, 0x2CA4A0u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x2CA498u, 0x2CA4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA4A0u;
label_2ca4a0:
    // 0x2ca4a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ca4a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca4a4: 0x2001026  xor         $v0, $s0, $zero
    ctx->pc = 0x2ca4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 0));
    // 0x2ca4a8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2ca4a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ca4ac: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x2ca4acu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ca4b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ca4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca4b4: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x2ca4b4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ca4b8: 0x16e00007  bnez        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CA4B8u;
    {
        const bool branch_taken_0x2ca4b8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca4b8) {
            ctx->pc = 0x2CA4D8u;
            goto label_2ca4d8;
        }
    }
    ctx->pc = 0x2CA4C0u;
    // 0x2ca4c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ca4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca4c4: 0xc05140c  jal         func_145030
    ctx->pc = 0x2CA4C4u;
    SET_GPR_U32(ctx, 31, 0x2CA4CCu);
    ctx->pc = 0x145030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145030u, 0x2CA4C4u, 0x2CA4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA4CCu;
label_2ca4cc:
    // 0x2ca4cc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CA4CCu;
    {
        const bool branch_taken_0x2ca4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca4cc) {
            ctx->pc = 0x2CA4D8u;
            goto label_2ca4d8;
        }
    }
    ctx->pc = 0x2CA4D4u;
    // 0x2ca4d4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2ca4d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ca4d8:
    // 0x2ca4d8: 0x329600ff  andi        $s6, $s4, 0xFF
    ctx->pc = 0x2ca4d8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2ca4dc: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2ca4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2ca4e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ca4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ca4e4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2ca4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2ca4e8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2CA4E8u;
    SET_GPR_U32(ctx, 31, 0x2CA4F0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CA4E8u, 0x2CA4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA4F0u;
label_2ca4f0:
    // 0x2ca4f0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2ca4f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca4f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ca4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca4f8: 0xc0969a0  jal         func_25A680
    ctx->pc = 0x2CA4F8u;
    SET_GPR_U32(ctx, 31, 0x2CA500u);
    ctx->pc = 0x25A680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A680u, 0x2CA4F8u, 0x2CA500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA500u;
label_2ca500:
    // 0x2ca500: 0xa3a200df  sb          $v0, 0xDF($sp)
    ctx->pc = 0x2ca500u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 223), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ca504: 0x16c00007  bnez        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CA504u;
    {
        const bool branch_taken_0x2ca504 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca504) {
            ctx->pc = 0x2CA524u;
            goto label_2ca524;
        }
    }
    ctx->pc = 0x2CA50Cu;
    // 0x2ca50c: 0x93a200df  lbu         $v0, 0xDF($sp)
    ctx->pc = 0x2ca50cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
    // 0x2ca510: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA510u;
    {
        const bool branch_taken_0x2ca510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca510) {
            ctx->pc = 0x2CA524u;
            goto label_2ca524;
        }
    }
    ctx->pc = 0x2CA518u;
    // 0x2ca518: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ca518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca51c: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x2CA51Cu;
    {
        const bool branch_taken_0x2ca51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca51c) {
            ctx->pc = 0x2CA6D8u;
            goto label_2ca6d8;
        }
    }
    ctx->pc = 0x2CA524u;
label_2ca524:
    // 0x2ca524: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ca524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca528: 0xc096880  jal         func_25A200
    ctx->pc = 0x2CA528u;
    SET_GPR_U32(ctx, 31, 0x2CA530u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2CA528u, 0x2CA530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA530u;
label_2ca530:
    // 0x2ca530: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ca530u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca534: 0x12400063  beqz        $s2, . + 4 + (0x63 << 2)
    ctx->pc = 0x2CA534u;
    {
        const bool branch_taken_0x2ca534 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca534) {
            ctx->pc = 0x2CA6C4u;
            goto label_2ca6c4;
        }
    }
    ctx->pc = 0x2CA53Cu;
    // 0x2ca53c: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA53Cu;
    {
        const bool branch_taken_0x2ca53c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca53c) {
            ctx->pc = 0x2CA550u;
            goto label_2ca550;
        }
    }
    ctx->pc = 0x2CA544u;
    // 0x2ca544: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ca544u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca548: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2CA548u;
    {
        const bool branch_taken_0x2ca548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca548) {
            ctx->pc = 0x2CA6D8u;
            goto label_2ca6d8;
        }
    }
    ctx->pc = 0x2CA550u;
label_2ca550:
    // 0x2ca550: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ca550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca554: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2ca554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2ca558: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2CA558u;
    SET_GPR_U32(ctx, 31, 0x2CA560u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CA558u, 0x2CA560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA560u;
label_2ca560:
    // 0x2ca560: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ca560u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca564: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CA564u;
    {
        const bool branch_taken_0x2ca564 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca564) {
            ctx->pc = 0x2CA584u;
            goto label_2ca584;
        }
    }
    ctx->pc = 0x2CA56Cu;
    // 0x2ca56c: 0x9262007c  lbu         $v0, 0x7C($s3)
    ctx->pc = 0x2ca56cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2ca570: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA570u;
    {
        const bool branch_taken_0x2ca570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca570) {
            ctx->pc = 0x2CA584u;
            goto label_2ca584;
        }
    }
    ctx->pc = 0x2CA578u;
    // 0x2ca578: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ca578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca57c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2CA57Cu;
    {
        const bool branch_taken_0x2ca57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca57c) {
            ctx->pc = 0x2CA6D8u;
            goto label_2ca6d8;
        }
    }
    ctx->pc = 0x2CA584u;
label_2ca584:
    // 0x2ca584: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ca584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca588: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2ca588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2ca58c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2CA58Cu;
    SET_GPR_U32(ctx, 31, 0x2CA594u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CA58Cu, 0x2CA594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA594u;
label_2ca594:
    // 0x2ca594: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2ca594u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca598: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2ca598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca59c: 0xc063dd0  jal         func_18F740
    ctx->pc = 0x2CA59Cu;
    SET_GPR_U32(ctx, 31, 0x2CA5A4u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x2CA59Cu, 0x2CA5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA5A4u;
label_2ca5a4:
    // 0x2ca5a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ca5a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca5a8: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA5A8u;
    {
        const bool branch_taken_0x2ca5a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca5a8) {
            ctx->pc = 0x2CA5BCu;
            goto label_2ca5bc;
        }
    }
    ctx->pc = 0x2CA5B0u;
    // 0x2ca5b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ca5b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca5b4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2CA5B4u;
    {
        const bool branch_taken_0x2ca5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca5b4) {
            ctx->pc = 0x2CA6D8u;
            goto label_2ca6d8;
        }
    }
    ctx->pc = 0x2CA5BCu;
label_2ca5bc:
    // 0x2ca5bc: 0x12000041  beqz        $s0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2CA5BCu;
    {
        const bool branch_taken_0x2ca5bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca5bc) {
            ctx->pc = 0x2CA6C4u;
            goto label_2ca6c4;
        }
    }
    ctx->pc = 0x2CA5C4u;
    // 0x2ca5c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ca5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca5c8: 0xc0ae4b4  jal         func_2B92D0
    ctx->pc = 0x2CA5C8u;
    SET_GPR_U32(ctx, 31, 0x2CA5D0u);
    ctx->pc = 0x2B92D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B92D0u, 0x2CA5C8u, 0x2CA5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA5D0u;
label_2ca5d0:
    // 0x2ca5d0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CA5D0u;
    {
        const bool branch_taken_0x2ca5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca5d0) {
            ctx->pc = 0x2CA61Cu;
            goto label_2ca61c;
        }
    }
    ctx->pc = 0x2CA5D8u;
    // 0x2ca5d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ca5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca5dc: 0xc0ae4b4  jal         func_2B92D0
    ctx->pc = 0x2CA5DCu;
    SET_GPR_U32(ctx, 31, 0x2CA5E4u);
    ctx->pc = 0x2B92D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B92D0u, 0x2CA5DCu, 0x2CA5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA5E4u;
label_2ca5e4:
    // 0x2ca5e4: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2ca5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x2ca5e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ca5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca5ec: 0xc0513f0  jal         func_144FC0
    ctx->pc = 0x2CA5ECu;
    SET_GPR_U32(ctx, 31, 0x2CA5F4u);
    ctx->pc = 0x144FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144FC0u, 0x2CA5ECu, 0x2CA5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA5F4u;
label_2ca5f4:
    // 0x2ca5f4: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x2ca5f4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ca5f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ca5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca5fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ca5fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca600: 0xc099f94  jal         func_267E50
    ctx->pc = 0x2CA600u;
    SET_GPR_U32(ctx, 31, 0x2CA608u);
    ctx->pc = 0x267E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267E50u, 0x2CA600u, 0x2CA608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA608u;
label_2ca608:
    // 0x2ca608: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA608u;
    {
        const bool branch_taken_0x2ca608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca608) {
            ctx->pc = 0x2CA61Cu;
            goto label_2ca61c;
        }
    }
    ctx->pc = 0x2CA610u;
    // 0x2ca610: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ca610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca614: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2CA614u;
    {
        const bool branch_taken_0x2ca614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca614) {
            ctx->pc = 0x2CA6D8u;
            goto label_2ca6d8;
        }
    }
    ctx->pc = 0x2CA61Cu;
label_2ca61c:
    // 0x2ca61c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ca61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca620: 0xc0ae4b4  jal         func_2B92D0
    ctx->pc = 0x2CA620u;
    SET_GPR_U32(ctx, 31, 0x2CA628u);
    ctx->pc = 0x2B92D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B92D0u, 0x2CA620u, 0x2CA628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA628u;
label_2ca628:
    // 0x2ca628: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CA628u;
    {
        const bool branch_taken_0x2ca628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca628) {
            ctx->pc = 0x2CA674u;
            goto label_2ca674;
        }
    }
    ctx->pc = 0x2CA630u;
    // 0x2ca630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ca630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca634: 0xc0ae4b4  jal         func_2B92D0
    ctx->pc = 0x2CA634u;
    SET_GPR_U32(ctx, 31, 0x2CA63Cu);
    ctx->pc = 0x2B92D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B92D0u, 0x2CA634u, 0x2CA63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA63Cu;
label_2ca63c:
    // 0x2ca63c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2ca63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2ca640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ca640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca644: 0xc0513f0  jal         func_144FC0
    ctx->pc = 0x2CA644u;
    SET_GPR_U32(ctx, 31, 0x2CA64Cu);
    ctx->pc = 0x144FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144FC0u, 0x2CA644u, 0x2CA64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA64Cu;
label_2ca64c:
    // 0x2ca64c: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x2ca64cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ca650: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ca650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca654: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ca654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca658: 0xc099f94  jal         func_267E50
    ctx->pc = 0x2CA658u;
    SET_GPR_U32(ctx, 31, 0x2CA660u);
    ctx->pc = 0x267E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267E50u, 0x2CA658u, 0x2CA660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA660u;
label_2ca660:
    // 0x2ca660: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA660u;
    {
        const bool branch_taken_0x2ca660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca660) {
            ctx->pc = 0x2CA674u;
            goto label_2ca674;
        }
    }
    ctx->pc = 0x2CA668u;
    // 0x2ca668: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ca668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca66c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2CA66Cu;
    {
        const bool branch_taken_0x2ca66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca66c) {
            ctx->pc = 0x2CA6D8u;
            goto label_2ca6d8;
        }
    }
    ctx->pc = 0x2CA674u;
label_2ca674:
    // 0x2ca674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ca674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca678: 0xc0ae4b4  jal         func_2B92D0
    ctx->pc = 0x2CA678u;
    SET_GPR_U32(ctx, 31, 0x2CA680u);
    ctx->pc = 0x2B92D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B92D0u, 0x2CA678u, 0x2CA680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA680u;
label_2ca680:
    // 0x2ca680: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2ca680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x2ca684: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ca684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca688: 0xc0ae4b4  jal         func_2B92D0
    ctx->pc = 0x2CA688u;
    SET_GPR_U32(ctx, 31, 0x2CA690u);
    ctx->pc = 0x2B92D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B92D0u, 0x2CA688u, 0x2CA690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA690u;
label_2ca690:
    // 0x2ca690: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x2ca690u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ca694: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CA694u;
    {
        const bool branch_taken_0x2ca694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ca694) {
            ctx->pc = 0x2CA6C4u;
            goto label_2ca6c4;
        }
    }
    ctx->pc = 0x2CA69Cu;
    // 0x2ca69c: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CA69Cu;
    {
        const bool branch_taken_0x2ca69c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca69c) {
            ctx->pc = 0x2CA6B8u;
            goto label_2ca6b8;
        }
    }
    ctx->pc = 0x2CA6A4u;
    // 0x2ca6a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ca6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca6a8: 0xc05140c  jal         func_145030
    ctx->pc = 0x2CA6A8u;
    SET_GPR_U32(ctx, 31, 0x2CA6B0u);
    ctx->pc = 0x145030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145030u, 0x2CA6A8u, 0x2CA6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA6B0u;
label_2ca6b0:
    // 0x2ca6b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA6B0u;
    {
        const bool branch_taken_0x2ca6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca6b0) {
            ctx->pc = 0x2CA6C4u;
            goto label_2ca6c4;
        }
    }
    ctx->pc = 0x2CA6B8u;
label_2ca6b8:
    // 0x2ca6b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ca6b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca6bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CA6BCu;
    {
        const bool branch_taken_0x2ca6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca6bc) {
            ctx->pc = 0x2CA6D8u;
            goto label_2ca6d8;
        }
    }
    ctx->pc = 0x2CA6C4u;
label_2ca6c4:
    // 0x2ca6c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ca6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca6c8: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2ca6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2ca6cc: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x2ca6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ca6d0: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2ca6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2ca6d4: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x2ca6d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_2ca6d8:
    // 0x2ca6d8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2ca6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ca6dc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2ca6dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ca6e0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2ca6e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ca6e4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2ca6e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ca6e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ca6e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ca6ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ca6ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ca6f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ca6f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ca6f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ca6f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ca6f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ca6f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca6fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ca6fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca700: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x2ca700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2ca704: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA70Cu;
    // 0x2ca70c: 0x0  nop
    ctx->pc = 0x2ca70cu;
    // NOP
    ctx->pc = 0x2ca710u;
}
