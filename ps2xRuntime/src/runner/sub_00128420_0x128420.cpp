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

// Function: sub_00128420
// Address: 0x128420 - 0x128850
void sub_00128420_0x128420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128420_0x128420");
#endif

    switch (ctx->pc) {
        case 0x12847cu: goto label_12847c;
        case 0x128490u: goto label_128490;
        case 0x1284a4u: goto label_1284a4;
        case 0x1284b0u: goto label_1284b0;
        case 0x1284bcu: goto label_1284bc;
        case 0x1284c8u: goto label_1284c8;
        case 0x1284d4u: goto label_1284d4;
        case 0x1284f0u: goto label_1284f0;
        case 0x12850cu: goto label_12850c;
        case 0x128528u: goto label_128528;
        case 0x128534u: goto label_128534;
        case 0x128560u: goto label_128560;
        case 0x128570u: goto label_128570;
        case 0x1285a4u: goto label_1285a4;
        case 0x1285b4u: goto label_1285b4;
        case 0x1285e8u: goto label_1285e8;
        case 0x1285f8u: goto label_1285f8;
        case 0x12862cu: goto label_12862c;
        case 0x12863cu: goto label_12863c;
        case 0x128670u: goto label_128670;
        case 0x128680u: goto label_128680;
        case 0x1286b4u: goto label_1286b4;
        case 0x1286c4u: goto label_1286c4;
        case 0x1287c0u: goto label_1287c0;
        case 0x1287d0u: goto label_1287d0;
        case 0x1287e0u: goto label_1287e0;
        case 0x1287f0u: goto label_1287f0;
        case 0x128800u: goto label_128800;
        case 0x128810u: goto label_128810;
        default: break;
    }

    ctx->pc = 0x128420u;

    // 0x128420: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x128420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x128424: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x128424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x128428: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x128428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x12842c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x12842cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x128430: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x128430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x128434: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x128434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x128438: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x128438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x12843c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12843cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x128440: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x128440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x128444: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x128444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x128448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x128448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12844c: 0xafa50120  sw          $a1, 0x120($sp)
    ctx->pc = 0x12844cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 5));
    // 0x128450: 0xa3a0010f  sb          $zero, 0x10F($sp)
    ctx->pc = 0x128450u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 271), (uint8_t)GPR_U32(ctx, 0));
    // 0x128454: 0xa3a0010e  sb          $zero, 0x10E($sp)
    ctx->pc = 0x128454u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 270), (uint8_t)GPR_U32(ctx, 0));
    // 0x128458: 0xa3a0010d  sb          $zero, 0x10D($sp)
    ctx->pc = 0x128458u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 269), (uint8_t)GPR_U32(ctx, 0));
    // 0x12845c: 0xa3a0010c  sb          $zero, 0x10C($sp)
    ctx->pc = 0x12845cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 268), (uint8_t)GPR_U32(ctx, 0));
    // 0x128460: 0xa3a0010b  sb          $zero, 0x10B($sp)
    ctx->pc = 0x128460u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 267), (uint8_t)GPR_U32(ctx, 0));
    // 0x128464: 0xa3a0010a  sb          $zero, 0x10A($sp)
    ctx->pc = 0x128464u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 266), (uint8_t)GPR_U32(ctx, 0));
    // 0x128468: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x128468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x12846c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x12846cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x128470: 0x24a52280  addiu       $a1, $a1, 0x2280
    ctx->pc = 0x128470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8832));
    // 0x128474: 0xc118058  jal         func_460160
    ctx->pc = 0x128474u;
    SET_GPR_U32(ctx, 31, 0x12847Cu);
    ctx->pc = 0x460160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x460160u, 0x128474u, 0x12847Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12847Cu;
label_12847c:
    // 0x12847c: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x12847cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x128480: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x128480u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x128484: 0x24a52468  addiu       $a1, $a1, 0x2468
    ctx->pc = 0x128484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9320));
    // 0x128488: 0xc040304  jal         func_100C10
    ctx->pc = 0x128488u;
    SET_GPR_U32(ctx, 31, 0x128490u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x128488u, 0x128490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128490u;
label_128490:
    // 0x128490: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x128490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x128494: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x128494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x128498: 0x24a52458  addiu       $a1, $a1, 0x2458
    ctx->pc = 0x128498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9304));
    // 0x12849c: 0xc040304  jal         func_100C10
    ctx->pc = 0x12849Cu;
    SET_GPR_U32(ctx, 31, 0x1284A4u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x12849Cu, 0x1284A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1284A4u;
label_1284a4:
    // 0x1284a4: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x1284a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x1284a8: 0xc041b48  jal         func_106D20
    ctx->pc = 0x1284A8u;
    SET_GPR_U32(ctx, 31, 0x1284B0u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x1284A8u, 0x1284B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1284B0u;
label_1284b0:
    // 0x1284b0: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1284b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x1284b4: 0xc041b48  jal         func_106D20
    ctx->pc = 0x1284B4u;
    SET_GPR_U32(ctx, 31, 0x1284BCu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x1284B4u, 0x1284BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1284BCu;
label_1284bc:
    // 0x1284bc: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x1284bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x1284c0: 0xc041b48  jal         func_106D20
    ctx->pc = 0x1284C0u;
    SET_GPR_U32(ctx, 31, 0x1284C8u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x1284C0u, 0x1284C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1284C8u;
label_1284c8:
    // 0x1284c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1284c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1284cc: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x1284CCu;
    {
        const bool branch_taken_0x1284cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1284cc) {
            ctx->pc = 0x1286FCu;
            goto label_1286fc;
        }
    }
    ctx->pc = 0x1284D4u;
label_1284d4:
    // 0x1284d4: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x1284d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x1284d8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1284d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1284dc: 0x24a52498  addiu       $a1, $a1, 0x2498
    ctx->pc = 0x1284dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9368));
    // 0x1284e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1284e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1284e4: 0x27878b50  addiu       $a3, $gp, -0x74B0
    ctx->pc = 0x1284e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937424));
    // 0x1284e8: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x1284E8u;
    SET_GPR_U32(ctx, 31, 0x1284F0u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x1284E8u, 0x1284F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1284F0u;
label_1284f0:
    // 0x1284f0: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1284f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x1284f4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1284f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1284f8: 0x24a524a8  addiu       $a1, $a1, 0x24A8
    ctx->pc = 0x1284f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9384));
    // 0x1284fc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1284fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128500: 0x27878b50  addiu       $a3, $gp, -0x74B0
    ctx->pc = 0x128500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937424));
    // 0x128504: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x128504u;
    SET_GPR_U32(ctx, 31, 0x12850Cu);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x128504u, 0x12850Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12850Cu;
label_12850c:
    // 0x12850c: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x12850cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x128510: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x128510u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x128514: 0x24a52290  addiu       $a1, $a1, 0x2290
    ctx->pc = 0x128514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8848));
    // 0x128518: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x128518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12851c: 0x27878b50  addiu       $a3, $gp, -0x74B0
    ctx->pc = 0x12851cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937424));
    // 0x128520: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x128520u;
    SET_GPR_U32(ctx, 31, 0x128528u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x128520u, 0x128528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128528u;
label_128528:
    // 0x128528: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x128528u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12852c: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x12852Cu;
    {
        const bool branch_taken_0x12852c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12852c) {
            ctx->pc = 0x1286E8u;
            goto label_1286e8;
        }
    }
    ctx->pc = 0x128534u;
label_128534:
    // 0x128534: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x128534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x128538: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x128538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x12853c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12853cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x128540: 0x24510020  addiu       $s1, $v0, 0x20
    ctx->pc = 0x128540u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x128544: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x128544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x128548: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x128548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x12854c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12854cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x128550: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x128550u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x128554: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x128554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x128558: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x128558u;
    SET_GPR_U32(ctx, 31, 0x128560u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x128558u, 0x128560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128560u;
label_128560:
    // 0x128560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x128560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128564: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x128564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128568: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x128568u;
    SET_GPR_U32(ctx, 31, 0x128570u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x128568u, 0x128570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128570u;
label_128570:
    // 0x128570: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x128570u;
    {
        const bool branch_taken_0x128570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128570) {
            ctx->pc = 0x128598u;
            goto label_128598;
        }
    }
    ctx->pc = 0x128578u;
    // 0x128578: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x128578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x12857c: 0x8c422220  lw          $v0, 0x2220($v0)
    ctx->pc = 0x12857cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4E2220u));
    // 0x128580: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x128580u;
    {
        const bool branch_taken_0x128580 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x128580) {
            ctx->pc = 0x128598u;
            goto label_128598;
        }
    }
    ctx->pc = 0x128588u;
    // 0x128588: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x128588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12858c: 0xa3a2010f  sb          $v0, 0x10F($sp)
    ctx->pc = 0x12858cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 271), (uint8_t)GPR_U32(ctx, 2));
    // 0x128590: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x128590u;
    {
        const bool branch_taken_0x128590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128590) {
            ctx->pc = 0x1286E4u;
            goto label_1286e4;
        }
    }
    ctx->pc = 0x128598u;
label_128598:
    // 0x128598: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x128598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x12859c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x12859Cu;
    SET_GPR_U32(ctx, 31, 0x1285A4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x12859Cu, 0x1285A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1285A4u;
label_1285a4:
    // 0x1285a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1285a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1285a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1285a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1285ac: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x1285ACu;
    SET_GPR_U32(ctx, 31, 0x1285B4u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x1285ACu, 0x1285B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1285B4u;
label_1285b4:
    // 0x1285b4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1285B4u;
    {
        const bool branch_taken_0x1285b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1285b4) {
            ctx->pc = 0x1285DCu;
            goto label_1285dc;
        }
    }
    ctx->pc = 0x1285BCu;
    // 0x1285bc: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1285bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1285c0: 0x8c42221c  lw          $v0, 0x221C($v0)
    ctx->pc = 0x1285c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4E221Cu));
    // 0x1285c4: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1285C4u;
    {
        const bool branch_taken_0x1285c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1285c4) {
            ctx->pc = 0x1285DCu;
            goto label_1285dc;
        }
    }
    ctx->pc = 0x1285CCu;
    // 0x1285cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1285ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1285d0: 0xa3a2010e  sb          $v0, 0x10E($sp)
    ctx->pc = 0x1285d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 270), (uint8_t)GPR_U32(ctx, 2));
    // 0x1285d4: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1285D4u;
    {
        const bool branch_taken_0x1285d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1285d4) {
            ctx->pc = 0x1286E4u;
            goto label_1286e4;
        }
    }
    ctx->pc = 0x1285DCu;
label_1285dc:
    // 0x1285dc: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x1285dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x1285e0: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1285E0u;
    SET_GPR_U32(ctx, 31, 0x1285E8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1285E0u, 0x1285E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1285E8u;
label_1285e8:
    // 0x1285e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1285e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1285ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1285ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1285f0: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x1285F0u;
    SET_GPR_U32(ctx, 31, 0x1285F8u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x1285F0u, 0x1285F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1285F8u;
label_1285f8:
    // 0x1285f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1285F8u;
    {
        const bool branch_taken_0x1285f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1285f8) {
            ctx->pc = 0x128620u;
            goto label_128620;
        }
    }
    ctx->pc = 0x128600u;
    // 0x128600: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x128600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x128604: 0x8c422218  lw          $v0, 0x2218($v0)
    ctx->pc = 0x128604u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4E2218u));
    // 0x128608: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x128608u;
    {
        const bool branch_taken_0x128608 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x128608) {
            ctx->pc = 0x128620u;
            goto label_128620;
        }
    }
    ctx->pc = 0x128610u;
    // 0x128610: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x128610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128614: 0xa3a2010d  sb          $v0, 0x10D($sp)
    ctx->pc = 0x128614u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 269), (uint8_t)GPR_U32(ctx, 2));
    // 0x128618: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x128618u;
    {
        const bool branch_taken_0x128618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128618) {
            ctx->pc = 0x1286E4u;
            goto label_1286e4;
        }
    }
    ctx->pc = 0x128620u;
label_128620:
    // 0x128620: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x128620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x128624: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x128624u;
    SET_GPR_U32(ctx, 31, 0x12862Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x128624u, 0x12862Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12862Cu;
label_12862c:
    // 0x12862c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12862cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128630: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x128630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128634: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x128634u;
    SET_GPR_U32(ctx, 31, 0x12863Cu);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x128634u, 0x12863Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12863Cu;
label_12863c:
    // 0x12863c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12863Cu;
    {
        const bool branch_taken_0x12863c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12863c) {
            ctx->pc = 0x128664u;
            goto label_128664;
        }
    }
    ctx->pc = 0x128644u;
    // 0x128644: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x128644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x128648: 0x8c422210  lw          $v0, 0x2210($v0)
    ctx->pc = 0x128648u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4E2210u));
    // 0x12864c: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12864Cu;
    {
        const bool branch_taken_0x12864c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x12864c) {
            ctx->pc = 0x128664u;
            goto label_128664;
        }
    }
    ctx->pc = 0x128654u;
    // 0x128654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x128654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128658: 0xa3a2010a  sb          $v0, 0x10A($sp)
    ctx->pc = 0x128658u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 266), (uint8_t)GPR_U32(ctx, 2));
    // 0x12865c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x12865Cu;
    {
        const bool branch_taken_0x12865c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12865c) {
            ctx->pc = 0x1286E4u;
            goto label_1286e4;
        }
    }
    ctx->pc = 0x128664u;
label_128664:
    // 0x128664: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x128664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x128668: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x128668u;
    SET_GPR_U32(ctx, 31, 0x128670u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x128668u, 0x128670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128670u;
label_128670:
    // 0x128670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x128670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128674: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x128674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128678: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x128678u;
    SET_GPR_U32(ctx, 31, 0x128680u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x128678u, 0x128680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128680u;
label_128680:
    // 0x128680: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x128680u;
    {
        const bool branch_taken_0x128680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128680) {
            ctx->pc = 0x1286A8u;
            goto label_1286a8;
        }
    }
    ctx->pc = 0x128688u;
    // 0x128688: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x128688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x12868c: 0x8c422214  lw          $v0, 0x2214($v0)
    ctx->pc = 0x12868cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4E2214u));
    // 0x128690: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x128690u;
    {
        const bool branch_taken_0x128690 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x128690) {
            ctx->pc = 0x1286A8u;
            goto label_1286a8;
        }
    }
    ctx->pc = 0x128698u;
    // 0x128698: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x128698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12869c: 0xa3a2010b  sb          $v0, 0x10B($sp)
    ctx->pc = 0x12869cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 267), (uint8_t)GPR_U32(ctx, 2));
    // 0x1286a0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1286A0u;
    {
        const bool branch_taken_0x1286a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1286a0) {
            ctx->pc = 0x1286E4u;
            goto label_1286e4;
        }
    }
    ctx->pc = 0x1286A8u;
label_1286a8:
    // 0x1286a8: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x1286a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x1286ac: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1286ACu;
    SET_GPR_U32(ctx, 31, 0x1286B4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1286ACu, 0x1286B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1286B4u;
label_1286b4:
    // 0x1286b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1286b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1286b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1286b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1286bc: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x1286BCu;
    SET_GPR_U32(ctx, 31, 0x1286C4u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x1286BCu, 0x1286C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1286C4u;
label_1286c4:
    // 0x1286c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1286C4u;
    {
        const bool branch_taken_0x1286c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1286c4) {
            ctx->pc = 0x1286E4u;
            goto label_1286e4;
        }
    }
    ctx->pc = 0x1286CCu;
    // 0x1286cc: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1286ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1286d0: 0x8c422224  lw          $v0, 0x2224($v0)
    ctx->pc = 0x1286d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4E2224u));
    // 0x1286d4: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1286D4u;
    {
        const bool branch_taken_0x1286d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1286d4) {
            ctx->pc = 0x1286E4u;
            goto label_1286e4;
        }
    }
    ctx->pc = 0x1286DCu;
    // 0x1286dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1286dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1286e0: 0xa3a2010c  sb          $v0, 0x10C($sp)
    ctx->pc = 0x1286e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 268), (uint8_t)GPR_U32(ctx, 2));
label_1286e4:
    // 0x1286e4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1286e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1286e8:
    // 0x1286e8: 0x8f82ba14  lw          $v0, -0x45EC($gp)
    ctx->pc = 0x1286e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949396)));
    // 0x1286ec: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1286ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1286f0: 0x1440ff90  bnez        $v0, . + 4 + (-0x70 << 2)
    ctx->pc = 0x1286F0u;
    {
        const bool branch_taken_0x1286f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1286f0) {
            ctx->pc = 0x128534u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128534;
        }
    }
    ctx->pc = 0x1286F8u;
    // 0x1286f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1286f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1286fc:
    // 0x1286fc: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x1286fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x128700: 0x1440ff74  bnez        $v0, . + 4 + (-0x8C << 2)
    ctx->pc = 0x128700u;
    {
        const bool branch_taken_0x128700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128700) {
            ctx->pc = 0x1284D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1284d4;
        }
    }
    ctx->pc = 0x128708u;
    // 0x128708: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x128708u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12870c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x12870cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128710: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x128710u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128714: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x128714u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128718: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x128718u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12871c: 0x93a2010f  lbu         $v0, 0x10F($sp)
    ctx->pc = 0x12871cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 271)));
    // 0x128720: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x128720u;
    {
        const bool branch_taken_0x128720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128720) {
            ctx->pc = 0x12873Cu;
            goto label_12873c;
        }
    }
    ctx->pc = 0x128728u;
    // 0x128728: 0x93a2010e  lbu         $v0, 0x10E($sp)
    ctx->pc = 0x128728u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 270)));
    // 0x12872c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12872Cu;
    {
        const bool branch_taken_0x12872c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12872c) {
            ctx->pc = 0x12873Cu;
            goto label_12873c;
        }
    }
    ctx->pc = 0x128734u;
    // 0x128734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x128734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128738: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x128738u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12873c:
    // 0x12873c: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x12873Cu;
    {
        const bool branch_taken_0x12873c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x12873c) {
            ctx->pc = 0x128758u;
            goto label_128758;
        }
    }
    ctx->pc = 0x128744u;
    // 0x128744: 0x93a2010d  lbu         $v0, 0x10D($sp)
    ctx->pc = 0x128744u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 269)));
    // 0x128748: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x128748u;
    {
        const bool branch_taken_0x128748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128748) {
            ctx->pc = 0x128758u;
            goto label_128758;
        }
    }
    ctx->pc = 0x128750u;
    // 0x128750: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x128750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128754: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x128754u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_128758:
    // 0x128758: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x128758u;
    {
        const bool branch_taken_0x128758 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x128758) {
            ctx->pc = 0x128774u;
            goto label_128774;
        }
    }
    ctx->pc = 0x128760u;
    // 0x128760: 0x93a2010c  lbu         $v0, 0x10C($sp)
    ctx->pc = 0x128760u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x128764: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x128764u;
    {
        const bool branch_taken_0x128764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128764) {
            ctx->pc = 0x128774u;
            goto label_128774;
        }
    }
    ctx->pc = 0x12876Cu;
    // 0x12876c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12876cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128770: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x128770u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_128774:
    // 0x128774: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x128774u;
    {
        const bool branch_taken_0x128774 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x128774) {
            ctx->pc = 0x128790u;
            goto label_128790;
        }
    }
    ctx->pc = 0x12877Cu;
    // 0x12877c: 0x93a2010b  lbu         $v0, 0x10B($sp)
    ctx->pc = 0x12877cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 267)));
    // 0x128780: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x128780u;
    {
        const bool branch_taken_0x128780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128780) {
            ctx->pc = 0x128790u;
            goto label_128790;
        }
    }
    ctx->pc = 0x128788u;
    // 0x128788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x128788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12878c: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x12878cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_128790:
    // 0x128790: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x128790u;
    {
        const bool branch_taken_0x128790 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x128790) {
            ctx->pc = 0x1287ACu;
            goto label_1287ac;
        }
    }
    ctx->pc = 0x128798u;
    // 0x128798: 0x93a2010a  lbu         $v0, 0x10A($sp)
    ctx->pc = 0x128798u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 266)));
    // 0x12879c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12879Cu;
    {
        const bool branch_taken_0x12879c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12879c) {
            ctx->pc = 0x1287ACu;
            goto label_1287ac;
        }
    }
    ctx->pc = 0x1287A4u;
    // 0x1287a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1287a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1287a8: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x1287a8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1287ac:
    // 0x1287ac: 0xa3be0109  sb          $fp, 0x109($sp)
    ctx->pc = 0x1287acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 265), (uint8_t)GPR_U32(ctx, 30));
    // 0x1287b0: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x1287b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x1287b4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1287b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1287b8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1287B8u;
    SET_GPR_U32(ctx, 31, 0x1287C0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1287B8u, 0x1287C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1287C0u;
label_1287c0:
    // 0x1287c0: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1287c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x1287c4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1287c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1287c8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1287C8u;
    SET_GPR_U32(ctx, 31, 0x1287D0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1287C8u, 0x1287D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1287D0u;
label_1287d0:
    // 0x1287d0: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x1287d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x1287d4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1287d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1287d8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1287D8u;
    SET_GPR_U32(ctx, 31, 0x1287E0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1287D8u, 0x1287E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1287E0u;
label_1287e0:
    // 0x1287e0: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x1287e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x1287e4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1287e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1287e8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1287E8u;
    SET_GPR_U32(ctx, 31, 0x1287F0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1287E8u, 0x1287F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1287F0u;
label_1287f0:
    // 0x1287f0: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x1287f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x1287f4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1287f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1287f8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1287F8u;
    SET_GPR_U32(ctx, 31, 0x128800u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1287F8u, 0x128800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128800u;
label_128800:
    // 0x128800: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x128800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x128804: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x128804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128808: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x128808u;
    SET_GPR_U32(ctx, 31, 0x128810u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x128808u, 0x128810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128810u;
label_128810:
    // 0x128810: 0x93a20109  lbu         $v0, 0x109($sp)
    ctx->pc = 0x128810u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 265)));
    // 0x128814: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x128814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x128818: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x128818u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12881c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x12881cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x128820: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x128820u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x128824: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x128824u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x128828: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x128828u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12882c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12882cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128830: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x128830u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128834: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x128834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128838: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x128838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12883c: 0x27bd0130  addiu       $sp, $sp, 0x130
    ctx->pc = 0x12883cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x128840: 0x3e00008  jr          $ra
    ctx->pc = 0x128840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128848u;
    // 0x128848: 0x0  nop
    ctx->pc = 0x128848u;
    // NOP
    // 0x12884c: 0x0  nop
    ctx->pc = 0x12884cu;
    // NOP
    ctx->pc = 0x128850u;
}
