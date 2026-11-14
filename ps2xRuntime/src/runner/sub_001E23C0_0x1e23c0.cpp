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

// Function: sub_001E23C0
// Address: 0x1e23c0 - 0x1e24a0
void sub_001E23C0_0x1e23c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E23C0_0x1e23c0");
#endif

    switch (ctx->pc) {
        case 0x1e23e8u: goto label_1e23e8;
        case 0x1e2404u: goto label_1e2404;
        case 0x1e2418u: goto label_1e2418;
        case 0x1e2428u: goto label_1e2428;
        case 0x1e2440u: goto label_1e2440;
        case 0x1e2458u: goto label_1e2458;
        case 0x1e2464u: goto label_1e2464;
        case 0x1e2480u: goto label_1e2480;
        default: break;
    }

    ctx->pc = 0x1e23c0u;

    // 0x1e23c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e23c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1e23c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e23c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e23c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e23c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e23cc: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1e23ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1e23d0: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1e23d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1e23d4: 0xa3a60070  sb          $a2, 0x70($sp)
    ctx->pc = 0x1e23d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 6));
    // 0x1e23d8: 0x8fb00060  lw          $s0, 0x60($sp)
    ctx->pc = 0x1e23d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e23dc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e23dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e23e0: 0xc077f2c  jal         func_1DFCB0
    ctx->pc = 0x1E23E0u;
    SET_GPR_U32(ctx, 31, 0x1E23E8u);
    ctx->pc = 0x1DFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCB0u, 0x1E23E0u, 0x1E23E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E23E8u;
label_1e23e8:
    // 0x1e23e8: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x1e23e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e23ec: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E23ECu;
    {
        const bool branch_taken_0x1e23ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e23ec) {
            ctx->pc = 0x1E2448u;
            goto label_1e2448;
        }
    }
    ctx->pc = 0x1E23F4u;
    // 0x1e23f4: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x1e23f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1e23f8: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1e23f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e23fc: 0xc0788e4  jal         func_1E2390
    ctx->pc = 0x1E23FCu;
    SET_GPR_U32(ctx, 31, 0x1E2404u);
    ctx->pc = 0x1E2390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2390u, 0x1E23FCu, 0x1E2404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2404u;
label_1e2404:
    // 0x1e2404: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x1e2404u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e2408: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e2408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e240c: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x1e240cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1e2410: 0xc07887c  jal         func_1E21F0
    ctx->pc = 0x1E2410u;
    SET_GPR_U32(ctx, 31, 0x1E2418u);
    ctx->pc = 0x1E21F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E21F0u, 0x1E2410u, 0x1E2418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2418u;
label_1e2418:
    // 0x1e2418: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e2418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e241c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1e241cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e2420: 0xc078c10  jal         func_1E3040
    ctx->pc = 0x1E2420u;
    SET_GPR_U32(ctx, 31, 0x1E2428u);
    ctx->pc = 0x1E3040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3040u, 0x1E2420u, 0x1E2428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2428u;
label_1e2428:
    // 0x1e2428: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1e2428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1e242c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1e242cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e2430: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1e2430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e2434: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1e2434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e2438: 0xc078be8  jal         func_1E2FA0
    ctx->pc = 0x1E2438u;
    SET_GPR_U32(ctx, 31, 0x1E2440u);
    ctx->pc = 0x1E2FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2FA0u, 0x1E2438u, 0x1E2440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2440u;
label_1e2440:
    // 0x1e2440: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1E2440u;
    {
        const bool branch_taken_0x1e2440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2440) {
            ctx->pc = 0x1E2480u;
            goto label_1e2480;
        }
    }
    ctx->pc = 0x1E2448u;
label_1e2448:
    // 0x1e2448: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x1e2448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1e244c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1e244cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e2450: 0xc078c10  jal         func_1E3040
    ctx->pc = 0x1E2450u;
    SET_GPR_U32(ctx, 31, 0x1E2458u);
    ctx->pc = 0x1E3040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3040u, 0x1E2450u, 0x1E2458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2458u;
label_1e2458:
    // 0x1e2458: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e2458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e245c: 0xc077f2c  jal         func_1DFCB0
    ctx->pc = 0x1E245Cu;
    SET_GPR_U32(ctx, 31, 0x1E2464u);
    ctx->pc = 0x1DFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCB0u, 0x1E245Cu, 0x1E2464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2464u;
label_1e2464:
    // 0x1e2464: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e2464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e2468: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x1e2468u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e246c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e246cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e2470: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x1e2470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1e2474: 0x93a70070  lbu         $a3, 0x70($sp)
    ctx->pc = 0x1e2474u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e2478: 0xc078928  jal         func_1E24A0
    ctx->pc = 0x1E2478u;
    SET_GPR_U32(ctx, 31, 0x1E2480u);
    ctx->pc = 0x1E24A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E24A0u, 0x1E2478u, 0x1E2480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2480u;
label_1e2480:
    // 0x1e2480: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2484: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2488: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1e2488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e248c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E248Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E248Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2494u;
    // 0x1e2494: 0x0  nop
    ctx->pc = 0x1e2494u;
    // NOP
    // 0x1e2498: 0x0  nop
    ctx->pc = 0x1e2498u;
    // NOP
    // 0x1e249c: 0x0  nop
    ctx->pc = 0x1e249cu;
    // NOP
    ctx->pc = 0x1e24a0u;
}
