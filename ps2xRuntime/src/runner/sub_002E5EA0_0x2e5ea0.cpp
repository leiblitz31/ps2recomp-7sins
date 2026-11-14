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

// Function: sub_002E5EA0
// Address: 0x2e5ea0 - 0x2e5f30
void sub_002E5EA0_0x2e5ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5EA0_0x2e5ea0");
#endif

    switch (ctx->pc) {
        case 0x2e5ea0u: goto label_2e5ea0;
        case 0x2e5ea4u: goto label_2e5ea4;
        case 0x2e5ea8u: goto label_2e5ea8;
        case 0x2e5eacu: goto label_2e5eac;
        case 0x2e5eb0u: goto label_2e5eb0;
        case 0x2e5eb4u: goto label_2e5eb4;
        case 0x2e5eb8u: goto label_2e5eb8;
        case 0x2e5ebcu: goto label_2e5ebc;
        case 0x2e5ec0u: goto label_2e5ec0;
        case 0x2e5ec4u: goto label_2e5ec4;
        case 0x2e5ec8u: goto label_2e5ec8;
        case 0x2e5eccu: goto label_2e5ecc;
        case 0x2e5ed0u: goto label_2e5ed0;
        case 0x2e5ed4u: goto label_2e5ed4;
        case 0x2e5ed8u: goto label_2e5ed8;
        case 0x2e5edcu: goto label_2e5edc;
        case 0x2e5ee0u: goto label_2e5ee0;
        case 0x2e5ee4u: goto label_2e5ee4;
        case 0x2e5ee8u: goto label_2e5ee8;
        case 0x2e5eecu: goto label_2e5eec;
        case 0x2e5ef0u: goto label_2e5ef0;
        case 0x2e5ef4u: goto label_2e5ef4;
        case 0x2e5ef8u: goto label_2e5ef8;
        case 0x2e5efcu: goto label_2e5efc;
        case 0x2e5f00u: goto label_2e5f00;
        case 0x2e5f04u: goto label_2e5f04;
        case 0x2e5f08u: goto label_2e5f08;
        case 0x2e5f0cu: goto label_2e5f0c;
        case 0x2e5f10u: goto label_2e5f10;
        case 0x2e5f14u: goto label_2e5f14;
        case 0x2e5f18u: goto label_2e5f18;
        case 0x2e5f1cu: goto label_2e5f1c;
        case 0x2e5f20u: goto label_2e5f20;
        case 0x2e5f24u: goto label_2e5f24;
        case 0x2e5f28u: goto label_2e5f28;
        case 0x2e5f2cu: goto label_2e5f2c;
        default: break;
    }

    ctx->pc = 0x2e5ea0u;

label_2e5ea0:
    // 0x2e5ea0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e5ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2e5ea4:
    // 0x2e5ea4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e5ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2e5ea8:
    // 0x2e5ea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e5ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e5eac:
    // 0x2e5eac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2e5eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_2e5eb0:
    // 0x2e5eb0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2e5eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_2e5eb4:
    // 0x2e5eb4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2e5eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2e5eb8:
    // 0x2e5eb8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e5eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2e5ebc:
    // 0x2e5ebc: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x2e5ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
label_2e5ec0:
    // 0x2e5ec0: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x2e5ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_2e5ec4:
    // 0x2e5ec4: 0xc119b68  jal         func_466DA0
label_2e5ec8:
    if (ctx->pc == 0x2E5EC8u) {
        ctx->pc = 0x2E5ECCu;
        goto label_2e5ecc;
    }
    ctx->pc = 0x2E5EC4u;
    SET_GPR_U32(ctx, 31, 0x2E5ECCu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2E5EC4u, 0x2E5ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5ECCu;
label_2e5ecc:
    // 0x2e5ecc: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x2e5eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_2e5ed0:
    // 0x2e5ed0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e5ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5ed4:
    // 0x2e5ed4: 0xc0400e0  jal         func_100380
label_2e5ed8:
    if (ctx->pc == 0x2E5ED8u) {
        ctx->pc = 0x2E5EDCu;
        goto label_2e5edc;
    }
    ctx->pc = 0x2E5ED4u;
    SET_GPR_U32(ctx, 31, 0x2E5EDCu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2E5ED4u, 0x2E5EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5EDCu;
label_2e5edc:
    // 0x2e5edc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e5edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5ee0:
    // 0x2e5ee0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_2e5ee4:
    if (ctx->pc == 0x2E5EE4u) {
        ctx->pc = 0x2E5EE8u;
        goto label_2e5ee8;
    }
    ctx->pc = 0x2E5EE0u;
    {
        const bool branch_taken_0x2e5ee0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5ee0) {
            ctx->pc = 0x2E5EF8u;
            goto label_2e5ef8;
        }
    }
    ctx->pc = 0x2E5EE8u;
label_2e5ee8:
    // 0x2e5ee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5eec:
    // 0x2e5eec: 0xc085954  jal         func_216550
label_2e5ef0:
    if (ctx->pc == 0x2E5EF0u) {
        ctx->pc = 0x2E5EF4u;
        goto label_2e5ef4;
    }
    ctx->pc = 0x2E5EECu;
    SET_GPR_U32(ctx, 31, 0x2E5EF4u);
    ctx->pc = 0x216550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216550u, 0x2E5EECu, 0x2E5EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5EF4u;
label_2e5ef4:
    // 0x2e5ef4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e5ef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5ef8:
    // 0x2e5ef8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e5ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2e5efc:
    // 0x2e5efc: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x2e5efcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
label_2e5f00:
    // 0x2e5f00: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e5f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2e5f04:
    // 0x2e5f04: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2e5f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2e5f08:
    // 0x2e5f08: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e5f08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e5f0c:
    // 0x2e5f0c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2e5f0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2e5f10:
    // 0x2e5f10: 0x320f809  jalr        $t9
label_2e5f14:
    if (ctx->pc == 0x2E5F14u) {
        ctx->pc = 0x2E5F18u;
        goto label_2e5f18;
    }
    ctx->pc = 0x2E5F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E5F18u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5F10u, 0x2E5F18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E5F18u;
label_2e5f18:
    // 0x2e5f18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e5f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e5f1c:
    // 0x2e5f1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e5f1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e5f20:
    // 0x2e5f20: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e5f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2e5f24:
    // 0x2e5f24: 0x3e00008  jr          $ra
label_2e5f28:
    if (ctx->pc == 0x2E5F28u) {
        ctx->pc = 0x2E5F2Cu;
        goto label_2e5f2c;
    }
    ctx->pc = 0x2E5F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5F2Cu;
label_2e5f2c:
    // 0x2e5f2c: 0x0  nop
    ctx->pc = 0x2e5f2cu;
    // NOP
    ctx->pc = 0x2e5f30u;
}
