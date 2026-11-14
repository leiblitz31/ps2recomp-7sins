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

// Function: sub_00399E58
// Address: 0x399e58 - 0x399f58
void sub_00399E58_0x399e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399E58_0x399e58");
#endif

    switch (ctx->pc) {
        case 0x399ea0u: goto label_399ea0;
        case 0x399eb8u: goto label_399eb8;
        case 0x399ec0u: goto label_399ec0;
        case 0x399ed8u: goto label_399ed8;
        case 0x399ee0u: goto label_399ee0;
        case 0x399ef8u: goto label_399ef8;
        case 0x399f0cu: goto label_399f0c;
        case 0x399f24u: goto label_399f24;
        case 0x399f38u: goto label_399f38;
        default: break;
    }

    ctx->pc = 0x399e58u;

label_399e58:
    // 0x399e58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x399e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x399e5c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x399e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x399e60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x399e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x399e64: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x399e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x399e68: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x399e68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399e6c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x399e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x399e70: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x399e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x399e74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x399e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x399e78: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x399e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x399e7c: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x399E7Cu;
    {
        const bool branch_taken_0x399e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x399E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399E7Cu;
        // 0x399e80: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399e7c) {
            ctx->pc = 0x399F38u;
            goto label_399f38;
        }
    }
    ctx->pc = 0x399E84u;
    // 0x399e84: 0x54620023  bnel        $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x399E84u;
    {
        const bool branch_taken_0x399e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x399e84) {
            ctx->pc = 0x399E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399E84u;
            // 0x399e88: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399F14u;
            goto label_399f14;
        }
    }
    ctx->pc = 0x399E8Cu;
    // 0x399e8c: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x399e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x399e90: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x399E90u;
    {
        const bool branch_taken_0x399e90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x399e90) {
            ctx->pc = 0x399E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399E90u;
            // 0x399e94: 0x8e500038  lw          $s0, 0x38($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399EA4u;
            goto label_399ea4;
        }
    }
    ctx->pc = 0x399E98u;
    // 0x399e98: 0xc104702  jal         func_411C08
    ctx->pc = 0x399E98u;
    SET_GPR_U32(ctx, 31, 0x399EA0u);
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x399E98u, 0x399EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399EA0u;
label_399ea0:
    // 0x399ea0: 0x8e500038  lw          $s0, 0x38($s2)
    ctx->pc = 0x399ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_399ea4:
    // 0x399ea4: 0x26510038  addiu       $s1, $s2, 0x38
    ctx->pc = 0x399ea4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x399ea8: 0x12110007  beq         $s0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x399EA8u;
    {
        const bool branch_taken_0x399ea8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x399EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399EA8u;
        // 0x399eac: 0x26530040  addiu       $s3, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399ea8) {
            ctx->pc = 0x399EC8u;
            goto label_399ec8;
        }
    }
    ctx->pc = 0x399EB0u;
    // 0x399eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x399eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399eb4: 0x0  nop
    ctx->pc = 0x399eb4u;
    // NOP
label_399eb8:
    // 0x399eb8: 0xc0e7172  jal         func_39C5C8
    ctx->pc = 0x399EB8u;
    SET_GPR_U32(ctx, 31, 0x399EC0u);
    ctx->pc = 0x399EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399EB8u;
    // 0x399ebc: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C5C8u, 0x399EB8u, 0x399EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399EC0u;
label_399ec0:
    // 0x399ec0: 0x1611fffd  bne         $s0, $s1, . + 4 + (-0x3 << 2)
    ctx->pc = 0x399EC0u;
    {
        const bool branch_taken_0x399ec0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x399EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399EC0u;
        // 0x399ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399ec0) {
            ctx->pc = 0x399EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399eb8;
        }
    }
    ctx->pc = 0x399EC8u;
label_399ec8:
    // 0x399ec8: 0x8e500040  lw          $s0, 0x40($s2)
    ctx->pc = 0x399ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x399ecc: 0x12130007  beq         $s0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x399ECCu;
    {
        const bool branch_taken_0x399ecc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x399ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399ECCu;
        // 0x399ed0: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399ecc) {
            ctx->pc = 0x399EECu;
            goto label_399eec;
        }
    }
    ctx->pc = 0x399ED4u;
    // 0x399ed4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x399ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_399ed8:
    // 0x399ed8: 0xc0e7192  jal         func_39C648
    ctx->pc = 0x399ED8u;
    SET_GPR_U32(ctx, 31, 0x399EE0u);
    ctx->pc = 0x399EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399ED8u;
    // 0x399edc: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C648u, 0x399ED8u, 0x399EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399EE0u;
label_399ee0:
    // 0x399ee0: 0x5613fffd  bnel        $s0, $s3, . + 4 + (-0x3 << 2)
    ctx->pc = 0x399EE0u;
    {
        const bool branch_taken_0x399ee0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x399ee0) {
            ctx->pc = 0x399EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399EE0u;
            // 0x399ee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399ed8;
        }
    }
    ctx->pc = 0x399EE8u;
    // 0x399ee8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x399ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_399eec:
    // 0x399eec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x399eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399ef0: 0xc104ca6  jal         func_413298
    ctx->pc = 0x399EF0u;
    SET_GPR_U32(ctx, 31, 0x399EF8u);
    ctx->pc = 0x399EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399EF0u;
    // 0x399ef4: 0x2484ae40  addiu       $a0, $a0, -0x51C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x399EF0u, 0x399EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399EF8u;
label_399ef8:
    // 0x399ef8: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x399ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x399efc: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x399EFCu;
    {
        const bool branch_taken_0x399efc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x399F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399EFCu;
        // 0x399f00: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399efc) {
            ctx->pc = 0x399F3Cu;
            goto label_399f3c;
        }
    }
    ctx->pc = 0x399F04u;
    // 0x399f04: 0xc0e4052  jal         func_390148
    ctx->pc = 0x399F04u;
    SET_GPR_U32(ctx, 31, 0x399F0Cu);
    ctx->pc = 0x390148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390148u, 0x399F04u, 0x399F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399F0Cu;
label_399f0c:
    // 0x399f0c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x399F0Cu;
    {
        const bool branch_taken_0x399f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399F0Cu;
        // 0x399f10: 0xae400078  sw          $zero, 0x78($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399f0c) {
            ctx->pc = 0x399F38u;
            goto label_399f38;
        }
    }
    ctx->pc = 0x399F14u;
label_399f14:
    // 0x399f14: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x399F14u;
    {
        const bool branch_taken_0x399f14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x399f14) {
            ctx->pc = 0x399F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399F14u;
            // 0x399f18: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399F28u;
            goto label_399f28;
        }
    }
    ctx->pc = 0x399F1Cu;
    // 0x399f1c: 0xc0e6796  jal         func_399E58
    ctx->pc = 0x399F1Cu;
    SET_GPR_U32(ctx, 31, 0x399F24u);
    ctx->pc = 0x399E58u;
    goto label_399e58;
    ctx->pc = 0x399F24u;
label_399f24:
    // 0x399f24: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x399f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_399f28:
    // 0x399f28: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x399F28u;
    {
        const bool branch_taken_0x399f28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x399F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399F28u;
        // 0x399f2c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399f28) {
            ctx->pc = 0x399F3Cu;
            goto label_399f3c;
        }
    }
    ctx->pc = 0x399F30u;
    // 0x399f30: 0xc0e6796  jal         func_399E58
    ctx->pc = 0x399F30u;
    SET_GPR_U32(ctx, 31, 0x399F38u);
    ctx->pc = 0x399E58u;
    goto label_399e58;
    ctx->pc = 0x399F38u;
label_399f38:
    // 0x399f38: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x399f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_399f3c:
    // 0x399f3c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x399f3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x399f40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x399f40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x399f44: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x399f44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x399f48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x399f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x399f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x399F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399F4Cu;
        // 0x399f50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399F54u;
    // 0x399f54: 0x0  nop
    ctx->pc = 0x399f54u;
    // NOP
    ctx->pc = 0x399f58u;
}
