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

// Function: sub_00152450
// Address: 0x152450 - 0x152aa0
void sub_00152450_0x152450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152450_0x152450");
#endif

    switch (ctx->pc) {
        case 0x1524a0u: goto label_1524a0;
        case 0x1524bcu: goto label_1524bc;
        case 0x1524ccu: goto label_1524cc;
        case 0x1524e4u: goto label_1524e4;
        case 0x1524f8u: goto label_1524f8;
        case 0x152510u: goto label_152510;
        case 0x152540u: goto label_152540;
        case 0x15255cu: goto label_15255c;
        case 0x152570u: goto label_152570;
        case 0x152588u: goto label_152588;
        case 0x1525a8u: goto label_1525a8;
        case 0x1525c0u: goto label_1525c0;
        case 0x1525ccu: goto label_1525cc;
        case 0x152608u: goto label_152608;
        case 0x152624u: goto label_152624;
        case 0x152634u: goto label_152634;
        case 0x15264cu: goto label_15264c;
        case 0x152664u: goto label_152664;
        case 0x152698u: goto label_152698;
        case 0x1526c4u: goto label_1526c4;
        case 0x1526e4u: goto label_1526e4;
        case 0x1526f4u: goto label_1526f4;
        case 0x152720u: goto label_152720;
        case 0x15272cu: goto label_15272c;
        case 0x152740u: goto label_152740;
        case 0x152758u: goto label_152758;
        case 0x15276cu: goto label_15276c;
        case 0x152790u: goto label_152790;
        case 0x1527b0u: goto label_1527b0;
        case 0x1527c0u: goto label_1527c0;
        case 0x1527d8u: goto label_1527d8;
        case 0x1527e4u: goto label_1527e4;
        case 0x1527f4u: goto label_1527f4;
        case 0x152808u: goto label_152808;
        case 0x152820u: goto label_152820;
        case 0x152838u: goto label_152838;
        case 0x15284cu: goto label_15284c;
        case 0x152864u: goto label_152864;
        case 0x152878u: goto label_152878;
        case 0x1528a4u: goto label_1528a4;
        case 0x1528d8u: goto label_1528d8;
        case 0x1528f4u: goto label_1528f4;
        case 0x152900u: goto label_152900;
        case 0x152924u: goto label_152924;
        case 0x152938u: goto label_152938;
        case 0x152950u: goto label_152950;
        case 0x152988u: goto label_152988;
        case 0x152998u: goto label_152998;
        case 0x1529b0u: goto label_1529b0;
        case 0x1529c8u: goto label_1529c8;
        case 0x1529fcu: goto label_1529fc;
        case 0x152a28u: goto label_152a28;
        case 0x152a54u: goto label_152a54;
        case 0x152a70u: goto label_152a70;
        case 0x152a80u: goto label_152a80;
        default: break;
    }

    ctx->pc = 0x152450u;

    // 0x152450: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x152450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x152454: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x152454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x152458: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x152458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15245c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15245cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x152460: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x152460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x152464: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x152464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x152468: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x152468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x15246c: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x15246cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x152470: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x152470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x152474: 0xafa700d0  sw          $a3, 0xD0($sp)
    ctx->pc = 0x152474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 7));
    // 0x152478: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x152478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15247c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15247cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152480: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x152480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x152484: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x152484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152488: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x152488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15248c: 0x1462009b  bne         $v1, $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x15248Cu;
    {
        const bool branch_taken_0x15248c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15248c) {
            ctx->pc = 0x1526FCu;
            goto label_1526fc;
        }
    }
    ctx->pc = 0x152494u;
    // 0x152494: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x152494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x152498: 0xc054ad0  jal         func_152B40
    ctx->pc = 0x152498u;
    SET_GPR_U32(ctx, 31, 0x1524A0u);
    ctx->pc = 0x152B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152B40u, 0x152498u, 0x1524A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1524A0u;
label_1524a0:
    // 0x1524a0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1524A0u;
    {
        const bool branch_taken_0x1524a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1524a0) {
            ctx->pc = 0x1524D4u;
            goto label_1524d4;
        }
    }
    ctx->pc = 0x1524A8u;
    // 0x1524a8: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1524a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1524ac: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1524acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1524b0: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x1524b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1524b4: 0xc054c3c  jal         func_1530F0
    ctx->pc = 0x1524B4u;
    SET_GPR_U32(ctx, 31, 0x1524BCu);
    ctx->pc = 0x1530F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1530F0u, 0x1524B4u, 0x1524BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1524BCu;
label_1524bc:
    // 0x1524bc: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1524bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1524c0: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x1524c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1524c4: 0xc052d28  jal         func_14B4A0
    ctx->pc = 0x1524C4u;
    SET_GPR_U32(ctx, 31, 0x1524CCu);
    ctx->pc = 0x14B4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B4A0u, 0x1524C4u, 0x1524CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1524CCu;
label_1524cc:
    // 0x1524cc: 0x1000016c  b           . + 4 + (0x16C << 2)
    ctx->pc = 0x1524CCu;
    {
        const bool branch_taken_0x1524cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1524cc) {
            ctx->pc = 0x152A80u;
            goto label_152a80;
        }
    }
    ctx->pc = 0x1524D4u;
label_1524d4:
    // 0x1524d4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1524d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1524d8: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1524d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1524dc: 0xc054200  jal         func_150800
    ctx->pc = 0x1524DCu;
    SET_GPR_U32(ctx, 31, 0x1524E4u);
    ctx->pc = 0x150800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150800u, 0x1524DCu, 0x1524E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1524E4u;
label_1524e4:
    // 0x1524e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1524e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1524e8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1524e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1524ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1524ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1524f0: 0xc054ac0  jal         func_152B00
    ctx->pc = 0x1524F0u;
    SET_GPR_U32(ctx, 31, 0x1524F8u);
    ctx->pc = 0x152B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152B00u, 0x1524F0u, 0x1524F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1524F8u;
label_1524f8:
    // 0x1524f8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1524f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1524fc: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x1524fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x152500: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x152500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152504: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x152504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152508: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x152508u;
    SET_GPR_U32(ctx, 31, 0x152510u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x152508u, 0x152510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152510u;
label_152510:
    // 0x152510: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x152510u;
    {
        const bool branch_taken_0x152510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152510) {
            ctx->pc = 0x15254Cu;
            goto label_15254c;
        }
    }
    ctx->pc = 0x152518u;
    // 0x152518: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x152518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15251c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x15251cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x152520: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x152520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x152524: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x152524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x152528: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x152528u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15252c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x15252cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152530: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x152530u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x152534: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x152534u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152538: 0xc054cd4  jal         func_153350
    ctx->pc = 0x152538u;
    SET_GPR_U32(ctx, 31, 0x152540u);
    ctx->pc = 0x153350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153350u, 0x152538u, 0x152540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152540u;
label_152540:
    // 0x152540: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x152540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x152544: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x152544u;
    {
        const bool branch_taken_0x152544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152544) {
            ctx->pc = 0x152A80u;
            goto label_152a80;
        }
    }
    ctx->pc = 0x15254Cu;
label_15254c:
    // 0x15254c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x15254cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x152550: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x152550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152554: 0xc054ac0  jal         func_152B00
    ctx->pc = 0x152554u;
    SET_GPR_U32(ctx, 31, 0x15255Cu);
    ctx->pc = 0x152B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152B00u, 0x152554u, 0x15255Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15255Cu;
label_15255c:
    // 0x15255c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15255cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152560: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x152560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x152564: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x152564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x152568: 0xc054200  jal         func_150800
    ctx->pc = 0x152568u;
    SET_GPR_U32(ctx, 31, 0x152570u);
    ctx->pc = 0x150800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150800u, 0x152568u, 0x152570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152570u;
label_152570:
    // 0x152570: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x152570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x152574: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x152574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x152578: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x152578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15257c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15257cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152580: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x152580u;
    SET_GPR_U32(ctx, 31, 0x152588u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x152580u, 0x152588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152588u;
label_152588:
    // 0x152588: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x152588u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15258c: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x15258cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x152590: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x152590u;
    {
        const bool branch_taken_0x152590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x152590) {
            ctx->pc = 0x1525B0u;
            goto label_1525b0;
        }
    }
    ctx->pc = 0x152598u;
    // 0x152598: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x152598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15259c: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x15259cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1525a0: 0xc052d28  jal         func_14B4A0
    ctx->pc = 0x1525A0u;
    SET_GPR_U32(ctx, 31, 0x1525A8u);
    ctx->pc = 0x14B4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B4A0u, 0x1525A0u, 0x1525A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1525A8u;
label_1525a8:
    // 0x1525a8: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x1525A8u;
    {
        const bool branch_taken_0x1525a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1525a8) {
            ctx->pc = 0x152A80u;
            goto label_152a80;
        }
    }
    ctx->pc = 0x1525B0u;
label_1525b0:
    // 0x1525b0: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x1525b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x1525b4: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x1525b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1525b8: 0xc052d28  jal         func_14B4A0
    ctx->pc = 0x1525B8u;
    SET_GPR_U32(ctx, 31, 0x1525C0u);
    ctx->pc = 0x14B4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B4A0u, 0x1525B8u, 0x1525C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1525C0u;
label_1525c0:
    // 0x1525c0: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x1525c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x1525c4: 0xc052a48  jal         func_14A920
    ctx->pc = 0x1525C4u;
    SET_GPR_U32(ctx, 31, 0x1525CCu);
    ctx->pc = 0x14A920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A920u, 0x1525C4u, 0x1525CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1525CCu;
label_1525cc:
    // 0x1525cc: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x1525ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1525d0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1525d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1525d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1525d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1525d8: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1525D8u;
    {
        const bool branch_taken_0x1525d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1525d8) {
            ctx->pc = 0x152614u;
            goto label_152614;
        }
    }
    ctx->pc = 0x1525E0u;
    // 0x1525e0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1525e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1525e4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1525e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1525e8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1525e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1525ec: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1525ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1525f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1525f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1525f4: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1525f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1525f8: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x1525f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1525fc: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x1525fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152600: 0xc054cd4  jal         func_153350
    ctx->pc = 0x152600u;
    SET_GPR_U32(ctx, 31, 0x152608u);
    ctx->pc = 0x153350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153350u, 0x152600u, 0x152608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152608u;
label_152608:
    // 0x152608: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x152608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15260c: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x15260Cu;
    {
        const bool branch_taken_0x15260c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15260c) {
            ctx->pc = 0x152A80u;
            goto label_152a80;
        }
    }
    ctx->pc = 0x152614u;
label_152614:
    // 0x152614: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x152614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x152618: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x152618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15261c: 0xc054200  jal         func_150800
    ctx->pc = 0x15261Cu;
    SET_GPR_U32(ctx, 31, 0x152624u);
    ctx->pc = 0x150800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150800u, 0x15261Cu, 0x152624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152624u;
label_152624:
    // 0x152624: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x152624u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152628: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x152628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x15262c: 0xc054ac0  jal         func_152B00
    ctx->pc = 0x15262Cu;
    SET_GPR_U32(ctx, 31, 0x152634u);
    ctx->pc = 0x152B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152B00u, 0x15262Cu, 0x152634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152634u;
label_152634:
    // 0x152634: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x152634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x152638: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x152638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x15263c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15263cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152640: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x152640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152644: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x152644u;
    SET_GPR_U32(ctx, 31, 0x15264Cu);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x152644u, 0x15264Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15264Cu;
label_15264c:
    // 0x15264c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x15264Cu;
    {
        const bool branch_taken_0x15264c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15264c) {
            ctx->pc = 0x1526D0u;
            goto label_1526d0;
        }
    }
    ctx->pc = 0x152654u;
    // 0x152654: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x152654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x152658: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x152658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15265c: 0xc054ab8  jal         func_152AE0
    ctx->pc = 0x15265Cu;
    SET_GPR_U32(ctx, 31, 0x152664u);
    ctx->pc = 0x152AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152AE0u, 0x15265Cu, 0x152664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152664u;
label_152664:
    // 0x152664: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x152664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152668: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x152668u;
    {
        const bool branch_taken_0x152668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x152668) {
            ctx->pc = 0x1526A4u;
            goto label_1526a4;
        }
    }
    ctx->pc = 0x152670u;
    // 0x152670: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x152670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x152674: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x152674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x152678: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x152678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15267c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x15267cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x152680: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152684: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x152684u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x152688: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x152688u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15268c: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x15268cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152690: 0xc054cd4  jal         func_153350
    ctx->pc = 0x152690u;
    SET_GPR_U32(ctx, 31, 0x152698u);
    ctx->pc = 0x153350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153350u, 0x152690u, 0x152698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152698u;
label_152698:
    // 0x152698: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x152698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15269c: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x15269Cu;
    {
        const bool branch_taken_0x15269c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15269c) {
            ctx->pc = 0x152A80u;
            goto label_152a80;
        }
    }
    ctx->pc = 0x1526A4u;
label_1526a4:
    // 0x1526a4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1526a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1526a8: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1526a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1526ac: 0x8fa6009c  lw          $a2, 0x9C($sp)
    ctx->pc = 0x1526acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1526b0: 0x8fa7009c  lw          $a3, 0x9C($sp)
    ctx->pc = 0x1526b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1526b4: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x1526b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1526b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1526b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1526bc: 0xc054cd4  jal         func_153350
    ctx->pc = 0x1526BCu;
    SET_GPR_U32(ctx, 31, 0x1526C4u);
    ctx->pc = 0x153350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153350u, 0x1526BCu, 0x1526C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1526C4u;
label_1526c4:
    // 0x1526c4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1526c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1526c8: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x1526C8u;
    {
        const bool branch_taken_0x1526c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1526c8) {
            ctx->pc = 0x152A80u;
            goto label_152a80;
        }
    }
    ctx->pc = 0x1526D0u;
label_1526d0:
    // 0x1526d0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1526d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1526d4: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1526d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1526d8: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x1526d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1526dc: 0xc054c3c  jal         func_1530F0
    ctx->pc = 0x1526DCu;
    SET_GPR_U32(ctx, 31, 0x1526E4u);
    ctx->pc = 0x1530F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1530F0u, 0x1526DCu, 0x1526E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1526E4u;
label_1526e4:
    // 0x1526e4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1526e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1526e8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1526e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1526ec: 0xc052d28  jal         func_14B4A0
    ctx->pc = 0x1526ECu;
    SET_GPR_U32(ctx, 31, 0x1526F4u);
    ctx->pc = 0x14B4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B4A0u, 0x1526ECu, 0x1526F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1526F4u;
label_1526f4:
    // 0x1526f4: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x1526F4u;
    {
        const bool branch_taken_0x1526f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1526f4) {
            ctx->pc = 0x152A80u;
            goto label_152a80;
        }
    }
    ctx->pc = 0x1526FCu;
label_1526fc:
    // 0x1526fc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1526fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x152700: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x152700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152704: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x152704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x152708: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x152708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15270c: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x15270Cu;
    {
        const bool branch_taken_0x15270c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15270c) {
            ctx->pc = 0x1527C8u;
            goto label_1527c8;
        }
    }
    ctx->pc = 0x152714u;
    // 0x152714: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x152714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x152718: 0xc052794  jal         func_149E50
    ctx->pc = 0x152718u;
    SET_GPR_U32(ctx, 31, 0x152720u);
    ctx->pc = 0x149E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149E50u, 0x152718u, 0x152720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152720u;
label_152720:
    // 0x152720: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x152720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152724: 0xc0541f0  jal         func_1507C0
    ctx->pc = 0x152724u;
    SET_GPR_U32(ctx, 31, 0x15272Cu);
    ctx->pc = 0x1507C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1507C0u, 0x152724u, 0x15272Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15272Cu;
label_15272c:
    // 0x15272c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15272cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152730: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x152730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x152734: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x152734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x152738: 0xc054200  jal         func_150800
    ctx->pc = 0x152738u;
    SET_GPR_U32(ctx, 31, 0x152740u);
    ctx->pc = 0x150800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150800u, 0x152738u, 0x152740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152740u;
label_152740:
    // 0x152740: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x152740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x152744: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x152744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x152748: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x152748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15274c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15274cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152750: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x152750u;
    SET_GPR_U32(ctx, 31, 0x152758u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x152750u, 0x152758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152758u;
label_152758:
    // 0x152758: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x152758u;
    {
        const bool branch_taken_0x152758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152758) {
            ctx->pc = 0x15279Cu;
            goto label_15279c;
        }
    }
    ctx->pc = 0x152760u;
    // 0x152760: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x152760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x152764: 0xc052794  jal         func_149E50
    ctx->pc = 0x152764u;
    SET_GPR_U32(ctx, 31, 0x15276Cu);
    ctx->pc = 0x149E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149E50u, 0x152764u, 0x15276Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15276Cu;
label_15276c:
    // 0x15276c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x15276cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x152770: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x152770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x152774: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x152774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x152778: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15277c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x15277cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152780: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x152780u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x152784: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x152784u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x152788: 0xc054cd4  jal         func_153350
    ctx->pc = 0x152788u;
    SET_GPR_U32(ctx, 31, 0x152790u);
    ctx->pc = 0x153350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153350u, 0x152788u, 0x152790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152790u;
label_152790:
    // 0x152790: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x152790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x152794: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x152794u;
    {
        const bool branch_taken_0x152794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152794) {
            ctx->pc = 0x152A80u;
            goto label_152a80;
        }
    }
    ctx->pc = 0x15279Cu;
label_15279c:
    // 0x15279c: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x15279cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1527a0: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1527a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1527a4: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x1527a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1527a8: 0xc054c3c  jal         func_1530F0
    ctx->pc = 0x1527A8u;
    SET_GPR_U32(ctx, 31, 0x1527B0u);
    ctx->pc = 0x1530F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1530F0u, 0x1527A8u, 0x1527B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1527B0u;
label_1527b0:
    // 0x1527b0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1527b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1527b4: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x1527b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1527b8: 0xc052d28  jal         func_14B4A0
    ctx->pc = 0x1527B8u;
    SET_GPR_U32(ctx, 31, 0x1527C0u);
    ctx->pc = 0x14B4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B4A0u, 0x1527B8u, 0x1527C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1527C0u;
label_1527c0:
    // 0x1527c0: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x1527C0u;
    {
        const bool branch_taken_0x1527c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1527c0) {
            ctx->pc = 0x152A80u;
            goto label_152a80;
        }
    }
    ctx->pc = 0x1527C8u;
label_1527c8:
    // 0x1527c8: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x1527c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1527cc: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x1527ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1527d0: 0xc052d28  jal         func_14B4A0
    ctx->pc = 0x1527D0u;
    SET_GPR_U32(ctx, 31, 0x1527D8u);
    ctx->pc = 0x14B4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B4A0u, 0x1527D0u, 0x1527D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1527D8u;
label_1527d8:
    // 0x1527d8: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x1527d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1527dc: 0xc054aa8  jal         func_152AA0
    ctx->pc = 0x1527DCu;
    SET_GPR_U32(ctx, 31, 0x1527E4u);
    ctx->pc = 0x152AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152AA0u, 0x1527DCu, 0x1527E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1527E4u;
label_1527e4:
    // 0x1527e4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1527e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1527e8: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1527e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1527ec: 0xc054200  jal         func_150800
    ctx->pc = 0x1527ECu;
    SET_GPR_U32(ctx, 31, 0x1527F4u);
    ctx->pc = 0x150800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150800u, 0x1527ECu, 0x1527F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1527F4u;
label_1527f4:
    // 0x1527f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1527f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1527f8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1527f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1527fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1527fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152800: 0xc054ac0  jal         func_152B00
    ctx->pc = 0x152800u;
    SET_GPR_U32(ctx, 31, 0x152808u);
    ctx->pc = 0x152B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152B00u, 0x152800u, 0x152808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152808u;
label_152808:
    // 0x152808: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x152808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15280c: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x15280cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x152810: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x152810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152814: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x152814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152818: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x152818u;
    SET_GPR_U32(ctx, 31, 0x152820u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x152818u, 0x152820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152820u;
label_152820:
    // 0x152820: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x152820u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x152824: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x152824u;
    {
        const bool branch_taken_0x152824 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x152824) {
            ctx->pc = 0x1528E4u;
            goto label_1528e4;
        }
    }
    ctx->pc = 0x15282Cu;
    // 0x15282c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x15282cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x152830: 0xc054ac0  jal         func_152B00
    ctx->pc = 0x152830u;
    SET_GPR_U32(ctx, 31, 0x152838u);
    ctx->pc = 0x152B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152B00u, 0x152830u, 0x152838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152838u;
label_152838:
    // 0x152838: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x152838u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15283c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x15283cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x152840: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x152840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x152844: 0xc054200  jal         func_150800
    ctx->pc = 0x152844u;
    SET_GPR_U32(ctx, 31, 0x15284Cu);
    ctx->pc = 0x150800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150800u, 0x152844u, 0x15284Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15284Cu;
label_15284c:
    // 0x15284c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x15284cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x152850: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x152850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x152854: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x152854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152858: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x152858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15285c: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x15285Cu;
    SET_GPR_U32(ctx, 31, 0x152864u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x15285Cu, 0x152864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152864u;
label_152864:
    // 0x152864: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x152864u;
    {
        const bool branch_taken_0x152864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152864) {
            ctx->pc = 0x1528E4u;
            goto label_1528e4;
        }
    }
    ctx->pc = 0x15286Cu;
    // 0x15286c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x15286cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x152870: 0xc054ab8  jal         func_152AE0
    ctx->pc = 0x152870u;
    SET_GPR_U32(ctx, 31, 0x152878u);
    ctx->pc = 0x152AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152AE0u, 0x152870u, 0x152878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152878u;
label_152878:
    // 0x152878: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x152878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15287c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x15287Cu;
    {
        const bool branch_taken_0x15287c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15287c) {
            ctx->pc = 0x1528B0u;
            goto label_1528b0;
        }
    }
    ctx->pc = 0x152884u;
    // 0x152884: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x152884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x152888: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x152888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15288c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15288cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152890: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x152890u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x152894: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x152894u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x152898: 0x8fa90098  lw          $t1, 0x98($sp)
    ctx->pc = 0x152898u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x15289c: 0xc054cd4  jal         func_153350
    ctx->pc = 0x15289Cu;
    SET_GPR_U32(ctx, 31, 0x1528A4u);
    ctx->pc = 0x153350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153350u, 0x15289Cu, 0x1528A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1528A4u;
label_1528a4:
    // 0x1528a4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1528a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1528a8: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x1528A8u;
    {
        const bool branch_taken_0x1528a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1528a8) {
            ctx->pc = 0x152A80u;
            goto label_152a80;
        }
    }
    ctx->pc = 0x1528B0u;
label_1528b0:
    // 0x1528b0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1528b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1528b4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1528b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1528b8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1528b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1528bc: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1528bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1528c0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1528c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1528c4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1528c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1528c8: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x1528c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1528cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1528ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1528d0: 0xc054cd4  jal         func_153350
    ctx->pc = 0x1528D0u;
    SET_GPR_U32(ctx, 31, 0x1528D8u);
    ctx->pc = 0x153350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153350u, 0x1528D0u, 0x1528D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1528D8u;
label_1528d8:
    // 0x1528d8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1528d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1528dc: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1528DCu;
    {
        const bool branch_taken_0x1528dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1528dc) {
            ctx->pc = 0x152A80u;
            goto label_152a80;
        }
    }
    ctx->pc = 0x1528E4u;
label_1528e4:
    // 0x1528e4: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x1528e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x1528e8: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x1528e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1528ec: 0xc052d28  jal         func_14B4A0
    ctx->pc = 0x1528ECu;
    SET_GPR_U32(ctx, 31, 0x1528F4u);
    ctx->pc = 0x14B4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B4A0u, 0x1528ECu, 0x1528F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1528F4u;
label_1528f4:
    // 0x1528f4: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x1528f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x1528f8: 0xc052a48  jal         func_14A920
    ctx->pc = 0x1528F8u;
    SET_GPR_U32(ctx, 31, 0x152900u);
    ctx->pc = 0x14A920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A920u, 0x1528F8u, 0x152900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152900u;
label_152900:
    // 0x152900: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x152900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x152904: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x152904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x152908: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x152908u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15290c: 0x16000011  bnez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x15290Cu;
    {
        const bool branch_taken_0x15290c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x15290c) {
            ctx->pc = 0x152954u;
            goto label_152954;
        }
    }
    ctx->pc = 0x152914u;
    // 0x152914: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x152914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x152918: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x152918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15291c: 0xc054ac0  jal         func_152B00
    ctx->pc = 0x15291Cu;
    SET_GPR_U32(ctx, 31, 0x152924u);
    ctx->pc = 0x152B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152B00u, 0x15291Cu, 0x152924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152924u;
label_152924:
    // 0x152924: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x152924u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152928: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x152928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x15292c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x15292cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x152930: 0xc054200  jal         func_150800
    ctx->pc = 0x152930u;
    SET_GPR_U32(ctx, 31, 0x152938u);
    ctx->pc = 0x150800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150800u, 0x152930u, 0x152938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152938u;
label_152938:
    // 0x152938: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x152938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15293c: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x15293cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x152940: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x152940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152944: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x152944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152948: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x152948u;
    SET_GPR_U32(ctx, 31, 0x152950u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x152948u, 0x152950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152950u;
label_152950:
    // 0x152950: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x152950u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_152954:
    // 0x152954: 0x16000037  bnez        $s0, . + 4 + (0x37 << 2)
    ctx->pc = 0x152954u;
    {
        const bool branch_taken_0x152954 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x152954) {
            ctx->pc = 0x152A34u;
            goto label_152a34;
        }
    }
    ctx->pc = 0x15295Cu;
    // 0x15295c: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
    ctx->pc = 0x15295Cu;
    {
        const bool branch_taken_0x15295c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15295c) {
            ctx->pc = 0x152A34u;
            goto label_152a34;
        }
    }
    ctx->pc = 0x152964u;
    // 0x152964: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x152964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x152968: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x152968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15296c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15296cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152970: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x152970u;
    {
        const bool branch_taken_0x152970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x152970) {
            ctx->pc = 0x1529B8u;
            goto label_1529b8;
        }
    }
    ctx->pc = 0x152978u;
    // 0x152978: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x152978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x15297c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x15297cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x152980: 0xc054200  jal         func_150800
    ctx->pc = 0x152980u;
    SET_GPR_U32(ctx, 31, 0x152988u);
    ctx->pc = 0x150800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150800u, 0x152980u, 0x152988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152988u;
label_152988:
    // 0x152988: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x152988u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15298c: 0x8fa40094  lw          $a0, 0x94($sp)
    ctx->pc = 0x15298cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x152990: 0xc054ac0  jal         func_152B00
    ctx->pc = 0x152990u;
    SET_GPR_U32(ctx, 31, 0x152998u);
    ctx->pc = 0x152B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152B00u, 0x152990u, 0x152998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152998u;
label_152998:
    // 0x152998: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x152998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15299c: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x15299cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1529a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1529a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1529a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1529a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1529a8: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x1529A8u;
    SET_GPR_U32(ctx, 31, 0x1529B0u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x1529A8u, 0x1529B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1529B0u;
label_1529b0:
    // 0x1529b0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1529B0u;
    {
        const bool branch_taken_0x1529b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1529b0) {
            ctx->pc = 0x152A34u;
            goto label_152a34;
        }
    }
    ctx->pc = 0x1529B8u;
label_1529b8:
    // 0x1529b8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1529b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1529bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1529bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1529c0: 0xc054ab8  jal         func_152AE0
    ctx->pc = 0x1529C0u;
    SET_GPR_U32(ctx, 31, 0x1529C8u);
    ctx->pc = 0x152AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152AE0u, 0x1529C0u, 0x1529C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1529C8u;
label_1529c8:
    // 0x1529c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1529c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1529cc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1529CCu;
    {
        const bool branch_taken_0x1529cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1529cc) {
            ctx->pc = 0x152A08u;
            goto label_152a08;
        }
    }
    ctx->pc = 0x1529D4u;
    // 0x1529d4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1529d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1529d8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1529d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1529dc: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1529dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1529e0: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1529e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1529e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1529e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1529e8: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1529e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1529ec: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x1529ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1529f0: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x1529f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1529f4: 0xc054cd4  jal         func_153350
    ctx->pc = 0x1529F4u;
    SET_GPR_U32(ctx, 31, 0x1529FCu);
    ctx->pc = 0x153350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153350u, 0x1529F4u, 0x1529FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1529FCu;
label_1529fc:
    // 0x1529fc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1529fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x152a00: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x152A00u;
    {
        const bool branch_taken_0x152a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152a00) {
            ctx->pc = 0x152A80u;
            goto label_152a80;
        }
    }
    ctx->pc = 0x152A08u;
label_152a08:
    // 0x152a08: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x152a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x152a0c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x152a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x152a10: 0x8fa60094  lw          $a2, 0x94($sp)
    ctx->pc = 0x152a10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x152a14: 0x8fa70094  lw          $a3, 0x94($sp)
    ctx->pc = 0x152a14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x152a18: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x152a18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x152a1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x152a1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a20: 0xc054cd4  jal         func_153350
    ctx->pc = 0x152A20u;
    SET_GPR_U32(ctx, 31, 0x152A28u);
    ctx->pc = 0x153350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153350u, 0x152A20u, 0x152A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152A28u;
label_152a28:
    // 0x152a28: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x152a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x152a2c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x152A2Cu;
    {
        const bool branch_taken_0x152a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152a2c) {
            ctx->pc = 0x152A80u;
            goto label_152a80;
        }
    }
    ctx->pc = 0x152A34u;
label_152a34:
    // 0x152a34: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x152a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x152a38: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x152a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x152a3c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x152A3Cu;
    {
        const bool branch_taken_0x152a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x152a3c) {
            ctx->pc = 0x152A5Cu;
            goto label_152a5c;
        }
    }
    ctx->pc = 0x152A44u;
    // 0x152a44: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x152a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x152a48: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x152a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x152a4c: 0xc052d28  jal         func_14B4A0
    ctx->pc = 0x152A4Cu;
    SET_GPR_U32(ctx, 31, 0x152A54u);
    ctx->pc = 0x14B4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B4A0u, 0x152A4Cu, 0x152A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152A54u;
label_152a54:
    // 0x152a54: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x152A54u;
    {
        const bool branch_taken_0x152a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152a54) {
            ctx->pc = 0x152A80u;
            goto label_152a80;
        }
    }
    ctx->pc = 0x152A5Cu;
label_152a5c:
    // 0x152a5c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x152a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x152a60: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x152a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x152a64: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x152a64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x152a68: 0xc054c3c  jal         func_1530F0
    ctx->pc = 0x152A68u;
    SET_GPR_U32(ctx, 31, 0x152A70u);
    ctx->pc = 0x1530F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1530F0u, 0x152A68u, 0x152A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152A70u;
label_152a70:
    // 0x152a70: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x152a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x152a74: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x152a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x152a78: 0xc052d28  jal         func_14B4A0
    ctx->pc = 0x152A78u;
    SET_GPR_U32(ctx, 31, 0x152A80u);
    ctx->pc = 0x14B4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B4A0u, 0x152A78u, 0x152A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152A80u;
label_152a80:
    // 0x152a80: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x152a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x152a84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x152a84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x152a88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x152a88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152a8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x152a8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152a90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152a94: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x152a94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x152a98: 0x3e00008  jr          $ra
    ctx->pc = 0x152A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152AA0u;
}
