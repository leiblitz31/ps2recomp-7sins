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

// Function: sub_00281E90
// Address: 0x281e90 - 0x281f40
void sub_00281E90_0x281e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281E90_0x281e90");
#endif

    switch (ctx->pc) {
        case 0x281e90u: goto label_281e90;
        case 0x281e94u: goto label_281e94;
        case 0x281e98u: goto label_281e98;
        case 0x281e9cu: goto label_281e9c;
        case 0x281ea0u: goto label_281ea0;
        case 0x281ea4u: goto label_281ea4;
        case 0x281ea8u: goto label_281ea8;
        case 0x281eacu: goto label_281eac;
        case 0x281eb0u: goto label_281eb0;
        case 0x281eb4u: goto label_281eb4;
        case 0x281eb8u: goto label_281eb8;
        case 0x281ebcu: goto label_281ebc;
        case 0x281ec0u: goto label_281ec0;
        case 0x281ec4u: goto label_281ec4;
        case 0x281ec8u: goto label_281ec8;
        case 0x281eccu: goto label_281ecc;
        case 0x281ed0u: goto label_281ed0;
        case 0x281ed4u: goto label_281ed4;
        case 0x281ed8u: goto label_281ed8;
        case 0x281edcu: goto label_281edc;
        case 0x281ee0u: goto label_281ee0;
        case 0x281ee4u: goto label_281ee4;
        case 0x281ee8u: goto label_281ee8;
        case 0x281eecu: goto label_281eec;
        case 0x281ef0u: goto label_281ef0;
        case 0x281ef4u: goto label_281ef4;
        case 0x281ef8u: goto label_281ef8;
        case 0x281efcu: goto label_281efc;
        case 0x281f00u: goto label_281f00;
        case 0x281f04u: goto label_281f04;
        case 0x281f08u: goto label_281f08;
        case 0x281f0cu: goto label_281f0c;
        case 0x281f10u: goto label_281f10;
        case 0x281f14u: goto label_281f14;
        case 0x281f18u: goto label_281f18;
        case 0x281f1cu: goto label_281f1c;
        case 0x281f20u: goto label_281f20;
        case 0x281f24u: goto label_281f24;
        case 0x281f28u: goto label_281f28;
        case 0x281f2cu: goto label_281f2c;
        case 0x281f30u: goto label_281f30;
        case 0x281f34u: goto label_281f34;
        case 0x281f38u: goto label_281f38;
        case 0x281f3cu: goto label_281f3c;
        default: break;
    }

    ctx->pc = 0x281e90u;

label_281e90:
    // 0x281e90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x281e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_281e94:
    // 0x281e94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x281e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_281e98:
    // 0x281e98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x281e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_281e9c:
    // 0x281e9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x281e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_281ea0:
    // 0x281ea0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x281ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_281ea4:
    // 0x281ea4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x281ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_281ea8:
    // 0x281ea8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_281eac:
    if (ctx->pc == 0x281EACu) {
        ctx->pc = 0x281EB0u;
        goto label_281eb0;
    }
    ctx->pc = 0x281EA8u;
    {
        const bool branch_taken_0x281ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x281ea8) {
            ctx->pc = 0x281EB8u;
            goto label_281eb8;
        }
    }
    ctx->pc = 0x281EB0u;
label_281eb0:
    // 0x281eb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x281eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_281eb4:
    // 0x281eb4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x281eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_281eb8:
    // 0x281eb8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x281eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_281ebc:
    // 0x281ebc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x281ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_281ec0:
    // 0x281ec0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x281ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_281ec4:
    // 0x281ec4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x281ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_281ec8:
    // 0x281ec8: 0xc119b68  jal         func_466DA0
label_281ecc:
    if (ctx->pc == 0x281ECCu) {
        ctx->pc = 0x281ED0u;
        goto label_281ed0;
    }
    ctx->pc = 0x281EC8u;
    SET_GPR_U32(ctx, 31, 0x281ED0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x281EC8u, 0x281ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281ED0u;
label_281ed0:
    // 0x281ed0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x281ed0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_281ed4:
    // 0x281ed4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_281ed8:
    if (ctx->pc == 0x281ED8u) {
        ctx->pc = 0x281EDCu;
        goto label_281edc;
    }
    ctx->pc = 0x281ED4u;
    {
        const bool branch_taken_0x281ed4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x281ed4) {
            ctx->pc = 0x281EE8u;
            goto label_281ee8;
        }
    }
    ctx->pc = 0x281EDCu;
label_281edc:
    // 0x281edc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x281edcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_281ee0:
    // 0x281ee0: 0x1000000e  b           . + 4 + (0xE << 2)
label_281ee4:
    if (ctx->pc == 0x281EE4u) {
        ctx->pc = 0x281EE8u;
        goto label_281ee8;
    }
    ctx->pc = 0x281EE0u;
    {
        const bool branch_taken_0x281ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281ee0) {
            ctx->pc = 0x281F1Cu;
            goto label_281f1c;
        }
    }
    ctx->pc = 0x281EE8u;
label_281ee8:
    // 0x281ee8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x281ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281eec:
    // 0x281eec: 0xc0ba088  jal         func_2E8220
label_281ef0:
    if (ctx->pc == 0x281EF0u) {
        ctx->pc = 0x281EF4u;
        goto label_281ef4;
    }
    ctx->pc = 0x281EECu;
    SET_GPR_U32(ctx, 31, 0x281EF4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x281EECu, 0x281EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281EF4u;
label_281ef4:
    // 0x281ef4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x281ef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_281ef8:
    // 0x281ef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x281ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_281efc:
    // 0x281efc: 0xc0ba088  jal         func_2E8220
label_281f00:
    if (ctx->pc == 0x281F00u) {
        ctx->pc = 0x281F04u;
        goto label_281f04;
    }
    ctx->pc = 0x281EFCu;
    SET_GPR_U32(ctx, 31, 0x281F04u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x281EFCu, 0x281F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281F04u;
label_281f04:
    // 0x281f04: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_281f08:
    if (ctx->pc == 0x281F08u) {
        ctx->pc = 0x281F0Cu;
        goto label_281f0c;
    }
    ctx->pc = 0x281F04u;
    {
        const bool branch_taken_0x281f04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x281f04) {
            ctx->pc = 0x281EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281eb8;
        }
    }
    ctx->pc = 0x281F0Cu;
label_281f0c:
    // 0x281f0c: 0x200f809  jalr        $s0
label_281f10:
    if (ctx->pc == 0x281F10u) {
        ctx->pc = 0x281F14u;
        goto label_281f14;
    }
    ctx->pc = 0x281F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x281F14u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281F0Cu, 0x281F14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x281F14u;
label_281f14:
    // 0x281f14: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_281f18:
    if (ctx->pc == 0x281F18u) {
        ctx->pc = 0x281F1Cu;
        goto label_281f1c;
    }
    ctx->pc = 0x281F14u;
    {
        const bool branch_taken_0x281f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281f14) {
            ctx->pc = 0x281EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281eb8;
        }
    }
    ctx->pc = 0x281F1Cu;
label_281f1c:
    // 0x281f1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x281f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_281f20:
    // 0x281f20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x281f20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_281f24:
    // 0x281f24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x281f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_281f28:
    // 0x281f28: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x281f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_281f2c:
    // 0x281f2c: 0x3e00008  jr          $ra
label_281f30:
    if (ctx->pc == 0x281F30u) {
        ctx->pc = 0x281F34u;
        goto label_281f34;
    }
    ctx->pc = 0x281F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281F34u;
label_281f34:
    // 0x281f34: 0x0  nop
    ctx->pc = 0x281f34u;
    // NOP
label_281f38:
    // 0x281f38: 0x0  nop
    ctx->pc = 0x281f38u;
    // NOP
label_281f3c:
    // 0x281f3c: 0x0  nop
    ctx->pc = 0x281f3cu;
    // NOP
    ctx->pc = 0x281f40u;
}
