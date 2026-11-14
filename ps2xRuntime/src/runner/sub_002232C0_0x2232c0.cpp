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

// Function: sub_002232C0
// Address: 0x2232c0 - 0x2233d0
void sub_002232C0_0x2232c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002232C0_0x2232c0");
#endif

    switch (ctx->pc) {
        case 0x2232f4u: goto label_2232f4;
        case 0x223308u: goto label_223308;
        case 0x22332cu: goto label_22332c;
        case 0x223348u: goto label_223348;
        case 0x223360u: goto label_223360;
        case 0x223388u: goto label_223388;
        case 0x223398u: goto label_223398;
        case 0x2233b4u: goto label_2233b4;
        default: break;
    }

    ctx->pc = 0x2232c0u;

    // 0x2232c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2232c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2232c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2232c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2232c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2232c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2232cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2232ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2232d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2232d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2232d4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2232d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2232d8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2232d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2232dc: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2232dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2232e0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x2232e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x2232e4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x2232e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x2232e8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2232e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2232ec: 0xc088d44  jal         func_223510
    ctx->pc = 0x2232ECu;
    SET_GPR_U32(ctx, 31, 0x2232F4u);
    ctx->pc = 0x223510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223510u, 0x2232ECu, 0x2232F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2232F4u;
label_2232f4:
    // 0x2232f4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2232f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2232f8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2232f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2232fc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2232fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x223300: 0xc041954  jal         func_106550
    ctx->pc = 0x223300u;
    SET_GPR_U32(ctx, 31, 0x223308u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x223300u, 0x223308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223308u;
label_223308:
    // 0x223308: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x223308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x22330c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22330cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x223310: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x223310u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x223314: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x223314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x223318: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x223318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x22331c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22331cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223320: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x223320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223324: 0xc08954c  jal         func_225530
    ctx->pc = 0x223324u;
    SET_GPR_U32(ctx, 31, 0x22332Cu);
    ctx->pc = 0x225530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225530u, 0x223324u, 0x22332Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22332Cu;
label_22332c:
    // 0x22332c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22332cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223330: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x223330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x223334: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x223334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x223338: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x223338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22333c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22333cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223340: 0xc041934  jal         func_1064D0
    ctx->pc = 0x223340u;
    SET_GPR_U32(ctx, 31, 0x223348u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x223340u, 0x223348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223348u;
label_223348:
    // 0x223348: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x223348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22334c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22334cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223350: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x223350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x223354: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x223354u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x223358: 0xc088d28  jal         func_2234A0
    ctx->pc = 0x223358u;
    SET_GPR_U32(ctx, 31, 0x223360u);
    ctx->pc = 0x2234A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2234A0u, 0x223358u, 0x223360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223360u;
label_223360:
    // 0x223360: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x223360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223364: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x223364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x223368: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x223368u;
    {
        const bool branch_taken_0x223368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x223368) {
            ctx->pc = 0x22338Cu;
            goto label_22338c;
        }
    }
    ctx->pc = 0x223370u;
    // 0x223370: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x223370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x223374: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x223374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x223378: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x223378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22337c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22337cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223380: 0xc041934  jal         func_1064D0
    ctx->pc = 0x223380u;
    SET_GPR_U32(ctx, 31, 0x223388u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x223380u, 0x223388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223388u;
label_223388:
    // 0x223388: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x223388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22338c:
    // 0x22338c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x22338cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x223390: 0xc088d08  jal         func_223420
    ctx->pc = 0x223390u;
    SET_GPR_U32(ctx, 31, 0x223398u);
    ctx->pc = 0x223420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223420u, 0x223390u, 0x223398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223398u;
label_223398:
    // 0x223398: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x223398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x22339c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x22339cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2233a0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2233a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2233a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2233a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2233a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2233a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2233ac: 0xc088cf4  jal         func_2233D0
    ctx->pc = 0x2233ACu;
    SET_GPR_U32(ctx, 31, 0x2233B4u);
    ctx->pc = 0x2233D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2233D0u, 0x2233ACu, 0x2233B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2233B4u;
label_2233b4:
    // 0x2233b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2233b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2233b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2233b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2233bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2233bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2233c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2233c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2233c4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2233c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2233c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2233C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2233C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2233D0u;
}
