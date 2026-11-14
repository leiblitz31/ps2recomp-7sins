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

// Function: sub_00264580
// Address: 0x264580 - 0x264690
void sub_00264580_0x264580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264580_0x264580");
#endif

    switch (ctx->pc) {
        case 0x2645b4u: goto label_2645b4;
        case 0x2645c8u: goto label_2645c8;
        case 0x2645ecu: goto label_2645ec;
        case 0x264608u: goto label_264608;
        case 0x264620u: goto label_264620;
        case 0x264648u: goto label_264648;
        case 0x264658u: goto label_264658;
        case 0x264674u: goto label_264674;
        default: break;
    }

    ctx->pc = 0x264580u;

    // 0x264580: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x264580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x264584: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x264584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x264588: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x264588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26458c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26458cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x264590: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x264590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x264594: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x264594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x264598: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x264598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x26459c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x26459cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2645a0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x2645a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x2645a4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x2645a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x2645a8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2645a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2645ac: 0xc0991f4  jal         func_2647D0
    ctx->pc = 0x2645ACu;
    SET_GPR_U32(ctx, 31, 0x2645B4u);
    ctx->pc = 0x2647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2647D0u, 0x2645ACu, 0x2645B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2645B4u;
label_2645b4:
    // 0x2645b4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2645b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2645b8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2645b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2645bc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2645bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2645c0: 0xc041954  jal         func_106550
    ctx->pc = 0x2645C0u;
    SET_GPR_U32(ctx, 31, 0x2645C8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x2645C0u, 0x2645C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2645C8u;
label_2645c8:
    // 0x2645c8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2645c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2645cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2645ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2645d0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2645d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2645d4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2645d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2645d8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2645d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2645dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2645dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2645e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2645e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2645e4: 0xc099554  jal         func_265550
    ctx->pc = 0x2645E4u;
    SET_GPR_U32(ctx, 31, 0x2645ECu);
    ctx->pc = 0x265550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265550u, 0x2645E4u, 0x2645ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2645ECu;
label_2645ec:
    // 0x2645ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2645ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2645f0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2645f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2645f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2645f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2645f8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2645f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2645fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2645fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264600: 0xc041934  jal         func_1064D0
    ctx->pc = 0x264600u;
    SET_GPR_U32(ctx, 31, 0x264608u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x264600u, 0x264608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264608u;
label_264608:
    // 0x264608: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x264608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26460c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26460cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264610: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x264610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x264614: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x264614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x264618: 0xc0991d8  jal         func_264760
    ctx->pc = 0x264618u;
    SET_GPR_U32(ctx, 31, 0x264620u);
    ctx->pc = 0x264760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264760u, 0x264618u, 0x264620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264620u;
label_264620:
    // 0x264620: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x264620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264624: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x264624u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x264628: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x264628u;
    {
        const bool branch_taken_0x264628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264628) {
            ctx->pc = 0x26464Cu;
            goto label_26464c;
        }
    }
    ctx->pc = 0x264630u;
    // 0x264630: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x264630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x264634: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x264634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x264638: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x264638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26463c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26463cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264640: 0xc041934  jal         func_1064D0
    ctx->pc = 0x264640u;
    SET_GPR_U32(ctx, 31, 0x264648u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x264640u, 0x264648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264648u;
label_264648:
    // 0x264648: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x264648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26464c:
    // 0x26464c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x26464cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x264650: 0xc0991b8  jal         func_2646E0
    ctx->pc = 0x264650u;
    SET_GPR_U32(ctx, 31, 0x264658u);
    ctx->pc = 0x2646E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2646E0u, 0x264650u, 0x264658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264658u;
label_264658:
    // 0x264658: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x264658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x26465c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x26465cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x264660: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x264660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x264664: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x264664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264668: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x264668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26466c: 0xc0991a4  jal         func_264690
    ctx->pc = 0x26466Cu;
    SET_GPR_U32(ctx, 31, 0x264674u);
    ctx->pc = 0x264690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264690u, 0x26466Cu, 0x264674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264674u;
label_264674:
    // 0x264674: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x264674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x264678: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x264678u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26467c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26467cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264680: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x264680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264684: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x264684u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x264688: 0x3e00008  jr          $ra
    ctx->pc = 0x264688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264690u;
}
