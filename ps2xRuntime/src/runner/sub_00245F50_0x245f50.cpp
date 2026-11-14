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

// Function: sub_00245F50
// Address: 0x245f50 - 0x246010
void sub_00245F50_0x245f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245F50_0x245f50");
#endif

    switch (ctx->pc) {
        case 0x245f84u: goto label_245f84;
        case 0x245f98u: goto label_245f98;
        case 0x245facu: goto label_245fac;
        case 0x245fc0u: goto label_245fc0;
        case 0x245fdcu: goto label_245fdc;
        default: break;
    }

    ctx->pc = 0x245f50u;

    // 0x245f50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x245f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x245f54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x245f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x245f58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x245f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x245f5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x245f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x245f60: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x245f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x245f64: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x245f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x245f68: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x245f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x245f6c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x245F6Cu;
    {
        const bool branch_taken_0x245f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245f6c) {
            ctx->pc = 0x245FE8u;
            goto label_245fe8;
        }
    }
    ctx->pc = 0x245F74u;
    // 0x245f74: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x245f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x245f78: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x245f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x245f7c: 0xc0915f4  jal         func_2457D0
    ctx->pc = 0x245F7Cu;
    SET_GPR_U32(ctx, 31, 0x245F84u);
    ctx->pc = 0x2457D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2457D0u, 0x245F7Cu, 0x245F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245F84u;
label_245f84:
    // 0x245f84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x245f84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245f88: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x245f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x245f8c: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x245f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x245f90: 0xc0915ec  jal         func_2457B0
    ctx->pc = 0x245F90u;
    SET_GPR_U32(ctx, 31, 0x245F98u);
    ctx->pc = 0x2457B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2457B0u, 0x245F90u, 0x245F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245F98u;
label_245f98:
    // 0x245f98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245f9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x245f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245fa0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x245fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x245fa4: 0xc09187c  jal         func_2461F0
    ctx->pc = 0x245FA4u;
    SET_GPR_U32(ctx, 31, 0x245FACu);
    ctx->pc = 0x2461F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2461F0u, 0x245FA4u, 0x245FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245FACu;
label_245fac:
    // 0x245fac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x245facu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245fb0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x245fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x245fb4: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x245fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x245fb8: 0xc0915ec  jal         func_2457B0
    ctx->pc = 0x245FB8u;
    SET_GPR_U32(ctx, 31, 0x245FC0u);
    ctx->pc = 0x2457B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2457B0u, 0x245FB8u, 0x245FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245FC0u;
label_245fc0:
    // 0x245fc0: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x245FC0u;
    {
        const bool branch_taken_0x245fc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x245fc0) {
            ctx->pc = 0x245FE8u;
            goto label_245fe8;
        }
    }
    ctx->pc = 0x245FC8u;
    // 0x245fc8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x245fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x245fcc: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x245fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x245fd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x245fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245fd4: 0xc091804  jal         func_246010
    ctx->pc = 0x245FD4u;
    SET_GPR_U32(ctx, 31, 0x245FDCu);
    ctx->pc = 0x246010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246010u, 0x245FD4u, 0x245FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245FDCu;
label_245fdc:
    // 0x245fdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x245fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245fe0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x245FE0u;
    {
        const bool branch_taken_0x245fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x245fe0) {
            ctx->pc = 0x245FECu;
            goto label_245fec;
        }
    }
    ctx->pc = 0x245FE8u;
label_245fe8:
    // 0x245fe8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x245fe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245fec:
    // 0x245fec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x245fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245ff0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x245ff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245ff4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x245ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245ff8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x245ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x245ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x245FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246004u;
    // 0x246004: 0x0  nop
    ctx->pc = 0x246004u;
    // NOP
    // 0x246008: 0x0  nop
    ctx->pc = 0x246008u;
    // NOP
    // 0x24600c: 0x0  nop
    ctx->pc = 0x24600cu;
    // NOP
    ctx->pc = 0x246010u;
}
