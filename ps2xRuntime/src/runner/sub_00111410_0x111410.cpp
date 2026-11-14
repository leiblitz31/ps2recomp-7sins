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

// Function: sub_00111410
// Address: 0x111410 - 0x111520
void sub_00111410_0x111410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111410_0x111410");
#endif

    switch (ctx->pc) {
        case 0x111444u: goto label_111444;
        case 0x111458u: goto label_111458;
        case 0x11147cu: goto label_11147c;
        case 0x111498u: goto label_111498;
        case 0x1114b0u: goto label_1114b0;
        case 0x1114d8u: goto label_1114d8;
        case 0x1114e8u: goto label_1114e8;
        case 0x111504u: goto label_111504;
        default: break;
    }

    ctx->pc = 0x111410u;

    // 0x111410: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x111410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x111414: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x111414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x111418: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x111418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11141c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11141cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x111420: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x111420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x111424: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x111424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x111428: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x111428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x11142c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x11142cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x111430: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x111430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x111434: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x111434u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x111438: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x111438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11143c: 0xc044598  jal         func_111660
    ctx->pc = 0x11143Cu;
    SET_GPR_U32(ctx, 31, 0x111444u);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x11143Cu, 0x111444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111444u;
label_111444:
    // 0x111444: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x111444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x111448: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x111448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x11144c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x11144cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x111450: 0xc041954  jal         func_106550
    ctx->pc = 0x111450u;
    SET_GPR_U32(ctx, 31, 0x111458u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x111450u, 0x111458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111458u;
label_111458:
    // 0x111458: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x111458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x11145c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11145cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111460: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x111460u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x111464: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x111464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x111468: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x111468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x11146c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11146cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111470: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x111470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111474: 0xc04484c  jal         func_112130
    ctx->pc = 0x111474u;
    SET_GPR_U32(ctx, 31, 0x11147Cu);
    ctx->pc = 0x112130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112130u, 0x111474u, 0x11147Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11147Cu;
label_11147c:
    // 0x11147c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11147cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111480: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x111480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x111484: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x111484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111488: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x111488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11148c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x11148cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111490: 0xc041934  jal         func_1064D0
    ctx->pc = 0x111490u;
    SET_GPR_U32(ctx, 31, 0x111498u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x111490u, 0x111498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111498u;
label_111498:
    // 0x111498: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x111498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11149c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11149cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114a0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1114a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1114a4: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x1114a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1114a8: 0xc04457c  jal         func_1115F0
    ctx->pc = 0x1114A8u;
    SET_GPR_U32(ctx, 31, 0x1114B0u);
    ctx->pc = 0x1115F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1115F0u, 0x1114A8u, 0x1114B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1114B0u;
label_1114b0:
    // 0x1114b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1114b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114b4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x1114b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1114b8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1114B8u;
    {
        const bool branch_taken_0x1114b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1114b8) {
            ctx->pc = 0x1114DCu;
            goto label_1114dc;
        }
    }
    ctx->pc = 0x1114C0u;
    // 0x1114c0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1114c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1114c4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1114c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1114c8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1114c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1114cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1114ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114d0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x1114D0u;
    SET_GPR_U32(ctx, 31, 0x1114D8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x1114D0u, 0x1114D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1114D8u;
label_1114d8:
    // 0x1114d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1114d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1114dc:
    // 0x1114dc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1114dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1114e0: 0xc04455c  jal         func_111570
    ctx->pc = 0x1114E0u;
    SET_GPR_U32(ctx, 31, 0x1114E8u);
    ctx->pc = 0x111570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111570u, 0x1114E0u, 0x1114E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1114E8u;
label_1114e8:
    // 0x1114e8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1114e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1114ec: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x1114ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1114f0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1114f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1114f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1114f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1114f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114fc: 0xc044548  jal         func_111520
    ctx->pc = 0x1114FCu;
    SET_GPR_U32(ctx, 31, 0x111504u);
    ctx->pc = 0x111520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111520u, 0x1114FCu, 0x111504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111504u;
label_111504:
    // 0x111504: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x111504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x111508: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x111508u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11150c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11150cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111510: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x111510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111514: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x111514u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x111518: 0x3e00008  jr          $ra
    ctx->pc = 0x111518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111520u;
}
