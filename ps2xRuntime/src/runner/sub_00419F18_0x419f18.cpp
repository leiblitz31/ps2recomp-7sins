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

// Function: sub_00419F18
// Address: 0x419f18 - 0x419fd8
void sub_00419F18_0x419f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419F18_0x419f18");
#endif

    switch (ctx->pc) {
        case 0x419f18u: goto label_419f18;
        case 0x419f1cu: goto label_419f1c;
        case 0x419f20u: goto label_419f20;
        case 0x419f24u: goto label_419f24;
        case 0x419f28u: goto label_419f28;
        case 0x419f2cu: goto label_419f2c;
        case 0x419f30u: goto label_419f30;
        case 0x419f34u: goto label_419f34;
        case 0x419f38u: goto label_419f38;
        case 0x419f3cu: goto label_419f3c;
        case 0x419f40u: goto label_419f40;
        case 0x419f44u: goto label_419f44;
        case 0x419f48u: goto label_419f48;
        case 0x419f4cu: goto label_419f4c;
        case 0x419f50u: goto label_419f50;
        case 0x419f54u: goto label_419f54;
        case 0x419f58u: goto label_419f58;
        case 0x419f5cu: goto label_419f5c;
        case 0x419f60u: goto label_419f60;
        case 0x419f64u: goto label_419f64;
        case 0x419f68u: goto label_419f68;
        case 0x419f6cu: goto label_419f6c;
        case 0x419f70u: goto label_419f70;
        case 0x419f74u: goto label_419f74;
        case 0x419f78u: goto label_419f78;
        case 0x419f7cu: goto label_419f7c;
        case 0x419f80u: goto label_419f80;
        case 0x419f84u: goto label_419f84;
        case 0x419f88u: goto label_419f88;
        case 0x419f8cu: goto label_419f8c;
        case 0x419f90u: goto label_419f90;
        case 0x419f94u: goto label_419f94;
        case 0x419f98u: goto label_419f98;
        case 0x419f9cu: goto label_419f9c;
        case 0x419fa0u: goto label_419fa0;
        case 0x419fa4u: goto label_419fa4;
        case 0x419fa8u: goto label_419fa8;
        case 0x419facu: goto label_419fac;
        case 0x419fb0u: goto label_419fb0;
        case 0x419fb4u: goto label_419fb4;
        case 0x419fb8u: goto label_419fb8;
        case 0x419fbcu: goto label_419fbc;
        case 0x419fc0u: goto label_419fc0;
        case 0x419fc4u: goto label_419fc4;
        case 0x419fc8u: goto label_419fc8;
        case 0x419fccu: goto label_419fcc;
        case 0x419fd0u: goto label_419fd0;
        case 0x419fd4u: goto label_419fd4;
        default: break;
    }

    ctx->pc = 0x419f18u;

label_419f18:
    // 0x419f18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x419f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_419f1c:
    // 0x419f1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x419f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_419f20:
    // 0x419f20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x419f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_419f24:
    // 0x419f24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x419f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_419f28:
    // 0x419f28: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x419f28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_419f2c:
    // 0x419f2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x419f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_419f30:
    // 0x419f30: 0xc104ca6  jal         func_413298
label_419f34:
    if (ctx->pc == 0x419F34u) {
        ctx->pc = 0x419F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419F30u;
        // 0x419f34: 0x2484c9c8  addiu       $a0, $a0, -0x3638 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419F38u;
        goto label_419f38;
    }
    ctx->pc = 0x419F30u;
    SET_GPR_U32(ctx, 31, 0x419F38u);
    ctx->pc = 0x419F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419F30u;
    // 0x419f34: 0x2484c9c8  addiu       $a0, $a0, -0x3638 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x419F30u, 0x419F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419F38u;
label_419f38:
    // 0x419f38: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x419f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_419f3c:
    // 0x419f3c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_419f40:
    if (ctx->pc == 0x419F40u) {
        ctx->pc = 0x419F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419F3Cu;
        // 0x419f40: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419F44u;
        goto label_419f44;
    }
    ctx->pc = 0x419F3Cu;
    {
        const bool branch_taken_0x419f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x419f3c) {
            ctx->pc = 0x419F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x419F3Cu;
            // 0x419f40: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x419F50u;
            goto label_419f50;
        }
    }
    ctx->pc = 0x419F44u;
label_419f44:
    // 0x419f44: 0xc1066de  jal         func_419B78
label_419f48:
    if (ctx->pc == 0x419F48u) {
        ctx->pc = 0x419F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419F44u;
        // 0x419f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419F4Cu;
        goto label_419f4c;
    }
    ctx->pc = 0x419F44u;
    SET_GPR_U32(ctx, 31, 0x419F4Cu);
    ctx->pc = 0x419F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419F44u;
    // 0x419f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419B78u, 0x419F44u, 0x419F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419F4Cu;
label_419f4c:
    // 0x419f4c: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x419f4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_419f50:
    // 0x419f50: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x419f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_419f54:
    // 0x419f54: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_419f58:
    if (ctx->pc == 0x419F58u) {
        ctx->pc = 0x419F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419F54u;
        // 0x419f58: 0x8e020098  lw          $v0, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419F5Cu;
        goto label_419f5c;
    }
    ctx->pc = 0x419F54u;
    {
        const bool branch_taken_0x419f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x419f54) {
            ctx->pc = 0x419F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x419F54u;
            // 0x419f58: 0x8e020098  lw          $v0, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x419F78u;
            goto label_419f78;
        }
    }
    ctx->pc = 0x419F5Cu;
label_419f5c:
    // 0x419f5c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x419f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_419f60:
    // 0x419f60: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x419f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_419f64:
    // 0x419f64: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x419f64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_419f68:
    // 0x419f68: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x419f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_419f6c:
    // 0x419f6c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x419f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_419f70:
    // 0x419f70: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x419f70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_419f74:
    // 0x419f74: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x419f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_419f78:
    // 0x419f78: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_419f7c:
    if (ctx->pc == 0x419F7Cu) {
        ctx->pc = 0x419F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419F78u;
        // 0x419f7c: 0x8f83be00  lw          $v1, -0x4200($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419F80u;
        goto label_419f80;
    }
    ctx->pc = 0x419F78u;
    {
        const bool branch_taken_0x419f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x419F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419F78u;
        // 0x419f7c: 0x8f83be00  lw          $v1, -0x4200($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419f78) {
            ctx->pc = 0x419FA8u;
            goto label_419fa8;
        }
    }
    ctx->pc = 0x419F80u;
label_419f80:
    // 0x419f80: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x419f80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_419f84:
    // 0x419f84: 0x0  nop
    ctx->pc = 0x419f84u;
    // NOP
label_419f88:
    // 0x419f88: 0x8c42009c  lw          $v0, 0x9C($v0)
    ctx->pc = 0x419f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_419f8c:
    // 0x419f8c: 0x0  nop
    ctx->pc = 0x419f8cu;
    // NOP
label_419f90:
    // 0x419f90: 0x0  nop
    ctx->pc = 0x419f90u;
    // NOP
label_419f94:
    // 0x419f94: 0x0  nop
    ctx->pc = 0x419f94u;
    // NOP
label_419f98:
    // 0x419f98: 0x0  nop
    ctx->pc = 0x419f98u;
    // NOP
label_419f9c:
    // 0x419f9c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_419fa0:
    if (ctx->pc == 0x419FA0u) {
        ctx->pc = 0x419FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419F9Cu;
        // 0x419fa0: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419FA4u;
        goto label_419fa4;
    }
    ctx->pc = 0x419F9Cu;
    {
        const bool branch_taken_0x419f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x419f9c) {
            ctx->pc = 0x419FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x419F9Cu;
            // 0x419fa0: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x419F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_419f88;
        }
    }
    ctx->pc = 0x419FA4u;
label_419fa4:
    // 0x419fa4: 0x8f83be00  lw          $v1, -0x4200($gp)
    ctx->pc = 0x419fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950400)));
label_419fa8:
    // 0x419fa8: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x419fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_419fac:
    // 0x419fac: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x419facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_419fb0:
    // 0x419fb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x419fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_419fb4:
    // 0x419fb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x419fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_419fb8:
    // 0x419fb8: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x419fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_419fbc:
    // 0x419fbc: 0x40f809  jalr        $v0
label_419fc0:
    if (ctx->pc == 0x419FC0u) {
        ctx->pc = 0x419FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419FBCu;
        // 0x419fc0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419FC4u;
        goto label_419fc4;
    }
    ctx->pc = 0x419FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x419FC4u);
        ctx->pc = 0x419FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419FBCu;
        // 0x419fc0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419FBCu, 0x419FC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x419FC4u;
label_419fc4:
    // 0x419fc4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x419fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_419fc8:
    // 0x419fc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x419fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_419fcc:
    // 0x419fcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x419fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_419fd0:
    // 0x419fd0: 0x3e00008  jr          $ra
label_419fd4:
    if (ctx->pc == 0x419FD4u) {
        ctx->pc = 0x419FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419FD0u;
        // 0x419fd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419FD8u;
        goto label_fallthrough_0x419fd0;
    }
    ctx->pc = 0x419FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419FD0u;
        // 0x419fd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x419fd0:
    ctx->pc = 0x419FD8u;
}
