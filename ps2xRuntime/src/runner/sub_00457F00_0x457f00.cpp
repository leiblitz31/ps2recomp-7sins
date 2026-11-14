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

// Function: sub_00457F00
// Address: 0x457f00 - 0x458010
void sub_00457F00_0x457f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00457F00_0x457f00");
#endif

    switch (ctx->pc) {
        case 0x457f24u: goto label_457f24;
        case 0x457f30u: goto label_457f30;
        case 0x457f3cu: goto label_457f3c;
        case 0x457f4cu: goto label_457f4c;
        case 0x457f5cu: goto label_457f5c;
        case 0x457f6cu: goto label_457f6c;
        case 0x457f8cu: goto label_457f8c;
        case 0x457f98u: goto label_457f98;
        case 0x457fa8u: goto label_457fa8;
        case 0x457fb8u: goto label_457fb8;
        case 0x457fc8u: goto label_457fc8;
        case 0x457fe0u: goto label_457fe0;
        case 0x457fecu: goto label_457fec;
        default: break;
    }

    ctx->pc = 0x457f00u;

    // 0x457f00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x457f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x457f04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x457f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x457f08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x457f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x457f0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x457f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x457f10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x457f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x457f14: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x457f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x457f18: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x457f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
    // 0x457f1c: 0xc115ee4  jal         func_457B90
    ctx->pc = 0x457F1Cu;
    SET_GPR_U32(ctx, 31, 0x457F24u);
    ctx->pc = 0x457B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457B90u, 0x457F1Cu, 0x457F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457F24u;
label_457f24:
    // 0x457f24: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x457f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x457f28: 0xc115fb8  jal         func_457EE0
    ctx->pc = 0x457F28u;
    SET_GPR_U32(ctx, 31, 0x457F30u);
    ctx->pc = 0x457EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457EE0u, 0x457F28u, 0x457F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457F30u;
label_457f30:
    // 0x457f30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x457f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457f34: 0xc116114  jal         func_458450
    ctx->pc = 0x457F34u;
    SET_GPR_U32(ctx, 31, 0x457F3Cu);
    ctx->pc = 0x458450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x458450u, 0x457F34u, 0x457F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457F3Cu;
label_457f3c:
    // 0x457f3c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x457f3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457f40: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x457f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x457f44: 0xc115fb0  jal         func_457EC0
    ctx->pc = 0x457F44u;
    SET_GPR_U32(ctx, 31, 0x457F4Cu);
    ctx->pc = 0x457EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457EC0u, 0x457F44u, 0x457F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457F4Cu;
label_457f4c:
    // 0x457f4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x457f4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457f50: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x457f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x457f54: 0xc115fa8  jal         func_457EA0
    ctx->pc = 0x457F54u;
    SET_GPR_U32(ctx, 31, 0x457F5Cu);
    ctx->pc = 0x457EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457EA0u, 0x457F54u, 0x457F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457F5Cu;
label_457f5c:
    // 0x457f5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x457f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457f60: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x457f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x457f64: 0xc115fa0  jal         func_457E80
    ctx->pc = 0x457F64u;
    SET_GPR_U32(ctx, 31, 0x457F6Cu);
    ctx->pc = 0x457E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457E80u, 0x457F64u, 0x457F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457F6Cu;
label_457f6c:
    // 0x457f6c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x457f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x457f70: 0x2484e5b0  addiu       $a0, $a0, -0x1A50
    ctx->pc = 0x457f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960560));
    // 0x457f74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x457f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457f78: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x457f78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457f7c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x457f7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457f80: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x457f80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457f84: 0xc115f78  jal         func_457DE0
    ctx->pc = 0x457F84u;
    SET_GPR_U32(ctx, 31, 0x457F8Cu);
    ctx->pc = 0x457DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457DE0u, 0x457F84u, 0x457F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457F8Cu;
label_457f8c:
    // 0x457f8c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x457f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x457f90: 0xc115fb8  jal         func_457EE0
    ctx->pc = 0x457F90u;
    SET_GPR_U32(ctx, 31, 0x457F98u);
    ctx->pc = 0x457EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457EE0u, 0x457F90u, 0x457F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457F98u;
label_457f98:
    // 0x457f98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x457f98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457f9c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x457f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x457fa0: 0xc115fb0  jal         func_457EC0
    ctx->pc = 0x457FA0u;
    SET_GPR_U32(ctx, 31, 0x457FA8u);
    ctx->pc = 0x457EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457EC0u, 0x457FA0u, 0x457FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457FA8u;
label_457fa8:
    // 0x457fa8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x457fa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457fac: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x457facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x457fb0: 0xc115fa8  jal         func_457EA0
    ctx->pc = 0x457FB0u;
    SET_GPR_U32(ctx, 31, 0x457FB8u);
    ctx->pc = 0x457EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457EA0u, 0x457FB0u, 0x457FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457FB8u;
label_457fb8:
    // 0x457fb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x457fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457fbc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x457fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x457fc0: 0xc115fa0  jal         func_457E80
    ctx->pc = 0x457FC0u;
    SET_GPR_U32(ctx, 31, 0x457FC8u);
    ctx->pc = 0x457E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457E80u, 0x457FC0u, 0x457FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457FC8u;
label_457fc8:
    // 0x457fc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x457fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457fcc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x457fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457fd0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x457fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457fd4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x457fd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457fd8: 0xc115f40  jal         func_457D00
    ctx->pc = 0x457FD8u;
    SET_GPR_U32(ctx, 31, 0x457FE0u);
    ctx->pc = 0x457D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457D00u, 0x457FD8u, 0x457FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457FE0u;
label_457fe0:
    // 0x457fe0: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x457fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
    // 0x457fe4: 0xc115dbc  jal         func_4576F0
    ctx->pc = 0x457FE4u;
    SET_GPR_U32(ctx, 31, 0x457FECu);
    ctx->pc = 0x4576F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4576F0u, 0x457FE4u, 0x457FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457FECu;
label_457fec:
    // 0x457fec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x457fecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457ff0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x457ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x457ff4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x457ff4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x457ff8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x457ff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x457ffc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x457ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x458000: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x458000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x458004: 0x3e00008  jr          $ra
    ctx->pc = 0x458004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x458004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45800Cu;
    // 0x45800c: 0x0  nop
    ctx->pc = 0x45800cu;
    // NOP
    ctx->pc = 0x458010u;
}
