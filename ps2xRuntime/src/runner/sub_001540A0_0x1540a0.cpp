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

// Function: sub_001540A0
// Address: 0x1540a0 - 0x154230
void sub_001540A0_0x1540a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001540A0_0x1540a0");
#endif

    switch (ctx->pc) {
        case 0x1540a0u: goto label_1540a0;
        case 0x1540a4u: goto label_1540a4;
        case 0x1540a8u: goto label_1540a8;
        case 0x1540acu: goto label_1540ac;
        case 0x1540b0u: goto label_1540b0;
        case 0x1540b4u: goto label_1540b4;
        case 0x1540b8u: goto label_1540b8;
        case 0x1540bcu: goto label_1540bc;
        case 0x1540c0u: goto label_1540c0;
        case 0x1540c4u: goto label_1540c4;
        case 0x1540c8u: goto label_1540c8;
        case 0x1540ccu: goto label_1540cc;
        case 0x1540d0u: goto label_1540d0;
        case 0x1540d4u: goto label_1540d4;
        case 0x1540d8u: goto label_1540d8;
        case 0x1540dcu: goto label_1540dc;
        case 0x1540e0u: goto label_1540e0;
        case 0x1540e4u: goto label_1540e4;
        case 0x1540e8u: goto label_1540e8;
        case 0x1540ecu: goto label_1540ec;
        case 0x1540f0u: goto label_1540f0;
        case 0x1540f4u: goto label_1540f4;
        case 0x1540f8u: goto label_1540f8;
        case 0x1540fcu: goto label_1540fc;
        case 0x154100u: goto label_154100;
        case 0x154104u: goto label_154104;
        case 0x154108u: goto label_154108;
        case 0x15410cu: goto label_15410c;
        case 0x154110u: goto label_154110;
        case 0x154114u: goto label_154114;
        case 0x154118u: goto label_154118;
        case 0x15411cu: goto label_15411c;
        case 0x154120u: goto label_154120;
        case 0x154124u: goto label_154124;
        case 0x154128u: goto label_154128;
        case 0x15412cu: goto label_15412c;
        case 0x154130u: goto label_154130;
        case 0x154134u: goto label_154134;
        case 0x154138u: goto label_154138;
        case 0x15413cu: goto label_15413c;
        case 0x154140u: goto label_154140;
        case 0x154144u: goto label_154144;
        case 0x154148u: goto label_154148;
        case 0x15414cu: goto label_15414c;
        case 0x154150u: goto label_154150;
        case 0x154154u: goto label_154154;
        case 0x154158u: goto label_154158;
        case 0x15415cu: goto label_15415c;
        case 0x154160u: goto label_154160;
        case 0x154164u: goto label_154164;
        case 0x154168u: goto label_154168;
        case 0x15416cu: goto label_15416c;
        case 0x154170u: goto label_154170;
        case 0x154174u: goto label_154174;
        case 0x154178u: goto label_154178;
        case 0x15417cu: goto label_15417c;
        case 0x154180u: goto label_154180;
        case 0x154184u: goto label_154184;
        case 0x154188u: goto label_154188;
        case 0x15418cu: goto label_15418c;
        case 0x154190u: goto label_154190;
        case 0x154194u: goto label_154194;
        case 0x154198u: goto label_154198;
        case 0x15419cu: goto label_15419c;
        case 0x1541a0u: goto label_1541a0;
        case 0x1541a4u: goto label_1541a4;
        case 0x1541a8u: goto label_1541a8;
        case 0x1541acu: goto label_1541ac;
        case 0x1541b0u: goto label_1541b0;
        case 0x1541b4u: goto label_1541b4;
        case 0x1541b8u: goto label_1541b8;
        case 0x1541bcu: goto label_1541bc;
        case 0x1541c0u: goto label_1541c0;
        case 0x1541c4u: goto label_1541c4;
        case 0x1541c8u: goto label_1541c8;
        case 0x1541ccu: goto label_1541cc;
        case 0x1541d0u: goto label_1541d0;
        case 0x1541d4u: goto label_1541d4;
        case 0x1541d8u: goto label_1541d8;
        case 0x1541dcu: goto label_1541dc;
        case 0x1541e0u: goto label_1541e0;
        case 0x1541e4u: goto label_1541e4;
        case 0x1541e8u: goto label_1541e8;
        case 0x1541ecu: goto label_1541ec;
        case 0x1541f0u: goto label_1541f0;
        case 0x1541f4u: goto label_1541f4;
        case 0x1541f8u: goto label_1541f8;
        case 0x1541fcu: goto label_1541fc;
        case 0x154200u: goto label_154200;
        case 0x154204u: goto label_154204;
        case 0x154208u: goto label_154208;
        case 0x15420cu: goto label_15420c;
        case 0x154210u: goto label_154210;
        case 0x154214u: goto label_154214;
        case 0x154218u: goto label_154218;
        case 0x15421cu: goto label_15421c;
        case 0x154220u: goto label_154220;
        case 0x154224u: goto label_154224;
        case 0x154228u: goto label_154228;
        case 0x15422cu: goto label_15422c;
        default: break;
    }

    ctx->pc = 0x1540a0u;

label_1540a0:
    // 0x1540a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1540a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1540a4:
    // 0x1540a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1540a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1540a8:
    // 0x1540a8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1540a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1540ac:
    // 0x1540ac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1540acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1540b0:
    // 0x1540b0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1540b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1540b4:
    // 0x1540b4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1540b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1540b8:
    // 0x1540b8: 0x3e00008  jr          $ra
label_1540bc:
    if (ctx->pc == 0x1540BCu) {
        ctx->pc = 0x1540C0u;
        goto label_1540c0;
    }
    ctx->pc = 0x1540B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1540B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1540C0u;
label_1540c0:
    // 0x1540c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1540c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1540c4:
    // 0x1540c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1540c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1540c8:
    // 0x1540c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1540c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1540cc:
    // 0x1540cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1540ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1540d0:
    // 0x1540d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1540d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1540d4:
    // 0x1540d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1540d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1540d8:
    // 0x1540d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1540d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1540dc:
    // 0x1540dc: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1540dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_1540e0:
    // 0x1540e0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1540e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1540e4:
    // 0x1540e4: 0xc08ec5c  jal         func_23B170
label_1540e8:
    if (ctx->pc == 0x1540E8u) {
        ctx->pc = 0x1540ECu;
        goto label_1540ec;
    }
    ctx->pc = 0x1540E4u;
    SET_GPR_U32(ctx, 31, 0x1540ECu);
    ctx->pc = 0x23B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B170u, 0x1540E4u, 0x1540ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1540ECu;
label_1540ec:
    // 0x1540ec: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1540ecu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1540f0:
    // 0x1540f0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1540f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1540f4:
    // 0x1540f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1540f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1540f8:
    // 0x1540f8: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x1540f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_1540fc:
    // 0x1540fc: 0x24c62de0  addiu       $a2, $a2, 0x2DE0
    ctx->pc = 0x1540fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11744));
label_154100:
    // 0x154100: 0xc10493e  jal         func_4124F8
label_154104:
    if (ctx->pc == 0x154104u) {
        ctx->pc = 0x154108u;
        goto label_154108;
    }
    ctx->pc = 0x154100u;
    SET_GPR_U32(ctx, 31, 0x154108u);
    ctx->pc = 0x4124F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4124F8u, 0x154100u, 0x154108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154108u;
label_154108:
    // 0x154108: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x154108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15410c:
    // 0x15410c: 0x1011001d  beq         $zero, $s1, . + 4 + (0x1D << 2)
label_154110:
    if (ctx->pc == 0x154110u) {
        ctx->pc = 0x154114u;
        goto label_154114;
    }
    ctx->pc = 0x15410Cu;
    {
        const bool branch_taken_0x15410c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x15410c) {
            ctx->pc = 0x154184u;
            goto label_154184;
        }
    }
    ctx->pc = 0x154114u;
label_154114:
    // 0x154114: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x154114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_154118:
    // 0x154118: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x154118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_15411c:
    // 0x15411c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15411cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_154120:
    // 0x154120: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x154120u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_154124:
    // 0x154124: 0xc103322  jal         func_40CC88
label_154128:
    if (ctx->pc == 0x154128u) {
        ctx->pc = 0x15412Cu;
        goto label_15412c;
    }
    ctx->pc = 0x154124u;
    SET_GPR_U32(ctx, 31, 0x15412Cu);
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x154124u, 0x15412Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15412Cu;
label_15412c:
    // 0x15412c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_154130:
    if (ctx->pc == 0x154130u) {
        ctx->pc = 0x154134u;
        goto label_154134;
    }
    ctx->pc = 0x15412Cu;
    {
        const bool branch_taken_0x15412c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15412c) {
            ctx->pc = 0x154174u;
            goto label_154174;
        }
    }
    ctx->pc = 0x154134u;
label_154134:
    // 0x154134: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x154134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_154138:
    // 0x154138: 0xc1058bc  jal         func_4162F0
label_15413c:
    if (ctx->pc == 0x15413Cu) {
        ctx->pc = 0x154140u;
        goto label_154140;
    }
    ctx->pc = 0x154138u;
    SET_GPR_U32(ctx, 31, 0x154140u);
    ctx->pc = 0x4162F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4162F0u, 0x154138u, 0x154140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154140u;
label_154140:
    // 0x154140: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x154140u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154144:
    // 0x154144: 0xc1082ca  jal         func_420B28
label_154148:
    if (ctx->pc == 0x154148u) {
        ctx->pc = 0x15414Cu;
        goto label_15414c;
    }
    ctx->pc = 0x154144u;
    SET_GPR_U32(ctx, 31, 0x15414Cu);
    ctx->pc = 0x420B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B28u, 0x154144u, 0x15414Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15414Cu;
label_15414c:
    // 0x15414c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15414cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154150:
    // 0x154150: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x154150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_154154:
    // 0x154154: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x154154u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_154158:
    // 0x154158: 0x24a536a0  addiu       $a1, $a1, 0x36A0
    ctx->pc = 0x154158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13984));
label_15415c:
    // 0x15415c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15415cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_154160:
    // 0x154160: 0xc1082d8  jal         func_420B60
label_154164:
    if (ctx->pc == 0x154164u) {
        ctx->pc = 0x154168u;
        goto label_154168;
    }
    ctx->pc = 0x154160u;
    SET_GPR_U32(ctx, 31, 0x154168u);
    ctx->pc = 0x420B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B60u, 0x154160u, 0x154168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154168u;
label_154168:
    // 0x154168: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x154168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15416c:
    // 0x15416c: 0xc1081de  jal         func_420778
label_154170:
    if (ctx->pc == 0x154170u) {
        ctx->pc = 0x154174u;
        goto label_154174;
    }
    ctx->pc = 0x15416Cu;
    SET_GPR_U32(ctx, 31, 0x154174u);
    ctx->pc = 0x420778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420778u, 0x15416Cu, 0x154174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154174u;
label_154174:
    // 0x154174: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x154174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_154178:
    // 0x154178: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x154178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15417c:
    // 0x15417c: 0xc10496a  jal         func_4125A8
label_154180:
    if (ctx->pc == 0x154180u) {
        ctx->pc = 0x154184u;
        goto label_154184;
    }
    ctx->pc = 0x15417Cu;
    SET_GPR_U32(ctx, 31, 0x154184u);
    ctx->pc = 0x4125A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125A8u, 0x15417Cu, 0x154184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154184u;
label_154184:
    // 0x154184: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x154184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_154188:
    // 0x154188: 0xc119b68  jal         func_466DA0
label_15418c:
    if (ctx->pc == 0x15418Cu) {
        ctx->pc = 0x154190u;
        goto label_154190;
    }
    ctx->pc = 0x154188u;
    SET_GPR_U32(ctx, 31, 0x154190u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x154188u, 0x154190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154190u;
label_154190:
    // 0x154190: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x154190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_154194:
    // 0x154194: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x154194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154198:
    // 0x154198: 0xc0400e0  jal         func_100380
label_15419c:
    if (ctx->pc == 0x15419Cu) {
        ctx->pc = 0x1541A0u;
        goto label_1541a0;
    }
    ctx->pc = 0x154198u;
    SET_GPR_U32(ctx, 31, 0x1541A0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x154198u, 0x1541A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1541A0u;
label_1541a0:
    // 0x1541a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1541a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1541a4:
    // 0x1541a4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_1541a8:
    if (ctx->pc == 0x1541A8u) {
        ctx->pc = 0x1541ACu;
        goto label_1541ac;
    }
    ctx->pc = 0x1541A4u;
    {
        const bool branch_taken_0x1541a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1541a4) {
            ctx->pc = 0x1541BCu;
            goto label_1541bc;
        }
    }
    ctx->pc = 0x1541ACu;
label_1541ac:
    // 0x1541ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1541acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1541b0:
    // 0x1541b0: 0xc05aff0  jal         func_16BFC0
label_1541b4:
    if (ctx->pc == 0x1541B4u) {
        ctx->pc = 0x1541B8u;
        goto label_1541b8;
    }
    ctx->pc = 0x1541B0u;
    SET_GPR_U32(ctx, 31, 0x1541B8u);
    ctx->pc = 0x16BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BFC0u, 0x1541B0u, 0x1541B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1541B8u;
label_1541b8:
    // 0x1541b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1541b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1541bc:
    // 0x1541bc: 0xafb0006c  sw          $s0, 0x6C($sp)
    ctx->pc = 0x1541bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 16));
label_1541c0:
    // 0x1541c0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1541c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_1541c4:
    // 0x1541c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1541c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1541c8:
    // 0x1541c8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1541c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1541cc:
    // 0x1541cc: 0x320f809  jalr        $t9
label_1541d0:
    if (ctx->pc == 0x1541D0u) {
        ctx->pc = 0x1541D4u;
        goto label_1541d4;
    }
    ctx->pc = 0x1541CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1541D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1541CCu, 0x1541D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1541D4u;
label_1541d4:
    // 0x1541d4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1541d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1541d8:
    // 0x1541d8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1541d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1541dc:
    // 0x1541dc: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x1541dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_1541e0:
    // 0x1541e0: 0x27a6006c  addiu       $a2, $sp, 0x6C
    ctx->pc = 0x1541e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_1541e4:
    // 0x1541e4: 0xc05508c  jal         func_154230
label_1541e8:
    if (ctx->pc == 0x1541E8u) {
        ctx->pc = 0x1541ECu;
        goto label_1541ec;
    }
    ctx->pc = 0x1541E4u;
    SET_GPR_U32(ctx, 31, 0x1541ECu);
    ctx->pc = 0x154230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154230u, 0x1541E4u, 0x1541ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1541ECu;
label_1541ec:
    // 0x1541ec: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1541ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_1541f0:
    // 0x1541f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1541f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1541f4:
    // 0x1541f4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1541f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1541f8:
    // 0x1541f8: 0x320f809  jalr        $t9
label_1541fc:
    if (ctx->pc == 0x1541FCu) {
        ctx->pc = 0x154200u;
        goto label_154200;
    }
    ctx->pc = 0x1541F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x154200u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1541F8u, 0x154200u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154200u;
label_154200:
    // 0x154200: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x154200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_154204:
    // 0x154204: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x154204u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_154208:
    // 0x154208: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x154208u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15420c:
    // 0x15420c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15420cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_154210:
    // 0x154210: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x154210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_154214:
    // 0x154214: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x154214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_154218:
    // 0x154218: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x154218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_15421c:
    // 0x15421c: 0x3e00008  jr          $ra
label_154220:
    if (ctx->pc == 0x154220u) {
        ctx->pc = 0x154224u;
        goto label_154224;
    }
    ctx->pc = 0x15421Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15421Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154224u;
label_154224:
    // 0x154224: 0x0  nop
    ctx->pc = 0x154224u;
    // NOP
label_154228:
    // 0x154228: 0x0  nop
    ctx->pc = 0x154228u;
    // NOP
label_15422c:
    // 0x15422c: 0x0  nop
    ctx->pc = 0x15422cu;
    // NOP
    ctx->pc = 0x154230u;
}
