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

// Function: sub_003292D0
// Address: 0x3292d0 - 0x329380
void sub_003292D0_0x3292d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003292D0_0x3292d0");
#endif

    switch (ctx->pc) {
        case 0x329348u: goto label_329348;
        case 0x329364u: goto label_329364;
        default: break;
    }

    ctx->pc = 0x3292d0u;

    // 0x3292d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3292d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3292d4: 0x3c0c00ff  lui         $t4, 0xFF
    ctx->pc = 0x3292d4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)255 << 16));
    // 0x3292d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3292d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3292dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3292dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3292e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3292e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3292e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3292e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3292e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3292e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3292ec: 0x8e27002c  lw          $a3, 0x2C($s1)
    ctx->pc = 0x3292ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x3292f0: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x3292f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x3292f4: 0x30e60001  andi        $a2, $a3, 0x1
    ctx->pc = 0x3292f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x3292f8: 0x30e30008  andi        $v1, $a3, 0x8
    ctx->pc = 0x3292f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x3292fc: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x3292fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x329300: 0x30e80004  andi        $t0, $a3, 0x4
    ctx->pc = 0x329300u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x329304: 0x34c20005  ori         $v0, $a2, 0x5
    ctx->pc = 0x329304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)5);
    // 0x329308: 0x30e90002  andi        $t1, $a3, 0x2
    ctx->pc = 0x329308u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
    // 0x32930c: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x32930cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x329310: 0x30ea0010  andi        $t2, $a3, 0x10
    ctx->pc = 0x329310u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x329314: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x329314u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x329318: 0x30eb0020  andi        $t3, $a3, 0x20
    ctx->pc = 0x329318u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x32931c: 0x34c20008  ori         $v0, $a2, 0x8
    ctx->pc = 0x32931cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x329320: 0xec3824  and         $a3, $a3, $t4
    ctx->pc = 0x329320u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 12));
    // 0x329324: 0x48300b  movn        $a2, $v0, $t0
    ctx->pc = 0x329324u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x329328: 0x34c30010  ori         $v1, $a2, 0x10
    ctx->pc = 0x329328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
    // 0x32932c: 0x69300b  movn        $a2, $v1, $t1
    ctx->pc = 0x32932cu;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x329330: 0x34c20020  ori         $v0, $a2, 0x20
    ctx->pc = 0x329330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32);
    // 0x329334: 0x4a300b  movn        $a2, $v0, $t2
    ctx->pc = 0x329334u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x329338: 0x34c30040  ori         $v1, $a2, 0x40
    ctx->pc = 0x329338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x32933c: 0x6b300b  movn        $a2, $v1, $t3
    ctx->pc = 0x32933cu;
    if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x329340: 0xc0e2dbc  jal         func_38B6F0
    ctx->pc = 0x329340u;
    SET_GPR_U32(ctx, 31, 0x329348u);
    ctx->pc = 0x329344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329340u;
    // 0x329344: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B6F0u, 0x329340u, 0x329348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329348u;
label_329348:
    // 0x329348: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32934c: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x32934cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x329350: 0x8c622320  lw          $v0, 0x2320($v1)
    ctx->pc = 0x329350u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4F2320u));
    // 0x329354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x329354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329358: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x329358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32935c: 0xc0ca0cc  jal         func_328330
    ctx->pc = 0x32935Cu;
    SET_GPR_U32(ctx, 31, 0x329364u);
    ctx->pc = 0x329360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32935Cu;
    // 0x329360: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328330u, 0x32935Cu, 0x329364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329364u;
label_329364:
    // 0x329364: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x329364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329368: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x329368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32936c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32936cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x329370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329374: 0x3e00008  jr          $ra
    ctx->pc = 0x329374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329374u;
        // 0x329378: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32937Cu;
    // 0x32937c: 0x0  nop
    ctx->pc = 0x32937cu;
    // NOP
    ctx->pc = 0x329380u;
}
