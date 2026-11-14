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

// Function: sub_002216E0
// Address: 0x2216e0 - 0x2217f0
void sub_002216E0_0x2216e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002216E0_0x2216e0");
#endif

    switch (ctx->pc) {
        case 0x221714u: goto label_221714;
        case 0x221728u: goto label_221728;
        case 0x22174cu: goto label_22174c;
        case 0x221768u: goto label_221768;
        case 0x221780u: goto label_221780;
        case 0x2217a8u: goto label_2217a8;
        case 0x2217b8u: goto label_2217b8;
        case 0x2217d4u: goto label_2217d4;
        default: break;
    }

    ctx->pc = 0x2216e0u;

    // 0x2216e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2216e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2216e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2216e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2216e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2216e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2216ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2216ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2216f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2216f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2216f4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2216f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2216f8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2216f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2216fc: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2216fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x221700: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x221700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x221704: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x221704u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x221708: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x221708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22170c: 0xc088670  jal         func_2219C0
    ctx->pc = 0x22170Cu;
    SET_GPR_U32(ctx, 31, 0x221714u);
    ctx->pc = 0x2219C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2219C0u, 0x22170Cu, 0x221714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221714u;
label_221714:
    // 0x221714: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x221714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x221718: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x221718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x22171c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x22171cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x221720: 0xc041954  jal         func_106550
    ctx->pc = 0x221720u;
    SET_GPR_U32(ctx, 31, 0x221728u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x221720u, 0x221728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221728u;
label_221728:
    // 0x221728: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x221728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x22172c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22172cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221730: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x221730u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x221734: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x221734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x221738: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x221738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x22173c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22173cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221740: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x221740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221744: 0xc089510  jal         func_225440
    ctx->pc = 0x221744u;
    SET_GPR_U32(ctx, 31, 0x22174Cu);
    ctx->pc = 0x225440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225440u, 0x221744u, 0x22174Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22174Cu;
label_22174c:
    // 0x22174c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22174cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221750: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x221750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x221754: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x221754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221758: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x221758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22175c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22175cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221760: 0xc041934  jal         func_1064D0
    ctx->pc = 0x221760u;
    SET_GPR_U32(ctx, 31, 0x221768u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x221760u, 0x221768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221768u;
label_221768:
    // 0x221768: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x221768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22176c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22176cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221770: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x221770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x221774: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x221774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x221778: 0xc088654  jal         func_221950
    ctx->pc = 0x221778u;
    SET_GPR_U32(ctx, 31, 0x221780u);
    ctx->pc = 0x221950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221950u, 0x221778u, 0x221780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221780u;
label_221780:
    // 0x221780: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x221780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221784: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x221784u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x221788: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x221788u;
    {
        const bool branch_taken_0x221788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x221788) {
            ctx->pc = 0x2217ACu;
            goto label_2217ac;
        }
    }
    ctx->pc = 0x221790u;
    // 0x221790: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x221790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x221794: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x221794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x221798: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x221798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22179c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22179cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2217a0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2217A0u;
    SET_GPR_U32(ctx, 31, 0x2217A8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2217A0u, 0x2217A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2217A8u;
label_2217a8:
    // 0x2217a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2217a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2217ac:
    // 0x2217ac: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2217acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2217b0: 0xc088610  jal         func_221840
    ctx->pc = 0x2217B0u;
    SET_GPR_U32(ctx, 31, 0x2217B8u);
    ctx->pc = 0x221840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221840u, 0x2217B0u, 0x2217B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2217B8u;
label_2217b8:
    // 0x2217b8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2217b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2217bc: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x2217bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2217c0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2217c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2217c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2217c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2217c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2217c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2217cc: 0xc0885fc  jal         func_2217F0
    ctx->pc = 0x2217CCu;
    SET_GPR_U32(ctx, 31, 0x2217D4u);
    ctx->pc = 0x2217F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2217F0u, 0x2217CCu, 0x2217D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2217D4u;
label_2217d4:
    // 0x2217d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2217d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2217d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2217d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2217dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2217dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2217e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2217e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2217e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2217e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2217e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2217E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2217E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2217F0u;
}
