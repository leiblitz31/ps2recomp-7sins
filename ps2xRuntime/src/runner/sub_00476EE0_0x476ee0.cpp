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

// Function: sub_00476EE0
// Address: 0x476ee0 - 0x476fa0
void sub_00476EE0_0x476ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00476EE0_0x476ee0");
#endif

    switch (ctx->pc) {
        case 0x476efcu: goto label_476efc;
        case 0x476f0cu: goto label_476f0c;
        case 0x476f24u: goto label_476f24;
        case 0x476f34u: goto label_476f34;
        case 0x476f48u: goto label_476f48;
        case 0x476f58u: goto label_476f58;
        case 0x476f70u: goto label_476f70;
        case 0x476f80u: goto label_476f80;
        default: break;
    }

    ctx->pc = 0x476ee0u;

    // 0x476ee0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x476ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x476ee4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x476ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x476ee8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x476ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x476eec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x476eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x476ef0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x476ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x476ef4: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x476EF4u;
    SET_GPR_U32(ctx, 31, 0x476EFCu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x476EF4u, 0x476EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476EFCu;
label_476efc:
    // 0x476efc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x476efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x476f00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x476f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x476f04: 0xc0400e0  jal         func_100380
    ctx->pc = 0x476F04u;
    SET_GPR_U32(ctx, 31, 0x476F0Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x476F04u, 0x476F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476F0Cu;
label_476f0c:
    // 0x476f0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x476f0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x476f10: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x476F10u;
    {
        const bool branch_taken_0x476f10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x476f10) {
            ctx->pc = 0x476F38u;
            goto label_476f38;
        }
    }
    ctx->pc = 0x476F18u;
    // 0x476f18: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x476f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x476f1c: 0xc11dc54  jal         func_477150
    ctx->pc = 0x476F1Cu;
    SET_GPR_U32(ctx, 31, 0x476F24u);
    ctx->pc = 0x477150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477150u, 0x476F1Cu, 0x476F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476F24u;
label_476f24:
    // 0x476f24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x476f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x476f28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x476f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x476f2c: 0xc11dbe8  jal         func_476FA0
    ctx->pc = 0x476F2Cu;
    SET_GPR_U32(ctx, 31, 0x476F34u);
    ctx->pc = 0x476FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x476FA0u, 0x476F2Cu, 0x476F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476F34u;
label_476f34:
    // 0x476f34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x476f34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_476f38:
    // 0x476f38: 0xaf91c068  sw          $s1, -0x3F98($gp)
    ctx->pc = 0x476f38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951016), GPR_U32(ctx, 17));
    // 0x476f3c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x476f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x476f40: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x476F40u;
    SET_GPR_U32(ctx, 31, 0x476F48u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x476F40u, 0x476F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476F48u;
label_476f48:
    // 0x476f48: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x476f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x476f4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x476f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x476f50: 0xc0400e0  jal         func_100380
    ctx->pc = 0x476F50u;
    SET_GPR_U32(ctx, 31, 0x476F58u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x476F50u, 0x476F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476F58u;
label_476f58:
    // 0x476f58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x476f58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x476f5c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x476F5Cu;
    {
        const bool branch_taken_0x476f5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x476f5c) {
            ctx->pc = 0x476F84u;
            goto label_476f84;
        }
    }
    ctx->pc = 0x476F64u;
    // 0x476f64: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x476f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x476f68: 0xc11dc54  jal         func_477150
    ctx->pc = 0x476F68u;
    SET_GPR_U32(ctx, 31, 0x476F70u);
    ctx->pc = 0x477150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477150u, 0x476F68u, 0x476F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476F70u;
label_476f70:
    // 0x476f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x476f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x476f74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x476f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x476f78: 0xc11dbe8  jal         func_476FA0
    ctx->pc = 0x476F78u;
    SET_GPR_U32(ctx, 31, 0x476F80u);
    ctx->pc = 0x476FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x476FA0u, 0x476F78u, 0x476F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476F80u;
label_476f80:
    // 0x476f80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x476f80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_476f84:
    // 0x476f84: 0xaf90c06c  sw          $s0, -0x3F94($gp)
    ctx->pc = 0x476f84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951020), GPR_U32(ctx, 16));
    // 0x476f88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x476f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x476f8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x476f8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x476f90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x476f90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x476f94: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x476f94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x476f98: 0x3e00008  jr          $ra
    ctx->pc = 0x476F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x476F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x476FA0u;
}
