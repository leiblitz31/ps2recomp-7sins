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

// Function: sub_00456400
// Address: 0x456400 - 0x456530
void sub_00456400_0x456400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00456400_0x456400");
#endif

    switch (ctx->pc) {
        case 0x45642cu: goto label_45642c;
        case 0x456458u: goto label_456458;
        case 0x45646cu: goto label_45646c;
        case 0x456494u: goto label_456494;
        default: break;
    }

    ctx->pc = 0x456400u;

    // 0x456400: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x456400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x456404: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x456404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x456408: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x456408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45640c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45640cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x456410: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x456410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x456414: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x456414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x456418: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x456418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45641c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x45641cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x456420: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x456420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x456424: 0xc042514  jal         func_109450
    ctx->pc = 0x456424u;
    SET_GPR_U32(ctx, 31, 0x45642Cu);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x456424u, 0x45642Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45642Cu;
label_45642c:
    // 0x45642c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x45642cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x456430: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x456430u;
    {
        const bool branch_taken_0x456430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x456430) {
            ctx->pc = 0x456444u;
            goto label_456444;
        }
    }
    ctx->pc = 0x456438u;
    // 0x456438: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x456438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45643c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x45643Cu;
    {
        const bool branch_taken_0x45643c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45643c) {
            ctx->pc = 0x456510u;
            goto label_456510;
        }
    }
    ctx->pc = 0x456444u;
label_456444:
    // 0x456444: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x456444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x456448: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x456448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45644c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x45644cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x456450: 0xc043544  jal         func_10D510
    ctx->pc = 0x456450u;
    SET_GPR_U32(ctx, 31, 0x456458u);
    ctx->pc = 0x10D510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D510u, 0x456450u, 0x456458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456458u;
label_456458:
    // 0x456458: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x456458u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45645c: 0x2863c  dsll32      $s0, $v0, 24
    ctx->pc = 0x45645cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
    // 0x456460: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x456460u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
    // 0x456464: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x456464u;
    {
        const bool branch_taken_0x456464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x456464) {
            ctx->pc = 0x4564A0u;
            goto label_4564a0;
        }
    }
    ctx->pc = 0x45646Cu;
label_45646c:
    // 0x45646c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x45646cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x456470: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x456470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x456474: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x456474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x456478: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x456478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45647c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45647cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x456480: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x456480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x456484: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x456484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x456488: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x456488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45648c: 0xc043544  jal         func_10D510
    ctx->pc = 0x45648Cu;
    SET_GPR_U32(ctx, 31, 0x456494u);
    ctx->pc = 0x10D510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D510u, 0x45648Cu, 0x456494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456494u;
label_456494:
    // 0x456494: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x456494u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x456498: 0x2863c  dsll32      $s0, $v0, 24
    ctx->pc = 0x456498u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
    // 0x45649c: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x45649cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
label_4564a0:
    // 0x4564a0: 0x10163c  dsll32      $v0, $s0, 24
    ctx->pc = 0x4564a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 24));
    // 0x4564a4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x4564a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x4564a8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4564A8u;
    {
        const bool branch_taken_0x4564a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4564a8) {
            ctx->pc = 0x4564ECu;
            goto label_4564ec;
        }
    }
    ctx->pc = 0x4564B0u;
    // 0x4564b0: 0x101e3c  dsll32      $v1, $s0, 24
    ctx->pc = 0x4564b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 24));
    // 0x4564b4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x4564b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x4564b8: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x4564b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x4564bc: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4564BCu;
    {
        const bool branch_taken_0x4564bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4564bc) {
            ctx->pc = 0x4564ECu;
            goto label_4564ec;
        }
    }
    ctx->pc = 0x4564C4u;
    // 0x4564c4: 0x101e3c  dsll32      $v1, $s0, 24
    ctx->pc = 0x4564c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 24));
    // 0x4564c8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x4564c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x4564cc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x4564ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4564d0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4564D0u;
    {
        const bool branch_taken_0x4564d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4564d0) {
            ctx->pc = 0x4564ECu;
            goto label_4564ec;
        }
    }
    ctx->pc = 0x4564D8u;
    // 0x4564d8: 0x101e3c  dsll32      $v1, $s0, 24
    ctx->pc = 0x4564d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 24));
    // 0x4564dc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x4564dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x4564e0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x4564e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x4564e4: 0x1462ffe1  bne         $v1, $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x4564E4u;
    {
        const bool branch_taken_0x4564e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4564e4) {
            ctx->pc = 0x45646Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45646c;
        }
    }
    ctx->pc = 0x4564ECu;
label_4564ec:
    // 0x4564ec: 0x101e3c  dsll32      $v1, $s0, 24
    ctx->pc = 0x4564ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 24));
    // 0x4564f0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x4564f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x4564f4: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x4564f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x4564f8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4564F8u;
    {
        const bool branch_taken_0x4564f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4564f8) {
            ctx->pc = 0x45650Cu;
            goto label_45650c;
        }
    }
    ctx->pc = 0x456500u;
    // 0x456500: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x456500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456504: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x456504u;
    {
        const bool branch_taken_0x456504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x456504) {
            ctx->pc = 0x456510u;
            goto label_456510;
        }
    }
    ctx->pc = 0x45650Cu;
label_45650c:
    // 0x45650c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45650cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_456510:
    // 0x456510: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x456510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x456514: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x456514u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x456518: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x456518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45651c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x45651cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x456520: 0x3e00008  jr          $ra
    ctx->pc = 0x456520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x456520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x456528u;
    // 0x456528: 0x0  nop
    ctx->pc = 0x456528u;
    // NOP
    // 0x45652c: 0x0  nop
    ctx->pc = 0x45652cu;
    // NOP
    ctx->pc = 0x456530u;
}
