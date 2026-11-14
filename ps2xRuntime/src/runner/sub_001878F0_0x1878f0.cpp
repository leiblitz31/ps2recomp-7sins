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

// Function: sub_001878F0
// Address: 0x1878f0 - 0x187a50
void sub_001878F0_0x1878f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001878F0_0x1878f0");
#endif

    switch (ctx->pc) {
        case 0x18791cu: goto label_18791c;
        case 0x187948u: goto label_187948;
        case 0x18795cu: goto label_18795c;
        case 0x18798cu: goto label_18798c;
        case 0x1879ccu: goto label_1879cc;
        default: break;
    }

    ctx->pc = 0x1878f0u;

    // 0x1878f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1878f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1878f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1878f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1878f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1878f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1878fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1878fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x187900: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x187900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x187904: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x187904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x187908: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x187908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18790c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x18790cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187910: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x187910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187914: 0xc042514  jal         func_109450
    ctx->pc = 0x187914u;
    SET_GPR_U32(ctx, 31, 0x18791Cu);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x187914u, 0x18791Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18791Cu;
label_18791c:
    // 0x18791c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x18791cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x187920: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x187920u;
    {
        const bool branch_taken_0x187920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187920) {
            ctx->pc = 0x187934u;
            goto label_187934;
        }
    }
    ctx->pc = 0x187928u;
    // 0x187928: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x187928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18792c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x18792Cu;
    {
        const bool branch_taken_0x18792c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18792c) {
            ctx->pc = 0x187A2Cu;
            goto label_187a2c;
        }
    }
    ctx->pc = 0x187934u;
label_187934:
    // 0x187934: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x187934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x187938: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x187938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18793c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18793cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187940: 0xc043544  jal         func_10D510
    ctx->pc = 0x187940u;
    SET_GPR_U32(ctx, 31, 0x187948u);
    ctx->pc = 0x10D510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D510u, 0x187940u, 0x187948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187948u;
label_187948:
    // 0x187948: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x187948u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18794c: 0x2863c  dsll32      $s0, $v0, 24
    ctx->pc = 0x18794cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
    // 0x187950: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x187950u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
    // 0x187954: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x187954u;
    {
        const bool branch_taken_0x187954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187954) {
            ctx->pc = 0x1879D8u;
            goto label_1879d8;
        }
    }
    ctx->pc = 0x18795Cu;
label_18795c:
    // 0x18795c: 0x10163c  dsll32      $v0, $s0, 24
    ctx->pc = 0x18795cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 24));
    // 0x187960: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x187960u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x187964: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x187964u;
    {
        const bool branch_taken_0x187964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187964) {
            ctx->pc = 0x187978u;
            goto label_187978;
        }
    }
    ctx->pc = 0x18796Cu;
    // 0x18796c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18796cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187970: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x187970u;
    {
        const bool branch_taken_0x187970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187970) {
            ctx->pc = 0x187A2Cu;
            goto label_187a2c;
        }
    }
    ctx->pc = 0x187978u;
label_187978:
    // 0x187978: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x187978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18797c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x18797cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187980: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x187980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187984: 0xc042514  jal         func_109450
    ctx->pc = 0x187984u;
    SET_GPR_U32(ctx, 31, 0x18798Cu);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x187984u, 0x18798Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18798Cu;
label_18798c:
    // 0x18798c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x18798cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x187990: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x187990u;
    {
        const bool branch_taken_0x187990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187990) {
            ctx->pc = 0x1879A4u;
            goto label_1879a4;
        }
    }
    ctx->pc = 0x187998u;
    // 0x187998: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x187998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18799c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x18799Cu;
    {
        const bool branch_taken_0x18799c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18799c) {
            ctx->pc = 0x187A2Cu;
            goto label_187a2c;
        }
    }
    ctx->pc = 0x1879A4u;
label_1879a4:
    // 0x1879a4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1879a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1879a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1879a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1879ac: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1879acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1879b0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1879b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1879b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1879b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1879b8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1879b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1879bc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1879bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1879c0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1879c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1879c4: 0xc043544  jal         func_10D510
    ctx->pc = 0x1879C4u;
    SET_GPR_U32(ctx, 31, 0x1879CCu);
    ctx->pc = 0x10D510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D510u, 0x1879C4u, 0x1879CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1879CCu;
label_1879cc:
    // 0x1879cc: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1879ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1879d0: 0x2863c  dsll32      $s0, $v0, 24
    ctx->pc = 0x1879d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1879d4: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x1879d4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
label_1879d8:
    // 0x1879d8: 0x101e3c  dsll32      $v1, $s0, 24
    ctx->pc = 0x1879d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 24));
    // 0x1879dc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1879dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1879e0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1879e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1879e4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1879E4u;
    {
        const bool branch_taken_0x1879e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1879e4) {
            ctx->pc = 0x187A28u;
            goto label_187a28;
        }
    }
    ctx->pc = 0x1879ECu;
    // 0x1879ec: 0x101e3c  dsll32      $v1, $s0, 24
    ctx->pc = 0x1879ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 24));
    // 0x1879f0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1879f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1879f4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1879f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1879f8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1879F8u;
    {
        const bool branch_taken_0x1879f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1879f8) {
            ctx->pc = 0x187A28u;
            goto label_187a28;
        }
    }
    ctx->pc = 0x187A00u;
    // 0x187a00: 0x101e3c  dsll32      $v1, $s0, 24
    ctx->pc = 0x187a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 24));
    // 0x187a04: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x187a04u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x187a08: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x187a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x187a0c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x187A0Cu;
    {
        const bool branch_taken_0x187a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x187a0c) {
            ctx->pc = 0x187A28u;
            goto label_187a28;
        }
    }
    ctx->pc = 0x187A14u;
    // 0x187a14: 0x101e3c  dsll32      $v1, $s0, 24
    ctx->pc = 0x187a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 24));
    // 0x187a18: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x187a18u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x187a1c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x187a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x187a20: 0x1462ffce  bne         $v1, $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x187A20u;
    {
        const bool branch_taken_0x187a20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x187a20) {
            ctx->pc = 0x18795Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18795c;
        }
    }
    ctx->pc = 0x187A28u;
label_187a28:
    // 0x187a28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x187a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_187a2c:
    // 0x187a2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x187a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187a30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x187a30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187a34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187a34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187a38: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x187a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x187a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x187A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187A44u;
    // 0x187a44: 0x0  nop
    ctx->pc = 0x187a44u;
    // NOP
    // 0x187a48: 0x0  nop
    ctx->pc = 0x187a48u;
    // NOP
    // 0x187a4c: 0x0  nop
    ctx->pc = 0x187a4cu;
    // NOP
    ctx->pc = 0x187a50u;
}
