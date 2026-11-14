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

// Function: sub_001C23F0
// Address: 0x1c23f0 - 0x1c2500
void sub_001C23F0_0x1c23f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C23F0_0x1c23f0");
#endif

    switch (ctx->pc) {
        case 0x1c2424u: goto label_1c2424;
        case 0x1c2438u: goto label_1c2438;
        case 0x1c245cu: goto label_1c245c;
        case 0x1c2478u: goto label_1c2478;
        case 0x1c2490u: goto label_1c2490;
        case 0x1c24b8u: goto label_1c24b8;
        case 0x1c24c8u: goto label_1c24c8;
        case 0x1c24e4u: goto label_1c24e4;
        default: break;
    }

    ctx->pc = 0x1c23f0u;

    // 0x1c23f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c23f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1c23f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c23f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c23f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c23f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c23fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c23fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c2400: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c2400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c2404: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1c2404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1c2408: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1c2408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1c240c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1c240cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1c2410: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x1c2410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x1c2414: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x1c2414u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x1c2418: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1c2418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c241c: 0xc0708b8  jal         func_1C22E0
    ctx->pc = 0x1C241Cu;
    SET_GPR_U32(ctx, 31, 0x1C2424u);
    ctx->pc = 0x1C22E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22E0u, 0x1C241Cu, 0x1C2424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2424u;
label_1c2424:
    // 0x1c2424: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1c2424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1c2428: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1c2428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c242c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1c242cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c2430: 0xc041954  jal         func_106550
    ctx->pc = 0x1C2430u;
    SET_GPR_U32(ctx, 31, 0x1C2438u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x1C2430u, 0x1C2438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2438u;
label_1c2438:
    // 0x1c2438: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1c2438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c243c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c243cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2440: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1c2440u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c2444: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c2444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c2448: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1c2448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1c244c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c244cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2450: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c2450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2454: 0xc070d78  jal         func_1C35E0
    ctx->pc = 0x1C2454u;
    SET_GPR_U32(ctx, 31, 0x1C245Cu);
    ctx->pc = 0x1C35E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C35E0u, 0x1C2454u, 0x1C245Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C245Cu;
label_1c245c:
    // 0x1c245c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c245cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2460: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c2460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c2464: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1c2464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2468: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1c2468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c246c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c246cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2470: 0xc041934  jal         func_1064D0
    ctx->pc = 0x1C2470u;
    SET_GPR_U32(ctx, 31, 0x1C2478u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x1C2470u, 0x1C2478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2478u;
label_1c2478:
    // 0x1c2478: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c2478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c247c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c247cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2480: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1c2480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c2484: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x1c2484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c2488: 0xc070974  jal         func_1C25D0
    ctx->pc = 0x1C2488u;
    SET_GPR_U32(ctx, 31, 0x1C2490u);
    ctx->pc = 0x1C25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25D0u, 0x1C2488u, 0x1C2490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2490u;
label_1c2490:
    // 0x1c2490: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c2490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2494: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x1c2494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c2498: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C2498u;
    {
        const bool branch_taken_0x1c2498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2498) {
            ctx->pc = 0x1C24BCu;
            goto label_1c24bc;
        }
    }
    ctx->pc = 0x1C24A0u;
    // 0x1c24a0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c24a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c24a4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1c24a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c24a8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1c24a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c24ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c24acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c24b0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x1C24B0u;
    SET_GPR_U32(ctx, 31, 0x1C24B8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x1C24B0u, 0x1C24B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C24B8u;
label_1c24b8:
    // 0x1c24b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c24b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c24bc:
    // 0x1c24bc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1c24bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c24c0: 0xc070954  jal         func_1C2550
    ctx->pc = 0x1C24C0u;
    SET_GPR_U32(ctx, 31, 0x1C24C8u);
    ctx->pc = 0x1C2550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2550u, 0x1C24C0u, 0x1C24C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C24C8u;
label_1c24c8:
    // 0x1c24c8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1c24c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1c24cc: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x1c24ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1c24d0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1c24d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c24d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c24d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c24d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c24d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c24dc: 0xc070940  jal         func_1C2500
    ctx->pc = 0x1C24DCu;
    SET_GPR_U32(ctx, 31, 0x1C24E4u);
    ctx->pc = 0x1C2500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2500u, 0x1C24DCu, 0x1C24E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C24E4u;
label_1c24e4:
    // 0x1c24e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c24e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c24e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c24e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c24ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c24ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c24f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c24f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c24f4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1c24f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1c24f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C24F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C24F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2500u;
}
