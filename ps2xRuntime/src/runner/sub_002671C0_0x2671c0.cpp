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

// Function: sub_002671C0
// Address: 0x2671c0 - 0x2672d0
void sub_002671C0_0x2671c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002671C0_0x2671c0");
#endif

    switch (ctx->pc) {
        case 0x2671f4u: goto label_2671f4;
        case 0x267208u: goto label_267208;
        case 0x26722cu: goto label_26722c;
        case 0x267248u: goto label_267248;
        case 0x267260u: goto label_267260;
        case 0x267288u: goto label_267288;
        case 0x267298u: goto label_267298;
        case 0x2672b4u: goto label_2672b4;
        default: break;
    }

    ctx->pc = 0x2671c0u;

    // 0x2671c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2671c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2671c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2671c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2671c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2671c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2671cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2671ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2671d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2671d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2671d4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2671d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2671d8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2671d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2671dc: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2671dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2671e0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x2671e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x2671e4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x2671e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x2671e8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2671e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2671ec: 0xc048bb4  jal         func_122ED0
    ctx->pc = 0x2671ECu;
    SET_GPR_U32(ctx, 31, 0x2671F4u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x2671ECu, 0x2671F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2671F4u;
label_2671f4:
    // 0x2671f4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2671f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2671f8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2671f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2671fc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2671fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x267200: 0xc041954  jal         func_106550
    ctx->pc = 0x267200u;
    SET_GPR_U32(ctx, 31, 0x267208u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x267200u, 0x267208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267208u;
label_267208:
    // 0x267208: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x267208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x26720c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26720cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267210: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x267210u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x267214: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x267214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x267218: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x267218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x26721c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26721cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267220: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x267220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267224: 0xc058b50  jal         func_162D40
    ctx->pc = 0x267224u;
    SET_GPR_U32(ctx, 31, 0x26722Cu);
    ctx->pc = 0x162D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162D40u, 0x267224u, 0x26722Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26722Cu;
label_26722c:
    // 0x26722c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26722cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267230: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x267230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x267234: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x267234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267238: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x267238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26723c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x26723cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267240: 0xc041934  jal         func_1064D0
    ctx->pc = 0x267240u;
    SET_GPR_U32(ctx, 31, 0x267248u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x267240u, 0x267248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267248u;
label_267248:
    // 0x267248: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x267248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26724c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26724cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267250: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x267250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x267254: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x267254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x267258: 0xc099ce8  jal         func_2673A0
    ctx->pc = 0x267258u;
    SET_GPR_U32(ctx, 31, 0x267260u);
    ctx->pc = 0x2673A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2673A0u, 0x267258u, 0x267260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267260u;
label_267260:
    // 0x267260: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x267260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267264: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x267264u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x267268: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x267268u;
    {
        const bool branch_taken_0x267268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x267268) {
            ctx->pc = 0x26728Cu;
            goto label_26728c;
        }
    }
    ctx->pc = 0x267270u;
    // 0x267270: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x267270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x267274: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x267274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x267278: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x267278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26727c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26727cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267280: 0xc041934  jal         func_1064D0
    ctx->pc = 0x267280u;
    SET_GPR_U32(ctx, 31, 0x267288u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x267280u, 0x267288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267288u;
label_267288:
    // 0x267288: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x267288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26728c:
    // 0x26728c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x26728cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x267290: 0xc099cc8  jal         func_267320
    ctx->pc = 0x267290u;
    SET_GPR_U32(ctx, 31, 0x267298u);
    ctx->pc = 0x267320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267320u, 0x267290u, 0x267298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267298u;
label_267298:
    // 0x267298: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x267298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x26729c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x26729cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2672a0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2672a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2672a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2672a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2672a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2672a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2672ac: 0xc099cb4  jal         func_2672D0
    ctx->pc = 0x2672ACu;
    SET_GPR_U32(ctx, 31, 0x2672B4u);
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x2672ACu, 0x2672B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2672B4u;
label_2672b4:
    // 0x2672b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2672b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2672b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2672b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2672bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2672bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2672c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2672c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2672c4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2672c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2672c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2672C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2672C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2672D0u;
}
