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

// Function: sub_002903C0
// Address: 0x2903c0 - 0x2904d0
void sub_002903C0_0x2903c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002903C0_0x2903c0");
#endif

    switch (ctx->pc) {
        case 0x2903f4u: goto label_2903f4;
        case 0x290408u: goto label_290408;
        case 0x29042cu: goto label_29042c;
        case 0x290448u: goto label_290448;
        case 0x290460u: goto label_290460;
        case 0x290488u: goto label_290488;
        case 0x290498u: goto label_290498;
        case 0x2904b4u: goto label_2904b4;
        default: break;
    }

    ctx->pc = 0x2903c0u;

    // 0x2903c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2903c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2903c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2903c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2903c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2903c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2903cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2903ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2903d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2903d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2903d4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2903d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2903d8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2903d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2903dc: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2903dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2903e0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x2903e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x2903e4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x2903e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x2903e8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2903e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2903ec: 0xc0a41a8  jal         func_2906A0
    ctx->pc = 0x2903ECu;
    SET_GPR_U32(ctx, 31, 0x2903F4u);
    ctx->pc = 0x2906A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2906A0u, 0x2903ECu, 0x2903F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2903F4u;
label_2903f4:
    // 0x2903f4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2903f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2903f8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2903f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2903fc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2903fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x290400: 0xc041954  jal         func_106550
    ctx->pc = 0x290400u;
    SET_GPR_U32(ctx, 31, 0x290408u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x290400u, 0x290408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290408u;
label_290408:
    // 0x290408: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x290408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x29040c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29040cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x290410: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x290410u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x290414: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x290414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x290418: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x290418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x29041c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29041cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290420: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x290420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290424: 0xc0a45e0  jal         func_291780
    ctx->pc = 0x290424u;
    SET_GPR_U32(ctx, 31, 0x29042Cu);
    ctx->pc = 0x291780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291780u, 0x290424u, 0x29042Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29042Cu;
label_29042c:
    // 0x29042c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29042cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290430: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x290430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x290434: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x290434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x290438: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x290438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29043c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29043cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290440: 0xc041934  jal         func_1064D0
    ctx->pc = 0x290440u;
    SET_GPR_U32(ctx, 31, 0x290448u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x290440u, 0x290448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290448u;
label_290448:
    // 0x290448: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x290448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29044c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29044cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290450: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x290450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x290454: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x290454u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x290458: 0xc0a418c  jal         func_290630
    ctx->pc = 0x290458u;
    SET_GPR_U32(ctx, 31, 0x290460u);
    ctx->pc = 0x290630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290630u, 0x290458u, 0x290460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290460u;
label_290460:
    // 0x290460: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x290460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290464: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x290464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x290468: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x290468u;
    {
        const bool branch_taken_0x290468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290468) {
            ctx->pc = 0x29048Cu;
            goto label_29048c;
        }
    }
    ctx->pc = 0x290470u;
    // 0x290470: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x290470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x290474: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x290474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x290478: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x290478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29047c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29047cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290480: 0xc041934  jal         func_1064D0
    ctx->pc = 0x290480u;
    SET_GPR_U32(ctx, 31, 0x290488u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x290480u, 0x290488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290488u;
label_290488:
    // 0x290488: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x290488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29048c:
    // 0x29048c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x29048cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x290490: 0xc0a4148  jal         func_290520
    ctx->pc = 0x290490u;
    SET_GPR_U32(ctx, 31, 0x290498u);
    ctx->pc = 0x290520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290520u, 0x290490u, 0x290498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290498u;
label_290498:
    // 0x290498: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x290498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29049c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x29049cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2904a0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2904a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2904a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2904a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2904a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2904a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2904ac: 0xc0a4134  jal         func_2904D0
    ctx->pc = 0x2904ACu;
    SET_GPR_U32(ctx, 31, 0x2904B4u);
    ctx->pc = 0x2904D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2904D0u, 0x2904ACu, 0x2904B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2904B4u;
label_2904b4:
    // 0x2904b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2904b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2904b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2904b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2904bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2904bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2904c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2904c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2904c4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2904c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2904c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2904C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2904C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2904D0u;
}
