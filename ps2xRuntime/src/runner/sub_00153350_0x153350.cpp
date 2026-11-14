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

// Function: sub_00153350
// Address: 0x153350 - 0x153560
void sub_00153350_0x153350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153350_0x153350");
#endif

    switch (ctx->pc) {
        case 0x1533c0u: goto label_1533c0;
        case 0x1533d0u: goto label_1533d0;
        case 0x1533e8u: goto label_1533e8;
        case 0x153400u: goto label_153400;
        case 0x153410u: goto label_153410;
        case 0x153430u: goto label_153430;
        case 0x153440u: goto label_153440;
        case 0x153458u: goto label_153458;
        case 0x153470u: goto label_153470;
        case 0x15348cu: goto label_15348c;
        case 0x15349cu: goto label_15349c;
        case 0x1534acu: goto label_1534ac;
        case 0x1534c4u: goto label_1534c4;
        case 0x1534d4u: goto label_1534d4;
        case 0x1534e4u: goto label_1534e4;
        case 0x1534f4u: goto label_1534f4;
        case 0x153510u: goto label_153510;
        case 0x153530u: goto label_153530;
        default: break;
    }

    ctx->pc = 0x153350u;

    // 0x153350: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x153350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x153354: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x153354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x153358: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x153358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15335c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15335cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x153360: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x153360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x153364: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x153364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x153368: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x153368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15336c: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x15336cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x153370: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x153370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x153374: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x153374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x153378: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x153378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x15337c: 0xafa800b0  sw          $t0, 0xB0($sp)
    ctx->pc = 0x15337cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 8));
    // 0x153380: 0xafa900c0  sw          $t1, 0xC0($sp)
    ctx->pc = 0x153380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 9));
    // 0x153384: 0x8fb300c0  lw          $s3, 0xC0($sp)
    ctx->pc = 0x153384u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x153388: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x153388u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15338c: 0x8fb100a0  lw          $s1, 0xA0($sp)
    ctx->pc = 0x15338cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x153390: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x153390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x153394: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x153394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153398: 0x12220015  beq         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x153398u;
    {
        const bool branch_taken_0x153398 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x153398) {
            ctx->pc = 0x1533F0u;
            goto label_1533f0;
        }
    }
    ctx->pc = 0x1533A0u;
    // 0x1533a0: 0x16600036  bnez        $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x1533A0u;
    {
        const bool branch_taken_0x1533a0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1533a0) {
            ctx->pc = 0x15347Cu;
            goto label_15347c;
        }
    }
    ctx->pc = 0x1533A8u;
    // 0x1533a8: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1533A8u;
    {
        const bool branch_taken_0x1533a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1533a8) {
            ctx->pc = 0x1533F0u;
            goto label_1533f0;
        }
    }
    ctx->pc = 0x1533B0u;
    // 0x1533b0: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1533b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1533b4: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1533b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1533b8: 0xc054200  jal         func_150800
    ctx->pc = 0x1533B8u;
    SET_GPR_U32(ctx, 31, 0x1533C0u);
    ctx->pc = 0x150800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150800u, 0x1533B8u, 0x1533C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1533C0u;
label_1533c0:
    // 0x1533c0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1533c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1533c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1533c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1533c8: 0xc0541f0  jal         func_1507C0
    ctx->pc = 0x1533C8u;
    SET_GPR_U32(ctx, 31, 0x1533D0u);
    ctx->pc = 0x1507C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1507C0u, 0x1533C8u, 0x1533D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1533D0u;
label_1533d0:
    // 0x1533d0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1533d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1533d4: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x1533d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1533d8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1533d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1533dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1533dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1533e0: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x1533E0u;
    SET_GPR_U32(ctx, 31, 0x1533E8u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x1533E0u, 0x1533E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1533E8u;
label_1533e8:
    // 0x1533e8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1533E8u;
    {
        const bool branch_taken_0x1533e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1533e8) {
            ctx->pc = 0x15347Cu;
            goto label_15347c;
        }
    }
    ctx->pc = 0x1533F0u;
label_1533f0:
    // 0x1533f0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1533f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1533f4: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1533f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1533f8: 0xc054d60  jal         func_153580
    ctx->pc = 0x1533F8u;
    SET_GPR_U32(ctx, 31, 0x153400u);
    ctx->pc = 0x153580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153580u, 0x1533F8u, 0x153400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153400u;
label_153400:
    // 0x153400: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x153400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153404: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x153404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153408: 0xc0541e8  jal         func_1507A0
    ctx->pc = 0x153408u;
    SET_GPR_U32(ctx, 31, 0x153410u);
    ctx->pc = 0x1507A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1507A0u, 0x153408u, 0x153410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153410u;
label_153410:
    // 0x153410: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x153410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x153414: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x153414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x153418: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x153418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15341c: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15341Cu;
    {
        const bool branch_taken_0x15341c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x15341c) {
            ctx->pc = 0x15344Cu;
            goto label_15344c;
        }
    }
    ctx->pc = 0x153424u;
    // 0x153424: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x153424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x153428: 0xc0527a4  jal         func_149E90
    ctx->pc = 0x153428u;
    SET_GPR_U32(ctx, 31, 0x153430u);
    ctx->pc = 0x149E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149E90u, 0x153428u, 0x153430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153430u;
label_153430:
    // 0x153430: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x153430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x153434: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x153434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x153438: 0xc052794  jal         func_149E50
    ctx->pc = 0x153438u;
    SET_GPR_U32(ctx, 31, 0x153440u);
    ctx->pc = 0x149E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149E50u, 0x153438u, 0x153440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153440u;
label_153440:
    // 0x153440: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x153440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x153444: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x153444u;
    {
        const bool branch_taken_0x153444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153444) {
            ctx->pc = 0x1534C8u;
            goto label_1534c8;
        }
    }
    ctx->pc = 0x15344Cu;
label_15344c:
    // 0x15344c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x15344cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x153450: 0xc05279c  jal         func_149E70
    ctx->pc = 0x153450u;
    SET_GPR_U32(ctx, 31, 0x153458u);
    ctx->pc = 0x149E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149E70u, 0x153450u, 0x153458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153458u;
label_153458:
    // 0x153458: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x153458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15345c: 0x1622001a  bne         $s1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x15345Cu;
    {
        const bool branch_taken_0x15345c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x15345c) {
            ctx->pc = 0x1534C8u;
            goto label_1534c8;
        }
    }
    ctx->pc = 0x153464u;
    // 0x153464: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x153464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x153468: 0xc05279c  jal         func_149E70
    ctx->pc = 0x153468u;
    SET_GPR_U32(ctx, 31, 0x153470u);
    ctx->pc = 0x149E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149E70u, 0x153468u, 0x153470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153470u;
label_153470:
    // 0x153470: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x153470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x153474: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x153474u;
    {
        const bool branch_taken_0x153474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153474) {
            ctx->pc = 0x1534C8u;
            goto label_1534c8;
        }
    }
    ctx->pc = 0x15347Cu;
label_15347c:
    // 0x15347c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x15347cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x153480: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x153480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x153484: 0xc054d60  jal         func_153580
    ctx->pc = 0x153484u;
    SET_GPR_U32(ctx, 31, 0x15348Cu);
    ctx->pc = 0x153580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153580u, 0x153484u, 0x15348Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15348Cu;
label_15348c:
    // 0x15348c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15348cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153490: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x153490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153494: 0xc0541e0  jal         func_150780
    ctx->pc = 0x153494u;
    SET_GPR_U32(ctx, 31, 0x15349Cu);
    ctx->pc = 0x150780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150780u, 0x153494u, 0x15349Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15349Cu;
label_15349c:
    // 0x15349c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x15349cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1534a0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1534a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1534a4: 0xc052794  jal         func_149E50
    ctx->pc = 0x1534A4u;
    SET_GPR_U32(ctx, 31, 0x1534ACu);
    ctx->pc = 0x149E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149E50u, 0x1534A4u, 0x1534ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1534ACu;
label_1534ac:
    // 0x1534ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1534acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1534b0: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1534B0u;
    {
        const bool branch_taken_0x1534b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1534b0) {
            ctx->pc = 0x1534C8u;
            goto label_1534c8;
        }
    }
    ctx->pc = 0x1534B8u;
    // 0x1534b8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1534b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1534bc: 0xc052794  jal         func_149E50
    ctx->pc = 0x1534BCu;
    SET_GPR_U32(ctx, 31, 0x1534C4u);
    ctx->pc = 0x149E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149E50u, 0x1534BCu, 0x1534C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1534C4u;
label_1534c4:
    // 0x1534c4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1534c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_1534c8:
    // 0x1534c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1534c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1534cc: 0xc054d58  jal         func_153560
    ctx->pc = 0x1534CCu;
    SET_GPR_U32(ctx, 31, 0x1534D4u);
    ctx->pc = 0x153560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153560u, 0x1534CCu, 0x1534D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1534D4u;
label_1534d4:
    // 0x1534d4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1534d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1534d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1534d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1534dc: 0xc0541e8  jal         func_1507A0
    ctx->pc = 0x1534DCu;
    SET_GPR_U32(ctx, 31, 0x1534E4u);
    ctx->pc = 0x1507A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1507A0u, 0x1534DCu, 0x1534E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1534E4u;
label_1534e4:
    // 0x1534e4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1534e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1534e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1534e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1534ec: 0xc0541e0  jal         func_150780
    ctx->pc = 0x1534ECu;
    SET_GPR_U32(ctx, 31, 0x1534F4u);
    ctx->pc = 0x150780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150780u, 0x1534ECu, 0x1534F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1534F4u;
label_1534f4:
    // 0x1534f4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1534f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1534f8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1534f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1534fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1534fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153504: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x153504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x153508: 0xc042858  jal         func_10A160
    ctx->pc = 0x153508u;
    SET_GPR_U32(ctx, 31, 0x153510u);
    ctx->pc = 0x10A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A160u, 0x153508u, 0x153510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153510u;
label_153510:
    // 0x153510: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x153510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x153514: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x153514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x153518: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x153518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15351c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x15351cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x153520: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x153520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x153524: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x153524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153528: 0xc052a3c  jal         func_14A8F0
    ctx->pc = 0x153528u;
    SET_GPR_U32(ctx, 31, 0x153530u);
    ctx->pc = 0x14A8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A8F0u, 0x153528u, 0x153530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153530u;
label_153530:
    // 0x153530: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x153530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x153534: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x153534u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x153538: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x153538u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15353c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15353cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153540: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x153540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153544: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x153544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153548: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x153548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x15354c: 0x3e00008  jr          $ra
    ctx->pc = 0x15354Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15354Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153554u;
    // 0x153554: 0x0  nop
    ctx->pc = 0x153554u;
    // NOP
    // 0x153558: 0x0  nop
    ctx->pc = 0x153558u;
    // NOP
    // 0x15355c: 0x0  nop
    ctx->pc = 0x15355cu;
    // NOP
    ctx->pc = 0x153560u;
}
