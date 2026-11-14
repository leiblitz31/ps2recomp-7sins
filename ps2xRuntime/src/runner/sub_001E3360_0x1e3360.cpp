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

// Function: sub_001E3360
// Address: 0x1e3360 - 0x1e3490
void sub_001E3360_0x1e3360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3360_0x1e3360");
#endif

    switch (ctx->pc) {
        case 0x1e339cu: goto label_1e339c;
        case 0x1e33acu: goto label_1e33ac;
        case 0x1e33c4u: goto label_1e33c4;
        case 0x1e33d0u: goto label_1e33d0;
        case 0x1e33e0u: goto label_1e33e0;
        case 0x1e33f0u: goto label_1e33f0;
        case 0x1e3400u: goto label_1e3400;
        case 0x1e3410u: goto label_1e3410;
        case 0x1e3428u: goto label_1e3428;
        case 0x1e3438u: goto label_1e3438;
        case 0x1e3444u: goto label_1e3444;
        case 0x1e3458u: goto label_1e3458;
        case 0x1e346cu: goto label_1e346c;
        default: break;
    }

    ctx->pc = 0x1e3360u;

    // 0x1e3360: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e3360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e3364: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e3368: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e3368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e336c: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1e336cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1e3370: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1e3370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1e3374: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e3374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e3378: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e3378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e337c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E337Cu;
    {
        const bool branch_taken_0x1e337c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e337c) {
            ctx->pc = 0x1E3390u;
            goto label_1e3390;
        }
    }
    ctx->pc = 0x1E3384u;
    // 0x1e3384: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e3384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e3388: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1E3388u;
    {
        const bool branch_taken_0x1e3388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3388) {
            ctx->pc = 0x1E3470u;
            goto label_1e3470;
        }
    }
    ctx->pc = 0x1E3390u;
label_1e3390:
    // 0x1e3390: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e3390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e3394: 0xc077f2c  jal         func_1DFCB0
    ctx->pc = 0x1E3394u;
    SET_GPR_U32(ctx, 31, 0x1E339Cu);
    ctx->pc = 0x1DFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCB0u, 0x1E3394u, 0x1E339Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E339Cu;
label_1e339c:
    // 0x1e339c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e339cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e33a0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e33a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e33a4: 0xc078bc0  jal         func_1E2F00
    ctx->pc = 0x1E33A4u;
    SET_GPR_U32(ctx, 31, 0x1E33ACu);
    ctx->pc = 0x1E2F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2F00u, 0x1E33A4u, 0x1E33ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E33ACu;
label_1e33ac:
    // 0x1e33ac: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x1e33acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1e33b0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1E33B0u;
    {
        const bool branch_taken_0x1e33b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e33b0) {
            ctx->pc = 0x1E33E0u;
            goto label_1e33e0;
        }
    }
    ctx->pc = 0x1E33B8u;
    // 0x1e33b8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e33b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e33bc: 0xc075888  jal         func_1D6220
    ctx->pc = 0x1E33BCu;
    SET_GPR_U32(ctx, 31, 0x1E33C4u);
    ctx->pc = 0x1D6220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6220u, 0x1E33BCu, 0x1E33C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E33C4u;
label_1e33c4:
    // 0x1e33c4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e33c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e33c8: 0xc077f2c  jal         func_1DFCB0
    ctx->pc = 0x1E33C8u;
    SET_GPR_U32(ctx, 31, 0x1E33D0u);
    ctx->pc = 0x1DFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCB0u, 0x1E33C8u, 0x1E33D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E33D0u;
label_1e33d0:
    // 0x1e33d0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e33d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e33d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e33d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e33d8: 0xc078db4  jal         func_1E36D0
    ctx->pc = 0x1E33D8u;
    SET_GPR_U32(ctx, 31, 0x1E33E0u);
    ctx->pc = 0x1E36D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E36D0u, 0x1E33D8u, 0x1E33E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E33E0u;
label_1e33e0:
    // 0x1e33e0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e33e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e33e4: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1e33e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e33e8: 0xc077f64  jal         func_1DFD90
    ctx->pc = 0x1E33E8u;
    SET_GPR_U32(ctx, 31, 0x1E33F0u);
    ctx->pc = 0x1DFD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFD90u, 0x1E33E8u, 0x1E33F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E33F0u;
label_1e33f0:
    // 0x1e33f0: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x1e33f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1e33f4: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1e33f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e33f8: 0xc077f90  jal         func_1DFE40
    ctx->pc = 0x1E33F8u;
    SET_GPR_U32(ctx, 31, 0x1E3400u);
    ctx->pc = 0x1DFE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFE40u, 0x1E33F8u, 0x1E3400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3400u;
label_1e3400:
    // 0x1e3400: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e3400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e3404: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1e3404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e3408: 0xc0788e4  jal         func_1E2390
    ctx->pc = 0x1E3408u;
    SET_GPR_U32(ctx, 31, 0x1E3410u);
    ctx->pc = 0x1E2390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2390u, 0x1E3408u, 0x1E3410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3410u;
label_1e3410:
    // 0x1e3410: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1e3410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1e3414: 0xdfa50040  ld          $a1, 0x40($sp)
    ctx->pc = 0x1e3414u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e3418: 0xdfa60038  ld          $a2, 0x38($sp)
    ctx->pc = 0x1e3418u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e341c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1e341cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e3420: 0xc078d24  jal         func_1E3490
    ctx->pc = 0x1E3420u;
    SET_GPR_U32(ctx, 31, 0x1E3428u);
    ctx->pc = 0x1E3490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3490u, 0x1E3420u, 0x1E3428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3428u;
label_1e3428:
    // 0x1e3428: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e3428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e342c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1e342cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e3430: 0xc0788e4  jal         func_1E2390
    ctx->pc = 0x1E3430u;
    SET_GPR_U32(ctx, 31, 0x1E3438u);
    ctx->pc = 0x1E2390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2390u, 0x1E3430u, 0x1E3438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3438u;
label_1e3438:
    // 0x1e3438: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e3438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e343c: 0xc077f2c  jal         func_1DFCB0
    ctx->pc = 0x1E343Cu;
    SET_GPR_U32(ctx, 31, 0x1E3444u);
    ctx->pc = 0x1DFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCB0u, 0x1E343Cu, 0x1E3444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3444u;
label_1e3444:
    // 0x1e3444: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x1e3444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1e3448: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1e3448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e344c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1e344cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3450: 0xc07887c  jal         func_1E21F0
    ctx->pc = 0x1E3450u;
    SET_GPR_U32(ctx, 31, 0x1E3458u);
    ctx->pc = 0x1E21F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E21F0u, 0x1E3450u, 0x1E3458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3458u;
label_1e3458:
    // 0x1e3458: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e3458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e345c: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1e345cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e3460: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x1e3460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1e3464: 0xc0789e8  jal         func_1E27A0
    ctx->pc = 0x1E3464u;
    SET_GPR_U32(ctx, 31, 0x1E346Cu);
    ctx->pc = 0x1E27A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E27A0u, 0x1E3464u, 0x1E346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E346Cu;
label_1e346c:
    // 0x1e346c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e346cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1e3470:
    // 0x1e3470: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e3470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3474: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3478: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e3478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e347c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E347Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E347Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3484u;
    // 0x1e3484: 0x0  nop
    ctx->pc = 0x1e3484u;
    // NOP
    // 0x1e3488: 0x0  nop
    ctx->pc = 0x1e3488u;
    // NOP
    // 0x1e348c: 0x0  nop
    ctx->pc = 0x1e348cu;
    // NOP
    ctx->pc = 0x1e3490u;
}
