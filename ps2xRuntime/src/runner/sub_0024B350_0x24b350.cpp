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

// Function: sub_0024B350
// Address: 0x24b350 - 0x24b5c0
void sub_0024B350_0x24b350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B350_0x24b350");
#endif

    switch (ctx->pc) {
        case 0x24b388u: goto label_24b388;
        case 0x24b3acu: goto label_24b3ac;
        case 0x24b3bcu: goto label_24b3bc;
        case 0x24b3c8u: goto label_24b3c8;
        case 0x24b3d4u: goto label_24b3d4;
        case 0x24b3e8u: goto label_24b3e8;
        case 0x24b3f0u: goto label_24b3f0;
        case 0x24b400u: goto label_24b400;
        case 0x24b418u: goto label_24b418;
        case 0x24b430u: goto label_24b430;
        case 0x24b44cu: goto label_24b44c;
        case 0x24b45cu: goto label_24b45c;
        case 0x24b470u: goto label_24b470;
        case 0x24b480u: goto label_24b480;
        case 0x24b498u: goto label_24b498;
        case 0x24b4a4u: goto label_24b4a4;
        case 0x24b4b8u: goto label_24b4b8;
        case 0x24b4c4u: goto label_24b4c4;
        case 0x24b4f0u: goto label_24b4f0;
        case 0x24b500u: goto label_24b500;
        case 0x24b514u: goto label_24b514;
        case 0x24b528u: goto label_24b528;
        case 0x24b548u: goto label_24b548;
        case 0x24b56cu: goto label_24b56c;
        case 0x24b580u: goto label_24b580;
        case 0x24b594u: goto label_24b594;
        default: break;
    }

    ctx->pc = 0x24b350u;

    // 0x24b350: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x24b350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x24b354: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x24b354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x24b358: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x24b358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x24b35c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24b35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x24b360: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24b360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x24b364: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24b364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24b368: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24b368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24b36c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24b36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24b370: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x24b370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x24b374: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x24b374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x24b378: 0xa3a600a0  sb          $a2, 0xA0($sp)
    ctx->pc = 0x24b378u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 6));
    // 0x24b37c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x24b37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24b380: 0xc085530  jal         func_2154C0
    ctx->pc = 0x24B380u;
    SET_GPR_U32(ctx, 31, 0x24B388u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x24B380u, 0x24B388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B388u;
label_24b388:
    // 0x24b388: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x24b388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x24b38c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B38Cu;
    {
        const bool branch_taken_0x24b38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x24b38c) {
            ctx->pc = 0x24B39Cu;
            goto label_24b39c;
        }
    }
    ctx->pc = 0x24B394u;
    // 0x24b394: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x24B394u;
    {
        const bool branch_taken_0x24b394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b394) {
            ctx->pc = 0x24B534u;
            goto label_24b534;
        }
    }
    ctx->pc = 0x24B39Cu;
label_24b39c:
    // 0x24b39c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x24b39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24b3a0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x24b3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x24b3a4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x24B3A4u;
    SET_GPR_U32(ctx, 31, 0x24B3ACu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x24B3A4u, 0x24B3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B3ACu;
label_24b3ac:
    // 0x24b3ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24b3acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b3b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24b3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b3b4: 0xc091ca8  jal         func_2472A0
    ctx->pc = 0x24B3B4u;
    SET_GPR_U32(ctx, 31, 0x24B3BCu);
    ctx->pc = 0x2472A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2472A0u, 0x24B3B4u, 0x24B3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B3BCu;
label_24b3bc:
    // 0x24b3bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24b3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b3c0: 0xc041010  jal         func_104040
    ctx->pc = 0x24B3C0u;
    SET_GPR_U32(ctx, 31, 0x24B3C8u);
    ctx->pc = 0x104040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104040u, 0x24B3C0u, 0x24B3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B3C8u;
label_24b3c8:
    // 0x24b3c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24b3c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b3cc: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x24B3CCu;
    {
        const bool branch_taken_0x24b3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b3cc) {
            ctx->pc = 0x24B48Cu;
            goto label_24b48c;
        }
    }
    ctx->pc = 0x24B3D4u;
label_24b3d4:
    // 0x24b3d4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x24b3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24b3d8: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x24b3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x24b3dc: 0x2445004c  addiu       $a1, $v0, 0x4C
    ctx->pc = 0x24b3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x24b3e0: 0xc064064  jal         func_190190
    ctx->pc = 0x24B3E0u;
    SET_GPR_U32(ctx, 31, 0x24B3E8u);
    ctx->pc = 0x190190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190190u, 0x24B3E0u, 0x24B3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B3E8u;
label_24b3e8:
    // 0x24b3e8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x24B3E8u;
    {
        const bool branch_taken_0x24b3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b3e8) {
            ctx->pc = 0x24B45Cu;
            goto label_24b45c;
        }
    }
    ctx->pc = 0x24B3F0u;
label_24b3f0:
    // 0x24b3f0: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x24b3f0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24b3f4: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x24b3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x24b3f8: 0xc054648  jal         func_151920
    ctx->pc = 0x24B3F8u;
    SET_GPR_U32(ctx, 31, 0x24B400u);
    ctx->pc = 0x151920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151920u, 0x24B3F8u, 0x24B400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B400u;
label_24b400:
    // 0x24b400: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24b400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24b404: 0x16a20012  bne         $s5, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x24B404u;
    {
        const bool branch_taken_0x24b404 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x24b404) {
            ctx->pc = 0x24B450u;
            goto label_24b450;
        }
    }
    ctx->pc = 0x24B40Cu;
    // 0x24b40c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x24b40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x24b410: 0xc053b9c  jal         func_14EE70
    ctx->pc = 0x24B410u;
    SET_GPR_U32(ctx, 31, 0x24B418u);
    ctx->pc = 0x14EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE70u, 0x24B410u, 0x24B418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B418u;
label_24b418:
    // 0x24b418: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x24b418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x24b41c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x24b41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x24b420: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x24b420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x24b424: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x24b424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x24b428: 0xc053b9c  jal         func_14EE70
    ctx->pc = 0x24B428u;
    SET_GPR_U32(ctx, 31, 0x24B430u);
    ctx->pc = 0x14EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE70u, 0x24B428u, 0x24B430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B430u;
label_24b430:
    // 0x24b430: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x24b430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x24b434: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x24b434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x24b438: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x24b438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24b43c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x24b43cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x24b440: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x24b440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x24b444: 0xc053b9c  jal         func_14EE70
    ctx->pc = 0x24B444u;
    SET_GPR_U32(ctx, 31, 0x24B44Cu);
    ctx->pc = 0x14EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE70u, 0x24B444u, 0x24B44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B44Cu;
label_24b44c:
    // 0x24b44c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x24b44cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_24b450:
    // 0x24b450: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x24b450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x24b454: 0xc064054  jal         func_190150
    ctx->pc = 0x24B454u;
    SET_GPR_U32(ctx, 31, 0x24B45Cu);
    ctx->pc = 0x190150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190150u, 0x24B454u, 0x24B45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B45Cu;
label_24b45c:
    // 0x24b45c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x24b45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24b460: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x24b460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x24b464: 0x2445004c  addiu       $a1, $v0, 0x4C
    ctx->pc = 0x24b464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x24b468: 0xc053ba4  jal         func_14EE90
    ctx->pc = 0x24B468u;
    SET_GPR_U32(ctx, 31, 0x24B470u);
    ctx->pc = 0x14EE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE90u, 0x24B468u, 0x24B470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B470u;
label_24b470:
    // 0x24b470: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x24b470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x24b474: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x24b474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x24b478: 0xc041998  jal         func_106660
    ctx->pc = 0x24B478u;
    SET_GPR_U32(ctx, 31, 0x24B480u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x24B478u, 0x24B480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B480u;
label_24b480:
    // 0x24b480: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x24B480u;
    {
        const bool branch_taken_0x24b480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b480) {
            ctx->pc = 0x24B3F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24b3f0;
        }
    }
    ctx->pc = 0x24B488u;
    // 0x24b488: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x24b488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_24b48c:
    // 0x24b48c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24b48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b490: 0xc091ca8  jal         func_2472A0
    ctx->pc = 0x24B490u;
    SET_GPR_U32(ctx, 31, 0x24B498u);
    ctx->pc = 0x2472A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2472A0u, 0x24B490u, 0x24B498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B498u;
label_24b498:
    // 0x24b498: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24b498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b49c: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x24B49Cu;
    SET_GPR_U32(ctx, 31, 0x24B4A4u);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x24B49Cu, 0x24B4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B4A4u;
label_24b4a4:
    // 0x24b4a4: 0x1602ffcb  bne         $s0, $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x24B4A4u;
    {
        const bool branch_taken_0x24b4a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x24b4a4) {
            ctx->pc = 0x24B3D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24b3d4;
        }
    }
    ctx->pc = 0x24B4ACu;
    // 0x24b4ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24b4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b4b0: 0xc091ca8  jal         func_2472A0
    ctx->pc = 0x24B4B0u;
    SET_GPR_U32(ctx, 31, 0x24B4B8u);
    ctx->pc = 0x2472A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2472A0u, 0x24B4B0u, 0x24B4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B4B8u;
label_24b4b8:
    // 0x24b4b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24b4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b4bc: 0xc053cd4  jal         func_14F350
    ctx->pc = 0x24B4BCu;
    SET_GPR_U32(ctx, 31, 0x24B4C4u);
    ctx->pc = 0x14F350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F350u, 0x24B4BCu, 0x24B4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B4C4u;
label_24b4c4:
    // 0x24b4c4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x24b4c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24b4c8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x24b4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24b4cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24b4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b4d0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24B4D0u;
    {
        const bool branch_taken_0x24b4d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24b4d0) {
            ctx->pc = 0x24B4F0u;
            goto label_24b4f0;
        }
    }
    ctx->pc = 0x24B4D8u;
    // 0x24b4d8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x24b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24b4dc: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x24b4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x24b4e0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x24b4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24b4e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24b4e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b4e8: 0xc0913a0  jal         func_244E80
    ctx->pc = 0x24B4E8u;
    SET_GPR_U32(ctx, 31, 0x24B4F0u);
    ctx->pc = 0x244E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E80u, 0x24B4E8u, 0x24B4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B4F0u;
label_24b4f0:
    // 0x24b4f0: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x24b4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24b4f4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x24b4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x24b4f8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x24B4F8u;
    SET_GPR_U32(ctx, 31, 0x24B500u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x24B4F8u, 0x24B500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B500u;
label_24b500:
    // 0x24b500: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x24b500u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b504: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24b504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b508: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24b508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b50c: 0xc09102c  jal         func_2440B0
    ctx->pc = 0x24B50Cu;
    SET_GPR_U32(ctx, 31, 0x24B514u);
    ctx->pc = 0x2440B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2440B0u, 0x24B50Cu, 0x24B514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B514u;
label_24b514:
    // 0x24b514: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24b514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b518: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x24b518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x24b51c: 0x24a5c158  addiu       $a1, $a1, -0x3EA8
    ctx->pc = 0x24b51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951256));
    // 0x24b520: 0xc09106c  jal         func_2441B0
    ctx->pc = 0x24B520u;
    SET_GPR_U32(ctx, 31, 0x24B528u);
    ctx->pc = 0x2441B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2441B0u, 0x24B520u, 0x24B528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B528u;
label_24b528:
    // 0x24b528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24b528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b52c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x24B52Cu;
    {
        const bool branch_taken_0x24b52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b52c) {
            ctx->pc = 0x24B598u;
            goto label_24b598;
        }
    }
    ctx->pc = 0x24B534u;
label_24b534:
    // 0x24b534: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x24b534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24b538: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24b538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24b53c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x24b53cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24b540: 0xc0945c4  jal         func_251710
    ctx->pc = 0x24B540u;
    SET_GPR_U32(ctx, 31, 0x24B548u);
    ctx->pc = 0x251710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251710u, 0x24B540u, 0x24B548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B548u;
label_24b548:
    // 0x24b548: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x24b548u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24b54c: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x24b54cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x24b550: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24b550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b554: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x24B554u;
    {
        const bool branch_taken_0x24b554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24b554) {
            ctx->pc = 0x24B594u;
            goto label_24b594;
        }
    }
    ctx->pc = 0x24B55Cu;
    // 0x24b55c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x24b55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24b560: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x24b560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x24b564: 0xc085538  jal         func_2154E0
    ctx->pc = 0x24B564u;
    SET_GPR_U32(ctx, 31, 0x24B56Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x24B564u, 0x24B56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B56Cu;
label_24b56c:
    // 0x24b56c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24b56cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b570: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24b570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b574: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24b574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b578: 0xc09102c  jal         func_2440B0
    ctx->pc = 0x24B578u;
    SET_GPR_U32(ctx, 31, 0x24B580u);
    ctx->pc = 0x2440B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2440B0u, 0x24B578u, 0x24B580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B580u;
label_24b580:
    // 0x24b580: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24b580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b584: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x24b584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x24b588: 0x24a5c168  addiu       $a1, $a1, -0x3E98
    ctx->pc = 0x24b588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951272));
    // 0x24b58c: 0xc09106c  jal         func_2441B0
    ctx->pc = 0x24B58Cu;
    SET_GPR_U32(ctx, 31, 0x24B594u);
    ctx->pc = 0x2441B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2441B0u, 0x24B58Cu, 0x24B594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B594u;
label_24b594:
    // 0x24b594: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x24b594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24b598:
    // 0x24b598: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x24b598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24b59c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x24b59cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24b5a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24b5a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24b5a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24b5a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24b5a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24b5a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24b5ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24b5acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b5b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24b5b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b5b4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x24b5b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x24b5b8: 0x3e00008  jr          $ra
    ctx->pc = 0x24B5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B5B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B5C0u;
}
