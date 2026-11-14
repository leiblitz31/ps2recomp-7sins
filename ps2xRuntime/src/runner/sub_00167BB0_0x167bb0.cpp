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

// Function: sub_00167BB0
// Address: 0x167bb0 - 0x167c60
void sub_00167BB0_0x167bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167BB0_0x167bb0");
#endif

    switch (ctx->pc) {
        case 0x167bb0u: goto label_167bb0;
        case 0x167bb4u: goto label_167bb4;
        case 0x167bb8u: goto label_167bb8;
        case 0x167bbcu: goto label_167bbc;
        case 0x167bc0u: goto label_167bc0;
        case 0x167bc4u: goto label_167bc4;
        case 0x167bc8u: goto label_167bc8;
        case 0x167bccu: goto label_167bcc;
        case 0x167bd0u: goto label_167bd0;
        case 0x167bd4u: goto label_167bd4;
        case 0x167bd8u: goto label_167bd8;
        case 0x167bdcu: goto label_167bdc;
        case 0x167be0u: goto label_167be0;
        case 0x167be4u: goto label_167be4;
        case 0x167be8u: goto label_167be8;
        case 0x167becu: goto label_167bec;
        case 0x167bf0u: goto label_167bf0;
        case 0x167bf4u: goto label_167bf4;
        case 0x167bf8u: goto label_167bf8;
        case 0x167bfcu: goto label_167bfc;
        case 0x167c00u: goto label_167c00;
        case 0x167c04u: goto label_167c04;
        case 0x167c08u: goto label_167c08;
        case 0x167c0cu: goto label_167c0c;
        case 0x167c10u: goto label_167c10;
        case 0x167c14u: goto label_167c14;
        case 0x167c18u: goto label_167c18;
        case 0x167c1cu: goto label_167c1c;
        case 0x167c20u: goto label_167c20;
        case 0x167c24u: goto label_167c24;
        case 0x167c28u: goto label_167c28;
        case 0x167c2cu: goto label_167c2c;
        case 0x167c30u: goto label_167c30;
        case 0x167c34u: goto label_167c34;
        case 0x167c38u: goto label_167c38;
        case 0x167c3cu: goto label_167c3c;
        case 0x167c40u: goto label_167c40;
        case 0x167c44u: goto label_167c44;
        case 0x167c48u: goto label_167c48;
        case 0x167c4cu: goto label_167c4c;
        case 0x167c50u: goto label_167c50;
        case 0x167c54u: goto label_167c54;
        case 0x167c58u: goto label_167c58;
        case 0x167c5cu: goto label_167c5c;
        default: break;
    }

    ctx->pc = 0x167bb0u;

label_167bb0:
    // 0x167bb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x167bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_167bb4:
    // 0x167bb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x167bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_167bb8:
    // 0x167bb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x167bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_167bbc:
    // 0x167bbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_167bc0:
    // 0x167bc0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x167bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_167bc4:
    // 0x167bc4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x167bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_167bc8:
    // 0x167bc8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_167bcc:
    if (ctx->pc == 0x167BCCu) {
        ctx->pc = 0x167BD0u;
        goto label_167bd0;
    }
    ctx->pc = 0x167BC8u;
    {
        const bool branch_taken_0x167bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167bc8) {
            ctx->pc = 0x167BD8u;
            goto label_167bd8;
        }
    }
    ctx->pc = 0x167BD0u;
label_167bd0:
    // 0x167bd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167bd4:
    // 0x167bd4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x167bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_167bd8:
    // 0x167bd8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x167bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_167bdc:
    // 0x167bdc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x167bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_167be0:
    // 0x167be0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_167be4:
    // 0x167be4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x167be4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_167be8:
    // 0x167be8: 0xc119b68  jal         func_466DA0
label_167bec:
    if (ctx->pc == 0x167BECu) {
        ctx->pc = 0x167BF0u;
        goto label_167bf0;
    }
    ctx->pc = 0x167BE8u;
    SET_GPR_U32(ctx, 31, 0x167BF0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x167BE8u, 0x167BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167BF0u;
label_167bf0:
    // 0x167bf0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x167bf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_167bf4:
    // 0x167bf4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_167bf8:
    if (ctx->pc == 0x167BF8u) {
        ctx->pc = 0x167BFCu;
        goto label_167bfc;
    }
    ctx->pc = 0x167BF4u;
    {
        const bool branch_taken_0x167bf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x167bf4) {
            ctx->pc = 0x167C08u;
            goto label_167c08;
        }
    }
    ctx->pc = 0x167BFCu;
label_167bfc:
    // 0x167bfc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x167bfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_167c00:
    // 0x167c00: 0x1000000e  b           . + 4 + (0xE << 2)
label_167c04:
    if (ctx->pc == 0x167C04u) {
        ctx->pc = 0x167C08u;
        goto label_167c08;
    }
    ctx->pc = 0x167C00u;
    {
        const bool branch_taken_0x167c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167c00) {
            ctx->pc = 0x167C3Cu;
            goto label_167c3c;
        }
    }
    ctx->pc = 0x167C08u;
label_167c08:
    // 0x167c08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x167c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167c0c:
    // 0x167c0c: 0xc0ba088  jal         func_2E8220
label_167c10:
    if (ctx->pc == 0x167C10u) {
        ctx->pc = 0x167C14u;
        goto label_167c14;
    }
    ctx->pc = 0x167C0Cu;
    SET_GPR_U32(ctx, 31, 0x167C14u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x167C0Cu, 0x167C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167C14u;
label_167c14:
    // 0x167c14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x167c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_167c18:
    // 0x167c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167c1c:
    // 0x167c1c: 0xc0ba088  jal         func_2E8220
label_167c20:
    if (ctx->pc == 0x167C20u) {
        ctx->pc = 0x167C24u;
        goto label_167c24;
    }
    ctx->pc = 0x167C1Cu;
    SET_GPR_U32(ctx, 31, 0x167C24u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x167C1Cu, 0x167C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167C24u;
label_167c24:
    // 0x167c24: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_167c28:
    if (ctx->pc == 0x167C28u) {
        ctx->pc = 0x167C2Cu;
        goto label_167c2c;
    }
    ctx->pc = 0x167C24u;
    {
        const bool branch_taken_0x167c24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x167c24) {
            ctx->pc = 0x167BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167bd8;
        }
    }
    ctx->pc = 0x167C2Cu;
label_167c2c:
    // 0x167c2c: 0x200f809  jalr        $s0
label_167c30:
    if (ctx->pc == 0x167C30u) {
        ctx->pc = 0x167C34u;
        goto label_167c34;
    }
    ctx->pc = 0x167C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x167C34u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167C2Cu, 0x167C34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167C34u;
label_167c34:
    // 0x167c34: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_167c38:
    if (ctx->pc == 0x167C38u) {
        ctx->pc = 0x167C3Cu;
        goto label_167c3c;
    }
    ctx->pc = 0x167C34u;
    {
        const bool branch_taken_0x167c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167c34) {
            ctx->pc = 0x167BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167bd8;
        }
    }
    ctx->pc = 0x167C3Cu;
label_167c3c:
    // 0x167c3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x167c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_167c40:
    // 0x167c40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x167c40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_167c44:
    // 0x167c44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_167c48:
    // 0x167c48: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x167c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_167c4c:
    // 0x167c4c: 0x3e00008  jr          $ra
label_167c50:
    if (ctx->pc == 0x167C50u) {
        ctx->pc = 0x167C54u;
        goto label_167c54;
    }
    ctx->pc = 0x167C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167C54u;
label_167c54:
    // 0x167c54: 0x0  nop
    ctx->pc = 0x167c54u;
    // NOP
label_167c58:
    // 0x167c58: 0x0  nop
    ctx->pc = 0x167c58u;
    // NOP
label_167c5c:
    // 0x167c5c: 0x0  nop
    ctx->pc = 0x167c5cu;
    // NOP
    ctx->pc = 0x167c60u;
}
