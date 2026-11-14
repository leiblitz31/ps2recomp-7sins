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

// Function: sub_0024ECC0
// Address: 0x24ecc0 - 0x24ed70
void sub_0024ECC0_0x24ecc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024ECC0_0x24ecc0");
#endif

    switch (ctx->pc) {
        case 0x24ecc0u: goto label_24ecc0;
        case 0x24ecc4u: goto label_24ecc4;
        case 0x24ecc8u: goto label_24ecc8;
        case 0x24ecccu: goto label_24eccc;
        case 0x24ecd0u: goto label_24ecd0;
        case 0x24ecd4u: goto label_24ecd4;
        case 0x24ecd8u: goto label_24ecd8;
        case 0x24ecdcu: goto label_24ecdc;
        case 0x24ece0u: goto label_24ece0;
        case 0x24ece4u: goto label_24ece4;
        case 0x24ece8u: goto label_24ece8;
        case 0x24ececu: goto label_24ecec;
        case 0x24ecf0u: goto label_24ecf0;
        case 0x24ecf4u: goto label_24ecf4;
        case 0x24ecf8u: goto label_24ecf8;
        case 0x24ecfcu: goto label_24ecfc;
        case 0x24ed00u: goto label_24ed00;
        case 0x24ed04u: goto label_24ed04;
        case 0x24ed08u: goto label_24ed08;
        case 0x24ed0cu: goto label_24ed0c;
        case 0x24ed10u: goto label_24ed10;
        case 0x24ed14u: goto label_24ed14;
        case 0x24ed18u: goto label_24ed18;
        case 0x24ed1cu: goto label_24ed1c;
        case 0x24ed20u: goto label_24ed20;
        case 0x24ed24u: goto label_24ed24;
        case 0x24ed28u: goto label_24ed28;
        case 0x24ed2cu: goto label_24ed2c;
        case 0x24ed30u: goto label_24ed30;
        case 0x24ed34u: goto label_24ed34;
        case 0x24ed38u: goto label_24ed38;
        case 0x24ed3cu: goto label_24ed3c;
        case 0x24ed40u: goto label_24ed40;
        case 0x24ed44u: goto label_24ed44;
        case 0x24ed48u: goto label_24ed48;
        case 0x24ed4cu: goto label_24ed4c;
        case 0x24ed50u: goto label_24ed50;
        case 0x24ed54u: goto label_24ed54;
        case 0x24ed58u: goto label_24ed58;
        case 0x24ed5cu: goto label_24ed5c;
        case 0x24ed60u: goto label_24ed60;
        case 0x24ed64u: goto label_24ed64;
        case 0x24ed68u: goto label_24ed68;
        case 0x24ed6cu: goto label_24ed6c;
        default: break;
    }

    ctx->pc = 0x24ecc0u;

label_24ecc0:
    // 0x24ecc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24ecc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_24ecc4:
    // 0x24ecc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24ecc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_24ecc8:
    // 0x24ecc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24ecc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_24eccc:
    // 0x24eccc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24ecccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_24ecd0:
    // 0x24ecd0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x24ecd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_24ecd4:
    // 0x24ecd4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x24ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_24ecd8:
    // 0x24ecd8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_24ecdc:
    if (ctx->pc == 0x24ECDCu) {
        ctx->pc = 0x24ECE0u;
        goto label_24ece0;
    }
    ctx->pc = 0x24ECD8u;
    {
        const bool branch_taken_0x24ecd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ecd8) {
            ctx->pc = 0x24ECE8u;
            goto label_24ece8;
        }
    }
    ctx->pc = 0x24ECE0u;
label_24ece0:
    // 0x24ece0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24ece0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24ece4:
    // 0x24ece4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x24ece4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_24ece8:
    // 0x24ece8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x24ece8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_24ecec:
    // 0x24ecec: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x24ececu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_24ecf0:
    // 0x24ecf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24ecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24ecf4:
    // 0x24ecf4: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x24ecf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_24ecf8:
    // 0x24ecf8: 0xc119b68  jal         func_466DA0
label_24ecfc:
    if (ctx->pc == 0x24ECFCu) {
        ctx->pc = 0x24ED00u;
        goto label_24ed00;
    }
    ctx->pc = 0x24ECF8u;
    SET_GPR_U32(ctx, 31, 0x24ED00u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x24ECF8u, 0x24ED00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ED00u;
label_24ed00:
    // 0x24ed00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24ed00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24ed04:
    // 0x24ed04: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_24ed08:
    if (ctx->pc == 0x24ED08u) {
        ctx->pc = 0x24ED0Cu;
        goto label_24ed0c;
    }
    ctx->pc = 0x24ED04u;
    {
        const bool branch_taken_0x24ed04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ed04) {
            ctx->pc = 0x24ED18u;
            goto label_24ed18;
        }
    }
    ctx->pc = 0x24ED0Cu;
label_24ed0c:
    // 0x24ed0c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x24ed0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24ed10:
    // 0x24ed10: 0x1000000e  b           . + 4 + (0xE << 2)
label_24ed14:
    if (ctx->pc == 0x24ED14u) {
        ctx->pc = 0x24ED18u;
        goto label_24ed18;
    }
    ctx->pc = 0x24ED10u;
    {
        const bool branch_taken_0x24ed10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ed10) {
            ctx->pc = 0x24ED4Cu;
            goto label_24ed4c;
        }
    }
    ctx->pc = 0x24ED18u;
label_24ed18:
    // 0x24ed18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24ed18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24ed1c:
    // 0x24ed1c: 0xc0ba088  jal         func_2E8220
label_24ed20:
    if (ctx->pc == 0x24ED20u) {
        ctx->pc = 0x24ED24u;
        goto label_24ed24;
    }
    ctx->pc = 0x24ED1Cu;
    SET_GPR_U32(ctx, 31, 0x24ED24u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x24ED1Cu, 0x24ED24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ED24u;
label_24ed24:
    // 0x24ed24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24ed24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24ed28:
    // 0x24ed28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24ed28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24ed2c:
    // 0x24ed2c: 0xc0ba088  jal         func_2E8220
label_24ed30:
    if (ctx->pc == 0x24ED30u) {
        ctx->pc = 0x24ED34u;
        goto label_24ed34;
    }
    ctx->pc = 0x24ED2Cu;
    SET_GPR_U32(ctx, 31, 0x24ED34u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x24ED2Cu, 0x24ED34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ED34u;
label_24ed34:
    // 0x24ed34: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_24ed38:
    if (ctx->pc == 0x24ED38u) {
        ctx->pc = 0x24ED3Cu;
        goto label_24ed3c;
    }
    ctx->pc = 0x24ED34u;
    {
        const bool branch_taken_0x24ed34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ed34) {
            ctx->pc = 0x24ECE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ece8;
        }
    }
    ctx->pc = 0x24ED3Cu;
label_24ed3c:
    // 0x24ed3c: 0x200f809  jalr        $s0
label_24ed40:
    if (ctx->pc == 0x24ED40u) {
        ctx->pc = 0x24ED44u;
        goto label_24ed44;
    }
    ctx->pc = 0x24ED3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x24ED44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24ED3Cu, 0x24ED44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24ED44u;
label_24ed44:
    // 0x24ed44: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_24ed48:
    if (ctx->pc == 0x24ED48u) {
        ctx->pc = 0x24ED4Cu;
        goto label_24ed4c;
    }
    ctx->pc = 0x24ED44u;
    {
        const bool branch_taken_0x24ed44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ed44) {
            ctx->pc = 0x24ECE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ece8;
        }
    }
    ctx->pc = 0x24ED4Cu;
label_24ed4c:
    // 0x24ed4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24ed4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24ed50:
    // 0x24ed50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24ed50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24ed54:
    // 0x24ed54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24ed54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24ed58:
    // 0x24ed58: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x24ed58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_24ed5c:
    // 0x24ed5c: 0x3e00008  jr          $ra
label_24ed60:
    if (ctx->pc == 0x24ED60u) {
        ctx->pc = 0x24ED64u;
        goto label_24ed64;
    }
    ctx->pc = 0x24ED5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24ED5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24ED64u;
label_24ed64:
    // 0x24ed64: 0x0  nop
    ctx->pc = 0x24ed64u;
    // NOP
label_24ed68:
    // 0x24ed68: 0x0  nop
    ctx->pc = 0x24ed68u;
    // NOP
label_24ed6c:
    // 0x24ed6c: 0x0  nop
    ctx->pc = 0x24ed6cu;
    // NOP
    ctx->pc = 0x24ed70u;
}
