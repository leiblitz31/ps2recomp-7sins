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

// Function: sub_00211340
// Address: 0x211340 - 0x211410
void sub_00211340_0x211340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211340_0x211340");
#endif

    switch (ctx->pc) {
        case 0x211378u: goto label_211378;
        case 0x211388u: goto label_211388;
        case 0x21139cu: goto label_21139c;
        case 0x2113a8u: goto label_2113a8;
        case 0x2113c4u: goto label_2113c4;
        case 0x2113dcu: goto label_2113dc;
        default: break;
    }

    ctx->pc = 0x211340u;

    // 0x211340: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x211340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x211344: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x211344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x211348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x211348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21134c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21134cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x211350: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x211350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x211354: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x211354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x211358: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x211358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21135c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x21135cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x211360: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x211360u;
    {
        const bool branch_taken_0x211360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x211360) {
            ctx->pc = 0x2113ECu;
            goto label_2113ec;
        }
    }
    ctx->pc = 0x211368u;
    // 0x211368: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x211368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21136c: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x21136cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x211370: 0xc060260  jal         func_180980
    ctx->pc = 0x211370u;
    SET_GPR_U32(ctx, 31, 0x211378u);
    ctx->pc = 0x180980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180980u, 0x211370u, 0x211378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211378u;
label_211378:
    // 0x211378: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x211378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21137c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21137cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211380: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x211380u;
    {
        const bool branch_taken_0x211380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211380) {
            ctx->pc = 0x2113E0u;
            goto label_2113e0;
        }
    }
    ctx->pc = 0x211388u;
label_211388:
    // 0x211388: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x211388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21138c: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x21138cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x211390: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x211390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211394: 0xc084300  jal         func_210C00
    ctx->pc = 0x211394u;
    SET_GPR_U32(ctx, 31, 0x21139Cu);
    ctx->pc = 0x210C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210C00u, 0x211394u, 0x21139Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21139Cu;
label_21139c:
    // 0x21139c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21139cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2113a0: 0xc084734  jal         func_211CD0
    ctx->pc = 0x2113A0u;
    SET_GPR_U32(ctx, 31, 0x2113A8u);
    ctx->pc = 0x211CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211CD0u, 0x2113A0u, 0x2113A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2113A8u;
label_2113a8:
    // 0x2113a8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2113A8u;
    {
        const bool branch_taken_0x2113a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2113a8) {
            ctx->pc = 0x2113DCu;
            goto label_2113dc;
        }
    }
    ctx->pc = 0x2113B0u;
    // 0x2113b0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2113b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2113b4: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x2113b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x2113b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2113b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2113bc: 0xc084300  jal         func_210C00
    ctx->pc = 0x2113BCu;
    SET_GPR_U32(ctx, 31, 0x2113C4u);
    ctx->pc = 0x210C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210C00u, 0x2113BCu, 0x2113C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2113C4u;
label_2113c4:
    // 0x2113c4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2113c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2113c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2113c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2113cc: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2113ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2113d0: 0x2466000c  addiu       $a2, $v1, 0xC
    ctx->pc = 0x2113d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x2113d4: 0xc084790  jal         func_211E40
    ctx->pc = 0x2113D4u;
    SET_GPR_U32(ctx, 31, 0x2113DCu);
    ctx->pc = 0x211E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E40u, 0x2113D4u, 0x2113DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2113DCu;
label_2113dc:
    // 0x2113dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2113dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2113e0:
    // 0x2113e0: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x2113e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2113e4: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2113E4u;
    {
        const bool branch_taken_0x2113e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2113e4) {
            ctx->pc = 0x211388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211388;
        }
    }
    ctx->pc = 0x2113ECu;
label_2113ec:
    // 0x2113ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2113ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2113f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2113f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2113f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2113f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2113f8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2113f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2113fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2113FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2113FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211404u;
    // 0x211404: 0x0  nop
    ctx->pc = 0x211404u;
    // NOP
    // 0x211408: 0x0  nop
    ctx->pc = 0x211408u;
    // NOP
    // 0x21140c: 0x0  nop
    ctx->pc = 0x21140cu;
    // NOP
    ctx->pc = 0x211410u;
}
