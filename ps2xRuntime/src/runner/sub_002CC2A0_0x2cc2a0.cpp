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

// Function: sub_002CC2A0
// Address: 0x2cc2a0 - 0x2cc3b0
void sub_002CC2A0_0x2cc2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC2A0_0x2cc2a0");
#endif

    switch (ctx->pc) {
        case 0x2cc2d4u: goto label_2cc2d4;
        case 0x2cc2e8u: goto label_2cc2e8;
        case 0x2cc30cu: goto label_2cc30c;
        case 0x2cc328u: goto label_2cc328;
        case 0x2cc340u: goto label_2cc340;
        case 0x2cc368u: goto label_2cc368;
        case 0x2cc378u: goto label_2cc378;
        case 0x2cc394u: goto label_2cc394;
        default: break;
    }

    ctx->pc = 0x2cc2a0u;

    // 0x2cc2a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2cc2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2cc2a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cc2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2cc2a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cc2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cc2ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cc2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cc2b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cc2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cc2b4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2cc2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2cc2b8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2cc2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2cc2bc: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2cc2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2cc2c0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x2cc2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x2cc2c4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x2cc2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x2cc2c8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2cc2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cc2cc: 0xc0b2e9c  jal         func_2CBA70
    ctx->pc = 0x2CC2CCu;
    SET_GPR_U32(ctx, 31, 0x2CC2D4u);
    ctx->pc = 0x2CBA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA70u, 0x2CC2CCu, 0x2CC2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC2D4u;
label_2cc2d4:
    // 0x2cc2d4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2cc2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2cc2d8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2cc2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2cc2dc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2cc2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2cc2e0: 0xc041954  jal         func_106550
    ctx->pc = 0x2CC2E0u;
    SET_GPR_U32(ctx, 31, 0x2CC2E8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x2CC2E0u, 0x2CC2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC2E8u;
label_2cc2e8:
    // 0x2cc2e8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2cc2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2cc2ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cc2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cc2f0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2cc2f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cc2f4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2cc2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cc2f8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2cc2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2cc2fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2cc2fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc300: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cc300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc304: 0xc0b3f28  jal         func_2CFCA0
    ctx->pc = 0x2CC304u;
    SET_GPR_U32(ctx, 31, 0x2CC30Cu);
    ctx->pc = 0x2CFCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCA0u, 0x2CC304u, 0x2CC30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC30Cu;
label_2cc30c:
    // 0x2cc30c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cc30cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc310: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2cc310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cc314: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2cc314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cc318: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2cc318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cc31c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2cc31cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc320: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2CC320u;
    SET_GPR_U32(ctx, 31, 0x2CC328u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2CC320u, 0x2CC328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC328u;
label_2cc328:
    // 0x2cc328: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cc328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc32c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc330: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2cc330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2cc334: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x2cc334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cc338: 0xc0b3120  jal         func_2CC480
    ctx->pc = 0x2CC338u;
    SET_GPR_U32(ctx, 31, 0x2CC340u);
    ctx->pc = 0x2CC480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC480u, 0x2CC338u, 0x2CC340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC340u;
label_2cc340:
    // 0x2cc340: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cc340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc344: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x2cc344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2cc348: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CC348u;
    {
        const bool branch_taken_0x2cc348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cc348) {
            ctx->pc = 0x2CC36Cu;
            goto label_2cc36c;
        }
    }
    ctx->pc = 0x2CC350u;
    // 0x2cc350: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2cc350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cc354: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2cc354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cc358: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2cc358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cc35c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2cc35cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc360: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2CC360u;
    SET_GPR_U32(ctx, 31, 0x2CC368u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2CC360u, 0x2CC368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC368u;
label_2cc368:
    // 0x2cc368: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cc368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cc36c:
    // 0x2cc36c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2cc36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cc370: 0xc0b3100  jal         func_2CC400
    ctx->pc = 0x2CC370u;
    SET_GPR_U32(ctx, 31, 0x2CC378u);
    ctx->pc = 0x2CC400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC400u, 0x2CC370u, 0x2CC378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC378u;
label_2cc378:
    // 0x2cc378: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2cc378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2cc37c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x2cc37cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2cc380: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2cc380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cc384: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cc384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc388: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2cc388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc38c: 0xc0b30ec  jal         func_2CC3B0
    ctx->pc = 0x2CC38Cu;
    SET_GPR_U32(ctx, 31, 0x2CC394u);
    ctx->pc = 0x2CC3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC3B0u, 0x2CC38Cu, 0x2CC394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC394u;
label_2cc394:
    // 0x2cc394: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2cc394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cc398: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cc398u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc39c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cc39cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc3a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cc3a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc3a4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2cc3a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2cc3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC3B0u;
}
