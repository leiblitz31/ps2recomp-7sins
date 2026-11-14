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

// Function: sub_0025BC50
// Address: 0x25bc50 - 0x25bd60
void sub_0025BC50_0x25bc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BC50_0x25bc50");
#endif

    ctx->pc = 0x25bc50u;

    // 0x25bc50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25bc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25bc54: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x25bc54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x25bc58: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25bc5c: 0x2c410012  sltiu       $at, $v0, 0x12
    ctx->pc = 0x25bc5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x25bc60: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x25BC60u;
    {
        const bool branch_taken_0x25bc60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bc60) {
            ctx->pc = 0x25BD44u;
            goto label_25bd44;
        }
    }
    ctx->pc = 0x25BC68u;
    // 0x25bc68: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x25bc68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x25bc6c: 0x246389e0  addiu       $v1, $v1, -0x7620
    ctx->pc = 0x25bc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937056));
    // 0x25bc70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25bc70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25bc74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25bc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25bc78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25bc7c: 0x400008  jr          $v0
    ctx->pc = 0x25BC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25BC84u: goto label_25bc84;
            case 0x25BC90u: goto label_25bc90;
            case 0x25BC9Cu: goto label_25bc9c;
            case 0x25BCA8u: goto label_25bca8;
            case 0x25BCB4u: goto label_25bcb4;
            case 0x25BCC0u: goto label_25bcc0;
            case 0x25BCCCu: goto label_25bccc;
            case 0x25BCD8u: goto label_25bcd8;
            case 0x25BCE4u: goto label_25bce4;
            case 0x25BCF0u: goto label_25bcf0;
            case 0x25BCFCu: goto label_25bcfc;
            case 0x25BD08u: goto label_25bd08;
            case 0x25BD14u: goto label_25bd14;
            case 0x25BD20u: goto label_25bd20;
            case 0x25BD2Cu: goto label_25bd2c;
            case 0x25BD38u: goto label_25bd38;
            case 0x25BD44u: goto label_25bd44;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BC7Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25BC84u;
label_25bc84:
    // 0x25bc84: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x25bc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25bc88: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x25BC88u;
    {
        const bool branch_taken_0x25bc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bc88) {
            ctx->pc = 0x25BD48u;
            goto label_25bd48;
        }
    }
    ctx->pc = 0x25BC90u;
label_25bc90:
    // 0x25bc90: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25bc94: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x25BC94u;
    {
        const bool branch_taken_0x25bc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bc94) {
            ctx->pc = 0x25BD48u;
            goto label_25bd48;
        }
    }
    ctx->pc = 0x25BC9Cu;
label_25bc9c:
    // 0x25bc9c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x25bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x25bca0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x25BCA0u;
    {
        const bool branch_taken_0x25bca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bca0) {
            ctx->pc = 0x25BD48u;
            goto label_25bd48;
        }
    }
    ctx->pc = 0x25BCA8u;
label_25bca8:
    // 0x25bca8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25bca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25bcac: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x25BCACu;
    {
        const bool branch_taken_0x25bcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bcac) {
            ctx->pc = 0x25BD48u;
            goto label_25bd48;
        }
    }
    ctx->pc = 0x25BCB4u;
label_25bcb4:
    // 0x25bcb4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25bcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25bcb8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x25BCB8u;
    {
        const bool branch_taken_0x25bcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bcb8) {
            ctx->pc = 0x25BD48u;
            goto label_25bd48;
        }
    }
    ctx->pc = 0x25BCC0u;
label_25bcc0:
    // 0x25bcc0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x25bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x25bcc4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x25BCC4u;
    {
        const bool branch_taken_0x25bcc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bcc4) {
            ctx->pc = 0x25BD48u;
            goto label_25bd48;
        }
    }
    ctx->pc = 0x25BCCCu;
label_25bccc:
    // 0x25bccc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x25bcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x25bcd0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x25BCD0u;
    {
        const bool branch_taken_0x25bcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bcd0) {
            ctx->pc = 0x25BD48u;
            goto label_25bd48;
        }
    }
    ctx->pc = 0x25BCD8u;
label_25bcd8:
    // 0x25bcd8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x25bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x25bcdc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x25BCDCu;
    {
        const bool branch_taken_0x25bcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bcdc) {
            ctx->pc = 0x25BD48u;
            goto label_25bd48;
        }
    }
    ctx->pc = 0x25BCE4u;
label_25bce4:
    // 0x25bce4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x25bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x25bce8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x25BCE8u;
    {
        const bool branch_taken_0x25bce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bce8) {
            ctx->pc = 0x25BD48u;
            goto label_25bd48;
        }
    }
    ctx->pc = 0x25BCF0u;
label_25bcf0:
    // 0x25bcf0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x25bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x25bcf4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x25BCF4u;
    {
        const bool branch_taken_0x25bcf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bcf4) {
            ctx->pc = 0x25BD48u;
            goto label_25bd48;
        }
    }
    ctx->pc = 0x25BCFCu;
label_25bcfc:
    // 0x25bcfc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x25bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25bd00: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x25BD00u;
    {
        const bool branch_taken_0x25bd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bd00) {
            ctx->pc = 0x25BD48u;
            goto label_25bd48;
        }
    }
    ctx->pc = 0x25BD08u;
label_25bd08:
    // 0x25bd08: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x25bd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x25bd0c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25BD0Cu;
    {
        const bool branch_taken_0x25bd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bd0c) {
            ctx->pc = 0x25BD48u;
            goto label_25bd48;
        }
    }
    ctx->pc = 0x25BD14u;
label_25bd14:
    // 0x25bd14: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x25bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x25bd18: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25BD18u;
    {
        const bool branch_taken_0x25bd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bd18) {
            ctx->pc = 0x25BD48u;
            goto label_25bd48;
        }
    }
    ctx->pc = 0x25BD20u;
label_25bd20:
    // 0x25bd20: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x25bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x25bd24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25BD24u;
    {
        const bool branch_taken_0x25bd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bd24) {
            ctx->pc = 0x25BD48u;
            goto label_25bd48;
        }
    }
    ctx->pc = 0x25BD2Cu;
label_25bd2c:
    // 0x25bd2c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x25bd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x25bd30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25BD30u;
    {
        const bool branch_taken_0x25bd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bd30) {
            ctx->pc = 0x25BD48u;
            goto label_25bd48;
        }
    }
    ctx->pc = 0x25BD38u;
label_25bd38:
    // 0x25bd38: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x25bd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x25bd3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25BD3Cu;
    {
        const bool branch_taken_0x25bd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bd3c) {
            ctx->pc = 0x25BD48u;
            goto label_25bd48;
        }
    }
    ctx->pc = 0x25BD44u;
label_25bd44:
    // 0x25bd44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25bd44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25bd48:
    // 0x25bd48: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25bd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25bd4c: 0x3e00008  jr          $ra
    ctx->pc = 0x25BD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25BD54u;
    // 0x25bd54: 0x0  nop
    ctx->pc = 0x25bd54u;
    // NOP
    // 0x25bd58: 0x0  nop
    ctx->pc = 0x25bd58u;
    // NOP
    // 0x25bd5c: 0x0  nop
    ctx->pc = 0x25bd5cu;
    // NOP
    ctx->pc = 0x25bd60u;
}
