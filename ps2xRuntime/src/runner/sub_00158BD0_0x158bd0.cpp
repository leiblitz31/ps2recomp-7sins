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

// Function: sub_00158BD0
// Address: 0x158bd0 - 0x158c80
void sub_00158BD0_0x158bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158BD0_0x158bd0");
#endif

    switch (ctx->pc) {
        case 0x158bd0u: goto label_158bd0;
        case 0x158bd4u: goto label_158bd4;
        case 0x158bd8u: goto label_158bd8;
        case 0x158bdcu: goto label_158bdc;
        case 0x158be0u: goto label_158be0;
        case 0x158be4u: goto label_158be4;
        case 0x158be8u: goto label_158be8;
        case 0x158becu: goto label_158bec;
        case 0x158bf0u: goto label_158bf0;
        case 0x158bf4u: goto label_158bf4;
        case 0x158bf8u: goto label_158bf8;
        case 0x158bfcu: goto label_158bfc;
        case 0x158c00u: goto label_158c00;
        case 0x158c04u: goto label_158c04;
        case 0x158c08u: goto label_158c08;
        case 0x158c0cu: goto label_158c0c;
        case 0x158c10u: goto label_158c10;
        case 0x158c14u: goto label_158c14;
        case 0x158c18u: goto label_158c18;
        case 0x158c1cu: goto label_158c1c;
        case 0x158c20u: goto label_158c20;
        case 0x158c24u: goto label_158c24;
        case 0x158c28u: goto label_158c28;
        case 0x158c2cu: goto label_158c2c;
        case 0x158c30u: goto label_158c30;
        case 0x158c34u: goto label_158c34;
        case 0x158c38u: goto label_158c38;
        case 0x158c3cu: goto label_158c3c;
        case 0x158c40u: goto label_158c40;
        case 0x158c44u: goto label_158c44;
        case 0x158c48u: goto label_158c48;
        case 0x158c4cu: goto label_158c4c;
        case 0x158c50u: goto label_158c50;
        case 0x158c54u: goto label_158c54;
        case 0x158c58u: goto label_158c58;
        case 0x158c5cu: goto label_158c5c;
        case 0x158c60u: goto label_158c60;
        case 0x158c64u: goto label_158c64;
        case 0x158c68u: goto label_158c68;
        case 0x158c6cu: goto label_158c6c;
        case 0x158c70u: goto label_158c70;
        case 0x158c74u: goto label_158c74;
        case 0x158c78u: goto label_158c78;
        case 0x158c7cu: goto label_158c7c;
        default: break;
    }

    ctx->pc = 0x158bd0u;

label_158bd0:
    // 0x158bd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x158bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_158bd4:
    // 0x158bd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x158bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_158bd8:
    // 0x158bd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x158bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_158bdc:
    // 0x158bdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x158bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_158be0:
    // 0x158be0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x158be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_158be4:
    // 0x158be4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x158be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_158be8:
    // 0x158be8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_158bec:
    if (ctx->pc == 0x158BECu) {
        ctx->pc = 0x158BF0u;
        goto label_158bf0;
    }
    ctx->pc = 0x158BE8u;
    {
        const bool branch_taken_0x158be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158be8) {
            ctx->pc = 0x158BF8u;
            goto label_158bf8;
        }
    }
    ctx->pc = 0x158BF0u;
label_158bf0:
    // 0x158bf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x158bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_158bf4:
    // 0x158bf4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x158bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_158bf8:
    // 0x158bf8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x158bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_158bfc:
    // 0x158bfc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x158bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_158c00:
    // 0x158c00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x158c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_158c04:
    // 0x158c04: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x158c04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_158c08:
    // 0x158c08: 0xc119b68  jal         func_466DA0
label_158c0c:
    if (ctx->pc == 0x158C0Cu) {
        ctx->pc = 0x158C10u;
        goto label_158c10;
    }
    ctx->pc = 0x158C08u;
    SET_GPR_U32(ctx, 31, 0x158C10u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x158C08u, 0x158C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158C10u;
label_158c10:
    // 0x158c10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x158c10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_158c14:
    // 0x158c14: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_158c18:
    if (ctx->pc == 0x158C18u) {
        ctx->pc = 0x158C1Cu;
        goto label_158c1c;
    }
    ctx->pc = 0x158C14u;
    {
        const bool branch_taken_0x158c14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x158c14) {
            ctx->pc = 0x158C28u;
            goto label_158c28;
        }
    }
    ctx->pc = 0x158C1Cu;
label_158c1c:
    // 0x158c1c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x158c1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_158c20:
    // 0x158c20: 0x1000000e  b           . + 4 + (0xE << 2)
label_158c24:
    if (ctx->pc == 0x158C24u) {
        ctx->pc = 0x158C28u;
        goto label_158c28;
    }
    ctx->pc = 0x158C20u;
    {
        const bool branch_taken_0x158c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158c20) {
            ctx->pc = 0x158C5Cu;
            goto label_158c5c;
        }
    }
    ctx->pc = 0x158C28u;
label_158c28:
    // 0x158c28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x158c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158c2c:
    // 0x158c2c: 0xc0ba088  jal         func_2E8220
label_158c30:
    if (ctx->pc == 0x158C30u) {
        ctx->pc = 0x158C34u;
        goto label_158c34;
    }
    ctx->pc = 0x158C2Cu;
    SET_GPR_U32(ctx, 31, 0x158C34u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x158C2Cu, 0x158C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158C34u;
label_158c34:
    // 0x158c34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x158c34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_158c38:
    // 0x158c38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158c3c:
    // 0x158c3c: 0xc0ba088  jal         func_2E8220
label_158c40:
    if (ctx->pc == 0x158C40u) {
        ctx->pc = 0x158C44u;
        goto label_158c44;
    }
    ctx->pc = 0x158C3Cu;
    SET_GPR_U32(ctx, 31, 0x158C44u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x158C3Cu, 0x158C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158C44u;
label_158c44:
    // 0x158c44: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_158c48:
    if (ctx->pc == 0x158C48u) {
        ctx->pc = 0x158C4Cu;
        goto label_158c4c;
    }
    ctx->pc = 0x158C44u;
    {
        const bool branch_taken_0x158c44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x158c44) {
            ctx->pc = 0x158BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158bf8;
        }
    }
    ctx->pc = 0x158C4Cu;
label_158c4c:
    // 0x158c4c: 0x200f809  jalr        $s0
label_158c50:
    if (ctx->pc == 0x158C50u) {
        ctx->pc = 0x158C54u;
        goto label_158c54;
    }
    ctx->pc = 0x158C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x158C54u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158C4Cu, 0x158C54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158C54u;
label_158c54:
    // 0x158c54: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_158c58:
    if (ctx->pc == 0x158C58u) {
        ctx->pc = 0x158C5Cu;
        goto label_158c5c;
    }
    ctx->pc = 0x158C54u;
    {
        const bool branch_taken_0x158c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158c54) {
            ctx->pc = 0x158BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158bf8;
        }
    }
    ctx->pc = 0x158C5Cu;
label_158c5c:
    // 0x158c5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x158c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_158c60:
    // 0x158c60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x158c60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_158c64:
    // 0x158c64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x158c64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_158c68:
    // 0x158c68: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x158c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_158c6c:
    // 0x158c6c: 0x3e00008  jr          $ra
label_158c70:
    if (ctx->pc == 0x158C70u) {
        ctx->pc = 0x158C74u;
        goto label_158c74;
    }
    ctx->pc = 0x158C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158C74u;
label_158c74:
    // 0x158c74: 0x0  nop
    ctx->pc = 0x158c74u;
    // NOP
label_158c78:
    // 0x158c78: 0x0  nop
    ctx->pc = 0x158c78u;
    // NOP
label_158c7c:
    // 0x158c7c: 0x0  nop
    ctx->pc = 0x158c7cu;
    // NOP
    ctx->pc = 0x158c80u;
}
