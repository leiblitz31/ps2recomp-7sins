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

// Function: sub_00210010
// Address: 0x210010 - 0x2100b0
void sub_00210010_0x210010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210010_0x210010");
#endif

    switch (ctx->pc) {
        case 0x210010u: goto label_210010;
        case 0x210014u: goto label_210014;
        case 0x210018u: goto label_210018;
        case 0x21001cu: goto label_21001c;
        case 0x210020u: goto label_210020;
        case 0x210024u: goto label_210024;
        case 0x210028u: goto label_210028;
        case 0x21002cu: goto label_21002c;
        case 0x210030u: goto label_210030;
        case 0x210034u: goto label_210034;
        case 0x210038u: goto label_210038;
        case 0x21003cu: goto label_21003c;
        case 0x210040u: goto label_210040;
        case 0x210044u: goto label_210044;
        case 0x210048u: goto label_210048;
        case 0x21004cu: goto label_21004c;
        case 0x210050u: goto label_210050;
        case 0x210054u: goto label_210054;
        case 0x210058u: goto label_210058;
        case 0x21005cu: goto label_21005c;
        case 0x210060u: goto label_210060;
        case 0x210064u: goto label_210064;
        case 0x210068u: goto label_210068;
        case 0x21006cu: goto label_21006c;
        case 0x210070u: goto label_210070;
        case 0x210074u: goto label_210074;
        case 0x210078u: goto label_210078;
        case 0x21007cu: goto label_21007c;
        case 0x210080u: goto label_210080;
        case 0x210084u: goto label_210084;
        case 0x210088u: goto label_210088;
        case 0x21008cu: goto label_21008c;
        case 0x210090u: goto label_210090;
        case 0x210094u: goto label_210094;
        case 0x210098u: goto label_210098;
        case 0x21009cu: goto label_21009c;
        case 0x2100a0u: goto label_2100a0;
        case 0x2100a4u: goto label_2100a4;
        case 0x2100a8u: goto label_2100a8;
        case 0x2100acu: goto label_2100ac;
        default: break;
    }

    ctx->pc = 0x210010u;

label_210010:
    // 0x210010: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x210010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_210014:
    // 0x210014: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x210014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_210018:
    // 0x210018: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x210018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21001c:
    // 0x21001c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21001cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_210020:
    // 0x210020: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x210020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_210024:
    // 0x210024: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x210024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_210028:
    // 0x210028: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_21002c:
    if (ctx->pc == 0x21002Cu) {
        ctx->pc = 0x210030u;
        goto label_210030;
    }
    ctx->pc = 0x210028u;
    {
        const bool branch_taken_0x210028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210028) {
            ctx->pc = 0x210038u;
            goto label_210038;
        }
    }
    ctx->pc = 0x210030u;
label_210030:
    // 0x210030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x210030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_210034:
    // 0x210034: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x210034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_210038:
    // 0x210038: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x210038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_21003c:
    // 0x21003c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x21003cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_210040:
    // 0x210040: 0xc119b68  jal         func_466DA0
label_210044:
    if (ctx->pc == 0x210044u) {
        ctx->pc = 0x210048u;
        goto label_210048;
    }
    ctx->pc = 0x210040u;
    SET_GPR_U32(ctx, 31, 0x210048u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x210040u, 0x210048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210048u;
label_210048:
    // 0x210048: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x210048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21004c:
    // 0x21004c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_210050:
    if (ctx->pc == 0x210050u) {
        ctx->pc = 0x210054u;
        goto label_210054;
    }
    ctx->pc = 0x21004Cu;
    {
        const bool branch_taken_0x21004c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x21004c) {
            ctx->pc = 0x210060u;
            goto label_210060;
        }
    }
    ctx->pc = 0x210054u;
label_210054:
    // 0x210054: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x210054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_210058:
    // 0x210058: 0x1000000e  b           . + 4 + (0xE << 2)
label_21005c:
    if (ctx->pc == 0x21005Cu) {
        ctx->pc = 0x210060u;
        goto label_210060;
    }
    ctx->pc = 0x210058u;
    {
        const bool branch_taken_0x210058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x210058) {
            ctx->pc = 0x210094u;
            goto label_210094;
        }
    }
    ctx->pc = 0x210060u;
label_210060:
    // 0x210060: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x210060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210064:
    // 0x210064: 0xc0ba088  jal         func_2E8220
label_210068:
    if (ctx->pc == 0x210068u) {
        ctx->pc = 0x21006Cu;
        goto label_21006c;
    }
    ctx->pc = 0x210064u;
    SET_GPR_U32(ctx, 31, 0x21006Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x210064u, 0x21006Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21006Cu;
label_21006c:
    // 0x21006c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21006cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210070:
    // 0x210070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x210070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_210074:
    // 0x210074: 0xc0ba088  jal         func_2E8220
label_210078:
    if (ctx->pc == 0x210078u) {
        ctx->pc = 0x21007Cu;
        goto label_21007c;
    }
    ctx->pc = 0x210074u;
    SET_GPR_U32(ctx, 31, 0x21007Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x210074u, 0x21007Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21007Cu;
label_21007c:
    // 0x21007c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_210080:
    if (ctx->pc == 0x210080u) {
        ctx->pc = 0x210084u;
        goto label_210084;
    }
    ctx->pc = 0x21007Cu;
    {
        const bool branch_taken_0x21007c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x21007c) {
            ctx->pc = 0x210038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210038;
        }
    }
    ctx->pc = 0x210084u;
label_210084:
    // 0x210084: 0x200f809  jalr        $s0
label_210088:
    if (ctx->pc == 0x210088u) {
        ctx->pc = 0x21008Cu;
        goto label_21008c;
    }
    ctx->pc = 0x210084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x21008Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210084u, 0x21008Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21008Cu;
label_21008c:
    // 0x21008c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_210090:
    if (ctx->pc == 0x210090u) {
        ctx->pc = 0x210094u;
        goto label_210094;
    }
    ctx->pc = 0x21008Cu;
    {
        const bool branch_taken_0x21008c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21008c) {
            ctx->pc = 0x210038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210038;
        }
    }
    ctx->pc = 0x210094u;
label_210094:
    // 0x210094: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x210094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_210098:
    // 0x210098: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x210098u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21009c:
    // 0x21009c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21009cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2100a0:
    // 0x2100a0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2100a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2100a4:
    // 0x2100a4: 0x3e00008  jr          $ra
label_2100a8:
    if (ctx->pc == 0x2100A8u) {
        ctx->pc = 0x2100ACu;
        goto label_2100ac;
    }
    ctx->pc = 0x2100A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2100A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2100ACu;
label_2100ac:
    // 0x2100ac: 0x0  nop
    ctx->pc = 0x2100acu;
    // NOP
    ctx->pc = 0x2100b0u;
}
