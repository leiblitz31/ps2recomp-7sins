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

// Function: sub_00155100
// Address: 0x155100 - 0x155230
void sub_00155100_0x155100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155100_0x155100");
#endif

    switch (ctx->pc) {
        case 0x155100u: goto label_155100;
        case 0x155104u: goto label_155104;
        case 0x155108u: goto label_155108;
        case 0x15510cu: goto label_15510c;
        case 0x155110u: goto label_155110;
        case 0x155114u: goto label_155114;
        case 0x155118u: goto label_155118;
        case 0x15511cu: goto label_15511c;
        case 0x155120u: goto label_155120;
        case 0x155124u: goto label_155124;
        case 0x155128u: goto label_155128;
        case 0x15512cu: goto label_15512c;
        case 0x155130u: goto label_155130;
        case 0x155134u: goto label_155134;
        case 0x155138u: goto label_155138;
        case 0x15513cu: goto label_15513c;
        case 0x155140u: goto label_155140;
        case 0x155144u: goto label_155144;
        case 0x155148u: goto label_155148;
        case 0x15514cu: goto label_15514c;
        case 0x155150u: goto label_155150;
        case 0x155154u: goto label_155154;
        case 0x155158u: goto label_155158;
        case 0x15515cu: goto label_15515c;
        case 0x155160u: goto label_155160;
        case 0x155164u: goto label_155164;
        case 0x155168u: goto label_155168;
        case 0x15516cu: goto label_15516c;
        case 0x155170u: goto label_155170;
        case 0x155174u: goto label_155174;
        case 0x155178u: goto label_155178;
        case 0x15517cu: goto label_15517c;
        case 0x155180u: goto label_155180;
        case 0x155184u: goto label_155184;
        case 0x155188u: goto label_155188;
        case 0x15518cu: goto label_15518c;
        case 0x155190u: goto label_155190;
        case 0x155194u: goto label_155194;
        case 0x155198u: goto label_155198;
        case 0x15519cu: goto label_15519c;
        case 0x1551a0u: goto label_1551a0;
        case 0x1551a4u: goto label_1551a4;
        case 0x1551a8u: goto label_1551a8;
        case 0x1551acu: goto label_1551ac;
        case 0x1551b0u: goto label_1551b0;
        case 0x1551b4u: goto label_1551b4;
        case 0x1551b8u: goto label_1551b8;
        case 0x1551bcu: goto label_1551bc;
        case 0x1551c0u: goto label_1551c0;
        case 0x1551c4u: goto label_1551c4;
        case 0x1551c8u: goto label_1551c8;
        case 0x1551ccu: goto label_1551cc;
        case 0x1551d0u: goto label_1551d0;
        case 0x1551d4u: goto label_1551d4;
        case 0x1551d8u: goto label_1551d8;
        case 0x1551dcu: goto label_1551dc;
        case 0x1551e0u: goto label_1551e0;
        case 0x1551e4u: goto label_1551e4;
        case 0x1551e8u: goto label_1551e8;
        case 0x1551ecu: goto label_1551ec;
        case 0x1551f0u: goto label_1551f0;
        case 0x1551f4u: goto label_1551f4;
        case 0x1551f8u: goto label_1551f8;
        case 0x1551fcu: goto label_1551fc;
        case 0x155200u: goto label_155200;
        case 0x155204u: goto label_155204;
        case 0x155208u: goto label_155208;
        case 0x15520cu: goto label_15520c;
        case 0x155210u: goto label_155210;
        case 0x155214u: goto label_155214;
        case 0x155218u: goto label_155218;
        case 0x15521cu: goto label_15521c;
        case 0x155220u: goto label_155220;
        case 0x155224u: goto label_155224;
        case 0x155228u: goto label_155228;
        case 0x15522cu: goto label_15522c;
        default: break;
    }

    ctx->pc = 0x155100u;

label_155100:
    // 0x155100: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x155100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_155104:
    // 0x155104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_155108:
    // 0x155108: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x155108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_15510c:
    // 0x15510c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x15510cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_155110:
    // 0x155110: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155114:
    // 0x155114: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x155114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_155118:
    // 0x155118: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x155118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_15511c:
    // 0x15511c: 0x40f809  jalr        $v0
label_155120:
    if (ctx->pc == 0x155120u) {
        ctx->pc = 0x155124u;
        goto label_155124;
    }
    ctx->pc = 0x15511Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x155124u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15511Cu, 0x155124u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x155124u;
label_155124:
    // 0x155124: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x155124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_155128:
    // 0x155128: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15512c:
    // 0x15512c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x15512cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_155130:
    // 0x155130: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x155130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_155134:
    // 0x155134: 0x40f809  jalr        $v0
label_155138:
    if (ctx->pc == 0x155138u) {
        ctx->pc = 0x15513Cu;
        goto label_15513c;
    }
    ctx->pc = 0x155134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15513Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155134u, 0x15513Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15513Cu;
label_15513c:
    // 0x15513c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x15513cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_155140:
    // 0x155140: 0xc055028  jal         func_1540A0
label_155144:
    if (ctx->pc == 0x155144u) {
        ctx->pc = 0x155148u;
        goto label_155148;
    }
    ctx->pc = 0x155140u;
    SET_GPR_U32(ctx, 31, 0x155148u);
    ctx->pc = 0x1540A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1540A0u, 0x155140u, 0x155148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155148u;
label_155148:
    // 0x155148: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x155148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_15514c:
    // 0x15514c: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x15514cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_155150:
    // 0x155150: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x155150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_155154:
    // 0x155154: 0xc055008  jal         func_154020
label_155158:
    if (ctx->pc == 0x155158u) {
        ctx->pc = 0x15515Cu;
        goto label_15515c;
    }
    ctx->pc = 0x155154u;
    SET_GPR_U32(ctx, 31, 0x15515Cu);
    ctx->pc = 0x154020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154020u, 0x155154u, 0x15515Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15515Cu;
label_15515c:
    // 0x15515c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x15515cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_155160:
    // 0x155160: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x155160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_155164:
    // 0x155164: 0xc054ff8  jal         func_153FE0
label_155168:
    if (ctx->pc == 0x155168u) {
        ctx->pc = 0x15516Cu;
        goto label_15516c;
    }
    ctx->pc = 0x155164u;
    SET_GPR_U32(ctx, 31, 0x15516Cu);
    ctx->pc = 0x153FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153FE0u, 0x155164u, 0x15516Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15516Cu;
label_15516c:
    // 0x15516c: 0x10000014  b           . + 4 + (0x14 << 2)
label_155170:
    if (ctx->pc == 0x155170u) {
        ctx->pc = 0x155174u;
        goto label_155174;
    }
    ctx->pc = 0x15516Cu;
    {
        const bool branch_taken_0x15516c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15516c) {
            ctx->pc = 0x1551C0u;
            goto label_1551c0;
        }
    }
    ctx->pc = 0x155174u;
label_155174:
    // 0x155174: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x155174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_155178:
    // 0x155178: 0xc054ff0  jal         func_153FC0
label_15517c:
    if (ctx->pc == 0x15517Cu) {
        ctx->pc = 0x155180u;
        goto label_155180;
    }
    ctx->pc = 0x155178u;
    SET_GPR_U32(ctx, 31, 0x155180u);
    ctx->pc = 0x153FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153FC0u, 0x155178u, 0x155180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155180u;
label_155180:
    // 0x155180: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x155180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_155184:
    // 0x155184: 0xc0413bc  jal         func_104EF0
label_155188:
    if (ctx->pc == 0x155188u) {
        ctx->pc = 0x15518Cu;
        goto label_15518c;
    }
    ctx->pc = 0x155184u;
    SET_GPR_U32(ctx, 31, 0x15518Cu);
    ctx->pc = 0x104EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EF0u, 0x155184u, 0x15518Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15518Cu;
label_15518c:
    // 0x15518c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_155190:
    if (ctx->pc == 0x155190u) {
        ctx->pc = 0x155194u;
        goto label_155194;
    }
    ctx->pc = 0x15518Cu;
    {
        const bool branch_taken_0x15518c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15518c) {
            ctx->pc = 0x1551B4u;
            goto label_1551b4;
        }
    }
    ctx->pc = 0x155194u;
label_155194:
    // 0x155194: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x155194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_155198:
    // 0x155198: 0xc054ff0  jal         func_153FC0
label_15519c:
    if (ctx->pc == 0x15519Cu) {
        ctx->pc = 0x1551A0u;
        goto label_1551a0;
    }
    ctx->pc = 0x155198u;
    SET_GPR_U32(ctx, 31, 0x1551A0u);
    ctx->pc = 0x153FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153FC0u, 0x155198u, 0x1551A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1551A0u;
label_1551a0:
    // 0x1551a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1551a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1551a4:
    // 0x1551a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1551a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1551a8:
    // 0x1551a8: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1551a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1551ac:
    // 0x1551ac: 0x320f809  jalr        $t9
label_1551b0:
    if (ctx->pc == 0x1551B0u) {
        ctx->pc = 0x1551B4u;
        goto label_1551b4;
    }
    ctx->pc = 0x1551ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1551B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1551ACu, 0x1551B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1551B4u;
label_1551b4:
    // 0x1551b4: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1551b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_1551b8:
    // 0x1551b8: 0xc054fd0  jal         func_153F40
label_1551bc:
    if (ctx->pc == 0x1551BCu) {
        ctx->pc = 0x1551C0u;
        goto label_1551c0;
    }
    ctx->pc = 0x1551B8u;
    SET_GPR_U32(ctx, 31, 0x1551C0u);
    ctx->pc = 0x153F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153F40u, 0x1551B8u, 0x1551C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1551C0u;
label_1551c0:
    // 0x1551c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1551c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1551c4:
    // 0x1551c4: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x1551c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_1551c8:
    // 0x1551c8: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x1551c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_1551cc:
    // 0x1551cc: 0xc054fa4  jal         func_153E90
label_1551d0:
    if (ctx->pc == 0x1551D0u) {
        ctx->pc = 0x1551D4u;
        goto label_1551d4;
    }
    ctx->pc = 0x1551CCu;
    SET_GPR_U32(ctx, 31, 0x1551D4u);
    ctx->pc = 0x153E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153E90u, 0x1551CCu, 0x1551D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1551D4u;
label_1551d4:
    // 0x1551d4: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1551d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_1551d8:
    // 0x1551d8: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x1551d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_1551dc:
    // 0x1551dc: 0xc041998  jal         func_106660
label_1551e0:
    if (ctx->pc == 0x1551E0u) {
        ctx->pc = 0x1551E4u;
        goto label_1551e4;
    }
    ctx->pc = 0x1551DCu;
    SET_GPR_U32(ctx, 31, 0x1551E4u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x1551DCu, 0x1551E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1551E4u;
label_1551e4:
    // 0x1551e4: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_1551e8:
    if (ctx->pc == 0x1551E8u) {
        ctx->pc = 0x1551ECu;
        goto label_1551ec;
    }
    ctx->pc = 0x1551E4u;
    {
        const bool branch_taken_0x1551e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1551e4) {
            ctx->pc = 0x155174u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155174;
        }
    }
    ctx->pc = 0x1551ECu;
label_1551ec:
    // 0x1551ec: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1551ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1551f0:
    // 0x1551f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1551f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1551f4:
    // 0x1551f4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1551f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_1551f8:
    // 0x1551f8: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x1551f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_1551fc:
    // 0x1551fc: 0x40f809  jalr        $v0
label_155200:
    if (ctx->pc == 0x155200u) {
        ctx->pc = 0x155204u;
        goto label_155204;
    }
    ctx->pc = 0x1551FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x155204u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1551FCu, 0x155204u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x155204u;
label_155204:
    // 0x155204: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x155204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_155208:
    // 0x155208: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x155208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15520c:
    // 0x15520c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x15520cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_155210:
    // 0x155210: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x155210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_155214:
    // 0x155214: 0x40f809  jalr        $v0
label_155218:
    if (ctx->pc == 0x155218u) {
        ctx->pc = 0x15521Cu;
        goto label_15521c;
    }
    ctx->pc = 0x155214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15521Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155214u, 0x15521Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15521Cu;
label_15521c:
    // 0x15521c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15521cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_155220:
    // 0x155220: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x155220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_155224:
    // 0x155224: 0x3e00008  jr          $ra
label_155228:
    if (ctx->pc == 0x155228u) {
        ctx->pc = 0x15522Cu;
        goto label_15522c;
    }
    ctx->pc = 0x155224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15522Cu;
label_15522c:
    // 0x15522c: 0x0  nop
    ctx->pc = 0x15522cu;
    // NOP
    ctx->pc = 0x155230u;
}
