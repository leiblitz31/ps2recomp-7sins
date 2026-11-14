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

// Function: sub_00389EB8
// Address: 0x389eb8 - 0x389f68
void sub_00389EB8_0x389eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389EB8_0x389eb8");
#endif

    switch (ctx->pc) {
        case 0x389eb8u: goto label_389eb8;
        case 0x389ebcu: goto label_389ebc;
        case 0x389ec0u: goto label_389ec0;
        case 0x389ec4u: goto label_389ec4;
        case 0x389ec8u: goto label_389ec8;
        case 0x389eccu: goto label_389ecc;
        case 0x389ed0u: goto label_389ed0;
        case 0x389ed4u: goto label_389ed4;
        case 0x389ed8u: goto label_389ed8;
        case 0x389edcu: goto label_389edc;
        case 0x389ee0u: goto label_389ee0;
        case 0x389ee4u: goto label_389ee4;
        case 0x389ee8u: goto label_389ee8;
        case 0x389eecu: goto label_389eec;
        case 0x389ef0u: goto label_389ef0;
        case 0x389ef4u: goto label_389ef4;
        case 0x389ef8u: goto label_389ef8;
        case 0x389efcu: goto label_389efc;
        case 0x389f00u: goto label_389f00;
        case 0x389f04u: goto label_389f04;
        case 0x389f08u: goto label_389f08;
        case 0x389f0cu: goto label_389f0c;
        case 0x389f10u: goto label_389f10;
        case 0x389f14u: goto label_389f14;
        case 0x389f18u: goto label_389f18;
        case 0x389f1cu: goto label_389f1c;
        case 0x389f20u: goto label_389f20;
        case 0x389f24u: goto label_389f24;
        case 0x389f28u: goto label_389f28;
        case 0x389f2cu: goto label_389f2c;
        case 0x389f30u: goto label_389f30;
        case 0x389f34u: goto label_389f34;
        case 0x389f38u: goto label_389f38;
        case 0x389f3cu: goto label_389f3c;
        case 0x389f40u: goto label_389f40;
        case 0x389f44u: goto label_389f44;
        case 0x389f48u: goto label_389f48;
        case 0x389f4cu: goto label_389f4c;
        case 0x389f50u: goto label_389f50;
        case 0x389f54u: goto label_389f54;
        case 0x389f58u: goto label_389f58;
        case 0x389f5cu: goto label_389f5c;
        case 0x389f60u: goto label_389f60;
        case 0x389f64u: goto label_389f64;
        default: break;
    }

    ctx->pc = 0x389eb8u;

label_389eb8:
    // 0x389eb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x389eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_389ebc:
    // 0x389ebc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x389ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_389ec0:
    // 0x389ec0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x389ec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_389ec4:
    // 0x389ec4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x389ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_389ec8:
    // 0x389ec8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x389ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_389ecc:
    // 0x389ecc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x389eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_389ed0:
    // 0x389ed0: 0x2484ada0  addiu       $a0, $a0, -0x5260
    ctx->pc = 0x389ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946208));
label_389ed4:
    // 0x389ed4: 0xc104ca6  jal         func_413298
label_389ed8:
    if (ctx->pc == 0x389ED8u) {
        ctx->pc = 0x389ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389ED4u;
        // 0x389ed8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389EDCu;
        goto label_389edc;
    }
    ctx->pc = 0x389ED4u;
    SET_GPR_U32(ctx, 31, 0x389EDCu);
    ctx->pc = 0x389ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389ED4u;
    // 0x389ed8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x389ED4u, 0x389EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389EDCu;
label_389edc:
    // 0x389edc: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x389edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_389ee0:
    // 0x389ee0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_389ee4:
    if (ctx->pc == 0x389EE4u) {
        ctx->pc = 0x389EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389EE0u;
        // 0x389ee4: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389EE8u;
        goto label_389ee8;
    }
    ctx->pc = 0x389EE0u;
    {
        const bool branch_taken_0x389ee0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x389ee0) {
            ctx->pc = 0x389EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x389EE0u;
            // 0x389ee4: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x389EF4u;
            goto label_389ef4;
        }
    }
    ctx->pc = 0x389EE8u;
label_389ee8:
    // 0x389ee8: 0xc104702  jal         func_411C08
label_389eec:
    if (ctx->pc == 0x389EECu) {
        ctx->pc = 0x389EF0u;
        goto label_389ef0;
    }
    ctx->pc = 0x389EE8u;
    SET_GPR_U32(ctx, 31, 0x389EF0u);
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x389EE8u, 0x389EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389EF0u;
label_389ef0:
    // 0x389ef0: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x389ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_389ef4:
    // 0x389ef4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_389ef8:
    if (ctx->pc == 0x389EF8u) {
        ctx->pc = 0x389EFCu;
        goto label_389efc;
    }
    ctx->pc = 0x389EF4u;
    {
        const bool branch_taken_0x389ef4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x389ef4) {
            ctx->pc = 0x389F28u;
            goto label_389f28;
        }
    }
    ctx->pc = 0x389EFCu;
label_389efc:
    // 0x389efc: 0xc0e3414  jal         func_38D050
label_389f00:
    if (ctx->pc == 0x389F00u) {
        ctx->pc = 0x389F04u;
        goto label_389f04;
    }
    ctx->pc = 0x389EFCu;
    SET_GPR_U32(ctx, 31, 0x389F04u);
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x389EFCu, 0x389F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389F04u;
label_389f04:
    // 0x389f04: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x389f04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_389f08:
    // 0x389f08: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_389f0c:
    if (ctx->pc == 0x389F0Cu) {
        ctx->pc = 0x389F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389F08u;
        // 0x389f0c: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389F10u;
        goto label_389f10;
    }
    ctx->pc = 0x389F08u;
    {
        const bool branch_taken_0x389f08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x389F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389F08u;
        // 0x389f0c: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389f08) {
            ctx->pc = 0x389F28u;
            goto label_389f28;
        }
    }
    ctx->pc = 0x389F10u;
label_389f10:
    // 0x389f10: 0xc0e6ea2  jal         func_39BA88
label_389f14:
    if (ctx->pc == 0x389F14u) {
        ctx->pc = 0x389F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389F10u;
        // 0x389f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389F18u;
        goto label_389f18;
    }
    ctx->pc = 0x389F10u;
    SET_GPR_U32(ctx, 31, 0x389F18u);
    ctx->pc = 0x389F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389F10u;
    // 0x389f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BA88u, 0x389F10u, 0x389F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389F18u;
label_389f18:
    // 0x389f18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_389f1c:
    if (ctx->pc == 0x389F1Cu) {
        ctx->pc = 0x389F20u;
        goto label_389f20;
    }
    ctx->pc = 0x389F18u;
    {
        const bool branch_taken_0x389f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x389f18) {
            ctx->pc = 0x389F28u;
            goto label_389f28;
        }
    }
    ctx->pc = 0x389F20u;
label_389f20:
    // 0x389f20: 0xc106794  jal         func_419E50
label_389f24:
    if (ctx->pc == 0x389F24u) {
        ctx->pc = 0x389F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389F20u;
        // 0x389f24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389F28u;
        goto label_389f28;
    }
    ctx->pc = 0x389F20u;
    SET_GPR_U32(ctx, 31, 0x389F28u);
    ctx->pc = 0x389F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389F20u;
    // 0x389f24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x389F20u, 0x389F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389F28u;
label_389f28:
    // 0x389f28: 0xc1083c6  jal         func_420F18
label_389f2c:
    if (ctx->pc == 0x389F2Cu) {
        ctx->pc = 0x389F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389F28u;
        // 0x389f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389F30u;
        goto label_389f30;
    }
    ctx->pc = 0x389F28u;
    SET_GPR_U32(ctx, 31, 0x389F30u);
    ctx->pc = 0x389F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389F28u;
    // 0x389f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420F18u, 0x389F28u, 0x389F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389F30u;
label_389f30:
    // 0x389f30: 0x8f83bd20  lw          $v1, -0x42E0($gp)
    ctx->pc = 0x389f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950176)));
label_389f34:
    // 0x389f34: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x389f34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_389f38:
    // 0x389f38: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x389f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_389f3c:
    // 0x389f3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x389f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_389f40:
    // 0x389f40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x389f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_389f44:
    // 0x389f44: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x389f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_389f48:
    // 0x389f48: 0x40f809  jalr        $v0
label_389f4c:
    if (ctx->pc == 0x389F4Cu) {
        ctx->pc = 0x389F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389F48u;
        // 0x389f4c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389F50u;
        goto label_389f50;
    }
    ctx->pc = 0x389F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x389F50u);
        ctx->pc = 0x389F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389F48u;
        // 0x389f4c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389F48u, 0x389F50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x389F50u;
label_389f50:
    // 0x389f50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x389f50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_389f54:
    // 0x389f54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x389f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_389f58:
    // 0x389f58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x389f58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_389f5c:
    // 0x389f5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x389f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_389f60:
    // 0x389f60: 0x3e00008  jr          $ra
label_389f64:
    if (ctx->pc == 0x389F64u) {
        ctx->pc = 0x389F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389F60u;
        // 0x389f64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389F68u;
        goto label_fallthrough_0x389f60;
    }
    ctx->pc = 0x389F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389F60u;
        // 0x389f64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x389f60:
    ctx->pc = 0x389F68u;
}
