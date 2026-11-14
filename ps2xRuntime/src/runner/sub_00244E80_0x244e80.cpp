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

// Function: sub_00244E80
// Address: 0x244e80 - 0x244f20
void sub_00244E80_0x244e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244E80_0x244e80");
#endif

    switch (ctx->pc) {
        case 0x244e80u: goto label_244e80;
        case 0x244e84u: goto label_244e84;
        case 0x244e88u: goto label_244e88;
        case 0x244e8cu: goto label_244e8c;
        case 0x244e90u: goto label_244e90;
        case 0x244e94u: goto label_244e94;
        case 0x244e98u: goto label_244e98;
        case 0x244e9cu: goto label_244e9c;
        case 0x244ea0u: goto label_244ea0;
        case 0x244ea4u: goto label_244ea4;
        case 0x244ea8u: goto label_244ea8;
        case 0x244eacu: goto label_244eac;
        case 0x244eb0u: goto label_244eb0;
        case 0x244eb4u: goto label_244eb4;
        case 0x244eb8u: goto label_244eb8;
        case 0x244ebcu: goto label_244ebc;
        case 0x244ec0u: goto label_244ec0;
        case 0x244ec4u: goto label_244ec4;
        case 0x244ec8u: goto label_244ec8;
        case 0x244eccu: goto label_244ecc;
        case 0x244ed0u: goto label_244ed0;
        case 0x244ed4u: goto label_244ed4;
        case 0x244ed8u: goto label_244ed8;
        case 0x244edcu: goto label_244edc;
        case 0x244ee0u: goto label_244ee0;
        case 0x244ee4u: goto label_244ee4;
        case 0x244ee8u: goto label_244ee8;
        case 0x244eecu: goto label_244eec;
        case 0x244ef0u: goto label_244ef0;
        case 0x244ef4u: goto label_244ef4;
        case 0x244ef8u: goto label_244ef8;
        case 0x244efcu: goto label_244efc;
        case 0x244f00u: goto label_244f00;
        case 0x244f04u: goto label_244f04;
        case 0x244f08u: goto label_244f08;
        case 0x244f0cu: goto label_244f0c;
        case 0x244f10u: goto label_244f10;
        case 0x244f14u: goto label_244f14;
        case 0x244f18u: goto label_244f18;
        case 0x244f1cu: goto label_244f1c;
        default: break;
    }

    ctx->pc = 0x244e80u;

label_244e80:
    // 0x244e80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x244e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_244e84:
    // 0x244e84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x244e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_244e88:
    // 0x244e88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x244e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_244e8c:
    // 0x244e8c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x244e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_244e90:
    // 0x244e90: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x244e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_244e94:
    // 0x244e94: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x244e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_244e98:
    // 0x244e98: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x244e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_244e9c:
    // 0x244e9c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x244e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_244ea0:
    // 0x244ea0: 0xc0432bc  jal         func_10CAF0
label_244ea4:
    if (ctx->pc == 0x244EA4u) {
        ctx->pc = 0x244EA8u;
        goto label_244ea8;
    }
    ctx->pc = 0x244EA0u;
    SET_GPR_U32(ctx, 31, 0x244EA8u);
    ctx->pc = 0x10CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAF0u, 0x244EA0u, 0x244EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244EA8u;
label_244ea8:
    // 0x244ea8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x244ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244eac:
    // 0x244eac: 0x1000000f  b           . + 4 + (0xF << 2)
label_244eb0:
    if (ctx->pc == 0x244EB0u) {
        ctx->pc = 0x244EB4u;
        goto label_244eb4;
    }
    ctx->pc = 0x244EACu;
    {
        const bool branch_taken_0x244eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244eac) {
            ctx->pc = 0x244EECu;
            goto label_244eec;
        }
    }
    ctx->pc = 0x244EB4u;
label_244eb4:
    // 0x244eb4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x244eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_244eb8:
    // 0x244eb8: 0xc0913c8  jal         func_244F20
label_244ebc:
    if (ctx->pc == 0x244EBCu) {
        ctx->pc = 0x244EC0u;
        goto label_244ec0;
    }
    ctx->pc = 0x244EB8u;
    SET_GPR_U32(ctx, 31, 0x244EC0u);
    ctx->pc = 0x244F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244F20u, 0x244EB8u, 0x244EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244EC0u;
label_244ec0:
    // 0x244ec0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x244ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_244ec4:
    // 0x244ec4: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_244ec8:
    if (ctx->pc == 0x244EC8u) {
        ctx->pc = 0x244ECCu;
        goto label_244ecc;
    }
    ctx->pc = 0x244EC4u;
    {
        const bool branch_taken_0x244ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x244ec4) {
            ctx->pc = 0x244EE8u;
            goto label_244ee8;
        }
    }
    ctx->pc = 0x244ECCu;
label_244ecc:
    // 0x244ecc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x244eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_244ed0:
    // 0x244ed0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x244ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_244ed4:
    // 0x244ed4: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x244ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_244ed8:
    // 0x244ed8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x244ed8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_244edc:
    // 0x244edc: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x244edcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_244ee0:
    // 0x244ee0: 0x320f809  jalr        $t9
label_244ee4:
    if (ctx->pc == 0x244EE4u) {
        ctx->pc = 0x244EE8u;
        goto label_244ee8;
    }
    ctx->pc = 0x244EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x244EE8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244EE0u, 0x244EE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244EE8u;
label_244ee8:
    // 0x244ee8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x244ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_244eec:
    // 0x244eec: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x244eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_244ef0:
    // 0x244ef0: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x244ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_244ef4:
    // 0x244ef4: 0xc041144  jal         func_104510
label_244ef8:
    if (ctx->pc == 0x244EF8u) {
        ctx->pc = 0x244EFCu;
        goto label_244efc;
    }
    ctx->pc = 0x244EF4u;
    SET_GPR_U32(ctx, 31, 0x244EFCu);
    ctx->pc = 0x104510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104510u, 0x244EF4u, 0x244EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244EFCu;
label_244efc:
    // 0x244efc: 0x1602ffed  bne         $s0, $v0, . + 4 + (-0x13 << 2)
label_244f00:
    if (ctx->pc == 0x244F00u) {
        ctx->pc = 0x244F04u;
        goto label_244f04;
    }
    ctx->pc = 0x244EFCu;
    {
        const bool branch_taken_0x244efc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x244efc) {
            ctx->pc = 0x244EB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244eb4;
        }
    }
    ctx->pc = 0x244F04u;
label_244f04:
    // 0x244f04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x244f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_244f08:
    // 0x244f08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x244f08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_244f0c:
    // 0x244f0c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x244f0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_244f10:
    // 0x244f10: 0x3e00008  jr          $ra
label_244f14:
    if (ctx->pc == 0x244F14u) {
        ctx->pc = 0x244F18u;
        goto label_244f18;
    }
    ctx->pc = 0x244F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244F18u;
label_244f18:
    // 0x244f18: 0x0  nop
    ctx->pc = 0x244f18u;
    // NOP
label_244f1c:
    // 0x244f1c: 0x0  nop
    ctx->pc = 0x244f1cu;
    // NOP
    ctx->pc = 0x244f20u;
}
