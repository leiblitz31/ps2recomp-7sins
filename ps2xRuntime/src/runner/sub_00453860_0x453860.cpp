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

// Function: sub_00453860
// Address: 0x453860 - 0x4538f0
void sub_00453860_0x453860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00453860_0x453860");
#endif

    switch (ctx->pc) {
        case 0x45389cu: goto label_45389c;
        case 0x4538dcu: goto label_4538dc;
        default: break;
    }

    ctx->pc = 0x453860u;

    // 0x453860: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x453860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x453864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x453864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x453868: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x453868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x45386c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x45386cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x453870: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x453870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x453874: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x453874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x453878: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x453878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45387c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x45387cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x453880: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x453880u;
    {
        const bool branch_taken_0x453880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x453880) {
            ctx->pc = 0x4538B4u;
            goto label_4538b4;
        }
    }
    ctx->pc = 0x453888u;
    // 0x453888: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x453888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45388c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x45388cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x453890: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x453890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x453894: 0xc114ed0  jal         func_453B40
    ctx->pc = 0x453894u;
    SET_GPR_U32(ctx, 31, 0x45389Cu);
    ctx->pc = 0x453B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x453B40u, 0x453894u, 0x45389Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45389Cu;
label_45389c:
    // 0x45389c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x45389cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4538a0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4538a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4538a4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x4538a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x4538a8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x4538a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x4538ac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4538ACu;
    {
        const bool branch_taken_0x4538ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4538ac) {
            ctx->pc = 0x4538DCu;
            goto label_4538dc;
        }
    }
    ctx->pc = 0x4538B4u;
label_4538b4:
    // 0x4538b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4538b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4538b8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x4538b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x4538bc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4538bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4538c0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x4538c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4538c4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x4538c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4538c8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x4538c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x4538cc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4538ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4538d0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4538d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4538d4: 0xc114e3c  jal         func_4538F0
    ctx->pc = 0x4538D4u;
    SET_GPR_U32(ctx, 31, 0x4538DCu);
    ctx->pc = 0x4538F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4538F0u, 0x4538D4u, 0x4538DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4538DCu;
label_4538dc:
    // 0x4538dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4538dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4538e0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4538e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4538e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4538E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4538E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4538ECu;
    // 0x4538ec: 0x0  nop
    ctx->pc = 0x4538ecu;
    // NOP
    ctx->pc = 0x4538f0u;
}
