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

// Function: sub_001E36D0
// Address: 0x1e36d0 - 0x1e3780
void sub_001E36D0_0x1e36d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E36D0_0x1e36d0");
#endif

    switch (ctx->pc) {
        case 0x1e36f4u: goto label_1e36f4;
        case 0x1e372cu: goto label_1e372c;
        case 0x1e373cu: goto label_1e373c;
        case 0x1e3750u: goto label_1e3750;
        case 0x1e3764u: goto label_1e3764;
        default: break;
    }

    ctx->pc = 0x1e36d0u;

    // 0x1e36d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e36d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e36d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e36d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e36d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e36d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e36dc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e36dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e36e0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1e36e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1e36e4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1e36e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e36e8: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1e36e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e36ec: 0xc078b28  jal         func_1E2CA0
    ctx->pc = 0x1E36ECu;
    SET_GPR_U32(ctx, 31, 0x1E36F4u);
    ctx->pc = 0x1E2CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2CA0u, 0x1E36ECu, 0x1E36F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E36F4u;
label_1e36f4:
    // 0x1e36f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e36f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e36f8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e36f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e36fc: 0x2443001f  addiu       $v1, $v0, 0x1F
    ctx->pc = 0x1e36fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x1e3700: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1e3700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1e3704: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x1e3704u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1e3708: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e3708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e370c: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x1e370cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e3710: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e3710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3714: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x1e3714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x1e3718: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x1e3718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1e371c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e371cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3720: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e3720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3724: 0xc078b08  jal         func_1E2C20
    ctx->pc = 0x1E3724u;
    SET_GPR_U32(ctx, 31, 0x1E372Cu);
    ctx->pc = 0x1E2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2C20u, 0x1E3724u, 0x1E372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E372Cu;
label_1e372c:
    // 0x1e372c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1e372cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3730: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e3730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3734: 0xc0789e8  jal         func_1E27A0
    ctx->pc = 0x1E3734u;
    SET_GPR_U32(ctx, 31, 0x1E373Cu);
    ctx->pc = 0x1E27A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E27A0u, 0x1E3734u, 0x1E373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E373Cu;
label_1e373c:
    // 0x1e373c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1e373cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e3740: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e3740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e3744: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1e3744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3748: 0xc07887c  jal         func_1E21F0
    ctx->pc = 0x1E3748u;
    SET_GPR_U32(ctx, 31, 0x1E3750u);
    ctx->pc = 0x1E21F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E21F0u, 0x1E3748u, 0x1E3750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3750u;
label_1e3750:
    // 0x1e3750: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e3750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3754: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1e3754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e3758: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1e3758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e375c: 0xc0789e8  jal         func_1E27A0
    ctx->pc = 0x1E375Cu;
    SET_GPR_U32(ctx, 31, 0x1E3764u);
    ctx->pc = 0x1E27A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E27A0u, 0x1E375Cu, 0x1E3764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3764u;
label_1e3764:
    // 0x1e3764: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e3764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3768: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e376c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1e376cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e3770: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3778u;
    // 0x1e3778: 0x0  nop
    ctx->pc = 0x1e3778u;
    // NOP
    // 0x1e377c: 0x0  nop
    ctx->pc = 0x1e377cu;
    // NOP
    ctx->pc = 0x1e3780u;
}
