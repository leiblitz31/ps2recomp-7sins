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

// Function: sub_00111BE0
// Address: 0x111be0 - 0x111cf0
void sub_00111BE0_0x111be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111BE0_0x111be0");
#endif

    switch (ctx->pc) {
        case 0x111c0cu: goto label_111c0c;
        case 0x111c1cu: goto label_111c1c;
        case 0x111c2cu: goto label_111c2c;
        case 0x111c44u: goto label_111c44;
        case 0x111c50u: goto label_111c50;
        case 0x111c64u: goto label_111c64;
        case 0x111c84u: goto label_111c84;
        case 0x111c9cu: goto label_111c9c;
        case 0x111cb4u: goto label_111cb4;
        case 0x111cc4u: goto label_111cc4;
        case 0x111cd0u: goto label_111cd0;
        default: break;
    }

    ctx->pc = 0x111be0u;

    // 0x111be0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x111be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x111be4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x111be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x111be8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x111be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x111bec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x111becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x111bf0: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x111bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x111bf4: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x111bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x111bf8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x111bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x111bfc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x111bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x111c00: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x111c00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x111c04: 0xc04478c  jal         func_111E30
    ctx->pc = 0x111C04u;
    SET_GPR_U32(ctx, 31, 0x111C0Cu);
    ctx->pc = 0x111E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111E30u, 0x111C04u, 0x111C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111C0Cu;
label_111c0c:
    // 0x111c0c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x111c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x111c10: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x111c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x111c14: 0xc043960  jal         func_10E580
    ctx->pc = 0x111C14u;
    SET_GPR_U32(ctx, 31, 0x111C1Cu);
    ctx->pc = 0x10E580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E580u, 0x111C14u, 0x111C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111C1Cu;
label_111c1c:
    // 0x111c1c: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x111c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x111c20: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x111c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x111c24: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x111C24u;
    SET_GPR_U32(ctx, 31, 0x111C2Cu);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x111C24u, 0x111C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111C2Cu;
label_111c2c:
    // 0x111c2c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x111C2Cu;
    {
        const bool branch_taken_0x111c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111c2c) {
            ctx->pc = 0x111C6Cu;
            goto label_111c6c;
        }
    }
    ctx->pc = 0x111C34u;
    // 0x111c34: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x111c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x111c38: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x111c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x111c3c: 0xc044770  jal         func_111DC0
    ctx->pc = 0x111C3Cu;
    SET_GPR_U32(ctx, 31, 0x111C44u);
    ctx->pc = 0x111DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111DC0u, 0x111C3Cu, 0x111C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111C44u;
label_111c44:
    // 0x111c44: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x111c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x111c48: 0xc043a58  jal         func_10E960
    ctx->pc = 0x111C48u;
    SET_GPR_U32(ctx, 31, 0x111C50u);
    ctx->pc = 0x10E960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E960u, 0x111C48u, 0x111C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111C50u;
label_111c50:
    // 0x111c50: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x111c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x111c54: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x111c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x111c58: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x111c58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111c5c: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x111C5Cu;
    SET_GPR_U32(ctx, 31, 0x111C64u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x111C5Cu, 0x111C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111C64u;
label_111c64:
    // 0x111c64: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x111C64u;
    {
        const bool branch_taken_0x111c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x111c64) {
            ctx->pc = 0x111CC4u;
            goto label_111cc4;
        }
    }
    ctx->pc = 0x111C6Cu;
label_111c6c:
    // 0x111c6c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x111c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x111c70: 0x27b00038  addiu       $s0, $sp, 0x38
    ctx->pc = 0x111c70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x111c74: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x111c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x111c78: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x111c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x111c7c: 0xc044764  jal         func_111D90
    ctx->pc = 0x111C7Cu;
    SET_GPR_U32(ctx, 31, 0x111C84u);
    ctx->pc = 0x111D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111D90u, 0x111C7Cu, 0x111C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111C84u;
label_111c84:
    // 0x111c84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x111c84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111c88: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x111c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x111c8c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x111c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x111c90: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x111c90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111c94: 0xc044754  jal         func_111D50
    ctx->pc = 0x111C94u;
    SET_GPR_U32(ctx, 31, 0x111C9Cu);
    ctx->pc = 0x111D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111D50u, 0x111C94u, 0x111C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111C9Cu;
label_111c9c:
    // 0x111c9c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x111c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x111ca0: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x111ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x111ca4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x111ca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ca8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x111ca8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111cac: 0xc04473c  jal         func_111CF0
    ctx->pc = 0x111CACu;
    SET_GPR_U32(ctx, 31, 0x111CB4u);
    ctx->pc = 0x111CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111CF0u, 0x111CACu, 0x111CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111CB4u;
label_111cb4:
    // 0x111cb4: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x111cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x111cb8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x111cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x111cbc: 0xc043a60  jal         func_10E980
    ctx->pc = 0x111CBCu;
    SET_GPR_U32(ctx, 31, 0x111CC4u);
    ctx->pc = 0x10E980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E980u, 0x111CBCu, 0x111CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111CC4u;
label_111cc4:
    // 0x111cc4: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x111cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x111cc8: 0xc043a58  jal         func_10E960
    ctx->pc = 0x111CC8u;
    SET_GPR_U32(ctx, 31, 0x111CD0u);
    ctx->pc = 0x10E960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E960u, 0x111CC8u, 0x111CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111CD0u;
label_111cd0:
    // 0x111cd0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x111cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x111cd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x111cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111cd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x111cd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111cdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x111cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111ce0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x111ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x111ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x111CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111CECu;
    // 0x111cec: 0x0  nop
    ctx->pc = 0x111cecu;
    // NOP
    ctx->pc = 0x111cf0u;
}
