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

// Function: sub_00112320
// Address: 0x112320 - 0x112970
void sub_00112320_0x112320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112320_0x112320");
#endif

    switch (ctx->pc) {
        case 0x112370u: goto label_112370;
        case 0x11238cu: goto label_11238c;
        case 0x11239cu: goto label_11239c;
        case 0x1123b4u: goto label_1123b4;
        case 0x1123c8u: goto label_1123c8;
        case 0x1123e0u: goto label_1123e0;
        case 0x112410u: goto label_112410;
        case 0x11242cu: goto label_11242c;
        case 0x112440u: goto label_112440;
        case 0x112458u: goto label_112458;
        case 0x112478u: goto label_112478;
        case 0x112490u: goto label_112490;
        case 0x11249cu: goto label_11249c;
        case 0x1124d8u: goto label_1124d8;
        case 0x1124f4u: goto label_1124f4;
        case 0x112504u: goto label_112504;
        case 0x11251cu: goto label_11251c;
        case 0x112534u: goto label_112534;
        case 0x112568u: goto label_112568;
        case 0x112594u: goto label_112594;
        case 0x1125b4u: goto label_1125b4;
        case 0x1125c4u: goto label_1125c4;
        case 0x1125f0u: goto label_1125f0;
        case 0x1125fcu: goto label_1125fc;
        case 0x112610u: goto label_112610;
        case 0x112628u: goto label_112628;
        case 0x11263cu: goto label_11263c;
        case 0x112660u: goto label_112660;
        case 0x112680u: goto label_112680;
        case 0x112690u: goto label_112690;
        case 0x1126a8u: goto label_1126a8;
        case 0x1126b4u: goto label_1126b4;
        case 0x1126c4u: goto label_1126c4;
        case 0x1126d8u: goto label_1126d8;
        case 0x1126f0u: goto label_1126f0;
        case 0x112708u: goto label_112708;
        case 0x11271cu: goto label_11271c;
        case 0x112734u: goto label_112734;
        case 0x112748u: goto label_112748;
        case 0x112774u: goto label_112774;
        case 0x1127a8u: goto label_1127a8;
        case 0x1127c4u: goto label_1127c4;
        case 0x1127d0u: goto label_1127d0;
        case 0x1127f4u: goto label_1127f4;
        case 0x112808u: goto label_112808;
        case 0x112820u: goto label_112820;
        case 0x112858u: goto label_112858;
        case 0x112868u: goto label_112868;
        case 0x112880u: goto label_112880;
        case 0x112898u: goto label_112898;
        case 0x1128ccu: goto label_1128cc;
        case 0x1128f8u: goto label_1128f8;
        case 0x112924u: goto label_112924;
        case 0x112940u: goto label_112940;
        case 0x112950u: goto label_112950;
        default: break;
    }

    ctx->pc = 0x112320u;

    // 0x112320: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x112320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x112324: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x112324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x112328: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x112328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x11232c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11232cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x112330: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x112330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x112334: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x112334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x112338: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x112338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x11233c: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x11233cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x112340: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x112340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x112344: 0xafa700d0  sw          $a3, 0xD0($sp)
    ctx->pc = 0x112344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 7));
    // 0x112348: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x112348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x11234c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11234cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112350: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x112350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x112354: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x112354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112358: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x112358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11235c: 0x1462009b  bne         $v1, $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x11235Cu;
    {
        const bool branch_taken_0x11235c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11235c) {
            ctx->pc = 0x1125CCu;
            goto label_1125cc;
        }
    }
    ctx->pc = 0x112364u;
    // 0x112364: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x112364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x112368: 0xc044a84  jal         func_112A10
    ctx->pc = 0x112368u;
    SET_GPR_U32(ctx, 31, 0x112370u);
    ctx->pc = 0x112A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112A10u, 0x112368u, 0x112370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112370u;
label_112370:
    // 0x112370: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x112370u;
    {
        const bool branch_taken_0x112370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112370) {
            ctx->pc = 0x1123A4u;
            goto label_1123a4;
        }
    }
    ctx->pc = 0x112378u;
    // 0x112378: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x112378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x11237c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x11237cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x112380: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x112380u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x112384: 0xc044ab8  jal         func_112AE0
    ctx->pc = 0x112384u;
    SET_GPR_U32(ctx, 31, 0x11238Cu);
    ctx->pc = 0x112AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112AE0u, 0x112384u, 0x11238Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11238Cu;
label_11238c:
    // 0x11238c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x11238cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x112390: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x112390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x112394: 0xc044764  jal         func_111D90
    ctx->pc = 0x112394u;
    SET_GPR_U32(ctx, 31, 0x11239Cu);
    ctx->pc = 0x111D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111D90u, 0x112394u, 0x11239Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11239Cu;
label_11239c:
    // 0x11239c: 0x1000016c  b           . + 4 + (0x16C << 2)
    ctx->pc = 0x11239Cu;
    {
        const bool branch_taken_0x11239c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11239c) {
            ctx->pc = 0x112950u;
            goto label_112950;
        }
    }
    ctx->pc = 0x1123A4u;
label_1123a4:
    // 0x1123a4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1123a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1123a8: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1123a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1123ac: 0xc0446a4  jal         func_111A90
    ctx->pc = 0x1123ACu;
    SET_GPR_U32(ctx, 31, 0x1123B4u);
    ctx->pc = 0x111A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111A90u, 0x1123ACu, 0x1123B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1123B4u;
label_1123b4:
    // 0x1123b4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1123b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1123b8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1123b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1123bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1123bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1123c0: 0xc044a74  jal         func_1129D0
    ctx->pc = 0x1123C0u;
    SET_GPR_U32(ctx, 31, 0x1123C8u);
    ctx->pc = 0x1129D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1129D0u, 0x1123C0u, 0x1123C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1123C8u;
label_1123c8:
    // 0x1123c8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1123c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1123cc: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x1123ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1123d0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1123d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1123d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1123d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1123d8: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x1123D8u;
    SET_GPR_U32(ctx, 31, 0x1123E0u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x1123D8u, 0x1123E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1123E0u;
label_1123e0:
    // 0x1123e0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1123E0u;
    {
        const bool branch_taken_0x1123e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1123e0) {
            ctx->pc = 0x11241Cu;
            goto label_11241c;
        }
    }
    ctx->pc = 0x1123E8u;
    // 0x1123e8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1123e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1123ec: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1123ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1123f0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1123f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1123f4: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1123f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1123f8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1123f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1123fc: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1123fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112400: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x112400u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x112404: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x112404u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112408: 0xc044b50  jal         func_112D40
    ctx->pc = 0x112408u;
    SET_GPR_U32(ctx, 31, 0x112410u);
    ctx->pc = 0x112D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D40u, 0x112408u, 0x112410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112410u;
label_112410:
    // 0x112410: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x112410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x112414: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x112414u;
    {
        const bool branch_taken_0x112414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112414) {
            ctx->pc = 0x112950u;
            goto label_112950;
        }
    }
    ctx->pc = 0x11241Cu;
label_11241c:
    // 0x11241c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x11241cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x112420: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x112420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112424: 0xc044a74  jal         func_1129D0
    ctx->pc = 0x112424u;
    SET_GPR_U32(ctx, 31, 0x11242Cu);
    ctx->pc = 0x1129D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1129D0u, 0x112424u, 0x11242Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11242Cu;
label_11242c:
    // 0x11242c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11242cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112430: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x112430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x112434: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x112434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x112438: 0xc0446a4  jal         func_111A90
    ctx->pc = 0x112438u;
    SET_GPR_U32(ctx, 31, 0x112440u);
    ctx->pc = 0x111A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111A90u, 0x112438u, 0x112440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112440u;
label_112440:
    // 0x112440: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x112440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x112444: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x112444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x112448: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x112448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11244c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11244cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112450: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x112450u;
    SET_GPR_U32(ctx, 31, 0x112458u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x112450u, 0x112458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112458u;
label_112458:
    // 0x112458: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x112458u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11245c: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x11245cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x112460: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x112460u;
    {
        const bool branch_taken_0x112460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112460) {
            ctx->pc = 0x112480u;
            goto label_112480;
        }
    }
    ctx->pc = 0x112468u;
    // 0x112468: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x112468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11246c: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x11246cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x112470: 0xc044764  jal         func_111D90
    ctx->pc = 0x112470u;
    SET_GPR_U32(ctx, 31, 0x112478u);
    ctx->pc = 0x111D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111D90u, 0x112470u, 0x112478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112478u;
label_112478:
    // 0x112478: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x112478u;
    {
        const bool branch_taken_0x112478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112478) {
            ctx->pc = 0x112950u;
            goto label_112950;
        }
    }
    ctx->pc = 0x112480u;
label_112480:
    // 0x112480: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x112480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x112484: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x112484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x112488: 0xc044764  jal         func_111D90
    ctx->pc = 0x112488u;
    SET_GPR_U32(ctx, 31, 0x112490u);
    ctx->pc = 0x111D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111D90u, 0x112488u, 0x112490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112490u;
label_112490:
    // 0x112490: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x112490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x112494: 0xc04398c  jal         func_10E630
    ctx->pc = 0x112494u;
    SET_GPR_U32(ctx, 31, 0x11249Cu);
    ctx->pc = 0x10E630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E630u, 0x112494u, 0x11249Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11249Cu;
label_11249c:
    // 0x11249c: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x11249cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1124a0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1124a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1124a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1124a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1124a8: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1124A8u;
    {
        const bool branch_taken_0x1124a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1124a8) {
            ctx->pc = 0x1124E4u;
            goto label_1124e4;
        }
    }
    ctx->pc = 0x1124B0u;
    // 0x1124b0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1124b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1124b4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1124b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1124b8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1124b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1124bc: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1124bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1124c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1124c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1124c4: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1124c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1124c8: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x1124c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1124cc: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x1124ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1124d0: 0xc044b50  jal         func_112D40
    ctx->pc = 0x1124D0u;
    SET_GPR_U32(ctx, 31, 0x1124D8u);
    ctx->pc = 0x112D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D40u, 0x1124D0u, 0x1124D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1124D8u;
label_1124d8:
    // 0x1124d8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1124d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1124dc: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x1124DCu;
    {
        const bool branch_taken_0x1124dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1124dc) {
            ctx->pc = 0x112950u;
            goto label_112950;
        }
    }
    ctx->pc = 0x1124E4u;
label_1124e4:
    // 0x1124e4: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x1124e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1124e8: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1124e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1124ec: 0xc0446a4  jal         func_111A90
    ctx->pc = 0x1124ECu;
    SET_GPR_U32(ctx, 31, 0x1124F4u);
    ctx->pc = 0x111A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111A90u, 0x1124ECu, 0x1124F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1124F4u;
label_1124f4:
    // 0x1124f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1124f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1124f8: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x1124f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1124fc: 0xc044a74  jal         func_1129D0
    ctx->pc = 0x1124FCu;
    SET_GPR_U32(ctx, 31, 0x112504u);
    ctx->pc = 0x1129D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1129D0u, 0x1124FCu, 0x112504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112504u;
label_112504:
    // 0x112504: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x112504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x112508: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x112508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x11250c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11250cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112510: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x112510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112514: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x112514u;
    SET_GPR_U32(ctx, 31, 0x11251Cu);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x112514u, 0x11251Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11251Cu;
label_11251c:
    // 0x11251c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x11251Cu;
    {
        const bool branch_taken_0x11251c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11251c) {
            ctx->pc = 0x1125A0u;
            goto label_1125a0;
        }
    }
    ctx->pc = 0x112524u;
    // 0x112524: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x112524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x112528: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x112528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11252c: 0xc044a6c  jal         func_1129B0
    ctx->pc = 0x11252Cu;
    SET_GPR_U32(ctx, 31, 0x112534u);
    ctx->pc = 0x1129B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1129B0u, 0x11252Cu, 0x112534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112534u;
label_112534:
    // 0x112534: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x112534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112538: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x112538u;
    {
        const bool branch_taken_0x112538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112538) {
            ctx->pc = 0x112574u;
            goto label_112574;
        }
    }
    ctx->pc = 0x112540u;
    // 0x112540: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x112540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x112544: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x112544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x112548: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x112548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11254c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x11254cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x112550: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x112550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112554: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x112554u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112558: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x112558u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x11255c: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x11255cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112560: 0xc044b50  jal         func_112D40
    ctx->pc = 0x112560u;
    SET_GPR_U32(ctx, 31, 0x112568u);
    ctx->pc = 0x112D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D40u, 0x112560u, 0x112568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112568u;
label_112568:
    // 0x112568: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x112568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11256c: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x11256Cu;
    {
        const bool branch_taken_0x11256c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11256c) {
            ctx->pc = 0x112950u;
            goto label_112950;
        }
    }
    ctx->pc = 0x112574u;
label_112574:
    // 0x112574: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x112574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x112578: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x112578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11257c: 0x8fa6009c  lw          $a2, 0x9C($sp)
    ctx->pc = 0x11257cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x112580: 0x8fa7009c  lw          $a3, 0x9C($sp)
    ctx->pc = 0x112580u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x112584: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x112584u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x112588: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x112588u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11258c: 0xc044b50  jal         func_112D40
    ctx->pc = 0x11258Cu;
    SET_GPR_U32(ctx, 31, 0x112594u);
    ctx->pc = 0x112D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D40u, 0x11258Cu, 0x112594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112594u;
label_112594:
    // 0x112594: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x112594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x112598: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x112598u;
    {
        const bool branch_taken_0x112598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112598) {
            ctx->pc = 0x112950u;
            goto label_112950;
        }
    }
    ctx->pc = 0x1125A0u;
label_1125a0:
    // 0x1125a0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1125a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1125a4: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1125a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1125a8: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x1125a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1125ac: 0xc044ab8  jal         func_112AE0
    ctx->pc = 0x1125ACu;
    SET_GPR_U32(ctx, 31, 0x1125B4u);
    ctx->pc = 0x112AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112AE0u, 0x1125ACu, 0x1125B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1125B4u;
label_1125b4:
    // 0x1125b4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1125b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1125b8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1125b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1125bc: 0xc044764  jal         func_111D90
    ctx->pc = 0x1125BCu;
    SET_GPR_U32(ctx, 31, 0x1125C4u);
    ctx->pc = 0x111D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111D90u, 0x1125BCu, 0x1125C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1125C4u;
label_1125c4:
    // 0x1125c4: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x1125C4u;
    {
        const bool branch_taken_0x1125c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1125c4) {
            ctx->pc = 0x112950u;
            goto label_112950;
        }
    }
    ctx->pc = 0x1125CCu;
label_1125cc:
    // 0x1125cc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1125ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1125d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1125d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1125d4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1125d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1125d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1125d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1125dc: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1125DCu;
    {
        const bool branch_taken_0x1125dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1125dc) {
            ctx->pc = 0x112698u;
            goto label_112698;
        }
    }
    ctx->pc = 0x1125E4u;
    // 0x1125e4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1125e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1125e8: 0xc04382c  jal         func_10E0B0
    ctx->pc = 0x1125E8u;
    SET_GPR_U32(ctx, 31, 0x1125F0u);
    ctx->pc = 0x10E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E0B0u, 0x1125E8u, 0x1125F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1125F0u;
label_1125f0:
    // 0x1125f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1125f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1125f4: 0xc044694  jal         func_111A50
    ctx->pc = 0x1125F4u;
    SET_GPR_U32(ctx, 31, 0x1125FCu);
    ctx->pc = 0x111A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111A50u, 0x1125F4u, 0x1125FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1125FCu;
label_1125fc:
    // 0x1125fc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1125fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112600: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x112600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x112604: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x112604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x112608: 0xc0446a4  jal         func_111A90
    ctx->pc = 0x112608u;
    SET_GPR_U32(ctx, 31, 0x112610u);
    ctx->pc = 0x111A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111A90u, 0x112608u, 0x112610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112610u;
label_112610:
    // 0x112610: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x112610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x112614: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x112614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x112618: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x112618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11261c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11261cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112620: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x112620u;
    SET_GPR_U32(ctx, 31, 0x112628u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x112620u, 0x112628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112628u;
label_112628:
    // 0x112628: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x112628u;
    {
        const bool branch_taken_0x112628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112628) {
            ctx->pc = 0x11266Cu;
            goto label_11266c;
        }
    }
    ctx->pc = 0x112630u;
    // 0x112630: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x112630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x112634: 0xc04382c  jal         func_10E0B0
    ctx->pc = 0x112634u;
    SET_GPR_U32(ctx, 31, 0x11263Cu);
    ctx->pc = 0x10E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E0B0u, 0x112634u, 0x11263Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11263Cu;
label_11263c:
    // 0x11263c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x11263cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x112640: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x112640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x112644: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x112644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x112648: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x112648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11264c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x11264cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112650: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x112650u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x112654: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x112654u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112658: 0xc044b50  jal         func_112D40
    ctx->pc = 0x112658u;
    SET_GPR_U32(ctx, 31, 0x112660u);
    ctx->pc = 0x112D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D40u, 0x112658u, 0x112660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112660u;
label_112660:
    // 0x112660: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x112660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x112664: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x112664u;
    {
        const bool branch_taken_0x112664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112664) {
            ctx->pc = 0x112950u;
            goto label_112950;
        }
    }
    ctx->pc = 0x11266Cu;
label_11266c:
    // 0x11266c: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x11266cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x112670: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x112670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x112674: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x112674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x112678: 0xc044ab8  jal         func_112AE0
    ctx->pc = 0x112678u;
    SET_GPR_U32(ctx, 31, 0x112680u);
    ctx->pc = 0x112AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112AE0u, 0x112678u, 0x112680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112680u;
label_112680:
    // 0x112680: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x112680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x112684: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x112684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x112688: 0xc044764  jal         func_111D90
    ctx->pc = 0x112688u;
    SET_GPR_U32(ctx, 31, 0x112690u);
    ctx->pc = 0x111D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111D90u, 0x112688u, 0x112690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112690u;
label_112690:
    // 0x112690: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x112690u;
    {
        const bool branch_taken_0x112690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112690) {
            ctx->pc = 0x112950u;
            goto label_112950;
        }
    }
    ctx->pc = 0x112698u;
label_112698:
    // 0x112698: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x112698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x11269c: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x11269cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1126a0: 0xc044764  jal         func_111D90
    ctx->pc = 0x1126A0u;
    SET_GPR_U32(ctx, 31, 0x1126A8u);
    ctx->pc = 0x111D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111D90u, 0x1126A0u, 0x1126A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1126A8u;
label_1126a8:
    // 0x1126a8: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x1126a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1126ac: 0xc044a5c  jal         func_112970
    ctx->pc = 0x1126ACu;
    SET_GPR_U32(ctx, 31, 0x1126B4u);
    ctx->pc = 0x112970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112970u, 0x1126ACu, 0x1126B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1126B4u;
label_1126b4:
    // 0x1126b4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1126b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1126b8: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1126b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1126bc: 0xc0446a4  jal         func_111A90
    ctx->pc = 0x1126BCu;
    SET_GPR_U32(ctx, 31, 0x1126C4u);
    ctx->pc = 0x111A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111A90u, 0x1126BCu, 0x1126C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1126C4u;
label_1126c4:
    // 0x1126c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1126c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1126c8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1126c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1126cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1126ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1126d0: 0xc044a74  jal         func_1129D0
    ctx->pc = 0x1126D0u;
    SET_GPR_U32(ctx, 31, 0x1126D8u);
    ctx->pc = 0x1129D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1129D0u, 0x1126D0u, 0x1126D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1126D8u;
label_1126d8:
    // 0x1126d8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1126d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1126dc: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x1126dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1126e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1126e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1126e4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1126e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1126e8: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x1126E8u;
    SET_GPR_U32(ctx, 31, 0x1126F0u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x1126E8u, 0x1126F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1126F0u;
label_1126f0:
    // 0x1126f0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1126f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1126f4: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1126F4u;
    {
        const bool branch_taken_0x1126f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1126f4) {
            ctx->pc = 0x1127B4u;
            goto label_1127b4;
        }
    }
    ctx->pc = 0x1126FCu;
    // 0x1126fc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1126fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x112700: 0xc044a74  jal         func_1129D0
    ctx->pc = 0x112700u;
    SET_GPR_U32(ctx, 31, 0x112708u);
    ctx->pc = 0x1129D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1129D0u, 0x112700u, 0x112708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112708u;
label_112708:
    // 0x112708: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x112708u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11270c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x11270cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x112710: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x112710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x112714: 0xc0446a4  jal         func_111A90
    ctx->pc = 0x112714u;
    SET_GPR_U32(ctx, 31, 0x11271Cu);
    ctx->pc = 0x111A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111A90u, 0x112714u, 0x11271Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11271Cu;
label_11271c:
    // 0x11271c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x11271cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x112720: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x112720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x112724: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x112724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112728: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x112728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11272c: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x11272Cu;
    SET_GPR_U32(ctx, 31, 0x112734u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x11272Cu, 0x112734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112734u;
label_112734:
    // 0x112734: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x112734u;
    {
        const bool branch_taken_0x112734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112734) {
            ctx->pc = 0x1127B4u;
            goto label_1127b4;
        }
    }
    ctx->pc = 0x11273Cu;
    // 0x11273c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x11273cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x112740: 0xc044a6c  jal         func_1129B0
    ctx->pc = 0x112740u;
    SET_GPR_U32(ctx, 31, 0x112748u);
    ctx->pc = 0x1129B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1129B0u, 0x112740u, 0x112748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112748u;
label_112748:
    // 0x112748: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x112748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11274c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11274Cu;
    {
        const bool branch_taken_0x11274c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11274c) {
            ctx->pc = 0x112780u;
            goto label_112780;
        }
    }
    ctx->pc = 0x112754u;
    // 0x112754: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x112754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x112758: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x112758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11275c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11275cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112760: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x112760u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x112764: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x112764u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x112768: 0x8fa90098  lw          $t1, 0x98($sp)
    ctx->pc = 0x112768u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x11276c: 0xc044b50  jal         func_112D40
    ctx->pc = 0x11276Cu;
    SET_GPR_U32(ctx, 31, 0x112774u);
    ctx->pc = 0x112D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D40u, 0x11276Cu, 0x112774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112774u;
label_112774:
    // 0x112774: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x112774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x112778: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x112778u;
    {
        const bool branch_taken_0x112778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112778) {
            ctx->pc = 0x112950u;
            goto label_112950;
        }
    }
    ctx->pc = 0x112780u;
label_112780:
    // 0x112780: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x112780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x112784: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x112784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x112788: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x112788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11278c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x11278cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x112790: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x112790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112794: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x112794u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112798: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x112798u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x11279c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11279cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1127a0: 0xc044b50  jal         func_112D40
    ctx->pc = 0x1127A0u;
    SET_GPR_U32(ctx, 31, 0x1127A8u);
    ctx->pc = 0x112D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D40u, 0x1127A0u, 0x1127A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1127A8u;
label_1127a8:
    // 0x1127a8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1127a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1127ac: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1127ACu;
    {
        const bool branch_taken_0x1127ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1127ac) {
            ctx->pc = 0x112950u;
            goto label_112950;
        }
    }
    ctx->pc = 0x1127B4u;
label_1127b4:
    // 0x1127b4: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x1127b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x1127b8: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x1127b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1127bc: 0xc044764  jal         func_111D90
    ctx->pc = 0x1127BCu;
    SET_GPR_U32(ctx, 31, 0x1127C4u);
    ctx->pc = 0x111D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111D90u, 0x1127BCu, 0x1127C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1127C4u;
label_1127c4:
    // 0x1127c4: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x1127c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x1127c8: 0xc04398c  jal         func_10E630
    ctx->pc = 0x1127C8u;
    SET_GPR_U32(ctx, 31, 0x1127D0u);
    ctx->pc = 0x10E630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E630u, 0x1127C8u, 0x1127D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1127D0u;
label_1127d0:
    // 0x1127d0: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x1127d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1127d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1127d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1127d8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1127d8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1127dc: 0x16000011  bnez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1127DCu;
    {
        const bool branch_taken_0x1127dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1127dc) {
            ctx->pc = 0x112824u;
            goto label_112824;
        }
    }
    ctx->pc = 0x1127E4u;
    // 0x1127e4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1127e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1127e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1127e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1127ec: 0xc044a74  jal         func_1129D0
    ctx->pc = 0x1127ECu;
    SET_GPR_U32(ctx, 31, 0x1127F4u);
    ctx->pc = 0x1129D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1129D0u, 0x1127ECu, 0x1127F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1127F4u;
label_1127f4:
    // 0x1127f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1127f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1127f8: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x1127f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1127fc: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1127fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x112800: 0xc0446a4  jal         func_111A90
    ctx->pc = 0x112800u;
    SET_GPR_U32(ctx, 31, 0x112808u);
    ctx->pc = 0x111A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111A90u, 0x112800u, 0x112808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112808u;
label_112808:
    // 0x112808: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x112808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11280c: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x11280cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x112810: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x112810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112814: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x112814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112818: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x112818u;
    SET_GPR_U32(ctx, 31, 0x112820u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x112818u, 0x112820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112820u;
label_112820:
    // 0x112820: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x112820u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_112824:
    // 0x112824: 0x16000037  bnez        $s0, . + 4 + (0x37 << 2)
    ctx->pc = 0x112824u;
    {
        const bool branch_taken_0x112824 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x112824) {
            ctx->pc = 0x112904u;
            goto label_112904;
        }
    }
    ctx->pc = 0x11282Cu;
    // 0x11282c: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
    ctx->pc = 0x11282Cu;
    {
        const bool branch_taken_0x11282c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x11282c) {
            ctx->pc = 0x112904u;
            goto label_112904;
        }
    }
    ctx->pc = 0x112834u;
    // 0x112834: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x112834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x112838: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x112838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11283c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11283cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112840: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x112840u;
    {
        const bool branch_taken_0x112840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x112840) {
            ctx->pc = 0x112888u;
            goto label_112888;
        }
    }
    ctx->pc = 0x112848u;
    // 0x112848: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x112848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x11284c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x11284cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x112850: 0xc0446a4  jal         func_111A90
    ctx->pc = 0x112850u;
    SET_GPR_U32(ctx, 31, 0x112858u);
    ctx->pc = 0x111A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111A90u, 0x112850u, 0x112858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112858u;
label_112858:
    // 0x112858: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x112858u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11285c: 0x8fa40094  lw          $a0, 0x94($sp)
    ctx->pc = 0x11285cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x112860: 0xc044a74  jal         func_1129D0
    ctx->pc = 0x112860u;
    SET_GPR_U32(ctx, 31, 0x112868u);
    ctx->pc = 0x1129D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1129D0u, 0x112860u, 0x112868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112868u;
label_112868:
    // 0x112868: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x112868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11286c: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x11286cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x112870: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x112870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112874: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x112874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112878: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x112878u;
    SET_GPR_U32(ctx, 31, 0x112880u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x112878u, 0x112880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112880u;
label_112880:
    // 0x112880: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x112880u;
    {
        const bool branch_taken_0x112880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112880) {
            ctx->pc = 0x112904u;
            goto label_112904;
        }
    }
    ctx->pc = 0x112888u;
label_112888:
    // 0x112888: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x112888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x11288c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x11288cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112890: 0xc044a6c  jal         func_1129B0
    ctx->pc = 0x112890u;
    SET_GPR_U32(ctx, 31, 0x112898u);
    ctx->pc = 0x1129B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1129B0u, 0x112890u, 0x112898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112898u;
label_112898:
    // 0x112898: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x112898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11289c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11289Cu;
    {
        const bool branch_taken_0x11289c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11289c) {
            ctx->pc = 0x1128D8u;
            goto label_1128d8;
        }
    }
    ctx->pc = 0x1128A4u;
    // 0x1128a4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1128a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1128a8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1128a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1128ac: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1128acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1128b0: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1128b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1128b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1128b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1128b8: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1128b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1128bc: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x1128bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1128c0: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x1128c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1128c4: 0xc044b50  jal         func_112D40
    ctx->pc = 0x1128C4u;
    SET_GPR_U32(ctx, 31, 0x1128CCu);
    ctx->pc = 0x112D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D40u, 0x1128C4u, 0x1128CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1128CCu;
label_1128cc:
    // 0x1128cc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1128ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1128d0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1128D0u;
    {
        const bool branch_taken_0x1128d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1128d0) {
            ctx->pc = 0x112950u;
            goto label_112950;
        }
    }
    ctx->pc = 0x1128D8u;
label_1128d8:
    // 0x1128d8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1128d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1128dc: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1128dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1128e0: 0x8fa60094  lw          $a2, 0x94($sp)
    ctx->pc = 0x1128e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1128e4: 0x8fa70094  lw          $a3, 0x94($sp)
    ctx->pc = 0x1128e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1128e8: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x1128e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1128ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1128ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1128f0: 0xc044b50  jal         func_112D40
    ctx->pc = 0x1128F0u;
    SET_GPR_U32(ctx, 31, 0x1128F8u);
    ctx->pc = 0x112D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D40u, 0x1128F0u, 0x1128F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1128F8u;
label_1128f8:
    // 0x1128f8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1128f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1128fc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1128FCu;
    {
        const bool branch_taken_0x1128fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1128fc) {
            ctx->pc = 0x112950u;
            goto label_112950;
        }
    }
    ctx->pc = 0x112904u;
label_112904:
    // 0x112904: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x112904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x112908: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x112908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x11290c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11290Cu;
    {
        const bool branch_taken_0x11290c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11290c) {
            ctx->pc = 0x11292Cu;
            goto label_11292c;
        }
    }
    ctx->pc = 0x112914u;
    // 0x112914: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x112914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x112918: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x112918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x11291c: 0xc044764  jal         func_111D90
    ctx->pc = 0x11291Cu;
    SET_GPR_U32(ctx, 31, 0x112924u);
    ctx->pc = 0x111D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111D90u, 0x11291Cu, 0x112924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112924u;
label_112924:
    // 0x112924: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x112924u;
    {
        const bool branch_taken_0x112924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112924) {
            ctx->pc = 0x112950u;
            goto label_112950;
        }
    }
    ctx->pc = 0x11292Cu;
label_11292c:
    // 0x11292c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x11292cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x112930: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x112930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x112934: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x112934u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x112938: 0xc044ab8  jal         func_112AE0
    ctx->pc = 0x112938u;
    SET_GPR_U32(ctx, 31, 0x112940u);
    ctx->pc = 0x112AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112AE0u, 0x112938u, 0x112940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112940u;
label_112940:
    // 0x112940: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x112940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x112944: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x112944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x112948: 0xc044764  jal         func_111D90
    ctx->pc = 0x112948u;
    SET_GPR_U32(ctx, 31, 0x112950u);
    ctx->pc = 0x111D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111D90u, 0x112948u, 0x112950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112950u;
label_112950:
    // 0x112950: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x112950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x112954: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x112954u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x112958: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x112958u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11295c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11295cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112960: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x112960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112964: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x112964u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x112968: 0x3e00008  jr          $ra
    ctx->pc = 0x112968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112970u;
}
