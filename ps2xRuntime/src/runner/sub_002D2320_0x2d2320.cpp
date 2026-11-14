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

// Function: sub_002D2320
// Address: 0x2d2320 - 0x2d2430
void sub_002D2320_0x2d2320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2320_0x2d2320");
#endif

    switch (ctx->pc) {
        case 0x2d2354u: goto label_2d2354;
        case 0x2d2368u: goto label_2d2368;
        case 0x2d238cu: goto label_2d238c;
        case 0x2d23a8u: goto label_2d23a8;
        case 0x2d23c0u: goto label_2d23c0;
        case 0x2d23e8u: goto label_2d23e8;
        case 0x2d23f8u: goto label_2d23f8;
        case 0x2d2414u: goto label_2d2414;
        default: break;
    }

    ctx->pc = 0x2d2320u;

    // 0x2d2320: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2d2320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2d2324: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d2324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d2328: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d2328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d232c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d232cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d2330: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d2330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d2334: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2d2334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2d2338: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2d2338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2d233c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2d233cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2d2340: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x2d2340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x2d2344: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x2d2344u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x2d2348: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2d2348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d234c: 0xc0b495c  jal         func_2D2570
    ctx->pc = 0x2D234Cu;
    SET_GPR_U32(ctx, 31, 0x2D2354u);
    ctx->pc = 0x2D2570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2570u, 0x2D234Cu, 0x2D2354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2354u;
label_2d2354:
    // 0x2d2354: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2d2354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2d2358: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2d2358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2d235c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2d235cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d2360: 0xc041954  jal         func_106550
    ctx->pc = 0x2D2360u;
    SET_GPR_U32(ctx, 31, 0x2D2368u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x2D2360u, 0x2D2368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2368u;
label_2d2368:
    // 0x2d2368: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2d2368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2d236c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d236cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d2370: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2d2370u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d2374: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d2374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d2378: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2d2378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2d237c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d237cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2380: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d2380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2384: 0xc0b6364  jal         func_2D8D90
    ctx->pc = 0x2D2384u;
    SET_GPR_U32(ctx, 31, 0x2D238Cu);
    ctx->pc = 0x2D8D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8D90u, 0x2D2384u, 0x2D238Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D238Cu;
label_2d238c:
    // 0x2d238c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d238cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2390: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d2390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d2394: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d2394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d2398: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2d2398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d239c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2d239cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d23a0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2D23A0u;
    SET_GPR_U32(ctx, 31, 0x2D23A8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2D23A0u, 0x2D23A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D23A8u;
label_2d23a8:
    // 0x2d23a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d23a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d23ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d23acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d23b0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2d23b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d23b4: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x2d23b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d23b8: 0xc0b4940  jal         func_2D2500
    ctx->pc = 0x2D23B8u;
    SET_GPR_U32(ctx, 31, 0x2D23C0u);
    ctx->pc = 0x2D2500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2500u, 0x2D23B8u, 0x2D23C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D23C0u;
label_2d23c0:
    // 0x2d23c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d23c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d23c4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x2d23c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d23c8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D23C8u;
    {
        const bool branch_taken_0x2d23c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d23c8) {
            ctx->pc = 0x2D23ECu;
            goto label_2d23ec;
        }
    }
    ctx->pc = 0x2D23D0u;
    // 0x2d23d0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d23d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d23d4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2d23d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d23d8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2d23d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d23dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d23dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d23e0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2D23E0u;
    SET_GPR_U32(ctx, 31, 0x2D23E8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2D23E0u, 0x2D23E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D23E8u;
label_2d23e8:
    // 0x2d23e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d23e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d23ec:
    // 0x2d23ec: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2d23ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d23f0: 0xc0b4920  jal         func_2D2480
    ctx->pc = 0x2D23F0u;
    SET_GPR_U32(ctx, 31, 0x2D23F8u);
    ctx->pc = 0x2D2480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2480u, 0x2D23F0u, 0x2D23F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D23F8u;
label_2d23f8:
    // 0x2d23f8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2d23f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2d23fc: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x2d23fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2d2400: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2d2400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d2404: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d2404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2408: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d2408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d240c: 0xc0b490c  jal         func_2D2430
    ctx->pc = 0x2D240Cu;
    SET_GPR_U32(ctx, 31, 0x2D2414u);
    ctx->pc = 0x2D2430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2430u, 0x2D240Cu, 0x2D2414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2414u;
label_2d2414:
    // 0x2d2414: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d2414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2418: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d2418u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d241c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d241cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2420: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d2420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2424: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2d2424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2d2428: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2430u;
}
