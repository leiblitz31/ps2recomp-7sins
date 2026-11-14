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

// Function: sub_001183B0
// Address: 0x1183b0 - 0x1185c0
void sub_001183B0_0x1183b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001183B0_0x1183b0");
#endif

    switch (ctx->pc) {
        case 0x118420u: goto label_118420;
        case 0x118430u: goto label_118430;
        case 0x118448u: goto label_118448;
        case 0x118460u: goto label_118460;
        case 0x118470u: goto label_118470;
        case 0x118490u: goto label_118490;
        case 0x1184a0u: goto label_1184a0;
        case 0x1184b8u: goto label_1184b8;
        case 0x1184d0u: goto label_1184d0;
        case 0x1184ecu: goto label_1184ec;
        case 0x1184fcu: goto label_1184fc;
        case 0x11850cu: goto label_11850c;
        case 0x118524u: goto label_118524;
        case 0x118534u: goto label_118534;
        case 0x118544u: goto label_118544;
        case 0x118554u: goto label_118554;
        case 0x118570u: goto label_118570;
        case 0x118590u: goto label_118590;
        default: break;
    }

    ctx->pc = 0x1183b0u;

    // 0x1183b0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1183b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1183b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1183b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1183b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1183b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1183bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1183bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1183c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1183c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1183c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1183c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1183c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1183c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1183cc: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1183ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x1183d0: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x1183d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x1183d4: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x1183d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x1183d8: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x1183d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x1183dc: 0xafa800b0  sw          $t0, 0xB0($sp)
    ctx->pc = 0x1183dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 8));
    // 0x1183e0: 0xafa900c0  sw          $t1, 0xC0($sp)
    ctx->pc = 0x1183e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 9));
    // 0x1183e4: 0x8fb300c0  lw          $s3, 0xC0($sp)
    ctx->pc = 0x1183e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1183e8: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x1183e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1183ec: 0x8fb100a0  lw          $s1, 0xA0($sp)
    ctx->pc = 0x1183ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1183f0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1183f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1183f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1183f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1183f8: 0x12220015  beq         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1183F8u;
    {
        const bool branch_taken_0x1183f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1183f8) {
            ctx->pc = 0x118450u;
            goto label_118450;
        }
    }
    ctx->pc = 0x118400u;
    // 0x118400: 0x16600036  bnez        $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x118400u;
    {
        const bool branch_taken_0x118400 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x118400) {
            ctx->pc = 0x1184DCu;
            goto label_1184dc;
        }
    }
    ctx->pc = 0x118408u;
    // 0x118408: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x118408u;
    {
        const bool branch_taken_0x118408 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x118408) {
            ctx->pc = 0x118450u;
            goto label_118450;
        }
    }
    ctx->pc = 0x118410u;
    // 0x118410: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x118410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x118414: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x118414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x118418: 0xc045ed8  jal         func_117B60
    ctx->pc = 0x118418u;
    SET_GPR_U32(ctx, 31, 0x118420u);
    ctx->pc = 0x117B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B60u, 0x118418u, 0x118420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118420u;
label_118420:
    // 0x118420: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x118420u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x118424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118428: 0xc045ec8  jal         func_117B20
    ctx->pc = 0x118428u;
    SET_GPR_U32(ctx, 31, 0x118430u);
    ctx->pc = 0x117B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B20u, 0x118428u, 0x118430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118430u;
label_118430:
    // 0x118430: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x118430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x118434: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x118434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x118438: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x118438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11843c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11843cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118440: 0xc045ebc  jal         func_117AF0
    ctx->pc = 0x118440u;
    SET_GPR_U32(ctx, 31, 0x118448u);
    ctx->pc = 0x117AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117AF0u, 0x118440u, 0x118448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118448u;
label_118448:
    // 0x118448: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x118448u;
    {
        const bool branch_taken_0x118448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x118448) {
            ctx->pc = 0x1184DCu;
            goto label_1184dc;
        }
    }
    ctx->pc = 0x118450u;
label_118450:
    // 0x118450: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x118450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x118454: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x118454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x118458: 0xc046178  jal         func_1185E0
    ctx->pc = 0x118458u;
    SET_GPR_U32(ctx, 31, 0x118460u);
    ctx->pc = 0x1185E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1185E0u, 0x118458u, 0x118460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118460u;
label_118460:
    // 0x118460: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x118460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118464: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x118464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118468: 0xc045eb4  jal         func_117AD0
    ctx->pc = 0x118468u;
    SET_GPR_U32(ctx, 31, 0x118470u);
    ctx->pc = 0x117AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117AD0u, 0x118468u, 0x118470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118470u;
label_118470:
    // 0x118470: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x118470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x118474: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x118474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x118478: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x118478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11847c: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11847Cu;
    {
        const bool branch_taken_0x11847c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x11847c) {
            ctx->pc = 0x1184ACu;
            goto label_1184ac;
        }
    }
    ctx->pc = 0x118484u;
    // 0x118484: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x118484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x118488: 0xc045580  jal         func_115600
    ctx->pc = 0x118488u;
    SET_GPR_U32(ctx, 31, 0x118490u);
    ctx->pc = 0x115600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115600u, 0x118488u, 0x118490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118490u;
label_118490:
    // 0x118490: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x118490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x118494: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x118494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x118498: 0xc045570  jal         func_1155C0
    ctx->pc = 0x118498u;
    SET_GPR_U32(ctx, 31, 0x1184A0u);
    ctx->pc = 0x1155C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1155C0u, 0x118498u, 0x1184A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1184A0u;
label_1184a0:
    // 0x1184a0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1184a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1184a4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1184A4u;
    {
        const bool branch_taken_0x1184a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1184a4) {
            ctx->pc = 0x118528u;
            goto label_118528;
        }
    }
    ctx->pc = 0x1184ACu;
label_1184ac:
    // 0x1184ac: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1184acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1184b0: 0xc045578  jal         func_1155E0
    ctx->pc = 0x1184B0u;
    SET_GPR_U32(ctx, 31, 0x1184B8u);
    ctx->pc = 0x1155E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1155E0u, 0x1184B0u, 0x1184B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1184B8u;
label_1184b8:
    // 0x1184b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1184b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1184bc: 0x1622001a  bne         $s1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1184BCu;
    {
        const bool branch_taken_0x1184bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1184bc) {
            ctx->pc = 0x118528u;
            goto label_118528;
        }
    }
    ctx->pc = 0x1184C4u;
    // 0x1184c4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1184c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1184c8: 0xc045578  jal         func_1155E0
    ctx->pc = 0x1184C8u;
    SET_GPR_U32(ctx, 31, 0x1184D0u);
    ctx->pc = 0x1155E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1155E0u, 0x1184C8u, 0x1184D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1184D0u;
label_1184d0:
    // 0x1184d0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1184d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1184d4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1184D4u;
    {
        const bool branch_taken_0x1184d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1184d4) {
            ctx->pc = 0x118528u;
            goto label_118528;
        }
    }
    ctx->pc = 0x1184DCu;
label_1184dc:
    // 0x1184dc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1184dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1184e0: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1184e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1184e4: 0xc046178  jal         func_1185E0
    ctx->pc = 0x1184E4u;
    SET_GPR_U32(ctx, 31, 0x1184ECu);
    ctx->pc = 0x1185E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1185E0u, 0x1184E4u, 0x1184ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1184ECu;
label_1184ec:
    // 0x1184ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1184ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1184f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1184f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1184f4: 0xc045eac  jal         func_117AB0
    ctx->pc = 0x1184F4u;
    SET_GPR_U32(ctx, 31, 0x1184FCu);
    ctx->pc = 0x117AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117AB0u, 0x1184F4u, 0x1184FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1184FCu;
label_1184fc:
    // 0x1184fc: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1184fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x118500: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x118500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x118504: 0xc045570  jal         func_1155C0
    ctx->pc = 0x118504u;
    SET_GPR_U32(ctx, 31, 0x11850Cu);
    ctx->pc = 0x1155C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1155C0u, 0x118504u, 0x11850Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11850Cu;
label_11850c:
    // 0x11850c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11850cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x118510: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x118510u;
    {
        const bool branch_taken_0x118510 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x118510) {
            ctx->pc = 0x118528u;
            goto label_118528;
        }
    }
    ctx->pc = 0x118518u;
    // 0x118518: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x118518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11851c: 0xc045570  jal         func_1155C0
    ctx->pc = 0x11851Cu;
    SET_GPR_U32(ctx, 31, 0x118524u);
    ctx->pc = 0x1155C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1155C0u, 0x11851Cu, 0x118524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118524u;
label_118524:
    // 0x118524: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x118524u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_118528:
    // 0x118528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11852c: 0xc046170  jal         func_1185C0
    ctx->pc = 0x11852Cu;
    SET_GPR_U32(ctx, 31, 0x118534u);
    ctx->pc = 0x1185C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1185C0u, 0x11852Cu, 0x118534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118534u;
label_118534:
    // 0x118534: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x118534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x118538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11853c: 0xc045eb4  jal         func_117AD0
    ctx->pc = 0x11853Cu;
    SET_GPR_U32(ctx, 31, 0x118544u);
    ctx->pc = 0x117AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117AD0u, 0x11853Cu, 0x118544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118544u;
label_118544:
    // 0x118544: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x118544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x118548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11854c: 0xc045eac  jal         func_117AB0
    ctx->pc = 0x11854Cu;
    SET_GPR_U32(ctx, 31, 0x118554u);
    ctx->pc = 0x117AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117AB0u, 0x11854Cu, 0x118554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118554u;
label_118554:
    // 0x118554: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x118554u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x118558: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x118558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11855c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11855cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x118560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118564: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x118564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x118568: 0xc042858  jal         func_10A160
    ctx->pc = 0x118568u;
    SET_GPR_U32(ctx, 31, 0x118570u);
    ctx->pc = 0x10A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A160u, 0x118568u, 0x118570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118570u;
label_118570:
    // 0x118570: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x118570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x118574: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x118574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x118578: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x118578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11857c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x11857cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x118580: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x118580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x118584: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x118584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118588: 0xc045ea0  jal         func_117A80
    ctx->pc = 0x118588u;
    SET_GPR_U32(ctx, 31, 0x118590u);
    ctx->pc = 0x117A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A80u, 0x118588u, 0x118590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118590u;
label_118590:
    // 0x118590: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x118590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x118594: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x118594u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118598: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x118598u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11859c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11859cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1185a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1185a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1185a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1185a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1185a8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x1185a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1185ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1185ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1185ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1185B4u;
    // 0x1185b4: 0x0  nop
    ctx->pc = 0x1185b4u;
    // NOP
    // 0x1185b8: 0x0  nop
    ctx->pc = 0x1185b8u;
    // NOP
    // 0x1185bc: 0x0  nop
    ctx->pc = 0x1185bcu;
    // NOP
    ctx->pc = 0x1185c0u;
}
