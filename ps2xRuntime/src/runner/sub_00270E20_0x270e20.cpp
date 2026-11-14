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

// Function: sub_00270E20
// Address: 0x270e20 - 0x270ec0
void sub_00270E20_0x270e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270E20_0x270e20");
#endif

    switch (ctx->pc) {
        case 0x270e20u: goto label_270e20;
        case 0x270e24u: goto label_270e24;
        case 0x270e28u: goto label_270e28;
        case 0x270e2cu: goto label_270e2c;
        case 0x270e30u: goto label_270e30;
        case 0x270e34u: goto label_270e34;
        case 0x270e38u: goto label_270e38;
        case 0x270e3cu: goto label_270e3c;
        case 0x270e40u: goto label_270e40;
        case 0x270e44u: goto label_270e44;
        case 0x270e48u: goto label_270e48;
        case 0x270e4cu: goto label_270e4c;
        case 0x270e50u: goto label_270e50;
        case 0x270e54u: goto label_270e54;
        case 0x270e58u: goto label_270e58;
        case 0x270e5cu: goto label_270e5c;
        case 0x270e60u: goto label_270e60;
        case 0x270e64u: goto label_270e64;
        case 0x270e68u: goto label_270e68;
        case 0x270e6cu: goto label_270e6c;
        case 0x270e70u: goto label_270e70;
        case 0x270e74u: goto label_270e74;
        case 0x270e78u: goto label_270e78;
        case 0x270e7cu: goto label_270e7c;
        case 0x270e80u: goto label_270e80;
        case 0x270e84u: goto label_270e84;
        case 0x270e88u: goto label_270e88;
        case 0x270e8cu: goto label_270e8c;
        case 0x270e90u: goto label_270e90;
        case 0x270e94u: goto label_270e94;
        case 0x270e98u: goto label_270e98;
        case 0x270e9cu: goto label_270e9c;
        case 0x270ea0u: goto label_270ea0;
        case 0x270ea4u: goto label_270ea4;
        case 0x270ea8u: goto label_270ea8;
        case 0x270eacu: goto label_270eac;
        case 0x270eb0u: goto label_270eb0;
        case 0x270eb4u: goto label_270eb4;
        case 0x270eb8u: goto label_270eb8;
        case 0x270ebcu: goto label_270ebc;
        default: break;
    }

    ctx->pc = 0x270e20u;

label_270e20:
    // 0x270e20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x270e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_270e24:
    // 0x270e24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x270e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_270e28:
    // 0x270e28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x270e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_270e2c:
    // 0x270e2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x270e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_270e30:
    // 0x270e30: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x270e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_270e34:
    // 0x270e34: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x270e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_270e38:
    // 0x270e38: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x270e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
label_270e3c:
    // 0x270e3c: 0xc0513f8  jal         func_144FE0
label_270e40:
    if (ctx->pc == 0x270E40u) {
        ctx->pc = 0x270E44u;
        goto label_270e44;
    }
    ctx->pc = 0x270E3Cu;
    SET_GPR_U32(ctx, 31, 0x270E44u);
    ctx->pc = 0x144FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144FE0u, 0x270E3Cu, 0x270E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270E44u;
label_270e44:
    // 0x270e44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x270e44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270e48:
    // 0x270e48: 0x1000000e  b           . + 4 + (0xE << 2)
label_270e4c:
    if (ctx->pc == 0x270E4Cu) {
        ctx->pc = 0x270E50u;
        goto label_270e50;
    }
    ctx->pc = 0x270E48u;
    {
        const bool branch_taken_0x270e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270e48) {
            ctx->pc = 0x270E84u;
            goto label_270e84;
        }
    }
    ctx->pc = 0x270E50u;
label_270e50:
    // 0x270e50: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x270e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_270e54:
    // 0x270e54: 0x8c51003c  lw          $s1, 0x3C($v0)
    ctx->pc = 0x270e54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_270e58:
    // 0x270e58: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x270e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_270e5c:
    // 0x270e5c: 0xc09d22c  jal         func_2748B0
label_270e60:
    if (ctx->pc == 0x270E60u) {
        ctx->pc = 0x270E64u;
        goto label_270e64;
    }
    ctx->pc = 0x270E5Cu;
    SET_GPR_U32(ctx, 31, 0x270E64u);
    ctx->pc = 0x2748B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2748B0u, 0x270E5Cu, 0x270E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270E64u;
label_270e64:
    // 0x270e64: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
label_270e68:
    if (ctx->pc == 0x270E68u) {
        ctx->pc = 0x270E6Cu;
        goto label_270e6c;
    }
    ctx->pc = 0x270E64u;
    {
        const bool branch_taken_0x270e64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x270e64) {
            ctx->pc = 0x270E80u;
            goto label_270e80;
        }
    }
    ctx->pc = 0x270E6Cu;
label_270e6c:
    // 0x270e6c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x270e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_270e70:
    // 0x270e70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x270e70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_270e74:
    // 0x270e74: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x270e74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_270e78:
    // 0x270e78: 0x320f809  jalr        $t9
label_270e7c:
    if (ctx->pc == 0x270E7Cu) {
        ctx->pc = 0x270E80u;
        goto label_270e80;
    }
    ctx->pc = 0x270E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x270E80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270E78u, 0x270E80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x270E80u;
label_270e80:
    // 0x270e80: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x270e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_270e84:
    // 0x270e84: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x270e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_270e88:
    // 0x270e88: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x270e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
label_270e8c:
    // 0x270e8c: 0xc09c064  jal         func_270190
label_270e90:
    if (ctx->pc == 0x270E90u) {
        ctx->pc = 0x270E94u;
        goto label_270e94;
    }
    ctx->pc = 0x270E8Cu;
    SET_GPR_U32(ctx, 31, 0x270E94u);
    ctx->pc = 0x270190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270190u, 0x270E8Cu, 0x270E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270E94u;
label_270e94:
    // 0x270e94: 0x1602ffee  bne         $s0, $v0, . + 4 + (-0x12 << 2)
label_270e98:
    if (ctx->pc == 0x270E98u) {
        ctx->pc = 0x270E9Cu;
        goto label_270e9c;
    }
    ctx->pc = 0x270E94u;
    {
        const bool branch_taken_0x270e94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x270e94) {
            ctx->pc = 0x270E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_270e50;
        }
    }
    ctx->pc = 0x270E9Cu;
label_270e9c:
    // 0x270e9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x270e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_270ea0:
    // 0x270ea0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x270ea0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_270ea4:
    // 0x270ea4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x270ea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_270ea8:
    // 0x270ea8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x270ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_270eac:
    // 0x270eac: 0x3e00008  jr          $ra
label_270eb0:
    if (ctx->pc == 0x270EB0u) {
        ctx->pc = 0x270EB4u;
        goto label_270eb4;
    }
    ctx->pc = 0x270EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270EB4u;
label_270eb4:
    // 0x270eb4: 0x0  nop
    ctx->pc = 0x270eb4u;
    // NOP
label_270eb8:
    // 0x270eb8: 0x0  nop
    ctx->pc = 0x270eb8u;
    // NOP
label_270ebc:
    // 0x270ebc: 0x0  nop
    ctx->pc = 0x270ebcu;
    // NOP
    ctx->pc = 0x270ec0u;
}
