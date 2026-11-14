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

// Function: sub_0047C020
// Address: 0x47c020 - 0x47c130
void sub_0047C020_0x47c020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047C020_0x47c020");
#endif

    switch (ctx->pc) {
        case 0x47c020u: goto label_47c020;
        case 0x47c024u: goto label_47c024;
        case 0x47c028u: goto label_47c028;
        case 0x47c02cu: goto label_47c02c;
        case 0x47c030u: goto label_47c030;
        case 0x47c034u: goto label_47c034;
        case 0x47c038u: goto label_47c038;
        case 0x47c03cu: goto label_47c03c;
        case 0x47c040u: goto label_47c040;
        case 0x47c044u: goto label_47c044;
        case 0x47c048u: goto label_47c048;
        case 0x47c04cu: goto label_47c04c;
        case 0x47c050u: goto label_47c050;
        case 0x47c054u: goto label_47c054;
        case 0x47c058u: goto label_47c058;
        case 0x47c05cu: goto label_47c05c;
        case 0x47c060u: goto label_47c060;
        case 0x47c064u: goto label_47c064;
        case 0x47c068u: goto label_47c068;
        case 0x47c06cu: goto label_47c06c;
        case 0x47c070u: goto label_47c070;
        case 0x47c074u: goto label_47c074;
        case 0x47c078u: goto label_47c078;
        case 0x47c07cu: goto label_47c07c;
        case 0x47c080u: goto label_47c080;
        case 0x47c084u: goto label_47c084;
        case 0x47c088u: goto label_47c088;
        case 0x47c08cu: goto label_47c08c;
        case 0x47c090u: goto label_47c090;
        case 0x47c094u: goto label_47c094;
        case 0x47c098u: goto label_47c098;
        case 0x47c09cu: goto label_47c09c;
        case 0x47c0a0u: goto label_47c0a0;
        case 0x47c0a4u: goto label_47c0a4;
        case 0x47c0a8u: goto label_47c0a8;
        case 0x47c0acu: goto label_47c0ac;
        case 0x47c0b0u: goto label_47c0b0;
        case 0x47c0b4u: goto label_47c0b4;
        case 0x47c0b8u: goto label_47c0b8;
        case 0x47c0bcu: goto label_47c0bc;
        case 0x47c0c0u: goto label_47c0c0;
        case 0x47c0c4u: goto label_47c0c4;
        case 0x47c0c8u: goto label_47c0c8;
        case 0x47c0ccu: goto label_47c0cc;
        case 0x47c0d0u: goto label_47c0d0;
        case 0x47c0d4u: goto label_47c0d4;
        case 0x47c0d8u: goto label_47c0d8;
        case 0x47c0dcu: goto label_47c0dc;
        case 0x47c0e0u: goto label_47c0e0;
        case 0x47c0e4u: goto label_47c0e4;
        case 0x47c0e8u: goto label_47c0e8;
        case 0x47c0ecu: goto label_47c0ec;
        case 0x47c0f0u: goto label_47c0f0;
        case 0x47c0f4u: goto label_47c0f4;
        case 0x47c0f8u: goto label_47c0f8;
        case 0x47c0fcu: goto label_47c0fc;
        case 0x47c100u: goto label_47c100;
        case 0x47c104u: goto label_47c104;
        case 0x47c108u: goto label_47c108;
        case 0x47c10cu: goto label_47c10c;
        case 0x47c110u: goto label_47c110;
        case 0x47c114u: goto label_47c114;
        case 0x47c118u: goto label_47c118;
        case 0x47c11cu: goto label_47c11c;
        case 0x47c120u: goto label_47c120;
        case 0x47c124u: goto label_47c124;
        case 0x47c128u: goto label_47c128;
        case 0x47c12cu: goto label_47c12c;
        default: break;
    }

    ctx->pc = 0x47c020u;

label_47c020:
    // 0x47c020: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x47c020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_47c024:
    // 0x47c024: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x47c024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_47c028:
    // 0x47c028: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x47c028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_47c02c:
    // 0x47c02c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x47c02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_47c030:
    // 0x47c030: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47c030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_47c034:
    // 0x47c034: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47c034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47c038:
    // 0x47c038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47c038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47c03c:
    // 0x47c03c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47c03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47c040:
    // 0x47c040: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x47c040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_47c044:
    // 0x47c044: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x47c044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_47c048:
    // 0x47c048: 0xc11eb8c  jal         func_47AE30
label_47c04c:
    if (ctx->pc == 0x47C04Cu) {
        ctx->pc = 0x47C050u;
        goto label_47c050;
    }
    ctx->pc = 0x47C048u;
    SET_GPR_U32(ctx, 31, 0x47C050u);
    ctx->pc = 0x47AE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47AE30u, 0x47C048u, 0x47C050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C050u;
label_47c050:
    // 0x47c050: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x47c050u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47c054:
    // 0x47c054: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x47c054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47c058:
    // 0x47c058: 0x10000024  b           . + 4 + (0x24 << 2)
label_47c05c:
    if (ctx->pc == 0x47C05Cu) {
        ctx->pc = 0x47C060u;
        goto label_47c060;
    }
    ctx->pc = 0x47C058u;
    {
        const bool branch_taken_0x47c058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c058) {
            ctx->pc = 0x47C0ECu;
            goto label_47c0ec;
        }
    }
    ctx->pc = 0x47C060u;
label_47c060:
    // 0x47c060: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x47c060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_47c064:
    // 0x47c064: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x47c064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47c068:
    // 0x47c068: 0xc11eff0  jal         func_47BFC0
label_47c06c:
    if (ctx->pc == 0x47C06Cu) {
        ctx->pc = 0x47C070u;
        goto label_47c070;
    }
    ctx->pc = 0x47C068u;
    SET_GPR_U32(ctx, 31, 0x47C070u);
    ctx->pc = 0x47BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC0u, 0x47C068u, 0x47C070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C070u;
label_47c070:
    // 0x47c070: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47c070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_47c074:
    // 0x47c074: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x47c074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_47c078:
    // 0x47c078: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x47c078u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_47c07c:
    // 0x47c07c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x47c07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_47c080:
    // 0x47c080: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x47c080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47c084:
    // 0x47c084: 0xc11eff0  jal         func_47BFC0
label_47c088:
    if (ctx->pc == 0x47C088u) {
        ctx->pc = 0x47C08Cu;
        goto label_47c08c;
    }
    ctx->pc = 0x47C084u;
    SET_GPR_U32(ctx, 31, 0x47C08Cu);
    ctx->pc = 0x47BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC0u, 0x47C084u, 0x47C08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C08Cu;
label_47c08c:
    // 0x47c08c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x47c08cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_47c090:
    // 0x47c090: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x47c090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_47c094:
    // 0x47c094: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x47c094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_47c098:
    // 0x47c098: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47c098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_47c09c:
    // 0x47c09c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47c09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_47c0a0:
    // 0x47c0a0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x47c0a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_47c0a4:
    // 0x47c0a4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x47c0a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_47c0a8:
    // 0x47c0a8: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
label_47c0ac:
    if (ctx->pc == 0x47C0ACu) {
        ctx->pc = 0x47C0B0u;
        goto label_47c0b0;
    }
    ctx->pc = 0x47C0A8u;
    {
        const bool branch_taken_0x47c0a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c0a8) {
            ctx->pc = 0x47C0E8u;
            goto label_47c0e8;
        }
    }
    ctx->pc = 0x47C0B0u;
label_47c0b0:
    // 0x47c0b0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x47c0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_47c0b4:
    // 0x47c0b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x47c0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47c0b8:
    // 0x47c0b8: 0xc11eff0  jal         func_47BFC0
label_47c0bc:
    if (ctx->pc == 0x47C0BCu) {
        ctx->pc = 0x47C0C0u;
        goto label_47c0c0;
    }
    ctx->pc = 0x47C0B8u;
    SET_GPR_U32(ctx, 31, 0x47C0C0u);
    ctx->pc = 0x47BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC0u, 0x47C0B8u, 0x47C0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C0C0u;
label_47c0c0:
    // 0x47c0c0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x47c0c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47c0c4:
    // 0x47c0c4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x47c0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_47c0c8:
    // 0x47c0c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x47c0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47c0cc:
    // 0x47c0cc: 0xc11eff0  jal         func_47BFC0
label_47c0d0:
    if (ctx->pc == 0x47C0D0u) {
        ctx->pc = 0x47C0D4u;
        goto label_47c0d4;
    }
    ctx->pc = 0x47C0CCu;
    SET_GPR_U32(ctx, 31, 0x47C0D4u);
    ctx->pc = 0x47BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC0u, 0x47C0CCu, 0x47C0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C0D4u;
label_47c0d4:
    // 0x47c0d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_47c0d8:
    // 0x47c0d8: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x47c0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_47c0dc:
    // 0x47c0dc: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x47c0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_47c0e0:
    // 0x47c0e0: 0x40f809  jalr        $v0
label_47c0e4:
    if (ctx->pc == 0x47C0E4u) {
        ctx->pc = 0x47C0E8u;
        goto label_47c0e8;
    }
    ctx->pc = 0x47C0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47C0E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47C0E0u, 0x47C0E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47C0E8u;
label_47c0e8:
    // 0x47c0e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x47c0e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_47c0ec:
    // 0x47c0ec: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x47c0ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_47c0f0:
    // 0x47c0f0: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
label_47c0f4:
    if (ctx->pc == 0x47C0F4u) {
        ctx->pc = 0x47C0F8u;
        goto label_47c0f8;
    }
    ctx->pc = 0x47C0F0u;
    {
        const bool branch_taken_0x47c0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47c0f0) {
            ctx->pc = 0x47C060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47c060;
        }
    }
    ctx->pc = 0x47C0F8u;
label_47c0f8:
    // 0x47c0f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47c0fc:
    // 0x47c0fc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x47c0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_47c100:
    // 0x47c100: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x47c100u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_47c104:
    // 0x47c104: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x47c104u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47c108:
    // 0x47c108: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47c108u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47c10c:
    // 0x47c10c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47c10cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47c110:
    // 0x47c110: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47c110u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47c114:
    // 0x47c114: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47c114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47c118:
    // 0x47c118: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x47c118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_47c11c:
    // 0x47c11c: 0x3e00008  jr          $ra
label_47c120:
    if (ctx->pc == 0x47C120u) {
        ctx->pc = 0x47C124u;
        goto label_47c124;
    }
    ctx->pc = 0x47C11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47C11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47C124u;
label_47c124:
    // 0x47c124: 0x0  nop
    ctx->pc = 0x47c124u;
    // NOP
label_47c128:
    // 0x47c128: 0x0  nop
    ctx->pc = 0x47c128u;
    // NOP
label_47c12c:
    // 0x47c12c: 0x0  nop
    ctx->pc = 0x47c12cu;
    // NOP
    ctx->pc = 0x47c130u;
}
