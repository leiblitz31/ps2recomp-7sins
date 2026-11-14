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

// Function: sub_00451F20
// Address: 0x451f20 - 0x452020
void sub_00451F20_0x451f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00451F20_0x451f20");
#endif

    switch (ctx->pc) {
        case 0x451f44u: goto label_451f44;
        case 0x451f60u: goto label_451f60;
        case 0x451f6cu: goto label_451f6c;
        case 0x451f88u: goto label_451f88;
        case 0x451f98u: goto label_451f98;
        case 0x451facu: goto label_451fac;
        case 0x451fb8u: goto label_451fb8;
        case 0x451fc8u: goto label_451fc8;
        case 0x451fe0u: goto label_451fe0;
        case 0x451ff4u: goto label_451ff4;
        default: break;
    }

    ctx->pc = 0x451f20u;

    // 0x451f20: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x451f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x451f24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x451f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x451f28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x451f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x451f2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x451f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x451f30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x451f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x451f34: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x451f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x451f38: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x451f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x451f3c: 0xc113f40  jal         func_44FD00
    ctx->pc = 0x451F3Cu;
    SET_GPR_U32(ctx, 31, 0x451F44u);
    ctx->pc = 0x44FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44FD00u, 0x451F3Cu, 0x451F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451F44u;
label_451f44:
    // 0x451f44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x451f44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451f48: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x451f48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451f4c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x451f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x451f50: 0x2484ddb0  addiu       $a0, $a0, -0x2250
    ctx->pc = 0x451f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958512));
    // 0x451f54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x451f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451f58: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x451F58u;
    SET_GPR_U32(ctx, 31, 0x451F60u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x451F58u, 0x451F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451F60u;
label_451f60:
    // 0x451f60: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x451f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x451f64: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x451F64u;
    SET_GPR_U32(ctx, 31, 0x451F6Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x451F64u, 0x451F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451F6Cu;
label_451f6c:
    // 0x451f6c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x451f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x451f70: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x451f70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x451f74: 0x24a5de00  addiu       $a1, $a1, -0x2200
    ctx->pc = 0x451f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958592));
    // 0x451f78: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x451f78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451f7c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x451f7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451f80: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x451F80u;
    SET_GPR_U32(ctx, 31, 0x451F88u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x451F80u, 0x451F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451F88u;
label_451f88:
    // 0x451f88: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x451f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x451f8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x451f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451f90: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x451F90u;
    SET_GPR_U32(ctx, 31, 0x451F98u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x451F90u, 0x451F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451F98u;
label_451f98:
    // 0x451f98: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x451f98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x451f9c: 0x2484ddb0  addiu       $a0, $a0, -0x2250
    ctx->pc = 0x451f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958512));
    // 0x451fa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x451fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451fa4: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x451FA4u;
    SET_GPR_U32(ctx, 31, 0x451FACu);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x451FA4u, 0x451FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451FACu;
label_451fac:
    // 0x451fac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x451facu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451fb0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x451FB0u;
    {
        const bool branch_taken_0x451fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x451fb0) {
            ctx->pc = 0x451FF8u;
            goto label_451ff8;
        }
    }
    ctx->pc = 0x451FB8u;
label_451fb8:
    // 0x451fb8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x451fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x451fbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x451fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451fc0: 0xc113f54  jal         func_44FD50
    ctx->pc = 0x451FC0u;
    SET_GPR_U32(ctx, 31, 0x451FC8u);
    ctx->pc = 0x44FD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44FD50u, 0x451FC0u, 0x451FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451FC8u;
label_451fc8:
    // 0x451fc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x451fc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451fcc: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x451FCCu;
    {
        const bool branch_taken_0x451fcc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x451fcc) {
            ctx->pc = 0x451FF4u;
            goto label_451ff4;
        }
    }
    ctx->pc = 0x451FD4u;
    // 0x451fd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x451fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451fd8: 0xc115aac  jal         func_456AB0
    ctx->pc = 0x451FD8u;
    SET_GPR_U32(ctx, 31, 0x451FE0u);
    ctx->pc = 0x456AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456AB0u, 0x451FD8u, 0x451FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451FE0u;
label_451fe0:
    // 0x451fe0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x451fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x451fe4: 0x2484de30  addiu       $a0, $a0, -0x21D0
    ctx->pc = 0x451fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958640));
    // 0x451fe8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x451fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451fec: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x451FECu;
    SET_GPR_U32(ctx, 31, 0x451FF4u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x451FECu, 0x451FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451FF4u;
label_451ff4:
    // 0x451ff4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x451ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_451ff8:
    // 0x451ff8: 0x212182b  sltu        $v1, $s0, $s2
    ctx->pc = 0x451ff8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x451ffc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x451FFCu;
    {
        const bool branch_taken_0x451ffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x451ffc) {
            ctx->pc = 0x451FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_451fb8;
        }
    }
    ctx->pc = 0x452004u;
    // 0x452004: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x452004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x452008: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x452008u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45200c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45200cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x452010: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x452010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x452014: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x452014u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x452018: 0x3e00008  jr          $ra
    ctx->pc = 0x452018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x452018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x452020u;
}
