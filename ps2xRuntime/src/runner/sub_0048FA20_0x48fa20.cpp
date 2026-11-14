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

// Function: sub_0048FA20
// Address: 0x48fa20 - 0x48fb40
void sub_0048FA20_0x48fa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048FA20_0x48fa20");
#endif

    switch (ctx->pc) {
        case 0x48fa48u: goto label_48fa48;
        case 0x48fa54u: goto label_48fa54;
        case 0x48fa70u: goto label_48fa70;
        case 0x48fa80u: goto label_48fa80;
        case 0x48fa9cu: goto label_48fa9c;
        case 0x48faacu: goto label_48faac;
        case 0x48faccu: goto label_48facc;
        case 0x48faf0u: goto label_48faf0;
        case 0x48fb00u: goto label_48fb00;
        case 0x48fb10u: goto label_48fb10;
        case 0x48fb20u: goto label_48fb20;
        default: break;
    }

    ctx->pc = 0x48fa20u;

    // 0x48fa20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x48fa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x48fa24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x48fa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x48fa28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48fa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48fa2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48fa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48fa30: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x48fa30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x48fa34: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x48fa34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x48fa38: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x48fa38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48fa3c: 0x2785b680  addiu       $a1, $gp, -0x4980
    ctx->pc = 0x48fa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948480));
    // 0x48fa40: 0xc040304  jal         func_100C10
    ctx->pc = 0x48FA40u;
    SET_GPR_U32(ctx, 31, 0x48FA48u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x48FA40u, 0x48FA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FA48u;
label_48fa48:
    // 0x48fa48: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x48fa48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x48fa4c: 0xc042514  jal         func_109450
    ctx->pc = 0x48FA4Cu;
    SET_GPR_U32(ctx, 31, 0x48FA54u);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x48FA4Cu, 0x48FA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FA54u;
label_48fa54:
    // 0x48fa54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x48fa54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fa58: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x48FA58u;
    {
        const bool branch_taken_0x48fa58 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x48fa58) {
            ctx->pc = 0x48FA8Cu;
            goto label_48fa8c;
        }
    }
    ctx->pc = 0x48FA60u;
    // 0x48fa60: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x48fa60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48fa64: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x48fa64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48fa68: 0xc042844  jal         func_10A110
    ctx->pc = 0x48FA68u;
    SET_GPR_U32(ctx, 31, 0x48FA70u);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x48FA68u, 0x48FA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FA70u;
label_48fa70:
    // 0x48fa70: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x48fa70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48fa74: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48fa74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48fa78: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x48FA78u;
    SET_GPR_U32(ctx, 31, 0x48FA80u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x48FA78u, 0x48FA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FA80u;
label_48fa80:
    // 0x48fa80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x48fa80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fa84: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x48FA84u;
    {
        const bool branch_taken_0x48fa84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48fa84) {
            ctx->pc = 0x48FB24u;
            goto label_48fb24;
        }
    }
    ctx->pc = 0x48FA8Cu;
label_48fa8c:
    // 0x48fa8c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x48fa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48fa90: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x48fa90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x48fa94: 0xc042844  jal         func_10A110
    ctx->pc = 0x48FA94u;
    SET_GPR_U32(ctx, 31, 0x48FA9Cu);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x48FA94u, 0x48FA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FA9Cu;
label_48fa9c:
    // 0x48fa9c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x48fa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48faa0: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x48faa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x48faa4: 0xc047874  jal         func_11E1D0
    ctx->pc = 0x48FAA4u;
    SET_GPR_U32(ctx, 31, 0x48FAACu);
    ctx->pc = 0x11E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1D0u, 0x48FAA4u, 0x48FAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FAACu;
label_48faac:
    // 0x48faac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x48faacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fab0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x48fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48fab4: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x48FAB4u;
    {
        const bool branch_taken_0x48fab4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x48fab4) {
            ctx->pc = 0x48FAD0u;
            goto label_48fad0;
        }
    }
    ctx->pc = 0x48FABCu;
    // 0x48fabc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x48fabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48fac0: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x48fac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x48fac4: 0xc047874  jal         func_11E1D0
    ctx->pc = 0x48FAC4u;
    SET_GPR_U32(ctx, 31, 0x48FACCu);
    ctx->pc = 0x11E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1D0u, 0x48FAC4u, 0x48FACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FACCu;
label_48facc:
    // 0x48facc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x48faccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48fad0:
    // 0x48fad0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x48fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48fad4: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x48FAD4u;
    {
        const bool branch_taken_0x48fad4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x48fad4) {
            ctx->pc = 0x48FAF0u;
            goto label_48faf0;
        }
    }
    ctx->pc = 0x48FADCu;
    // 0x48fadc: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x48fadcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x48fae0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x48fae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48fae4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48fae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fae8: 0xc047848  jal         func_11E120
    ctx->pc = 0x48FAE8u;
    SET_GPR_U32(ctx, 31, 0x48FAF0u);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x48FAE8u, 0x48FAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FAF0u;
label_48faf0:
    // 0x48faf0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x48faf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48faf4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x48faf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48faf8: 0xc042844  jal         func_10A110
    ctx->pc = 0x48FAF8u;
    SET_GPR_U32(ctx, 31, 0x48FB00u);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x48FAF8u, 0x48FB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FB00u;
label_48fb00:
    // 0x48fb00: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x48fb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48fb04: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48fb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48fb08: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x48FB08u;
    SET_GPR_U32(ctx, 31, 0x48FB10u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x48FB08u, 0x48FB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FB10u;
label_48fb10:
    // 0x48fb10: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x48fb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48fb14: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48fb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48fb18: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x48FB18u;
    SET_GPR_U32(ctx, 31, 0x48FB20u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x48FB18u, 0x48FB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FB20u;
label_48fb20:
    // 0x48fb20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x48fb20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48fb24:
    // 0x48fb24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48fb24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48fb28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48fb28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48fb2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48fb2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48fb30: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x48fb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x48fb34: 0x3e00008  jr          $ra
    ctx->pc = 0x48FB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48FB34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48FB3Cu;
    // 0x48fb3c: 0x0  nop
    ctx->pc = 0x48fb3cu;
    // NOP
    ctx->pc = 0x48fb40u;
}
