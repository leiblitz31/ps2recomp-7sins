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

// Function: sub_00460830
// Address: 0x460830 - 0x460ab0
void sub_00460830_0x460830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00460830_0x460830");
#endif

    switch (ctx->pc) {
        case 0x460830u: goto label_460830;
        case 0x460834u: goto label_460834;
        case 0x460838u: goto label_460838;
        case 0x46083cu: goto label_46083c;
        case 0x460840u: goto label_460840;
        case 0x460844u: goto label_460844;
        case 0x460848u: goto label_460848;
        case 0x46084cu: goto label_46084c;
        case 0x460850u: goto label_460850;
        case 0x460854u: goto label_460854;
        case 0x460858u: goto label_460858;
        case 0x46085cu: goto label_46085c;
        case 0x460860u: goto label_460860;
        case 0x460864u: goto label_460864;
        case 0x460868u: goto label_460868;
        case 0x46086cu: goto label_46086c;
        case 0x460870u: goto label_460870;
        case 0x460874u: goto label_460874;
        case 0x460878u: goto label_460878;
        case 0x46087cu: goto label_46087c;
        case 0x460880u: goto label_460880;
        case 0x460884u: goto label_460884;
        case 0x460888u: goto label_460888;
        case 0x46088cu: goto label_46088c;
        case 0x460890u: goto label_460890;
        case 0x460894u: goto label_460894;
        case 0x460898u: goto label_460898;
        case 0x46089cu: goto label_46089c;
        case 0x4608a0u: goto label_4608a0;
        case 0x4608a4u: goto label_4608a4;
        case 0x4608a8u: goto label_4608a8;
        case 0x4608acu: goto label_4608ac;
        case 0x4608b0u: goto label_4608b0;
        case 0x4608b4u: goto label_4608b4;
        case 0x4608b8u: goto label_4608b8;
        case 0x4608bcu: goto label_4608bc;
        case 0x4608c0u: goto label_4608c0;
        case 0x4608c4u: goto label_4608c4;
        case 0x4608c8u: goto label_4608c8;
        case 0x4608ccu: goto label_4608cc;
        case 0x4608d0u: goto label_4608d0;
        case 0x4608d4u: goto label_4608d4;
        case 0x4608d8u: goto label_4608d8;
        case 0x4608dcu: goto label_4608dc;
        case 0x4608e0u: goto label_4608e0;
        case 0x4608e4u: goto label_4608e4;
        case 0x4608e8u: goto label_4608e8;
        case 0x4608ecu: goto label_4608ec;
        case 0x4608f0u: goto label_4608f0;
        case 0x4608f4u: goto label_4608f4;
        case 0x4608f8u: goto label_4608f8;
        case 0x4608fcu: goto label_4608fc;
        case 0x460900u: goto label_460900;
        case 0x460904u: goto label_460904;
        case 0x460908u: goto label_460908;
        case 0x46090cu: goto label_46090c;
        case 0x460910u: goto label_460910;
        case 0x460914u: goto label_460914;
        case 0x460918u: goto label_460918;
        case 0x46091cu: goto label_46091c;
        case 0x460920u: goto label_460920;
        case 0x460924u: goto label_460924;
        case 0x460928u: goto label_460928;
        case 0x46092cu: goto label_46092c;
        case 0x460930u: goto label_460930;
        case 0x460934u: goto label_460934;
        case 0x460938u: goto label_460938;
        case 0x46093cu: goto label_46093c;
        case 0x460940u: goto label_460940;
        case 0x460944u: goto label_460944;
        case 0x460948u: goto label_460948;
        case 0x46094cu: goto label_46094c;
        case 0x460950u: goto label_460950;
        case 0x460954u: goto label_460954;
        case 0x460958u: goto label_460958;
        case 0x46095cu: goto label_46095c;
        case 0x460960u: goto label_460960;
        case 0x460964u: goto label_460964;
        case 0x460968u: goto label_460968;
        case 0x46096cu: goto label_46096c;
        case 0x460970u: goto label_460970;
        case 0x460974u: goto label_460974;
        case 0x460978u: goto label_460978;
        case 0x46097cu: goto label_46097c;
        case 0x460980u: goto label_460980;
        case 0x460984u: goto label_460984;
        case 0x460988u: goto label_460988;
        case 0x46098cu: goto label_46098c;
        case 0x460990u: goto label_460990;
        case 0x460994u: goto label_460994;
        case 0x460998u: goto label_460998;
        case 0x46099cu: goto label_46099c;
        case 0x4609a0u: goto label_4609a0;
        case 0x4609a4u: goto label_4609a4;
        case 0x4609a8u: goto label_4609a8;
        case 0x4609acu: goto label_4609ac;
        case 0x4609b0u: goto label_4609b0;
        case 0x4609b4u: goto label_4609b4;
        case 0x4609b8u: goto label_4609b8;
        case 0x4609bcu: goto label_4609bc;
        case 0x4609c0u: goto label_4609c0;
        case 0x4609c4u: goto label_4609c4;
        case 0x4609c8u: goto label_4609c8;
        case 0x4609ccu: goto label_4609cc;
        case 0x4609d0u: goto label_4609d0;
        case 0x4609d4u: goto label_4609d4;
        case 0x4609d8u: goto label_4609d8;
        case 0x4609dcu: goto label_4609dc;
        case 0x4609e0u: goto label_4609e0;
        case 0x4609e4u: goto label_4609e4;
        case 0x4609e8u: goto label_4609e8;
        case 0x4609ecu: goto label_4609ec;
        case 0x4609f0u: goto label_4609f0;
        case 0x4609f4u: goto label_4609f4;
        case 0x4609f8u: goto label_4609f8;
        case 0x4609fcu: goto label_4609fc;
        case 0x460a00u: goto label_460a00;
        case 0x460a04u: goto label_460a04;
        case 0x460a08u: goto label_460a08;
        case 0x460a0cu: goto label_460a0c;
        case 0x460a10u: goto label_460a10;
        case 0x460a14u: goto label_460a14;
        case 0x460a18u: goto label_460a18;
        case 0x460a1cu: goto label_460a1c;
        case 0x460a20u: goto label_460a20;
        case 0x460a24u: goto label_460a24;
        case 0x460a28u: goto label_460a28;
        case 0x460a2cu: goto label_460a2c;
        case 0x460a30u: goto label_460a30;
        case 0x460a34u: goto label_460a34;
        case 0x460a38u: goto label_460a38;
        case 0x460a3cu: goto label_460a3c;
        case 0x460a40u: goto label_460a40;
        case 0x460a44u: goto label_460a44;
        case 0x460a48u: goto label_460a48;
        case 0x460a4cu: goto label_460a4c;
        case 0x460a50u: goto label_460a50;
        case 0x460a54u: goto label_460a54;
        case 0x460a58u: goto label_460a58;
        case 0x460a5cu: goto label_460a5c;
        case 0x460a60u: goto label_460a60;
        case 0x460a64u: goto label_460a64;
        case 0x460a68u: goto label_460a68;
        case 0x460a6cu: goto label_460a6c;
        case 0x460a70u: goto label_460a70;
        case 0x460a74u: goto label_460a74;
        case 0x460a78u: goto label_460a78;
        case 0x460a7cu: goto label_460a7c;
        case 0x460a80u: goto label_460a80;
        case 0x460a84u: goto label_460a84;
        case 0x460a88u: goto label_460a88;
        case 0x460a8cu: goto label_460a8c;
        case 0x460a90u: goto label_460a90;
        case 0x460a94u: goto label_460a94;
        case 0x460a98u: goto label_460a98;
        case 0x460a9cu: goto label_460a9c;
        case 0x460aa0u: goto label_460aa0;
        case 0x460aa4u: goto label_460aa4;
        case 0x460aa8u: goto label_460aa8;
        case 0x460aacu: goto label_460aac;
        default: break;
    }

    ctx->pc = 0x460830u;

label_460830:
    // 0x460830: 0x27bdfd50  addiu       $sp, $sp, -0x2B0
    ctx->pc = 0x460830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966608));
label_460834:
    // 0x460834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x460834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_460838:
    // 0x460838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x460838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_46083c:
    // 0x46083c: 0xafa40280  sw          $a0, 0x280($sp)
    ctx->pc = 0x46083cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 4));
label_460840:
    // 0x460840: 0xafa50290  sw          $a1, 0x290($sp)
    ctx->pc = 0x460840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 5));
label_460844:
    // 0x460844: 0xafa602a0  sw          $a2, 0x2A0($sp)
    ctx->pc = 0x460844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 6));
label_460848:
    // 0x460848: 0x8f84bfb0  lw          $a0, -0x4050($gp)
    ctx->pc = 0x460848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950832)));
label_46084c:
    // 0x46084c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46084cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_460850:
    // 0x460850: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
label_460854:
    if (ctx->pc == 0x460854u) {
        ctx->pc = 0x460858u;
        goto label_460858;
    }
    ctx->pc = 0x460850u;
    {
        const bool branch_taken_0x460850 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x460850) {
            ctx->pc = 0x4608DCu;
            goto label_4608dc;
        }
    }
    ctx->pc = 0x460858u;
label_460858:
    // 0x460858: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_46085c:
    if (ctx->pc == 0x46085Cu) {
        ctx->pc = 0x460860u;
        goto label_460860;
    }
    ctx->pc = 0x460858u;
    {
        const bool branch_taken_0x460858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x460858) {
            ctx->pc = 0x460868u;
            goto label_460868;
        }
    }
    ctx->pc = 0x460860u;
label_460860:
    // 0x460860: 0x10000063  b           . + 4 + (0x63 << 2)
label_460864:
    if (ctx->pc == 0x460864u) {
        ctx->pc = 0x460868u;
        goto label_460868;
    }
    ctx->pc = 0x460860u;
    {
        const bool branch_taken_0x460860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x460860) {
            ctx->pc = 0x4609F0u;
            goto label_4609f0;
        }
    }
    ctx->pc = 0x460868u;
label_460868:
    // 0x460868: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x460868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_46086c:
    // 0x46086c: 0x8c474e10  lw          $a3, 0x4E10($v0)
    ctx->pc = 0x46086cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19984)));
label_460870:
    // 0x460870: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x460870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_460874:
    // 0x460874: 0x8c434e10  lw          $v1, 0x4E10($v0)
    ctx->pc = 0x460874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19984)));
label_460878:
    // 0x460878: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x460878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_46087c:
    // 0x46087c: 0x8c444e00  lw          $a0, 0x4E00($v0)
    ctx->pc = 0x46087cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19968)));
label_460880:
    // 0x460880: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x460880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_460884:
    // 0x460884: 0x8c454e04  lw          $a1, 0x4E04($v0)
    ctx->pc = 0x460884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19972)));
label_460888:
    // 0x460888: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x460888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_46088c:
    // 0x46088c: 0x8c464e10  lw          $a2, 0x4E10($v0)
    ctx->pc = 0x46088cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19984)));
label_460890:
    // 0x460890: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x460890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_460894:
    // 0x460894: 0x24680008  addiu       $t0, $v1, 0x8
    ctx->pc = 0x460894u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_460898:
    // 0x460898: 0xc0c3cd6  jal         func_30F358
label_46089c:
    if (ctx->pc == 0x46089Cu) {
        ctx->pc = 0x4608A0u;
        goto label_4608a0;
    }
    ctx->pc = 0x460898u;
    SET_GPR_U32(ctx, 31, 0x4608A0u);
    ctx->pc = 0x30F358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F358u, 0x460898u, 0x4608A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4608A0u;
label_4608a0:
    // 0x4608a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4608a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4608a4:
    // 0x4608a4: 0x6010008  bgez        $s0, . + 4 + (0x8 << 2)
label_4608a8:
    if (ctx->pc == 0x4608A8u) {
        ctx->pc = 0x4608ACu;
        goto label_4608ac;
    }
    ctx->pc = 0x4608A4u;
    {
        const bool branch_taken_0x4608a4 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x4608a4) {
            ctx->pc = 0x4608C8u;
            goto label_4608c8;
        }
    }
    ctx->pc = 0x4608ACu;
label_4608ac:
    // 0x4608ac: 0xaf90bfb4  sw          $s0, -0x404C($gp)
    ctx->pc = 0x4608acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 16));
label_4608b0:
    // 0x4608b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4608b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4608b4:
    // 0x4608b4: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x4608b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_4608b8:
    // 0x4608b8: 0xc1181ac  jal         func_4606B0
label_4608bc:
    if (ctx->pc == 0x4608BCu) {
        ctx->pc = 0x4608C0u;
        goto label_4608c0;
    }
    ctx->pc = 0x4608B8u;
    SET_GPR_U32(ctx, 31, 0x4608C0u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x4608B8u, 0x4608C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4608C0u;
label_4608c0:
    // 0x4608c0: 0x10000074  b           . + 4 + (0x74 << 2)
label_4608c4:
    if (ctx->pc == 0x4608C4u) {
        ctx->pc = 0x4608C8u;
        goto label_4608c8;
    }
    ctx->pc = 0x4608C0u;
    {
        const bool branch_taken_0x4608c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4608c0) {
            ctx->pc = 0x460A94u;
            goto label_460a94;
        }
    }
    ctx->pc = 0x4608C8u;
label_4608c8:
    // 0x4608c8: 0x8f83bfb0  lw          $v1, -0x4050($gp)
    ctx->pc = 0x4608c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950832)));
label_4608cc:
    // 0x4608cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4608ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4608d0:
    // 0x4608d0: 0xaf83bfb0  sw          $v1, -0x4050($gp)
    ctx->pc = 0x4608d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950832), GPR_U32(ctx, 3));
label_4608d4:
    // 0x4608d4: 0x1000006f  b           . + 4 + (0x6F << 2)
label_4608d8:
    if (ctx->pc == 0x4608D8u) {
        ctx->pc = 0x4608DCu;
        goto label_4608dc;
    }
    ctx->pc = 0x4608D4u;
    {
        const bool branch_taken_0x4608d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4608d4) {
            ctx->pc = 0x460A94u;
            goto label_460a94;
        }
    }
    ctx->pc = 0x4608DCu;
label_4608dc:
    // 0x4608dc: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x4608dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_4608e0:
    // 0x4608e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4608e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4608e4:
    // 0x4608e4: 0x1483006b  bne         $a0, $v1, . + 4 + (0x6B << 2)
label_4608e8:
    if (ctx->pc == 0x4608E8u) {
        ctx->pc = 0x4608ECu;
        goto label_4608ec;
    }
    ctx->pc = 0x4608E4u;
    {
        const bool branch_taken_0x4608e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4608e4) {
            ctx->pc = 0x460A94u;
            goto label_460a94;
        }
    }
    ctx->pc = 0x4608ECu;
label_4608ec:
    // 0x4608ec: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x4608ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_4608f0:
    // 0x4608f0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4608f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4608f4:
    // 0x4608f4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4608f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4608f8:
    // 0x4608f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4608f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4608fc:
    // 0x4608fc: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_460900:
    if (ctx->pc == 0x460900u) {
        ctx->pc = 0x460904u;
        goto label_460904;
    }
    ctx->pc = 0x4608FCu;
    {
        const bool branch_taken_0x4608fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4608fc) {
            ctx->pc = 0x4609ACu;
            goto label_4609ac;
        }
    }
    ctx->pc = 0x460904u;
label_460904:
    // 0x460904: 0x8f82b1ec  lw          $v0, -0x4E14($gp)
    ctx->pc = 0x460904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947308)));
label_460908:
    // 0x460908: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_46090c:
    if (ctx->pc == 0x46090Cu) {
        ctx->pc = 0x460910u;
        goto label_460910;
    }
    ctx->pc = 0x460908u;
    {
        const bool branch_taken_0x460908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460908) {
            ctx->pc = 0x4609ACu;
            goto label_4609ac;
        }
    }
    ctx->pc = 0x460910u;
label_460910:
    // 0x460910: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x460910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_460914:
    // 0x460914: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x460914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_460918:
    // 0x460918: 0x27a60270  addiu       $a2, $sp, 0x270
    ctx->pc = 0x460918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_46091c:
    // 0x46091c: 0xc115ee8  jal         func_457BA0
label_460920:
    if (ctx->pc == 0x460920u) {
        ctx->pc = 0x460924u;
        goto label_460924;
    }
    ctx->pc = 0x46091Cu;
    SET_GPR_U32(ctx, 31, 0x460924u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x46091Cu, 0x460924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460924u;
label_460924:
    // 0x460924: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_460928:
    if (ctx->pc == 0x460928u) {
        ctx->pc = 0x46092Cu;
        goto label_46092c;
    }
    ctx->pc = 0x460924u;
    {
        const bool branch_taken_0x460924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460924) {
            ctx->pc = 0x4609ACu;
            goto label_4609ac;
        }
    }
    ctx->pc = 0x46092Cu;
label_46092c:
    // 0x46092c: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x46092cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_460930:
    // 0x460930: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_460934:
    if (ctx->pc == 0x460934u) {
        ctx->pc = 0x460938u;
        goto label_460938;
    }
    ctx->pc = 0x460930u;
    {
        const bool branch_taken_0x460930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460930) {
            ctx->pc = 0x4609ACu;
            goto label_4609ac;
        }
    }
    ctx->pc = 0x460938u;
label_460938:
    // 0x460938: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x460938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_46093c:
    // 0x46093c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x46093cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_460940:
    // 0x460940: 0x8fa60274  lw          $a2, 0x274($sp)
    ctx->pc = 0x460940u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_460944:
    // 0x460944: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x460944u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_460948:
    // 0x460948: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x460948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_46094c:
    // 0x46094c: 0x24080589  addiu       $t0, $zero, 0x589
    ctx->pc = 0x46094cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1417));
label_460950:
    // 0x460950: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x460950u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_460954:
    // 0x460954: 0x2529ef80  addiu       $t1, $t1, -0x1080
    ctx->pc = 0x460954u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963072));
label_460958:
    // 0x460958: 0xc113940  jal         func_44E500
label_46095c:
    if (ctx->pc == 0x46095Cu) {
        ctx->pc = 0x460960u;
        goto label_460960;
    }
    ctx->pc = 0x460958u;
    SET_GPR_U32(ctx, 31, 0x460960u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x460958u, 0x460960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460960u;
label_460960:
    // 0x460960: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x460960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_460964:
    // 0x460964: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x460964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_460968:
    // 0x460968: 0x24a5efb0  addiu       $a1, $a1, -0x1050
    ctx->pc = 0x460968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963120));
label_46096c:
    // 0x46096c: 0xc115c24  jal         func_457090
label_460970:
    if (ctx->pc == 0x460970u) {
        ctx->pc = 0x460974u;
        goto label_460974;
    }
    ctx->pc = 0x46096Cu;
    SET_GPR_U32(ctx, 31, 0x460974u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x46096Cu, 0x460974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460974u;
label_460974:
    // 0x460974: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x460974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_460978:
    // 0x460978: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x460978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_46097c:
    // 0x46097c: 0x40f809  jalr        $v0
label_460980:
    if (ctx->pc == 0x460980u) {
        ctx->pc = 0x460984u;
        goto label_460984;
    }
    ctx->pc = 0x46097Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x460984u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46097Cu, 0x460984u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x460984u;
label_460984:
    // 0x460984: 0xaf82b1ec  sw          $v0, -0x4E14($gp)
    ctx->pc = 0x460984u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947308), GPR_U32(ctx, 2));
label_460988:
    // 0x460988: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x460988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_46098c:
    // 0x46098c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_460990:
    if (ctx->pc == 0x460990u) {
        ctx->pc = 0x460994u;
        goto label_460994;
    }
    ctx->pc = 0x46098Cu;
    {
        const bool branch_taken_0x46098c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46098c) {
            ctx->pc = 0x46099Cu;
            goto label_46099c;
        }
    }
    ctx->pc = 0x460994u;
label_460994:
    // 0x460994: 0xd  break       0
    ctx->pc = 0x460994u;
    runtime->handleBreak(rdram, ctx);
label_460998:
    // 0x460998: 0x0  nop
    ctx->pc = 0x460998u;
    // NOP
label_46099c:
    // 0x46099c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x46099cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4609a0:
    // 0x4609a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4609a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4609a4:
    // 0x4609a4: 0xc11392c  jal         func_44E4B0
label_4609a8:
    if (ctx->pc == 0x4609A8u) {
        ctx->pc = 0x4609ACu;
        goto label_4609ac;
    }
    ctx->pc = 0x4609A4u;
    SET_GPR_U32(ctx, 31, 0x4609ACu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4609A4u, 0x4609ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4609ACu;
label_4609ac:
    // 0x4609ac: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x4609acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_4609b0:
    // 0x4609b0: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
label_4609b4:
    if (ctx->pc == 0x4609B4u) {
        ctx->pc = 0x4609B8u;
        goto label_4609b8;
    }
    ctx->pc = 0x4609B0u;
    {
        const bool branch_taken_0x4609b0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4609b0) {
            ctx->pc = 0x4609D8u;
            goto label_4609d8;
        }
    }
    ctx->pc = 0x4609B8u;
label_4609b8:
    // 0x4609b8: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x4609b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_4609bc:
    // 0x4609bc: 0xaf82bfb4  sw          $v0, -0x404C($gp)
    ctx->pc = 0x4609bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 2));
label_4609c0:
    // 0x4609c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4609c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4609c4:
    // 0x4609c4: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x4609c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_4609c8:
    // 0x4609c8: 0xc1181ac  jal         func_4606B0
label_4609cc:
    if (ctx->pc == 0x4609CCu) {
        ctx->pc = 0x4609D0u;
        goto label_4609d0;
    }
    ctx->pc = 0x4609C8u;
    SET_GPR_U32(ctx, 31, 0x4609D0u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x4609C8u, 0x4609D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4609D0u;
label_4609d0:
    // 0x4609d0: 0x10000030  b           . + 4 + (0x30 << 2)
label_4609d4:
    if (ctx->pc == 0x4609D4u) {
        ctx->pc = 0x4609D8u;
        goto label_4609d8;
    }
    ctx->pc = 0x4609D0u;
    {
        const bool branch_taken_0x4609d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4609d0) {
            ctx->pc = 0x460A94u;
            goto label_460a94;
        }
    }
    ctx->pc = 0x4609D8u;
label_4609d8:
    // 0x4609d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4609d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4609dc:
    // 0x4609dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4609dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4609e0:
    // 0x4609e0: 0xc1181ac  jal         func_4606B0
label_4609e4:
    if (ctx->pc == 0x4609E4u) {
        ctx->pc = 0x4609E8u;
        goto label_4609e8;
    }
    ctx->pc = 0x4609E0u;
    SET_GPR_U32(ctx, 31, 0x4609E8u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x4609E0u, 0x4609E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4609E8u;
label_4609e8:
    // 0x4609e8: 0x1000002a  b           . + 4 + (0x2A << 2)
label_4609ec:
    if (ctx->pc == 0x4609ECu) {
        ctx->pc = 0x4609F0u;
        goto label_4609f0;
    }
    ctx->pc = 0x4609E8u;
    {
        const bool branch_taken_0x4609e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4609e8) {
            ctx->pc = 0x460A94u;
            goto label_460a94;
        }
    }
    ctx->pc = 0x4609F0u;
label_4609f0:
    // 0x4609f0: 0x8f83b1f0  lw          $v1, -0x4E10($gp)
    ctx->pc = 0x4609f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947312)));
label_4609f4:
    // 0x4609f4: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_4609f8:
    if (ctx->pc == 0x4609F8u) {
        ctx->pc = 0x4609FCu;
        goto label_4609fc;
    }
    ctx->pc = 0x4609F4u;
    {
        const bool branch_taken_0x4609f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4609f4) {
            ctx->pc = 0x460A94u;
            goto label_460a94;
        }
    }
    ctx->pc = 0x4609FCu;
label_4609fc:
    // 0x4609fc: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4609fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_460a00:
    // 0x460a00: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x460a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_460a04:
    // 0x460a04: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x460a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_460a08:
    // 0x460a08: 0xc115ee8  jal         func_457BA0
label_460a0c:
    if (ctx->pc == 0x460A0Cu) {
        ctx->pc = 0x460A10u;
        goto label_460a10;
    }
    ctx->pc = 0x460A08u;
    SET_GPR_U32(ctx, 31, 0x460A10u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x460A08u, 0x460A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460A10u;
label_460a10:
    // 0x460a10: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_460a14:
    if (ctx->pc == 0x460A14u) {
        ctx->pc = 0x460A18u;
        goto label_460a18;
    }
    ctx->pc = 0x460A10u;
    {
        const bool branch_taken_0x460a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460a10) {
            ctx->pc = 0x460A94u;
            goto label_460a94;
        }
    }
    ctx->pc = 0x460A18u;
label_460a18:
    // 0x460a18: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x460a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_460a1c:
    // 0x460a1c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_460a20:
    if (ctx->pc == 0x460A20u) {
        ctx->pc = 0x460A24u;
        goto label_460a24;
    }
    ctx->pc = 0x460A1Cu;
    {
        const bool branch_taken_0x460a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x460a1c) {
            ctx->pc = 0x460A94u;
            goto label_460a94;
        }
    }
    ctx->pc = 0x460A24u;
label_460a24:
    // 0x460a24: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x460a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_460a28:
    // 0x460a28: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x460a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_460a2c:
    // 0x460a2c: 0x8fa60264  lw          $a2, 0x264($sp)
    ctx->pc = 0x460a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_460a30:
    // 0x460a30: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x460a30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_460a34:
    // 0x460a34: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x460a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_460a38:
    // 0x460a38: 0x24080597  addiu       $t0, $zero, 0x597
    ctx->pc = 0x460a38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1431));
label_460a3c:
    // 0x460a3c: 0x2789b1cc  addiu       $t1, $gp, -0x4E34
    ctx->pc = 0x460a3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947276));
label_460a40:
    // 0x460a40: 0xc113940  jal         func_44E500
label_460a44:
    if (ctx->pc == 0x460A44u) {
        ctx->pc = 0x460A48u;
        goto label_460a48;
    }
    ctx->pc = 0x460A40u;
    SET_GPR_U32(ctx, 31, 0x460A48u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x460A40u, 0x460A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460A48u;
label_460a48:
    // 0x460a48: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x460a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_460a4c:
    // 0x460a4c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x460a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_460a50:
    // 0x460a50: 0x24a5efd0  addiu       $a1, $a1, -0x1030
    ctx->pc = 0x460a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963152));
label_460a54:
    // 0x460a54: 0xc115c24  jal         func_457090
label_460a58:
    if (ctx->pc == 0x460A58u) {
        ctx->pc = 0x460A5Cu;
        goto label_460a5c;
    }
    ctx->pc = 0x460A54u;
    SET_GPR_U32(ctx, 31, 0x460A5Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x460A54u, 0x460A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460A5Cu;
label_460a5c:
    // 0x460a5c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x460a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_460a60:
    // 0x460a60: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x460a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_460a64:
    // 0x460a64: 0x40f809  jalr        $v0
label_460a68:
    if (ctx->pc == 0x460A68u) {
        ctx->pc = 0x460A6Cu;
        goto label_460a6c;
    }
    ctx->pc = 0x460A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x460A6Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x460A64u, 0x460A6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x460A6Cu;
label_460a6c:
    // 0x460a6c: 0xaf82b1f0  sw          $v0, -0x4E10($gp)
    ctx->pc = 0x460a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947312), GPR_U32(ctx, 2));
label_460a70:
    // 0x460a70: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x460a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_460a74:
    // 0x460a74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_460a78:
    if (ctx->pc == 0x460A78u) {
        ctx->pc = 0x460A7Cu;
        goto label_460a7c;
    }
    ctx->pc = 0x460A74u;
    {
        const bool branch_taken_0x460a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460a74) {
            ctx->pc = 0x460A84u;
            goto label_460a84;
        }
    }
    ctx->pc = 0x460A7Cu;
label_460a7c:
    // 0x460a7c: 0xd  break       0
    ctx->pc = 0x460a7cu;
    runtime->handleBreak(rdram, ctx);
label_460a80:
    // 0x460a80: 0x0  nop
    ctx->pc = 0x460a80u;
    // NOP
label_460a84:
    // 0x460a84: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x460a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_460a88:
    // 0x460a88: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x460a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_460a8c:
    // 0x460a8c: 0xc11392c  jal         func_44E4B0
label_460a90:
    if (ctx->pc == 0x460A90u) {
        ctx->pc = 0x460A94u;
        goto label_460a94;
    }
    ctx->pc = 0x460A8Cu;
    SET_GPR_U32(ctx, 31, 0x460A94u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x460A8Cu, 0x460A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460A94u;
label_460a94:
    // 0x460a94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x460a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_460a98:
    // 0x460a98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x460a98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_460a9c:
    // 0x460a9c: 0x27bd02b0  addiu       $sp, $sp, 0x2B0
    ctx->pc = 0x460a9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_460aa0:
    // 0x460aa0: 0x3e00008  jr          $ra
label_460aa4:
    if (ctx->pc == 0x460AA4u) {
        ctx->pc = 0x460AA8u;
        goto label_460aa8;
    }
    ctx->pc = 0x460AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x460AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x460AA8u;
label_460aa8:
    // 0x460aa8: 0x0  nop
    ctx->pc = 0x460aa8u;
    // NOP
label_460aac:
    // 0x460aac: 0x0  nop
    ctx->pc = 0x460aacu;
    // NOP
    ctx->pc = 0x460ab0u;
}
