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

// Function: sub_0027D3A0
// Address: 0x27d3a0 - 0x27d680
void sub_0027D3A0_0x27d3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D3A0_0x27d3a0");
#endif

    switch (ctx->pc) {
        case 0x27d3e0u: goto label_27d3e0;
        case 0x27d404u: goto label_27d404;
        case 0x27d420u: goto label_27d420;
        case 0x27d43cu: goto label_27d43c;
        case 0x27d448u: goto label_27d448;
        case 0x27d458u: goto label_27d458;
        case 0x27d46cu: goto label_27d46c;
        case 0x27d480u: goto label_27d480;
        case 0x27d490u: goto label_27d490;
        case 0x27d4a0u: goto label_27d4a0;
        case 0x27d4b0u: goto label_27d4b0;
        case 0x27d4bcu: goto label_27d4bc;
        case 0x27d4d8u: goto label_27d4d8;
        case 0x27d4f0u: goto label_27d4f0;
        case 0x27d50cu: goto label_27d50c;
        case 0x27d514u: goto label_27d514;
        case 0x27d528u: goto label_27d528;
        case 0x27d538u: goto label_27d538;
        case 0x27d554u: goto label_27d554;
        case 0x27d564u: goto label_27d564;
        case 0x27d574u: goto label_27d574;
        case 0x27d584u: goto label_27d584;
        case 0x27d590u: goto label_27d590;
        case 0x27d5acu: goto label_27d5ac;
        case 0x27d5c4u: goto label_27d5c4;
        case 0x27d5e0u: goto label_27d5e0;
        case 0x27d5e8u: goto label_27d5e8;
        case 0x27d5fcu: goto label_27d5fc;
        case 0x27d60cu: goto label_27d60c;
        case 0x27d648u: goto label_27d648;
        default: break;
    }

    ctx->pc = 0x27d3a0u;

    // 0x27d3a0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x27d3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x27d3a4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x27d3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x27d3a8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x27d3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x27d3ac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x27d3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x27d3b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x27d3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x27d3b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27d3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x27d3b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27d3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x27d3bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27d3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27d3c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27d3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27d3c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27d3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27d3c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27d3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27d3cc: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x27d3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
    // 0x27d3d0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x27d3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27d3d4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x27d3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x27d3d8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27D3D8u;
    SET_GPR_U32(ctx, 31, 0x27D3E0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27D3D8u, 0x27D3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D3E0u;
label_27d3e0:
    // 0x27d3e0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x27d3e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d3e4: 0x16c00004  bnez        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x27D3E4u;
    {
        const bool branch_taken_0x27d3e4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d3e4) {
            ctx->pc = 0x27D3F8u;
            goto label_27d3f8;
        }
    }
    ctx->pc = 0x27D3ECu;
    // 0x27d3ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27d3f0: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x27D3F0u;
    {
        const bool branch_taken_0x27d3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d3f0) {
            ctx->pc = 0x27D64Cu;
            goto label_27d64c;
        }
    }
    ctx->pc = 0x27D3F8u;
label_27d3f8:
    // 0x27d3f8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x27d3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x27d3fc: 0xc0480a4  jal         func_120290
    ctx->pc = 0x27D3FCu;
    SET_GPR_U32(ctx, 31, 0x27D404u);
    ctx->pc = 0x120290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120290u, 0x27D3FCu, 0x27D404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D404u;
label_27d404:
    // 0x27d404: 0x16c00009  bnez        $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x27D404u;
    {
        const bool branch_taken_0x27d404 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d404) {
            ctx->pc = 0x27D42Cu;
            goto label_27d42c;
        }
    }
    ctx->pc = 0x27D40Cu;
    // 0x27d40c: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x27d40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x27d410: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x27d410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x27d414: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x27d414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27d418: 0xc048004  jal         func_120010
    ctx->pc = 0x27D418u;
    SET_GPR_U32(ctx, 31, 0x27D420u);
    ctx->pc = 0x120010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120010u, 0x27D418u, 0x27D420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D420u;
label_27d420:
    // 0x27d420: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x27d420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x27d424: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x27D424u;
    {
        const bool branch_taken_0x27d424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d424) {
            ctx->pc = 0x27D64Cu;
            goto label_27d64c;
        }
    }
    ctx->pc = 0x27D42Cu;
label_27d42c:
    // 0x27d42c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27d42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d430: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x27d430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x27d434: 0xc09adac  jal         func_26B6B0
    ctx->pc = 0x27D434u;
    SET_GPR_U32(ctx, 31, 0x27D43Cu);
    ctx->pc = 0x26B6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B6B0u, 0x27D434u, 0x27D43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D43Cu;
label_27d43c:
    // 0x27d43c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x27d43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x27d440: 0xc0683d8  jal         func_1A0F60
    ctx->pc = 0x27D440u;
    SET_GPR_U32(ctx, 31, 0x27D448u);
    ctx->pc = 0x1A0F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0F60u, 0x27D440u, 0x27D448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D448u;
label_27d448:
    // 0x27d448: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x27d448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x27d44c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x27d44cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d450: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x27D450u;
    {
        const bool branch_taken_0x27d450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d450) {
            ctx->pc = 0x27D620u;
            goto label_27d620;
        }
    }
    ctx->pc = 0x27D458u;
label_27d458:
    // 0x27d458: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x27d458u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d45c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x27d45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x27d460: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27d460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d464: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x27D464u;
    SET_GPR_U32(ctx, 31, 0x27D46Cu);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x27D464u, 0x27D46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D46Cu;
label_27d46c:
    // 0x27d46c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27d470: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x27d470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x27d474: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x27d474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x27d478: 0xc041a70  jal         func_1069C0
    ctx->pc = 0x27D478u;
    SET_GPR_U32(ctx, 31, 0x27D480u);
    ctx->pc = 0x1069C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069C0u, 0x27D478u, 0x27D480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D480u;
label_27d480:
    // 0x27d480: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x27d480u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d484: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27d484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d488: 0xc048bb4  jal         func_122ED0
    ctx->pc = 0x27D488u;
    SET_GPR_U32(ctx, 31, 0x27D490u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x27D488u, 0x27D490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D490u;
label_27d490:
    // 0x27d490: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27d490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d494: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27d494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d498: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x27D498u;
    {
        const bool branch_taken_0x27d498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d498) {
            ctx->pc = 0x27D53Cu;
            goto label_27d53c;
        }
    }
    ctx->pc = 0x27D4A0u;
label_27d4a0:
    // 0x27d4a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27d4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d4a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27d4a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d4a8: 0xc068c94  jal         func_1A3250
    ctx->pc = 0x27D4A8u;
    SET_GPR_U32(ctx, 31, 0x27D4B0u);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x27D4A8u, 0x27D4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D4B0u;
label_27d4b0:
    // 0x27d4b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27d4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27d4b4: 0xc09d0b8  jal         func_2742E0
    ctx->pc = 0x27D4B4u;
    SET_GPR_U32(ctx, 31, 0x27D4BCu);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x27D4B4u, 0x27D4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D4BCu;
label_27d4bc:
    // 0x27d4bc: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x27d4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x27d4c0: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x27D4C0u;
    {
        const bool branch_taken_0x27d4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27d4c0) {
            ctx->pc = 0x27D538u;
            goto label_27d538;
        }
    }
    ctx->pc = 0x27D4C8u;
    // 0x27d4c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27d4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d4cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27d4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d4d0: 0xc068c94  jal         func_1A3250
    ctx->pc = 0x27D4D0u;
    SET_GPR_U32(ctx, 31, 0x27D4D8u);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x27D4D0u, 0x27D4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D4D8u;
label_27d4d8:
    // 0x27d4d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27d4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27d4dc: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x27d4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x27d4e0: 0x24a5d340  addiu       $a1, $a1, -0x2CC0
    ctx->pc = 0x27d4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955840));
    // 0x27d4e4: 0x2786a224  addiu       $a2, $gp, -0x5DDC
    ctx->pc = 0x27d4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943268));
    // 0x27d4e8: 0xc04206c  jal         func_1081B0
    ctx->pc = 0x27D4E8u;
    SET_GPR_U32(ctx, 31, 0x27D4F0u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x27D4E8u, 0x27D4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D4F0u;
label_27d4f0:
    // 0x27d4f0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x27d4f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d4f4: 0x13c00010  beqz        $fp, . + 4 + (0x10 << 2)
    ctx->pc = 0x27D4F4u;
    {
        const bool branch_taken_0x27d4f4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d4f4) {
            ctx->pc = 0x27D538u;
            goto label_27d538;
        }
    }
    ctx->pc = 0x27D4FCu;
    // 0x27d4fc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x27d4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x27d500: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x27d500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d504: 0xc040304  jal         func_100C10
    ctx->pc = 0x27D504u;
    SET_GPR_U32(ctx, 31, 0x27D50Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x27D504u, 0x27D50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D50Cu;
label_27d50c:
    // 0x27d50c: 0xc122470  jal         func_4891C0
    ctx->pc = 0x27D50Cu;
    SET_GPR_U32(ctx, 31, 0x27D514u);
    ctx->pc = 0x4891C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891C0u, 0x27D50Cu, 0x27D514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D514u;
label_27d514:
    // 0x27d514: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d518: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x27d518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x27d51c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27d51cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d520: 0xc123a28  jal         func_48E8A0
    ctx->pc = 0x27D520u;
    SET_GPR_U32(ctx, 31, 0x27D528u);
    ctx->pc = 0x48E8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E8A0u, 0x27D520u, 0x27D528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D528u;
label_27d528:
    // 0x27d528: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x27d528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x27d52c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x27d52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27d530: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x27D530u;
    SET_GPR_U32(ctx, 31, 0x27D538u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x27D530u, 0x27D538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D538u;
label_27d538:
    // 0x27d538: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27d538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_27d53c:
    // 0x27d53c: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x27d53cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x27d540: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x27D540u;
    {
        const bool branch_taken_0x27d540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d540) {
            ctx->pc = 0x27D4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d4a0;
        }
    }
    ctx->pc = 0x27D548u;
    // 0x27d548: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x27d548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x27d54c: 0xc041a68  jal         func_1069A0
    ctx->pc = 0x27D54Cu;
    SET_GPR_U32(ctx, 31, 0x27D554u);
    ctx->pc = 0x1069A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069A0u, 0x27D54Cu, 0x27D554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D554u;
label_27d554:
    // 0x27d554: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x27d554u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d558: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27d558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d55c: 0xc048bb4  jal         func_122ED0
    ctx->pc = 0x27D55Cu;
    SET_GPR_U32(ctx, 31, 0x27D564u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x27D55Cu, 0x27D564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D564u;
label_27d564:
    // 0x27d564: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27d564u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d568: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27d568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d56c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x27D56Cu;
    {
        const bool branch_taken_0x27d56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d56c) {
            ctx->pc = 0x27D610u;
            goto label_27d610;
        }
    }
    ctx->pc = 0x27D574u;
label_27d574:
    // 0x27d574: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27d574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d578: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27d578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d57c: 0xc068c94  jal         func_1A3250
    ctx->pc = 0x27D57Cu;
    SET_GPR_U32(ctx, 31, 0x27D584u);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x27D57Cu, 0x27D584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D584u;
label_27d584:
    // 0x27d584: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27d584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27d588: 0xc09d0b8  jal         func_2742E0
    ctx->pc = 0x27D588u;
    SET_GPR_U32(ctx, 31, 0x27D590u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x27D588u, 0x27D590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D590u;
label_27d590:
    // 0x27d590: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x27d590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x27d594: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x27D594u;
    {
        const bool branch_taken_0x27d594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27d594) {
            ctx->pc = 0x27D60Cu;
            goto label_27d60c;
        }
    }
    ctx->pc = 0x27D59Cu;
    // 0x27d59c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27d59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d5a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27d5a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d5a4: 0xc068c94  jal         func_1A3250
    ctx->pc = 0x27D5A4u;
    SET_GPR_U32(ctx, 31, 0x27D5ACu);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x27D5A4u, 0x27D5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D5ACu;
label_27d5ac:
    // 0x27d5ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27d5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27d5b0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x27d5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x27d5b4: 0x24a5d340  addiu       $a1, $a1, -0x2CC0
    ctx->pc = 0x27d5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955840));
    // 0x27d5b8: 0x2786a224  addiu       $a2, $gp, -0x5DDC
    ctx->pc = 0x27d5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943268));
    // 0x27d5bc: 0xc04206c  jal         func_1081B0
    ctx->pc = 0x27D5BCu;
    SET_GPR_U32(ctx, 31, 0x27D5C4u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x27D5BCu, 0x27D5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D5C4u;
label_27d5c4:
    // 0x27d5c4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x27d5c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d5c8: 0x12e00010  beqz        $s7, . + 4 + (0x10 << 2)
    ctx->pc = 0x27D5C8u;
    {
        const bool branch_taken_0x27d5c8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d5c8) {
            ctx->pc = 0x27D60Cu;
            goto label_27d60c;
        }
    }
    ctx->pc = 0x27D5D0u;
    // 0x27d5d0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x27d5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x27d5d4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x27d5d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d5d8: 0xc040304  jal         func_100C10
    ctx->pc = 0x27D5D8u;
    SET_GPR_U32(ctx, 31, 0x27D5E0u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x27D5D8u, 0x27D5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D5E0u;
label_27d5e0:
    // 0x27d5e0: 0xc122470  jal         func_4891C0
    ctx->pc = 0x27D5E0u;
    SET_GPR_U32(ctx, 31, 0x27D5E8u);
    ctx->pc = 0x4891C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891C0u, 0x27D5E0u, 0x27D5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D5E8u;
label_27d5e8:
    // 0x27d5e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d5ec: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x27d5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x27d5f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27d5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d5f4: 0xc123a28  jal         func_48E8A0
    ctx->pc = 0x27D5F4u;
    SET_GPR_U32(ctx, 31, 0x27D5FCu);
    ctx->pc = 0x48E8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E8A0u, 0x27D5F4u, 0x27D5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D5FCu;
label_27d5fc:
    // 0x27d5fc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x27d5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x27d600: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x27d600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27d604: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x27D604u;
    SET_GPR_U32(ctx, 31, 0x27D60Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x27D604u, 0x27D60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D60Cu;
label_27d60c:
    // 0x27d60c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27d60cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_27d610:
    // 0x27d610: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x27d610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x27d614: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x27D614u;
    {
        const bool branch_taken_0x27d614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d614) {
            ctx->pc = 0x27D574u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d574;
        }
    }
    ctx->pc = 0x27D61Cu;
    // 0x27d61c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x27d61cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_27d620:
    // 0x27d620: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x27d620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x27d624: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x27d624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27d628: 0x1440ff8b  bnez        $v0, . + 4 + (-0x75 << 2)
    ctx->pc = 0x27D628u;
    {
        const bool branch_taken_0x27d628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d628) {
            ctx->pc = 0x27D458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d458;
        }
    }
    ctx->pc = 0x27D630u;
    // 0x27d630: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d634: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x27d634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x27d638: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x27d638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x27d63c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x27d63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27d640: 0xc048004  jal         func_120010
    ctx->pc = 0x27D640u;
    SET_GPR_U32(ctx, 31, 0x27D648u);
    ctx->pc = 0x120010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120010u, 0x27D640u, 0x27D648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D648u;
label_27d648:
    // 0x27d648: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x27d648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_27d64c:
    // 0x27d64c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x27d64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27d650: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x27d650u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27d654: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x27d654u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27d658: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x27d658u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27d65c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27d65cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27d660: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27d660u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27d664: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27d664u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27d668: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27d668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27d66c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27d66cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d670: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27d670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d674: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x27d674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x27d678: 0x3e00008  jr          $ra
    ctx->pc = 0x27D678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D680u;
}
